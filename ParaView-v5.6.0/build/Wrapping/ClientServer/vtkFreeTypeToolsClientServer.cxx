// ClientServer wrapper for vtkFreeTypeTools object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkFreeTypeTools.h"
#include "vtkSystemIncludes.h"
#include "vtkStdString.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


int VTK_EXPORT vtkFreeTypeToolsCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkFreeTypeTools *op = vtkFreeTypeTools::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkFreeTypeTools.  "
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
    vtkFreeTypeTools  *temp20;
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
    vtkFreeTypeTools  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInstance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkFreeTypeTools  *temp20;
      {
      temp20 = (op)->GetInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInstance",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkFreeTypeTools  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkFreeTypeTools"))
      {
      op->SetInstance(temp0);
      return 1;
      }
    }
  if (!strcmp("SetDebugTextures",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDebugTextures(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDebugTextures",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetDebugTextures();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DebugTexturesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DebugTexturesOn();
      return 1;
      }
    }
  if (!strcmp("DebugTexturesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DebugTexturesOff();
      return 1;
      }
    }
  if (!strcmp("SetMaximumNumberOfFaces",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaximumNumberOfFaces(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaximumNumberOfFacesMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetMaximumNumberOfFacesMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaximumNumberOfFacesMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetMaximumNumberOfFacesMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaximumNumberOfFaces",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetMaximumNumberOfFaces();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaximumNumberOfSizes",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaximumNumberOfSizes(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaximumNumberOfSizesMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetMaximumNumberOfSizesMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaximumNumberOfSizesMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetMaximumNumberOfSizesMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaximumNumberOfSizes",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetMaximumNumberOfSizes();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaximumNumberOfBytes",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned long     temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaximumNumberOfBytes(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaximumNumberOfBytesMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned long     temp20;
      {
      temp20 = (op)->GetMaximumNumberOfBytesMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaximumNumberOfBytesMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned long     temp20;
      {
      temp20 = (op)->GetMaximumNumberOfBytesMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaximumNumberOfBytes",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned long     temp20;
      {
      temp20 = (op)->GetMaximumNumberOfBytes();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("StringToPath",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkTextProperty  *temp0;
    char    *temp1;
    int      temp2;
    vtkPath  *temp3;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTextProperty") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkPath"))
      {
      temp20 = (op)->StringToPath(temp0,vtkStdString(temp1),temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetConstrainedFontSize",method) && msg.GetNumberOfArguments(0) == 7)
    {
    char    *temp0;
    vtkTextProperty  *temp1;
    int      temp2;
    int      temp3;
    int      temp4;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkTextProperty") &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      temp20 = (op)->GetConstrainedFontSize(vtkStdString(temp0),temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HashString",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    unsigned short    temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->HashString(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetScaleToPowerTwo",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScaleToPowerTwo(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScaleToPowerTwo",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetScaleToPowerTwo();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ScaleToPowerTwoOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ScaleToPowerTwoOn();
      return 1;
      }
    }
  if (!strcmp("ScaleToPowerTwoOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ScaleToPowerTwoOff();
      return 1;
      }
    }
  if (!strcmp("SetForceCompiledFonts",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetForceCompiledFonts(temp0);
      return 1;
      }
    }
  if (!strcmp("GetForceCompiledFonts",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetForceCompiledFonts();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ForceCompiledFontsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ForceCompiledFontsOn();
      return 1;
      }
    }
  if (!strcmp("ForceCompiledFontsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ForceCompiledFontsOff();
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
  vtkmsg << "Object type: vtkFreeTypeTools, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkFreeTypeTools_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddCommandFunction("vtkFreeTypeTools", vtkFreeTypeToolsCommand);
    }
}