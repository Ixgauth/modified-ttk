// ClientServer wrapper for vtkImageMaskBits object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkImageMaskBits.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkImageMaskBitsClientServerNewCommand(void* /*ctx*/)
{
  return vtkImageMaskBits::New();
}


int VTK_EXPORT vtkImageMaskBitsCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkImageMaskBits *op = vtkImageMaskBits::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkImageMaskBits.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkImageMaskBits  *temp20;
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
    vtkImageMaskBits  *temp20;
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
    vtkImageMaskBits  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMasks",method) && msg.GetNumberOfArguments(0) == 6)
    {
    unsigned int      temp0;
    unsigned int      temp1;
    unsigned int      temp2;
    unsigned int      temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetMasks(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetMask",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMask(temp0);
      return 1;
      }
    }
  if (!strcmp("SetMasks",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned int      temp0;
    unsigned int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetMasks(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetMasks",method) && msg.GetNumberOfArguments(0) == 5)
    {
    unsigned int      temp0;
    unsigned int      temp1;
    unsigned int      temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetMasks(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetMasks",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int     *temp20;
      {
      temp20 = (op)->GetMasks();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,4) << vtkClientServerStream::End;
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
  if (!strcmp("SetOperationToAnd",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToAnd();
      return 1;
      }
    }
  if (!strcmp("SetOperationToOr",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToOr();
      return 1;
      }
    }
  if (!strcmp("SetOperationToXor",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToXor();
      return 1;
      }
    }
  if (!strcmp("SetOperationToNand",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToNand();
      return 1;
      }
    }
  if (!strcmp("SetOperationToNor",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOperationToNor();
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
  vtkmsg << "Object type: vtkImageMaskBits, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkImageMaskBits_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkImageMaskBits", vtkImageMaskBitsClientServerNewCommand);
    csi->AddCommandFunction("vtkImageMaskBits", vtkImageMaskBitsCommand);
    }
}
