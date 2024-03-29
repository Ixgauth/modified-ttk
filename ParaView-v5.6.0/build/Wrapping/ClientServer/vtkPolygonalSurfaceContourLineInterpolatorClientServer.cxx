// ClientServer wrapper for vtkPolygonalSurfaceContourLineInterpolator object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPolygonalSurfaceContourLineInterpolator.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkPolygonalSurfaceContourLineInterpolatorClientServerNewCommand(void* /*ctx*/)
{
  return vtkPolygonalSurfaceContourLineInterpolator::New();
}


int VTK_EXPORT vtkPolygonalSurfaceContourLineInterpolatorCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkPolygonalSurfaceContourLineInterpolator *op = vtkPolygonalSurfaceContourLineInterpolator::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkPolygonalSurfaceContourLineInterpolator.  "
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
    vtkPolygonalSurfaceContourLineInterpolator  *temp20;
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
    vtkPolygonalSurfaceContourLineInterpolator  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPolygonalSurfaceContourLineInterpolator  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InterpolateLine",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkRenderer  *temp0;
    vtkContourRepresentation  *temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkContourRepresentation") &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->InterpolateLine(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UpdateNode",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkRenderer  *temp0;
    vtkContourRepresentation  *temp1;
    vtkClientServerStreamDataArg<double > temp2(msg, 0, 4);
    int      temp3;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkContourRepresentation") &&
      temp2 &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->UpdateNode(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDistanceOffset",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDistanceOffset(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDistanceOffset",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetDistanceOffset();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetContourPointIds",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkContourRepresentation  *temp0;
    vtkIdList  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkContourRepresentation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkIdList"))
      {
      op->GetContourPointIds(temp0,temp1);
      return 1;
      }
    }

  {
    const char* commandName = "vtkPolyDataContourLineInterpolator";
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
  vtkmsg << "Object type: vtkPolygonalSurfaceContourLineInterpolator, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkPolygonalSurfaceContourLineInterpolator_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkPolygonalSurfaceContourLineInterpolator", vtkPolygonalSurfaceContourLineInterpolatorClientServerNewCommand);
    csi->AddCommandFunction("vtkPolygonalSurfaceContourLineInterpolator", vtkPolygonalSurfaceContourLineInterpolatorCommand);
    }
}
