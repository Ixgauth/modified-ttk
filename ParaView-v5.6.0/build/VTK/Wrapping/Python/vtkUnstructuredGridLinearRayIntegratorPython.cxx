// python wrapper for vtkUnstructuredGridLinearRayIntegrator
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
#include "vtkUnstructuredGridLinearRayIntegrator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUnstructuredGridLinearRayIntegrator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUnstructuredGridLinearRayIntegrator_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridVolumeRayIntegrator_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridVolumeRayIntegrator_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridVolumeRayIntegrator_ClassNew
#endif

static const char *PyvtkUnstructuredGridLinearRayIntegrator_Doc =
  "vtkUnstructuredGridLinearRayIntegrator - performs piecewise linear\nray integration.\n\n"
  "Superclass: vtkUnstructuredGridVolumeRayIntegrator\n\n"
  "vtkUnstructuredGridLinearRayIntegrator performs piecewise linear ray\n"
  "integration.  Considering that transfer functions in VTK are\n"
  "piecewise linear, this class should give the \"correct\" integration\n"
  "under most circumstances.  However, the computations performed are\n"
  "fairly hefty and should, for the most part, only be used as a\n"
  "benchmark for other, faster methods.\n\n"
  "@sa\n"
  "vtkUnstructuredGridPartialPreIntegration\n\n";


static PyObject *
PyvtkUnstructuredGridLinearRayIntegrator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUnstructuredGridLinearRayIntegrator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridLinearRayIntegrator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridLinearRayIntegrator *op = static_cast<vtkUnstructuredGridLinearRayIntegrator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridLinearRayIntegrator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridLinearRayIntegrator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUnstructuredGridLinearRayIntegrator *tempr = vtkUnstructuredGridLinearRayIntegrator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridLinearRayIntegrator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridLinearRayIntegrator *op = static_cast<vtkUnstructuredGridLinearRayIntegrator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridLinearRayIntegrator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridLinearRayIntegrator::NewInstance());

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
PyvtkUnstructuredGridLinearRayIntegrator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridLinearRayIntegrator *op = static_cast<vtkUnstructuredGridLinearRayIntegrator *>(vp);

  vtkVolume *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkVolume") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredGridLinearRayIntegrator::Initialize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridLinearRayIntegrator_Integrate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Integrate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridLinearRayIntegrator *op = static_cast<vtkUnstructuredGridLinearRayIntegrator *>(vp);

  vtkDoubleArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  vtkDataArray *temp2 = nullptr;
  const size_t size3 = 4;
  float temp3[4];
  float save3[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->Integrate(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkUnstructuredGridLinearRayIntegrator::Integrate(temp0, temp1, temp2, temp3);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridLinearRayIntegrator_IntegrateRay_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IntegrateRay");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  const size_t size5 = 4;
  float temp5[4];
  float save5[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    ap.Save(temp5, save5, size5);

    vtkUnstructuredGridLinearRayIntegrator::IntegrateRay(temp0, temp1, temp2, temp3, temp4, temp5);

    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGridLinearRayIntegrator_IntegrateRay_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IntegrateRay");

  double temp0;
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  const size_t size3 = 3;
  double temp3[3];
  double temp4;
  const size_t size5 = 4;
  float temp5[4];
  float save5[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    ap.Save(temp5, save5, size5);

    vtkUnstructuredGridLinearRayIntegrator::IntegrateRay(temp0, temp1, temp2, temp3, temp4, temp5);

    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridLinearRayIntegrator_IntegrateRay_Methods[] = {
  {nullptr, PyvtkUnstructuredGridLinearRayIntegrator_IntegrateRay_s1, METH_VARARGS | METH_STATIC,
   "dddddP *f"},
  {nullptr, PyvtkUnstructuredGridLinearRayIntegrator_IntegrateRay_s2, METH_VARARGS | METH_STATIC,
   "dPdPdP *d *d *f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkUnstructuredGridLinearRayIntegrator_IntegrateRay(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUnstructuredGridLinearRayIntegrator_IntegrateRay_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IntegrateRay");
  return nullptr;
}



static PyObject *
PyvtkUnstructuredGridLinearRayIntegrator_Psi(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Psi");

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    float tempr = vtkUnstructuredGridLinearRayIntegrator::Psi(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridLinearRayIntegrator_Methods[] = {
  {"IsTypeOf", PyvtkUnstructuredGridLinearRayIntegrator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUnstructuredGridLinearRayIntegrator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUnstructuredGridLinearRayIntegrator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkUnstructuredGridLinearRayIntegrator\nC++: static vtkUnstructuredGridLinearRayIntegrator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUnstructuredGridLinearRayIntegrator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkUnstructuredGridLinearRayIntegrator\nC++: vtkUnstructuredGridLinearRayIntegrator *NewInstance()\n\n"},
  {"Initialize", PyvtkUnstructuredGridLinearRayIntegrator_Initialize, METH_VARARGS,
   "V.Initialize(vtkVolume, vtkDataArray)\nC++: void Initialize(vtkVolume *volume, vtkDataArray *scalars)\n    override;\n\nSet up the integrator with the given properties and scalars.\n"},
  {"Integrate", PyvtkUnstructuredGridLinearRayIntegrator_Integrate, METH_VARARGS,
   "V.Integrate(vtkDoubleArray, vtkDataArray, vtkDataArray, [float,\n    float, float, float])\nC++: void Integrate(vtkDoubleArray *intersectionLengths,\n    vtkDataArray *nearIntersections,\n    vtkDataArray *farIntersections, float color[4]) override;\n\nGiven a set of intersections (defined by the three arrays),\ncompute the piecewise integration of the array in front to back\norder. /c intersectionLengths holds the lengths of each piecewise\nsegment. /c nearIntersections and /c farIntersections hold the\nscalar values at the front and back of each segment.  /c color\nshould contain the RGBA value of the volume in front of the\nsegments passed in, and the result will be placed back into /c\ncolor.\n"},
  {"IntegrateRay", PyvtkUnstructuredGridLinearRayIntegrator_IntegrateRay, METH_VARARGS,
   "V.IntegrateRay(float, float, float, float, float, [float, float,\n    float, float])\nC++: static void IntegrateRay(double length,\n    double intensity_front, double attenuation_front,\n    double intensity_back, double attenuation_back,\n    float color[4])\nV.IntegrateRay(float, (float, float, float), float, (float, float,\n     float), float, [float, float, float, float])\nC++: static void IntegrateRay(double length,\n    const double color_front[3], double attenuation_front,\n    const double color_back[3], double attenuation_back,\n    float color[4])\n\nIntegrates a single ray segment.  color is blended with the\nresult (with color in front).  The result is written back into\ncolor.\n"},
  {"Psi", PyvtkUnstructuredGridLinearRayIntegrator_Psi, METH_VARARGS,
   "V.Psi(float, float, float) -> float\nC++: static float Psi(float length, float attenuation_front,\n    float attenuation_back)\n\nComputes Psi (as defined by Moreland and Angel, \"A Fast High\nAccuracy Volume Renderer for Unstructured Data\").\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkUnstructuredGridLinearRayIntegrator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumePython.vtkUnstructuredGridLinearRayIntegrator", // tp_name
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
  PyvtkUnstructuredGridLinearRayIntegrator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUnstructuredGridLinearRayIntegrator_StaticNew()
{
  return vtkUnstructuredGridLinearRayIntegrator::New();
}

PyObject *PyvtkUnstructuredGridLinearRayIntegrator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkUnstructuredGridLinearRayIntegrator_Type, PyvtkUnstructuredGridLinearRayIntegrator_Methods,
    "vtkUnstructuredGridLinearRayIntegrator",
 &PyvtkUnstructuredGridLinearRayIntegrator_StaticNew);

  PyTypeObject *pytype = &PyvtkUnstructuredGridLinearRayIntegrator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridVolumeRayIntegrator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUnstructuredGridLinearRayIntegrator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnstructuredGridLinearRayIntegrator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUnstructuredGridLinearRayIntegrator", o) != 0)
  {
    Py_DECREF(o);
  }

}

