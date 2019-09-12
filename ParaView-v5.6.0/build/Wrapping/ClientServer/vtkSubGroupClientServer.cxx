// ClientServer wrapper for vtkSubGroup object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkSubGroup.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkSubGroupClientServerNewCommand(void* /*ctx*/)
{
  return vtkSubGroup::New();
}


int VTK_EXPORT vtkSubGroupCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkSubGroup *op = vtkSubGroup::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkSubGroup.  "
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
    vtkSubGroup  *temp20;
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
    vtkSubGroup  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSubGroup  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Initialize",method) && msg.GetNumberOfArguments(0) == 7)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkCommunicator  *temp4;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkCommunicator"))
      {
      temp20 = (op)->Initialize(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Gather",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Gather(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Gather",method) && msg.GetNumberOfArguments(0) == 6)
    {
    char    *temp0;
    char    *temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Gather(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Gather",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Gather(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Gather",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<vtkIdType > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<vtkIdType > temp1(msg, 0, 3);
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Gather(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Broadcast",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    int      temp1;
    int      temp2;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->Broadcast(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Broadcast",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    int      temp1;
    int      temp2;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->Broadcast(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Broadcast",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    int      temp1;
    int      temp2;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->Broadcast(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Broadcast",method) && msg.GetNumberOfArguments(0) == 5)
    {
    char    *temp0;
    int      temp1;
    int      temp2;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->Broadcast(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Broadcast",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<vtkIdType > temp0(msg, 0, 2);
    int      temp1;
    int      temp2;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->Broadcast(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ReduceSum",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->ReduceSum(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ReduceMax",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->ReduceMax(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ReduceMax",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->ReduceMax(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ReduceMax",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->ReduceMax(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ReduceMin",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->ReduceMin(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ReduceMin",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->ReduceMin(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ReduceMin",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->ReduceMin(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("setGatherPattern",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->setGatherPattern(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("getLocalRank",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->getLocalRank(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Barrier",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->Barrier();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PrintSubGroup",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PrintSubGroup();
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
  vtkmsg << "Object type: vtkSubGroup, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkSubGroup_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkSubGroup", vtkSubGroupClientServerNewCommand);
    csi->AddCommandFunction("vtkSubGroup", vtkSubGroupCommand);
    }
}
