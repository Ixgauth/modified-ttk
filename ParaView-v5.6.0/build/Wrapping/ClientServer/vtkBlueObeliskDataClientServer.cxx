// ClientServer wrapper for vtkBlueObeliskData object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkBlueObeliskData.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkBlueObeliskDataClientServerNewCommand(void* /*ctx*/)
{
  return vtkBlueObeliskData::New();
}


int VTK_EXPORT vtkBlueObeliskDataCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkBlueObeliskData *op = vtkBlueObeliskData::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkBlueObeliskData.  "
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
    vtkBlueObeliskData  *temp20;
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
    vtkBlueObeliskData  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkBlueObeliskData  *temp20;
      {
      temp20 = (op)->New();
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
  if (!strcmp("IsInitialized",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->IsInitialized();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfElements",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned short    temp20;
      {
      temp20 = (op)->GetNumberOfElements();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSymbols",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkStringArray  *temp20;
      {
      temp20 = (op)->GetSymbols();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLowerSymbols",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkStringArray  *temp20;
      {
      temp20 = (op)->GetLowerSymbols();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNames",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkStringArray  *temp20;
      {
      temp20 = (op)->GetNames();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLowerNames",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkStringArray  *temp20;
      {
      temp20 = (op)->GetLowerNames();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPeriodicTableBlocks",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkStringArray  *temp20;
      {
      temp20 = (op)->GetPeriodicTableBlocks();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetElectronicConfigurations",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkStringArray  *temp20;
      {
      temp20 = (op)->GetElectronicConfigurations();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetFamilies",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkStringArray  *temp20;
      {
      temp20 = (op)->GetFamilies();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMasses",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkFloatArray  *temp20;
      {
      temp20 = (op)->GetMasses();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetExactMasses",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkFloatArray  *temp20;
      {
      temp20 = (op)->GetExactMasses();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetIonizationEnergies",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkFloatArray  *temp20;
      {
      temp20 = (op)->GetIonizationEnergies();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetElectronAffinities",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkFloatArray  *temp20;
      {
      temp20 = (op)->GetElectronAffinities();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPaulingElectronegativities",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkFloatArray  *temp20;
      {
      temp20 = (op)->GetPaulingElectronegativities();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetCovalentRadii",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkFloatArray  *temp20;
      {
      temp20 = (op)->GetCovalentRadii();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetVDWRadii",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkFloatArray  *temp20;
      {
      temp20 = (op)->GetVDWRadii();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDefaultColors",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkFloatArray  *temp20;
      {
      temp20 = (op)->GetDefaultColors();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBoilingPoints",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkFloatArray  *temp20;
      {
      temp20 = (op)->GetBoilingPoints();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMeltingPoints",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkFloatArray  *temp20;
      {
      temp20 = (op)->GetMeltingPoints();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPeriods",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkUnsignedShortArray  *temp20;
      {
      temp20 = (op)->GetPeriods();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetGroups",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkUnsignedShortArray  *temp20;
      {
      temp20 = (op)->GetGroups();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  vtkmsg << "Object type: vtkBlueObeliskData, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkBlueObeliskData_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkBlueObeliskData", vtkBlueObeliskDataClientServerNewCommand);
    csi->AddCommandFunction("vtkBlueObeliskData", vtkBlueObeliskDataCommand);
    }
}
