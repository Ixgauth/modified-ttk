// ClientServer wrapper for vtkUnstructuredGridGhostCellsGenerator object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkUnstructuredGridGhostCellsGenerator.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkUnstructuredGridGhostCellsGeneratorClientServerNewCommand(void* /*ctx*/)
{
  return vtkUnstructuredGridGhostCellsGenerator::New();
}


int VTK_EXPORT vtkUnstructuredGridGhostCellsGeneratorCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkUnstructuredGridGhostCellsGenerator *op = vtkUnstructuredGridGhostCellsGenerator::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkUnstructuredGridGhostCellsGenerator.  "
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
    vtkUnstructuredGridGhostCellsGenerator  *temp20;
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
    vtkUnstructuredGridGhostCellsGenerator  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkUnstructuredGridGhostCellsGenerator  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseGlobalPointIds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseGlobalPointIds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseGlobalPointIds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseGlobalPointIds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseGlobalPointIdsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseGlobalPointIdsOn();
      return 1;
      }
    }
  if (!strcmp("UseGlobalPointIdsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseGlobalPointIdsOff();
      return 1;
      }
    }
  if (!strcmp("SetGlobalPointIdsArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGlobalPointIdsArrayName(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGlobalPointIdsArrayName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetGlobalPointIdsArrayName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetHasGlobalCellIds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetHasGlobalCellIds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetHasGlobalCellIds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetHasGlobalCellIds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HasGlobalCellIdsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->HasGlobalCellIdsOn();
      return 1;
      }
    }
  if (!strcmp("HasGlobalCellIdsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->HasGlobalCellIdsOff();
      return 1;
      }
    }
  if (!strcmp("SetGlobalCellIdsArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGlobalCellIdsArrayName(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGlobalCellIdsArrayName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetGlobalCellIdsArrayName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetBuildIfRequired",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBuildIfRequired(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBuildIfRequired",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetBuildIfRequired();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("BuildIfRequiredOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->BuildIfRequiredOn();
      return 1;
      }
    }
  if (!strcmp("BuildIfRequiredOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->BuildIfRequiredOff();
      return 1;
      }
    }
  if (!strcmp("SetMinimumNumberOfGhostLevels",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMinimumNumberOfGhostLevels(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMinimumNumberOfGhostLevelsMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMinimumNumberOfGhostLevelsMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMinimumNumberOfGhostLevelsMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMinimumNumberOfGhostLevelsMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMinimumNumberOfGhostLevels",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMinimumNumberOfGhostLevels();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkUnstructuredGridAlgorithm";
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
  vtkmsg << "Object type: vtkUnstructuredGridGhostCellsGenerator, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkUnstructuredGridGhostCellsGenerator_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkUnstructuredGridGhostCellsGenerator", vtkUnstructuredGridGhostCellsGeneratorClientServerNewCommand);
    csi->AddCommandFunction("vtkUnstructuredGridGhostCellsGenerator", vtkUnstructuredGridGhostCellsGeneratorCommand);
    }
}
