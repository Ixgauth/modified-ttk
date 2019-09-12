// python wrapper for vtkOBBDicer
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
#include "vtkOBBDicer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOBBDicer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOBBDicer_ClassNew(); }

#ifndef DECLARED_PyvtkDicer_ClassNew
extern "C" { PyObject *PyvtkDicer_ClassNew(); }
#define DECLARED_PyvtkDicer_ClassNew
#endif

static const char *PyvtkOBBDicer_Doc =
  "vtkOBBDicer - divide dataset into spatially aggregated pieces\n\n"
  "Superclass: vtkDicer\n\n"
  "vtkOBBDicer separates the cells of a dataset into spatially\n"
  "aggregated pieces using a Oriented Bounding Box (OBB). These pieces\n"
  "can then be operated on by other filters (e.g., vtkThreshold). One\n"
  "application is to break very large polygonal models into pieces and\n"
  "performing viewing and occlusion culling on the pieces.\n\n"
  "Refer to the superclass documentation (vtkDicer) for more\n"
  "information.\n\n"
  "@sa\n"
  "vtkDicer vtkConnectedDicer\n\n";


static PyObject *
PyvtkOBBDicer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOBBDicer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOBBDicer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBBDicer *op = static_cast<vtkOBBDicer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOBBDicer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOBBDicer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOBBDicer *tempr = vtkOBBDicer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOBBDicer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBBDicer *op = static_cast<vtkOBBDicer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOBBDicer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOBBDicer::NewInstance());

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

static PyMethodDef PyvtkOBBDicer_Methods[] = {
  {"IsTypeOf", PyvtkOBBDicer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOBBDicer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOBBDicer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOBBDicer\nC++: static vtkOBBDicer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOBBDicer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOBBDicer\nC++: vtkOBBDicer *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOBBDicer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkOBBDicer", // tp_name
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
  PyvtkOBBDicer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOBBDicer_StaticNew()
{
  return vtkOBBDicer::New();
}

PyObject *PyvtkOBBDicer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOBBDicer_Type, PyvtkOBBDicer_Methods,
    "vtkOBBDicer",
 &PyvtkOBBDicer_StaticNew);

  PyTypeObject *pytype = &PyvtkOBBDicer_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDicer_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOBBDicer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOBBDicer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOBBDicer", o) != 0)
  {
    Py_DECREF(o);
  }

}

