// ClientServer wrapper for vtkTransform object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkTransform.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkTransformClientServerNewCommand(void* /*ctx*/)
{
  return vtkTransform::New();
}


int VTK_EXPORT vtkTransformCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkTransform *op = vtkTransform::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkTransform.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTransform  *temp20;
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
    vtkTransform  *temp20;
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
    vtkTransform  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Identity",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Identity();
      return 1;
      }
    }
  if (!strcmp("Inverse",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Inverse();
      return 1;
      }
    }
  if (!strcmp("Translate",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->Translate(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("Translate",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->Translate(temp0);
      return 1;
      }
    }
  if (!strcmp("Translate",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float  temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->Translate(temp0);
      return 1;
      }
    }
  if (!strcmp("RotateWXYZ",method) && msg.GetNumberOfArguments(0) == 6)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->RotateWXYZ(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("RotateX",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RotateX(temp0);
      return 1;
      }
    }
  if (!strcmp("RotateY",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RotateY(temp0);
      return 1;
      }
    }
  if (!strcmp("RotateZ",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RotateZ(temp0);
      return 1;
      }
    }
  if (!strcmp("Scale",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->Scale(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("Scale",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->Scale(temp0);
      return 1;
      }
    }
  if (!strcmp("Scale",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float  temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->Scale(temp0);
      return 1;
      }
    }
  if (!strcmp("SetMatrix",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMatrix4x4  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMatrix4x4"))
      {
      op->SetMatrix(temp0);
      return 1;
      }
    }
  if (!strcmp("SetMatrix",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[16];
    if(msg.GetArgument(0, 2, temp0, 16))
      {
      op->SetMatrix(temp0);
      return 1;
      }
    }
  if (!strcmp("Concatenate",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMatrix4x4  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMatrix4x4"))
      {
      op->Concatenate(temp0);
      return 1;
      }
    }
  if (!strcmp("Concatenate",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[16];
    if(msg.GetArgument(0, 2, temp0, 16))
      {
      op->Concatenate(temp0);
      return 1;
      }
    }
  if (!strcmp("Concatenate",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkLinearTransform  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkLinearTransform"))
      {
      op->Concatenate(temp0);
      return 1;
      }
    }
  if (!strcmp("PreMultiply",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PreMultiply();
      return 1;
      }
    }
  if (!strcmp("PostMultiply",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PostMultiply();
      return 1;
      }
    }
  if (!strcmp("GetNumberOfConcatenatedTransforms",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfConcatenatedTransforms();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetConcatenatedTransform",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkLinearTransform  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetConcatenatedTransform(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetOrientation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetOrientation(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOrientation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float  temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetOrientation(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOrientation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetOrientation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetOrientationWXYZ",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[4];
    if(msg.GetArgument(0, 2, temp0, 4))
      {
      op->GetOrientationWXYZ(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOrientationWXYZ",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float  temp0[4];
    if(msg.GetArgument(0, 2, temp0, 4))
      {
      op->GetOrientationWXYZ(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOrientationWXYZ",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetOrientationWXYZ();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,4) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetPosition(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float  temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetPosition(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPosition",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetPosition();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetScale",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetScale(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScale",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float  temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetScale(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScale",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetScale();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInverse",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMatrix4x4  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMatrix4x4"))
      {
      op->GetInverse(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTranspose",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMatrix4x4  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMatrix4x4"))
      {
      op->GetTranspose(temp0);
      return 1;
      }
    }
  if (!strcmp("SetInput",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkLinearTransform  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkLinearTransform"))
      {
      op->SetInput(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInput",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkLinearTransform  *temp20;
      {
      temp20 = (op)->GetInput();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInverseFlag",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInverseFlag();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Push",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Push();
      return 1;
      }
    }
  if (!strcmp("Pop",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Pop();
      return 1;
      }
    }
  if (!strcmp("CircuitCheck",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractTransform  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractTransform"))
      {
      temp20 = (op)->CircuitCheck(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInverse",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAbstractTransform  *temp20;
      {
      temp20 = (op)->GetInverse();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MakeTransform",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAbstractTransform  *temp20;
      {
      temp20 = (op)->MakeTransform();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned long     temp20;
      {
      temp20 = (op)->GetMTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkLinearTransform";
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
  vtkmsg << "Object type: vtkTransform, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkTransform_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkTransform", vtkTransformClientServerNewCommand);
    csi->AddCommandFunction("vtkTransform", vtkTransformCommand);
    }
}
