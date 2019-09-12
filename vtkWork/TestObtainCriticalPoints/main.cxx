#include <ttkTopologicalSimplificationHelper.h>
#include <ttkScalarFieldCriticalPoints.h>

#include <vtkSmartPointer.h>
#include <vtkXMLUnstructuredGridReader.h>
#include <vtkDataSet.h>
#include <vtkThreshold.h>
#include <vtkUnstructuredGrid.h>
#include <vtkThresholdPoints.h>
#include <vtkPolyData.h>
#include <vtkFloatArray.h>
#include <vtkThresholdPoints.h>
#include <vtkPolyDataToImageStencil.h>
#include <vtkImageStencilToImage.h>
#include <vtkImageData.h>
#include <vtkFillHolesFilter.h>
#include <vtkGeometryFilter.h>
#include <vtkXMLUnstructuredGridWriter.h>
#include <vtkProgrammableFilter.h>
#include <vtkPointData.h>
#include <string>


/*
 This method will be used to convert input poly data (which should be closed by the point that it is input) into an output double that represents the volume of the poly data.
 This will be done through a mesh voxelization program which should intake the polydata and output an image stencil and then convert the stencil to image data. In this image data
 state, all chunks inside will be white and all outside chunks will be set to black. From here, it is a simple project of iterating through all of the voxels to check if they are 
 white or black and returning the number which is white as the total volume. 

 I use a spacing factor so that a user can input the size of one block in each dimension. This is theorectically in the attempt to conform to the normal size of data down the line.
 The more compacted the data is should theoretically lead to using a smaller spacing factor. Will have to be tested on a full system.
*/
double obtainVolumeFromClosedMesh(vtkSmartPointer<vtkPolyData> polyData, double spacingFactor)
{
   vtkSmartPointer<vtkImageData> whiteImage =
    vtkSmartPointer<vtkImageData>::New();

  // get us the bounds of the sphere in x,y,z (both min and max)
  double bounds[6];
  polyData->GetBounds(bounds);

  double spacing[3];
  spacing[0] =  spacingFactor;
  spacing[1] =  spacingFactor;
  spacing[2] =  spacingFactor;
  whiteImage->SetSpacing(spacing);
  double finalSpaceFactor = spacing[0]*spacing[1]*spacing[2];

  // compute dimensions (size of max - min in each direction)
  int dim[3];
  for (int i = 0; i < 3; i++)
  {
    dim[i] = static_cast<int>(ceil((bounds[i * 2 + 1] - bounds[i * 2]) / spacing[i]));
  }

  whiteImage->SetDimensions(dim);
  whiteImage->SetExtent(0, dim[0] - 1, 0, dim[1] - 1, 0, dim[2] - 1);

  double origin[3];
  origin[0] = bounds[0] + spacing[0] / 2;
  origin[1] = bounds[2] + spacing[1] / 2;
  origin[2] = bounds[4] + spacing[2] / 2;

  whiteImage->SetOrigin(origin);
  whiteImage->AllocateScalars(VTK_UNSIGNED_CHAR,1);

  //white if in black if outside the volume
  unsigned char inval = 255;
  unsigned char outval = 0;

  vtkIdType count = whiteImage->GetNumberOfPoints();

  for (vtkIdType i = 0; i < count; ++i)
  {
    whiteImage->GetPointData()->GetScalars()->SetTuple1(i, inval);
  }


  vtkSmartPointer<vtkPolyDataToImageStencil> pol2stenc =
    vtkSmartPointer<vtkPolyDataToImageStencil>::New();

  pol2stenc->SetInputData(polyData);
  pol2stenc->SetOutputOrigin(origin);
  pol2stenc->SetOutputSpacing(spacing);
  pol2stenc->SetOutputWholeExtent(whiteImage->GetExtent());
  pol2stenc->Update();

  vtkSmartPointer<vtkImageStencilToImage> sten2im =
    vtkSmartPointer<vtkImageStencilToImage>::New();

  vtkSmartPointer<vtkImageData> imageData =
    vtkSmartPointer<vtkImageData>::New();


  sten2im->SetInputConnection(pol2stenc->GetOutputPort());
  sten2im->SetOutsideValue(0);
  sten2im->SetInsideValue(255);
  sten2im->SetOutput(imageData);
  sten2im->Update();

  int* dimensions = imageData -> GetDimensions();

  cout << "Dimensions:  x: " << dimensions[0] << " y: " << dimensions[1] << " z: " << dimensions[2] << endl;

  cout << "Number of points: " << imageData -> GetNumberOfPoints() << endl;
  cout << "Number of cells: " << imageData->GetNumberOfPoints() << endl;

  int numberOfPointsAboveZero = 0;

  for(int z = 0; z < dimensions[2]; z++)
  {
    for(int y = 0; y < dimensions[1]; y++)
    {
      for(int x = 0; x < dimensions[0]; x++)
      {
        double pixel = imageData->GetScalarComponentAsDouble(x, y, z, 0);
        if(pixel > 127)
        {
          numberOfPointsAboveZero++;
        }
      }
    }
  }
  cout << numberOfPointsAboveZero << endl;

  double output = numberOfPointsAboveZero*finalSpaceFactor;

  return output;

}

/*
This is a simple class which should take in an unstructured grid and use the fill Holes Filter in order to return a closed poly data which can then be sent through
the mesh voxelization program. It currently needs to use an Unstructured Grid but could theoretically take in a poly data if that is what is called for.
*/
vtkSmartPointer<vtkPolyData> obtainClosedPolyData(vtkSmartPointer<vtkUnstructuredGrid> unstructuredGrid)
{
  vtkSmartPointer<vtkGeometryFilter> geometryFilter = 
  vtkSmartPointer<vtkGeometryFilter>::New();

  geometryFilter->SetInputData(unstructuredGrid);
  geometryFilter->Update();

  vtkSmartPointer<vtkPolyData> input = geometryFilter->GetOutput();

  vtkSmartPointer<vtkFillHolesFilter> fillHolesFilter =
    vtkSmartPointer<vtkFillHolesFilter>::New();
  fillHolesFilter->SetInputData(input);
  fillHolesFilter->SetHoleSize(100000.0);
  fillHolesFilter->Update();

  vtkSmartPointer<vtkPolyData> output = fillHolesFilter->GetOutput();

  return output;
}


/*
Test main method which should intake data from the file path shown below and should find all of the critical points of that data and send them each individually through the topological
simplification helper filter and get the output of that and run it through the above methods to output a volume for each of the maximums. (Changing at the shown point below from
3 to 0 would work on maxima. We don't want to change to 1 or 2 as those are saddle points and wouldn't return useful results.)
*/
int main(int argc, char *argv[])
{
	const char *fileName = "../data/multiGaussianFunctionTestData.vtu";

  vtkSmartPointer<vtkXMLUnstructuredGridReader> reader = 
    vtkSmartPointer<vtkXMLUnstructuredGridReader>::New();
	reader->SetFileName(fileName);

	reader->Update();

  vtkSmartPointer<vtkUnstructuredGrid> helperGrid = reader->GetOutput();


	vtkSmartPointer<ttkScalarFieldCriticalPoints> critPointsFilter = 
	  vtkSmartPointer<ttkScalarFieldCriticalPoints>::New();

	critPointsFilter->SetInputConnection(reader->GetOutputPort());

	critPointsFilter->Update();

	vtkSmartPointer<vtkDataSet> critPointsOutput = 
	  critPointsFilter->GetOutput();

	std::cout << "number of critical points " << critPointsOutput->GetNumberOfPoints() << endl;

	vtkSmartPointer<vtkPointData> pd = critPointsOutput->GetPointData();

  vtkSmartPointer<vtkDataArray> vectorField = pd->GetArray(pd->GetArrayName(2));
  vtkSmartPointer<vtkDataArray> criticalType = pd->GetArray(pd->GetArrayName(0));
  vtkSmartPointer<vtkDataArray> scalarValue = pd->GetArray(pd->GetArrayName(4));
  vtkSmartPointer<vtkDataArray> boundary = pd->GetArray(pd->GetArrayName(1));

  for(int i = 0; i < 5; i++)
  {
    cout << pd->GetArrayName(i) << endl;
  }

  double usableCriticals[pd->GetNumberOfTuples()];

  double allCritsVertNumbers[pd->GetNumberOfTuples()];


  for(int j = 0; j < vectorField->GetNumberOfTuples(); j++)
  {
    allCritsVertNumbers[j] = vectorField->GetTuple1(j);

  }

  int counter = 0;

  for(int i = 0; i < pd->GetNumberOfTuples(); i++)
  {
    //critical type is 3 meaning we are working on maxima
    //if we set it to 0 it will be working only on minima
    if(criticalType->GetTuple1(i) == 3)
    {
      cout << "number of points: " << helperGrid->GetNumberOfPoints() << endl;


      cout << "input tuple value " << vectorField->GetTuple1(i) << endl;



      vtkSmartPointer<ttkTopologicalSimplificationHelper> topologicalSimplificationHelper =
        vtkSmartPointer<ttkTopologicalSimplificationHelper>::New();

      vtkSmartPointer<vtkUnstructuredGrid> inputTwo = vtkSmartPointer<vtkUnstructuredGrid>::New();

      critPointsOutput->CopyStructure(inputTwo);

      vtkSmartPointer<vtkDataSet> inputOne = reader->GetOutput();

      topologicalSimplificationHelper->SetInputData(0, inputOne);
      topologicalSimplificationHelper->SetInputData(1, inputTwo);

      double helper[1];
      helper[0] = vectorField->GetTuple1(i);

      topologicalSimplificationHelper->setNumberOfCriticalPoints(pd->GetNumberOfTuples());
      topologicalSimplificationHelper->setInputVerticesNumbers(allCritsVertNumbers);

      topologicalSimplificationHelper->setCriticalPointsToRemove(helper);
      topologicalSimplificationHelper->setNumberOfCriticalPointsToRemove(1);

      topologicalSimplificationHelper->setCriticalType(criticalType->GetTuple1(i));

      topologicalSimplificationHelper->Update();

      vtkSmartPointer<vtkDataSet> simplifiedImage = topologicalSimplificationHelper->GetOutput();

      vtkSmartPointer<vtkUnstructuredGrid> unstructuredGrid = 
        vtkSmartPointer<vtkUnstructuredGrid>::New();

      unstructuredGrid->CopyStructure(simplifiedImage);

      vtkSmartPointer<vtkPolyData> finalOutput = obtainClosedPolyData(unstructuredGrid);

      double volume = obtainVolumeFromClosedMesh(finalOutput, .0625);

      cout << "The total volume is: " << volume << endl;
    }
  }

}