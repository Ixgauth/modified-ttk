// python wrapper for vtkDataWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkDataWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDataWriter_ClassNew(); }

#ifndef DECLARED_PyvtkWriter_ClassNew
extern "C" { PyObject *PyvtkWriter_ClassNew(); }
#define DECLARED_PyvtkWriter_ClassNew
#endif

static const char *PyvtkDataWriter_Doc =
  "vtkDataWriter - helper class for objects that write vtk data files\n\n"
  "Superclass: vtkWriter\n\n"
  "vtkDataWriter is a helper class that opens and writes the vtk header\n"
  "and point data (e.g., scalars, vectors, normals, etc.) from a vtk\n"
  "data file. See text for various formats.\n\n"
  "@sa\n"
  "vtkDataSetWriter vtkPolyDataWriter vtkStructuredGridWriter\n"
  "vtkStructuredPointsWriter vtkUnstructuredGridWriter\n"
  "vtkFieldDataWriter vtkRectilinearGridWriter\n\n";


static PyObject *
PyvtkDataWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataWriter *tempr = vtkDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataWriter::NewInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
      {
        PyVTKObject_GetObject(result)->UnRegister(0);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
      }
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkDataWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkDataWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteToOutputString(temp0);
    }
    else
    {
      op->vtkDataWriter::SetWriteToOutputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteToOutputString() :
      op->vtkDataWriter::GetWriteToOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_WriteToOutputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToOutputStringOn();
    }
    else
    {
      op->vtkDataWriter::WriteToOutputStringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_WriteToOutputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToOutputStringOff();
    }
    else
    {
      op->vtkDataWriter::WriteToOutputStringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetOutputStringLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStringLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetOutputStringLength() :
      op->vtkDataWriter::GetOutputStringLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetOutputString() :
      op->vtkDataWriter::GetOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetBinaryOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetBinaryOutputString() :
      op->vtkDataWriter::GetBinaryOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetOutputStdString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStdString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetOutputStdString() :
      op->vtkDataWriter::GetOutputStdString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_RegisterAndGetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterAndGetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->RegisterAndGetOutputString() :
      op->vtkDataWriter::RegisterAndGetOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeader(temp0);
    }
    else
    {
      op->vtkDataWriter::SetHeader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetHeader() :
      op->vtkDataWriter::GetHeader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetWriteArrayMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteArrayMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteArrayMetaData(temp0);
    }
    else
    {
      op->vtkDataWriter::SetWriteArrayMetaData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetWriteArrayMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteArrayMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetWriteArrayMetaData() :
      op->vtkDataWriter::GetWriteArrayMetaData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_WriteArrayMetaDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteArrayMetaDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteArrayMetaDataOn();
    }
    else
    {
      op->vtkDataWriter::WriteArrayMetaDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_WriteArrayMetaDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteArrayMetaDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteArrayMetaDataOff();
    }
    else
    {
      op->vtkDataWriter::WriteArrayMetaDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileType(temp0);
    }
    else
    {
      op->vtkDataWriter::SetFileType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetFileTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileTypeMinValue() :
      op->vtkDataWriter::GetFileTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetFileTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileTypeMaxValue() :
      op->vtkDataWriter::GetFileTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileType() :
      op->vtkDataWriter::GetFileType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetFileTypeToASCII(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToASCII");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileTypeToASCII();
    }
    else
    {
      op->vtkDataWriter::SetFileTypeToASCII();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetFileTypeToBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileTypeToBinary();
    }
    else
    {
      op->vtkDataWriter::SetFileTypeToBinary();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetScalarsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarsName(temp0);
    }
    else
    {
      op->vtkDataWriter::SetScalarsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetScalarsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetScalarsName() :
      op->vtkDataWriter::GetScalarsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetVectorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorsName(temp0);
    }
    else
    {
      op->vtkDataWriter::SetVectorsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetVectorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVectorsName() :
      op->vtkDataWriter::GetVectorsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetTensorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTensorsName(temp0);
    }
    else
    {
      op->vtkDataWriter::SetTensorsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetTensorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTensorsName() :
      op->vtkDataWriter::GetTensorsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetNormalsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalsName(temp0);
    }
    else
    {
      op->vtkDataWriter::SetNormalsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetNormalsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetNormalsName() :
      op->vtkDataWriter::GetNormalsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetTCoordsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTCoordsName(temp0);
    }
    else
    {
      op->vtkDataWriter::SetTCoordsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetTCoordsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTCoordsName() :
      op->vtkDataWriter::GetTCoordsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetGlobalIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlobalIdsName(temp0);
    }
    else
    {
      op->vtkDataWriter::SetGlobalIdsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetGlobalIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetGlobalIdsName() :
      op->vtkDataWriter::GetGlobalIdsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetPedigreeIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPedigreeIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPedigreeIdsName(temp0);
    }
    else
    {
      op->vtkDataWriter::SetPedigreeIdsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetPedigreeIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPedigreeIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPedigreeIdsName() :
      op->vtkDataWriter::GetPedigreeIdsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetEdgeFlagsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeFlagsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeFlagsName(temp0);
    }
    else
    {
      op->vtkDataWriter::SetEdgeFlagsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetEdgeFlagsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeFlagsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetEdgeFlagsName() :
      op->vtkDataWriter::GetEdgeFlagsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetLookupTableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLookupTableName(temp0);
    }
    else
    {
      op->vtkDataWriter::SetLookupTableName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetLookupTableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLookupTableName() :
      op->vtkDataWriter::GetLookupTableName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldDataName(temp0);
    }
    else
    {
      op->vtkDataWriter::SetFieldDataName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFieldDataName() :
      op->vtkDataWriter::GetFieldDataName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataWriter_Methods[] = {
  {"IsTypeOf", PyvtkDataWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDataWriter\nC++: static vtkDataWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDataWriter\nC++: vtkDataWriter *NewInstance()\n\n"},
  {"SetFileName", PyvtkDataWriter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify file name of vtk polygon data file to write.\n"},
  {"GetFileName", PyvtkDataWriter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSpecify file name of vtk polygon data file to write.\n"},
  {"SetWriteToOutputString", PyvtkDataWriter_SetWriteToOutputString, METH_VARARGS,
   "V.SetWriteToOutputString(int)\nC++: virtual void SetWriteToOutputString(vtkTypeBool _arg)\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {"GetWriteToOutputString", PyvtkDataWriter_GetWriteToOutputString, METH_VARARGS,
   "V.GetWriteToOutputString() -> int\nC++: virtual vtkTypeBool GetWriteToOutputString()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {"WriteToOutputStringOn", PyvtkDataWriter_WriteToOutputStringOn, METH_VARARGS,
   "V.WriteToOutputStringOn()\nC++: virtual void WriteToOutputStringOn()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {"WriteToOutputStringOff", PyvtkDataWriter_WriteToOutputStringOff, METH_VARARGS,
   "V.WriteToOutputStringOff()\nC++: virtual void WriteToOutputStringOff()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {"GetOutputStringLength", PyvtkDataWriter_GetOutputStringLength, METH_VARARGS,
   "V.GetOutputStringLength() -> int\nC++: virtual vtkIdType GetOutputStringLength()\n\nWhen WriteToOutputString in on, then a string is allocated,\nwritten to, and can be retrieved with these methods.  The string\nis deleted during the next call to write ...\n"},
  {"GetOutputString", PyvtkDataWriter_GetOutputString, METH_VARARGS,
   "V.GetOutputString() -> string\nC++: virtual char *GetOutputString()\n\nWhen WriteToOutputString in on, then a string is allocated,\nwritten to, and can be retrieved with these methods.  The string\nis deleted during the next call to write ...\n"},
  {"GetBinaryOutputString", PyvtkDataWriter_GetBinaryOutputString, METH_VARARGS,
   "V.GetBinaryOutputString() -> (int, ...)\nC++: unsigned char *GetBinaryOutputString()\n\nWhen WriteToOutputString in on, then a string is allocated,\nwritten to, and can be retrieved with these methods.  The string\nis deleted during the next call to write ...\n"},
  {"GetOutputStdString", PyvtkDataWriter_GetOutputStdString, METH_VARARGS,
   "V.GetOutputStdString() -> string\nC++: vtkStdString GetOutputStdString()\n\nWhen WriteToOutputString is on, this method returns a copy of the\noutput string in a vtkStdString.\n"},
  {"RegisterAndGetOutputString", PyvtkDataWriter_RegisterAndGetOutputString, METH_VARARGS,
   "V.RegisterAndGetOutputString() -> string\nC++: char *RegisterAndGetOutputString()\n\nThis convenience method returns the string, sets the IVAR to\nnullptr, so that the user is responsible for deleting the string.\nI am not sure what the name should be, so it may change in the\nfuture.\n"},
  {"SetHeader", PyvtkDataWriter_SetHeader, METH_VARARGS,
   "V.SetHeader(string)\nC++: virtual void SetHeader(const char *_arg)\n\nSpecify the header for the vtk data file.\n"},
  {"GetHeader", PyvtkDataWriter_GetHeader, METH_VARARGS,
   "V.GetHeader() -> string\nC++: virtual char *GetHeader()\n\nSpecify the header for the vtk data file.\n"},
  {"SetWriteArrayMetaData", PyvtkDataWriter_SetWriteArrayMetaData, METH_VARARGS,
   "V.SetWriteArrayMetaData(bool)\nC++: virtual void SetWriteArrayMetaData(bool _arg)\n\nIf true, vtkInformation objects attached to arrays and array\ncomponent nameswill be written to the output. Default is true.\n"},
  {"GetWriteArrayMetaData", PyvtkDataWriter_GetWriteArrayMetaData, METH_VARARGS,
   "V.GetWriteArrayMetaData() -> bool\nC++: virtual bool GetWriteArrayMetaData()\n\nIf true, vtkInformation objects attached to arrays and array\ncomponent nameswill be written to the output. Default is true.\n"},
  {"WriteArrayMetaDataOn", PyvtkDataWriter_WriteArrayMetaDataOn, METH_VARARGS,
   "V.WriteArrayMetaDataOn()\nC++: virtual void WriteArrayMetaDataOn()\n\nIf true, vtkInformation objects attached to arrays and array\ncomponent nameswill be written to the output. Default is true.\n"},
  {"WriteArrayMetaDataOff", PyvtkDataWriter_WriteArrayMetaDataOff, METH_VARARGS,
   "V.WriteArrayMetaDataOff()\nC++: virtual void WriteArrayMetaDataOff()\n\nIf true, vtkInformation objects attached to arrays and array\ncomponent nameswill be written to the output. Default is true.\n"},
  {"SetFileType", PyvtkDataWriter_SetFileType, METH_VARARGS,
   "V.SetFileType(int)\nC++: virtual void SetFileType(int _arg)\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {"GetFileTypeMinValue", PyvtkDataWriter_GetFileTypeMinValue, METH_VARARGS,
   "V.GetFileTypeMinValue() -> int\nC++: virtual int GetFileTypeMinValue()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {"GetFileTypeMaxValue", PyvtkDataWriter_GetFileTypeMaxValue, METH_VARARGS,
   "V.GetFileTypeMaxValue() -> int\nC++: virtual int GetFileTypeMaxValue()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {"GetFileType", PyvtkDataWriter_GetFileType, METH_VARARGS,
   "V.GetFileType() -> int\nC++: virtual int GetFileType()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {"SetFileTypeToASCII", PyvtkDataWriter_SetFileTypeToASCII, METH_VARARGS,
   "V.SetFileTypeToASCII()\nC++: void SetFileTypeToASCII()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {"SetFileTypeToBinary", PyvtkDataWriter_SetFileTypeToBinary, METH_VARARGS,
   "V.SetFileTypeToBinary()\nC++: void SetFileTypeToBinary()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {"SetScalarsName", PyvtkDataWriter_SetScalarsName, METH_VARARGS,
   "V.SetScalarsName(string)\nC++: virtual void SetScalarsName(const char *_arg)\n\nGive a name to the scalar data. If not specified, uses default\nname \"scalars\".\n"},
  {"GetScalarsName", PyvtkDataWriter_GetScalarsName, METH_VARARGS,
   "V.GetScalarsName() -> string\nC++: virtual char *GetScalarsName()\n\nGive a name to the scalar data. If not specified, uses default\nname \"scalars\".\n"},
  {"SetVectorsName", PyvtkDataWriter_SetVectorsName, METH_VARARGS,
   "V.SetVectorsName(string)\nC++: virtual void SetVectorsName(const char *_arg)\n\nGive a name to the vector data. If not specified, uses default\nname \"vectors\".\n"},
  {"GetVectorsName", PyvtkDataWriter_GetVectorsName, METH_VARARGS,
   "V.GetVectorsName() -> string\nC++: virtual char *GetVectorsName()\n\nGive a name to the vector data. If not specified, uses default\nname \"vectors\".\n"},
  {"SetTensorsName", PyvtkDataWriter_SetTensorsName, METH_VARARGS,
   "V.SetTensorsName(string)\nC++: virtual void SetTensorsName(const char *_arg)\n\nGive a name to the tensors data. If not specified, uses default\nname \"tensors\".\n"},
  {"GetTensorsName", PyvtkDataWriter_GetTensorsName, METH_VARARGS,
   "V.GetTensorsName() -> string\nC++: virtual char *GetTensorsName()\n\nGive a name to the tensors data. If not specified, uses default\nname \"tensors\".\n"},
  {"SetNormalsName", PyvtkDataWriter_SetNormalsName, METH_VARARGS,
   "V.SetNormalsName(string)\nC++: virtual void SetNormalsName(const char *_arg)\n\nGive a name to the normals data. If not specified, uses default\nname \"normals\".\n"},
  {"GetNormalsName", PyvtkDataWriter_GetNormalsName, METH_VARARGS,
   "V.GetNormalsName() -> string\nC++: virtual char *GetNormalsName()\n\nGive a name to the normals data. If not specified, uses default\nname \"normals\".\n"},
  {"SetTCoordsName", PyvtkDataWriter_SetTCoordsName, METH_VARARGS,
   "V.SetTCoordsName(string)\nC++: virtual void SetTCoordsName(const char *_arg)\n\nGive a name to the texture coordinates data. If not specified,\nuses default name \"textureCoords\".\n"},
  {"GetTCoordsName", PyvtkDataWriter_GetTCoordsName, METH_VARARGS,
   "V.GetTCoordsName() -> string\nC++: virtual char *GetTCoordsName()\n\nGive a name to the texture coordinates data. If not specified,\nuses default name \"textureCoords\".\n"},
  {"SetGlobalIdsName", PyvtkDataWriter_SetGlobalIdsName, METH_VARARGS,
   "V.SetGlobalIdsName(string)\nC++: virtual void SetGlobalIdsName(const char *_arg)\n\nGive a name to the global ids data. If not specified, uses\ndefault name \"global_ids\".\n"},
  {"GetGlobalIdsName", PyvtkDataWriter_GetGlobalIdsName, METH_VARARGS,
   "V.GetGlobalIdsName() -> string\nC++: virtual char *GetGlobalIdsName()\n\nGive a name to the global ids data. If not specified, uses\ndefault name \"global_ids\".\n"},
  {"SetPedigreeIdsName", PyvtkDataWriter_SetPedigreeIdsName, METH_VARARGS,
   "V.SetPedigreeIdsName(string)\nC++: virtual void SetPedigreeIdsName(const char *_arg)\n\nGive a name to the pedigree ids data. If not specified, uses\ndefault name \"pedigree_ids\".\n"},
  {"GetPedigreeIdsName", PyvtkDataWriter_GetPedigreeIdsName, METH_VARARGS,
   "V.GetPedigreeIdsName() -> string\nC++: virtual char *GetPedigreeIdsName()\n\nGive a name to the pedigree ids data. If not specified, uses\ndefault name \"pedigree_ids\".\n"},
  {"SetEdgeFlagsName", PyvtkDataWriter_SetEdgeFlagsName, METH_VARARGS,
   "V.SetEdgeFlagsName(string)\nC++: virtual void SetEdgeFlagsName(const char *_arg)\n\nGive a name to the edge flags data. If not specified, uses\ndefault name \"edge_flags\".\n"},
  {"GetEdgeFlagsName", PyvtkDataWriter_GetEdgeFlagsName, METH_VARARGS,
   "V.GetEdgeFlagsName() -> string\nC++: virtual char *GetEdgeFlagsName()\n\nGive a name to the edge flags data. If not specified, uses\ndefault name \"edge_flags\".\n"},
  {"SetLookupTableName", PyvtkDataWriter_SetLookupTableName, METH_VARARGS,
   "V.SetLookupTableName(string)\nC++: virtual void SetLookupTableName(const char *_arg)\n\nGive a name to the lookup table. If not specified, uses default\nname \"lookupTable\".\n"},
  {"GetLookupTableName", PyvtkDataWriter_GetLookupTableName, METH_VARARGS,
   "V.GetLookupTableName() -> string\nC++: virtual char *GetLookupTableName()\n\nGive a name to the lookup table. If not specified, uses default\nname \"lookupTable\".\n"},
  {"SetFieldDataName", PyvtkDataWriter_SetFieldDataName, METH_VARARGS,
   "V.SetFieldDataName(string)\nC++: virtual void SetFieldDataName(const char *_arg)\n\nGive a name to the field data. If not specified, uses default\nname \"field\".\n"},
  {"GetFieldDataName", PyvtkDataWriter_GetFieldDataName, METH_VARARGS,
   "V.GetFieldDataName() -> string\nC++: virtual char *GetFieldDataName()\n\nGive a name to the field data. If not specified, uses default\nname \"field\".\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDataWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOLegacyPython.vtkDataWriter", // tp_name
  sizeof(PyVTKObject), // tp_basicsize
  0, // tp_itemsize
  PyVTKObject_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  PyVTKObject_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  PyObject_GenericSetAttr, // tp_setattro
  &PyVTKObject_AsBuffer, // tp_as_buffer
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_BASETYPE, // tp_flags
  PyvtkDataWriter_Doc, // tp_doc
  PyVTKObject_Traverse, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  offsetof(PyVTKObject, vtk_weakreflist), // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  PyVTKObject_GetSet, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  offsetof(PyVTKObject, vtk_dict), // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyVTKObject_New, // tp_new
  PyObject_GC_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static vtkObjectBase *PyvtkDataWriter_StaticNew()
{
  return vtkDataWriter::New();
}

PyObject *PyvtkDataWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDataWriter_Type, PyvtkDataWriter_Methods,
    "vtkDataWriter",
 &PyvtkDataWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkDataWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

