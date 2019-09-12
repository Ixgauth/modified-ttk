// python wrapper for vtkLinkEdgels
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
#include "vtkLinkEdgels.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLinkEdgels(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLinkEdgels_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkLinkEdgels_Doc =
  "vtkLinkEdgels - links edgels together to form digital curves.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkLinkEdgels links edgels into digital curves which are then stored\n"
  "as polylines. The algorithm works one pixel at a time only looking at\n"
  "its immediate neighbors. There is a GradientThreshold that can be set\n"
  "that eliminates any pixels with a smaller gradient value. This can be\n"
  "used as the lower threshold of a two value edgel thresholding.\n\n"
  "For the remaining edgels, links are first tried for the four\n"
  "connected neighbors.  A successful neighbor will satisfy three tests.\n"
  "First both edgels must be above the gradient threshold. Second, the\n"
  "difference between the orientation between the two edgels (Alpha) and\n"
  "each edgels orientation (Phi) must be less than LinkThreshold. Third,\n"
  "the difference between the two edgels Phi values must be less than\n"
  "PhiThreshold. The most successful link is selected. The measure is\n"
  "simply the sum of the three angle differences (actually stored as the\n"
  "sum of the cosines). If none of the four connect neighbors succeeds,\n"
  "then the eight connect neighbors are examined using the same method.\n\n"
  "This filter requires gradient information so you will need to use a\n"
  "vtkImageGradient at some point prior to this filter.  Typically a\n"
  "vtkNonMaximumSuppression filter is also used. vtkThresholdEdgels can\n"
  "be used to complete the two value edgel thresholding as used in a\n"
  "Canny edge detector. The vtkSubpixelPositionEdgels filter can also be\n"
  "used after this filter to adjust the edgel locations.\n\n"
  "@sa\n"
  "vtkImageData vtkImageGradient vtkImageNonMaximumSuppression\n\n";


static PyObject *
PyvtkLinkEdgels_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLinkEdgels::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinkEdgels_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinkEdgels *op = static_cast<vtkLinkEdgels *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLinkEdgels::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinkEdgels_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLinkEdgels *tempr = vtkLinkEdgels::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinkEdgels_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinkEdgels *op = static_cast<vtkLinkEdgels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLinkEdgels *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLinkEdgels::NewInstance());

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
PyvtkLinkEdgels_SetLinkThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinkThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinkEdgels *op = static_cast<vtkLinkEdgels *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLinkThreshold(temp0);
    }
    else
    {
      op->vtkLinkEdgels::SetLinkThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinkEdgels_GetLinkThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinkEdgels *op = static_cast<vtkLinkEdgels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLinkThreshold() :
      op->vtkLinkEdgels::GetLinkThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinkEdgels_SetPhiThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhiThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinkEdgels *op = static_cast<vtkLinkEdgels *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPhiThreshold(temp0);
    }
    else
    {
      op->vtkLinkEdgels::SetPhiThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinkEdgels_GetPhiThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinkEdgels *op = static_cast<vtkLinkEdgels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPhiThreshold() :
      op->vtkLinkEdgels::GetPhiThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinkEdgels_SetGradientThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinkEdgels *op = static_cast<vtkLinkEdgels *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGradientThreshold(temp0);
    }
    else
    {
      op->vtkLinkEdgels::SetGradientThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinkEdgels_GetGradientThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinkEdgels *op = static_cast<vtkLinkEdgels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGradientThreshold() :
      op->vtkLinkEdgels::GetGradientThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLinkEdgels_Methods[] = {
  {"IsTypeOf", PyvtkLinkEdgels_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLinkEdgels_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLinkEdgels_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLinkEdgels\nC++: static vtkLinkEdgels *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLinkEdgels_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLinkEdgels\nC++: vtkLinkEdgels *NewInstance()\n\n"},
  {"SetLinkThreshold", PyvtkLinkEdgels_SetLinkThreshold, METH_VARARGS,
   "V.SetLinkThreshold(float)\nC++: virtual void SetLinkThreshold(double _arg)\n\nSet/Get the threshold for Phi vs. Alpha link thresholding.\n"},
  {"GetLinkThreshold", PyvtkLinkEdgels_GetLinkThreshold, METH_VARARGS,
   "V.GetLinkThreshold() -> float\nC++: virtual double GetLinkThreshold()\n\nSet/Get the threshold for Phi vs. Alpha link thresholding.\n"},
  {"SetPhiThreshold", PyvtkLinkEdgels_SetPhiThreshold, METH_VARARGS,
   "V.SetPhiThreshold(float)\nC++: virtual void SetPhiThreshold(double _arg)\n\nSet/get the threshold for Phi vs. Phi link thresholding.\n"},
  {"GetPhiThreshold", PyvtkLinkEdgels_GetPhiThreshold, METH_VARARGS,
   "V.GetPhiThreshold() -> float\nC++: virtual double GetPhiThreshold()\n\nSet/get the threshold for Phi vs. Phi link thresholding.\n"},
  {"SetGradientThreshold", PyvtkLinkEdgels_SetGradientThreshold, METH_VARARGS,
   "V.SetGradientThreshold(float)\nC++: virtual void SetGradientThreshold(double _arg)\n\nSet/Get the threshold for image gradient thresholding.\n"},
  {"GetGradientThreshold", PyvtkLinkEdgels_GetGradientThreshold, METH_VARARGS,
   "V.GetGradientThreshold() -> float\nC++: virtual double GetGradientThreshold()\n\nSet/Get the threshold for image gradient thresholding.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLinkEdgels_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkLinkEdgels", // tp_name
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
  PyvtkLinkEdgels_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLinkEdgels_StaticNew()
{
  return vtkLinkEdgels::New();
}

PyObject *PyvtkLinkEdgels_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLinkEdgels_Type, PyvtkLinkEdgels_Methods,
    "vtkLinkEdgels",
 &PyvtkLinkEdgels_StaticNew);

  PyTypeObject *pytype = &PyvtkLinkEdgels_Type;

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

void PyVTKAddFile_vtkLinkEdgels(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLinkEdgels_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLinkEdgels", o) != 0)
  {
    Py_DECREF(o);
  }

}

