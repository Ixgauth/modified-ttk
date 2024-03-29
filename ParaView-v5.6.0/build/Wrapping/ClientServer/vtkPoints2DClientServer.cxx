// ClientServer wrapper for vtkPoints2D object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPoints2D.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkPoints2DClientServerNewCommand(void* /*ctx*/)
{
  return vtkPoints2D::New();
}


int VTK_EXPORT vtkPoints2DCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkPoints2D *op = vtkPoints2D::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkPoints2D.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkPoints2D  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->New(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPoints2D  *temp20;
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
    vtkPoints2D  *temp20;
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
    vtkPoints2D  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Allocate",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    vtkIdType   temp1;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->Allocate(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Initialize",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Initialize();
      return 1;
      }
    }
  if (!strcmp("SetData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataArray  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataArray"))
      {
      op->SetData(temp0);
      return 1;
      }
    }
  if (!strcmp("GetData",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDataArray  *temp20;
      {
      temp20 = (op)->GetData();
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
  if (!strcmp("SetDataType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDataType(temp0);
      return 1;
      }
    }
  if (!strcmp("SetDataTypeToBit",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDataTypeToBit();
      return 1;
      }
    }
  if (!strcmp("SetDataTypeToChar",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDataTypeToChar();
      return 1;
      }
    }
  if (!strcmp("SetDataTypeToUnsignedChar",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDataTypeToUnsignedChar();
      return 1;
      }
    }
  if (!strcmp("SetDataTypeToShort",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDataTypeToShort();
      return 1;
      }
    }
  if (!strcmp("SetDataTypeToUnsignedShort",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDataTypeToUnsignedShort();
      return 1;
      }
    }
  if (!strcmp("SetDataTypeToInt",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDataTypeToInt();
      return 1;
      }
    }
  if (!strcmp("SetDataTypeToUnsignedInt",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDataTypeToUnsignedInt();
      return 1;
      }
    }
  if (!strcmp("SetDataTypeToLong",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDataTypeToLong();
      return 1;
      }
    }
  if (!strcmp("SetDataTypeToUnsignedLong",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDataTypeToUnsignedLong();
      return 1;
      }
    }
  if (!strcmp("SetDataTypeToFloat",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDataTypeToFloat();
      return 1;
      }
    }
  if (!strcmp("SetDataTypeToDouble",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDataTypeToDouble();
      return 1;
      }
    }
  if (!strcmp("Squeeze",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Squeeze();
      return 1;
      }
    }
  if (!strcmp("Reset",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Reset();
      return 1;
      }
    }
  if (!strcmp("DeepCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPoints2D  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints2D"))
      {
      op->DeepCopy(temp0);
      return 1;
      }
    }
  if (!strcmp("ShallowCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPoints2D  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints2D"))
      {
      op->ShallowCopy(temp0);
      return 1;
      }
    }
  if (!strcmp("GetActualMemorySize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned long     temp20;
      {
      temp20 = (op)->GetActualMemorySize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfPoints",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetNumberOfPoints();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPoint",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    double  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetPoint(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPoint",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkIdType   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetPoint(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("InsertPoint",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkIdType   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->InsertPoint(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("InsertNextPoint",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float  temp0[2];
    vtkIdType   temp20;
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      temp20 = (op)->InsertNextPoint(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InsertNextPoint",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    vtkIdType   temp20;
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      temp20 = (op)->InsertNextPoint(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InsertNextPoint",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    double   temp1;
    vtkIdType   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->InsertNextPoint(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RemovePoint",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RemovePoint(temp0);
      return 1;
      }
    }
  if (!strcmp("SetNumberOfPoints",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfPoints(temp0);
      return 1;
      }
    }
  if (!strcmp("Resize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->Resize(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPoints",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdList  *temp0;
    vtkPoints2D  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkIdList") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPoints2D"))
      {
      op->GetPoints(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("ComputeBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeBounds();
      return 1;
      }
    }
  if (!strcmp("GetBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetBounds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,4) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[4];
    if(msg.GetArgument(0, 2, temp0, 4))
      {
      op->GetBounds(temp0);
      return 1;
      }
    }

  {
    const char* commandName = "vtkObject";
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
  vtkmsg << "Object type: vtkPoints2D, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkPoints2D_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkPoints2D", vtkPoints2DClientServerNewCommand);
    csi->AddCommandFunction("vtkPoints2D", vtkPoints2DCommand);
    }
}
