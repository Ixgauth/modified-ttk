// ClientServer wrapper for vtkContextArea object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkContextArea.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkContextAreaClientServerNewCommand(void* /*ctx*/)
{
  return vtkContextArea::New();
}


int VTK_EXPORT vtkContextAreaCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkContextArea *op = vtkContextArea::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkContextArea.  "
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
    vtkContextArea  *temp20;
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
    vtkContextArea  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkContextArea  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDrawAreaItem",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAbstractContextItem  *temp20;
      {
      temp20 = (op)->GetDrawAreaItem();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Paint",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkContext2D  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkContext2D"))
      {
      temp20 = (op)->Paint(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetFixedAspect",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetFixedAspect();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFixedAspect",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFixedAspect(temp0);
      return 1;
      }
    }
  if (!strcmp("SetFixedRect",method) && msg.GetNumberOfArguments(0) == 6)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetFixedRect(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("GetFixedMarginsArray",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[4];
    if(msg.GetArgument(0, 2, temp0, 4))
      {
      op->GetFixedMarginsArray(temp0);
      return 1;
      }
    }
  if (!strcmp("SetFixedMargins",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[4];
    if(msg.GetArgument(0, 2, temp0, 4))
      {
      op->SetFixedMargins(temp0);
      return 1;
      }
    }
  if (!strcmp("SetFixedMargins",method) && msg.GetNumberOfArguments(0) == 6)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetFixedMargins(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("GetFillViewport",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetFillViewport();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFillViewport",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFillViewport(temp0);
      return 1;
      }
    }
  if (!strcmp("FillViewportOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->FillViewportOn();
      return 1;
      }
    }
  if (!strcmp("FillViewportOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->FillViewportOff();
      return 1;
      }
    }
  if (!strcmp("SetShowGrid",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetShowGrid(temp0);
      return 1;
      }
    }
  if (!strcmp("GetShowGrid",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetShowGrid();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ShowGridOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ShowGridOn();
      return 1;
      }
    }
  if (!strcmp("ShowGridOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ShowGridOff();
      return 1;
      }
    }

  {
    const char* commandName = "vtkAbstractContextItem";
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
  vtkmsg << "Object type: vtkContextArea, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkContextArea_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkContextArea", vtkContextAreaClientServerNewCommand);
    csi->AddCommandFunction("vtkContextArea", vtkContextAreaCommand);
    }
}
