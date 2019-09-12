// ClientServer wrapper for vtkSPHInterpolator object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkSPHInterpolator.h"
#include "vtkSystemIncludes.h"
#include "vtkStdString.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkSPHInterpolatorClientServerNewCommand(void* /*ctx*/)
{
  return vtkSPHInterpolator::New();
}


int VTK_EXPORT vtkSPHInterpolatorCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkSPHInterpolator *op = vtkSPHInterpolator::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkSPHInterpolator.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSPHInterpolator  *temp20;
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
    vtkSPHInterpolator  *temp20;
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
    vtkSPHInterpolator  *temp20;
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
  if (!strcmp("SetLocator",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractPointLocator  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractPointLocator"))
      {
      op->SetLocator(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLocator",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAbstractPointLocator  *temp20;
      {
      temp20 = (op)->GetLocator();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetKernel",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSPHKernel  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSPHKernel"))
      {
      op->SetKernel(temp0);
      return 1;
      }
    }
  if (!strcmp("GetKernel",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSPHKernel  *temp20;
      {
      temp20 = (op)->GetKernel();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCutoffArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *  temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCutoffArrayName(vtkStdString(temp0));
      return 1;
      }
    }
  if (!strcmp("GetCutoffArrayName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkStdString   temp20;
      {
      temp20 = (op)->GetCutoffArrayName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDensityArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *  temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDensityArrayName(vtkStdString(temp0));
      return 1;
      }
    }
  if (!strcmp("GetDensityArrayName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkStdString   temp20;
      {
      temp20 = (op)->GetDensityArrayName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMassArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *  temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMassArrayName(vtkStdString(temp0));
      return 1;
      }
    }
  if (!strcmp("GetMassArrayName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkStdString   temp20;
      {
      temp20 = (op)->GetMassArrayName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddExcludedArray",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->AddExcludedArray(vtkStdString(temp0));
      return 1;
      }
    }
  if (!strcmp("ClearExcludedArrays",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearExcludedArrays();
      return 1;
      }
    }
  if (!strcmp("GetNumberOfExcludedArrays",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfExcludedArrays();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetExcludedArray",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    const char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetExcludedArray(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddDerivativeArray",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->AddDerivativeArray(vtkStdString(temp0));
      return 1;
      }
    }
  if (!strcmp("ClearDerivativeArrays",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearDerivativeArrays();
      return 1;
      }
    }
  if (!strcmp("GetNumberOfDerivativeArrays",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfDerivativeArrays();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDerivativeArray",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    const char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetDerivativeArray(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNullPointsStrategy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNullPointsStrategy(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNullPointsStrategy",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNullPointsStrategy();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNullPointsStrategyToMaskPoints",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetNullPointsStrategyToMaskPoints();
      return 1;
      }
    }
  if (!strcmp("SetNullPointsStrategyToNullValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetNullPointsStrategyToNullValue();
      return 1;
      }
    }
  if (!strcmp("SetValidPointsMaskArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *  temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetValidPointsMaskArrayName(vtkStdString(temp0));
      return 1;
      }
    }
  if (!strcmp("GetValidPointsMaskArrayName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkStdString   temp20;
      {
      temp20 = (op)->GetValidPointsMaskArrayName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNullValue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNullValue(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNullValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetNullValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetComputeShepardSum",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetComputeShepardSum(temp0);
      return 1;
      }
    }
  if (!strcmp("ComputeShepardSumOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeShepardSumOn();
      return 1;
      }
    }
  if (!strcmp("ComputeShepardSumOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeShepardSumOff();
      return 1;
      }
    }
  if (!strcmp("GetComputeShepardSum",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetComputeShepardSum();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetShepardSumArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *  temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetShepardSumArrayName(vtkStdString(temp0));
      return 1;
      }
    }
  if (!strcmp("GetShepardSumArrayName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkStdString   temp20;
      {
      temp20 = (op)->GetShepardSumArrayName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPromoteOutputArrays",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPromoteOutputArrays(temp0);
      return 1;
      }
    }
  if (!strcmp("PromoteOutputArraysOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PromoteOutputArraysOn();
      return 1;
      }
    }
  if (!strcmp("PromoteOutputArraysOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PromoteOutputArraysOff();
      return 1;
      }
    }
  if (!strcmp("GetPromoteOutputArrays",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPromoteOutputArrays();
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
  if (!strcmp("SetShepardNormalization",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetShepardNormalization(temp0);
      return 1;
      }
    }
  if (!strcmp("ShepardNormalizationOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ShepardNormalizationOn();
      return 1;
      }
    }
  if (!strcmp("ShepardNormalizationOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ShepardNormalizationOff();
      return 1;
      }
    }
  if (!strcmp("GetShepardNormalization",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetShepardNormalization();
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
  vtkmsg << "Object type: vtkSPHInterpolator, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkSPHInterpolator_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkSPHInterpolator", vtkSPHInterpolatorClientServerNewCommand);
    csi->AddCommandFunction("vtkSPHInterpolator", vtkSPHInterpolatorCommand);
    }
}
