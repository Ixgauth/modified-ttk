// python wrapper for vtkCenterOfMass
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
#include "vtkCenterOfMass.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCenterOfMass(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCenterOfMass_ClassNew(); }

#ifndef DECLARED_PyvtkPointSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPointSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPointSetAlgorithm_ClassNew
#endif

static const char *PyvtkCenterOfMass_Doc =
  "vtkCenterOfMass - Find the center of mass of a set of points.\n\n"
  "Superclass: vtkPointSetAlgorithm\n\n"
  "vtkCenterOfMass finds the \"center of mass\" of a vtkPointSet\n"
  "(vtkPolyData or vtkUnstructuredGrid). Optionally, the user can\n"
  "specify to use the scalars as weights in the computation. If this\n"
  "option, UseScalarsAsWeights, is off, each point contributes equally\n"
  "in the calculation.\n\n"
  "You must ensure Update() has been called before GetCenter will\n"
  "produce a valid value.\n\n";


static PyObject *
PyvtkCenterOfMass_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCenterOfMass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCenterOfMass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenterOfMass *op = static_cast<vtkCenterOfMass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCenterOfMass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCenterOfMass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCenterOfMass *tempr = vtkCenterOfMass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCenterOfMass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenterOfMass *op = static_cast<vtkCenterOfMass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCenterOfMass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCenterOfMass::NewInstance());

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
PyvtkCenterOfMass_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenterOfMass *op = static_cast<vtkCenterOfMass *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCenterOfMass::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCenterOfMass_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenterOfMass *op = static_cast<vtkCenterOfMass *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkCenterOfMass::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCenterOfMass_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCenterOfMass_SetCenter_s1(self, args);
    case 1:
      return PyvtkCenterOfMass_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}



static PyObject *
PyvtkCenterOfMass_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenterOfMass *op = static_cast<vtkCenterOfMass *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkCenterOfMass::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCenterOfMass_SetUseScalarsAsWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseScalarsAsWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenterOfMass *op = static_cast<vtkCenterOfMass *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseScalarsAsWeights(temp0);
    }
    else
    {
      op->vtkCenterOfMass::SetUseScalarsAsWeights(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCenterOfMass_GetUseScalarsAsWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseScalarsAsWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenterOfMass *op = static_cast<vtkCenterOfMass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseScalarsAsWeights() :
      op->vtkCenterOfMass::GetUseScalarsAsWeights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCenterOfMass_ComputeCenterOfMass(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCenterOfMass");

  vtkPoints *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    vtkCenterOfMass::ComputeCenterOfMass(temp0, temp1, temp2);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCenterOfMass_Methods[] = {
  {"IsTypeOf", PyvtkCenterOfMass_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCenterOfMass_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCenterOfMass_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCenterOfMass\nC++: static vtkCenterOfMass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCenterOfMass_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCenterOfMass\nC++: vtkCenterOfMass *NewInstance()\n\n"},
  {"SetCenter", PyvtkCenterOfMass_SetCenter, METH_VARARGS,
   "V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {"GetCenter", PyvtkCenterOfMass_GetCenter, METH_VARARGS,
   "V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\n"},
  {"SetUseScalarsAsWeights", PyvtkCenterOfMass_SetUseScalarsAsWeights, METH_VARARGS,
   "V.SetUseScalarsAsWeights(bool)\nC++: virtual void SetUseScalarsAsWeights(bool _arg)\n\nSet a flag to determine if the points are weighted.\n"},
  {"GetUseScalarsAsWeights", PyvtkCenterOfMass_GetUseScalarsAsWeights, METH_VARARGS,
   "V.GetUseScalarsAsWeights() -> bool\nC++: virtual bool GetUseScalarsAsWeights()\n\nSet a flag to determine if the points are weighted.\n"},
  {"ComputeCenterOfMass", PyvtkCenterOfMass_ComputeCenterOfMass, METH_VARARGS,
   "V.ComputeCenterOfMass(vtkPoints, vtkDataArray, [float, float,\n    float])\nC++: static void ComputeCenterOfMass(vtkPoints *input,\n    vtkDataArray *scalars, double center[3])\n\nThis function is called by RequestData. It exists so that other\nclasses may use this computation without constructing a\nvtkCenterOfMass object.  The scalars can be set to nullptr if all\npoints are to be weighted equally.  If scalars are used, it is\nthe caller's responsibility to ensure that the number of scalars\nmatches the number of points, and that the sum of the scalars is\na positive value.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCenterOfMass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkCenterOfMass", // tp_name
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
  PyvtkCenterOfMass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCenterOfMass_StaticNew()
{
  return vtkCenterOfMass::New();
}

PyObject *PyvtkCenterOfMass_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCenterOfMass_Type, PyvtkCenterOfMass_Methods,
    "vtkCenterOfMass",
 &PyvtkCenterOfMass_StaticNew);

  PyTypeObject *pytype = &PyvtkCenterOfMass_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPointSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCenterOfMass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCenterOfMass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCenterOfMass", o) != 0)
  {
    Py_DECREF(o);
  }

}

