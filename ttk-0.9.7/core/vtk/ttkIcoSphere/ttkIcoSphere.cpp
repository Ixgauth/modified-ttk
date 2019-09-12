#include <ttkIcoSphere.h>

#include <vtkUnstructuredGrid.h>
#include <vtkSmartPointer.h>

using namespace std;
using namespace ttk;

vtkStandardNewMacro(ttkIcoSphere)

int ttkIcoSphere::RequestData(
    vtkInformation* request,
    vtkInformationVector** inputVector,
    vtkInformationVector* outputVector
){
    Memory m;
    Timer t;

    // Print status
    {
        stringstream msg;
        msg<<"================================================================================"<<endl;
        msg<<"[ttkIcoSphere] RequestData"<<endl;
        dMsg(cout, msg.str(), timeMsg);
    }

    // Prepare input and output
    vtkInformation* outInfo = outputVector->GetInformationObject(0);
    auto unstructuredGrid = vtkUnstructuredGrid::SafeDownCast( outInfo->Get(vtkDataObject::DATA_OBJECT()) );

    // Set Wrapper
    icoSphere_.setWrapper(this);

    vector< tuple<float,float,float> > vertices;
    vector< tuple<long long,long long,long long> > triangles;

    icoSphere_.generate(
        this->Subdivisions,
        this->Radius,
        this->Center,
        vertices,
        triangles
    );

    auto mesh = vtkSmartPointer<vtkUnstructuredGrid>::New();

    // Create points
    {
        size_t n = vertices.size();

        auto points = vtkSmartPointer<vtkPoints>::New();
        points->SetNumberOfPoints( n );

        auto pointCoords = (float*) points->GetVoidPointer(0);
        size_t i=0;
        for(auto& x: vertices){
            pointCoords[i++] = get<0>(x);
            pointCoords[i++] = get<1>(x);
            pointCoords[i++] = get<2>(x);
        }

        unstructuredGrid->SetPoints( points );
    }

    // Create cells
    {
        size_t n = triangles.size();

        auto cells = vtkSmartPointer<vtkIdTypeArray>::New();
        cells->SetNumberOfValues(n + n * 3);
        auto cellIds = (vtkIdType*) cells->GetVoidPointer(0);

        size_t q=0;
        for(size_t i=0; i<triangles.size(); i++){
            auto& t = triangles[i];
            cellIds[q++] = 3;
            cellIds[q++] = (vtkIdType) get<0>(t);
            cellIds[q++] = (vtkIdType) get<1>(t);
            cellIds[q++] = (vtkIdType) get<2>(t);
        }

        auto cellArray = vtkSmartPointer<vtkCellArray>::New();
        cellArray->SetCells(n, cells);
        unstructuredGrid->SetCells(VTK_TRIANGLE, cellArray);
    }


    // Print status
    {
        stringstream msg;
        msg << "[ttkIcoSphere] --------------------------------------" << endl
            << "[ttkIcoSphere]   time: " << t.getElapsedTime() << " s" << endl
            << "[ttkIcoSphere] memory: " << m.getElapsedUsage() << " MB" << endl;
        dMsg(cout, msg.str(), memoryMsg);
    }

    return 1;
}
