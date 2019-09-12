// ClientServer wrapper for vtkGeodesicsBetweenPoints object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkGeodesicsBetweenPoints.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkGeodesicsBetweenPointsClientServerNewCommand(void* /*ctx*/)
{
  return vtkGeodesicsBetweenPoints::New();
}


int VTK_EXPORT vtkGeodesicsBetweenPointsCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkGeodesicsBetweenPoints *op = vtkGeodesicsBetweenPoints::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkGeodesicsBetweenPoints.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkGeodesicsBetweenPoints  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SafeDownCast",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkObjectBase  *temp0;
    vtkGeodesicsBetweenPoints  *temp20;
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
    vtkGeodesicsBetweenPoints  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetEndpointsConnection",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAlgorithmOutput  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAlgorithmOutput"))
      {
      op->SetEndpointsConnection(temp0);
      return 1;
      }
    }
  if (!strcmp("SetLoop",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLoop(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLoop",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetLoop();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("LoopOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LoopOn();
      return 1;
      }
    }
  if (!strcmp("LoopOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LoopOff();
      return 1;
      }
    }
  if (!strcmp("SetLoopWithLine",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLoopWithLine(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLoopWithLine",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetLoopWithLine();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("LoopWithLineOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LoopWithLineOn();
      return 1;
      }
    }
  if (!strcmp("LoopWithLineOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LoopWithLineOff();
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
  vtkmsg << "Object type: vtkGeodesicsBetweenPoints, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkGeodesicsBetweenPoints_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkGeodesicsBetweenPoints", vtkGeodesicsBetweenPointsClientServerNewCommand);
    csi->AddCommandFunction("vtkGeodesicsBetweenPoints", vtkGeodesicsBetweenPointsCommand);
    }
}
