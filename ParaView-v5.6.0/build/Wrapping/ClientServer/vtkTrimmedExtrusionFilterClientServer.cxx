// ClientServer wrapper for vtkTrimmedExtrusionFilter object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkTrimmedExtrusionFilter.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkTrimmedExtrusionFilterClientServerNewCommand(void* /*ctx*/)
{
  return vtkTrimmedExtrusionFilter::New();
}


int VTK_EXPORT vtkTrimmedExtrusionFilterCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkTrimmedExtrusionFilter *op = vtkTrimmedExtrusionFilter::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkTrimmedExtrusionFilter.  "
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
    vtkTrimmedExtrusionFilter  *temp20;
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
    vtkTrimmedExtrusionFilter  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTrimmedExtrusionFilter  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetExtrusionDirection",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetExtrusionDirection(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetExtrusionDirection",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetExtrusionDirection(temp0);
      return 1;
      }
    }
  if (!strcmp("GetExtrusionDirection",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetExtrusionDirection();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTrimSurfaceData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPolyData  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPolyData"))
      {
      op->SetTrimSurfaceData(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTrimSurfaceConnection",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAlgorithmOutput  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAlgorithmOutput"))
      {
      op->SetTrimSurfaceConnection(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTrimSurface",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPolyData  *temp20;
      {
      temp20 = (op)->GetTrimSurface();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTrimSurface",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationVector  *temp0;
    vtkPolyData  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationVector"))
      {
      temp20 = (op)->GetTrimSurface(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCapping",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCapping(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCapping",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetCapping();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CappingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CappingOn();
      return 1;
      }
    }
  if (!strcmp("CappingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CappingOff();
      return 1;
      }
    }
  if (!strcmp("SetExtrusionStrategy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetExtrusionStrategy(temp0);
      return 1;
      }
    }
  if (!strcmp("GetExtrusionStrategy",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetExtrusionStrategy();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetExtrusionStrategyToBoundaryEdges",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetExtrusionStrategyToBoundaryEdges();
      return 1;
      }
    }
  if (!strcmp("SetExtrusionStrategyToAllEdges",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetExtrusionStrategyToAllEdges();
      return 1;
      }
    }
  if (!strcmp("SetCappingStrategy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCappingStrategy(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCappingStrategy",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetCappingStrategy();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCappingStrategyToIntersection",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCappingStrategyToIntersection();
      return 1;
      }
    }
  if (!strcmp("SetCappingStrategyToMinimumDistance",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCappingStrategyToMinimumDistance();
      return 1;
      }
    }
  if (!strcmp("SetCappingStrategyToMaximumDistance",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCappingStrategyToMaximumDistance();
      return 1;
      }
    }
  if (!strcmp("SetCappingStrategyToAverageDistance",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCappingStrategyToAverageDistance();
      return 1;
      }
    }
  if (!strcmp("SetLocator",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractCellLocator  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractCellLocator"))
      {
      op->SetLocator(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLocator",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAbstractCellLocator  *temp20;
      {
      temp20 = (op)->GetLocator();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkPolyDataAlgorithm";
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
  vtkmsg << "Object type: vtkTrimmedExtrusionFilter, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkTrimmedExtrusionFilter_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkTrimmedExtrusionFilter", vtkTrimmedExtrusionFilterClientServerNewCommand);
    csi->AddCommandFunction("vtkTrimmedExtrusionFilter", vtkTrimmedExtrusionFilterCommand);
    }
}
