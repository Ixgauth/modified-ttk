// ClientServer wrapper for vtkGraphLayoutFilter object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkGraphLayoutFilter.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkGraphLayoutFilterClientServerNewCommand(void* /*ctx*/)
{
  return vtkGraphLayoutFilter::New();
}


int VTK_EXPORT vtkGraphLayoutFilterCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkGraphLayoutFilter *op = vtkGraphLayoutFilter::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkGraphLayoutFilter.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkGraphLayoutFilter  *temp20;
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
    vtkGraphLayoutFilter  *temp20;
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
    vtkGraphLayoutFilter  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetGraphBounds",method) && msg.GetNumberOfArguments(0) == 8)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    double   temp4;
    double   temp5;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      op->SetGraphBounds(temp0,temp1,temp2,temp3,temp4,temp5);
      return 1;
      }
    }
  if (!strcmp("SetGraphBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->SetGraphBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGraphBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetGraphBounds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,6) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAutomaticBoundsComputation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAutomaticBoundsComputation(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAutomaticBoundsComputation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAutomaticBoundsComputation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AutomaticBoundsComputationOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutomaticBoundsComputationOn();
      return 1;
      }
    }
  if (!strcmp("AutomaticBoundsComputationOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutomaticBoundsComputationOff();
      return 1;
      }
    }
  if (!strcmp("SetMaxNumberOfIterations",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaxNumberOfIterations(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaxNumberOfIterationsMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMaxNumberOfIterationsMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaxNumberOfIterationsMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMaxNumberOfIterationsMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaxNumberOfIterations",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMaxNumberOfIterations();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCoolDownRate",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCoolDownRate(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCoolDownRateMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetCoolDownRateMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetCoolDownRateMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetCoolDownRateMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetCoolDownRate",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetCoolDownRate();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetThreeDimensionalLayout",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetThreeDimensionalLayout(temp0);
      return 1;
      }
    }
  if (!strcmp("GetThreeDimensionalLayout",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetThreeDimensionalLayout();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ThreeDimensionalLayoutOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ThreeDimensionalLayoutOn();
      return 1;
      }
    }
  if (!strcmp("ThreeDimensionalLayoutOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ThreeDimensionalLayoutOff();
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
  vtkmsg << "Object type: vtkGraphLayoutFilter, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkGraphLayoutFilter_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkGraphLayoutFilter", vtkGraphLayoutFilterClientServerNewCommand);
    csi->AddCommandFunction("vtkGraphLayoutFilter", vtkGraphLayoutFilterCommand);
    }
}
