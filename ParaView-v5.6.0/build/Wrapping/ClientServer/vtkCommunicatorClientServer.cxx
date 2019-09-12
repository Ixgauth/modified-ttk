// ClientServer wrapper for vtkCommunicator object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkCommunicator.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


int VTK_EXPORT vtkCommunicatorCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkCommunicator *op = vtkCommunicator::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkCommunicator.  "
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
    vtkCommunicator  *temp20;
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
    vtkCommunicator  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNumberOfProcesses",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfProcesses(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfProcesses",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfProcesses();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLocalProcessId",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetLocalProcessId();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Send",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkDataObject  *temp0;
    int      temp1;
    int      temp2;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->Send(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Send",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkDataArray  *temp0;
    int      temp1;
    int      temp2;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataArray") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->Send(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Send",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Send(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Send",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<unsigned int    > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Send(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Send",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<short  > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Send(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Send",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<unsigned short  > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Send(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Send",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<long   > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Send(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Send",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<unsigned long   > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Send(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Send",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<unsigned char   > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Send(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Send",method) && msg.GetNumberOfArguments(0) == 6)
    {
    char    *temp0;
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Send(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Send",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<signed char > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Send(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Send",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Send(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Send",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Send(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Send",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<long long > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Send(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Send",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<unsigned long long > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Send(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Receive",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkDataObject  *temp0;
    int      temp1;
    int      temp2;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->Receive(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ReceiveDataObject",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    vtkDataObject  *temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->ReceiveDataObject(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Receive",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkDataArray  *temp0;
    int      temp1;
    int      temp2;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataArray") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->Receive(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Receive",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Receive(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Receive",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<unsigned int    > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Receive(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Receive",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<short  > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Receive(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Receive",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<unsigned short  > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Receive(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Receive",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<long   > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Receive(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Receive",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<unsigned long   > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Receive(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Receive",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<unsigned char   > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Receive(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Receive",method) && msg.GetNumberOfArguments(0) == 6)
    {
    char    *temp0;
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Receive(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Receive",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<signed char > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Receive(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Receive",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Receive(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Receive",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Receive(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Receive",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<long long > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Receive(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Receive",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<unsigned long long > temp0(msg, 0, 2);
    vtkIdType   temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Receive(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetCount",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetCount();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Barrier",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Barrier();
      return 1;
      }
    }
  if (!strcmp("Broadcast",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    vtkIdType   temp1;
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
    vtkClientServerStreamDataArg<unsigned int    > temp0(msg, 0, 2);
    vtkIdType   temp1;
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
    vtkClientServerStreamDataArg<short  > temp0(msg, 0, 2);
    vtkIdType   temp1;
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
    vtkClientServerStreamDataArg<unsigned short  > temp0(msg, 0, 2);
    vtkIdType   temp1;
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
    vtkClientServerStreamDataArg<long   > temp0(msg, 0, 2);
    vtkIdType   temp1;
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
    vtkClientServerStreamDataArg<unsigned long   > temp0(msg, 0, 2);
    vtkIdType   temp1;
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
    vtkClientServerStreamDataArg<unsigned char   > temp0(msg, 0, 2);
    vtkIdType   temp1;
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
    vtkIdType   temp1;
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
    vtkClientServerStreamDataArg<signed char > temp0(msg, 0, 2);
    vtkIdType   temp1;
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
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    vtkIdType   temp1;
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
    vtkIdType   temp1;
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
    vtkClientServerStreamDataArg<long long > temp0(msg, 0, 2);
    vtkIdType   temp1;
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
    vtkClientServerStreamDataArg<unsigned long long > temp0(msg, 0, 2);
    vtkIdType   temp1;
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
  if (!strcmp("Broadcast",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkDataObject  *temp0;
    int      temp1;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject") &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->Broadcast(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Broadcast",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkDataArray  *temp0;
    int      temp1;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataArray") &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->Broadcast(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Gather",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    vtkIdType   temp2;
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
    vtkClientServerStreamDataArg<unsigned int    > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned int    > temp1(msg, 0, 3);
    vtkIdType   temp2;
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
    vtkClientServerStreamDataArg<short  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<short  > temp1(msg, 0, 3);
    vtkIdType   temp2;
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
    vtkClientServerStreamDataArg<unsigned short  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned short  > temp1(msg, 0, 3);
    vtkIdType   temp2;
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
    vtkClientServerStreamDataArg<long   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<long   > temp1(msg, 0, 3);
    vtkIdType   temp2;
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
    vtkClientServerStreamDataArg<unsigned long   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned long   > temp1(msg, 0, 3);
    vtkIdType   temp2;
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
    vtkClientServerStreamDataArg<unsigned char   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned char   > temp1(msg, 0, 3);
    vtkIdType   temp2;
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
    vtkIdType   temp2;
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
    vtkClientServerStreamDataArg<signed char > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<signed char > temp1(msg, 0, 3);
    vtkIdType   temp2;
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
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    vtkIdType   temp2;
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
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    vtkIdType   temp2;
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
    vtkClientServerStreamDataArg<long long > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<long long > temp1(msg, 0, 3);
    vtkIdType   temp2;
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
    vtkClientServerStreamDataArg<unsigned long long > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned long long > temp1(msg, 0, 3);
    vtkIdType   temp2;
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
  if (!strcmp("Gather",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkDataArray  *temp0;
    vtkDataArray  *temp1;
    int      temp2;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataArray") &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->Gather(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GatherV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4 &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->GatherV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GatherV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<unsigned int    > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned int    > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4 &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->GatherV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GatherV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<short  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<short  > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4 &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->GatherV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GatherV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<unsigned short  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned short  > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4 &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->GatherV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GatherV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<long   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<long   > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4 &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->GatherV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GatherV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<unsigned long   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned long   > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4 &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->GatherV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GatherV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<unsigned char   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned char   > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4 &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->GatherV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GatherV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    char    *temp0;
    char    *temp1;
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp5;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4 &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->GatherV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GatherV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<signed char > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<signed char > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4 &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->GatherV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GatherV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4 &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->GatherV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GatherV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4 &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->GatherV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GatherV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<long long > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<long long > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4 &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->GatherV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GatherV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<unsigned long long > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned long long > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4 &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->GatherV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GatherV",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkDataArray  *temp0;
    vtkDataArray  *temp1;
    vtkClientServerStreamDataArg<vtkIdType > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    int      temp4;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataArray") &&
      temp2 &&
      temp3 &&
      msg.GetArgument(0, 6, &temp4))
      {
      temp20 = (op)->GatherV(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GatherV",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkDataArray  *temp0;
    vtkDataArray  *temp1;
    vtkIdTypeArray  *temp2;
    vtkIdTypeArray  *temp3;
    int      temp4;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIdTypeArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkIdTypeArray") &&
      msg.GetArgument(0, 6, &temp4))
      {
      temp20 = (op)->GatherV(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GatherV",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkDataArray  *temp0;
    vtkDataArray  *temp1;
    int      temp2;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataArray") &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->GatherV(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GatherV",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkDataObject  *temp0;
    vtkSmartPointer<vtkDataObject>  *temp1;
    int      temp2;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkSmartPointer<vtkDataObject>") &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->GatherV(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Scatter",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Scatter(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Scatter",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<unsigned int    > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned int    > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Scatter(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Scatter",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<short  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<short  > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Scatter(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Scatter",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<unsigned short  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned short  > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Scatter(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Scatter",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<long   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<long   > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Scatter(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Scatter",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<unsigned long   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned long   > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Scatter(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Scatter",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<unsigned char   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned char   > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Scatter(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Scatter",method) && msg.GetNumberOfArguments(0) == 6)
    {
    char    *temp0;
    char    *temp1;
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Scatter(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Scatter",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<signed char > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<signed char > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Scatter(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Scatter",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Scatter(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Scatter",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Scatter(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Scatter",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<long long > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<long long > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Scatter(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Scatter",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<unsigned long long > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned long long > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Scatter(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Scatter",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkDataArray  *temp0;
    vtkDataArray  *temp1;
    int      temp2;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataArray") &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->Scatter(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ScatterV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<vtkIdType > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkIdType   temp4;
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      temp2 &&
      temp3 &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->ScatterV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ScatterV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<unsigned int    > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned int    > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<vtkIdType > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkIdType   temp4;
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      temp2 &&
      temp3 &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->ScatterV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ScatterV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<short  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<short  > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<vtkIdType > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkIdType   temp4;
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      temp2 &&
      temp3 &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->ScatterV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ScatterV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<unsigned short  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned short  > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<vtkIdType > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkIdType   temp4;
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      temp2 &&
      temp3 &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->ScatterV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ScatterV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<long   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<long   > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<vtkIdType > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkIdType   temp4;
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      temp2 &&
      temp3 &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->ScatterV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ScatterV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<unsigned long   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned long   > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<vtkIdType > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkIdType   temp4;
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      temp2 &&
      temp3 &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->ScatterV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ScatterV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<unsigned char   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned char   > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<vtkIdType > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkIdType   temp4;
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      temp2 &&
      temp3 &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->ScatterV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ScatterV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    char    *temp0;
    char    *temp1;
    vtkClientServerStreamDataArg<vtkIdType > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkIdType   temp4;
    int      temp5;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      temp3 &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->ScatterV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ScatterV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<signed char > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<signed char > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<vtkIdType > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkIdType   temp4;
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      temp2 &&
      temp3 &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->ScatterV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ScatterV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<vtkIdType > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkIdType   temp4;
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      temp2 &&
      temp3 &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->ScatterV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ScatterV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<vtkIdType > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkIdType   temp4;
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      temp2 &&
      temp3 &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->ScatterV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ScatterV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<long long > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<long long > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<vtkIdType > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkIdType   temp4;
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      temp2 &&
      temp3 &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->ScatterV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ScatterV",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<unsigned long long > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned long long > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<vtkIdType > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkIdType   temp4;
    int      temp5;
    int      temp20;
    if(temp0 &&
      temp1 &&
      temp2 &&
      temp3 &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->ScatterV(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGather",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->AllGather(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGather",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<unsigned int    > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned int    > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->AllGather(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGather",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<short  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<short  > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->AllGather(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGather",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<unsigned short  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned short  > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->AllGather(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGather",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<long   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<long   > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->AllGather(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGather",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<unsigned long   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned long   > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->AllGather(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGather",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<unsigned char   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned char   > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->AllGather(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGather",method) && msg.GetNumberOfArguments(0) == 5)
    {
    char    *temp0;
    char    *temp1;
    vtkIdType   temp2;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->AllGather(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGather",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<signed char > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<signed char > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->AllGather(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGather",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->AllGather(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGather",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->AllGather(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGather",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<long long > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<long long > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->AllGather(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGather",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<unsigned long long > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned long long > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->AllGather(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGather",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkDataArray  *temp0;
    vtkDataArray  *temp1;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataArray"))
      {
      temp20 = (op)->AllGather(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGatherV",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4)
      {
      temp20 = (op)->AllGatherV(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGatherV",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<unsigned int    > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned int    > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4)
      {
      temp20 = (op)->AllGatherV(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGatherV",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<short  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<short  > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4)
      {
      temp20 = (op)->AllGatherV(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGatherV",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<unsigned short  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned short  > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4)
      {
      temp20 = (op)->AllGatherV(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGatherV",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<long   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<long   > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4)
      {
      temp20 = (op)->AllGatherV(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGatherV",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<unsigned long   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned long   > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4)
      {
      temp20 = (op)->AllGatherV(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGatherV",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<unsigned char   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned char   > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4)
      {
      temp20 = (op)->AllGatherV(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGatherV",method) && msg.GetNumberOfArguments(0) == 7)
    {
    char    *temp0;
    char    *temp1;
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4)
      {
      temp20 = (op)->AllGatherV(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGatherV",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<signed char > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<signed char > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4)
      {
      temp20 = (op)->AllGatherV(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGatherV",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4)
      {
      temp20 = (op)->AllGatherV(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGatherV",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4)
      {
      temp20 = (op)->AllGatherV(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGatherV",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<long long > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<long long > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4)
      {
      temp20 = (op)->AllGatherV(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGatherV",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<unsigned long long > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned long long > temp1(msg, 0, 3);
    vtkIdType   temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<vtkIdType > temp4(msg, 0, 6);
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4)
      {
      temp20 = (op)->AllGatherV(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGatherV",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkDataArray  *temp0;
    vtkDataArray  *temp1;
    vtkClientServerStreamDataArg<vtkIdType > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataArray") &&
      temp2 &&
      temp3)
      {
      temp20 = (op)->AllGatherV(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllGatherV",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkDataArray  *temp0;
    vtkDataArray  *temp1;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataArray"))
      {
      temp20 = (op)->AllGatherV(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Reduce",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp4;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      temp20 = (op)->Reduce(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Reduce",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<unsigned int    > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned int    > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp4;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      temp20 = (op)->Reduce(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Reduce",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<short  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<short  > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp4;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      temp20 = (op)->Reduce(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Reduce",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<unsigned short  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned short  > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp4;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      temp20 = (op)->Reduce(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Reduce",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<long   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<long   > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp4;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      temp20 = (op)->Reduce(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Reduce",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<unsigned long   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned long   > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp4;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      temp20 = (op)->Reduce(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Reduce",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<unsigned char   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned char   > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp4;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      temp20 = (op)->Reduce(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Reduce",method) && msg.GetNumberOfArguments(0) == 7)
    {
    char    *temp0;
    char    *temp1;
    vtkIdType   temp2;
    int      temp3;
    int      temp4;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      temp20 = (op)->Reduce(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Reduce",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<signed char > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<signed char > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp4;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      temp20 = (op)->Reduce(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Reduce",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp4;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      temp20 = (op)->Reduce(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Reduce",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp4;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      temp20 = (op)->Reduce(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Reduce",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<long long > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<long long > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp4;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      temp20 = (op)->Reduce(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Reduce",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<unsigned long long > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned long long > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp4;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      temp20 = (op)->Reduce(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Reduce",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkDataArray  *temp0;
    vtkDataArray  *temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataArray") &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Reduce(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllReduce",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->AllReduce(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllReduce",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<unsigned int    > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned int    > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->AllReduce(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllReduce",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<short  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<short  > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->AllReduce(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllReduce",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<unsigned short  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned short  > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->AllReduce(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllReduce",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<long   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<long   > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->AllReduce(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllReduce",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<unsigned long   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned long   > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->AllReduce(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllReduce",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<unsigned char   > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned char   > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->AllReduce(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllReduce",method) && msg.GetNumberOfArguments(0) == 6)
    {
    char    *temp0;
    char    *temp1;
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->AllReduce(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllReduce",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<signed char > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<signed char > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->AllReduce(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllReduce",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->AllReduce(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllReduce",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->AllReduce(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllReduce",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<long long > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<long long > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->AllReduce(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllReduce",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<unsigned long long > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<unsigned long long > temp1(msg, 0, 3);
    vtkIdType   temp2;
    int      temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->AllReduce(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllReduce",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkDataArray  *temp0;
    vtkDataArray  *temp1;
    int      temp2;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataArray") &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->AllReduce(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseCopy(temp0);
      return 1;
      }
    }
  if (!strcmp("GetParentProcessor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetParentProcessor(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLeftChildProcessor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetLeftChildProcessor(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MarshalDataObject",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkDataObject  *temp0;
    vtkCharArray  *temp1;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkCharArray"))
      {
      temp20 = (op)->MarshalDataObject(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UnMarshalDataObject",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkCharArray  *temp0;
    vtkDataObject  *temp1;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCharArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataObject"))
      {
      temp20 = (op)->UnMarshalDataObject(temp0,temp1);
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
  vtkmsg << "Object type: vtkCommunicator, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkCommunicator_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddCommandFunction("vtkCommunicator", vtkCommunicatorCommand);
    }
}
