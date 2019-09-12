// python wrapper for vtkPExtractTemporalFieldData
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
#include "vtkPExtractTemporalFieldData.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPExtractTemporalFieldData(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPExtractTemporalFieldData_ClassNew(); }

#ifndef DECLARED_PyvtkExtractTemporalFieldData_ClassNew
extern "C" { PyObject *PyvtkExtractTemporalFieldData_ClassNew(); }
#define DECLARED_PyvtkExtractTemporalFieldData_ClassNew
#endif

static const char *PyvtkPExtractTemporalFieldData_Doc =
  "vtkPExtractTemporalFieldData - parallel version of\nvtkExtractTemporalFieldData.\n\n"
  "Superclass: vtkExtractTemporalFieldData\n\n"
  "vtkPExtractTemporalFieldData adds logic to reduce the output from\n"
  "vtkExtractTemporalFieldData so it can plotted correctly in ParaView.\n"
  "We simply pass data on the root node since that is sufficient for the\n"
  "use-cases we have encountered. If needed, we can reduce to root node\n"
  "to only get the one of the non-empty leaf nodes for all ranks.\n\n";


static PyObject *
PyvtkPExtractTemporalFieldData_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPExtractTemporalFieldData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExtractTemporalFieldData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractTemporalFieldData *op = static_cast<vtkPExtractTemporalFieldData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPExtractTemporalFieldData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExtractTemporalFieldData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPExtractTemporalFieldData *tempr = vtkPExtractTemporalFieldData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExtractTemporalFieldData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractTemporalFieldData *op = static_cast<vtkPExtractTemporalFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPExtractTemporalFieldData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPExtractTemporalFieldData::NewInstance());

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
PyvtkPExtractTemporalFieldData_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractTemporalFieldData *op = static_cast<vtkPExtractTemporalFieldData *>(vp);

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
      op->vtkPExtractTemporalFieldData::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPExtractTemporalFieldData_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractTemporalFieldData *op = static_cast<vtkPExtractTemporalFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPExtractTemporalFieldData::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPExtractTemporalFieldData_Methods[] = {
  {"IsTypeOf", PyvtkPExtractTemporalFieldData_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPExtractTemporalFieldData_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPExtractTemporalFieldData_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPExtractTemporalFieldData\nC++: static vtkPExtractTemporalFieldData *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPExtractTemporalFieldData_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPExtractTemporalFieldData\nC++: vtkPExtractTemporalFieldData *NewInstance()\n\n"},
  {"SetController", PyvtkPExtractTemporalFieldData_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed. By default set to\nvtkMultiProcessController::GlobalController in the constructor.\n"},
  {"GetController", PyvtkPExtractTemporalFieldData_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed. By default set to\nvtkMultiProcessController::GlobalController in the constructor.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPExtractTemporalFieldData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPExtractTemporalFieldData", // tp_name
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
  PyvtkPExtractTemporalFieldData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPExtractTemporalFieldData_StaticNew()
{
  return vtkPExtractTemporalFieldData::New();
}

PyObject *PyvtkPExtractTemporalFieldData_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPExtractTemporalFieldData_Type, PyvtkPExtractTemporalFieldData_Methods,
    "vtkPExtractTemporalFieldData",
 &PyvtkPExtractTemporalFieldData_StaticNew);

  PyTypeObject *pytype = &PyvtkPExtractTemporalFieldData_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkExtractTemporalFieldData_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPExtractTemporalFieldData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPExtractTemporalFieldData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPExtractTemporalFieldData", o) != 0)
  {
    Py_DECREF(o);
  }

}

