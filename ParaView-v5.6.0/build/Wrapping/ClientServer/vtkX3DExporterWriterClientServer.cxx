// ClientServer wrapper for vtkX3DExporterWriter object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkX3DExporterWriter.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


int VTK_EXPORT vtkX3DExporterWriterCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkX3DExporterWriter *op = vtkX3DExporterWriter::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkX3DExporterWriter.  "
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
    vtkX3DExporterWriter  *temp20;
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
    vtkX3DExporterWriter  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("OpenFile",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->OpenFile(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("OpenStream",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->OpenStream();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetWriteToOutputString",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetWriteToOutputString(temp0);
      return 1;
      }
    }
  if (!strcmp("GetWriteToOutputString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetWriteToOutputString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("WriteToOutputStringOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->WriteToOutputStringOn();
      return 1;
      }
    }
  if (!strcmp("WriteToOutputStringOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->WriteToOutputStringOff();
      return 1;
      }
    }
  if (!strcmp("GetOutputStringLength",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetOutputStringLength();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetOutputString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetOutputString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RegisterAndGetOutputString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->RegisterAndGetOutputString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CloseFile",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CloseFile();
      return 1;
      }
    }
  if (!strcmp("Flush",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Flush();
      return 1;
      }
    }
  if (!strcmp("StartDocument",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StartDocument();
      return 1;
      }
    }
  if (!strcmp("EndDocument",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EndDocument();
      return 1;
      }
    }
  if (!strcmp("StartNode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->StartNode(temp0);
      return 1;
      }
    }
  if (!strcmp("EndNode",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EndNode();
      return 1;
      }
    }
  if (!strcmp("SetField",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    char    *temp1;
    bool   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetField(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetField",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetField(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetField",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    float    temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetField(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetField",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetField(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetField",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    bool   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetField(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetField",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    int      temp1;
    vtkClientServerStreamDataArg<double > temp2(msg, 0, 4);
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2)
      {
      op->SetField(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetField",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    int      temp1;
    vtkDataArray  *temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkDataArray"))
      {
      op->SetField(temp0,temp1,temp2);
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
  vtkmsg << "Object type: vtkX3DExporterWriter, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkX3DExporterWriter_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddCommandFunction("vtkX3DExporterWriter", vtkX3DExporterWriterCommand);
    }
}