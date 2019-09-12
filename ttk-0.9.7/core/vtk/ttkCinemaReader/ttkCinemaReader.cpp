#include <ttkCinemaReader.h>

#include <vtkTable.h>
#include <vtkDelimitedTextReader.h>
#include <vtkFieldData.h>
#include <vtkStringArray.h>

using namespace std;
using namespace ttk;

vtkStandardNewMacro(ttkCinemaReader)

int ttkCinemaReader::RequestData (
    vtkInformation* request,
    vtkInformationVector** inputVector,
    vtkInformationVector* outputVector
){
    Timer t;
    Memory m;

    // Print Status
    {
        stringstream msg;
        msg<<"================================================================================"<<endl;
        msg<<"[ttkCinemaReader] RequestData"<<endl;
        dMsg(cout, msg.str(), timeMsg);
    }

    // Read CSV file which is in Spec D format
    auto reader = vtkSmartPointer<vtkDelimitedTextReader>::New();
    reader->SetFileName( (this->DatabasePath+"/data.csv").data() );
    reader->DetectNumericColumnsOn();
    reader->SetHaveHeaders(true);
    reader->SetFieldDelimiterCharacters(",");
    reader->Update();

    // Copy Information to Output
    vtkInformation* outInfo = outputVector->GetInformationObject(0);
    auto outTable = vtkTable::SafeDownCast(outInfo->Get(vtkDataObject::DATA_OBJECT()));
    outTable->ShallowCopy( reader->GetOutput() );

    // Append database path as field data
    auto DatabasePathFD = vtkSmartPointer<vtkStringArray>::New();
    DatabasePathFD->SetName("DatabasePath");
    DatabasePathFD->SetNumberOfValues(1);
    DatabasePathFD->SetValue(0,this->DatabasePath);
    outTable->GetFieldData()->AddArray( DatabasePathFD );

    // Output Performance
    {
        stringstream msg;
        msg << "[ttkCinemaReader]   Time: " << t.getElapsedTime() << " s." << endl;
        msg << "[ttkCinemaReader] Memory: " << m.getElapsedUsage() << " MB." << endl;
        dMsg(cout, msg.str(), memoryMsg);
    }

    return 1;
}
