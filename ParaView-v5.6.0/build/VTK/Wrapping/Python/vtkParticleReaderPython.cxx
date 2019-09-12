// python wrapper for vtkParticleReader
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
#include "vtkParticleReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParticleReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkParticleReader_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkParticleReader_Doc =
  "vtkParticleReader - Read ASCII or binary particle\n                           data and (optionally) one scalar\n                           value associated with each particle.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkParticleReader reads either a binary or a text file of\n"
  " particles. Each particle can have associated with it an optional\n"
  " scalar value. So the format is: x, y, z, scalar\n"
  " (all floats or doubles). The text file can consist of a comma\n"
  " delimited set of values. In most cases vtkParticleReader can\n"
  " automatically determine whether the file is text or binary.\n"
  " The data can be either float or double.\n"
  " Progress updates are provided.\n"
  " With respect to binary files, random access into the file to read\n"
  " pieces is supported.\n\n";


static PyObject *
PyvtkParticleReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParticleReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParticleReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParticleReader *tempr = vtkParticleReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParticleReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParticleReader::NewInstance());

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
PyvtkParticleReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

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
      op->vtkParticleReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkParticleReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_SetDataByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataByteOrderToBigEndian();
    }
    else
    {
      op->vtkParticleReader::SetDataByteOrderToBigEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_SetDataByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataByteOrderToLittleEndian();
    }
    else
    {
      op->vtkParticleReader::SetDataByteOrderToLittleEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_GetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataByteOrder() :
      op->vtkParticleReader::GetDataByteOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_SetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataByteOrder(temp0);
    }
    else
    {
      op->vtkParticleReader::SetDataByteOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_GetDataByteOrderAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrderAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDataByteOrderAsString() :
      op->vtkParticleReader::GetDataByteOrderAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_SetSwapBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSwapBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSwapBytes(temp0);
    }
    else
    {
      op->vtkParticleReader::SetSwapBytes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_GetSwapBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwapBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSwapBytes() :
      op->vtkParticleReader::GetSwapBytes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_SwapBytesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBytesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SwapBytesOn();
    }
    else
    {
      op->vtkParticleReader::SwapBytesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_SwapBytesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBytesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SwapBytesOff();
    }
    else
    {
      op->vtkParticleReader::SwapBytesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_SetHasScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHasScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHasScalar(temp0);
    }
    else
    {
      op->vtkParticleReader::SetHasScalar(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_GetHasScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHasScalar() :
      op->vtkParticleReader::GetHasScalar());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_HasScalarOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasScalarOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HasScalarOn();
    }
    else
    {
      op->vtkParticleReader::HasScalarOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_HasScalarOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasScalarOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HasScalarOff();
    }
    else
    {
      op->vtkParticleReader::HasScalarOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_SetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

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
      op->vtkParticleReader::SetFileType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_GetFileTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileTypeMinValue() :
      op->vtkParticleReader::GetFileTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_GetFileTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileTypeMaxValue() :
      op->vtkParticleReader::GetFileTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_GetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileType() :
      op->vtkParticleReader::GetFileType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_SetFileTypeToUnknown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToUnknown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileTypeToUnknown();
    }
    else
    {
      op->vtkParticleReader::SetFileTypeToUnknown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_SetFileTypeToText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileTypeToText();
    }
    else
    {
      op->vtkParticleReader::SetFileTypeToText();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_SetFileTypeToBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileTypeToBinary();
    }
    else
    {
      op->vtkParticleReader::SetFileTypeToBinary();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_SetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataType(temp0);
    }
    else
    {
      op->vtkParticleReader::SetDataType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_GetDataTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeMinValue() :
      op->vtkParticleReader::GetDataTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_GetDataTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeMaxValue() :
      op->vtkParticleReader::GetDataTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkParticleReader::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_SetDataTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToFloat();
    }
    else
    {
      op->vtkParticleReader::SetDataTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleReader_SetDataTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToDouble();
    }
    else
    {
      op->vtkParticleReader::SetDataTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkParticleReader_Methods[] = {
  {"IsTypeOf", PyvtkParticleReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParticleReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParticleReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkParticleReader\nC++: static vtkParticleReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParticleReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkParticleReader\nC++: vtkParticleReader *NewInstance()\n\n"},
  {"SetFileName", PyvtkParticleReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify file name.\n"},
  {"GetFileName", PyvtkParticleReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSpecify file name.\n"},
  {"SetDataByteOrderToBigEndian", PyvtkParticleReader_SetDataByteOrderToBigEndian, METH_VARARGS,
   "V.SetDataByteOrderToBigEndian()\nC++: void SetDataByteOrderToBigEndian()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian. Not used when reading text files.\n"},
  {"SetDataByteOrderToLittleEndian", PyvtkParticleReader_SetDataByteOrderToLittleEndian, METH_VARARGS,
   "V.SetDataByteOrderToLittleEndian()\nC++: void SetDataByteOrderToLittleEndian()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian. Not used when reading text files.\n"},
  {"GetDataByteOrder", PyvtkParticleReader_GetDataByteOrder, METH_VARARGS,
   "V.GetDataByteOrder() -> int\nC++: int GetDataByteOrder()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian. Not used when reading text files.\n"},
  {"SetDataByteOrder", PyvtkParticleReader_SetDataByteOrder, METH_VARARGS,
   "V.SetDataByteOrder(int)\nC++: void SetDataByteOrder(int)\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian. Not used when reading text files.\n"},
  {"GetDataByteOrderAsString", PyvtkParticleReader_GetDataByteOrderAsString, METH_VARARGS,
   "V.GetDataByteOrderAsString() -> string\nC++: const char *GetDataByteOrderAsString()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian. Not used when reading text files.\n"},
  {"SetSwapBytes", PyvtkParticleReader_SetSwapBytes, METH_VARARGS,
   "V.SetSwapBytes(int)\nC++: virtual void SetSwapBytes(vtkTypeBool _arg)\n\nSet/Get the byte swapping to explicitly swap the bytes of a file.\nNot used when reading text files.\n"},
  {"GetSwapBytes", PyvtkParticleReader_GetSwapBytes, METH_VARARGS,
   "V.GetSwapBytes() -> int\nC++: vtkTypeBool GetSwapBytes()\n\nSet/Get the byte swapping to explicitly swap the bytes of a file.\nNot used when reading text files.\n"},
  {"SwapBytesOn", PyvtkParticleReader_SwapBytesOn, METH_VARARGS,
   "V.SwapBytesOn()\nC++: virtual void SwapBytesOn()\n\nSet/Get the byte swapping to explicitly swap the bytes of a file.\nNot used when reading text files.\n"},
  {"SwapBytesOff", PyvtkParticleReader_SwapBytesOff, METH_VARARGS,
   "V.SwapBytesOff()\nC++: virtual void SwapBytesOff()\n\nSet/Get the byte swapping to explicitly swap the bytes of a file.\nNot used when reading text files.\n"},
  {"SetHasScalar", PyvtkParticleReader_SetHasScalar, METH_VARARGS,
   "V.SetHasScalar(int)\nC++: virtual void SetHasScalar(vtkTypeBool _arg)\n\nDefault: 1. If 1 then each particle has a value associated with\nit.\n"},
  {"GetHasScalar", PyvtkParticleReader_GetHasScalar, METH_VARARGS,
   "V.GetHasScalar() -> int\nC++: virtual vtkTypeBool GetHasScalar()\n\nDefault: 1. If 1 then each particle has a value associated with\nit.\n"},
  {"HasScalarOn", PyvtkParticleReader_HasScalarOn, METH_VARARGS,
   "V.HasScalarOn()\nC++: virtual void HasScalarOn()\n\nDefault: 1. If 1 then each particle has a value associated with\nit.\n"},
  {"HasScalarOff", PyvtkParticleReader_HasScalarOff, METH_VARARGS,
   "V.HasScalarOff()\nC++: virtual void HasScalarOff()\n\nDefault: 1. If 1 then each particle has a value associated with\nit.\n"},
  {"SetFileType", PyvtkParticleReader_SetFileType, METH_VARARGS,
   "V.SetFileType(int)\nC++: virtual void SetFileType(int _arg)\n\nGet/Set the file type.  The options are:\n- FILE_TYPE_IS_UNKNOWN (default) the class will attempt to\n  determine the file type. If this fails then you should set the\n  file type yourself.\n- FILE_TYPE_IS_TEXT the file type is text.\n- FILE_TYPE_IS_BINARY the file type is binary.\n"},
  {"GetFileTypeMinValue", PyvtkParticleReader_GetFileTypeMinValue, METH_VARARGS,
   "V.GetFileTypeMinValue() -> int\nC++: virtual int GetFileTypeMinValue()\n\nGet/Set the file type.  The options are:\n- FILE_TYPE_IS_UNKNOWN (default) the class will attempt to\n  determine the file type. If this fails then you should set the\n  file type yourself.\n- FILE_TYPE_IS_TEXT the file type is text.\n- FILE_TYPE_IS_BINARY the file type is binary.\n"},
  {"GetFileTypeMaxValue", PyvtkParticleReader_GetFileTypeMaxValue, METH_VARARGS,
   "V.GetFileTypeMaxValue() -> int\nC++: virtual int GetFileTypeMaxValue()\n\nGet/Set the file type.  The options are:\n- FILE_TYPE_IS_UNKNOWN (default) the class will attempt to\n  determine the file type. If this fails then you should set the\n  file type yourself.\n- FILE_TYPE_IS_TEXT the file type is text.\n- FILE_TYPE_IS_BINARY the file type is binary.\n"},
  {"GetFileType", PyvtkParticleReader_GetFileType, METH_VARARGS,
   "V.GetFileType() -> int\nC++: virtual int GetFileType()\n\nGet/Set the file type.  The options are:\n- FILE_TYPE_IS_UNKNOWN (default) the class will attempt to\n  determine the file type. If this fails then you should set the\n  file type yourself.\n- FILE_TYPE_IS_TEXT the file type is text.\n- FILE_TYPE_IS_BINARY the file type is binary.\n"},
  {"SetFileTypeToUnknown", PyvtkParticleReader_SetFileTypeToUnknown, METH_VARARGS,
   "V.SetFileTypeToUnknown()\nC++: void SetFileTypeToUnknown()\n\nGet/Set the file type.  The options are:\n- FILE_TYPE_IS_UNKNOWN (default) the class will attempt to\n  determine the file type. If this fails then you should set the\n  file type yourself.\n- FILE_TYPE_IS_TEXT the file type is text.\n- FILE_TYPE_IS_BINARY the file type is binary.\n"},
  {"SetFileTypeToText", PyvtkParticleReader_SetFileTypeToText, METH_VARARGS,
   "V.SetFileTypeToText()\nC++: void SetFileTypeToText()\n\nGet/Set the file type.  The options are:\n- FILE_TYPE_IS_UNKNOWN (default) the class will attempt to\n  determine the file type. If this fails then you should set the\n  file type yourself.\n- FILE_TYPE_IS_TEXT the file type is text.\n- FILE_TYPE_IS_BINARY the file type is binary.\n"},
  {"SetFileTypeToBinary", PyvtkParticleReader_SetFileTypeToBinary, METH_VARARGS,
   "V.SetFileTypeToBinary()\nC++: void SetFileTypeToBinary()\n\nGet/Set the file type.  The options are:\n- FILE_TYPE_IS_UNKNOWN (default) the class will attempt to\n  determine the file type. If this fails then you should set the\n  file type yourself.\n- FILE_TYPE_IS_TEXT the file type is text.\n- FILE_TYPE_IS_BINARY the file type is binary.\n"},
  {"SetDataType", PyvtkParticleReader_SetDataType, METH_VARARGS,
   "V.SetDataType(int)\nC++: virtual void SetDataType(int _arg)\n\nGet/Set the data type.  The options are:\n- VTK_FLOAT (default) single precision floating point.\n- VTK_DOUBLE double precision floating point.\n"},
  {"GetDataTypeMinValue", PyvtkParticleReader_GetDataTypeMinValue, METH_VARARGS,
   "V.GetDataTypeMinValue() -> int\nC++: virtual int GetDataTypeMinValue()\n\nGet/Set the data type.  The options are:\n- VTK_FLOAT (default) single precision floating point.\n- VTK_DOUBLE double precision floating point.\n"},
  {"GetDataTypeMaxValue", PyvtkParticleReader_GetDataTypeMaxValue, METH_VARARGS,
   "V.GetDataTypeMaxValue() -> int\nC++: virtual int GetDataTypeMaxValue()\n\nGet/Set the data type.  The options are:\n- VTK_FLOAT (default) single precision floating point.\n- VTK_DOUBLE double precision floating point.\n"},
  {"GetDataType", PyvtkParticleReader_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: virtual int GetDataType()\n\nGet/Set the data type.  The options are:\n- VTK_FLOAT (default) single precision floating point.\n- VTK_DOUBLE double precision floating point.\n"},
  {"SetDataTypeToFloat", PyvtkParticleReader_SetDataTypeToFloat, METH_VARARGS,
   "V.SetDataTypeToFloat()\nC++: void SetDataTypeToFloat()\n\nGet/Set the data type.  The options are:\n- VTK_FLOAT (default) single precision floating point.\n- VTK_DOUBLE double precision floating point.\n"},
  {"SetDataTypeToDouble", PyvtkParticleReader_SetDataTypeToDouble, METH_VARARGS,
   "V.SetDataTypeToDouble()\nC++: void SetDataTypeToDouble()\n\nGet/Set the data type.  The options are:\n- VTK_FLOAT (default) single precision floating point.\n- VTK_DOUBLE double precision floating point.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkParticleReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOGeometryPython.vtkParticleReader", // tp_name
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
  PyvtkParticleReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParticleReader_StaticNew()
{
  return vtkParticleReader::New();
}

PyObject *PyvtkParticleReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkParticleReader_Type, PyvtkParticleReader_Methods,
    "vtkParticleReader",
 &PyvtkParticleReader_StaticNew);

  PyTypeObject *pytype = &PyvtkParticleReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkParticleReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParticleReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParticleReader", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_FILE_BYTE_ORDER_BIG_ENDIAN", 0 },
        { "VTK_FILE_BYTE_ORDER_LITTLE_ENDIAN", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

