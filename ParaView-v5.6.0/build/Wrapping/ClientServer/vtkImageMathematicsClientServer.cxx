// ClientServer wrapper for vtkImageMathematics object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkImageMathematics.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkImageMathematicsClientServerNewCommand(void* /*ctx*/)
{
  return vtkImageMathematics::New();
}


int VTK_EXPORT vtkImageMathematicsCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkImageMathematics *op = vtkImageMathematics::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkImageMathematics.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkImageMathematics  *temp20;
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
    vtkImageMathematics  *temp20;
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
    vtkImageMathematics  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOperation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOperation(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOperation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetOperation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOperationToAdd",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToAdd();
      return 1;
      }
    }
  if (!strcmp("SetOperationToSubtract",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToSubtract();
      return 1;
      }
    }
  if (!strcmp("SetOperationToMultiply",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToMultiply();
      return 1;
      }
    }
  if (!strcmp("SetOperationToDivide",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToDivide();
      return 1;
      }
    }
  if (!strcmp("SetOperationToConjugate",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToConjugate();
      return 1;
      }
    }
  if (!strcmp("SetOperationToComplexMultiply",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToComplexMultiply();
      return 1;
      }
    }
  if (!strcmp("SetOperationToInvert",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToInvert();
      return 1;
      }
    }
  if (!strcmp("SetOperationToSin",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToSin();
      return 1;
      }
    }
  if (!strcmp("SetOperationToCos",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToCos();
      return 1;
      }
    }
  if (!strcmp("SetOperationToExp",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToExp();
      return 1;
      }
    }
  if (!strcmp("SetOperationToLog",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToLog();
      return 1;
      }
    }
  if (!strcmp("SetOperationToAbsoluteValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToAbsoluteValue();
      return 1;
      }
    }
  if (!strcmp("SetOperationToSquare",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToSquare();
      return 1;
      }
    }
  if (!strcmp("SetOperationToSquareRoot",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToSquareRoot();
      return 1;
      }
    }
  if (!strcmp("SetOperationToMin",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToMin();
      return 1;
      }
    }
  if (!strcmp("SetOperationToMax",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToMax();
      return 1;
      }
    }
  if (!strcmp("SetOperationToATAN",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToATAN();
      return 1;
      }
    }
  if (!strcmp("SetOperationToATAN2",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToATAN2();
      return 1;
      }
    }
  if (!strcmp("SetOperationToMultiplyByK",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToMultiplyByK();
      return 1;
      }
    }
  if (!strcmp("SetOperationToAddConstant",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToAddConstant();
      return 1;
      }
    }
  if (!strcmp("SetOperationToReplaceCByK",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToReplaceCByK();
      return 1;
      }
    }
  if (!strcmp("SetConstantK",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetConstantK(temp0);
      return 1;
      }
    }
  if (!strcmp("GetConstantK",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetConstantK();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetConstantC",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetConstantC(temp0);
      return 1;
      }
    }
  if (!strcmp("GetConstantC",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetConstantC();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDivideByZeroToC",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDivideByZeroToC(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDivideByZeroToC",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDivideByZeroToC();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DivideByZeroToCOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DivideByZeroToCOn();
      return 1;
      }
    }
  if (!strcmp("DivideByZeroToCOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DivideByZeroToCOff();
      return 1;
      }
    }
  if (!strcmp("SetInput1Data",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataObject  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject"))
      {
      op->SetInput1Data(temp0);
      return 1;
      }
    }
  if (!strcmp("SetInput2Data",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataObject  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject"))
      {
      op->SetInput2Data(temp0);
      return 1;
      }
    }

  {
    const char* commandName = "vtkThreadedImageAlgorithm";
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
  vtkmsg << "Object type: vtkImageMathematics, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkImageMathematics_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkImageMathematics", vtkImageMathematicsClientServerNewCommand);
    csi->AddCommandFunction("vtkImageMathematics", vtkImageMathematicsCommand);
    }
}
