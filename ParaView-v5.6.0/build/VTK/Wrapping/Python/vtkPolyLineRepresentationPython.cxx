// python wrapper for vtkPolyLineRepresentation
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
#include "vtkPolyLineRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolyLineRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPolyLineRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkCurveRepresentation_ClassNew
extern "C" { PyObject *PyvtkCurveRepresentation_ClassNew(); }
#define DECLARED_PyvtkCurveRepresentation_ClassNew
#endif

static const char *PyvtkPolyLineRepresentation_Doc =
  "vtkPolyLineRepresentation - vtkWidgetRepresentation for a poly line.\n\n"
  "Superclass: vtkCurveRepresentation\n\n"
  "vtkPolyLineRepresentation is a vtkCurveRepresentation for a poly\n"
  "line. This 3D widget defines a poly line that can be interactively\n"
  "placed in a scene. The poly line has handles, the number of which can\n"
  "be changed, plus the widget can be picked on the poly line itself to\n"
  "translate or rotate it in the scene. Based on vtkCurveRepresentation\n"
  "@sa\n"
  "vtkSplineRepresentation\n\n";


static PyObject *
PyvtkPolyLineRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolyLineRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLineRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLineRepresentation *op = static_cast<vtkPolyLineRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyLineRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLineRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolyLineRepresentation *tempr = vtkPolyLineRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLineRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLineRepresentation *op = static_cast<vtkPolyLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyLineRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyLineRepresentation::NewInstance());

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
PyvtkPolyLineRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLineRepresentation *op = static_cast<vtkPolyLineRepresentation *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->GetPolyData(temp0);
    }
    else
    {
      op->vtkPolyLineRepresentation::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLineRepresentation_SetNumberOfHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLineRepresentation *op = static_cast<vtkPolyLineRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfHandles(temp0);
    }
    else
    {
      op->vtkPolyLineRepresentation::SetNumberOfHandles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLineRepresentation_GetHandlePositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLineRepresentation *op = static_cast<vtkPolyLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetHandlePositions() :
      op->vtkPolyLineRepresentation::GetHandlePositions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLineRepresentation_GetSummedLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSummedLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLineRepresentation *op = static_cast<vtkPolyLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSummedLength() :
      op->vtkPolyLineRepresentation::GetSummedLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLineRepresentation_InitializeHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLineRepresentation *op = static_cast<vtkPolyLineRepresentation *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->InitializeHandles(temp0);
    }
    else
    {
      op->vtkPolyLineRepresentation::InitializeHandles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLineRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLineRepresentation *op = static_cast<vtkPolyLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkPolyLineRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyLineRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkPolyLineRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkPolyLineRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkPolyLineRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPolyLineRepresentation\nC++: static vtkPolyLineRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkPolyLineRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPolyLineRepresentation\nC++: vtkPolyLineRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"GetPolyData", PyvtkPolyLineRepresentation_GetPolyData, METH_VARARGS,
   "V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd) override;\n\nGrab the polydata (including points) that defines the poly line.\npolydata consists of points and line segments between consecutive\npoints. Points are guaranteed to be up-to-date when either the\nInteractionEvent or EndInteraction events are invoked. The user\nprovides the vtkPolyData and the points and polyline are added to\nit.\n"},
  {"SetNumberOfHandles", PyvtkPolyLineRepresentation_SetNumberOfHandles, METH_VARARGS,
   "V.SetNumberOfHandles(int)\nC++: void SetNumberOfHandles(int npts) override;\n\nSet the number of handles for this widget.\n"},
  {"GetHandlePositions", PyvtkPolyLineRepresentation_GetHandlePositions, METH_VARARGS,
   "V.GetHandlePositions() -> vtkDoubleArray\nC++: vtkDoubleArray *GetHandlePositions() override;\n\nGet the positions of the handles.\n"},
  {"GetSummedLength", PyvtkPolyLineRepresentation_GetSummedLength, METH_VARARGS,
   "V.GetSummedLength() -> float\nC++: double GetSummedLength() override;\n\nGet the true length of the poly line. Calculated as the summed\nlengths of the individual straight line segments.\n"},
  {"InitializeHandles", PyvtkPolyLineRepresentation_InitializeHandles, METH_VARARGS,
   "V.InitializeHandles(vtkPoints)\nC++: void InitializeHandles(vtkPoints *points) override;\n\nConvenience method to allocate and set the handles from a\nvtkPoints instance.  If the first and last points are the same,\nthe poly line sets Closed to on and disregards the last point,\notherwise Closed remains unchanged.\n"},
  {"BuildRepresentation", PyvtkPolyLineRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nBuild the representation for the poly line.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPolyLineRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkPolyLineRepresentation", // tp_name
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
  PyvtkPolyLineRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolyLineRepresentation_StaticNew()
{
  return vtkPolyLineRepresentation::New();
}

PyObject *PyvtkPolyLineRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPolyLineRepresentation_Type, PyvtkPolyLineRepresentation_Methods,
    "vtkPolyLineRepresentation",
 &PyvtkPolyLineRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkPolyLineRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCurveRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolyLineRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyLineRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyLineRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

