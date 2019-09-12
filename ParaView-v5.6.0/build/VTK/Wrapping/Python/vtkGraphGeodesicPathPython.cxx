// python wrapper for vtkGraphGeodesicPath
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
#include "vtkGraphGeodesicPath.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGraphGeodesicPath(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGraphGeodesicPath_ClassNew(); }

#ifndef DECLARED_PyvtkGeodesicPath_ClassNew
extern "C" { PyObject *PyvtkGeodesicPath_ClassNew(); }
#define DECLARED_PyvtkGeodesicPath_ClassNew
#endif

static const char *PyvtkGraphGeodesicPath_Doc =
  "vtkGraphGeodesicPath - Abstract base for classes that generate a\ngeodesic path on a graph (mesh).\n\n"
  "Superclass: vtkGeodesicPath\n\n"
  "Serves as a base class for algorithms that trace a geodesic on a\n"
  "polygonal dataset treating it as a graph. ie points connecting the\n"
  "vertices of the graph\n\n";


static PyObject *
PyvtkGraphGeodesicPath_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGraphGeodesicPath::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphGeodesicPath_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphGeodesicPath *op = static_cast<vtkGraphGeodesicPath *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphGeodesicPath::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphGeodesicPath_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGraphGeodesicPath *tempr = vtkGraphGeodesicPath::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphGeodesicPath_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphGeodesicPath *op = static_cast<vtkGraphGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraphGeodesicPath *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphGeodesicPath::NewInstance());

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
PyvtkGraphGeodesicPath_GetStartVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphGeodesicPath *op = static_cast<vtkGraphGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetStartVertex() :
      op->vtkGraphGeodesicPath::GetStartVertex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphGeodesicPath_SetStartVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphGeodesicPath *op = static_cast<vtkGraphGeodesicPath *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartVertex(temp0);
    }
    else
    {
      op->vtkGraphGeodesicPath::SetStartVertex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphGeodesicPath_GetEndVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphGeodesicPath *op = static_cast<vtkGraphGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetEndVertex() :
      op->vtkGraphGeodesicPath::GetEndVertex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphGeodesicPath_SetEndVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphGeodesicPath *op = static_cast<vtkGraphGeodesicPath *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEndVertex(temp0);
    }
    else
    {
      op->vtkGraphGeodesicPath::SetEndVertex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGraphGeodesicPath_Methods[] = {
  {"IsTypeOf", PyvtkGraphGeodesicPath_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for printing and determining type information.\n"},
  {"IsA", PyvtkGraphGeodesicPath_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for printing and determining type information.\n"},
  {"SafeDownCast", PyvtkGraphGeodesicPath_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGraphGeodesicPath\nC++: static vtkGraphGeodesicPath *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for printing and determining type information.\n"},
  {"NewInstance", PyvtkGraphGeodesicPath_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGraphGeodesicPath\nC++: vtkGraphGeodesicPath *NewInstance()\n\nStandard methods for printing and determining type information.\n"},
  {"GetStartVertex", PyvtkGraphGeodesicPath_GetStartVertex, METH_VARARGS,
   "V.GetStartVertex() -> int\nC++: virtual vtkIdType GetStartVertex()\n\nThe vertex at the start of the shortest path\n"},
  {"SetStartVertex", PyvtkGraphGeodesicPath_SetStartVertex, METH_VARARGS,
   "V.SetStartVertex(int)\nC++: virtual void SetStartVertex(vtkIdType _arg)\n\nThe vertex at the start of the shortest path\n"},
  {"GetEndVertex", PyvtkGraphGeodesicPath_GetEndVertex, METH_VARARGS,
   "V.GetEndVertex() -> int\nC++: virtual vtkIdType GetEndVertex()\n\nThe vertex at the end of the shortest path\n"},
  {"SetEndVertex", PyvtkGraphGeodesicPath_SetEndVertex, METH_VARARGS,
   "V.SetEndVertex(int)\nC++: virtual void SetEndVertex(vtkIdType _arg)\n\nThe vertex at the end of the shortest path\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGraphGeodesicPath_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersModelingPython.vtkGraphGeodesicPath", // tp_name
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
  PyvtkGraphGeodesicPath_Doc, // tp_doc
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

PyObject *PyvtkGraphGeodesicPath_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGraphGeodesicPath_Type, PyvtkGraphGeodesicPath_Methods,
    "vtkGraphGeodesicPath",
 nullptr);

  PyTypeObject *pytype = &PyvtkGraphGeodesicPath_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGeodesicPath_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGraphGeodesicPath(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGraphGeodesicPath_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGraphGeodesicPath", o) != 0)
  {
    Py_DECREF(o);
  }

}

