// ClientServer wrapper for vtkGeometricErrorMetric object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkGeometricErrorMetric.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkGeometricErrorMetricClientServerNewCommand(void* /*ctx*/)
{
  return vtkGeometricErrorMetric::New();
}


int VTK_EXPORT vtkGeometricErrorMetricCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkGeometricErrorMetric *op = vtkGeometricErrorMetric::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkGeometricErrorMetric.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkGeometricErrorMetric  *temp20;
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
    vtkGeometricErrorMetric  *temp20;
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
    vtkGeometricErrorMetric  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAbsoluteGeometricTolerance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetAbsoluteGeometricTolerance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAbsoluteGeometricTolerance",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAbsoluteGeometricTolerance(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRelativeGeometricTolerance",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    vtkGenericDataSet  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkGenericDataSet"))
      {
      op->SetRelativeGeometricTolerance(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RequiresEdgeSubdivision",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<double > temp2(msg, 0, 4);
    double   temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      temp2 &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->RequiresEdgeSubdivision(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetError",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<double > temp2(msg, 0, 4);
    double   temp3;
    double   temp20;
    if(temp0 &&
      temp1 &&
      temp2 &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->GetError(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRelative",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetRelative();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkGenericSubdivisionErrorMetric";
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
  vtkmsg << "Object type: vtkGeometricErrorMetric, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkGeometricErrorMetric_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkGeometricErrorMetric", vtkGeometricErrorMetricClientServerNewCommand);
    csi->AddCommandFunction("vtkGeometricErrorMetric", vtkGeometricErrorMetricCommand);
    }
}