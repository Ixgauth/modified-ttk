// python wrapper for vtkConvexHull2D
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
#include "vtkConvexHull2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkConvexHull2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkConvexHull2D_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkConvexHull2D_Doc =
  "vtkConvexHull2D - Produce filled convex hulls around a set of points.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "Produces a vtkPolyData comprised of a filled polygon of the convex\n"
  "hull of the input points. You may alternatively choose to output a\n"
  "bounding rectangle. Static methods are provided that calculate a\n"
  "(counter-clockwise) hull based on a set of input points.\n\n"
  "To help maintain the property of guaranteed visibilityhulls may be\n"
  "artificially scaled by setting MinHullSizeInWorld. This is\n"
  "particularly helpful in the case that there are only one or two\n"
  "points as it avoids producing a degenerate polygon. This setting is\n"
  "also available as an argument to the static methods.\n\n"
  "Setting a vtkRenderer on the filter enables the possibility to set\n"
  "MinHullSizeInDisplay to the desired number of display pixels to cover\n"
  "in each of the x- and y-dimensions.\n\n"
  "Setting OutlineOn() additionally produces an outline of the hull on\n"
  "output port 1.\n\n"
  "@attention This filter operates in the x,y-plane and as such works\n"
  "best with an interactor style that does not permit camera rotation\n"
  "such as vtkInteractorStyleRubberBand2D.\n\n"
  "@par Thanks: Thanks to Colin Myers, University of Leeds for providing\n"
  "this implementation.\n\n";

static PyTypeObject PyvtkConvexHull2D_HullShapes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkConvexHull2D.HullShapes", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkConvexHull2D_HullShapes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkConvexHull2D_HullShapes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkConvexHull2D_HullShapes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkConvexHull2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkConvexHull2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkConvexHull2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkConvexHull2D *tempr = vtkConvexHull2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkConvexHull2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkConvexHull2D::NewInstance());

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
PyvtkConvexHull2D_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkConvexHull2D::GetScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

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
      op->vtkConvexHull2D::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOutline() :
      op->vtkConvexHull2D::GetOutline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_SetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

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
      op->vtkConvexHull2D::SetOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_OutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineOn();
    }
    else
    {
      op->vtkConvexHull2D::OutlineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_OutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineOff();
    }
    else
    {
      op->vtkConvexHull2D::OutlineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetHullShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHullShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHullShape() :
      op->vtkConvexHull2D::GetHullShape());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_SetHullShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHullShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHullShape(temp0);
    }
    else
    {
      op->vtkConvexHull2D::SetHullShape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetHullShapeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHullShapeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHullShapeMinValue() :
      op->vtkConvexHull2D::GetHullShapeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetHullShapeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHullShapeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHullShapeMaxValue() :
      op->vtkConvexHull2D::GetHullShapeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_SetMinHullSizeInWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinHullSizeInWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

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
      op->vtkConvexHull2D::SetMinHullSizeInWorld(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetMinHullSizeInWorldMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinHullSizeInWorldMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinHullSizeInWorldMinValue() :
      op->vtkConvexHull2D::GetMinHullSizeInWorldMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetMinHullSizeInWorldMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinHullSizeInWorldMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinHullSizeInWorldMaxValue() :
      op->vtkConvexHull2D::GetMinHullSizeInWorldMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetMinHullSizeInWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinHullSizeInWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinHullSizeInWorld() :
      op->vtkConvexHull2D::GetMinHullSizeInWorld());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_SetMinHullSizeInDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinHullSizeInDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

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
      op->vtkConvexHull2D::SetMinHullSizeInDisplay(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetMinHullSizeInDisplayMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinHullSizeInDisplayMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinHullSizeInDisplayMinValue() :
      op->vtkConvexHull2D::GetMinHullSizeInDisplayMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetMinHullSizeInDisplayMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinHullSizeInDisplayMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinHullSizeInDisplayMaxValue() :
      op->vtkConvexHull2D::GetMinHullSizeInDisplayMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetMinHullSizeInDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinHullSizeInDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinHullSizeInDisplay() :
      op->vtkConvexHull2D::GetMinHullSizeInDisplay());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

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
      op->vtkConvexHull2D::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkConvexHull2D::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkConvexHull2D::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_CalculateBoundingRectangle(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CalculateBoundingRectangle");

  vtkPoints *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  double temp2 = 1.0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkConvexHull2D::CalculateBoundingRectangle(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_CalculateConvexHull(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CalculateConvexHull");

  vtkPoints *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  double temp2 = 1.0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkConvexHull2D::CalculateConvexHull(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkConvexHull2D_Methods[] = {
  {"IsTypeOf", PyvtkConvexHull2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkConvexHull2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkConvexHull2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkConvexHull2D\nC++: static vtkConvexHull2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkConvexHull2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkConvexHull2D\nC++: vtkConvexHull2D *NewInstance()\n\n"},
  {"GetScaleFactor", PyvtkConvexHull2D_GetScaleFactor, METH_VARARGS,
   "V.GetScaleFactor() -> float\nC++: virtual double GetScaleFactor()\n\nScale the hull by the amount specified. Defaults to 1.0.\n"},
  {"SetScaleFactor", PyvtkConvexHull2D_SetScaleFactor, METH_VARARGS,
   "V.SetScaleFactor(float)\nC++: virtual void SetScaleFactor(double _arg)\n\nScale the hull by the amount specified. Defaults to 1.0.\n"},
  {"GetOutline", PyvtkConvexHull2D_GetOutline, METH_VARARGS,
   "V.GetOutline() -> bool\nC++: virtual bool GetOutline()\n\nProduce an outline (polyline) of the hull on output port 1.\n"},
  {"SetOutline", PyvtkConvexHull2D_SetOutline, METH_VARARGS,
   "V.SetOutline(bool)\nC++: virtual void SetOutline(bool _arg)\n\nProduce an outline (polyline) of the hull on output port 1.\n"},
  {"OutlineOn", PyvtkConvexHull2D_OutlineOn, METH_VARARGS,
   "V.OutlineOn()\nC++: virtual void OutlineOn()\n\nProduce an outline (polyline) of the hull on output port 1.\n"},
  {"OutlineOff", PyvtkConvexHull2D_OutlineOff, METH_VARARGS,
   "V.OutlineOff()\nC++: virtual void OutlineOff()\n\nProduce an outline (polyline) of the hull on output port 1.\n"},
  {"GetHullShape", PyvtkConvexHull2D_GetHullShape, METH_VARARGS,
   "V.GetHullShape() -> int\nC++: virtual int GetHullShape()\n\nSet the shape of the hull to BoundingRectangle or ConvexHull.\n"},
  {"SetHullShape", PyvtkConvexHull2D_SetHullShape, METH_VARARGS,
   "V.SetHullShape(int)\nC++: virtual void SetHullShape(int _arg)\n\nSet the shape of the hull to BoundingRectangle or ConvexHull.\n"},
  {"GetHullShapeMinValue", PyvtkConvexHull2D_GetHullShapeMinValue, METH_VARARGS,
   "V.GetHullShapeMinValue() -> int\nC++: virtual int GetHullShapeMinValue()\n\nSet the shape of the hull to BoundingRectangle or ConvexHull.\n"},
  {"GetHullShapeMaxValue", PyvtkConvexHull2D_GetHullShapeMaxValue, METH_VARARGS,
   "V.GetHullShapeMaxValue() -> int\nC++: virtual int GetHullShapeMaxValue()\n\nSet the shape of the hull to BoundingRectangle or ConvexHull.\n"},
  {"SetMinHullSizeInWorld", PyvtkConvexHull2D_SetMinHullSizeInWorld, METH_VARARGS,
   "V.SetMinHullSizeInWorld(float)\nC++: virtual void SetMinHullSizeInWorld(double _arg)\n\nSet the minimum x,y-dimensions of each hull in world coordinates.\nDefaults to 1.0. Set to 0.0 to disable.\n"},
  {"GetMinHullSizeInWorldMinValue", PyvtkConvexHull2D_GetMinHullSizeInWorldMinValue, METH_VARARGS,
   "V.GetMinHullSizeInWorldMinValue() -> float\nC++: virtual double GetMinHullSizeInWorldMinValue()\n\nSet the minimum x,y-dimensions of each hull in world coordinates.\nDefaults to 1.0. Set to 0.0 to disable.\n"},
  {"GetMinHullSizeInWorldMaxValue", PyvtkConvexHull2D_GetMinHullSizeInWorldMaxValue, METH_VARARGS,
   "V.GetMinHullSizeInWorldMaxValue() -> float\nC++: virtual double GetMinHullSizeInWorldMaxValue()\n\nSet the minimum x,y-dimensions of each hull in world coordinates.\nDefaults to 1.0. Set to 0.0 to disable.\n"},
  {"GetMinHullSizeInWorld", PyvtkConvexHull2D_GetMinHullSizeInWorld, METH_VARARGS,
   "V.GetMinHullSizeInWorld() -> float\nC++: virtual double GetMinHullSizeInWorld()\n\nSet the minimum x,y-dimensions of each hull in world coordinates.\nDefaults to 1.0. Set to 0.0 to disable.\n"},
  {"SetMinHullSizeInDisplay", PyvtkConvexHull2D_SetMinHullSizeInDisplay, METH_VARARGS,
   "V.SetMinHullSizeInDisplay(int)\nC++: virtual void SetMinHullSizeInDisplay(int _arg)\n\nSet the minimum x,y-dimensions of each hull in pixels. You must\nalso set a vtkRenderer. Defaults to 1. Set to 0 to disable.\n"},
  {"GetMinHullSizeInDisplayMinValue", PyvtkConvexHull2D_GetMinHullSizeInDisplayMinValue, METH_VARARGS,
   "V.GetMinHullSizeInDisplayMinValue() -> int\nC++: virtual int GetMinHullSizeInDisplayMinValue()\n\nSet the minimum x,y-dimensions of each hull in pixels. You must\nalso set a vtkRenderer. Defaults to 1. Set to 0 to disable.\n"},
  {"GetMinHullSizeInDisplayMaxValue", PyvtkConvexHull2D_GetMinHullSizeInDisplayMaxValue, METH_VARARGS,
   "V.GetMinHullSizeInDisplayMaxValue() -> int\nC++: virtual int GetMinHullSizeInDisplayMaxValue()\n\nSet the minimum x,y-dimensions of each hull in pixels. You must\nalso set a vtkRenderer. Defaults to 1. Set to 0 to disable.\n"},
  {"GetMinHullSizeInDisplay", PyvtkConvexHull2D_GetMinHullSizeInDisplay, METH_VARARGS,
   "V.GetMinHullSizeInDisplay() -> int\nC++: virtual int GetMinHullSizeInDisplay()\n\nSet the minimum x,y-dimensions of each hull in pixels. You must\nalso set a vtkRenderer. Defaults to 1. Set to 0 to disable.\n"},
  {"SetRenderer", PyvtkConvexHull2D_SetRenderer, METH_VARARGS,
   "V.SetRenderer(vtkRenderer)\nC++: void SetRenderer(vtkRenderer *renderer)\n\nRenderer needed for MinHullSizeInDisplay calculation. Not\nreference counted.\n"},
  {"GetRenderer", PyvtkConvexHull2D_GetRenderer, METH_VARARGS,
   "V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\nRenderer needed for MinHullSizeInDisplay calculation. Not\nreference counted.\n"},
  {"GetMTime", PyvtkConvexHull2D_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nThe modified time of this filter.\n"},
  {"CalculateBoundingRectangle", PyvtkConvexHull2D_CalculateBoundingRectangle, METH_VARARGS,
   "V.CalculateBoundingRectangle(vtkPoints, vtkPoints, float)\nC++: static void CalculateBoundingRectangle(vtkPoints *inPoints,\n    vtkPoints *outPoints, double minimumHullSize=1.0)\n\nConvenience methods to calculate a convex hull from a set of\nvtkPointS.\n"},
  {"CalculateConvexHull", PyvtkConvexHull2D_CalculateConvexHull, METH_VARARGS,
   "V.CalculateConvexHull(vtkPoints, vtkPoints, float)\nC++: static void CalculateConvexHull(vtkPoints *inPoints,\n    vtkPoints *outPoints, double minimumHullSize=1.0)\n\nConvenience methods to calculate a convex hull from a set of\nvtkPointS.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkConvexHull2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkConvexHull2D", // tp_name
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
  PyvtkConvexHull2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkConvexHull2D_StaticNew()
{
  return vtkConvexHull2D::New();
}

PyObject *PyvtkConvexHull2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkConvexHull2D_Type, PyvtkConvexHull2D_Methods,
    "vtkConvexHull2D",
 &PyvtkConvexHull2D_StaticNew);

  PyTypeObject *pytype = &PyvtkConvexHull2D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkConvexHull2D_HullShapes_Type);
  PyvtkConvexHull2D_HullShapes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkConvexHull2D_HullShapes_Type);

  o = (PyObject *)&PyvtkConvexHull2D_HullShapes_Type;
  if (PyDict_SetItemString(d, "HullShapes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkConvexHull2D::HullShapes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "BoundingRectangle", vtkConvexHull2D::BoundingRectangle },
        { "ConvexHull", vtkConvexHull2D::ConvexHull },
      };

    o = PyvtkConvexHull2D_HullShapes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkConvexHull2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkConvexHull2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkConvexHull2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

