// python wrapper for vtkPVMetaSliceDataSet
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
#include "vtkPVMetaSliceDataSet.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVMetaSliceDataSet(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVMetaSliceDataSet_ClassNew(); }

#ifndef DECLARED_PyvtkPVDataSetAlgorithmSelectorFilter_ClassNew
extern "C" { PyObject *PyvtkPVDataSetAlgorithmSelectorFilter_ClassNew(); }
#define DECLARED_PyvtkPVDataSetAlgorithmSelectorFilter_ClassNew
#endif

static const char *PyvtkPVMetaSliceDataSet_Doc =
  "vtkPVMetaSliceDataSet - Meta class for slice filter that will allow\nthe user to switch between a regular cutter filter or an extract cell\nby region filter.\n\n"
  "Superclass: vtkPVDataSetAlgorithmSelectorFilter\n\n"
;


static PyObject *
PyvtkPVMetaSliceDataSet_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVMetaSliceDataSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMetaSliceDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaSliceDataSet *op = static_cast<vtkPVMetaSliceDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVMetaSliceDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMetaSliceDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVMetaSliceDataSet *tempr = vtkPVMetaSliceDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMetaSliceDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaSliceDataSet *op = static_cast<vtkPVMetaSliceDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVMetaSliceDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVMetaSliceDataSet::NewInstance());

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
PyvtkPVMetaSliceDataSet_PreserveInputCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveInputCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaSliceDataSet *op = static_cast<vtkPVMetaSliceDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->PreserveInputCells(temp0);
    }
    else
    {
      op->vtkPVMetaSliceDataSet::PreserveInputCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMetaSliceDataSet_SetActiveFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaSliceDataSet *op = static_cast<vtkPVMetaSliceDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->SetActiveFilter(temp0) :
      op->vtkPVMetaSliceDataSet::SetActiveFilter(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMetaSliceDataSet_SetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaSliceDataSet *op = static_cast<vtkPVMetaSliceDataSet *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->SetImplicitFunction(temp0);
    }
    else
    {
      op->vtkPVMetaSliceDataSet::SetImplicitFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMetaSliceDataSet_SetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaSliceDataSet *op = static_cast<vtkPVMetaSliceDataSet *>(vp);

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
      op->vtkPVMetaSliceDataSet::SetCutFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMetaSliceDataSet_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaSliceDataSet *op = static_cast<vtkPVMetaSliceDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfContours(temp0);
    }
    else
    {
      op->vtkPVMetaSliceDataSet::SetNumberOfContours(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMetaSliceDataSet_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaSliceDataSet *op = static_cast<vtkPVMetaSliceDataSet *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkPVMetaSliceDataSet::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMetaSliceDataSet_SetGenerateTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaSliceDataSet *op = static_cast<vtkPVMetaSliceDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTriangles(temp0);
    }
    else
    {
      op->vtkPVMetaSliceDataSet::SetGenerateTriangles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVMetaSliceDataSet_Methods[] = {
  {"IsTypeOf", PyvtkPVMetaSliceDataSet_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVMetaSliceDataSet_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVMetaSliceDataSet_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVMetaSliceDataSet\nC++: static vtkPVMetaSliceDataSet *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVMetaSliceDataSet_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVMetaSliceDataSet\nC++: vtkPVMetaSliceDataSet *NewInstance()\n\n"},
  {"PreserveInputCells", PyvtkPVMetaSliceDataSet_PreserveInputCells, METH_VARARGS,
   "V.PreserveInputCells(int)\nC++: void PreserveInputCells(int keepCellAsIs)\n\nEnable or disable the Extract Cells By Regions.\n"},
  {"SetActiveFilter", PyvtkPVMetaSliceDataSet_SetActiveFilter, METH_VARARGS,
   "V.SetActiveFilter(int) -> vtkAlgorithm\nC++: vtkAlgorithm *SetActiveFilter(int index) override;\n\nOverride it so we can change the output type of the filter\n"},
  {"SetImplicitFunction", PyvtkPVMetaSliceDataSet_SetImplicitFunction, METH_VARARGS,
   "V.SetImplicitFunction(vtkImplicitFunction)\nC++: void SetImplicitFunction(vtkImplicitFunction *func)\n\n"},
  {"SetCutFunction", PyvtkPVMetaSliceDataSet_SetCutFunction, METH_VARARGS,
   "V.SetCutFunction(vtkImplicitFunction)\nC++: void SetCutFunction(vtkImplicitFunction *func)\n\nExpose method from vtkCutter\n"},
  {"SetNumberOfContours", PyvtkPVMetaSliceDataSet_SetNumberOfContours, METH_VARARGS,
   "V.SetNumberOfContours(int)\nC++: void SetNumberOfContours(int nbContours)\n\nExpose method from vtkCutter\n"},
  {"SetValue", PyvtkPVMetaSliceDataSet_SetValue, METH_VARARGS,
   "V.SetValue(int, float)\nC++: void SetValue(int index, double value)\n\nExpose method from vtkCutter\n"},
  {"SetGenerateTriangles", PyvtkPVMetaSliceDataSet_SetGenerateTriangles, METH_VARARGS,
   "V.SetGenerateTriangles(int)\nC++: void SetGenerateTriangles(int status)\n\nExpose method from vtkCutter\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVMetaSliceDataSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPVMetaSliceDataSet", // tp_name
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
  PyvtkPVMetaSliceDataSet_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVMetaSliceDataSet_StaticNew()
{
  return vtkPVMetaSliceDataSet::New();
}

PyObject *PyvtkPVMetaSliceDataSet_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVMetaSliceDataSet_Type, PyvtkPVMetaSliceDataSet_Methods,
    "vtkPVMetaSliceDataSet",
 &PyvtkPVMetaSliceDataSet_StaticNew);

  PyTypeObject *pytype = &PyvtkPVMetaSliceDataSet_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVDataSetAlgorithmSelectorFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVMetaSliceDataSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVMetaSliceDataSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVMetaSliceDataSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

