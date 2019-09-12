// python wrapper for vtkUnstructuredGridPartialPreIntegration
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
#include "vtkUnstructuredGridPartialPreIntegration.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUnstructuredGridPartialPreIntegration(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUnstructuredGridPartialPreIntegration_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridVolumeRayIntegrator_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridVolumeRayIntegrator_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridVolumeRayIntegrator_ClassNew
#endif

static const char *PyvtkUnstructuredGridPartialPreIntegration_Doc =
  "vtkUnstructuredGridPartialPreIntegration - performs piecewise linear\nray integration.\n\n"
  "Superclass: vtkUnstructuredGridVolumeRayIntegrator\n\n"
  "vtkUnstructuredGridPartialPreIntegration performs piecewise linear\n"
  "ray integration.  This will give the same results as\n"
  "vtkUnstructuredGridLinearRayIntegration (with potentially a error due\n"
  "to table lookup quantization), but should be notably faster.  The\n"
  "algorithm used is given by Moreland and Angel, \"A Fast High Accuracy\n"
  "Volume Renderer for Unstructured Data.\"\n\n"
  "This class is thread safe only after the first instance is created.\n\n";


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUnstructuredGridPartialPreIntegration::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPartialPreIntegration *op = static_cast<vtkUnstructuredGridPartialPreIntegration *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridPartialPreIntegration::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUnstructuredGridPartialPreIntegration *tempr = vtkUnstructuredGridPartialPreIntegration::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPartialPreIntegration *op = static_cast<vtkUnstructuredGridPartialPreIntegration *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridPartialPreIntegration *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridPartialPreIntegration::NewInstance());

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
PyvtkUnstructuredGridPartialPreIntegration_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPartialPreIntegration *op = static_cast<vtkUnstructuredGridPartialPreIntegration *>(vp);

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
      op->vtkUnstructuredGridPartialPreIntegration::Initialize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_Integrate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Integrate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPartialPreIntegration *op = static_cast<vtkUnstructuredGridPartialPreIntegration *>(vp);

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
      op->vtkUnstructuredGridPartialPreIntegration::Integrate(temp0, temp1, temp2, temp3);
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
PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay_s1(PyObject *, PyObject *args)
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

    vtkUnstructuredGridPartialPreIntegration::IntegrateRay(temp0, temp1, temp2, temp3, temp4, temp5);

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
PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay_s2(PyObject *, PyObject *args)
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

    vtkUnstructuredGridPartialPreIntegration::IntegrateRay(temp0, temp1, temp2, temp3, temp4, temp5);

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

static PyMethodDef PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay_Methods[] = {
  {nullptr, PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay_s1, METH_VARARGS | METH_STATIC,
   "dddddP *f"},
  {nullptr, PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay_s2, METH_VARARGS | METH_STATIC,
   "dPdPdP *d *d *f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay_Methods;
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
PyvtkUnstructuredGridPartialPreIntegration_Psi(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Psi");

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    float tempr = vtkUnstructuredGridPartialPreIntegration::Psi(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_GetPsiTable(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPsiTable");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float *tempr = vtkUnstructuredGridPartialPreIntegration::GetPsiTable(temp0);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_BuildPsiTable(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "BuildPsiTable");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkUnstructuredGridPartialPreIntegration::BuildPsiTable();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridPartialPreIntegration_Methods[] = {
  {"IsTypeOf", PyvtkUnstructuredGridPartialPreIntegration_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUnstructuredGridPartialPreIntegration_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUnstructuredGridPartialPreIntegration_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkUnstructuredGridPartialPreIntegration\nC++: static vtkUnstructuredGridPartialPreIntegration *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUnstructuredGridPartialPreIntegration_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkUnstructuredGridPartialPreIntegration\nC++: vtkUnstructuredGridPartialPreIntegration *NewInstance()\n\n"},
  {"Initialize", PyvtkUnstructuredGridPartialPreIntegration_Initialize, METH_VARARGS,
   "V.Initialize(vtkVolume, vtkDataArray)\nC++: void Initialize(vtkVolume *volume, vtkDataArray *scalars)\n    override;\n\nSet up the integrator with the given properties and scalars.\n"},
  {"Integrate", PyvtkUnstructuredGridPartialPreIntegration_Integrate, METH_VARARGS,
   "V.Integrate(vtkDoubleArray, vtkDataArray, vtkDataArray, [float,\n    float, float, float])\nC++: void Integrate(vtkDoubleArray *intersectionLengths,\n    vtkDataArray *nearIntersections,\n    vtkDataArray *farIntersections, float color[4]) override;\n\nGiven a set of intersections (defined by the three arrays),\ncompute the piecewise integration of the array in front to back\norder. /c intersectionLengths holds the lengths of each piecewise\nsegment. /c nearIntersections and /c farIntersections hold the\nscalar values at the front and back of each segment.  /c color\nshould contain the RGBA value of the volume in front of the\nsegments passed in, and the result will be placed back into /c\ncolor.\n"},
  {"IntegrateRay", PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay, METH_VARARGS,
   "V.IntegrateRay(float, float, float, float, float, [float, float,\n    float, float])\nC++: static void IntegrateRay(double length,\n    double intensity_front, double attenuation_front,\n    double intensity_back, double attenuation_back,\n    float color[4])\nV.IntegrateRay(float, (float, float, float), float, (float, float,\n     float), float, [float, float, float, float])\nC++: static void IntegrateRay(double length,\n    const double color_front[3], double attenuation_front,\n    const double color_back[3], double attenuation_back,\n    float color[4])\n\nIntegrates a single ray segment.  color is blended with the\nresult (with color in front).  The result is written back into\ncolor.\n"},
  {"Psi", PyvtkUnstructuredGridPartialPreIntegration_Psi, METH_VARARGS,
   "V.Psi(float, float) -> float\nC++: static float Psi(float taufD, float taubD)\n\nLooks up Psi (as defined by Moreland and Angel, \"A Fast High\nAccuracy Volume Renderer for Unstructured Data\") in a table.  The\ntable must be created first, which happens on the first\ninstantiation of this class or when BuildPsiTable is first\ncalled.\n"},
  {"GetPsiTable", PyvtkUnstructuredGridPartialPreIntegration_GetPsiTable, METH_VARARGS,
   "V.GetPsiTable(int) -> (float, ...)\nC++: static float *GetPsiTable(int &size)\n\nLooks up Psi (as defined by Moreland and Angel, \"A Fast High\nAccuracy Volume Renderer for Unstructured Data\") in a table.  The\ntable must be created first, which happens on the first\ninstantiation of this class or when BuildPsiTable is first\ncalled.\n"},
  {"BuildPsiTable", PyvtkUnstructuredGridPartialPreIntegration_BuildPsiTable, METH_VARARGS,
   "V.BuildPsiTable()\nC++: static void BuildPsiTable()\n\nLooks up Psi (as defined by Moreland and Angel, \"A Fast High\nAccuracy Volume Renderer for Unstructured Data\") in a table.  The\ntable must be created first, which happens on the first\ninstantiation of this class or when BuildPsiTable is first\ncalled.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkUnstructuredGridPartialPreIntegration_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumePython.vtkUnstructuredGridPartialPreIntegration", // tp_name
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
  PyvtkUnstructuredGridPartialPreIntegration_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUnstructuredGridPartialPreIntegration_StaticNew()
{
  return vtkUnstructuredGridPartialPreIntegration::New();
}

PyObject *PyvtkUnstructuredGridPartialPreIntegration_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkUnstructuredGridPartialPreIntegration_Type, PyvtkUnstructuredGridPartialPreIntegration_Methods,
    "vtkUnstructuredGridPartialPreIntegration",
 &PyvtkUnstructuredGridPartialPreIntegration_StaticNew);

  PyTypeObject *pytype = &PyvtkUnstructuredGridPartialPreIntegration_Type;

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

void PyVTKAddFile_vtkUnstructuredGridPartialPreIntegration(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnstructuredGridPartialPreIntegration_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUnstructuredGridPartialPreIntegration", o) != 0)
  {
    Py_DECREF(o);
  }

}

