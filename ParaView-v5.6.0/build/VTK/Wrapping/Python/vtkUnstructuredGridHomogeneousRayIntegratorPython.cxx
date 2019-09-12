// python wrapper for vtkUnstructuredGridHomogeneousRayIntegrator
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
#include "vtkUnstructuredGridHomogeneousRayIntegrator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUnstructuredGridHomogeneousRayIntegrator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUnstructuredGridHomogeneousRayIntegrator_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridVolumeRayIntegrator_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridVolumeRayIntegrator_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridVolumeRayIntegrator_ClassNew
#endif

static const char *PyvtkUnstructuredGridHomogeneousRayIntegrator_Doc =
  "vtkUnstructuredGridHomogeneousRayIntegrator - performs piecewise\nconstant ray integration.\n\n"
  "Superclass: vtkUnstructuredGridVolumeRayIntegrator\n\n"
  "vtkUnstructuredGridHomogeneousRayIntegrator performs homogeneous ray\n"
  "integration.  This is a good method to use when volume rendering\n"
  "scalars that are defined on cells.\n\n";


static PyObject *
PyvtkUnstructuredGridHomogeneousRayIntegrator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUnstructuredGridHomogeneousRayIntegrator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridHomogeneousRayIntegrator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridHomogeneousRayIntegrator *op = static_cast<vtkUnstructuredGridHomogeneousRayIntegrator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridHomogeneousRayIntegrator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridHomogeneousRayIntegrator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUnstructuredGridHomogeneousRayIntegrator *tempr = vtkUnstructuredGridHomogeneousRayIntegrator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridHomogeneousRayIntegrator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridHomogeneousRayIntegrator *op = static_cast<vtkUnstructuredGridHomogeneousRayIntegrator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridHomogeneousRayIntegrator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridHomogeneousRayIntegrator::NewInstance());

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
PyvtkUnstructuredGridHomogeneousRayIntegrator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridHomogeneousRayIntegrator *op = static_cast<vtkUnstructuredGridHomogeneousRayIntegrator *>(vp);

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
      op->vtkUnstructuredGridHomogeneousRayIntegrator::Initialize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridHomogeneousRayIntegrator_Integrate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Integrate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridHomogeneousRayIntegrator *op = static_cast<vtkUnstructuredGridHomogeneousRayIntegrator *>(vp);

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
      op->vtkUnstructuredGridHomogeneousRayIntegrator::Integrate(temp0, temp1, temp2, temp3);
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
PyvtkUnstructuredGridHomogeneousRayIntegrator_SetTransferFunctionTableSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferFunctionTableSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridHomogeneousRayIntegrator *op = static_cast<vtkUnstructuredGridHomogeneousRayIntegrator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransferFunctionTableSize(temp0);
    }
    else
    {
      op->vtkUnstructuredGridHomogeneousRayIntegrator::SetTransferFunctionTableSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridHomogeneousRayIntegrator_GetTransferFunctionTableSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferFunctionTableSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridHomogeneousRayIntegrator *op = static_cast<vtkUnstructuredGridHomogeneousRayIntegrator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTransferFunctionTableSize() :
      op->vtkUnstructuredGridHomogeneousRayIntegrator::GetTransferFunctionTableSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridHomogeneousRayIntegrator_Methods[] = {
  {"IsTypeOf", PyvtkUnstructuredGridHomogeneousRayIntegrator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUnstructuredGridHomogeneousRayIntegrator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUnstructuredGridHomogeneousRayIntegrator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkUnstructuredGridHomogeneousRayIntegrator\nC++: static vtkUnstructuredGridHomogeneousRayIntegrator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUnstructuredGridHomogeneousRayIntegrator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkUnstructuredGridHomogeneousRayIntegrator\nC++: vtkUnstructuredGridHomogeneousRayIntegrator *NewInstance()\n\n"},
  {"Initialize", PyvtkUnstructuredGridHomogeneousRayIntegrator_Initialize, METH_VARARGS,
   "V.Initialize(vtkVolume, vtkDataArray)\nC++: void Initialize(vtkVolume *volume, vtkDataArray *scalars)\n    override;\n\nSet up the integrator with the given properties and scalars.\n"},
  {"Integrate", PyvtkUnstructuredGridHomogeneousRayIntegrator_Integrate, METH_VARARGS,
   "V.Integrate(vtkDoubleArray, vtkDataArray, vtkDataArray, [float,\n    float, float, float])\nC++: void Integrate(vtkDoubleArray *intersectionLengths,\n    vtkDataArray *nearIntersections,\n    vtkDataArray *farIntersections, float color[4]) override;\n\nGiven a set of intersections (defined by the three arrays),\ncompute the piecewise integration of the array in front to back\norder. /c intersectionLengths holds the lengths of each piecewise\nsegment. /c nearIntersections and /c farIntersections hold the\nscalar values at the front and back of each segment.  /c color\nshould contain the RGBA value of the volume in front of the\nsegments passed in, and the result will be placed back into /c\ncolor.\n"},
  {"SetTransferFunctionTableSize", PyvtkUnstructuredGridHomogeneousRayIntegrator_SetTransferFunctionTableSize, METH_VARARGS,
   "V.SetTransferFunctionTableSize(int)\nC++: virtual void SetTransferFunctionTableSize(int _arg)\n\nFor quick lookup, the transfer function is sampled into a table.\nThis parameter sets how big of a table to use.  By default, 1024\nentries are used.\n"},
  {"GetTransferFunctionTableSize", PyvtkUnstructuredGridHomogeneousRayIntegrator_GetTransferFunctionTableSize, METH_VARARGS,
   "V.GetTransferFunctionTableSize() -> int\nC++: virtual int GetTransferFunctionTableSize()\n\nFor quick lookup, the transfer function is sampled into a table.\nThis parameter sets how big of a table to use.  By default, 1024\nentries are used.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkUnstructuredGridHomogeneousRayIntegrator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumePython.vtkUnstructuredGridHomogeneousRayIntegrator", // tp_name
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
  PyvtkUnstructuredGridHomogeneousRayIntegrator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUnstructuredGridHomogeneousRayIntegrator_StaticNew()
{
  return vtkUnstructuredGridHomogeneousRayIntegrator::New();
}

PyObject *PyvtkUnstructuredGridHomogeneousRayIntegrator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkUnstructuredGridHomogeneousRayIntegrator_Type, PyvtkUnstructuredGridHomogeneousRayIntegrator_Methods,
    "vtkUnstructuredGridHomogeneousRayIntegrator",
 &PyvtkUnstructuredGridHomogeneousRayIntegrator_StaticNew);

  PyTypeObject *pytype = &PyvtkUnstructuredGridHomogeneousRayIntegrator_Type;

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

void PyVTKAddFile_vtkUnstructuredGridHomogeneousRayIntegrator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnstructuredGridHomogeneousRayIntegrator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUnstructuredGridHomogeneousRayIntegrator", o) != 0)
  {
    Py_DECREF(o);
  }

}

