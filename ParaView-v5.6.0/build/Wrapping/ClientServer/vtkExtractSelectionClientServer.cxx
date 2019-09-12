// ClientServer wrapper for vtkExtractSelection object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkExtractSelection.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkExtractSelectionClientServerNewCommand(void* /*ctx*/)
{
  return vtkExtractSelection::New();
}


int VTK_EXPORT vtkExtractSelectionCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkExtractSelection *op = vtkExtractSelection::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkExtractSelection.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkExtractSelection  *temp20;
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
    vtkExtractSelection  *temp20;
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
    vtkExtractSelection  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSelectionConnection",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAlgorithmOutput  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAlgorithmOutput"))
      {
      op->SetSelectionConnection(temp0);
      return 1;
      }
    }
  if (!strcmp("SetPreserveTopology",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPreserveTopology(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPreserveTopology",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetPreserveTopology();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PreserveTopologyOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PreserveTopologyOn();
      return 1;
      }
    }
  if (!strcmp("PreserveTopologyOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PreserveTopologyOff();
      return 1;
      }
    }
#if !defined(VTK_LEGACY_REMOVE)
  if (!strcmp("SetShowBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetShowBounds(temp0);
      return 1;
      }
    }
#endif
#if !defined(VTK_LEGACY_REMOVE)
  if (!strcmp("GetShowBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetShowBounds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
#endif
#if !defined(VTK_LEGACY_REMOVE)
  if (!strcmp("ShowBoundsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ShowBoundsOn();
      return 1;
      }
    }
#endif
#if !defined(VTK_LEGACY_REMOVE)
  if (!strcmp("ShowBoundsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ShowBoundsOff();
      return 1;
      }
    }
#endif
#if !defined(VTK_LEGACY_REMOVE)
  if (!strcmp("SetUseProbeForLocations",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseProbeForLocations(temp0);
      return 1;
      }
    }
#endif
#if !defined(VTK_LEGACY_REMOVE)
  if (!strcmp("GetUseProbeForLocations",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseProbeForLocations();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
#endif
#if !defined(VTK_LEGACY_REMOVE)
  if (!strcmp("UseProbeForLocationsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseProbeForLocationsOn();
      return 1;
      }
    }
#endif
#if !defined(VTK_LEGACY_REMOVE)
  if (!strcmp("UseProbeForLocationsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseProbeForLocationsOff();
      return 1;
      }
    }
#endif

  {
    const char* commandName = "vtkDataObjectAlgorithm";
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
  vtkmsg << "Object type: vtkExtractSelection, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkExtractSelection_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkExtractSelection", vtkExtractSelectionClientServerNewCommand);
    csi->AddCommandFunction("vtkExtractSelection", vtkExtractSelectionCommand);
    }
}