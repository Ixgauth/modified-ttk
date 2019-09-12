// ClientServer wrapper for vtkSkybox object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkSkybox.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkSkyboxClientServerNewCommand(void* /*ctx*/)
{
  return vtkSkybox::New();
}


int VTK_EXPORT vtkSkyboxCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkSkybox *op = vtkSkybox::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkSkybox.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSkybox  *temp20;
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
    vtkSkybox  *temp20;
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
    vtkSkybox  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetProjection",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetProjection();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetProjection",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetProjection(temp0);
      return 1;
      }
    }
  if (!strcmp("SetProjectionToCube",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetProjectionToCube();
      return 1;
      }
    }
  if (!strcmp("SetProjectionToSphere",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetProjectionToSphere();
      return 1;
      }
    }
  if (!strcmp("SetProjectionToFloor",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetProjectionToFloor();
      return 1;
      }
    }
  if (!strcmp("SetFloorPlane",method) && msg.GetNumberOfArguments(0) == 6)
    {
    float    temp0;
    float    temp1;
    float    temp2;
    float    temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetFloorPlane(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetFloorPlane",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float  temp0[4];
    if(msg.GetArgument(0, 2, temp0, 4))
      {
      op->SetFloorPlane(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFloorPlane",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float   *temp20;
      {
      temp20 = (op)->GetFloorPlane();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,4) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFloorRight",method) && msg.GetNumberOfArguments(0) == 5)
    {
    float    temp0;
    float    temp1;
    float    temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetFloorRight(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetFloorRight",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float  temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetFloorRight(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFloorRight",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float   *temp20;
      {
      temp20 = (op)->GetFloorRight();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->GetBounds(temp0);
      return 1;
      }
    }

  {
    const char* commandName = "vtkActor";
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
  vtkmsg << "Object type: vtkSkybox, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkSkybox_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkSkybox", vtkSkyboxClientServerNewCommand);
    csi->AddCommandFunction("vtkSkybox", vtkSkyboxCommand);
    }
}
