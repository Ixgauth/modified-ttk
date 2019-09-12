// ClientServer wrapper for vtkPointGaussianRepresentation object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPointGaussianRepresentation.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkPointGaussianRepresentationClientServerNewCommand(void* /*ctx*/)
{
  return vtkPointGaussianRepresentation::New();
}


int VTK_EXPORT vtkPointGaussianRepresentationCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkPointGaussianRepresentation *op = vtkPointGaussianRepresentation::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkPointGaussianRepresentation.  "
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
    vtkPointGaussianRepresentation  *temp20;
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
    vtkPointGaussianRepresentation  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPointGaussianRepresentation  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ProcessViewRequest",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformationRequestKey  *temp0;
    vtkInformation  *temp1;
    vtkInformation  *temp2;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationRequestKey") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkInformation"))
      {
      temp20 = (op)->ProcessViewRequest(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLookupTable",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkScalarsToColors  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkScalarsToColors"))
      {
      op->SetLookupTable(temp0);
      return 1;
      }
    }
  if (!strcmp("SetVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("SetEmissive",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetEmissive(temp0);
      return 1;
      }
    }
  if (!strcmp("SetMapScalars",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMapScalars(temp0);
      return 1;
      }
    }
  if (!strcmp("SetOrientation",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetOrientation(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetOrigin",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetOrigin(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetPickable",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPickable(temp0);
      return 1;
      }
    }
  if (!strcmp("SetPosition",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetPosition(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetScale",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetScale(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetAmbientColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetAmbientColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetDiffuseColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetDiffuseColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetEdgeColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetEdgeColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetInterpolation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInterpolation(temp0);
      return 1;
      }
    }
  if (!strcmp("SetLineWidth",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLineWidth(temp0);
      return 1;
      }
    }
  if (!strcmp("SetOpacity",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOpacity(temp0);
      return 1;
      }
    }
  if (!strcmp("SetPointSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPointSize(temp0);
      return 1;
      }
    }
  if (!strcmp("SetSpecularColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetSpecularColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetSpecularPower",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSpecularPower(temp0);
      return 1;
      }
    }
  if (!strcmp("SetSplatSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSplatSize(temp0);
      return 1;
      }
    }
  if (!strcmp("SelectShaderPreset",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SelectShaderPreset(temp0);
      return 1;
      }
    }
  if (!strcmp("SetCustomShader",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCustomShader(temp0);
      return 1;
      }
    }
  if (!strcmp("SetCustomTriangleScale",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCustomTriangleScale(temp0);
      return 1;
      }
    }
  if (!strcmp("SelectScaleArray",method) && msg.GetNumberOfArguments(0) == 7)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    char    *temp4;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      op->SelectScaleArray(temp0,temp1,temp2,temp3,temp4);
      return 1;
      }
    }
  if (!strcmp("SelectScaleArrayComponent",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SelectScaleArrayComponent(temp0);
      return 1;
      }
    }
  if (!strcmp("SetUseScaleFunction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseScaleFunction(temp0);
      return 1;
      }
    }
  if (!strcmp("SetScaleTransferFunction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPiecewiseFunction  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPiecewiseFunction"))
      {
      op->SetScaleTransferFunction(temp0);
      return 1;
      }
    }
  if (!strcmp("SetOpacityTransferFunction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPiecewiseFunction  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPiecewiseFunction"))
      {
      op->SetOpacityTransferFunction(temp0);
      return 1;
      }
    }
  if (!strcmp("SelectOpacityArray",method) && msg.GetNumberOfArguments(0) == 7)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    char    *temp4;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      op->SelectOpacityArray(temp0,temp1,temp2,temp3,temp4);
      return 1;
      }
    }
  if (!strcmp("SelectOpacityArrayComponent",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SelectOpacityArrayComponent(temp0);
      return 1;
      }
    }
  if (!strcmp("SetOpacityByArray",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOpacityByArray(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOpacityByArray",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetOpacityByArray();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("OpacityByArrayOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OpacityByArrayOn();
      return 1;
      }
    }
  if (!strcmp("OpacityByArrayOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OpacityByArrayOff();
      return 1;
      }
    }
  if (!strcmp("SetScaleByArray",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScaleByArray(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScaleByArray",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetScaleByArray();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ScaleByArrayOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ScaleByArrayOn();
      return 1;
      }
    }
  if (!strcmp("ScaleByArrayOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ScaleByArrayOff();
      return 1;
      }
    }

  {
    const char* commandName = "vtkPVDataRepresentation";
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
  vtkmsg << "Object type: vtkPointGaussianRepresentation, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkPointGaussianRepresentation_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkPointGaussianRepresentation", vtkPointGaussianRepresentationClientServerNewCommand);
    csi->AddCommandFunction("vtkPointGaussianRepresentation", vtkPointGaussianRepresentationCommand);
    }
}
