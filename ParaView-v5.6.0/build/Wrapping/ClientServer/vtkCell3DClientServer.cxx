// ClientServer wrapper for vtkCell3D object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkCell3D.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


int VTK_EXPORT vtkCell3DCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkCell3D *op = vtkCell3D::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkCell3D.  "
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
    vtkCell3D  *temp20;
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
    vtkCell3D  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Contour",method) && msg.GetNumberOfArguments(0) == 13)
    {
    double   temp0;
    vtkDataArray  *temp1;
    vtkIncrementalPointLocator  *temp2;
    vtkCellArray  *temp3;
    vtkCellArray  *temp4;
    vtkCellArray  *temp5;
    vtkPointData  *temp6;
    vtkPointData  *temp7;
    vtkCellData  *temp8;
    vtkIdType   temp9;
    vtkCellData  *temp10;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIncrementalPointLocator") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkCellArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkCellArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkCellArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 8, &temp6, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 9, &temp7, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 10, &temp8, "vtkCellData") &&
      msg.GetArgument(0, 11, &temp9) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 12, &temp10, "vtkCellData"))
      {
      op->Contour(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8,temp9,temp10);
      return 1;
      }
    }
  if (!strcmp("Clip",method) && msg.GetNumberOfArguments(0) == 12)
    {
    double   temp0;
    vtkDataArray  *temp1;
    vtkIncrementalPointLocator  *temp2;
    vtkCellArray  *temp3;
    vtkPointData  *temp4;
    vtkPointData  *temp5;
    vtkCellData  *temp6;
    vtkIdType   temp7;
    vtkCellData  *temp8;
    int      temp9;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIncrementalPointLocator") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkCellArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 8, &temp6, "vtkCellData") &&
      msg.GetArgument(0, 9, &temp7) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 10, &temp8, "vtkCellData") &&
      msg.GetArgument(0, 11, &temp9))
      {
      op->Clip(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8,temp9);
      return 1;
      }
    }
  if (!strcmp("GetCellDimension",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetCellDimension();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMergeTolerance",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMergeTolerance(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMergeToleranceMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMergeToleranceMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMergeToleranceMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMergeToleranceMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMergeTolerance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMergeTolerance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkCell";
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
  vtkmsg << "Object type: vtkCell3D, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkCell3D_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddCommandFunction("vtkCell3D", vtkCell3DCommand);
    }
}
