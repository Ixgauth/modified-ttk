// ClientServer wrapper for vtkHyperTreeGridAxisReflection object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkHyperTreeGridAxisReflection.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkHyperTreeGridAxisReflectionClientServerNewCommand(void* /*ctx*/)
{
  return vtkHyperTreeGridAxisReflection::New();
}


int VTK_EXPORT vtkHyperTreeGridAxisReflectionCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkHyperTreeGridAxisReflection *op = vtkHyperTreeGridAxisReflection::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkHyperTreeGridAxisReflection.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkHyperTreeGridAxisReflection  *temp20;
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
    vtkHyperTreeGridAxisReflection  *temp20;
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
    vtkHyperTreeGridAxisReflection  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPlane",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPlane(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPlaneMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPlaneMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPlaneMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPlaneMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPlane",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPlane();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPlaneToX",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetPlaneToX();
      return 1;
      }
    }
  if (!strcmp("SetPlaneToY",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetPlaneToY();
      return 1;
      }
    }
  if (!strcmp("SetPlaneToZ",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetPlaneToZ();
      return 1;
      }
    }
  if (!strcmp("SetPlaneToXMin",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetPlaneToXMin();
      return 1;
      }
    }
  if (!strcmp("SetPlaneToYMin",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetPlaneToYMin();
      return 1;
      }
    }
  if (!strcmp("SetPlaneToZMin",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetPlaneToZMin();
      return 1;
      }
    }
  if (!strcmp("SetPlaneToXMax",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetPlaneToXMax();
      return 1;
      }
    }
  if (!strcmp("SetPlaneToYMax",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetPlaneToYMax();
      return 1;
      }
    }
  if (!strcmp("SetPlaneToZMax",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetPlaneToZMax();
      return 1;
      }
    }
  if (!strcmp("SetCenter",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCenter(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCenter",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetCenter();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkHyperTreeGridAlgorithm";
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
  vtkmsg << "Object type: vtkHyperTreeGridAxisReflection, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkHyperTreeGridAxisReflection_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkHyperTreeGridAxisReflection", vtkHyperTreeGridAxisReflectionClientServerNewCommand);
    csi->AddCommandFunction("vtkHyperTreeGridAxisReflection", vtkHyperTreeGridAxisReflectionCommand);
    }
}