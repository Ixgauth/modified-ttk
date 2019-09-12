// ClientServer wrapper for vtkCompositeDataDisplayAttributes object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkCompositeDataDisplayAttributes.h"
#include "vtkSystemIncludes.h"
#include "vtkStdString.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkCompositeDataDisplayAttributesClientServerNewCommand(void* /*ctx*/)
{
  return vtkCompositeDataDisplayAttributes::New();
}


int VTK_EXPORT vtkCompositeDataDisplayAttributesCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkCompositeDataDisplayAttributes *op = vtkCompositeDataDisplayAttributes::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkCompositeDataDisplayAttributes.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkCompositeDataDisplayAttributes  *temp20;
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
    vtkCompositeDataDisplayAttributes  *temp20;
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
    vtkCompositeDataDisplayAttributes  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HasBlockVisibilities",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->HasBlockVisibilities();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetBlockVisibility",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkDataObject  *temp0;
    bool   temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetBlockVisibility(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetBlockVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataObject  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject"))
      {
      temp20 = (op)->GetBlockVisibility(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HasBlockVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataObject  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject"))
      {
      temp20 = (op)->HasBlockVisibility(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RemoveBlockVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataObject  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject"))
      {
      op->RemoveBlockVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveBlockVisibilities",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveBlockVisibilities();
      return 1;
      }
    }
#if !defined(VTK_LEGACY_REMOVE)
  if (!strcmp("RemoveBlockVisibilites",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveBlockVisibilites();
      return 1;
      }
    }
#endif
  if (!strcmp("HasBlockPickabilities",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->HasBlockPickabilities();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetBlockPickability",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkDataObject  *temp0;
    bool   temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetBlockPickability(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetBlockPickability",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataObject  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject"))
      {
      temp20 = (op)->GetBlockPickability(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HasBlockPickability",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataObject  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject"))
      {
      temp20 = (op)->HasBlockPickability(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RemoveBlockPickability",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataObject  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject"))
      {
      op->RemoveBlockPickability(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveBlockPickabilities",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveBlockPickabilities();
      return 1;
      }
    }
  if (!strcmp("HasBlockColors",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->HasBlockColors();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HasBlockColor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataObject  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject"))
      {
      temp20 = (op)->HasBlockColor(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RemoveBlockColor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataObject  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject"))
      {
      op->RemoveBlockColor(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveBlockColors",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveBlockColors();
      return 1;
      }
    }
  if (!strcmp("SetBlockOpacity",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkDataObject  *temp0;
    double   temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetBlockOpacity(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetBlockOpacity",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataObject  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject"))
      {
      temp20 = (op)->GetBlockOpacity(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HasBlockOpacities",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->HasBlockOpacities();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HasBlockOpacity",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataObject  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject"))
      {
      temp20 = (op)->HasBlockOpacity(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RemoveBlockOpacity",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataObject  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject"))
      {
      op->RemoveBlockOpacity(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveBlockOpacities",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveBlockOpacities();
      return 1;
      }
    }
  if (!strcmp("SetBlockMaterial",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkDataObject  *temp0;
    char    *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetBlockMaterial(temp0,vtkStdString(temp1));
      return 1;
      }
    }
  if (!strcmp("GetBlockMaterial",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataObject  *temp0;
    const std::string  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject"))
      {
      temp20 = &(op)->GetBlockMaterial(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << *temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HasBlockMaterials",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->HasBlockMaterials();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HasBlockMaterial",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataObject  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject"))
      {
      temp20 = (op)->HasBlockMaterial(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RemoveBlockMaterial",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataObject  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject"))
      {
      op->RemoveBlockMaterial(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveBlockMaterials",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveBlockMaterials();
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
  vtkmsg << "Object type: vtkCompositeDataDisplayAttributes, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkCompositeDataDisplayAttributes_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkCompositeDataDisplayAttributes", vtkCompositeDataDisplayAttributesClientServerNewCommand);
    csi->AddCommandFunction("vtkCompositeDataDisplayAttributes", vtkCompositeDataDisplayAttributesCommand);
    }
}
