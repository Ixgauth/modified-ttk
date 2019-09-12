// ClientServer wrapper for vtkImageConnectivityFilter object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkImageConnectivityFilter.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkImageConnectivityFilterClientServerNewCommand(void* /*ctx*/)
{
  return vtkImageConnectivityFilter::New();
}


int VTK_EXPORT vtkImageConnectivityFilterCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkImageConnectivityFilter *op = vtkImageConnectivityFilter::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkImageConnectivityFilter.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkImageConnectivityFilter  *temp20;
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
    vtkImageConnectivityFilter  *temp20;
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
    vtkImageConnectivityFilter  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSeedConnection",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAlgorithmOutput  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAlgorithmOutput"))
      {
      op->SetSeedConnection(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSeedConnection",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAlgorithmOutput  *temp20;
      {
      temp20 = (op)->GetSeedConnection();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSeedData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataSet  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataSet"))
      {
      op->SetSeedData(temp0);
      return 1;
      }
    }
  if (!strcmp("SetStencilConnection",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAlgorithmOutput  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAlgorithmOutput"))
      {
      op->SetStencilConnection(temp0);
      return 1;
      }
    }
  if (!strcmp("GetStencilConnection",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAlgorithmOutput  *temp20;
      {
      temp20 = (op)->GetStencilConnection();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetStencilData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkImageStencilData  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkImageStencilData"))
      {
      op->SetStencilData(temp0);
      return 1;
      }
    }
  if (!strcmp("SetLabelScalarTypeToUnsignedChar",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetLabelScalarTypeToUnsignedChar();
      return 1;
      }
    }
  if (!strcmp("SetLabelScalarTypeToShort",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetLabelScalarTypeToShort();
      return 1;
      }
    }
  if (!strcmp("SetLabelScalarTypeToUnsignedShort",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetLabelScalarTypeToUnsignedShort();
      return 1;
      }
    }
  if (!strcmp("SetLabelScalarTypeToInt",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetLabelScalarTypeToInt();
      return 1;
      }
    }
  if (!strcmp("GetLabelScalarTypeAsString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetLabelScalarTypeAsString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLabelScalarType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLabelScalarType(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLabelScalarType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetLabelScalarType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLabelModeToSeedScalar",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetLabelModeToSeedScalar();
      return 1;
      }
    }
  if (!strcmp("SetLabelModeToConstantValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetLabelModeToConstantValue();
      return 1;
      }
    }
  if (!strcmp("SetLabelModeToSizeRank",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetLabelModeToSizeRank();
      return 1;
      }
    }
  if (!strcmp("GetLabelModeAsString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetLabelModeAsString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLabelMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLabelMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLabelMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetLabelMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetExtractionModeToSeededRegions",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetExtractionModeToSeededRegions();
      return 1;
      }
    }
  if (!strcmp("SetExtractionModeToAllRegions",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetExtractionModeToAllRegions();
      return 1;
      }
    }
  if (!strcmp("SetExtractionModeToLargestRegion",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetExtractionModeToLargestRegion();
      return 1;
      }
    }
  if (!strcmp("GetExtractionModeAsString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetExtractionModeAsString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetExtractionMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetExtractionMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetExtractionMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetExtractionMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLabelConstantValue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLabelConstantValue(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLabelConstantValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetLabelConstantValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfExtractedRegions",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetNumberOfExtractedRegions();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetExtractedRegionLabels",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdTypeArray  *temp20;
      {
      temp20 = (op)->GetExtractedRegionLabels();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetExtractedRegionSizes",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdTypeArray  *temp20;
      {
      temp20 = (op)->GetExtractedRegionSizes();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetExtractedRegionSeedIds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdTypeArray  *temp20;
      {
      temp20 = (op)->GetExtractedRegionSeedIds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetExtractedRegionExtents",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIntArray  *temp20;
      {
      temp20 = (op)->GetExtractedRegionExtents();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetGenerateRegionExtents",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGenerateRegionExtents(temp0);
      return 1;
      }
    }
  if (!strcmp("GenerateRegionExtentsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateRegionExtentsOn();
      return 1;
      }
    }
  if (!strcmp("GenerateRegionExtentsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateRegionExtentsOff();
      return 1;
      }
    }
  if (!strcmp("GetGenerateRegionExtents",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGenerateRegionExtents();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSizeRange",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    vtkIdType   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetSizeRange(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetSizeRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetSizeRange(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSizeRange",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType  *temp20;
      {
      temp20 = (op)->GetSizeRange();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetScalarRange",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetScalarRange(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetScalarRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetScalarRange(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScalarRange",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetScalarRange();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetActiveComponent",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetActiveComponent(temp0);
      return 1;
      }
    }
  if (!strcmp("GetActiveComponent",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetActiveComponent();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkImageAlgorithm";
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
  vtkmsg << "Object type: vtkImageConnectivityFilter, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkImageConnectivityFilter_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkImageConnectivityFilter", vtkImageConnectivityFilterClientServerNewCommand);
    csi->AddCommandFunction("vtkImageConnectivityFilter", vtkImageConnectivityFilterCommand);
    }
}
