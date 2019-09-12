// ClientServer wrapper for vtkOpenGLPolyDataMapper object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkOpenGLPolyDataMapper.h"
#include "vtkSystemIncludes.h"
#include "vtkStdString.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkOpenGLPolyDataMapperClientServerNewCommand(void* /*ctx*/)
{
  return vtkOpenGLPolyDataMapper::New();
}


int VTK_EXPORT vtkOpenGLPolyDataMapperCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkOpenGLPolyDataMapper *op = vtkOpenGLPolyDataMapper::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkOpenGLPolyDataMapper.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkOpenGLPolyDataMapper  *temp20;
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
    vtkOpenGLPolyDataMapper  *temp20;
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
    vtkOpenGLPolyDataMapper  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RenderPiece",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkRenderer  *temp0;
    vtkActor  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkActor"))
      {
      op->RenderPiece(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RenderPieceStart",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkRenderer  *temp0;
    vtkActor  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkActor"))
      {
      op->RenderPieceStart(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RenderPieceDraw",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkRenderer  *temp0;
    vtkActor  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkActor"))
      {
      op->RenderPieceDraw(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RenderPieceFinish",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkRenderer  *temp0;
    vtkActor  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkActor"))
      {
      op->RenderPieceFinish(temp0,temp1);
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
  if (!strcmp("GetPopulateSelectionSettings",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPopulateSelectionSettings();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPopulateSelectionSettings",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPopulateSelectionSettings(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSupportsSelection",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetSupportsSelection();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetIsOpaque",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetIsOpaque();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPointIdArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPointIdArrayName(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPointIdArrayName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetPointIdArrayName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCellIdArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCellIdArrayName(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCellIdArrayName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetCellIdArrayName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetProcessIdArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetProcessIdArrayName(temp0);
      return 1;
      }
    }
  if (!strcmp("GetProcessIdArrayName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetProcessIdArrayName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCompositeIdArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCompositeIdArrayName(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCompositeIdArrayName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetCompositeIdArrayName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ClearAllShaderReplacements",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearAllShaderReplacements();
      return 1;
      }
    }
  if (!strcmp("SetVertexShaderCode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetVertexShaderCode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetVertexShaderCode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetVertexShaderCode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFragmentShaderCode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFragmentShaderCode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFragmentShaderCode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetFragmentShaderCode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetGeometryShaderCode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGeometryShaderCode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGeometryShaderCode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetGeometryShaderCode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ShallowCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractMapper  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractMapper"))
      {
      op->ShallowCopy(temp0);
      return 1;
      }
    }
  if (!strcmp("ForceHaveAppleBugOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ForceHaveAppleBugOff();
      return 1;
      }
    }
  if (!strcmp("ForceHaveAppleBugOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ForceHaveAppleBugOn();
      return 1;
      }
    }
  if (!strcmp("GetHaveAppleBug",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetHaveAppleBug();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetVBOs",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkOpenGLVertexBufferObjectGroup  *temp20;
      {
      temp20 = (op)->GetVBOs();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetVBOShiftScaleMethod",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetVBOShiftScaleMethod(temp0);
      return 1;
      }
    }
  if (!strcmp("MapDataArrayToVertexAttribute",method) && msg.GetNumberOfArguments(0) == 6)
    {
    char    *temp0;
    char    *temp1;
    int      temp2;
    int      temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->MapDataArrayToVertexAttribute(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("MapDataArrayToMultiTextureAttribute",method) && msg.GetNumberOfArguments(0) == 6)
    {
    char    *temp0;
    char    *temp1;
    int      temp2;
    int      temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->MapDataArrayToMultiTextureAttribute(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("RemoveVertexAttributeMapping",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RemoveVertexAttributeMapping(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveAllVertexAttributeMappings",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllVertexAttributeMappings();
      return 1;
      }
    }

  {
    const char* commandName = "vtkPolyDataMapper";
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
  vtkmsg << "Object type: vtkOpenGLPolyDataMapper, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkOpenGLPolyDataMapper_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkOpenGLPolyDataMapper", vtkOpenGLPolyDataMapperClientServerNewCommand);
    csi->AddCommandFunction("vtkOpenGLPolyDataMapper", vtkOpenGLPolyDataMapperCommand);
    }
}
