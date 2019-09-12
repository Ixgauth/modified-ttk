// ClientServer wrapper for vtkPlatonicSolidSource object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPlatonicSolidSource.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkPlatonicSolidSourceClientServerNewCommand(void* /*ctx*/)
{
  return vtkPlatonicSolidSource::New();
}


int VTK_EXPORT vtkPlatonicSolidSourceCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkPlatonicSolidSource *op = vtkPlatonicSolidSource::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkPlatonicSolidSource.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPlatonicSolidSource  *temp20;
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
    vtkPlatonicSolidSource  *temp20;
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
    vtkPlatonicSolidSource  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSolidType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSolidType(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSolidTypeMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSolidTypeMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSolidTypeMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSolidTypeMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSolidType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSolidType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSolidTypeToTetrahedron",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetSolidTypeToTetrahedron();
      return 1;
      }
    }
  if (!strcmp("SetSolidTypeToCube",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetSolidTypeToCube();
      return 1;
      }
    }
  if (!strcmp("SetSolidTypeToOctahedron",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetSolidTypeToOctahedron();
      return 1;
      }
    }
  if (!strcmp("SetSolidTypeToIcosahedron",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetSolidTypeToIcosahedron();
      return 1;
      }
    }
  if (!strcmp("SetSolidTypeToDodecahedron",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetSolidTypeToDodecahedron();
      return 1;
      }
    }
  if (!strcmp("SetOutputPointsPrecision",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOutputPointsPrecision(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOutputPointsPrecision",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetOutputPointsPrecision();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  vtkmsg << "Object type: vtkPlatonicSolidSource, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkPlatonicSolidSource_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkPlatonicSolidSource", vtkPlatonicSolidSourceClientServerNewCommand);
    csi->AddCommandFunction("vtkPlatonicSolidSource", vtkPlatonicSolidSourceCommand);
    }
}