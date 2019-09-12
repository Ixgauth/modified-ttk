// ClientServer wrapper for vtkImageMapToColors object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkImageMapToColors.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkImageMapToColorsClientServerNewCommand(void* /*ctx*/)
{
  return vtkImageMapToColors::New();
}


int VTK_EXPORT vtkImageMapToColorsCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkImageMapToColors *op = vtkImageMapToColors::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkImageMapToColors.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkImageMapToColors  *temp20;
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
    vtkImageMapToColors  *temp20;
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
    vtkImageMapToColors  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLookupTable",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkScalarsToColors  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkScalarsToColors"))
      {
      op->SetLookupTable(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLookupTable",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkScalarsToColors  *temp20;
      {
      temp20 = (op)->GetLookupTable();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOutputFormat",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOutputFormat(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOutputFormat",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetOutputFormat();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOutputFormatToRGBA",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOutputFormatToRGBA();
      return 1;
      }
    }
  if (!strcmp("SetOutputFormatToRGB",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOutputFormatToRGB();
      return 1;
      }
    }
  if (!strcmp("SetOutputFormatToLuminanceAlpha",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOutputFormatToLuminanceAlpha();
      return 1;
      }
    }
  if (!strcmp("SetOutputFormatToLuminance",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOutputFormatToLuminance();
      return 1;
      }
    }
  if (!strcmp("SetActiveComponent",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetActiveComponent(temp0);
      return 1;
      }
    }
  if (!strcmp("GetActiveComponent",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetActiveComponent();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPassAlphaToOutput",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPassAlphaToOutput(temp0);
      return 1;
      }
    }
  if (!strcmp("PassAlphaToOutputOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PassAlphaToOutputOn();
      return 1;
      }
    }
  if (!strcmp("PassAlphaToOutputOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PassAlphaToOutputOff();
      return 1;
      }
    }
  if (!strcmp("GetPassAlphaToOutput",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPassAlphaToOutput();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned long     temp20;
      {
      temp20 = (op)->GetMTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNaNColor",method) && msg.GetNumberOfArguments(0) == 6)
    {
    unsigned char     temp0;
    unsigned char     temp1;
    unsigned char     temp2;
    unsigned char     temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetNaNColor(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("GetNaNColor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned char    *temp20;
      {
      temp20 = (op)->GetNaNColor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,4) << vtkClientServerStream::End;
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
  vtkmsg << "Object type: vtkImageMapToColors, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkImageMapToColors_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkImageMapToColors", vtkImageMapToColorsClientServerNewCommand);
    csi->AddCommandFunction("vtkImageMapToColors", vtkImageMapToColorsCommand);
    }
}