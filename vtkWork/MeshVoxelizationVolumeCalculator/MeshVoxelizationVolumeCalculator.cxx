#include <vtkSmartPointer.h>
#include <vtkPolyData.h>
#include <vtkImageData.h>
#include <vtkPolyDataToImageStencil.h>
#include <vtkImageStencilToImage.h>
#include <vtkSphereSource.h>
#include <vtkPointData.h>


using namespace std;
/**
 * Method should be used to convert from the input polyData object into an imageData representation which has been voxelized to have all of its voxels that are inside
 * the closed polyData be set to white (255) and all those outside set to black (0).
 *
 * From here, the algorithm should count the voxels in the imageData representation which are white and use this to obtain a close estimation of the volume of the polyData
 * which can be used for vaious purposes.
 *
 * The polyData needs to be a closed mesh in order to allow for the voxelization process to occur. Therefore, one must make the input closed before calling the function.
 *
 * The spacingFactor variable sets the value of spacing which equals 1 in each dimension in the imageData representation. A lower scalar factor will allow for more accurate
 * volume findings but will likely take more time. This option is being put in place to allow for functionality changes in the future based on how long the algorithm takes
 * when performed many times over.
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

  double output = numberOfPointsAboveZero*finalSpaceFactor;

  return output;

}



int main(int, char *[])
{
  //create a new sphere with rad = 20
  vtkSmartPointer<vtkSphereSource> sphereSource =
    vtkSmartPointer<vtkSphereSource>::New();
  sphereSource->SetRadius(5);

  //next two lines should basically set how clear the sphere is w/r/t resolution
  sphereSource->SetPhiResolution(30);
  sphereSource->SetThetaResolution(30);

  //should give us a representation of the sphere as a a 3d object that is made up of like lines and trangles etc
  vtkSmartPointer<vtkPolyData> pd = sphereSource->GetOutput();
  sphereSource->Update();

  double volume = obtainVolumeFromClosedMesh(pd,.25);

  cout << volume << endl;

  return EXIT_SUCCESS;
}


