// ClientServer wrapper for vtkLagrangeInterpolation object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkLagrangeInterpolation.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkLagrangeInterpolationClientServerNewCommand(void* /*ctx*/)
{
  return vtkLagrangeInterpolation::New();
}


int VTK_EXPORT vtkLagrangeInterpolationCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkLagrangeInterpolation *op = vtkLagrangeInterpolation::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkLagrangeInterpolation.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkLagrangeInterpolation  *temp20;
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
    vtkLagrangeInterpolation  *temp20;
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
    vtkLagrangeInterpolation  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("EvaluateShapeFunctions",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    double   temp1;
    vtkClientServerStreamDataArg<double > temp2(msg, 0, 4);
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2)
      {
      op->EvaluateShapeFunctions(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("EvaluateShapeAndGradient",method) && msg.GetNumberOfArguments(0) == 6)
    {
    int      temp0;
    double   temp1;
    vtkClientServerStreamDataArg<double > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<double > temp3(msg, 0, 5);
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      temp3)
      {
      op->EvaluateShapeAndGradient(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("GetVaryingParameterOfHexEdge",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetVaryingParameterOfHexEdge(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPointIndicesBoundingHexFace",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    const int     *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetPointIndicesBoundingHexFace(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,4) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetEdgeIndicesBoundingHexFace",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    const int     *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetEdgeIndicesBoundingHexFace(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,4) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetFixedParameterOfHexFace",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetFixedParameterOfHexFace(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetVaryingParameterOfWedgeEdge",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetVaryingParameterOfWedgeEdge(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPointIndicesBoundingWedgeFace",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    const int     *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetPointIndicesBoundingWedgeFace(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,4) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetEdgeIndicesBoundingWedgeFace",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    const int     *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetEdgeIndicesBoundingWedgeFace(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,4) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetFixedParameterOfWedgeFace",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetFixedParameterOfWedgeFace(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  vtkmsg << "Object type: vtkLagrangeInterpolation, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkLagrangeInterpolation_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkLagrangeInterpolation", vtkLagrangeInterpolationClientServerNewCommand);
    csi->AddCommandFunction("vtkLagrangeInterpolation", vtkLagrangeInterpolationCommand);
    }
}
