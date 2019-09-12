// python wrapper for vtkCGNSFileSeriesReader
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
#include "vtkInformationVector.h"
#include "vtkCGNSFileSeriesReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCGNSFileSeriesReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCGNSFileSeriesReader_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkCGNSFileSeriesReader_Doc =
  "vtkCGNSFileSeriesReader - Adds support for reading temporal or\npartitioned CGNS files.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkCGNSFileSeriesReader is a meta-reader that add support for reading\n"
  "CGNS file series using vtkCGNSReader. We encounter two types of file\n"
  "series with CGNS:\n"
  "\\li 1. temporal file series - where each file is simply a single\n"
  "    timestep.\n"
  "\\li 2. partitioned file series - where each file corresponds to data\n"
  "    dumped\n"
  "       out from a rank but has all timesteps.\n\n\n"
  " vtkCGNSFileSeriesReader determines the nature of the file series\n"
  " encountered and reads the files accordingly. For partitioned files,\n"
  "the\n"
  " files are distributed among data-processing ranks, while for\n"
  "temporal file\n"
  " series, blocks are distributed among data-processing ranks (using\n"
  "logic in\n"
  " vtkCGNSReader itself).\n\n"
  "@sa vtkFileSeriesHelper\n\n";


static PyObject *
PyvtkCGNSFileSeriesReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCGNSFileSeriesReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCGNSFileSeriesReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCGNSFileSeriesReader *tempr = vtkCGNSFileSeriesReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCGNSFileSeriesReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCGNSFileSeriesReader::NewInstance());

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
PyvtkCGNSFileSeriesReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkCGNSFileSeriesReader::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkCGNSFileSeriesReader::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_SetReader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  vtkCGNSReader *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCGNSReader"))
  {
    if (ap.IsBound())
    {
      op->SetReader(temp0);
    }
    else
    {
      op->vtkCGNSFileSeriesReader::SetReader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_GetReader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCGNSReader *tempr = (ap.IsBound() ?
      op->GetReader() :
      op->vtkCGNSFileSeriesReader::GetReader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkCGNSFileSeriesReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_AddFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddFileName(temp0);
    }
    else
    {
      op->vtkCGNSFileSeriesReader::AddFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_RemoveAllFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllFileNames();
    }
    else
    {
      op->vtkCGNSFileSeriesReader::RemoveAllFileNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_GetIgnoreReaderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreReaderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIgnoreReaderTime() :
      op->vtkCGNSFileSeriesReader::GetIgnoreReaderTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_SetIgnoreReaderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnoreReaderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIgnoreReaderTime(temp0);
    }
    else
    {
      op->vtkCGNSFileSeriesReader::SetIgnoreReaderTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_IgnoreReaderTimeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreReaderTimeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnoreReaderTimeOn();
    }
    else
    {
      op->vtkCGNSFileSeriesReader::IgnoreReaderTimeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_IgnoreReaderTimeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreReaderTimeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnoreReaderTimeOff();
    }
    else
    {
      op->vtkCGNSFileSeriesReader::IgnoreReaderTimeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_GetCurrentFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCurrentFileName() :
      op->vtkCGNSFileSeriesReader::GetCurrentFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_GetSILUpdateStamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSILUpdateStamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSILUpdateStamp() :
      op->vtkCGNSFileSeriesReader::GetSILUpdateStamp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_SetBlockStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  const char *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockStatus(temp0, temp1);
    }
    else
    {
      op->vtkCGNSFileSeriesReader::SetBlockStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_ClearBlockStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearBlockStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearBlockStatus();
    }
    else
    {
      op->vtkCGNSFileSeriesReader::ClearBlockStatus();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCGNSFileSeriesReader_Methods[] = {
  {"IsTypeOf", PyvtkCGNSFileSeriesReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCGNSFileSeriesReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCGNSFileSeriesReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCGNSFileSeriesReader\nC++: static vtkCGNSFileSeriesReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCGNSFileSeriesReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCGNSFileSeriesReader\nC++: vtkCGNSFileSeriesReader *NewInstance()\n\n"},
  {"SetController", PyvtkCGNSFileSeriesReader_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *controller)\n\nGet/Set the controller.\n"},
  {"GetController", PyvtkCGNSFileSeriesReader_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nGet/Set the controller.\n"},
  {"SetReader", PyvtkCGNSFileSeriesReader_SetReader, METH_VARARGS,
   "V.SetReader(vtkCGNSReader)\nC++: virtual void SetReader(vtkCGNSReader *reader)\n\nGet/Set the reader.\n"},
  {"GetReader", PyvtkCGNSFileSeriesReader_GetReader, METH_VARARGS,
   "V.GetReader() -> vtkCGNSReader\nC++: virtual vtkCGNSReader *GetReader()\n\nGet/Set the reader.\n"},
  {"CanReadFile", PyvtkCGNSFileSeriesReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: int CanReadFile(const char *filename)\n\nTest a file for readability. Ensure that\nvtkCGNSFileSeriesReader::SetReader is called before using this\nmethod.\n"},
  {"AddFileName", PyvtkCGNSFileSeriesReader_AddFileName, METH_VARARGS,
   "V.AddFileName(string)\nC++: void AddFileName(const char *fname)\n\nAdd/remove files names in the file series.\n"},
  {"RemoveAllFileNames", PyvtkCGNSFileSeriesReader_RemoveAllFileNames, METH_VARARGS,
   "V.RemoveAllFileNames()\nC++: void RemoveAllFileNames()\n\nAdd/remove files names in the file series.\n"},
  {"GetIgnoreReaderTime", PyvtkCGNSFileSeriesReader_GetIgnoreReaderTime, METH_VARARGS,
   "V.GetIgnoreReaderTime() -> bool\nC++: virtual bool GetIgnoreReaderTime()\n\nIf true, then treat file series like it does not contain any time\nstep values. False by default.\n"},
  {"SetIgnoreReaderTime", PyvtkCGNSFileSeriesReader_SetIgnoreReaderTime, METH_VARARGS,
   "V.SetIgnoreReaderTime(bool)\nC++: virtual void SetIgnoreReaderTime(bool _arg)\n\nIf true, then treat file series like it does not contain any time\nstep values. False by default.\n"},
  {"IgnoreReaderTimeOn", PyvtkCGNSFileSeriesReader_IgnoreReaderTimeOn, METH_VARARGS,
   "V.IgnoreReaderTimeOn()\nC++: virtual void IgnoreReaderTimeOn()\n\nIf true, then treat file series like it does not contain any time\nstep values. False by default.\n"},
  {"IgnoreReaderTimeOff", PyvtkCGNSFileSeriesReader_IgnoreReaderTimeOff, METH_VARARGS,
   "V.IgnoreReaderTimeOff()\nC++: virtual void IgnoreReaderTimeOff()\n\nIf true, then treat file series like it does not contain any time\nstep values. False by default.\n"},
  {"GetCurrentFileName", PyvtkCGNSFileSeriesReader_GetCurrentFileName, METH_VARARGS,
   "V.GetCurrentFileName() -> string\nC++: const char *GetCurrentFileName()\n\nReturns the filename being used for current timesteps. This is\nonly reasonable for temporal file series. For a partitioned file\nseries, this will return the filename being used on the current\nrank.\n"},
  {"GetSILUpdateStamp", PyvtkCGNSFileSeriesReader_GetSILUpdateStamp, METH_VARARGS,
   "V.GetSILUpdateStamp() -> int\nC++: vtkIdType GetSILUpdateStamp()\n\nAPI for support SIL and SIL based selections.\n"},
  {"SetBlockStatus", PyvtkCGNSFileSeriesReader_SetBlockStatus, METH_VARARGS,
   "V.SetBlockStatus(string, bool)\nC++: void SetBlockStatus(const char *nodepath, bool enabled)\n\nAPI for support SIL and SIL based selections.\n"},
  {"ClearBlockStatus", PyvtkCGNSFileSeriesReader_ClearBlockStatus, METH_VARARGS,
   "V.ClearBlockStatus()\nC++: void ClearBlockStatus()\n\nAPI for support SIL and SIL based selections.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCGNSFileSeriesReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCGNSReaderPython.vtkCGNSFileSeriesReader", // tp_name
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
  PyvtkCGNSFileSeriesReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCGNSFileSeriesReader_StaticNew()
{
  return vtkCGNSFileSeriesReader::New();
}

PyObject *PyvtkCGNSFileSeriesReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCGNSFileSeriesReader_Type, PyvtkCGNSFileSeriesReader_Methods,
    "vtkCGNSFileSeriesReader",
 &PyvtkCGNSFileSeriesReader_StaticNew);

  PyTypeObject *pytype = &PyvtkCGNSFileSeriesReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiBlockDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCGNSFileSeriesReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCGNSFileSeriesReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCGNSFileSeriesReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

