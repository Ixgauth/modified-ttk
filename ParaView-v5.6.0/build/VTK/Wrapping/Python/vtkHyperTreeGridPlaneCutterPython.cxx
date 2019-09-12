// python wrapper for vtkHyperTreeGridPlaneCutter
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
#include "vtkHyperTreeGridPlaneCutter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridPlaneCutter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkHyperTreeGridPlaneCutter_ClassNew(); }

#ifndef DECLARED_PyvtkHyperTreeGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkHyperTreeGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkHyperTreeGridAlgorithm_ClassNew
#endif

static const char *PyvtkHyperTreeGridPlaneCutter_Doc =
  "vtkHyperTreeGridPlaneCutter - cut a hyper tree grid volume with a\nplane and generate a polygonal cut surface.\n\n"
  "Superclass: vtkHyperTreeGridAlgorithm\n\n"
  "vtkHyperTreeGridPlaneCutter is a filter that takes as input a hyper\n"
  "tree grid and a single plane and generates the polygonal data\n"
  "intersection surface. This cut is computed at the leaf cells of the\n"
  "hyper tree. It is left as an option to decide whether the cut should\n"
  "be computed over the original AMR mesh or over its dual; in the\n"
  "latter case, perfect connectivity (i.e., mesh conformity in the FE\n"
  "sense) is achieved at the cost of interpolation to the dual of the\n"
  "input AMR mesh, and therefore of missing intersection plane pieces\n"
  "near the primal boundary.\n\n"
  "@sa\n"
  "vtkHyperTreeGrid vtkHyperTreeGridAlgorithm\n\n"
  "@par Thanks: This class was written by Philippe Pebay on a idea of\n"
  "Gu\303\251nol\303\251 Harel and Jacques-Bernard Lekien, 2016 This class was\n"
  "modified by Rogeli Grima Torres, 2016 This work was supported by\n"
  "Commissariat a l'Energie Atomique (CEA/DIF)\n\n";


static PyObject *
PyvtkHyperTreeGridPlaneCutter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridPlaneCutter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridPlaneCutter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridPlaneCutter *tempr = vtkHyperTreeGridPlaneCutter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridPlaneCutter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridPlaneCutter::NewInstance());

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
PyvtkHyperTreeGridPlaneCutter_SetPlane_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetPlane(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkHyperTreeGridPlaneCutter::SetPlane(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridPlaneCutter_SetPlane_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPlane(temp0);
    }
    else
    {
      op->vtkHyperTreeGridPlaneCutter::SetPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridPlaneCutter_SetPlane_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->SetPlane(temp0);
    }
    else
    {
      op->vtkHyperTreeGridPlaneCutter::SetPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridPlaneCutter_SetPlane_Methods[] = {
  {nullptr, PyvtkHyperTreeGridPlaneCutter_SetPlane_s2, METH_VARARGS,
   "@P *d"},
  {nullptr, PyvtkHyperTreeGridPlaneCutter_SetPlane_s3, METH_VARARGS,
   "@V *vtkPlane"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkHyperTreeGridPlaneCutter_SetPlane(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkHyperTreeGridPlaneCutter_SetPlane_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkHyperTreeGridPlaneCutter_SetPlane_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPlane");
  return nullptr;
}



static PyObject *
PyvtkHyperTreeGridPlaneCutter_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPlane() :
      op->vtkHyperTreeGridPlaneCutter::GetPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_SetPlaneObj(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneObj");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->SetPlaneObj(temp0);
    }
    else
    {
      op->vtkHyperTreeGridPlaneCutter::SetPlaneObj(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_GetPlaneObj(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneObj");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetPlaneObj() :
      op->vtkHyperTreeGridPlaneCutter::GetPlaneObj());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_SetDual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDual(temp0);
    }
    else
    {
      op->vtkHyperTreeGridPlaneCutter::SetDual(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_GetDual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDual() :
      op->vtkHyperTreeGridPlaneCutter::GetDual());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_DualOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DualOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DualOn();
    }
    else
    {
      op->vtkHyperTreeGridPlaneCutter::DualOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_DualOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DualOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DualOff();
    }
    else
    {
      op->vtkHyperTreeGridPlaneCutter::DualOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkHyperTreeGridPlaneCutter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridPlaneCutter_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridPlaneCutter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridPlaneCutter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridPlaneCutter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkHyperTreeGridPlaneCutter\nC++: static vtkHyperTreeGridPlaneCutter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridPlaneCutter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkHyperTreeGridPlaneCutter\nC++: vtkHyperTreeGridPlaneCutter *NewInstance()\n\n"},
  {"SetPlane", PyvtkHyperTreeGridPlaneCutter_SetPlane, METH_VARARGS,
   "V.SetPlane(float, float, float, float)\nC++: void SetPlane(double, double, double, double)\nV.SetPlane((float, float, float, float))\nC++: void SetPlane(double a[4])\nV.SetPlane(vtkPlane)\nC++: void SetPlane(vtkPlane *plane)\n\n"},
  {"GetPlane", PyvtkHyperTreeGridPlaneCutter_GetPlane, METH_VARARGS,
   "V.GetPlane() -> (float, float, float, float)\nC++: double *GetPlane()\n\n"},
  {"SetPlaneObj", PyvtkHyperTreeGridPlaneCutter_SetPlaneObj, METH_VARARGS,
   "V.SetPlaneObj(vtkPlane)\nC++: void SetPlaneObj(vtkPlane *)\n\n"},
  {"GetPlaneObj", PyvtkHyperTreeGridPlaneCutter_GetPlaneObj, METH_VARARGS,
   "V.GetPlaneObj() -> vtkPlane\nC++: virtual vtkPlane *GetPlaneObj()\n\n"},
  {"SetDual", PyvtkHyperTreeGridPlaneCutter_SetDual, METH_VARARGS,
   "V.SetDual(int)\nC++: virtual void SetDual(int _arg)\n\nSet/Get whether output mesh should be computed on dual grid\n"},
  {"GetDual", PyvtkHyperTreeGridPlaneCutter_GetDual, METH_VARARGS,
   "V.GetDual() -> int\nC++: virtual int GetDual()\n\nSet/Get whether output mesh should be computed on dual grid\n"},
  {"DualOn", PyvtkHyperTreeGridPlaneCutter_DualOn, METH_VARARGS,
   "V.DualOn()\nC++: virtual void DualOn()\n\nSet/Get whether output mesh should be computed on dual grid\n"},
  {"DualOff", PyvtkHyperTreeGridPlaneCutter_DualOff, METH_VARARGS,
   "V.DualOff()\nC++: virtual void DualOff()\n\nSet/Get whether output mesh should be computed on dual grid\n"},
  {"GetMTime", PyvtkHyperTreeGridPlaneCutter_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn this object's modified time.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkHyperTreeGridPlaneCutter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHyperTreePython.vtkHyperTreeGridPlaneCutter", // tp_name
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
  PyvtkHyperTreeGridPlaneCutter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridPlaneCutter_StaticNew()
{
  return vtkHyperTreeGridPlaneCutter::New();
}

PyObject *PyvtkHyperTreeGridPlaneCutter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkHyperTreeGridPlaneCutter_Type, PyvtkHyperTreeGridPlaneCutter_Methods,
    "vtkHyperTreeGridPlaneCutter",
 &PyvtkHyperTreeGridPlaneCutter_StaticNew);

  PyTypeObject *pytype = &PyvtkHyperTreeGridPlaneCutter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkHyperTreeGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridPlaneCutter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridPlaneCutter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridPlaneCutter", o) != 0)
  {
    Py_DECREF(o);
  }

}

