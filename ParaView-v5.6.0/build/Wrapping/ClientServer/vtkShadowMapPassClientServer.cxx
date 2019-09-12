// ClientServer wrapper for vtkShadowMapPass object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkShadowMapPass.h"
#include "vtkSystemIncludes.h"
#include "vtkStdString.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkShadowMapPassClientServerNewCommand(void* /*ctx*/)
{
  return vtkShadowMapPass::New();
}


int VTK_EXPORT vtkShadowMapPassCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkShadowMapPass *op = vtkShadowMapPass::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkShadowMapPass.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkShadowMapPass  *temp20;
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
    vtkShadowMapPass  *temp20;
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
    vtkShadowMapPass  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ReleaseGraphicsResources",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkWindow  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkWindow"))
      {
      op->ReleaseGraphicsResources(temp0);
      return 1;
      }
    }
  if (!strcmp("GetShadowMapBakerPass",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkShadowMapBakerPass  *temp20;
      {
      temp20 = (op)->GetShadowMapBakerPass();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetShadowMapBakerPass",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkShadowMapBakerPass  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkShadowMapBakerPass"))
      {
      op->SetShadowMapBakerPass(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOpaqueSequence",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkRenderPass  *temp20;
      {
      temp20 = (op)->GetOpaqueSequence();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOpaqueSequence",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderPass  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderPass"))
      {
      op->SetOpaqueSequence(temp0);
      return 1;
      }
    }
  if (!strcmp("ShadowMapPass",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationObjectBaseKey  *temp20;
      {
      temp20 = (op)->ShadowMapPass();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetFragmentDeclaration",method) && msg.GetNumberOfArguments(0) == 2)
    {
    std::string   temp20;
      {
      temp20 = (op)->GetFragmentDeclaration();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetFragmentImplementation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    std::string   temp20;
      {
      temp20 = (op)->GetFragmentImplementation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetShaderParameters",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkShaderProgram  *temp0;
    vtkAbstractMapper  *temp1;
    vtkProp  *temp2;
    vtkOpenGLVertexArrayObject  *temp3;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkShaderProgram") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkAbstractMapper") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkProp") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkOpenGLVertexArrayObject"))
      {
      temp20 = (op)->SetShaderParameters(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkOpenGLRenderPass";
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
  vtkmsg << "Object type: vtkShadowMapPass, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkShadowMapPass_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkShadowMapPass", vtkShadowMapPassClientServerNewCommand);
    csi->AddCommandFunction("vtkShadowMapPass", vtkShadowMapPassCommand);
    }
}