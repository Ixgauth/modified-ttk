// ClientServer wrapper for vtkProbeFilter object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkProbeFilter.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkProbeFilterClientServerNewCommand(void* /*ctx*/)
{
  return vtkProbeFilter::New();
}


int VTK_EXPORT vtkProbeFilterCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkProbeFilter *op = vtkProbeFilter::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkProbeFilter.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProbeFilter  *temp20;
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
    vtkProbeFilter  *temp20;
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
    vtkProbeFilter  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSourceData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataObject  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject"))
      {
      op->SetSourceData(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSource",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDataObject  *temp20;
      {
      temp20 = (op)->GetSource();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSourceConnection",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAlgorithmOutput  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAlgorithmOutput"))
      {
      op->SetSourceConnection(temp0);
      return 1;
      }
    }
  if (!strcmp("SetCategoricalData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCategoricalData(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCategoricalData",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetCategoricalData();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CategoricalDataOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CategoricalDataOn();
      return 1;
      }
    }
  if (!strcmp("CategoricalDataOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CategoricalDataOff();
      return 1;
      }
    }
  if (!strcmp("SetSpatialMatch",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSpatialMatch(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSpatialMatch",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSpatialMatch();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SpatialMatchOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SpatialMatchOn();
      return 1;
      }
    }
  if (!strcmp("SpatialMatchOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SpatialMatchOff();
      return 1;
      }
    }
  if (!strcmp("GetValidPoints",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdTypeArray  *temp20;
      {
      temp20 = (op)->GetValidPoints();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetValidPointMaskArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetValidPointMaskArrayName(temp0);
      return 1;
      }
    }
  if (!strcmp("GetValidPointMaskArrayName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetValidPointMaskArrayName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPassCellArrays",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPassCellArrays(temp0);
      return 1;
      }
    }
  if (!strcmp("PassCellArraysOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PassCellArraysOn();
      return 1;
      }
    }
  if (!strcmp("PassCellArraysOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PassCellArraysOff();
      return 1;
      }
    }
  if (!strcmp("GetPassCellArrays",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPassCellArrays();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPassPointArrays",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPassPointArrays(temp0);
      return 1;
      }
    }
  if (!strcmp("PassPointArraysOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PassPointArraysOn();
      return 1;
      }
    }
  if (!strcmp("PassPointArraysOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PassPointArraysOff();
      return 1;
      }
    }
  if (!strcmp("GetPassPointArrays",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPassPointArrays();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPassFieldArrays",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPassFieldArrays(temp0);
      return 1;
      }
    }
  if (!strcmp("PassFieldArraysOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PassFieldArraysOn();
      return 1;
      }
    }
  if (!strcmp("PassFieldArraysOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PassFieldArraysOff();
      return 1;
      }
    }
  if (!strcmp("GetPassFieldArrays",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPassFieldArrays();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTolerance",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTolerance(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTolerance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetTolerance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetComputeTolerance",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetComputeTolerance(temp0);
      return 1;
      }
    }
  if (!strcmp("ComputeToleranceOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeToleranceOn();
      return 1;
      }
    }
  if (!strcmp("ComputeToleranceOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeToleranceOff();
      return 1;
      }
    }
  if (!strcmp("GetComputeTolerance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetComputeTolerance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCellLocatorPrototype",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractCellLocator  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractCellLocator"))
      {
      op->SetCellLocatorPrototype(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCellLocatorPrototype",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAbstractCellLocator  *temp20;
      {
      temp20 = (op)->GetCellLocatorPrototype();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkDataSetAlgorithm";
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
  vtkmsg << "Object type: vtkProbeFilter, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkProbeFilter_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkProbeFilter", vtkProbeFilterClientServerNewCommand);
    csi->AddCommandFunction("vtkProbeFilter", vtkProbeFilterCommand);
    }
}
