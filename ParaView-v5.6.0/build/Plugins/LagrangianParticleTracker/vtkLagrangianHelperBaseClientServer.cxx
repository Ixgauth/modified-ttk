// ClientServer wrapper for vtkLagrangianHelperBase object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkLagrangianHelperBase.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


int VTK_EXPORT vtkLagrangianHelperBaseCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkLagrangianHelperBase *op = vtkLagrangianHelperBase::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkLagrangianHelperBase.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("SafeDownCast",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkObjectBase  *temp0;
    vtkLagrangianHelperBase  *temp20;
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
    vtkLagrangianHelperBase  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetIntegrationModel",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkLagrangianBasicIntegrationModel  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkLagrangianBasicIntegrationModel"))
      {
      op->SetIntegrationModel(temp0);
      return 1;
      }
    }
  if (!strcmp("GetIntegrationModel",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkLagrangianBasicIntegrationModel  *temp20;
      {
      temp20 = (op)->GetIntegrationModel();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RemoveAllArraysToGenerate",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllArraysToGenerate();
      return 1;
      }
    }
  if (!strcmp("SetNumberOfArrayToGenerate",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfArrayToGenerate(temp0);
      return 1;
      }
    }
  if (!strcmp("SetArrayToGenerate",method) && msg.GetNumberOfArguments(0) == 8)
    {
    int      temp0;
    char    *temp1;
    int      temp2;
    int      temp3;
    int      temp4;
    char    *temp5;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      op->SetArrayToGenerate(temp0,temp1,temp2,temp3,temp4,temp5);
      return 1;
      }
    }

  {
    const char* commandName = "vtkDataObjectAlgorithm";
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
  vtkmsg << "Object type: vtkLagrangianHelperBase, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkLagrangianHelperBase_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddCommandFunction("vtkLagrangianHelperBase", vtkLagrangianHelperBaseCommand);
    }
}
