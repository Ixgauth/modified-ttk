// python wrapper for vtkNonOverlappingAMRAlgorithm
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
#include "vtkNonOverlappingAMRAlgorithm.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkNonOverlappingAMRAlgorithm(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkNonOverlappingAMRAlgorithm_ClassNew(); }

#ifndef DECLARED_PyvtkUniformGridAMRAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUniformGridAMRAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUniformGridAMRAlgorithm_ClassNew
#endif

static const char *PyvtkNonOverlappingAMRAlgorithm_Doc =
  "vtkNonOverlappingAMRAlgorithm -  produce vtkNonOverlappingAMR as\noutput.\n\n"
  "Superclass: vtkUniformGridAMRAlgorithm\n\n"
;


static PyObject *
PyvtkNonOverlappingAMRAlgorithm_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkNonOverlappingAMRAlgorithm::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNonOverlappingAMRAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonOverlappingAMRAlgorithm *op = static_cast<vtkNonOverlappingAMRAlgorithm *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNonOverlappingAMRAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNonOverlappingAMRAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkNonOverlappingAMRAlgorithm *tempr = vtkNonOverlappingAMRAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNonOverlappingAMRAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonOverlappingAMRAlgorithm *op = static_cast<vtkNonOverlappingAMRAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNonOverlappingAMRAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNonOverlappingAMRAlgorithm::NewInstance());

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
PyvtkNonOverlappingAMRAlgorithm_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonOverlappingAMRAlgorithm *op = static_cast<vtkNonOverlappingAMRAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNonOverlappingAMR *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkNonOverlappingAMRAlgorithm::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkNonOverlappingAMRAlgorithm_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonOverlappingAMRAlgorithm *op = static_cast<vtkNonOverlappingAMRAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkNonOverlappingAMR *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkNonOverlappingAMRAlgorithm::GetOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkNonOverlappingAMRAlgorithm_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkNonOverlappingAMRAlgorithm_GetOutput_s1(self, args);
    case 1:
      return PyvtkNonOverlappingAMRAlgorithm_GetOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return nullptr;
}


static PyMethodDef PyvtkNonOverlappingAMRAlgorithm_Methods[] = {
  {"IsTypeOf", PyvtkNonOverlappingAMRAlgorithm_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkNonOverlappingAMRAlgorithm_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkNonOverlappingAMRAlgorithm_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkNonOverlappingAMRAlgorithm\nC++: static vtkNonOverlappingAMRAlgorithm *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkNonOverlappingAMRAlgorithm_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkNonOverlappingAMRAlgorithm\nC++: vtkNonOverlappingAMRAlgorithm *NewInstance()\n\n"},
  {"GetOutput", PyvtkNonOverlappingAMRAlgorithm_GetOutput, METH_VARARGS,
   "V.GetOutput() -> vtkNonOverlappingAMR\nC++: vtkNonOverlappingAMR *GetOutput()\nV.GetOutput(int) -> vtkNonOverlappingAMR\nC++: vtkNonOverlappingAMR *GetOutput(int)\n\nGet the output data object for a port on this algorithm\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkNonOverlappingAMRAlgorithm_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonExecutionModelPython.vtkNonOverlappingAMRAlgorithm", // tp_name
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
  PyvtkNonOverlappingAMRAlgorithm_Doc, // tp_doc
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

static vtkObjectBase *PyvtkNonOverlappingAMRAlgorithm_StaticNew()
{
  return vtkNonOverlappingAMRAlgorithm::New();
}

PyObject *PyvtkNonOverlappingAMRAlgorithm_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkNonOverlappingAMRAlgorithm_Type, PyvtkNonOverlappingAMRAlgorithm_Methods,
    "vtkNonOverlappingAMRAlgorithm",
 &PyvtkNonOverlappingAMRAlgorithm_StaticNew);

  PyTypeObject *pytype = &PyvtkNonOverlappingAMRAlgorithm_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUniformGridAMRAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkNonOverlappingAMRAlgorithm(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkNonOverlappingAMRAlgorithm_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkNonOverlappingAMRAlgorithm", o) != 0)
  {
    Py_DECREF(o);
  }

}

