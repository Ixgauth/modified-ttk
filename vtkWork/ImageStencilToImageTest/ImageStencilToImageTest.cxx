#include <vtkSmartPointer.h>
#include <vtkSphere.h>
#include <vtkSphereSource.h>
#include <vtkImplicitFunctionToImageStencil.h>
#include <vtkImageData.h>

#include <vtkImageStencilToImage.h>
#include <vtkImageViewer.h>
#include <vtkImageViewer2.h>
#include <vtkImageStencilData.h>
#include <vtkRenderWindowInteractor.h>


int main(int argc, char *argv[])
{
	vtkSmartPointer<vtkSphere> sphere =
    	vtkSmartPointer<vtkSphere>::New();

    sphere->SetCenter(2,2, 0);
    sphere->SetRadius(2);

    vtkSmartPointer<vtkImplicitFunctionToImageStencil> functionToStencil =
    	vtkSmartPointer<vtkImplicitFunctionToImageStencil>::New();

    functionToStencil->SetInput(sphere);
    functionToStencil->SetOutputOrigin(0,0,0);
    functionToStencil->SetOutputSpacing(1,1,1);
    functionToStencil->SetOutputWholeExtent(0,4,0,4,0,4);

    vtkSmartPointer<vtkImageStencilToImage> stencilToImage =
    	vtkSmartPointer<vtkImageStencilToImage>::New();

    stencilToImage->SetInputConnection(functionToStencil->GetOutputPort());

    stencilToImage->SetOutsideValue(255);
	stencilToImage->SetInsideValue(0);

	

	// vtkSmartPointer<vtkImageViewer> viewer =
 //    	vtkSmartPointer<vtkImageViewer>::New();


 //    viewer->SetInputConnection(stencilToImage->GetOutputPort());
	// viewer->SetZSlice(0);
	// viewer->SetColorWindow(255);
	// viewer->SetColorLevel(127.5);
	// viewer->Render();

	stencilToImage->Update();

	vtkImageData *imageData = stencilToImage ->GetOutput();


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
	      cout << pixel[0];
	      numberOfPointsAboveZero++;
	    }
	  }
	  cout << endl;
	}
	cout << endl;
	}

	cout << numberOfPointsAboveZero << endl;

	

	// vtkSmartPointer<vtkRenderWindowInteractor> renderWindowInteractor =
 //     vtkSmartPointer<vtkRenderWindowInteractor>::New();

	// viewer->SetupInteractor(renderWindowInteractor);

	// renderWindowInteractor->Start();
	


 	return EXIT_SUCCESS;

    
}