#include <vtkSmartPointer.h>
#include <vtkPolyData.h>
#include <vtkImageData.h>
#include <vtkSphereSource.h>
#include <vtkMetaImageWriter.h>
#include <vtkPolyDataToImageStencil.h>
#include <vtkImageStencil.h>
#include <vtkPointData.h>
#include <vtkmetaio/metaImage.h>
#include <vtkIndent.h>
#include <vtkPNMWriter.h>

#include <vtkImageStencilToImage.h>
#include <vtkImageViewer2.h>
#include <vtkImageStencilData.h>


#include <vtkDataSetMapper.h>
#include <vtkActor.h>
#include <vtkRenderWindow.h>
#include <vtkRenderer.h>
#include <vtkRenderWindowInteractor.h>

using namespace std;
/**
 * This program generates a sphere (closed surface, vtkPolyData) and converts it into volume
 * representation (vtkImageData) where the foreground voxels are 1 and the background voxels are
 * 0. Internally vtkPolyDataToImageStencil is utilized. The resultant image is saved to disk
 * in metaimage file format (SphereVolume.mhd).
 * 
 * The basic idea of this from what I can tell is that the vtkImageData is simply an array of points that can 
 * represent an object using that format. We will start with a vtkPolyData which is a representation of an image
 * using lines, polygons and triangles (basically a triangulation of a set of data) and convert that information into 
 * the imageData representation which should allow us to do things like take the volume and the like.
 *
 * The idea I think that we're going to shoot for will be to first do a proof of concept that we can actually obtain
 * the volume of a closed 3d shape and then use it on a random mesh by taking the vtkpolydata representation of that mesh
 * inside of a certain contained coordinate structure and converting it into imagedata. I don't know if this will work but
 * it makes sense to me in theory.
 */
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

  vtkSmartPointer<vtkImageData> whiteImage =
    vtkSmartPointer<vtkImageData>::New();

  //get us the bounds of the sphere in x,y,z (both min and max)
  double bounds[6];
  pd->GetBounds(bounds);

  //"Set the spacing (width,height,length) of the cubical cells that compose the data set."
  double spacing[3]; // desired volume spacing
  spacing[0] = 0.25;
  spacing[1] = 0.25;
  spacing[2] = 0.25;
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

  vtkSmartPointer<vtkImageStencilToImage> sten2im =
    vtkSmartPointer<vtkImageStencilToImage>::New();

  vtkSmartPointer<vtkImageData> imageData =
    vtkSmartPointer<vtkImageData>::New();

  sten2im->SetInputConnection(pol2stenc->GetOutputPort());
  sten2im->SetOutsideValue(0);
  sten2im->SetInsideValue(255);
  sten2im->SetOutput(imageData);
  sten2im->Update();

  // vtkSmartPointer<vtkImageViewer2> viewer =
  //   vtkSmartPointer<vtkImageViewer2>::New();

  // vtkSmartPointer<vtkRenderWindowInteractor> renderWindowInteractor =
  //   vtkSmartPointer<vtkRenderWindowInteractor>::New();

  // viewer->SetInputConnection(sten2im->GetOutputPort());
  // viewer->SetColorWindow(255);
  // viewer->SetColorLevel(127.5);

  // viewer->SetupInteractor(renderWindowInteractor);

  // viewer->Render();

  // // renderWindowInteractor->Start();

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
        if(pixel == 255)
        {

          // cout << pixel[0];
          numberOfPointsAboveZero++;
        }
      }
      // cout << endl;
    }
    // cout << endl;
  }
  cout << numberOfPointsAboveZero << endl;

  // vtkIndent *ind = vtkIndent::New();
  // imgstenc->PrintSelf(cout, *ind);

  // vtkSmartPointer<vtkMetaImageWriter> writer =
  //   vtkSmartPointer<vtkMetaImageWriter>::New();
  // writer->SetFileName("SphereVolume.mhd");
  // writer->SetRAWFileName("SphereVolume.raw");
  // //writer->SetCompression(false);
  // writer->SetInputData(imgstenc->GetOutput());
  // writer->Write();

  return EXIT_SUCCESS;
}
