// ClientServer wrapper for vtkDepthSortPolyData object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkDepthSortPolyData.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkDepthSortPolyDataClientServerNewCommand(void* /*ctx*/)
{
  return vtkDepthSortPolyData::New();
}


int VTK_EXPORT vtkDepthSortPolyDataCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkDepthSortPolyData *op = vtkDepthSortPolyData::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkDepthSortPolyData.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDepthSortPolyData  *temp20;
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
    vtkDepthSortPolyData  *temp20;
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
    vtkDepthSortPolyData  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDirection",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDirection(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDirection",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDirection();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDirectionToFrontToBack",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDirectionToFrontToBack();
      return 1;
      }
    }
  if (!strcmp("SetDirectionToBackToFront",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDirectionToBackToFront();
      return 1;
      }
    }
  if (!strcmp("SetDirectionToSpecifiedVector",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDirectionToSpecifiedVector();
      return 1;
      }
    }
  if (!strcmp("SetDepthSortMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDepthSortMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDepthSortMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDepthSortMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDepthSortModeToFirstPoint",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDepthSortModeToFirstPoint();
      return 1;
      }
    }
  if (!strcmp("SetDepthSortModeToBoundsCenter",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDepthSortModeToBoundsCenter();
      return 1;
      }
    }
  if (!strcmp("SetDepthSortModeToParametricCenter",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDepthSortModeToParametricCenter();
      return 1;
      }
    }
  if (!strcmp("SetCamera",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCamera  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCamera"))
      {
      op->SetCamera(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCamera",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkCamera  *temp20;
      {
      temp20 = (op)->GetCamera();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetProp3D",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProp3D  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProp3D"))
      {
      op->SetProp3D(temp0);
      return 1;
      }
    }
  if (!strcmp("GetProp3D",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProp3D  *temp20;
      {
      temp20 = (op)->GetProp3D();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetVector",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetVector(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetVector",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetVector(temp0);
      return 1;
      }
    }
  if (!strcmp("GetVector",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetVector();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOrigin",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetOrigin(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetOrigin",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetOrigin(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOrigin",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetOrigin();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSortScalars",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSortScalars(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSortScalars",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSortScalars();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SortScalarsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SortScalarsOn();
      return 1;
      }
    }
  if (!strcmp("SortScalarsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SortScalarsOff();
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
    const char* commandName = "vtkPolyDataAlgorithm";
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
  vtkmsg << "Object type: vtkDepthSortPolyData, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkDepthSortPolyData_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkDepthSortPolyData", vtkDepthSortPolyDataClientServerNewCommand);
    csi->AddCommandFunction("vtkDepthSortPolyData", vtkDepthSortPolyDataCommand);
    }
}