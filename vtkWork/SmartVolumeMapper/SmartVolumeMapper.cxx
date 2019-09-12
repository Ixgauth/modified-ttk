#include <vtkSmartPointer.h>
#include <vtkSphere.h>
#include <vtkSampleFunction.h>
#include <vtkSmartVolumeMapper.h>
#include <vtkColorTransferFunction.h>
#include <vtkPiecewiseFunction.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkVolumeProperty.h>
#include <vtkCamera.h>
#include <vtkImageShiftScale.h>
#include <vtkImageData.h>
#include <vtkPointData.h>
#include <vtkDataArray.h>
#include <vtkXMLImageDataReader.h>

#include <vtkPolyData.h>
#include <vtkSphereSource.h>
#include <vtkMetaImageWriter.h>
#include <vtkPolyDataToImageStencil.h>
#include <vtkImageStencil.h>

static void CreateImageData(vtkImageData* im);

int main(int argc, char *argv[])
{

  vtkSmartPointer<vtkSphereSource> sphereSource =
    vtkSmartPointer<vtkSphereSource>::New();
  sphereSource->SetRadius(20);

  //next two lines should basically set how clear the sphere is w/r/t resolution
  sphereSource->SetPhiResolution(30);
  sphereSource->SetThetaResolution(30);

  //should give us a representation of the sphere as a a 3d object that is made up of like lines and trangles etc
  vtkSmartPointer<vtkPolyData> pd = sphereSource->GetOutput();
  sphereSource->Update();

  vtkSmartPointer<vtkImageData> whiteImage =
    vtkSmartPointer<vtkImageData>::New();

  //get us the bounds of the sphere in x,y,z (both min and max)
  double bounds[6];
  pd->GetBounds(bounds);

  //"Set the spacing (width,height,length) of the cubical cells that compose the data set."
  double spacing[3]; // desired volume spacing
  spacing[0] = 0.5;
  spacing[1] = 0.5;
  spacing[2] = 0.5;
  whiteImage->SetSpacing(spacing);

  // compute dimensions (size of max - min in each direction)
  //in this case it will come out to 80 in each direction (they are rounded) as we are using a spacing of size .5
  // which will mean that each unit in the source is equal to two in the image representation
  int dim[3];
  for (int i = 0; i < 3; i++)
  {
    dim[i] = static_cast<int>(ceil((bounds[i * 2 + 1] - bounds[i * 2]) / spacing[i]));
  }
  //these two lines seem to be doing the same thing lol
  //we set the dimensions to be from 0 -> the found max-min in a given direction
  whiteImage->SetDimensions(dim);
  whiteImage->SetExtent(0, dim[0] - 1, 0, dim[1] - 1, 0, dim[2] - 1);

   //set this origin variable to be just off the most negative portion of the sphere (idk why)
  double origin[3];
  origin[0] = bounds[0] + spacing[0] / 2;
  origin[1] = bounds[2] + spacing[1] / 2;
  origin[2] = bounds[4] + spacing[2] / 2;

  whiteImage->SetOrigin(origin);

  //'allocate the point scalars for this dataset' 
  whiteImage->AllocateScalars(VTK_UNSIGNED_CHAR,1);

  // these two lines should set the different color values that will set if you are in or out of the shape
  //white if in black if outside the volume
  unsigned char inval = 255;
  unsigned char outval = 0;

  //'Determine the number of points composing the dataset.'
  //total number of points in the white image (80*80*80)
  //vtkIdType seems to simply be an integer type that is defined differently (can be 32 or 64 bits)
  vtkIdType count = whiteImage->GetNumberOfPoints();

  //this seems to be setting every single point in the image to white which doesn't make a lot of sense?
  for (vtkIdType i = 0; i < count; ++i)
  {
    whiteImage->GetPointData()->GetScalars()->SetTuple1(i, inval);
  }

  //I believe that this is where we actually start to make a pipeline to find the image's dimensions.

  // polygonal data --> image stencil:
  vtkSmartPointer<vtkPolyDataToImageStencil> pol2stenc =
    vtkSmartPointer<vtkPolyDataToImageStencil>::New();

  //set the sphere to be converted into a stencil as well as the origin and the spacing that we had previously set
  pol2stenc->SetInputData(pd);
  pol2stenc->SetOutputOrigin(origin);
  pol2stenc->SetOutputSpacing(spacing);
  //this should basically set the maximum range that we will be looking at in the polydata - anything outside will not be used
  pol2stenc->SetOutputWholeExtent(whiteImage->GetExtent());
  pol2stenc->Update();

  // cut the corresponding white image and set the background:
  vtkSmartPointer<vtkImageStencil> imgstenc =
    vtkSmartPointer<vtkImageStencil>::New();
  imgstenc->SetInputData(whiteImage);
  //get the sphere image and connect it as the stencil that we want to use to contrast the input background image set above
  imgstenc->SetStencilConnection(pol2stenc->GetOutputPort());
  imgstenc->ReverseStencilOff();
  //should now set the background color to be equal to zero to contrast the 255 of all of the sphere
  imgstenc->SetBackgroundValue(outval);
  imgstenc->Update();

  vtkImageData *imageData = imgstenc ->GetOutput();


  vtkSmartPointer<vtkRenderWindow> renWin =
    vtkSmartPointer<vtkRenderWindow>::New();
  vtkSmartPointer<vtkRenderer> ren1 =
    vtkSmartPointer<vtkRenderer>::New();

  renWin->AddRenderer(ren1);

  renWin->SetSize(301,300); // intentional odd and NPOT  width/height

  vtkSmartPointer<vtkRenderWindowInteractor> iren =
    vtkSmartPointer<vtkRenderWindowInteractor>::New();
  iren->SetRenderWindow(renWin);

  renWin->Render(); // make sure we have an OpenGL context.

  vtkSmartPointer<vtkSmartVolumeMapper> volumeMapper =
    vtkSmartPointer<vtkSmartVolumeMapper>::New();
  volumeMapper->SetBlendModeToComposite(); // composite first
  volumeMapper->SetInputData(imageData);

  vtkSmartPointer<vtkVolumeProperty> volumeProperty =
    vtkSmartPointer<vtkVolumeProperty>::New();
  volumeProperty->ShadeOff();
  volumeProperty->SetInterpolationType(VTK_LINEAR_INTERPOLATION);

  vtkSmartPointer<vtkPiecewiseFunction> compositeOpacity =
    vtkSmartPointer<vtkPiecewiseFunction>::New();
  compositeOpacity->AddPoint(0.0,0.0);
  compositeOpacity->AddPoint(80.0,1.0);
  compositeOpacity->AddPoint(80.1,0.0);
  compositeOpacity->AddPoint(255.0,0.0);
  volumeProperty->SetScalarOpacity(compositeOpacity); // composite first.

  vtkSmartPointer<vtkColorTransferFunction> color =
    vtkSmartPointer<vtkColorTransferFunction>::New();
  color->AddRGBPoint(0.0  ,0.0,0.0,1.0);
  color->AddRGBPoint(40.0  ,1.0,0.0,0.0);
  color->AddRGBPoint(255.0,1.0,1.0,1.0);
  volumeProperty->SetColor(color);

  vtkSmartPointer<vtkVolume> volume =
    vtkSmartPointer<vtkVolume>::New();
  volume->SetMapper(volumeMapper);
  volume->SetProperty(volumeProperty);
  ren1->AddViewProp(volume);
  ren1->ResetCamera();

  // Render composite. In default mode. For coverage.
  renWin->Render();

  // 3D texture mode. For coverage.
#if !defined(VTK_LEGACY_REMOVE) && !defined(VTK_OPENGL2)
  volumeMapper->SetRequestedRenderModeToRayCastAndTexture();
#endif // VTK_LEGACY_REMOVE
  renWin->Render();

  // Software mode, for coverage. It also makes sure we will get the same
  // regression image on all platforms.
  volumeMapper->SetRequestedRenderModeToRayCast();
  renWin->Render();

  iren->Start();

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
        double* pixel = static_cast<double*>(imageData->GetScalarPointer(x, y, z));
        if(pixel[0] > 0)
        {
           cout << pixel[0] << "  ";
          numberOfPointsAboveZero++;
        }
      }
       cout << endl;
    }
     cout << endl;
  }
  cout << numberOfPointsAboveZero << endl;

  return EXIT_SUCCESS;
}
