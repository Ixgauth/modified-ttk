// ClientServer wrapper for vtkMolecule object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkMolecule.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkMoleculeClientServerNewCommand(void* /*ctx*/)
{
  return vtkMolecule::New();
}


int VTK_EXPORT vtkMoleculeCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkMolecule *op = vtkMolecule::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkMolecule.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkMolecule  *temp20;
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
    vtkMolecule  *temp20;
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
    vtkMolecule  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Initialize",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Initialize();
      return 1;
      }
    }
  if (!strcmp("GetDataObjectType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDataObjectType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfAtoms",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetNumberOfAtoms();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfBonds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetNumberOfBonds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAtomAtomicNumber",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    unsigned short    temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetAtomAtomicNumber(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAtomAtomicNumber",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    unsigned short    temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetAtomAtomicNumber(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetAtomPosition",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkIdType   temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetAtomPosition(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetBondOrder",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    unsigned short    temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetBondOrder(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetBondOrder",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    unsigned short    temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetBondOrder(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBondLength",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    double   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetBondLength(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAtomicPositionArray",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPoints  *temp20;
      {
      temp20 = (op)->GetAtomicPositionArray();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAtomicNumberArray",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkUnsignedShortArray  *temp20;
      {
      temp20 = (op)->GetAtomicNumberArray();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBondOrdersArray",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkUnsignedShortArray  *temp20;
      {
      temp20 = (op)->GetBondOrdersArray();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetElectronicData",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAbstractElectronicData  *temp20;
      {
      temp20 = (op)->GetElectronicData();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetElectronicData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractElectronicData  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractElectronicData"))
      {
      op->SetElectronicData(temp0);
      return 1;
      }
    }
  if (!strcmp("CheckedShallowCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkGraph  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkGraph"))
      {
      temp20 = (op)->CheckedShallowCopy(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CheckedDeepCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkGraph  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkGraph"))
      {
      temp20 = (op)->CheckedDeepCopy(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ShallowCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataObject  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject"))
      {
      op->ShallowCopy(temp0);
      return 1;
      }
    }
  if (!strcmp("DeepCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataObject  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject"))
      {
      op->DeepCopy(temp0);
      return 1;
      }
    }
  if (!strcmp("ShallowCopyStructure",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMolecule  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMolecule"))
      {
      op->ShallowCopyStructure(temp0);
      return 1;
      }
    }
  if (!strcmp("DeepCopyStructure",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMolecule  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMolecule"))
      {
      op->DeepCopyStructure(temp0);
      return 1;
      }
    }
  if (!strcmp("ShallowCopyAttributes",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMolecule  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMolecule"))
      {
      op->ShallowCopyAttributes(temp0);
      return 1;
      }
    }
  if (!strcmp("DeepCopyAttributes",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMolecule  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMolecule"))
      {
      op->DeepCopyAttributes(temp0);
      return 1;
      }
    }
  if (!strcmp("HasLattice",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->HasLattice();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ClearLattice",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearLattice();
      return 1;
      }
    }
  if (!strcmp("SetLattice",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMatrix3x3  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMatrix3x3"))
      {
      op->SetLattice(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLattice",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkMatrix3x3  *temp20;
      {
      temp20 = (op)->GetLattice();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAtomGhostArray",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkUnsignedCharArray  *temp20;
      {
      temp20 = (op)->GetAtomGhostArray();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllocateAtomGhostArray",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AllocateAtomGhostArray();
      return 1;
      }
    }
  if (!strcmp("GetBondGhostArray",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkUnsignedCharArray  *temp20;
      {
      temp20 = (op)->GetBondGhostArray();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AllocateBondGhostArray",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AllocateBondGhostArray();
      return 1;
      }
    }
  if (!strcmp("Initialize",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkPoints  *temp0;
    vtkDataArray  *temp1;
    vtkDataSetAttributes  *temp2;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkDataSetAttributes"))
      {
      temp20 = (op)->Initialize(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Initialize",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPoints  *temp0;
    vtkDataSetAttributes  *temp1;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataSetAttributes"))
      {
      temp20 = (op)->Initialize(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Initialize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMolecule  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMolecule"))
      {
      temp20 = (op)->Initialize(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformation  *temp0;
    vtkMolecule  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation"))
      {
      temp20 = (op)->GetData(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetData",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationVector  *temp0;
    int      temp1;
    vtkMolecule  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationVector") &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->GetData(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAtomData",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDataSetAttributes  *temp20;
      {
      temp20 = (op)->GetAtomData();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBondData",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDataSetAttributes  *temp20;
      {
      temp20 = (op)->GetBondData();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBondId",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    vtkIdType   temp1;
    vtkIdType   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->GetBondId(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAtomicNumberArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAtomicNumberArrayName(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAtomicNumberArrayName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetAtomicNumberArrayName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetBondOrdersArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBondOrdersArrayName(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBondOrdersArrayName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetBondOrdersArrayName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkUndirectedGraph";
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
  vtkmsg << "Object type: vtkMolecule, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkMolecule_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkMolecule", vtkMoleculeClientServerNewCommand);
    csi->AddCommandFunction("vtkMolecule", vtkMoleculeCommand);
    }
}
