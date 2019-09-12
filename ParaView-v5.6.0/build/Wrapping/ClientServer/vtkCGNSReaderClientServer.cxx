// ClientServer wrapper for vtkCGNSReader object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkCGNSReader.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkCGNSReaderClientServerNewCommand(void* /*ctx*/)
{
  return vtkCGNSReader::New();
}


int VTK_EXPORT vtkCGNSReaderCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkCGNSReader *op = vtkCGNSReader::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkCGNSReader.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkCGNSReader  *temp20;
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
    vtkCGNSReader  *temp20;
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
    vtkCGNSReader  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFileName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFileName(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFileName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetFileName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CanReadFile",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->CanReadFile(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBaseArrayStatus",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetBaseArrayStatus(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetBaseArrayStatus",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetBaseArrayStatus(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("DisableAllBases",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DisableAllBases();
      return 1;
      }
    }
  if (!strcmp("EnableAllBases",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnableAllBases();
      return 1;
      }
    }
  if (!strcmp("GetNumberOfBaseArrays",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfBaseArrays();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBaseArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    const char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetBaseArrayName(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfFamilyArrays",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfFamilyArrays();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetFamilyArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    const char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetFamilyArrayName(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFamilyArrayStatus",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetFamilyArrayStatus(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetFamilyArrayStatus",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetFamilyArrayStatus(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("EnableAllFamilies",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnableAllFamilies();
      return 1;
      }
    }
  if (!strcmp("DisableAllFamilies",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DisableAllFamilies();
      return 1;
      }
    }
  if (!strcmp("GetSIL",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkCGNSSubsetInclusionLattice  *temp20;
      {
      temp20 = (op)->GetSIL();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetBlockStatus",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    bool   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetBlockStatus(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("ClearBlockStatus",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearBlockStatus();
      return 1;
      }
    }
  if (!strcmp("GetNumberOfPointArrays",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfPointArrays();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPointArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    const char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetPointArrayName(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPointArrayStatus",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetPointArrayStatus(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPointArrayStatus",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetPointArrayStatus(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("DisableAllPointArrays",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DisableAllPointArrays();
      return 1;
      }
    }
  if (!strcmp("EnableAllPointArrays",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnableAllPointArrays();
      return 1;
      }
    }
  if (!strcmp("GetNumberOfCellArrays",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfCellArrays();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetCellArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    const char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetCellArrayName(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetCellArrayStatus",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetCellArrayStatus(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCellArrayStatus",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetCellArrayStatus(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("DisableAllCellArrays",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DisableAllCellArrays();
      return 1;
      }
    }
  if (!strcmp("EnableAllCellArrays",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnableAllCellArrays();
      return 1;
      }
    }
  if (!strcmp("SetDoublePrecisionMesh",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDoublePrecisionMesh(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDoublePrecisionMesh",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDoublePrecisionMesh();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DoublePrecisionMeshOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DoublePrecisionMeshOn();
      return 1;
      }
    }
  if (!strcmp("DoublePrecisionMeshOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DoublePrecisionMeshOff();
      return 1;
      }
    }
#if !defined(VTK_LEGACY_REMOVE)
  if (!strcmp("SetLoadBndPatch",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLoadBndPatch(temp0);
      return 1;
      }
    }
#endif
#if !defined(VTK_LEGACY_REMOVE)
  if (!strcmp("GetLoadBndPatch",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetLoadBndPatch();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
#endif
#if !defined(VTK_LEGACY_REMOVE)
  if (!strcmp("LoadBndPatchOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LoadBndPatchOn();
      return 1;
      }
    }
#endif
#if !defined(VTK_LEGACY_REMOVE)
  if (!strcmp("LoadBndPatchOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LoadBndPatchOff();
      return 1;
      }
    }
#endif
#if !defined(VTK_LEGACY_REMOVE)
  if (!strcmp("SetLoadMesh",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLoadMesh(temp0);
      return 1;
      }
    }
#endif
#if !defined(VTK_LEGACY_REMOVE)
  if (!strcmp("GetLoadMesh",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetLoadMesh();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
#endif
#if !defined(VTK_LEGACY_REMOVE)
  if (!strcmp("LoadMeshOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LoadMeshOn();
      return 1;
      }
    }
#endif
#if !defined(VTK_LEGACY_REMOVE)
  if (!strcmp("LoadMeshOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LoadMeshOff();
      return 1;
      }
    }
#endif
  if (!strcmp("SetCreateEachSolutionAsBlock",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCreateEachSolutionAsBlock(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCreateEachSolutionAsBlock",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetCreateEachSolutionAsBlock();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CreateEachSolutionAsBlockOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CreateEachSolutionAsBlockOn();
      return 1;
      }
    }
  if (!strcmp("CreateEachSolutionAsBlockOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CreateEachSolutionAsBlockOff();
      return 1;
      }
    }
  if (!strcmp("SetIgnoreFlowSolutionPointers",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetIgnoreFlowSolutionPointers(temp0);
      return 1;
      }
    }
  if (!strcmp("GetIgnoreFlowSolutionPointers",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetIgnoreFlowSolutionPointers();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IgnoreFlowSolutionPointersOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->IgnoreFlowSolutionPointersOn();
      return 1;
      }
    }
  if (!strcmp("IgnoreFlowSolutionPointersOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->IgnoreFlowSolutionPointersOff();
      return 1;
      }
    }
  if (!strcmp("SetDistributeBlocks",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDistributeBlocks(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDistributeBlocks",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetDistributeBlocks();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DistributeBlocksOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DistributeBlocksOn();
      return 1;
      }
    }
  if (!strcmp("DistributeBlocksOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DistributeBlocksOff();
      return 1;
      }
    }
  if (!strcmp("SetController",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMultiProcessController  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMultiProcessController"))
      {
      op->SetController(temp0);
      return 1;
      }
    }
  if (!strcmp("GetController",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkMultiProcessController  *temp20;
      {
      temp20 = (op)->GetController();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Broadcast",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMultiProcessController  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMultiProcessController"))
      {
      op->Broadcast(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSILUpdateStamp",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetSILUpdateStamp();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkMultiBlockDataSetAlgorithm";
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
  vtkmsg << "Object type: vtkCGNSReader, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkCGNSReader_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkCGNSReader", vtkCGNSReaderClientServerNewCommand);
    csi->AddCommandFunction("vtkCGNSReader", vtkCGNSReaderCommand);
    }
}
