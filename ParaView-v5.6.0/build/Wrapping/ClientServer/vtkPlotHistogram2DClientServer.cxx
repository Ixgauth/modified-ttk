// ClientServer wrapper for vtkPlotHistogram2D object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPlotHistogram2D.h"
#include "vtkSystemIncludes.h"
#include "vtkStdString.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkPlotHistogram2DClientServerNewCommand(void* /*ctx*/)
{
  return vtkPlotHistogram2D::New();
}


int VTK_EXPORT vtkPlotHistogram2DCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkPlotHistogram2D *op = vtkPlotHistogram2D::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkPlotHistogram2D.  "
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
    vtkPlotHistogram2D  *temp20;
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
    vtkPlotHistogram2D  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPlotHistogram2D  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Update",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Update();
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
  if (!strcmp("SetInputData",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkImageData  *temp0;
    vtkIdType   temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkImageData") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetInputData(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetInputData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTable  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTable"))
      {
      op->SetInputData(temp0);
      return 1;
      }
    }
  if (!strcmp("SetInputData",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkTable  *temp0;
    char    *temp1;
    char    *temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTable") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetInputData(temp0,vtkStdString(temp1),vtkStdString(temp2));
      return 1;
      }
    }
  if (!strcmp("GetInputImageData",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkImageData  *temp20;
      {
      temp20 = (op)->GetInputImageData();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTransferFunction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkScalarsToColors  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkScalarsToColors"))
      {
      op->SetTransferFunction(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTransferFunction",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkScalarsToColors  *temp20;
      {
      temp20 = (op)->GetTransferFunction();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[4];
    if(msg.GetArgument(0, 2, temp0, 4))
      {
      op->GetBounds(temp0);
      return 1;
      }
    }

  {
    const char* commandName = "vtkPlot";
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
  vtkmsg << "Object type: vtkPlotHistogram2D, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkPlotHistogram2D_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkPlotHistogram2D", vtkPlotHistogram2DClientServerNewCommand);
    csi->AddCommandFunction("vtkPlotHistogram2D", vtkPlotHistogram2DCommand);
    }
}