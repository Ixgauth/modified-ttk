// python wrapper for vtkPSciVizDescriptiveStats
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
#include "vtkPSciVizDescriptiveStats.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPSciVizDescriptiveStats(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPSciVizDescriptiveStats_ClassNew(); }

#ifndef DECLARED_PyvtkSciVizStatistics_ClassNew
extern "C" { PyObject *PyvtkSciVizStatistics_ClassNew(); }
#define DECLARED_PyvtkSciVizStatistics_ClassNew
#endif

static const char *PyvtkPSciVizDescriptiveStats_Doc =
  "vtkPSciVizDescriptiveStats - Provide access to VTK descriptive\nstatistics.\n\n"
  "Superclass: vtkSciVizStatistics\n\n"
  "This filter provides access to the features of\n"
  "vtkDescriptiveStatistics. See VTK documentation for details\n\n"
  "@par Thanks: Thanks to David Thompson and Philippe Pebay from Sandia\n"
  "National Laboratories for implementing this class.\n\n";


static PyObject *
PyvtkPSciVizDescriptiveStats_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPSciVizDescriptiveStats::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizDescriptiveStats_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizDescriptiveStats *op = static_cast<vtkPSciVizDescriptiveStats *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPSciVizDescriptiveStats::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizDescriptiveStats_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPSciVizDescriptiveStats *tempr = vtkPSciVizDescriptiveStats::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizDescriptiveStats_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizDescriptiveStats *op = static_cast<vtkPSciVizDescriptiveStats *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPSciVizDescriptiveStats *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPSciVizDescriptiveStats::NewInstance());

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
PyvtkPSciVizDescriptiveStats_SetSignedDeviations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSignedDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizDescriptiveStats *op = static_cast<vtkPSciVizDescriptiveStats *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSignedDeviations(temp0);
    }
    else
    {
      op->vtkPSciVizDescriptiveStats::SetSignedDeviations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizDescriptiveStats_GetSignedDeviations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSignedDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizDescriptiveStats *op = static_cast<vtkPSciVizDescriptiveStats *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSignedDeviations() :
      op->vtkPSciVizDescriptiveStats::GetSignedDeviations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPSciVizDescriptiveStats_Methods[] = {
  {"IsTypeOf", PyvtkPSciVizDescriptiveStats_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPSciVizDescriptiveStats_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPSciVizDescriptiveStats_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPSciVizDescriptiveStats\nC++: static vtkPSciVizDescriptiveStats *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPSciVizDescriptiveStats_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPSciVizDescriptiveStats\nC++: vtkPSciVizDescriptiveStats *NewInstance()\n\n"},
  {"SetSignedDeviations", PyvtkPSciVizDescriptiveStats_SetSignedDeviations, METH_VARARGS,
   "V.SetSignedDeviations(int)\nC++: virtual void SetSignedDeviations(int _arg)\n\n"},
  {"GetSignedDeviations", PyvtkPSciVizDescriptiveStats_GetSignedDeviations, METH_VARARGS,
   "V.GetSignedDeviations() -> int\nC++: virtual int GetSignedDeviations()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPSciVizDescriptiveStats_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPSciVizDescriptiveStats", // tp_name
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
  PyvtkPSciVizDescriptiveStats_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPSciVizDescriptiveStats_StaticNew()
{
  return vtkPSciVizDescriptiveStats::New();
}

PyObject *PyvtkPSciVizDescriptiveStats_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPSciVizDescriptiveStats_Type, PyvtkPSciVizDescriptiveStats_Methods,
    "vtkPSciVizDescriptiveStats",
 &PyvtkPSciVizDescriptiveStats_StaticNew);

  PyTypeObject *pytype = &PyvtkPSciVizDescriptiveStats_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSciVizStatistics_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPSciVizDescriptiveStats(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPSciVizDescriptiveStats_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPSciVizDescriptiveStats", o) != 0)
  {
    Py_DECREF(o);
  }

}

