// python wrapper for vtkImageToAMR
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
#include "vtkImageToAMR.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageToAMR(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageToAMR_ClassNew(); }

#ifndef DECLARED_PyvtkOverlappingAMRAlgorithm_ClassNew
extern "C" { PyObject *PyvtkOverlappingAMRAlgorithm_ClassNew(); }
#define DECLARED_PyvtkOverlappingAMRAlgorithm_ClassNew
#endif

static const char *PyvtkImageToAMR_Doc =
  "vtkImageToAMR - filter to convert any vtkImageData to a\nvtkOverlappingAMR.\n\n"
  "Superclass: vtkOverlappingAMRAlgorithm\n\n"
  "vtkImageToAMR is a simple filter that converts any vtkImageData to a\n"
  "vtkOverlappingAMR dataset. The input vtkImageData is treated as the\n"
  "highest refinement available for the highest level. The lower\n"
  "refinements and the number of blocks is controlled properties\n"
  "specified on the filter.\n\n";


static PyObject *
PyvtkImageToAMR_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageToAMR::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToAMR_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageToAMR::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToAMR_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageToAMR *tempr = vtkImageToAMR::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToAMR_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageToAMR *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageToAMR::NewInstance());

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
PyvtkImageToAMR_SetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLevels(temp0);
    }
    else
    {
      op->vtkImageToAMR::SetNumberOfLevels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageToAMR_GetNumberOfLevelsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevelsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLevelsMinValue() :
      op->vtkImageToAMR::GetNumberOfLevelsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToAMR_GetNumberOfLevelsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevelsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLevelsMaxValue() :
      op->vtkImageToAMR::GetNumberOfLevelsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToAMR_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLevels() :
      op->vtkImageToAMR::GetNumberOfLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToAMR_SetRefinementRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRefinementRatio(temp0);
    }
    else
    {
      op->vtkImageToAMR::SetRefinementRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageToAMR_GetRefinementRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRefinementRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRefinementRatioMinValue() :
      op->vtkImageToAMR::GetRefinementRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToAMR_GetRefinementRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRefinementRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRefinementRatioMaxValue() :
      op->vtkImageToAMR::GetRefinementRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToAMR_GetRefinementRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRefinementRatio() :
      op->vtkImageToAMR::GetRefinementRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToAMR_SetMaximumNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfBlocks(temp0);
    }
    else
    {
      op->vtkImageToAMR::SetMaximumNumberOfBlocks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageToAMR_GetMaximumNumberOfBlocksMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfBlocksMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfBlocksMinValue() :
      op->vtkImageToAMR::GetMaximumNumberOfBlocksMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToAMR_GetMaximumNumberOfBlocksMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfBlocksMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfBlocksMaxValue() :
      op->vtkImageToAMR::GetMaximumNumberOfBlocksMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToAMR_GetMaximumNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfBlocks() :
      op->vtkImageToAMR::GetMaximumNumberOfBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageToAMR_Methods[] = {
  {"IsTypeOf", PyvtkImageToAMR_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageToAMR_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageToAMR_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageToAMR\nC++: static vtkImageToAMR *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageToAMR_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageToAMR\nC++: vtkImageToAMR *NewInstance()\n\n"},
  {"SetNumberOfLevels", PyvtkImageToAMR_SetNumberOfLevels, METH_VARARGS,
   "V.SetNumberOfLevels(int)\nC++: virtual void SetNumberOfLevels(int _arg)\n\nSet the maximum number of levels in the generated\nOverlapping-AMR.\n"},
  {"GetNumberOfLevelsMinValue", PyvtkImageToAMR_GetNumberOfLevelsMinValue, METH_VARARGS,
   "V.GetNumberOfLevelsMinValue() -> int\nC++: virtual int GetNumberOfLevelsMinValue()\n\nSet the maximum number of levels in the generated\nOverlapping-AMR.\n"},
  {"GetNumberOfLevelsMaxValue", PyvtkImageToAMR_GetNumberOfLevelsMaxValue, METH_VARARGS,
   "V.GetNumberOfLevelsMaxValue() -> int\nC++: virtual int GetNumberOfLevelsMaxValue()\n\nSet the maximum number of levels in the generated\nOverlapping-AMR.\n"},
  {"GetNumberOfLevels", PyvtkImageToAMR_GetNumberOfLevels, METH_VARARGS,
   "V.GetNumberOfLevels() -> int\nC++: virtual int GetNumberOfLevels()\n\nSet the maximum number of levels in the generated\nOverlapping-AMR.\n"},
  {"SetRefinementRatio", PyvtkImageToAMR_SetRefinementRatio, METH_VARARGS,
   "V.SetRefinementRatio(int)\nC++: virtual void SetRefinementRatio(int _arg)\n\nSet the refinement ratio for levels. This refinement ratio is\nused for all levels.\n"},
  {"GetRefinementRatioMinValue", PyvtkImageToAMR_GetRefinementRatioMinValue, METH_VARARGS,
   "V.GetRefinementRatioMinValue() -> int\nC++: virtual int GetRefinementRatioMinValue()\n\nSet the refinement ratio for levels. This refinement ratio is\nused for all levels.\n"},
  {"GetRefinementRatioMaxValue", PyvtkImageToAMR_GetRefinementRatioMaxValue, METH_VARARGS,
   "V.GetRefinementRatioMaxValue() -> int\nC++: virtual int GetRefinementRatioMaxValue()\n\nSet the refinement ratio for levels. This refinement ratio is\nused for all levels.\n"},
  {"GetRefinementRatio", PyvtkImageToAMR_GetRefinementRatio, METH_VARARGS,
   "V.GetRefinementRatio() -> int\nC++: virtual int GetRefinementRatio()\n\nSet the refinement ratio for levels. This refinement ratio is\nused for all levels.\n"},
  {"SetMaximumNumberOfBlocks", PyvtkImageToAMR_SetMaximumNumberOfBlocks, METH_VARARGS,
   "V.SetMaximumNumberOfBlocks(int)\nC++: virtual void SetMaximumNumberOfBlocks(int _arg)\n\nSet the maximum number of blocks in the output\n"},
  {"GetMaximumNumberOfBlocksMinValue", PyvtkImageToAMR_GetMaximumNumberOfBlocksMinValue, METH_VARARGS,
   "V.GetMaximumNumberOfBlocksMinValue() -> int\nC++: virtual int GetMaximumNumberOfBlocksMinValue()\n\nSet the maximum number of blocks in the output\n"},
  {"GetMaximumNumberOfBlocksMaxValue", PyvtkImageToAMR_GetMaximumNumberOfBlocksMaxValue, METH_VARARGS,
   "V.GetMaximumNumberOfBlocksMaxValue() -> int\nC++: virtual int GetMaximumNumberOfBlocksMaxValue()\n\nSet the maximum number of blocks in the output\n"},
  {"GetMaximumNumberOfBlocks", PyvtkImageToAMR_GetMaximumNumberOfBlocks, METH_VARARGS,
   "V.GetMaximumNumberOfBlocks() -> int\nC++: virtual int GetMaximumNumberOfBlocks()\n\nSet the maximum number of blocks in the output\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageToAMR_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersAMRPython.vtkImageToAMR", // tp_name
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
  PyvtkImageToAMR_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageToAMR_StaticNew()
{
  return vtkImageToAMR::New();
}

PyObject *PyvtkImageToAMR_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageToAMR_Type, PyvtkImageToAMR_Methods,
    "vtkImageToAMR",
 &PyvtkImageToAMR_StaticNew);

  PyTypeObject *pytype = &PyvtkImageToAMR_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkOverlappingAMRAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageToAMR(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageToAMR_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageToAMR", o) != 0)
  {
    Py_DECREF(o);
  }

}

