// ClientServer wrapper for vtkSpreadSheetView object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkSpreadSheetView.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkSpreadSheetViewClientServerNewCommand(void* /*ctx*/)
{
  return vtkSpreadSheetView::New();
}


int VTK_EXPORT vtkSpreadSheetViewCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkSpreadSheetView *op = vtkSpreadSheetView::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkSpreadSheetView.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSpreadSheetView  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsTypeOf",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->IsTypeOf(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsA",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->IsA(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SafeDownCast",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkObjectBase  *temp0;
    vtkSpreadSheetView  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObjectBase"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("NewInstance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSpreadSheetView  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("StillRender",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StillRender();
      return 1;
      }
    }
  if (!strcmp("InteractiveRender",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InteractiveRender();
      return 1;
      }
    }
  if (!strcmp("Update",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Update();
      return 1;
      }
    }
  if (!strcmp("SetShowExtractedSelection",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetShowExtractedSelection(temp0);
      return 1;
      }
    }
  if (!strcmp("ShowExtractedSelectionOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ShowExtractedSelectionOn();
      return 1;
      }
    }
  if (!strcmp("ShowExtractedSelectionOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ShowExtractedSelectionOff();
      return 1;
      }
    }
  if (!strcmp("GetShowExtractedSelection",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetShowExtractedSelection();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetGenerateCellConnectivity",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGenerateCellConnectivity(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGenerateCellConnectivity",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetGenerateCellConnectivity();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GenerateCellConnectivityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateCellConnectivityOn();
      return 1;
      }
    }
  if (!strcmp("GenerateCellConnectivityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateCellConnectivityOff();
      return 1;
      }
    }
  if (!strcmp("SetFieldAssociation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFieldAssociation(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFieldAssociation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetFieldAssociation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HideColumnByName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->HideColumnByName(temp0);
      return 1;
      }
    }
  if (!strcmp("IsColumnHiddenByName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->IsColumnHiddenByName(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ClearHiddenColumnsByName",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearHiddenColumnsByName();
      return 1;
      }
    }
  if (!strcmp("HideColumnByLabel",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->HideColumnByLabel(temp0);
      return 1;
      }
    }
  if (!strcmp("IsColumnHiddenByLabel",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->IsColumnHiddenByLabel(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ClearHiddenColumnsByLabel",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearHiddenColumnsByLabel();
      return 1;
      }
    }
  if (!strcmp("GetNumberOfColumns",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetNumberOfColumns();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfRows",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetNumberOfRows();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetColumnName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    const char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetColumnName(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsColumnInternal",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->IsColumnInternal(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsColumnInternal",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->IsColumnInternal(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetColumnLabel",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    const char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetColumnLabel(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetColumnLabel",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    const char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetColumnLabel(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetColumnVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetColumnVisibility(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsRowSelected",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->IsRowSelected(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsAvailable",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->IsAvailable(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetColumnNameToSort",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetColumnNameToSort(temp0);
      return 1;
      }
    }
  if (!strcmp("SetColumnNameToSort",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetColumnNameToSort();
      return 1;
      }
    }
  if (!strcmp("SetComponentToSort",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetComponentToSort(temp0);
      return 1;
      }
    }
  if (!strcmp("SetInvertSortOrder",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInvertSortOrder(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBlockSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBlockSize(temp0);
      return 1;
      }
    }
  if (!strcmp("Export",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCSVExporter  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCSVExporter"))
      {
      temp20 = (op)->Export(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ClearCache",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearCache();
      return 1;
      }
    }
  if (!strcmp("FetchBlockCallback",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    vtkTable  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->FetchBlockCallback(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkPVView";
    if (arlu->HasCommandFunction(commandName) &&
        arlu->CallCommandFunction(commandName, op, method, msg, resultStream)) { return 1; }
  }
  if(resultStream.GetNumberOfMessages() > 0 &&
     resultStream.GetCommand(0) == vtkClientServerStream::Error &&
     resultStream.GetNumberOfArguments(0) > 1)
    {
    /* A superclass wrapper prepared a special message. */
    return 0;
    }
  vtkOStrStreamWrapper vtkmsg;
  vtkmsg << "Object type: vtkSpreadSheetView, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkSpreadSheetView_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkSpreadSheetView", vtkSpreadSheetViewClientServerNewCommand);
    csi->AddCommandFunction("vtkSpreadSheetView", vtkSpreadSheetViewCommand);
    }
}
