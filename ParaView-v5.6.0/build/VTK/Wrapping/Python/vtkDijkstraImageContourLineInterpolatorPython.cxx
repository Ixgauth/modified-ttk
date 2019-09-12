// python wrapper for vtkDijkstraImageContourLineInterpolator
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
#include "vtkDijkstraImageContourLineInterpolator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDijkstraImageContourLineInterpolator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDijkstraImageContourLineInterpolator_ClassNew(); }

#ifndef DECLARED_PyvtkContourLineInterpolator_ClassNew
extern "C" { PyObject *PyvtkContourLineInterpolator_ClassNew(); }
#define DECLARED_PyvtkContourLineInterpolator_ClassNew
#endif

static const char *PyvtkDijkstraImageContourLineInterpolator_Doc =
  "vtkDijkstraImageContourLineInterpolator - Contour interpolator for\nplacing points on an image.\n\n"
  "Superclass: vtkContourLineInterpolator\n\n"
  "vtkDijkstraImageContourLineInterpolator interpolates and places\n"
  "contour points on images. The class interpolates nodes by computing a\n"
  "graph laying on the image data. By graph, we mean that the line\n"
  "interpolating the two end points traverses along pixels so as to form\n"
  "a shortest path. A Dijkstra algorithm is used to compute the path.\n\n"
  "The class is meant to be used in conjunction with\n"
  "vtkImageActorPointPlacer. One reason for this coupling is a\n"
  "performance issue: both classes need to perform a cell pick, and\n"
  "coupling avoids multiple cell picks (cell picks are slow).  Another\n"
  "issue is that the interpolator may need to set the image input to its\n"
  "vtkDijkstraImageGeodesicPath ivar.\n\n"
  "@sa\n"
  "vtkContourWidget vtkContourLineInterpolator\n"
  "vtkDijkstraImageGeodesicPath\n\n";


static PyObject *
PyvtkDijkstraImageContourLineInterpolator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDijkstraImageContourLineInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageContourLineInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageContourLineInterpolator *op = static_cast<vtkDijkstraImageContourLineInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDijkstraImageContourLineInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageContourLineInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDijkstraImageContourLineInterpolator *tempr = vtkDijkstraImageContourLineInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageContourLineInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageContourLineInterpolator *op = static_cast<vtkDijkstraImageContourLineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDijkstraImageContourLineInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDijkstraImageContourLineInterpolator::NewInstance());

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
PyvtkDijkstraImageContourLineInterpolator_InterpolateLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageContourLineInterpolator *op = static_cast<vtkDijkstraImageContourLineInterpolator *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkContourRepresentation *temp1 = nullptr;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkContourRepresentation") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->InterpolateLine(temp0, temp1, temp2, temp3) :
      op->vtkDijkstraImageContourLineInterpolator::InterpolateLine(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageContourLineInterpolator_SetCostImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCostImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageContourLineInterpolator *op = static_cast<vtkDijkstraImageContourLineInterpolator *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetCostImage(temp0);
    }
    else
    {
      op->vtkDijkstraImageContourLineInterpolator::SetCostImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageContourLineInterpolator_GetCostImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCostImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageContourLineInterpolator *op = static_cast<vtkDijkstraImageContourLineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetCostImage() :
      op->vtkDijkstraImageContourLineInterpolator::GetCostImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageContourLineInterpolator_GetDijkstraImageGeodesicPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDijkstraImageGeodesicPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageContourLineInterpolator *op = static_cast<vtkDijkstraImageContourLineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDijkstraImageGeodesicPath *tempr = (ap.IsBound() ?
      op->GetDijkstraImageGeodesicPath() :
      op->vtkDijkstraImageContourLineInterpolator::GetDijkstraImageGeodesicPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDijkstraImageContourLineInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkDijkstraImageContourLineInterpolator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkDijkstraImageContourLineInterpolator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkDijkstraImageContourLineInterpolator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkDijkstraImageContourLineInterpolator\nC++: static vtkDijkstraImageContourLineInterpolator *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkDijkstraImageContourLineInterpolator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDijkstraImageContourLineInterpolator\nC++: vtkDijkstraImageContourLineInterpolator *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"InterpolateLine", PyvtkDijkstraImageContourLineInterpolator_InterpolateLine, METH_VARARGS,
   "V.InterpolateLine(vtkRenderer, vtkContourRepresentation, int, int)\n     -> int\nC++: int InterpolateLine(vtkRenderer *ren,\n    vtkContourRepresentation *rep, int idx1, int idx2) override;\n\nSubclasses that wish to interpolate a line segment must implement\nthis. For instance vtkBezierContourLineInterpolator adds nodes\nbetween idx1 and idx2, that allow the contour to adhere to a\nbezier curve.\n"},
  {"SetCostImage", PyvtkDijkstraImageContourLineInterpolator_SetCostImage, METH_VARARGS,
   "V.SetCostImage(vtkImageData)\nC++: virtual void SetCostImage(vtkImageData *)\n\nSet the image data for the vtkDijkstraImageGeodesicPath. If not\nset, the interpolator uses the image data input to the image\nactor. The image actor is obtained from the expected\nvtkImageActorPointPlacer.\n"},
  {"GetCostImage", PyvtkDijkstraImageContourLineInterpolator_GetCostImage, METH_VARARGS,
   "V.GetCostImage() -> vtkImageData\nC++: virtual vtkImageData *GetCostImage()\n\nSet the image data for the vtkDijkstraImageGeodesicPath. If not\nset, the interpolator uses the image data input to the image\nactor. The image actor is obtained from the expected\nvtkImageActorPointPlacer.\n"},
  {"GetDijkstraImageGeodesicPath", PyvtkDijkstraImageContourLineInterpolator_GetDijkstraImageGeodesicPath, METH_VARARGS,
   "V.GetDijkstraImageGeodesicPath() -> vtkDijkstraImageGeodesicPath\nC++: virtual vtkDijkstraImageGeodesicPath *GetDijkstraImageGeodesicPath(\n    )\n\naccess to the internal dijkstra path\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDijkstraImageContourLineInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkDijkstraImageContourLineInterpolator", // tp_name
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
  PyvtkDijkstraImageContourLineInterpolator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDijkstraImageContourLineInterpolator_StaticNew()
{
  return vtkDijkstraImageContourLineInterpolator::New();
}

PyObject *PyvtkDijkstraImageContourLineInterpolator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDijkstraImageContourLineInterpolator_Type, PyvtkDijkstraImageContourLineInterpolator_Methods,
    "vtkDijkstraImageContourLineInterpolator",
 &PyvtkDijkstraImageContourLineInterpolator_StaticNew);

  PyTypeObject *pytype = &PyvtkDijkstraImageContourLineInterpolator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkContourLineInterpolator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDijkstraImageContourLineInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDijkstraImageContourLineInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDijkstraImageContourLineInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

}

