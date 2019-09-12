// ClientServer wrapper for vtkExtractTimeSteps object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkExtractTimeSteps.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkExtractTimeStepsClientServerNewCommand(void* /*ctx*/)
{
  return vtkExtractTimeSteps::New();
}


int VTK_EXPORT vtkExtractTimeStepsCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkExtractTimeSteps *op = vtkExtractTimeSteps::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkExtractTimeSteps.  "
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
    vtkExtractTimeSteps  *temp20;
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
    vtkExtractTimeSteps  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkExtractTimeSteps  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfTimeSteps",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfTimeSteps();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddTimeStepIndex",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->AddTimeStepIndex(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTimeStepIndices",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    if(msg.GetArgument(0, 2, &temp0) &&
      temp1)
      {
      op->SetTimeStepIndices(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetTimeStepIndices",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    if(temp0)
      {
      op->GetTimeStepIndices(temp0);
      return 1;
      }
    }
  if (!strcmp("GenerateTimeStepIndices",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->GenerateTimeStepIndices(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("ClearTimeStepIndices",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearTimeStepIndices();
      return 1;
      }
    }
  if (!strcmp("GetUseRange",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseRange();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseRange(temp0);
      return 1;
      }
    }
  if (!strcmp("UseRangeOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseRangeOn();
      return 1;
      }
    }
  if (!strcmp("UseRangeOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseRangeOff();
      return 1;
      }
    }
  if (!strcmp("GetRange",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetRange();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRange",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetRange(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetRange(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTimeStepInterval",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTimeStepInterval();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTimeStepInterval",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTimeStepInterval(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTimeStepIntervalMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTimeStepIntervalMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTimeStepIntervalMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTimeStepIntervalMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTimeEstimationMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTimeEstimationMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTimeEstimationMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTimeEstimationMode(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTimeEstimationModeToPrevious",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTimeEstimationModeToPrevious();
      return 1;
      }
    }
  if (!strcmp("SetTimeEstimationModeToNext",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTimeEstimationModeToNext();
      return 1;
      }
    }
  if (!strcmp("SetTimeEstimationModeToNearest",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTimeEstimationModeToNearest();
      return 1;
      }
    }

  {
    const char* commandName = "vtkPassInputTypeAlgorithm";
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
  vtkmsg << "Object type: vtkExtractTimeSteps, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkExtractTimeSteps_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkExtractTimeSteps", vtkExtractTimeStepsClientServerNewCommand);
    csi->AddCommandFunction("vtkExtractTimeSteps", vtkExtractTimeStepsCommand);
    }
}
