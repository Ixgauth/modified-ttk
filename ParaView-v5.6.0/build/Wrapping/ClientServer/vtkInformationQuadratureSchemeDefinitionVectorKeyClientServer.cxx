// ClientServer wrapper for vtkInformationQuadratureSchemeDefinitionVectorKey object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkInformationQuadratureSchemeDefinitionVectorKey.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


int VTK_EXPORT vtkInformationQuadratureSchemeDefinitionVectorKeyCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = vtkInformationQuadratureSchemeDefinitionVectorKey::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkInformationQuadratureSchemeDefinitionVectorKey.  "
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
    vtkInformationQuadratureSchemeDefinitionVectorKey  *temp20;
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
    vtkInformationQuadratureSchemeDefinitionVectorKey  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Clear",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformation  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation"))
      {
      op->Clear(temp0);
      return 1;
      }
    }
  if (!strcmp("Resize",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformation  *temp0;
    int      temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->Resize(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Size",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformation  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation"))
      {
      temp20 = (op)->Size(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Length",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformation  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation"))
      {
      temp20 = (op)->Length(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Append",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformation  *temp0;
    vtkQuadratureSchemeDefinition  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkQuadratureSchemeDefinition"))
      {
      op->Append(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Set",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    vtkQuadratureSchemeDefinition  *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkQuadratureSchemeDefinition") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->Set(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("Get",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformation  *temp0;
    int      temp1;
    vtkQuadratureSchemeDefinition  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->Get(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ShallowCopy",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformation  *temp0;
    vtkInformation  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformation"))
      {
      op->ShallowCopy(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("DeepCopy",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformation  *temp0;
    vtkInformation  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformation"))
      {
      op->DeepCopy(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SaveState",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformation  *temp0;
    vtkXMLDataElement  *temp1;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkXMLDataElement"))
      {
      temp20 = (op)->SaveState(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RestoreState",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformation  *temp0;
    vtkXMLDataElement  *temp1;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkXMLDataElement"))
      {
      temp20 = (op)->RestoreState(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkInformationKey";
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
  vtkmsg << "Object type: vtkInformationQuadratureSchemeDefinitionVectorKey, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkInformationQuadratureSchemeDefinitionVectorKey_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddCommandFunction("vtkInformationQuadratureSchemeDefinitionVectorKey", vtkInformationQuadratureSchemeDefinitionVectorKeyCommand);
    }
}
