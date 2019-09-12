// ClientServer wrapper for vtkIntersectionPolyDataFilter object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkIntersectionPolyDataFilter.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkIntersectionPolyDataFilterClientServerNewCommand(void* /*ctx*/)
{
  return vtkIntersectionPolyDataFilter::New();
}


int VTK_EXPORT vtkIntersectionPolyDataFilterCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkIntersectionPolyDataFilter *op = vtkIntersectionPolyDataFilter::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkIntersectionPolyDataFilter.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIntersectionPolyDataFilter  *temp20;
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
    vtkIntersectionPolyDataFilter  *temp20;
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
    vtkIntersectionPolyDataFilter  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfIntersectionPoints",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfIntersectionPoints();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfIntersectionLines",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfIntersectionLines();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSplitFirstOutput",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSplitFirstOutput();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSplitFirstOutput",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSplitFirstOutput(temp0);
      return 1;
      }
    }
  if (!strcmp("SplitFirstOutputOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SplitFirstOutputOn();
      return 1;
      }
    }
  if (!strcmp("SplitFirstOutputOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SplitFirstOutputOff();
      return 1;
      }
    }
  if (!strcmp("GetSplitSecondOutput",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSplitSecondOutput();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSplitSecondOutput",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSplitSecondOutput(temp0);
      return 1;
      }
    }
  if (!strcmp("SplitSecondOutputOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SplitSecondOutputOn();
      return 1;
      }
    }
  if (!strcmp("SplitSecondOutputOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SplitSecondOutputOff();
      return 1;
      }
    }
  if (!strcmp("GetComputeIntersectionPointArray",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetComputeIntersectionPointArray();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetComputeIntersectionPointArray",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetComputeIntersectionPointArray(temp0);
      return 1;
      }
    }
  if (!strcmp("ComputeIntersectionPointArrayOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeIntersectionPointArrayOn();
      return 1;
      }
    }
  if (!strcmp("ComputeIntersectionPointArrayOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeIntersectionPointArrayOff();
      return 1;
      }
    }
  if (!strcmp("GetCheckInput",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetCheckInput();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCheckInput",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCheckInput(temp0);
      return 1;
      }
    }
  if (!strcmp("CheckInputOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CheckInputOn();
      return 1;
      }
    }
  if (!strcmp("CheckInputOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CheckInputOff();
      return 1;
      }
    }
  if (!strcmp("GetCheckMesh",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetCheckMesh();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCheckMesh",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCheckMesh(temp0);
      return 1;
      }
    }
  if (!strcmp("CheckMeshOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CheckMeshOn();
      return 1;
      }
    }
  if (!strcmp("CheckMeshOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CheckMeshOff();
      return 1;
      }
    }
  if (!strcmp("GetStatus",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetStatus();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTolerance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetTolerance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTolerance",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTolerance(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRelativeSubtriangleArea",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetRelativeSubtriangleArea();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRelativeSubtriangleArea",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRelativeSubtriangleArea(temp0);
      return 1;
      }
    }
  if (!strcmp("CleanAndCheckInput",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPolyData  *temp0;
    double   temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPolyData") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->CleanAndCheckInput(temp0,temp1);
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
  vtkmsg << "Object type: vtkIntersectionPolyDataFilter, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkIntersectionPolyDataFilter_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkIntersectionPolyDataFilter", vtkIntersectionPolyDataFilterClientServerNewCommand);
    csi->AddCommandFunction("vtkIntersectionPolyDataFilter", vtkIntersectionPolyDataFilterCommand);
    }
}
