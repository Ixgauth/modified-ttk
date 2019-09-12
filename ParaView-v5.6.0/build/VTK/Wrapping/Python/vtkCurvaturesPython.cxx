// python wrapper for vtkCurvatures
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
#include "vtkCurvatures.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCurvatures(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCurvatures_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkCurvatures_Doc =
  "vtkCurvatures - compute curvatures (Gauss and mean) of a Polydata\nobject\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkCurvatures takes a polydata input and computes the curvature of\n"
  "the mesh at each point. Four possible methods of computation are\n"
  "available :\n\n"
  "Gauss Curvature discrete Gauss curvature (K) computation,$K(vertex v)\n"
  "= 2*PI-\\sum_{facet neighbs f of v} (angle_f at v) $ The contribution\n"
  "of every facet is for the moment weighted by $Area(facet)/3 $ The\n"
  "units of Gaussian Curvature are $[1/m^2] $\n\n"
  "Mean Curvature$H(vertex v) = average over edges neighbs e of H(e)\n"
  "$$H(edge e) = length(e)*dihedral_angle(e) $ NB: dihedral_angle is the\n"
  "ORIENTED angle between -PI and PI, this means that the surface is\n"
  "assumed to be orientable the computation creates the orientation The\n"
  "units of Mean Curvature are [1/m]\n\n"
  "Maximum ( $k_max $) and Minimum ( $k_min $) Principal\n"
  "Curvatures$k_max = H + sqrt(H^2 - K) $$k_min = H - sqrt(H^2 - K) $\n"
  "Excepting spherical and planar surfaces which have equal principal\n"
  "curvatures, the curvature at a point on a surface varies with the\n"
  "direction one \"sets off\" from the point. For all directions, the\n"
  "curvature will pass through two extrema: a minimum ( $k_min $) and a\n"
  "maximum ( $k_max $) which occur at mutually orthogonal directions to\n"
  "each other.\n\n"
  "NB. The sign of the Gauss curvature is a geometric ivariant, it\n"
  "should be +ve when the surface looks like a sphere, -ve when it looks\n"
  "like a saddle, however, the sign of the Mean curvature is not, it\n"
  "depends on the convention for normals - This code assumes that\n"
  "normals point outwards (ie from the surface of a sphere outwards). If\n"
  "a given mesh produces curvatures of opposite senses then the flag\n"
  "InvertMeanCurvature can be set and the Curvature reported by the Mean\n"
  "calculation will be inverted.\n\n"
  "@par Thanks: Philip Batchelor philipp.batchelor@kcl.ac.uk for\n"
  "creating and contributing the class and Andrew Maclean\n"
  "a.maclean@acfr.usyd.edu.au for cleanups and fixes. Thanks also to\n"
  "Goodwin Lawlor for contributing patch to calculate principal\n"
  "curvatures\n\n";


static PyObject *
PyvtkCurvatures_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCurvatures::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCurvatures::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCurvatures *tempr = vtkCurvatures::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCurvatures *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCurvatures::NewInstance());

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
PyvtkCurvatures_SetCurvatureType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurvatureType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurvatureType(temp0);
    }
    else
    {
      op->vtkCurvatures::SetCurvatureType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_GetCurvatureType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurvatureType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurvatureType() :
      op->vtkCurvatures::GetCurvatureType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_SetCurvatureTypeToGaussian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurvatureTypeToGaussian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurvatureTypeToGaussian();
    }
    else
    {
      op->vtkCurvatures::SetCurvatureTypeToGaussian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_SetCurvatureTypeToMean(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurvatureTypeToMean");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurvatureTypeToMean();
    }
    else
    {
      op->vtkCurvatures::SetCurvatureTypeToMean();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_SetCurvatureTypeToMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurvatureTypeToMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurvatureTypeToMaximum();
    }
    else
    {
      op->vtkCurvatures::SetCurvatureTypeToMaximum();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_SetCurvatureTypeToMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurvatureTypeToMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurvatureTypeToMinimum();
    }
    else
    {
      op->vtkCurvatures::SetCurvatureTypeToMinimum();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_SetInvertMeanCurvature(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInvertMeanCurvature");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInvertMeanCurvature(temp0);
    }
    else
    {
      op->vtkCurvatures::SetInvertMeanCurvature(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_GetInvertMeanCurvature(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInvertMeanCurvature");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInvertMeanCurvature() :
      op->vtkCurvatures::GetInvertMeanCurvature());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_InvertMeanCurvatureOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvertMeanCurvatureOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvertMeanCurvatureOn();
    }
    else
    {
      op->vtkCurvatures::InvertMeanCurvatureOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_InvertMeanCurvatureOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvertMeanCurvatureOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvertMeanCurvatureOff();
    }
    else
    {
      op->vtkCurvatures::InvertMeanCurvatureOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCurvatures_Methods[] = {
  {"IsTypeOf", PyvtkCurvatures_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCurvatures_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCurvatures_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCurvatures\nC++: static vtkCurvatures *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCurvatures_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCurvatures\nC++: vtkCurvatures *NewInstance()\n\n"},
  {"SetCurvatureType", PyvtkCurvatures_SetCurvatureType, METH_VARARGS,
   "V.SetCurvatureType(int)\nC++: virtual void SetCurvatureType(int _arg)\n\nSet/Get Curvature type VTK_CURVATURE_GAUSS: Gaussian curvature,\nstored as DataArray \"Gauss_Curvature\" VTK_CURVATURE_MEAN : Mean\ncurvature, stored as DataArray \"Mean_Curvature\"\n"},
  {"GetCurvatureType", PyvtkCurvatures_GetCurvatureType, METH_VARARGS,
   "V.GetCurvatureType() -> int\nC++: virtual int GetCurvatureType()\n\nSet/Get Curvature type VTK_CURVATURE_GAUSS: Gaussian curvature,\nstored as DataArray \"Gauss_Curvature\" VTK_CURVATURE_MEAN : Mean\ncurvature, stored as DataArray \"Mean_Curvature\"\n"},
  {"SetCurvatureTypeToGaussian", PyvtkCurvatures_SetCurvatureTypeToGaussian, METH_VARARGS,
   "V.SetCurvatureTypeToGaussian()\nC++: void SetCurvatureTypeToGaussian()\n\nSet/Get Curvature type VTK_CURVATURE_GAUSS: Gaussian curvature,\nstored as DataArray \"Gauss_Curvature\" VTK_CURVATURE_MEAN : Mean\ncurvature, stored as DataArray \"Mean_Curvature\"\n"},
  {"SetCurvatureTypeToMean", PyvtkCurvatures_SetCurvatureTypeToMean, METH_VARARGS,
   "V.SetCurvatureTypeToMean()\nC++: void SetCurvatureTypeToMean()\n\nSet/Get Curvature type VTK_CURVATURE_GAUSS: Gaussian curvature,\nstored as DataArray \"Gauss_Curvature\" VTK_CURVATURE_MEAN : Mean\ncurvature, stored as DataArray \"Mean_Curvature\"\n"},
  {"SetCurvatureTypeToMaximum", PyvtkCurvatures_SetCurvatureTypeToMaximum, METH_VARARGS,
   "V.SetCurvatureTypeToMaximum()\nC++: void SetCurvatureTypeToMaximum()\n\nSet/Get Curvature type VTK_CURVATURE_GAUSS: Gaussian curvature,\nstored as DataArray \"Gauss_Curvature\" VTK_CURVATURE_MEAN : Mean\ncurvature, stored as DataArray \"Mean_Curvature\"\n"},
  {"SetCurvatureTypeToMinimum", PyvtkCurvatures_SetCurvatureTypeToMinimum, METH_VARARGS,
   "V.SetCurvatureTypeToMinimum()\nC++: void SetCurvatureTypeToMinimum()\n\nSet/Get Curvature type VTK_CURVATURE_GAUSS: Gaussian curvature,\nstored as DataArray \"Gauss_Curvature\" VTK_CURVATURE_MEAN : Mean\ncurvature, stored as DataArray \"Mean_Curvature\"\n"},
  {"SetInvertMeanCurvature", PyvtkCurvatures_SetInvertMeanCurvature, METH_VARARGS,
   "V.SetInvertMeanCurvature(int)\nC++: virtual void SetInvertMeanCurvature(vtkTypeBool _arg)\n\nSet/Get the flag which inverts the mean curvature calculation for\nmeshes with inward pointing normals (default false)\n"},
  {"GetInvertMeanCurvature", PyvtkCurvatures_GetInvertMeanCurvature, METH_VARARGS,
   "V.GetInvertMeanCurvature() -> int\nC++: virtual vtkTypeBool GetInvertMeanCurvature()\n\nSet/Get the flag which inverts the mean curvature calculation for\nmeshes with inward pointing normals (default false)\n"},
  {"InvertMeanCurvatureOn", PyvtkCurvatures_InvertMeanCurvatureOn, METH_VARARGS,
   "V.InvertMeanCurvatureOn()\nC++: virtual void InvertMeanCurvatureOn()\n\nSet/Get the flag which inverts the mean curvature calculation for\nmeshes with inward pointing normals (default false)\n"},
  {"InvertMeanCurvatureOff", PyvtkCurvatures_InvertMeanCurvatureOff, METH_VARARGS,
   "V.InvertMeanCurvatureOff()\nC++: virtual void InvertMeanCurvatureOff()\n\nSet/Get the flag which inverts the mean curvature calculation for\nmeshes with inward pointing normals (default false)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCurvatures_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkCurvatures", // tp_name
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
  PyvtkCurvatures_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCurvatures_StaticNew()
{
  return vtkCurvatures::New();
}

PyObject *PyvtkCurvatures_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCurvatures_Type, PyvtkCurvatures_Methods,
    "vtkCurvatures",
 &PyvtkCurvatures_StaticNew);

  PyTypeObject *pytype = &PyvtkCurvatures_Type;

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

void PyVTKAddFile_vtkCurvatures(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCurvatures_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCurvatures", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_CURVATURE_GAUSS", 0 },
        { "VTK_CURVATURE_MEAN", 1 },
        { "VTK_CURVATURE_MAXIMUM", 2 },
        { "VTK_CURVATURE_MINIMUM", 3 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

