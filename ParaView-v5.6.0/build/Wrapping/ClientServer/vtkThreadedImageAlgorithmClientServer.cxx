// ClientServer wrapper for vtkThreadedImageAlgorithm object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkThreadedImageAlgorithm.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


int VTK_EXPORT vtkThreadedImageAlgorithmCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkThreadedImageAlgorithm *op = vtkThreadedImageAlgorithm::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkThreadedImageAlgorithm.  "
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
    vtkThreadedImageAlgorithm  *temp20;
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
    vtkThreadedImageAlgorithm  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetEnableSMP",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetEnableSMP();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetEnableSMP",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetEnableSMP(temp0);
      return 1;
      }
    }
  if (!strcmp("SetGlobalDefaultEnableSMP",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGlobalDefaultEnableSMP(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGlobalDefaultEnableSMP",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetGlobalDefaultEnableSMP();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMinimumPieceSize",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetMinimumPieceSize(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetMinimumPieceSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetMinimumPieceSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMinimumPieceSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetMinimumPieceSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDesiredBytesPerPiece",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDesiredBytesPerPiece(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDesiredBytesPerPiece",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetDesiredBytesPerPiece();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSplitMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSplitMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSplitModeMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSplitModeMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSplitModeMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSplitModeMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSplitModeToSlab",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetSplitModeToSlab();
      return 1;
      }
    }
  if (!strcmp("SetSplitModeToBeam",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetSplitModeToBeam();
      return 1;
      }
    }
  if (!strcmp("SetSplitModeToBlock",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetSplitModeToBlock();
      return 1;
      }
    }
  if (!strcmp("GetSplitMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSplitMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNumberOfThreads",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfThreads(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfThreadsMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfThreadsMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfThreadsMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfThreadsMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfThreads",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfThreads();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkImageAlgorithm";
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
  vtkmsg << "Object type: vtkThreadedImageAlgorithm, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkThreadedImageAlgorithm_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddCommandFunction("vtkThreadedImageAlgorithm", vtkThreadedImageAlgorithmCommand);
    }
}
