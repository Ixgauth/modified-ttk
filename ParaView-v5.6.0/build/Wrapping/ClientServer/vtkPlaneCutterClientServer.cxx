// ClientServer wrapper for vtkPlaneCutter object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPlaneCutter.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkPlaneCutterClientServerNewCommand(void* /*ctx*/)
{
  return vtkPlaneCutter::New();
}


int VTK_EXPORT vtkPlaneCutterCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkPlaneCutter *op = vtkPlaneCutter::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkPlaneCutter.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPlaneCutter  *temp20;
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
    vtkPlaneCutter  *temp20;
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
    vtkPlaneCutter  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  if (!strcmp("SetPlane",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPlane  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPlane"))
      {
      op->SetPlane(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPlane",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPlane  *temp20;
      {
      temp20 = (op)->GetPlane();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetComputeNormals",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetComputeNormals(temp0);
      return 1;
      }
    }
  if (!strcmp("GetComputeNormals",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetComputeNormals();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ComputeNormalsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeNormalsOn();
      return 1;
      }
    }
  if (!strcmp("ComputeNormalsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeNormalsOff();
      return 1;
      }
    }
  if (!strcmp("SetInterpolateAttributes",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInterpolateAttributes(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInterpolateAttributes",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetInterpolateAttributes();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InterpolateAttributesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InterpolateAttributesOn();
      return 1;
      }
    }
  if (!strcmp("InterpolateAttributesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InterpolateAttributesOff();
      return 1;
      }
    }
  if (!strcmp("SetGeneratePolygons",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGeneratePolygons(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGeneratePolygons",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetGeneratePolygons();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GeneratePolygonsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GeneratePolygonsOn();
      return 1;
      }
    }
  if (!strcmp("GeneratePolygonsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GeneratePolygonsOff();
      return 1;
      }
    }
  if (!strcmp("SetBuildTree",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBuildTree(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBuildTree",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetBuildTree();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("BuildTreeOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->BuildTreeOn();
      return 1;
      }
    }
  if (!strcmp("BuildTreeOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->BuildTreeOff();
      return 1;
      }
    }
  if (!strcmp("SetBuildHierarchy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBuildHierarchy(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBuildHierarchy",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetBuildHierarchy();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("BuildHierarchyOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->BuildHierarchyOn();
      return 1;
      }
    }
  if (!strcmp("BuildHierarchyOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->BuildHierarchyOff();
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
  vtkmsg << "Object type: vtkPlaneCutter, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkPlaneCutter_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkPlaneCutter", vtkPlaneCutterClientServerNewCommand);
    csi->AddCommandFunction("vtkPlaneCutter", vtkPlaneCutterCommand);
    }
}
