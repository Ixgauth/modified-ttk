// python wrapper for vtkIntersectFragments
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
#include "vtkIntersectFragments.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIntersectFragments(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkIntersectFragments_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkIntersectFragments_Doc =
  "vtkIntersectFragments - Geometry intersection operations.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "TODO\n\n";


static PyObject *
PyvtkIntersectFragments_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkIntersectFragments::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectFragments_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectFragments *op = static_cast<vtkIntersectFragments *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIntersectFragments::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectFragments_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkIntersectFragments *tempr = vtkIntersectFragments::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectFragments_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectFragments *op = static_cast<vtkIntersectFragments *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIntersectFragments *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIntersectFragments::NewInstance());

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
PyvtkIntersectFragments_SetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectFragments *op = static_cast<vtkIntersectFragments *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->SetCutFunction(temp0);
    }
    else
    {
      op->vtkIntersectFragments::SetCutFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectFragments_GetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectFragments *op = static_cast<vtkIntersectFragments *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetCutFunction() :
      op->vtkIntersectFragments::GetCutFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectFragments_SetGeometryInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometryInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectFragments *op = static_cast<vtkIntersectFragments *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetGeometryInputConnection(temp0);
    }
    else
    {
      op->vtkIntersectFragments::SetGeometryInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectFragments_SetStatisticsInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStatisticsInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectFragments *op = static_cast<vtkIntersectFragments *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetStatisticsInputConnection(temp0);
    }
    else
    {
      op->vtkIntersectFragments::SetStatisticsInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectFragments_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectFragments *op = static_cast<vtkIntersectFragments *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkIntersectFragments::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkIntersectFragments_Methods[] = {
  {"IsTypeOf", PyvtkIntersectFragments_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkIntersectFragments_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkIntersectFragments_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkIntersectFragments\nC++: static vtkIntersectFragments *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkIntersectFragments_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkIntersectFragments\nC++: vtkIntersectFragments *NewInstance()\n\n"},
  {"SetCutFunction", PyvtkIntersectFragments_SetCutFunction, METH_VARARGS,
   "V.SetCutFunction(vtkImplicitFunction)\nC++: virtual void SetCutFunction(vtkImplicitFunction *)\n\nSpecify the implicit function to perform the cutting.\n"},
  {"GetCutFunction", PyvtkIntersectFragments_GetCutFunction, METH_VARARGS,
   "V.GetCutFunction() -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetCutFunction()\n\nSpecify the implicit function to perform the cutting.\n"},
  {"SetGeometryInputConnection", PyvtkIntersectFragments_SetGeometryInputConnection, METH_VARARGS,
   "V.SetGeometryInputConnection(vtkAlgorithmOutput)\nC++: void SetGeometryInputConnection(\n    vtkAlgorithmOutput *algOutput)\n\nSpecify the geometry Input.\n"},
  {"SetStatisticsInputConnection", PyvtkIntersectFragments_SetStatisticsInputConnection, METH_VARARGS,
   "V.SetStatisticsInputConnection(vtkAlgorithmOutput)\nC++: void SetStatisticsInputConnection(\n    vtkAlgorithmOutput *algOutput)\n\nSpecify the geometry Input.\n"},
  {"GetMTime", PyvtkIntersectFragments_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride GetMTime because we refer to vtkImplicitFunction.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkIntersectFragments_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkIntersectFragments", // tp_name
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
  PyvtkIntersectFragments_Doc, // tp_doc
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

static vtkObjectBase *PyvtkIntersectFragments_StaticNew()
{
  return vtkIntersectFragments::New();
}

PyObject *PyvtkIntersectFragments_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkIntersectFragments_Type, PyvtkIntersectFragments_Methods,
    "vtkIntersectFragments",
 &PyvtkIntersectFragments_StaticNew);

  PyTypeObject *pytype = &PyvtkIntersectFragments_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiBlockDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkIntersectFragments(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIntersectFragments_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkIntersectFragments", o) != 0)
  {
    Py_DECREF(o);
  }

}

