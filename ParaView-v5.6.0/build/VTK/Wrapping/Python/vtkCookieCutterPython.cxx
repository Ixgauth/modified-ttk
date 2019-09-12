// python wrapper for vtkCookieCutter
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
#include "vtkCookieCutter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCookieCutter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCookieCutter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkCookieCutter_Doc =
  "vtkCookieCutter - cut vtkPolyData defined on the 2D plane with one or\nmore polygons\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "This filter crops an input vtkPolyData consisting of cells (i.e.,\n"
  "points, lines, polygons, and triangle strips) with loops specified by\n"
  "a second input containing polygons. Note that this filter can handle\n"
  "concave polygons and/or loops. It may produce multiple output\n"
  "polygons for each polygon/loop interaction. Similarly, it may produce\n"
  "multiple line segments and so on.\n\n"
  "@warning\n"
  "The z-values of the input vtkPolyData and the points defining the\n"
  "loops are assumed to lie at z=constant. In other words, this filter\n"
  "assumes that the data lies in a plane orthogonal to the z axis.\n\n";


static PyObject *
PyvtkCookieCutter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCookieCutter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCookieCutter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCookieCutter *tempr = vtkCookieCutter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCookieCutter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCookieCutter::NewInstance());

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
PyvtkCookieCutter_SetLoopsConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoopsConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetLoopsConnection(temp0);
    }
    else
    {
      op->vtkCookieCutter::SetLoopsConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_GetLoopsConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoopsConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetLoopsConnection() :
      op->vtkCookieCutter::GetLoopsConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_SetLoopsData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoopsData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetLoopsData(temp0);
    }
    else
    {
      op->vtkCookieCutter::SetLoopsData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_GetLoops(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoops");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetLoops() :
      op->vtkCookieCutter::GetLoops());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCookieCutter_Methods[] = {
  {"IsTypeOf", PyvtkCookieCutter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods to instantiate, print and provide type\ninformation.\n"},
  {"IsA", PyvtkCookieCutter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods to instantiate, print and provide type\ninformation.\n"},
  {"SafeDownCast", PyvtkCookieCutter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCookieCutter\nC++: static vtkCookieCutter *SafeDownCast(vtkObjectBase *o)\n\nStandard methods to instantiate, print and provide type\ninformation.\n"},
  {"NewInstance", PyvtkCookieCutter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCookieCutter\nC++: vtkCookieCutter *NewInstance()\n\nStandard methods to instantiate, print and provide type\ninformation.\n"},
  {"SetLoopsConnection", PyvtkCookieCutter_SetLoopsConnection, METH_VARARGS,
   "V.SetLoopsConnection(vtkAlgorithmOutput)\nC++: void SetLoopsConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the a second vtkPolyData input which defines loops used\nto cut the input polygonal data. These loops must be manifold,\ni.e., do not self intersect. The loops are defined from the\npolygons defined in this second input.\n"},
  {"GetLoopsConnection", PyvtkCookieCutter_GetLoopsConnection, METH_VARARGS,
   "V.GetLoopsConnection() -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetLoopsConnection()\n\n"},
  {"SetLoopsData", PyvtkCookieCutter_SetLoopsData, METH_VARARGS,
   "V.SetLoopsData(vtkDataObject)\nC++: void SetLoopsData(vtkDataObject *loops)\n\nSpecify the a second vtkPolyData input which defines loops used\nto cut the input polygonal data. These loops must be manifold,\ni.e., do not self intersect. The loops are defined from the\npolygons defined in this second input.\n"},
  {"GetLoops", PyvtkCookieCutter_GetLoops, METH_VARARGS,
   "V.GetLoops() -> vtkDataObject\nC++: vtkDataObject *GetLoops()\n\nSpecify the a second vtkPolyData input which defines loops used\nto cut the input polygonal data. These loops must be manifold,\ni.e., do not self intersect. The loops are defined from the\npolygons defined in this second input.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCookieCutter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersModelingPython.vtkCookieCutter", // tp_name
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
  PyvtkCookieCutter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCookieCutter_StaticNew()
{
  return vtkCookieCutter::New();
}

PyObject *PyvtkCookieCutter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCookieCutter_Type, PyvtkCookieCutter_Methods,
    "vtkCookieCutter",
 &PyvtkCookieCutter_StaticNew);

  PyTypeObject *pytype = &PyvtkCookieCutter_Type;

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

void PyVTKAddFile_vtkCookieCutter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCookieCutter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCookieCutter", o) != 0)
  {
    Py_DECREF(o);
  }

}

