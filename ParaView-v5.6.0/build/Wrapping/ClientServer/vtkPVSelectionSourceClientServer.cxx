// ClientServer wrapper for vtkPVSelectionSource object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPVSelectionSource.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkPVSelectionSourceClientServerNewCommand(void* /*ctx*/)
{
  return vtkPVSelectionSource::New();
}


int VTK_EXPORT vtkPVSelectionSourceCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkPVSelectionSource *op = vtkPVSelectionSource::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkPVSelectionSource.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPVSelectionSource  *temp20;
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
    vtkPVSelectionSource  *temp20;
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
    vtkPVSelectionSource  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddFrustum",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[32];
    if(msg.GetArgument(0, 2, temp0, 32))
      {
      op->AddFrustum(temp0);
      return 1;
      }
    }
  if (!strcmp("AddGlobalID",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->AddGlobalID(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveAllGlobalIDs",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllGlobalIDs();
      return 1;
      }
    }
  if (!strcmp("AddPedigreeID",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    vtkIdType   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->AddPedigreeID(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RemoveAllPedigreeIDs",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllPedigreeIDs();
      return 1;
      }
    }
  if (!strcmp("AddPedigreeStringID",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    char    *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->AddPedigreeStringID(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RemoveAllPedigreeStringIDs",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllPedigreeStringIDs();
      return 1;
      }
    }
  if (!strcmp("AddID",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    vtkIdType   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->AddID(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RemoveAllIDs",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllIDs();
      return 1;
      }
    }
  if (!strcmp("AddCompositeID",method) && msg.GetNumberOfArguments(0) == 5)
    {
    unsigned int      temp0;
    vtkIdType   temp1;
    vtkIdType   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->AddCompositeID(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("RemoveAllCompositeIDs",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllCompositeIDs();
      return 1;
      }
    }
  if (!strcmp("AddHierarhicalID",method) && msg.GetNumberOfArguments(0) == 5)
    {
    unsigned int      temp0;
    unsigned int      temp1;
    vtkIdType   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->AddHierarhicalID(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("RemoveAllHierarchicalIDs",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllHierarchicalIDs();
      return 1;
      }
    }
  if (!strcmp("AddThreshold",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->AddThreshold(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RemoveAllThresholds",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllThresholds();
      return 1;
      }
    }
  if (!strcmp("AddBlock",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->AddBlock(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveAllBlocks",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllBlocks();
      return 1;
      }
    }
  if (!strcmp("SetArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetArrayName(temp0);
      return 1;
      }
    }
  if (!strcmp("AddLocation",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->AddLocation(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("RemoveAllLocations",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllLocations();
      return 1;
      }
    }
  if (!strcmp("SetFieldType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFieldType(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFieldType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetFieldType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetContainingCells",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetContainingCells(temp0);
      return 1;
      }
    }
  if (!strcmp("GetContainingCells",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetContainingCells();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInverse",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInverse(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInverse",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInverse();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetQueryString",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetQueryString(temp0);
      return 1;
      }
    }
  if (!strcmp("GetQueryString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetQueryString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkSelectionAlgorithm";
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
  vtkmsg << "Object type: vtkPVSelectionSource, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkPVSelectionSource_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkPVSelectionSource", vtkPVSelectionSourceClientServerNewCommand);
    csi->AddCommandFunction("vtkPVSelectionSource", vtkPVSelectionSourceCommand);
    }
}