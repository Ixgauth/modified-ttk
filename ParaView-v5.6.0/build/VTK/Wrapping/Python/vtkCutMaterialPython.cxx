// python wrapper for vtkCutMaterial
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
#include "vtkCutMaterial.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCutMaterial(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCutMaterial_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkCutMaterial_Doc =
  "vtkCutMaterial - Automatically computes the cut plane for a material\narray pair.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkCutMaterial computes a cut plane based on an up vector, center of\n"
  "the bounding box and the location of the maximum variable value.\n"
  " These computed values are available so that they can be used to set\n"
  "the camera for the best view of the plane.\n\n";


static PyObject *
PyvtkCutMaterial_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCutMaterial::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCutMaterial::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCutMaterial *tempr = vtkCutMaterial::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCutMaterial *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCutMaterial::NewInstance());

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
PyvtkCutMaterial_SetMaterialArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaterialArrayName(temp0);
    }
    else
    {
      op->vtkCutMaterial::SetMaterialArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetMaterialArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMaterialArrayName() :
      op->vtkCutMaterial::GetMaterialArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_SetMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaterial(temp0);
    }
    else
    {
      op->vtkCutMaterial::SetMaterial(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaterial() :
      op->vtkCutMaterial::GetMaterial());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayName(temp0);
    }
    else
    {
      op->vtkCutMaterial::SetArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkCutMaterial::GetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_SetUpVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetUpVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCutMaterial::SetUpVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCutMaterial_SetUpVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetUpVector(temp0);
    }
    else
    {
      op->vtkCutMaterial::SetUpVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCutMaterial_SetUpVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCutMaterial_SetUpVector_s1(self, args);
    case 1:
      return PyvtkCutMaterial_SetUpVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetUpVector");
  return nullptr;
}



static PyObject *
PyvtkCutMaterial_GetUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetUpVector() :
      op->vtkCutMaterial::GetUpVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetMaximumPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMaximumPoint() :
      op->vtkCutMaterial::GetMaximumPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetCenterPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenterPoint() :
      op->vtkCutMaterial::GetCenterPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkCutMaterial::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkCutMaterial_Methods[] = {
  {"IsTypeOf", PyvtkCutMaterial_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCutMaterial_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCutMaterial_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCutMaterial\nC++: static vtkCutMaterial *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCutMaterial_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCutMaterial\nC++: vtkCutMaterial *NewInstance()\n\n"},
  {"SetMaterialArrayName", PyvtkCutMaterial_SetMaterialArrayName, METH_VARARGS,
   "V.SetMaterialArrayName(string)\nC++: virtual void SetMaterialArrayName(const char *_arg)\n\nCell array that contains the material values.\n"},
  {"GetMaterialArrayName", PyvtkCutMaterial_GetMaterialArrayName, METH_VARARGS,
   "V.GetMaterialArrayName() -> string\nC++: virtual char *GetMaterialArrayName()\n\nCell array that contains the material values.\n"},
  {"SetMaterial", PyvtkCutMaterial_SetMaterial, METH_VARARGS,
   "V.SetMaterial(int)\nC++: virtual void SetMaterial(int _arg)\n\nMaterial to probe.\n"},
  {"GetMaterial", PyvtkCutMaterial_GetMaterial, METH_VARARGS,
   "V.GetMaterial() -> int\nC++: virtual int GetMaterial()\n\nMaterial to probe.\n"},
  {"SetArrayName", PyvtkCutMaterial_SetArrayName, METH_VARARGS,
   "V.SetArrayName(string)\nC++: virtual void SetArrayName(const char *_arg)\n\nFor now, we just use the cell values. The array name to cut.\n"},
  {"GetArrayName", PyvtkCutMaterial_GetArrayName, METH_VARARGS,
   "V.GetArrayName() -> string\nC++: virtual char *GetArrayName()\n\nFor now, we just use the cell values. The array name to cut.\n"},
  {"SetUpVector", PyvtkCutMaterial_SetUpVector, METH_VARARGS,
   "V.SetUpVector(float, float, float)\nC++: void SetUpVector(double, double, double)\nV.SetUpVector((float, float, float))\nC++: void SetUpVector(double a[3])\n\n"},
  {"GetUpVector", PyvtkCutMaterial_GetUpVector, METH_VARARGS,
   "V.GetUpVector() -> (float, float, float)\nC++: double *GetUpVector()\n\n"},
  {"GetMaximumPoint", PyvtkCutMaterial_GetMaximumPoint, METH_VARARGS,
   "V.GetMaximumPoint() -> (float, float, float)\nC++: double *GetMaximumPoint()\n\n"},
  {"GetCenterPoint", PyvtkCutMaterial_GetCenterPoint, METH_VARARGS,
   "V.GetCenterPoint() -> (float, float, float)\nC++: double *GetCenterPoint()\n\n"},
  {"GetNormal", PyvtkCutMaterial_GetNormal, METH_VARARGS,
   "V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCutMaterial_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelPython.vtkCutMaterial", // tp_name
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
  PyvtkCutMaterial_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCutMaterial_StaticNew()
{
  return vtkCutMaterial::New();
}

PyObject *PyvtkCutMaterial_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCutMaterial_Type, PyvtkCutMaterial_Methods,
    "vtkCutMaterial",
 &PyvtkCutMaterial_StaticNew);

  PyTypeObject *pytype = &PyvtkCutMaterial_Type;

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

void PyVTKAddFile_vtkCutMaterial(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCutMaterial_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCutMaterial", o) != 0)
  {
    Py_DECREF(o);
  }

}

