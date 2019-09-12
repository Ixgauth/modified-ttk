// python wrapper for vtkXMLWriter
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
#include "vtkInformationVector.h"
#include "vtkXMLWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLWriter_ClassNew(); }

#ifndef DECLARED_PyvtkAlgorithm_ClassNew
extern "C" { PyObject *PyvtkAlgorithm_ClassNew(); }
#define DECLARED_PyvtkAlgorithm_ClassNew
#endif

static const char *PyvtkXMLWriter_Doc =
  "vtkXMLWriter - Superclass for VTK's XML file writers.\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "vtkXMLWriter provides methods implementing most of the functionality\n"
  "needed to write VTK XML file formats.  Concrete subclasses provide\n"
  "actual writer implementations calling upon this functionality.\n\n"
  "@par Thanks CompressionLevel getters/setters exposed by Quincy\n"
  "Wofford (qwofford@lanl.gov) and John Patchett (patchett@lanl.gov),\n"
  "Los Alamos National Laboratory (2017)\n\n";

static PyTypeObject PyvtkXMLWriter_CompressorType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXMLPython.vtkXMLWriter.CompressorType", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkXMLWriter_CompressorType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkXMLWriter_CompressorType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkXMLWriter_CompressorType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkXMLWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLWriter *tempr = vtkXMLWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLWriter::NewInstance());

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
PyvtkXMLWriter_SetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetByteOrder(temp0);
    }
    else
    {
      op->vtkXMLWriter::SetByteOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetByteOrder() :
      op->vtkXMLWriter::GetByteOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetByteOrderToBigEndian();
    }
    else
    {
      op->vtkXMLWriter::SetByteOrderToBigEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetByteOrderToLittleEndian();
    }
    else
    {
      op->vtkXMLWriter::SetByteOrderToLittleEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetHeaderType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeaderType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeaderType(temp0);
    }
    else
    {
      op->vtkXMLWriter::SetHeaderType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetHeaderType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeaderType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHeaderType() :
      op->vtkXMLWriter::GetHeaderType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetHeaderTypeToUInt32(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeaderTypeToUInt32");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHeaderTypeToUInt32();
    }
    else
    {
      op->vtkXMLWriter::SetHeaderTypeToUInt32();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetHeaderTypeToUInt64(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeaderTypeToUInt64");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHeaderTypeToUInt64();
    }
    else
    {
      op->vtkXMLWriter::SetHeaderTypeToUInt64();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetIdType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIdType(temp0);
    }
    else
    {
      op->vtkXMLWriter::SetIdType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetIdType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIdType() :
      op->vtkXMLWriter::GetIdType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetIdTypeToInt32(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdTypeToInt32");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIdTypeToInt32();
    }
    else
    {
      op->vtkXMLWriter::SetIdTypeToInt32();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetIdTypeToInt64(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdTypeToInt64");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIdTypeToInt64();
    }
    else
    {
      op->vtkXMLWriter::SetIdTypeToInt64();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

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
      op->vtkXMLWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkXMLWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

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
      op->vtkXMLWriter::SetWriteToOutputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteToOutputString() :
      op->vtkXMLWriter::GetWriteToOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_WriteToOutputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToOutputStringOn();
    }
    else
    {
      op->vtkXMLWriter::WriteToOutputStringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_WriteToOutputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToOutputStringOff();
    }
    else
    {
      op->vtkXMLWriter::WriteToOutputStringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetOutputString() :
      op->vtkXMLWriter::GetOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetCompressor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  vtkDataCompressor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataCompressor"))
  {
    if (ap.IsBound())
    {
      op->SetCompressor(temp0);
    }
    else
    {
      op->vtkXMLWriter::SetCompressor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetCompressor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataCompressor *tempr = (ap.IsBound() ?
      op->GetCompressor() :
      op->vtkXMLWriter::GetCompressor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetCompressorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompressorType(temp0);
    }
    else
    {
      op->vtkXMLWriter::SetCompressorType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetCompressorTypeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressorTypeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCompressorTypeToNone();
    }
    else
    {
      op->vtkXMLWriter::SetCompressorTypeToNone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetCompressorTypeToLZ4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressorTypeToLZ4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCompressorTypeToLZ4();
    }
    else
    {
      op->vtkXMLWriter::SetCompressorTypeToLZ4();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetCompressorTypeToZLib(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressorTypeToZLib");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCompressorTypeToZLib();
    }
    else
    {
      op->vtkXMLWriter::SetCompressorTypeToZLib();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetCompressorTypeToLZMA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressorTypeToLZMA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCompressorTypeToLZMA();
    }
    else
    {
      op->vtkXMLWriter::SetCompressorTypeToLZMA();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompressionLevel(temp0);
    }
    else
    {
      op->vtkXMLWriter::SetCompressionLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompressionLevel() :
      op->vtkXMLWriter::GetCompressionLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetBlockSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBlockSize(temp0);
    }
    else
    {
      op->vtkXMLWriter::SetBlockSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetBlockSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetBlockSize() :
      op->vtkXMLWriter::GetBlockSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetDataMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataMode(temp0);
    }
    else
    {
      op->vtkXMLWriter::SetDataMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetDataMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataMode() :
      op->vtkXMLWriter::GetDataMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetDataModeToAscii(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataModeToAscii");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataModeToAscii();
    }
    else
    {
      op->vtkXMLWriter::SetDataModeToAscii();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetDataModeToBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataModeToBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataModeToBinary();
    }
    else
    {
      op->vtkXMLWriter::SetDataModeToBinary();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetDataModeToAppended(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataModeToAppended");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataModeToAppended();
    }
    else
    {
      op->vtkXMLWriter::SetDataModeToAppended();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetEncodeAppendedData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEncodeAppendedData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEncodeAppendedData(temp0);
    }
    else
    {
      op->vtkXMLWriter::SetEncodeAppendedData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetEncodeAppendedData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncodeAppendedData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEncodeAppendedData() :
      op->vtkXMLWriter::GetEncodeAppendedData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_EncodeAppendedDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EncodeAppendedDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EncodeAppendedDataOn();
    }
    else
    {
      op->vtkXMLWriter::EncodeAppendedDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_EncodeAppendedDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EncodeAppendedDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EncodeAppendedDataOff();
    }
    else
    {
      op->vtkXMLWriter::EncodeAppendedDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkXMLWriter::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXMLWriter_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0, temp1);
    }
    else
    {
      op->vtkXMLWriter::SetInputData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXMLWriter_SetInputData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkXMLWriter_SetInputData_s1(self, args);
    case 2:
      return PyvtkXMLWriter_SetInputData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return nullptr;
}



static PyObject *
PyvtkXMLWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkXMLWriter::GetInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkXMLWriter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkXMLWriter_GetInput_s1(self, args);
    case 0:
      return PyvtkXMLWriter_GetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return nullptr;
}



static PyObject *
PyvtkXMLWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetDefaultFileExtension();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Write() :
      op->vtkXMLWriter::Write());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkXMLWriter::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfTimeSteps(temp0);
    }
    else
    {
      op->vtkXMLWriter::SetNumberOfTimeSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Start();
    }
    else
    {
      op->vtkXMLWriter::Start();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_Stop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Stop();
    }
    else
    {
      op->vtkXMLWriter::Stop();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriter_WriteNextTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteNextTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->WriteNextTime(temp0);
    }
    else
    {
      op->vtkXMLWriter::WriteNextTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLWriter_Methods[] = {
  {"IsTypeOf", PyvtkXMLWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLWriter\nC++: static vtkXMLWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLWriter\nC++: vtkXMLWriter *NewInstance()\n\n"},
  {"SetByteOrder", PyvtkXMLWriter_SetByteOrder, METH_VARARGS,
   "V.SetByteOrder(int)\nC++: virtual void SetByteOrder(int _arg)\n\nGet/Set the byte order of data written to the file.  The default\nis the machine's hardware byte order.\n"},
  {"GetByteOrder", PyvtkXMLWriter_GetByteOrder, METH_VARARGS,
   "V.GetByteOrder() -> int\nC++: virtual int GetByteOrder()\n\nGet/Set the byte order of data written to the file.  The default\nis the machine's hardware byte order.\n"},
  {"SetByteOrderToBigEndian", PyvtkXMLWriter_SetByteOrderToBigEndian, METH_VARARGS,
   "V.SetByteOrderToBigEndian()\nC++: void SetByteOrderToBigEndian()\n\nGet/Set the byte order of data written to the file.  The default\nis the machine's hardware byte order.\n"},
  {"SetByteOrderToLittleEndian", PyvtkXMLWriter_SetByteOrderToLittleEndian, METH_VARARGS,
   "V.SetByteOrderToLittleEndian()\nC++: void SetByteOrderToLittleEndian()\n\nGet/Set the byte order of data written to the file.  The default\nis the machine's hardware byte order.\n"},
  {"SetHeaderType", PyvtkXMLWriter_SetHeaderType, METH_VARARGS,
   "V.SetHeaderType(int)\nC++: virtual void SetHeaderType(int)\n\nGet/Set the binary data header word type.  The default is UInt32.\nSet to UInt64 when storing arrays requiring 64-bit indexing.\n"},
  {"GetHeaderType", PyvtkXMLWriter_GetHeaderType, METH_VARARGS,
   "V.GetHeaderType() -> int\nC++: virtual int GetHeaderType()\n\nGet/Set the binary data header word type.  The default is UInt32.\nSet to UInt64 when storing arrays requiring 64-bit indexing.\n"},
  {"SetHeaderTypeToUInt32", PyvtkXMLWriter_SetHeaderTypeToUInt32, METH_VARARGS,
   "V.SetHeaderTypeToUInt32()\nC++: void SetHeaderTypeToUInt32()\n\nGet/Set the binary data header word type.  The default is UInt32.\nSet to UInt64 when storing arrays requiring 64-bit indexing.\n"},
  {"SetHeaderTypeToUInt64", PyvtkXMLWriter_SetHeaderTypeToUInt64, METH_VARARGS,
   "V.SetHeaderTypeToUInt64()\nC++: void SetHeaderTypeToUInt64()\n\nGet/Set the binary data header word type.  The default is UInt32.\nSet to UInt64 when storing arrays requiring 64-bit indexing.\n"},
  {"SetIdType", PyvtkXMLWriter_SetIdType, METH_VARARGS,
   "V.SetIdType(int)\nC++: virtual void SetIdType(int)\n\nGet/Set the size of the vtkIdType values stored in the file.  The\ndefault is the real size of vtkIdType.\n"},
  {"GetIdType", PyvtkXMLWriter_GetIdType, METH_VARARGS,
   "V.GetIdType() -> int\nC++: virtual int GetIdType()\n\nGet/Set the size of the vtkIdType values stored in the file.  The\ndefault is the real size of vtkIdType.\n"},
  {"SetIdTypeToInt32", PyvtkXMLWriter_SetIdTypeToInt32, METH_VARARGS,
   "V.SetIdTypeToInt32()\nC++: void SetIdTypeToInt32()\n\nGet/Set the size of the vtkIdType values stored in the file.  The\ndefault is the real size of vtkIdType.\n"},
  {"SetIdTypeToInt64", PyvtkXMLWriter_SetIdTypeToInt64, METH_VARARGS,
   "V.SetIdTypeToInt64()\nC++: void SetIdTypeToInt64()\n\nGet/Set the size of the vtkIdType values stored in the file.  The\ndefault is the real size of vtkIdType.\n"},
  {"SetFileName", PyvtkXMLWriter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nGet/Set the name of the output file.\n"},
  {"GetFileName", PyvtkXMLWriter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nGet/Set the name of the output file.\n"},
  {"SetWriteToOutputString", PyvtkXMLWriter_SetWriteToOutputString, METH_VARARGS,
   "V.SetWriteToOutputString(int)\nC++: virtual void SetWriteToOutputString(vtkTypeBool _arg)\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {"GetWriteToOutputString", PyvtkXMLWriter_GetWriteToOutputString, METH_VARARGS,
   "V.GetWriteToOutputString() -> int\nC++: virtual vtkTypeBool GetWriteToOutputString()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {"WriteToOutputStringOn", PyvtkXMLWriter_WriteToOutputStringOn, METH_VARARGS,
   "V.WriteToOutputStringOn()\nC++: virtual void WriteToOutputStringOn()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {"WriteToOutputStringOff", PyvtkXMLWriter_WriteToOutputStringOff, METH_VARARGS,
   "V.WriteToOutputStringOff()\nC++: virtual void WriteToOutputStringOff()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {"GetOutputString", PyvtkXMLWriter_GetOutputString, METH_VARARGS,
   "V.GetOutputString() -> string\nC++: std::string GetOutputString()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {"SetCompressor", PyvtkXMLWriter_SetCompressor, METH_VARARGS,
   "V.SetCompressor(vtkDataCompressor)\nC++: virtual void SetCompressor(vtkDataCompressor *)\n\nGet/Set the compressor used to compress binary and appended data\nbefore writing to the file.  Default is a vtkZLibDataCompressor.\n"},
  {"GetCompressor", PyvtkXMLWriter_GetCompressor, METH_VARARGS,
   "V.GetCompressor() -> vtkDataCompressor\nC++: virtual vtkDataCompressor *GetCompressor()\n\nGet/Set the compressor used to compress binary and appended data\nbefore writing to the file.  Default is a vtkZLibDataCompressor.\n"},
  {"SetCompressorType", PyvtkXMLWriter_SetCompressorType, METH_VARARGS,
   "V.SetCompressorType(int)\nC++: void SetCompressorType(int compressorType)\n\nConvenience functions to set the compressor to certain known\ntypes.\n"},
  {"SetCompressorTypeToNone", PyvtkXMLWriter_SetCompressorTypeToNone, METH_VARARGS,
   "V.SetCompressorTypeToNone()\nC++: void SetCompressorTypeToNone()\n\nConvenience functions to set the compressor to certain known\ntypes.\n"},
  {"SetCompressorTypeToLZ4", PyvtkXMLWriter_SetCompressorTypeToLZ4, METH_VARARGS,
   "V.SetCompressorTypeToLZ4()\nC++: void SetCompressorTypeToLZ4()\n\nConvenience functions to set the compressor to certain known\ntypes.\n"},
  {"SetCompressorTypeToZLib", PyvtkXMLWriter_SetCompressorTypeToZLib, METH_VARARGS,
   "V.SetCompressorTypeToZLib()\nC++: void SetCompressorTypeToZLib()\n\nConvenience functions to set the compressor to certain known\ntypes.\n"},
  {"SetCompressorTypeToLZMA", PyvtkXMLWriter_SetCompressorTypeToLZMA, METH_VARARGS,
   "V.SetCompressorTypeToLZMA()\nC++: void SetCompressorTypeToLZMA()\n\nConvenience functions to set the compressor to certain known\ntypes.\n"},
  {"SetCompressionLevel", PyvtkXMLWriter_SetCompressionLevel, METH_VARARGS,
   "V.SetCompressionLevel(int)\nC++: void SetCompressionLevel(int compressorLevel)\n\nConvenience functions to set the compressor to certain known\ntypes.\n"},
  {"GetCompressionLevel", PyvtkXMLWriter_GetCompressionLevel, METH_VARARGS,
   "V.GetCompressionLevel() -> int\nC++: virtual int GetCompressionLevel()\n\nConvenience functions to set the compressor to certain known\ntypes.\n"},
  {"SetBlockSize", PyvtkXMLWriter_SetBlockSize, METH_VARARGS,
   "V.SetBlockSize(int)\nC++: virtual void SetBlockSize(size_t blockSize)\n\nGet/Set the block size used in compression.  When reading, this\ncontrols the granularity of how much extra information must be\nread when only part of the data are requested.  The value should\nbe a multiple of the largest scalar data type.\n"},
  {"GetBlockSize", PyvtkXMLWriter_GetBlockSize, METH_VARARGS,
   "V.GetBlockSize() -> int\nC++: virtual size_t GetBlockSize()\n\nGet/Set the block size used in compression.  When reading, this\ncontrols the granularity of how much extra information must be\nread when only part of the data are requested.  The value should\nbe a multiple of the largest scalar data type.\n"},
  {"SetDataMode", PyvtkXMLWriter_SetDataMode, METH_VARARGS,
   "V.SetDataMode(int)\nC++: virtual void SetDataMode(int _arg)\n\nGet/Set the data mode used for the file's data.  The options are\nvtkXMLWriter::Ascii, vtkXMLWriter::Binary, and\nvtkXMLWriter::Appended.\n"},
  {"GetDataMode", PyvtkXMLWriter_GetDataMode, METH_VARARGS,
   "V.GetDataMode() -> int\nC++: virtual int GetDataMode()\n\nGet/Set the data mode used for the file's data.  The options are\nvtkXMLWriter::Ascii, vtkXMLWriter::Binary, and\nvtkXMLWriter::Appended.\n"},
  {"SetDataModeToAscii", PyvtkXMLWriter_SetDataModeToAscii, METH_VARARGS,
   "V.SetDataModeToAscii()\nC++: void SetDataModeToAscii()\n\nGet/Set the data mode used for the file's data.  The options are\nvtkXMLWriter::Ascii, vtkXMLWriter::Binary, and\nvtkXMLWriter::Appended.\n"},
  {"SetDataModeToBinary", PyvtkXMLWriter_SetDataModeToBinary, METH_VARARGS,
   "V.SetDataModeToBinary()\nC++: void SetDataModeToBinary()\n\nGet/Set the data mode used for the file's data.  The options are\nvtkXMLWriter::Ascii, vtkXMLWriter::Binary, and\nvtkXMLWriter::Appended.\n"},
  {"SetDataModeToAppended", PyvtkXMLWriter_SetDataModeToAppended, METH_VARARGS,
   "V.SetDataModeToAppended()\nC++: void SetDataModeToAppended()\n\nGet/Set the data mode used for the file's data.  The options are\nvtkXMLWriter::Ascii, vtkXMLWriter::Binary, and\nvtkXMLWriter::Appended.\n"},
  {"SetEncodeAppendedData", PyvtkXMLWriter_SetEncodeAppendedData, METH_VARARGS,
   "V.SetEncodeAppendedData(int)\nC++: virtual void SetEncodeAppendedData(vtkTypeBool _arg)\n\nGet/Set whether the appended data section is base64 encoded.  If\nencoded, reading and writing will be slower, but the file will be\nfully valid XML and text-only.  If not encoded, the XML\nspecification will be violated, but reading and writing will be\nfast.  The default is to do the encoding.\n"},
  {"GetEncodeAppendedData", PyvtkXMLWriter_GetEncodeAppendedData, METH_VARARGS,
   "V.GetEncodeAppendedData() -> int\nC++: virtual vtkTypeBool GetEncodeAppendedData()\n\nGet/Set whether the appended data section is base64 encoded.  If\nencoded, reading and writing will be slower, but the file will be\nfully valid XML and text-only.  If not encoded, the XML\nspecification will be violated, but reading and writing will be\nfast.  The default is to do the encoding.\n"},
  {"EncodeAppendedDataOn", PyvtkXMLWriter_EncodeAppendedDataOn, METH_VARARGS,
   "V.EncodeAppendedDataOn()\nC++: virtual void EncodeAppendedDataOn()\n\nGet/Set whether the appended data section is base64 encoded.  If\nencoded, reading and writing will be slower, but the file will be\nfully valid XML and text-only.  If not encoded, the XML\nspecification will be violated, but reading and writing will be\nfast.  The default is to do the encoding.\n"},
  {"EncodeAppendedDataOff", PyvtkXMLWriter_EncodeAppendedDataOff, METH_VARARGS,
   "V.EncodeAppendedDataOff()\nC++: virtual void EncodeAppendedDataOff()\n\nGet/Set whether the appended data section is base64 encoded.  If\nencoded, reading and writing will be slower, but the file will be\nfully valid XML and text-only.  If not encoded, the XML\nspecification will be violated, but reading and writing will be\nfast.  The default is to do the encoding.\n"},
  {"SetInputData", PyvtkXMLWriter_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkDataObject)\nC++: void SetInputData(vtkDataObject *)\nV.SetInputData(int, vtkDataObject)\nC++: void SetInputData(int, vtkDataObject *)\n\nAssign a data object as input. Note that this method does not\nestablish a pipeline connection. Use SetInputConnection() to\nsetup a pipeline connection.\n"},
  {"GetInput", PyvtkXMLWriter_GetInput, METH_VARARGS,
   "V.GetInput(int) -> vtkDataObject\nC++: vtkDataObject *GetInput(int port)\nV.GetInput() -> vtkDataObject\nC++: vtkDataObject *GetInput()\n\nAssign a data object as input. Note that this method does not\nestablish a pipeline connection. Use SetInputConnection() to\nsetup a pipeline connection.\n"},
  {"GetDefaultFileExtension", PyvtkXMLWriter_GetDefaultFileExtension, METH_VARARGS,
   "V.GetDefaultFileExtension() -> string\nC++: virtual const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {"Write", PyvtkXMLWriter_Write, METH_VARARGS,
   "V.Write() -> int\nC++: int Write()\n\nInvoke the writer.  Returns 1 for success, 0 for failure.\n"},
  {"GetNumberOfTimeSteps", PyvtkXMLWriter_GetNumberOfTimeSteps, METH_VARARGS,
   "V.GetNumberOfTimeSteps() -> int\nC++: virtual int GetNumberOfTimeSteps()\n\nSet the number of time steps\n"},
  {"SetNumberOfTimeSteps", PyvtkXMLWriter_SetNumberOfTimeSteps, METH_VARARGS,
   "V.SetNumberOfTimeSteps(int)\nC++: virtual void SetNumberOfTimeSteps(int _arg)\n\nSet the number of time steps\n"},
  {"Start", PyvtkXMLWriter_Start, METH_VARARGS,
   "V.Start()\nC++: void Start()\n\nAPI to interface an outside the VTK pipeline control\n"},
  {"Stop", PyvtkXMLWriter_Stop, METH_VARARGS,
   "V.Stop()\nC++: void Stop()\n\nAPI to interface an outside the VTK pipeline control\n"},
  {"WriteNextTime", PyvtkXMLWriter_WriteNextTime, METH_VARARGS,
   "V.WriteNextTime(float)\nC++: void WriteNextTime(double time)\n\nAPI to interface an outside the VTK pipeline control\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXMLPython.vtkXMLWriter", // tp_name
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
  PyvtkXMLWriter_Doc, // tp_doc
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

PyObject *PyvtkXMLWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLWriter_Type, PyvtkXMLWriter_Methods,
    "vtkXMLWriter",
 nullptr);

  PyTypeObject *pytype = &PyvtkXMLWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkXMLWriter_CompressorType_Type);
  PyvtkXMLWriter_CompressorType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkXMLWriter_CompressorType_Type);

  o = (PyObject *)&PyvtkXMLWriter_CompressorType_Type;
  if (PyDict_SetItemString(d, "CompressorType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 9; c++)
  {
    static const struct { const char *name; int value; }
      constants[9] = {
        { "BigEndian", vtkXMLWriter::BigEndian },
        { "LittleEndian", vtkXMLWriter::LittleEndian },
        { "Ascii", vtkXMLWriter::Ascii },
        { "Binary", vtkXMLWriter::Binary },
        { "Appended", vtkXMLWriter::Appended },
        { "Int32", vtkXMLWriter::Int32 },
        { "Int64", vtkXMLWriter::Int64 },
        { "UInt32", vtkXMLWriter::UInt32 },
        { "UInt64", vtkXMLWriter::UInt64 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkXMLWriter::CompressorType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "NONE", vtkXMLWriter::NONE },
        { "ZLIB", vtkXMLWriter::ZLIB },
        { "LZ4", vtkXMLWriter::LZ4 },
        { "LZMA", vtkXMLWriter::LZMA },
      };

    o = PyvtkXMLWriter_CompressorType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

