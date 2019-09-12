#include <vtkSmartPointer.h>
#include <vtkFillHolesFilter.h>
#include <vtkPolyDataNormals.h>
#include <vtkCleanPolyData.h>

#include <vtkSelectionNode.h>
#include <vtkUnstructuredGrid.h>
#include <vtkPolyData.h>
#include <vtkPointData.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkRenderer.h>
#include <vtkSelection.h>
#include <vtkSelectionNode.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkCamera.h>
#include <vtkProperty.h>
#include <vtkExtractSelection.h>
#include <vtkDataSetSurfaceFilter.h>
#include <vtkXMLUnstructuredGridReader.h>

#include <vtkBYUReader.h>
#include <vtkOBJReader.h>
#include <vtkPLYReader.h>
#include <vtkPolyDataReader.h>
#include <vtksys/SystemTools.hxx>
#include <vtkGeometryFilter.h>

#include <vtkNamedColors.h>

#include <vtkImageData.h>
#include <vtkPolyDataToImageStencil.h>
#include <vtkImageStencilToImage.h>


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

vtkSmartPointer<vtkPolyData> obtainClosedPolyData(vtkSmartPointer<vtkUnstructuredGrid> unstructuredGrid)
{
  vtkSmartPointer<vtkGeometryFilter> geometryFilter = 
  vtkSmartPointer<vtkGeometryFilter>::New();

  geometryFilter->SetInputData(unstructuredGrid);
  geometryFilter->Update();

  vtkSmartPointer<vtkPolyData> input = geometryFilter->GetOutput();

  vtkSmartPointer<vtkNamedColors> colors =
    vtkSmartPointer<vtkNamedColors>::New();

  vtkSmartPointer<vtkFillHolesFilter> fillHolesFilter =
    vtkSmartPointer<vtkFillHolesFilter>::New();
  fillHolesFilter->SetInputData(input);
  fillHolesFilter->SetHoleSize(100000.0);
  fillHolesFilter->Update();

  vtkSmartPointer<vtkPolyData> output = fillHolesFilter->GetOutput();

  return output;
}


int main(int argc, char *argv[])
{

  const char *fileName = "../data/clippedData.vtu";

  vtkSmartPointer<vtkXMLUnstructuredGridReader> reader = 
      vtkSmartPointer<vtkXMLUnstructuredGridReader>::New();
  reader->SetFileName(fileName);

   reader->Update();

  vtkSmartPointer<vtkUnstructuredGrid> unstructuredGrid =
    reader->GetOutput();

  vtkSmartPointer<vtkPolyData> output = obtainClosedPolyData(unstructuredGrid);



  std::cout << "Output has " << output->GetNumberOfPoints() << " points." << std::endl;

  double volume = obtainVolumeFromClosedMesh(output, .0625);

  cout << "The total volume is: " << volume << endl;

  // // Visualize
  // // Define viewport ranges
  // // (xmin, ymin, xmax, ymax)
  // double leftViewport[4] = {0.0, 0.0, 0.5, 1.0};
  // double rightViewport[4] = {0.5, 0.0, 1.0, 1.0};

  // // Create a mapper and actor
  // vtkSmartPointer<vtkPolyDataMapper> originalMapper =
  //   vtkSmartPointer<vtkPolyDataMapper>::New();
  // originalMapper->SetInputData(input);

  // vtkSmartPointer<vtkProperty> backfaceProp =
  //   vtkSmartPointer<vtkProperty>::New();
  // backfaceProp->SetDiffuseColor(colors->GetColor3d("Banana").GetData());

  // vtkSmartPointer<vtkActor> originalActor =
  //   vtkSmartPointer<vtkActor>::New();
  // originalActor->SetMapper(originalMapper);
  // originalActor->SetBackfaceProperty(backfaceProp);
  // originalActor->GetProperty()->SetDiffuseColor(
  //   colors->GetColor3d("Flesh").GetData());

  // vtkSmartPointer<vtkPolyDataMapper> filledMapper =
  //   vtkSmartPointer<vtkPolyDataMapper>::New();
  // filledMapper->SetInputData(fillHolesFilter->GetOutput());

  // vtkSmartPointer<vtkActor> filledActor =
  //   vtkSmartPointer<vtkActor>::New();
  // filledActor->SetMapper(filledMapper);
  // filledActor->GetProperty()->SetDiffuseColor(
  //   colors->GetColor3d("Flesh").GetData());
  // filledActor->SetBackfaceProperty(backfaceProp);

  // // Create a renderer, render window, and interactor
  // vtkSmartPointer<vtkRenderer> leftRenderer =
  //   vtkSmartPointer<vtkRenderer>::New();
  // leftRenderer->SetViewport(leftViewport);

  // vtkSmartPointer<vtkRenderer> rightRenderer =
  //   vtkSmartPointer<vtkRenderer>::New();
  // rightRenderer->SetViewport(rightViewport);

  // vtkSmartPointer<vtkRenderWindow> renderWindow =
  //   vtkSmartPointer<vtkRenderWindow>::New();
  // renderWindow->SetSize(600,300);

  // renderWindow->AddRenderer(leftRenderer);
  // renderWindow->AddRenderer(rightRenderer);

  // vtkSmartPointer<vtkRenderWindowInteractor> renderWindowInteractor =
  //   vtkSmartPointer<vtkRenderWindowInteractor>::New();
  // renderWindowInteractor->SetRenderWindow(renderWindow);

  // // Add the actor to the scene
  // leftRenderer->AddActor(originalActor);
  // rightRenderer->AddActor(filledActor);
  // leftRenderer->SetBackground(colors->GetColor3d("PaleGreen").GetData());

  // leftRenderer->GetActiveCamera()->SetPosition(0, -1, 0);
  // leftRenderer->GetActiveCamera()->SetFocalPoint(0, 0, 0);
  // leftRenderer->GetActiveCamera()->SetViewUp(0, 0, 1);
  // leftRenderer->GetActiveCamera()->Azimuth(30);
  // leftRenderer->GetActiveCamera()->Elevation(30);

  // leftRenderer->ResetCamera();

  // rightRenderer->SetBackground(colors->GetColor3d("LightGreen").GetData());

  // // Share the camera

  // rightRenderer->SetActiveCamera(leftRenderer->GetActiveCamera());
  // // Render and interact
  // renderWindow->Render();

  // renderWindowInteractor->Start();

  return EXIT_SUCCESS;
}