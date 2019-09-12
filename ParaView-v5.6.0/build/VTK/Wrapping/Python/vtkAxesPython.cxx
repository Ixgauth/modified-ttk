// python wrapper for vtkAxes
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
#include "vtkAxes.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAxes(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAxes_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkAxes_Doc =
  "vtkAxes - create an x-y-z axes\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkAxes creates three lines that form an x-y-z axes. The origin of\n"
  "the axes is user specified (0,0,0 is default), and the size is\n"
  "specified with a scale factor. Three scalar values are generated for\n"
  "the three lines and can be used (via color map) to indicate a\n"
  "particular coordinate axis.\n\n";


static PyObject *
PyvtkAxes_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAxes::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxes *op = static_cast<vtkAxes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAxes::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAxes *tempr = vtkAxes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxes *op = static_cast<vtkAxes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAxes::NewInstance());

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
PyvtkAxes_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxes *op = static_cast<vtkAxes *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAxes::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxes_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxes *op = static_cast<vtkAxes *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkAxes::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxes_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAxes_SetOrigin_s1(self, args);
    case 1:
      return PyvtkAxes_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}



static PyObject *
PyvtkAxes_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxes *op = static_cast<vtkAxes *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkAxes::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxes_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxes *op = static_cast<vtkAxes *>(vp);

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
      op->vtkAxes::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxes_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxes *op = static_cast<vtkAxes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkAxes::GetScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxes_SetSymmetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSymmetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxes *op = static_cast<vtkAxes *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSymmetric(temp0);
    }
    else
    {
      op->vtkAxes::SetSymmetric(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxes_GetSymmetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSymmetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxes *op = static_cast<vtkAxes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSymmetric() :
      op->vtkAxes::GetSymmetric());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxes_SymmetricOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SymmetricOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxes *op = static_cast<vtkAxes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SymmetricOn();
    }
    else
    {
      op->vtkAxes::SymmetricOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxes_SymmetricOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SymmetricOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxes *op = static_cast<vtkAxes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SymmetricOff();
    }
    else
    {
      op->vtkAxes::SymmetricOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxes_SetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxes *op = static_cast<vtkAxes *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeNormals(temp0);
    }
    else
    {
      op->vtkAxes::SetComputeNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxes_GetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxes *op = static_cast<vtkAxes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeNormals() :
      op->vtkAxes::GetComputeNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxes_ComputeNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxes *op = static_cast<vtkAxes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOn();
    }
    else
    {
      op->vtkAxes::ComputeNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxes_ComputeNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxes *op = static_cast<vtkAxes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOff();
    }
    else
    {
      op->vtkAxes::ComputeNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAxes_Methods[] = {
  {"IsTypeOf", PyvtkAxes_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAxes_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAxes_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAxes\nC++: static vtkAxes *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAxes_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAxes\nC++: vtkAxes *NewInstance()\n\n"},
  {"SetOrigin", PyvtkAxes_SetOrigin, METH_VARARGS,
   "V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {"GetOrigin", PyvtkAxes_GetOrigin, METH_VARARGS,
   "V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\nSet the origin of the axes.\n"},
  {"SetScaleFactor", PyvtkAxes_SetScaleFactor, METH_VARARGS,
   "V.SetScaleFactor(float)\nC++: virtual void SetScaleFactor(double _arg)\n\nSet the scale factor of the axes. Used to control size.\n"},
  {"GetScaleFactor", PyvtkAxes_GetScaleFactor, METH_VARARGS,
   "V.GetScaleFactor() -> float\nC++: virtual double GetScaleFactor()\n\nSet the scale factor of the axes. Used to control size.\n"},
  {"SetSymmetric", PyvtkAxes_SetSymmetric, METH_VARARGS,
   "V.SetSymmetric(int)\nC++: virtual void SetSymmetric(vtkTypeBool _arg)\n\nIf Symmetric is on, the axis continue to negative values.\n"},
  {"GetSymmetric", PyvtkAxes_GetSymmetric, METH_VARARGS,
   "V.GetSymmetric() -> int\nC++: virtual vtkTypeBool GetSymmetric()\n\nIf Symmetric is on, the axis continue to negative values.\n"},
  {"SymmetricOn", PyvtkAxes_SymmetricOn, METH_VARARGS,
   "V.SymmetricOn()\nC++: virtual void SymmetricOn()\n\nIf Symmetric is on, the axis continue to negative values.\n"},
  {"SymmetricOff", PyvtkAxes_SymmetricOff, METH_VARARGS,
   "V.SymmetricOff()\nC++: virtual void SymmetricOff()\n\nIf Symmetric is on, the axis continue to negative values.\n"},
  {"SetComputeNormals", PyvtkAxes_SetComputeNormals, METH_VARARGS,
   "V.SetComputeNormals(int)\nC++: virtual void SetComputeNormals(vtkTypeBool _arg)\n\nOption for computing normals.  By default they are computed.\n"},
  {"GetComputeNormals", PyvtkAxes_GetComputeNormals, METH_VARARGS,
   "V.GetComputeNormals() -> int\nC++: virtual vtkTypeBool GetComputeNormals()\n\nOption for computing normals.  By default they are computed.\n"},
  {"ComputeNormalsOn", PyvtkAxes_ComputeNormalsOn, METH_VARARGS,
   "V.ComputeNormalsOn()\nC++: virtual void ComputeNormalsOn()\n\nOption for computing normals.  By default they are computed.\n"},
  {"ComputeNormalsOff", PyvtkAxes_ComputeNormalsOff, METH_VARARGS,
   "V.ComputeNormalsOff()\nC++: virtual void ComputeNormalsOff()\n\nOption for computing normals.  By default they are computed.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAxes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkAxes", // tp_name
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
  PyvtkAxes_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAxes_StaticNew()
{
  return vtkAxes::New();
}

PyObject *PyvtkAxes_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAxes_Type, PyvtkAxes_Methods,
    "vtkAxes",
 &PyvtkAxes_StaticNew);

  PyTypeObject *pytype = &PyvtkAxes_Type;

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

void PyVTKAddFile_vtkAxes(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAxes_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAxes", o) != 0)
  {
    Py_DECREF(o);
  }

}

