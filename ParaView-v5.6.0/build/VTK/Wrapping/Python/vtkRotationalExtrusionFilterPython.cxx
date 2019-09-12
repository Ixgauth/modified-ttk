// python wrapper for vtkRotationalExtrusionFilter
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
#include "vtkRotationalExtrusionFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRotationalExtrusionFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRotationalExtrusionFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkRotationalExtrusionFilter_Doc =
  "vtkRotationalExtrusionFilter - sweep polygonal data creating \"skirt\"\nfrom free edges and lines, and lines from vertices\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkRotationalExtrusionFilter is a modeling filter. It takes polygonal\n"
  "data as input and generates polygonal data on output. The input\n"
  "dataset is swept around the z-axis to create new polygonal\n"
  "primitives. These primitives form a \"skirt\" or swept surface. For\n"
  "example, sweeping a line results in a cylindrical shell, and sweeping\n"
  "a circle creates a torus.\n\n"
  "There are a number of control parameters for this filter. You can\n"
  "control whether the sweep of a 2D object (i.e., polygon or triangle\n"
  "strip) is capped with the generating geometry via the \"Capping\"\n"
  "instance variable. Also, you can control the angle of rotation, and\n"
  "whether translation along the z-axis is performed along with the\n"
  "rotation. (Translation is useful for creating \"springs\".) You also\n"
  "can adjust the radius of the generating geometry using the\n"
  "\"DeltaRotation\" instance variable.\n\n"
  "The skirt is generated by locating certain topological features. Free\n"
  "edges (edges of polygons or triangle strips only used by one polygon\n"
  "or triangle strips) generate surfaces. This is true also of lines or\n"
  "polylines. Vertices generate lines.\n\n"
  "This filter can be used to model axisymmetric objects like cylinders,\n"
  "bottles, and wine glasses; or translational/rotational symmetric\n"
  "objects like springs or corkscrews.\n\n"
  "@warning\n"
  "If the object sweeps 360 degrees, radius does not vary, and the\n"
  "object does not translate, capping is not performed. This is because\n"
  "the cap is unnecessary.\n\n"
  "@warning\n"
  "Some polygonal objects have no free edges (e.g., sphere). When swept,\n"
  "this will result in two separate surfaces if capping is on, or no\n"
  "surface if capping is off.\n\n"
  "@sa\n"
  "vtkLinearExtrusionFilter\n\n";


static PyObject *
PyvtkRotationalExtrusionFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRotationalExtrusionFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRotationalExtrusionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRotationalExtrusionFilter *tempr = vtkRotationalExtrusionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRotationalExtrusionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRotationalExtrusionFilter::NewInstance());

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
PyvtkRotationalExtrusionFilter_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

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
      op->vtkRotationalExtrusionFilter::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMinValue() :
      op->vtkRotationalExtrusionFilter::GetResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMaxValue() :
      op->vtkRotationalExtrusionFilter::GetResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkRotationalExtrusionFilter::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_SetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCapping(temp0);
    }
    else
    {
      op->vtkRotationalExtrusionFilter::SetCapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_GetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCapping() :
      op->vtkRotationalExtrusionFilter::GetCapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_CappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOn();
    }
    else
    {
      op->vtkRotationalExtrusionFilter::CappingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_CappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOff();
    }
    else
    {
      op->vtkRotationalExtrusionFilter::CappingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_SetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAngle(temp0);
    }
    else
    {
      op->vtkRotationalExtrusionFilter::SetAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngle() :
      op->vtkRotationalExtrusionFilter::GetAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_SetTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslation(temp0);
    }
    else
    {
      op->vtkRotationalExtrusionFilter::SetTranslation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_GetTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTranslation() :
      op->vtkRotationalExtrusionFilter::GetTranslation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_SetDeltaRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeltaRadius(temp0);
    }
    else
    {
      op->vtkRotationalExtrusionFilter::SetDeltaRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_GetDeltaRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDeltaRadius() :
      op->vtkRotationalExtrusionFilter::GetDeltaRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRotationalExtrusionFilter_Methods[] = {
  {"IsTypeOf", PyvtkRotationalExtrusionFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRotationalExtrusionFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRotationalExtrusionFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRotationalExtrusionFilter\nC++: static vtkRotationalExtrusionFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRotationalExtrusionFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRotationalExtrusionFilter\nC++: vtkRotationalExtrusionFilter *NewInstance()\n\n"},
  {"SetResolution", PyvtkRotationalExtrusionFilter_SetResolution, METH_VARARGS,
   "V.SetResolution(int)\nC++: virtual void SetResolution(int _arg)\n\nSet/Get resolution of sweep operation. Resolution controls the\nnumber of intermediate node points.\n"},
  {"GetResolutionMinValue", PyvtkRotationalExtrusionFilter_GetResolutionMinValue, METH_VARARGS,
   "V.GetResolutionMinValue() -> int\nC++: virtual int GetResolutionMinValue()\n\nSet/Get resolution of sweep operation. Resolution controls the\nnumber of intermediate node points.\n"},
  {"GetResolutionMaxValue", PyvtkRotationalExtrusionFilter_GetResolutionMaxValue, METH_VARARGS,
   "V.GetResolutionMaxValue() -> int\nC++: virtual int GetResolutionMaxValue()\n\nSet/Get resolution of sweep operation. Resolution controls the\nnumber of intermediate node points.\n"},
  {"GetResolution", PyvtkRotationalExtrusionFilter_GetResolution, METH_VARARGS,
   "V.GetResolution() -> int\nC++: virtual int GetResolution()\n\nSet/Get resolution of sweep operation. Resolution controls the\nnumber of intermediate node points.\n"},
  {"SetCapping", PyvtkRotationalExtrusionFilter_SetCapping, METH_VARARGS,
   "V.SetCapping(int)\nC++: virtual void SetCapping(vtkTypeBool _arg)\n\nTurn on/off the capping of the skirt.\n"},
  {"GetCapping", PyvtkRotationalExtrusionFilter_GetCapping, METH_VARARGS,
   "V.GetCapping() -> int\nC++: virtual vtkTypeBool GetCapping()\n\nTurn on/off the capping of the skirt.\n"},
  {"CappingOn", PyvtkRotationalExtrusionFilter_CappingOn, METH_VARARGS,
   "V.CappingOn()\nC++: virtual void CappingOn()\n\nTurn on/off the capping of the skirt.\n"},
  {"CappingOff", PyvtkRotationalExtrusionFilter_CappingOff, METH_VARARGS,
   "V.CappingOff()\nC++: virtual void CappingOff()\n\nTurn on/off the capping of the skirt.\n"},
  {"SetAngle", PyvtkRotationalExtrusionFilter_SetAngle, METH_VARARGS,
   "V.SetAngle(float)\nC++: virtual void SetAngle(double _arg)\n\nSet/Get angle of rotation.\n"},
  {"GetAngle", PyvtkRotationalExtrusionFilter_GetAngle, METH_VARARGS,
   "V.GetAngle() -> float\nC++: virtual double GetAngle()\n\nSet/Get angle of rotation.\n"},
  {"SetTranslation", PyvtkRotationalExtrusionFilter_SetTranslation, METH_VARARGS,
   "V.SetTranslation(float)\nC++: virtual void SetTranslation(double _arg)\n\nSet/Get total amount of translation along the z-axis.\n"},
  {"GetTranslation", PyvtkRotationalExtrusionFilter_GetTranslation, METH_VARARGS,
   "V.GetTranslation() -> float\nC++: virtual double GetTranslation()\n\nSet/Get total amount of translation along the z-axis.\n"},
  {"SetDeltaRadius", PyvtkRotationalExtrusionFilter_SetDeltaRadius, METH_VARARGS,
   "V.SetDeltaRadius(float)\nC++: virtual void SetDeltaRadius(double _arg)\n\nSet/Get change in radius during sweep process.\n"},
  {"GetDeltaRadius", PyvtkRotationalExtrusionFilter_GetDeltaRadius, METH_VARARGS,
   "V.GetDeltaRadius() -> float\nC++: virtual double GetDeltaRadius()\n\nSet/Get change in radius during sweep process.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRotationalExtrusionFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersModelingPython.vtkRotationalExtrusionFilter", // tp_name
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
  PyvtkRotationalExtrusionFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRotationalExtrusionFilter_StaticNew()
{
  return vtkRotationalExtrusionFilter::New();
}

PyObject *PyvtkRotationalExtrusionFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRotationalExtrusionFilter_Type, PyvtkRotationalExtrusionFilter_Methods,
    "vtkRotationalExtrusionFilter",
 &PyvtkRotationalExtrusionFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkRotationalExtrusionFilter_Type;

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

void PyVTKAddFile_vtkRotationalExtrusionFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRotationalExtrusionFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRotationalExtrusionFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}
