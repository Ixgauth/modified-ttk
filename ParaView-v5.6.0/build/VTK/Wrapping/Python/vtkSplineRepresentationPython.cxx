// python wrapper for vtkSplineRepresentation
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
#include "vtkSplineRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSplineRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSplineRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkCurveRepresentation_ClassNew
extern "C" { PyObject *PyvtkCurveRepresentation_ClassNew(); }
#define DECLARED_PyvtkCurveRepresentation_ClassNew
#endif

static const char *PyvtkSplineRepresentation_Doc =
  "vtkSplineRepresentation - representation for a spline.\n\n"
  "Superclass: vtkCurveRepresentation\n\n"
  "vtkSplineRepresentation is a vtkWidgetRepresentation for a spline.\n"
  "This 3D widget defines a spline that can be interactively placed in a\n"
  "scene. The spline has handles, the number of which can be changed,\n"
  "plus it can be picked on the spline itself to translate or rotate it\n"
  "in the scene. This is based on vtkSplineWidget.\n"
  "@sa\n"
  "vtkSplineWidget, vtkSplineWidget2\n\n";


static PyObject *
PyvtkSplineRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSplineRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSplineRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSplineRepresentation *tempr = vtkSplineRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSplineRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSplineRepresentation::NewInstance());

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
PyvtkSplineRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

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
      op->vtkSplineRepresentation::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetNumberOfHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

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
      op->vtkSplineRepresentation::SetNumberOfHandles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkSplineRepresentation::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkSplineRepresentation::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetParametricSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParametricSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  vtkParametricSpline *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkParametricSpline"))
  {
    if (ap.IsBound())
    {
      op->SetParametricSpline(temp0);
    }
    else
    {
      op->vtkSplineRepresentation::SetParametricSpline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetParametricSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParametricSpline *tempr = (ap.IsBound() ?
      op->GetParametricSpline() :
      op->vtkSplineRepresentation::GetParametricSpline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetHandlePositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetHandlePositions() :
      op->vtkSplineRepresentation::GetHandlePositions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetSummedLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSummedLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSummedLength() :
      op->vtkSplineRepresentation::GetSummedLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_InitializeHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

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
      op->vtkSplineRepresentation::InitializeHandles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkSplineRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSplineRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkSplineRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkSplineRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkSplineRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSplineRepresentation\nC++: static vtkSplineRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkSplineRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSplineRepresentation\nC++: vtkSplineRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"GetPolyData", PyvtkSplineRepresentation_GetPolyData, METH_VARARGS,
   "V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd) override;\n\nGrab the polydata (including points) that defines the spline. \nThe polydata consists of points and line segments numbering\nResolution + 1 and Resolution, respectively. Points are\nguaranteed to be up-to-date when either the InteractionEvent or\nEndInteraction events are invoked. The user provides the\nvtkPolyData and the points and polyline are added to it.\n"},
  {"SetNumberOfHandles", PyvtkSplineRepresentation_SetNumberOfHandles, METH_VARARGS,
   "V.SetNumberOfHandles(int)\nC++: void SetNumberOfHandles(int npts) override;\n\nSet the number of handles for this widget.\n"},
  {"SetResolution", PyvtkSplineRepresentation_SetResolution, METH_VARARGS,
   "V.SetResolution(int)\nC++: void SetResolution(int resolution)\n\nSet/Get the number of line segments representing the spline for\nthis widget.\n"},
  {"GetResolution", PyvtkSplineRepresentation_GetResolution, METH_VARARGS,
   "V.GetResolution() -> int\nC++: virtual int GetResolution()\n\nSet/Get the number of line segments representing the spline for\nthis widget.\n"},
  {"SetParametricSpline", PyvtkSplineRepresentation_SetParametricSpline, METH_VARARGS,
   "V.SetParametricSpline(vtkParametricSpline)\nC++: virtual void SetParametricSpline(vtkParametricSpline *)\n\nSet the parametric spline object. Through vtkParametricSpline's\nAPI, the user can supply and configure one of two types of\nspline: vtkCardinalSpline, vtkKochanekSpline. The widget controls\nthe open or closed configuration of the spline. WARNING: The\nwidget does not enforce internal consistency so that all three\nare of the same type.\n"},
  {"GetParametricSpline", PyvtkSplineRepresentation_GetParametricSpline, METH_VARARGS,
   "V.GetParametricSpline() -> vtkParametricSpline\nC++: virtual vtkParametricSpline *GetParametricSpline()\n\nSet the parametric spline object. Through vtkParametricSpline's\nAPI, the user can supply and configure one of two types of\nspline: vtkCardinalSpline, vtkKochanekSpline. The widget controls\nthe open or closed configuration of the spline. WARNING: The\nwidget does not enforce internal consistency so that all three\nare of the same type.\n"},
  {"GetHandlePositions", PyvtkSplineRepresentation_GetHandlePositions, METH_VARARGS,
   "V.GetHandlePositions() -> vtkDoubleArray\nC++: vtkDoubleArray *GetHandlePositions() override;\n\nGet the position of the spline handles.\n"},
  {"GetSummedLength", PyvtkSplineRepresentation_GetSummedLength, METH_VARARGS,
   "V.GetSummedLength() -> float\nC++: double GetSummedLength() override;\n\nGet the approximate vs. the true arc length of the spline.\nCalculated as the summed lengths of the individual straight line\nsegments. Use SetResolution to control the accuracy.\n"},
  {"InitializeHandles", PyvtkSplineRepresentation_InitializeHandles, METH_VARARGS,
   "V.InitializeHandles(vtkPoints)\nC++: void InitializeHandles(vtkPoints *points) override;\n\nConvenience method to allocate and set the handles from a\nvtkPoints instance.  If the first and last points are the same,\nthe spline sets Closed to the on InteractionState and disregards\nthe last point, otherwise Closed remains unchanged.\n"},
  {"BuildRepresentation", PyvtkSplineRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSplineRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkSplineRepresentation", // tp_name
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
  PyvtkSplineRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSplineRepresentation_StaticNew()
{
  return vtkSplineRepresentation::New();
}

PyObject *PyvtkSplineRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSplineRepresentation_Type, PyvtkSplineRepresentation_Methods,
    "vtkSplineRepresentation",
 &PyvtkSplineRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkSplineRepresentation_Type;

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

void PyVTKAddFile_vtkSplineRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSplineRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSplineRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

