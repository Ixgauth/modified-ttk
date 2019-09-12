// ClientServer wrapper for vtkIntArray object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkIntArray.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkIntArrayClientServerNewCommand(void* /*ctx*/)
{
  return vtkIntArray::New();
}


int VTK_EXPORT vtkIntArrayCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkIntArray *op = vtkIntArray::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkIntArray.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
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
    vtkIntArray  *temp20;
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
    vtkIntArray  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIntArray  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDataType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDataType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTypedTuple",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    if(msg.GetArgument(0, 2, &temp0) &&
      temp1)
      {
      op->GetTypedTuple(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetTypedTuple",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    if(msg.GetArgument(0, 2, &temp0) &&
      temp1)
      {
      op->SetTypedTuple(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("InsertTypedTuple",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    if(msg.GetArgument(0, 2, &temp0) &&
      temp1)
      {
      op->InsertTypedTuple(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("InsertNextTypedTuple",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    vtkIdType   temp20;
    if(temp0)
      {
      temp20 = (op)->InsertNextTypedTuple(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetValue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetValue(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetValue",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetValue(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetNumberOfValues",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfValues(temp0);
      return 1;
      }
    }
  if (!strcmp("InsertValue",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->InsertValue(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("InsertNextValue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkIdType   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->InsertNextValue(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetValueRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int     *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetValueRange(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetValueRange",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetValueRange();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetArray",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetArray(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetArray",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetArray(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("FastDownCast",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractArray  *temp0;
    vtkIntArray  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractArray"))
      {
      temp20 = (op)->FastDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDataTypeValueMin",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDataTypeValueMin();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDataTypeValueMax",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDataTypeValueMax();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkDataArray";
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
  vtkmsg << "Object type: vtkIntArray, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkIntArray_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkIntArray", vtkIntArrayClientServerNewCommand);
    csi->AddCommandFunction("vtkIntArray", vtkIntArrayCommand);
    }
}
