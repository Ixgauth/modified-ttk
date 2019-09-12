// python wrapper for vtkGraphAnnotationLayersFilter
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
#include "vtkGraphAnnotationLayersFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGraphAnnotationLayersFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGraphAnnotationLayersFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkGraphAnnotationLayersFilter_Doc =
  "vtkGraphAnnotationLayersFilter - Produce filled convex hulls around\nsubsets of vertices in a vtkGraph.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "Produces a vtkPolyData comprised of filled polygons of the convex\n"
  "hull of a cluster. Alternatively, you may choose to output bounding\n"
  "rectangles. Clusters with fewer than three vertices are artificially\n"
  "expanded to ensure visibility (see vtkConvexHull2D).\n\n"
  "The first input is a vtkGraph with points, possibly set by passing\n"
  "the graph through vtkGraphLayout (z-values are ignored). The second\n"
  "input is a vtkAnnotationsLayer containing vtkSelectionNodeS of vertex\n"
  "ids (the 'clusters' output of vtkTulipReader for example).\n\n"
  "Setting OutlineOn() additionally produces outlines of the clusters on\n"
  "output port 1.\n\n"
  "Three arrays are added to the cells of the output: \"Hull id\"; \"Hull\n"
  "name\"; and \"Hull color\".\n\n"
  "Note: This filter operates in the x,y-plane and as such works best\n"
  "with an interactor style that does not allow camera rotation, such as\n"
  "vtkInteractorStyleRubberBand2D.\n\n"
  "@sa\n"
  "vtkContext2D\n\n"
  "@par Thanks: Thanks to Colin Myers, University of Leeds for providing\n"
  "this implementation.\n\n";


static PyObject *
PyvtkGraphAnnotationLayersFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGraphAnnotationLayersFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphAnnotationLayersFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGraphAnnotationLayersFilter *tempr = vtkGraphAnnotationLayersFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraphAnnotationLayersFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphAnnotationLayersFilter::NewInstance());

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
PyvtkGraphAnnotationLayersFilter_OutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineOn();
    }
    else
    {
      op->vtkGraphAnnotationLayersFilter::OutlineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_OutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineOff();
    }
    else
    {
      op->vtkGraphAnnotationLayersFilter::OutlineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_SetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutline(temp0);
    }
    else
    {
      op->vtkGraphAnnotationLayersFilter::SetOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleFactor(temp0);
    }
    else
    {
      op->vtkGraphAnnotationLayersFilter::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_SetHullShapeToBoundingRectangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHullShapeToBoundingRectangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHullShapeToBoundingRectangle();
    }
    else
    {
      op->vtkGraphAnnotationLayersFilter::SetHullShapeToBoundingRectangle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_SetHullShapeToConvexHull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHullShapeToConvexHull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHullShapeToConvexHull();
    }
    else
    {
      op->vtkGraphAnnotationLayersFilter::SetHullShapeToConvexHull();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_SetMinHullSizeInWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinHullSizeInWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinHullSizeInWorld(temp0);
    }
    else
    {
      op->vtkGraphAnnotationLayersFilter::SetMinHullSizeInWorld(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_SetMinHullSizeInDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinHullSizeInDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinHullSizeInDisplay(temp0);
    }
    else
    {
      op->vtkGraphAnnotationLayersFilter::SetMinHullSizeInDisplay(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkGraphAnnotationLayersFilter::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGraphAnnotationLayersFilter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGraphAnnotationLayersFilter_Methods[] = {
  {"IsTypeOf", PyvtkGraphAnnotationLayersFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGraphAnnotationLayersFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGraphAnnotationLayersFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGraphAnnotationLayersFilter\nC++: static vtkGraphAnnotationLayersFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGraphAnnotationLayersFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGraphAnnotationLayersFilter\nC++: vtkGraphAnnotationLayersFilter *NewInstance()\n\n"},
  {"OutlineOn", PyvtkGraphAnnotationLayersFilter_OutlineOn, METH_VARARGS,
   "V.OutlineOn()\nC++: void OutlineOn()\n\nProduce outlines of the hulls on output port 1.\n"},
  {"OutlineOff", PyvtkGraphAnnotationLayersFilter_OutlineOff, METH_VARARGS,
   "V.OutlineOff()\nC++: void OutlineOff()\n\nProduce outlines of the hulls on output port 1.\n"},
  {"SetOutline", PyvtkGraphAnnotationLayersFilter_SetOutline, METH_VARARGS,
   "V.SetOutline(bool)\nC++: void SetOutline(bool b)\n\nProduce outlines of the hulls on output port 1.\n"},
  {"SetScaleFactor", PyvtkGraphAnnotationLayersFilter_SetScaleFactor, METH_VARARGS,
   "V.SetScaleFactor(float)\nC++: void SetScaleFactor(double scale)\n\nScale each hull by the amount specified. Defaults to 1.0.\n"},
  {"SetHullShapeToBoundingRectangle", PyvtkGraphAnnotationLayersFilter_SetHullShapeToBoundingRectangle, METH_VARARGS,
   "V.SetHullShapeToBoundingRectangle()\nC++: void SetHullShapeToBoundingRectangle()\n\nSet the shape of the hulls to bounding rectangle.\n"},
  {"SetHullShapeToConvexHull", PyvtkGraphAnnotationLayersFilter_SetHullShapeToConvexHull, METH_VARARGS,
   "V.SetHullShapeToConvexHull()\nC++: void SetHullShapeToConvexHull()\n\nSet the shape of the hulls to convex hull. Default.\n"},
  {"SetMinHullSizeInWorld", PyvtkGraphAnnotationLayersFilter_SetMinHullSizeInWorld, METH_VARARGS,
   "V.SetMinHullSizeInWorld(float)\nC++: void SetMinHullSizeInWorld(double size)\n\nSet the minimum x,y-dimensions of each hull in world coordinates.\nDefaults to 1.0. Set to 0.0 to disable.\n"},
  {"SetMinHullSizeInDisplay", PyvtkGraphAnnotationLayersFilter_SetMinHullSizeInDisplay, METH_VARARGS,
   "V.SetMinHullSizeInDisplay(int)\nC++: void SetMinHullSizeInDisplay(int size)\n\nSet the minimum x,y-dimensions of each hull in pixels. You must\nalso set a vtkRenderer. Defaults to 1. Set to 0 to disable.\n"},
  {"SetRenderer", PyvtkGraphAnnotationLayersFilter_SetRenderer, METH_VARARGS,
   "V.SetRenderer(vtkRenderer)\nC++: void SetRenderer(vtkRenderer *renderer)\n\nRenderer needed for MinHullSizeInDisplay calculation. Not\nreference counted.\n"},
  {"GetMTime", PyvtkGraphAnnotationLayersFilter_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nThe modified time of this filter.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGraphAnnotationLayersFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkGraphAnnotationLayersFilter", // tp_name
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
  PyvtkGraphAnnotationLayersFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGraphAnnotationLayersFilter_StaticNew()
{
  return vtkGraphAnnotationLayersFilter::New();
}

PyObject *PyvtkGraphAnnotationLayersFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGraphAnnotationLayersFilter_Type, PyvtkGraphAnnotationLayersFilter_Methods,
    "vtkGraphAnnotationLayersFilter",
 &PyvtkGraphAnnotationLayersFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkGraphAnnotationLayersFilter_Type;

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

void PyVTKAddFile_vtkGraphAnnotationLayersFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGraphAnnotationLayersFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGraphAnnotationLayersFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

