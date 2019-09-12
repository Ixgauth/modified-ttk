// ClientServer wrapper for vtkWebGLPolyData object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkWebGLPolyData.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkWebGLPolyDataClientServerNewCommand(void* /*ctx*/)
{
  return vtkWebGLPolyData::New();
}


int VTK_EXPORT vtkWebGLPolyDataCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkWebGLPolyData *op = vtkWebGLPolyData::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkWebGLPolyData.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkWebGLPolyData  *temp20;
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
    vtkWebGLPolyData  *temp20;
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
    vtkWebGLPolyData  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GenerateBinaryData",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateBinaryData();
      return 1;
      }
    }
  if (!strcmp("GetBinarySize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetBinarySize(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfParts",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfParts();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPoints",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkTriangleFilter  *temp0;
    vtkActor  *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTriangleFilter") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkActor") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->GetPoints(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetLinesFromPolygon",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkMapper  *temp0;
    vtkActor  *temp1;
    int      temp2;
    vtkClientServerStreamDataArg<double > temp3(msg, 0, 5);
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMapper") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkActor") &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3)
      {
      op->GetLinesFromPolygon(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("GetLines",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkTriangleFilter  *temp0;
    vtkActor  *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTriangleFilter") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkActor") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->GetLines(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetColorsFromPolyData",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<unsigned char   > temp0(msg, 0, 2);
    vtkPolyData  *temp1;
    vtkActor  *temp2;
    if(temp0 &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPolyData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkActor"))
      {
      op->GetColorsFromPolyData(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetPolygonsFromPointData",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkTriangleFilter  *temp0;
    vtkActor  *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTriangleFilter") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkActor") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->GetPolygonsFromPointData(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetPolygonsFromCellData",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkTriangleFilter  *temp0;
    vtkActor  *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTriangleFilter") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkActor") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->GetPolygonsFromCellData(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetColorsFromPointData",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<unsigned char   > temp0(msg, 0, 2);
    vtkPointData  *temp1;
    vtkPolyData  *temp2;
    vtkActor  *temp3;
    if(temp0 &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkPolyData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkActor"))
      {
      op->GetColorsFromPointData(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetMesh",method) && msg.GetNumberOfArguments(0) == 10)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    int      temp1;
    vtkClientServerStreamDataArg<int    > temp2(msg, 0, 4);
    int      temp3;
    vtkClientServerStreamDataArg<float  > temp4(msg, 0, 6);
    vtkClientServerStreamDataArg<unsigned char   > temp5(msg, 0, 7);
    vtkClientServerStreamDataArg<float  > temp6(msg, 0, 8);
    int      temp7;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      msg.GetArgument(0, 5, &temp3) &&
      temp4 &&
      temp5 &&
      temp6 &&
      msg.GetArgument(0, 9, &temp7))
      {
      op->SetMesh(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7);
      return 1;
      }
    }
  if (!strcmp("SetLine",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    int      temp1;
    vtkClientServerStreamDataArg<int    > temp2(msg, 0, 4);
    int      temp3;
    vtkClientServerStreamDataArg<unsigned char   > temp4(msg, 0, 6);
    int      temp5;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      msg.GetArgument(0, 5, &temp3) &&
      temp4 &&
      msg.GetArgument(0, 7, &temp5))
      {
      op->SetLine(temp0,temp1,temp2,temp3,temp4,temp5);
      return 1;
      }
    }
  if (!strcmp("SetPoints",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    int      temp1;
    vtkClientServerStreamDataArg<unsigned char   > temp2(msg, 0, 4);
    int      temp3;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetPoints(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetTransformationMatrix",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMatrix4x4  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMatrix4x4"))
      {
      op->SetTransformationMatrix(temp0);
      return 1;
      }
    }

  {
    const char* commandName = "vtkWebGLObject";
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
  vtkmsg << "Object type: vtkWebGLPolyData, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkWebGLPolyData_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkWebGLPolyData", vtkWebGLPolyDataClientServerNewCommand);
    csi->AddCommandFunction("vtkWebGLPolyData", vtkWebGLPolyDataCommand);
    }
}