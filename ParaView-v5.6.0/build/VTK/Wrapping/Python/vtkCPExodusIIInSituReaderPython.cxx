// python wrapper for vtkCPExodusIIInSituReader
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
#include "vtkCPExodusIIInSituReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCPExodusIIInSituReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCPExodusIIInSituReader_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkCPExodusIIInSituReader_Doc =
  "vtkCPExodusIIInSituReader - Read an Exodus II file into data\nstructures that map the raw arrays returned by the Exodus II library\ninto a multi-block data set containing vtkUnstructuredGridBase\nsubclasses.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "This class can be used to import Exodus II files into VTK without\n"
  "repacking the data into the standard VTK memory layout, avoiding the\n"
  "cost of a deep copy.\n\n";


static PyObject *
PyvtkCPExodusIIInSituReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCPExodusIIInSituReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCPExodusIIInSituReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCPExodusIIInSituReader *tempr = vtkCPExodusIIInSituReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCPExodusIIInSituReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCPExodusIIInSituReader::NewInstance());

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
PyvtkCPExodusIIInSituReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

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
      op->vtkCPExodusIIInSituReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkCPExodusIIInSituReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_GetCurrentTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurrentTimeStep() :
      op->vtkCPExodusIIInSituReader::GetCurrentTimeStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_SetCurrentTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentTimeStep(temp0);
    }
    else
    {
      op->vtkCPExodusIIInSituReader::SetCurrentTimeStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTimeStepRange() :
      op->vtkCPExodusIIInSituReader::GetTimeStepRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_GetTimeStepValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTimeStepValue(temp0) :
      op->vtkCPExodusIIInSituReader::GetTimeStepValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCPExodusIIInSituReader_Methods[] = {
  {"IsTypeOf", PyvtkCPExodusIIInSituReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCPExodusIIInSituReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCPExodusIIInSituReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCPExodusIIInSituReader\nC++: static vtkCPExodusIIInSituReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCPExodusIIInSituReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCPExodusIIInSituReader\nC++: vtkCPExodusIIInSituReader *NewInstance()\n\n"},
  {"SetFileName", PyvtkCPExodusIIInSituReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nGet/Set the name of the Exodus file to read.\n"},
  {"GetFileName", PyvtkCPExodusIIInSituReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nGet/Set the name of the Exodus file to read.\n"},
  {"GetCurrentTimeStep", PyvtkCPExodusIIInSituReader_GetCurrentTimeStep, METH_VARARGS,
   "V.GetCurrentTimeStep() -> int\nC++: virtual int GetCurrentTimeStep()\n\nGet/Set the current timestep to read as a zero-based index.\n"},
  {"SetCurrentTimeStep", PyvtkCPExodusIIInSituReader_SetCurrentTimeStep, METH_VARARGS,
   "V.SetCurrentTimeStep(int)\nC++: virtual void SetCurrentTimeStep(int _arg)\n\nGet/Set the current timestep to read as a zero-based index.\n"},
  {"GetTimeStepRange", PyvtkCPExodusIIInSituReader_GetTimeStepRange, METH_VARARGS,
   "V.GetTimeStepRange() -> (int, int)\nC++: int *GetTimeStepRange()\n\n"},
  {"GetTimeStepValue", PyvtkCPExodusIIInSituReader_GetTimeStepValue, METH_VARARGS,
   "V.GetTimeStepValue(int) -> float\nC++: double GetTimeStepValue(int step)\n\nGet the floating point tag associated with the timestep at\n'step'.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCPExodusIIInSituReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOExodusPython.vtkCPExodusIIInSituReader", // tp_name
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
  PyvtkCPExodusIIInSituReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCPExodusIIInSituReader_StaticNew()
{
  return vtkCPExodusIIInSituReader::New();
}

PyObject *PyvtkCPExodusIIInSituReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCPExodusIIInSituReader_Type, PyvtkCPExodusIIInSituReader_Methods,
    "vtkCPExodusIIInSituReader",
 &PyvtkCPExodusIIInSituReader_StaticNew);

  PyTypeObject *pytype = &PyvtkCPExodusIIInSituReader_Type;

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

void PyVTKAddFile_vtkCPExodusIIInSituReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCPExodusIIInSituReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCPExodusIIInSituReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

