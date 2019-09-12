// python wrapper for vtkStructuredGridClip
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
#include "vtkStructuredGridClip.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStructuredGridClip(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStructuredGridClip_ClassNew(); }

#ifndef DECLARED_PyvtkStructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkStructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkStructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkStructuredGridClip_Doc =
  "vtkStructuredGridClip - Reduces the image extent of the input.\n\n"
  "Superclass: vtkStructuredGridAlgorithm\n\n"
  "vtkStructuredGridClip  will make an image smaller.  The output must\n"
  "have an image extent which is the subset of the input.  The filter\n"
  "has two modes of operation: 1: By default, the data is not copied in\n"
  "this filter. Only the whole extent is modified. 2: If ClipDataOn is\n"
  "set, then you will get no more that the clipped extent.\n\n";


static PyObject *
PyvtkStructuredGridClip_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStructuredGridClip::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridClip_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridClip *op = static_cast<vtkStructuredGridClip *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredGridClip::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridClip_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStructuredGridClip *tempr = vtkStructuredGridClip::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridClip_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridClip *op = static_cast<vtkStructuredGridClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredGridClip *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredGridClip::NewInstance());

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
PyvtkStructuredGridClip_SetOutputWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridClip *op = static_cast<vtkStructuredGridClip *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkInformation")))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetOutputWholeExtent(temp0, temp1);
    }
    else
    {
      op->vtkStructuredGridClip::SetOutputWholeExtent(temp0, temp1);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredGridClip_SetOutputWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridClip *op = static_cast<vtkStructuredGridClip *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetOutputWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkStructuredGridClip::SetOutputWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredGridClip_SetOutputWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return PyvtkStructuredGridClip_SetOutputWholeExtent_s1(self, args);
    case 6:
      return PyvtkStructuredGridClip_SetOutputWholeExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputWholeExtent");
  return nullptr;
}



static PyObject *
PyvtkStructuredGridClip_GetOutputWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridClip *op = static_cast<vtkStructuredGridClip *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetOutputWholeExtent(temp0);
    }
    else
    {
      op->vtkStructuredGridClip::GetOutputWholeExtent(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredGridClip_GetOutputWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridClip *op = static_cast<vtkStructuredGridClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetOutputWholeExtent() :
      op->vtkStructuredGridClip::GetOutputWholeExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredGridClip_GetOutputWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkStructuredGridClip_GetOutputWholeExtent_s1(self, args);
    case 0:
      return PyvtkStructuredGridClip_GetOutputWholeExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutputWholeExtent");
  return nullptr;
}



static PyObject *
PyvtkStructuredGridClip_ResetOutputWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridClip *op = static_cast<vtkStructuredGridClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetOutputWholeExtent();
    }
    else
    {
      op->vtkStructuredGridClip::ResetOutputWholeExtent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridClip_SetClipData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridClip *op = static_cast<vtkStructuredGridClip *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClipData(temp0);
    }
    else
    {
      op->vtkStructuredGridClip::SetClipData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridClip_GetClipData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridClip *op = static_cast<vtkStructuredGridClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClipData() :
      op->vtkStructuredGridClip::GetClipData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridClip_ClipDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridClip *op = static_cast<vtkStructuredGridClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClipDataOn();
    }
    else
    {
      op->vtkStructuredGridClip::ClipDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridClip_ClipDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridClip *op = static_cast<vtkStructuredGridClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClipDataOff();
    }
    else
    {
      op->vtkStructuredGridClip::ClipDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkStructuredGridClip_Methods[] = {
  {"IsTypeOf", PyvtkStructuredGridClip_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStructuredGridClip_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStructuredGridClip_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkStructuredGridClip\nC++: static vtkStructuredGridClip *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStructuredGridClip_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStructuredGridClip\nC++: vtkStructuredGridClip *NewInstance()\n\n"},
  {"SetOutputWholeExtent", PyvtkStructuredGridClip_SetOutputWholeExtent, METH_VARARGS,
   "V.SetOutputWholeExtent([int, int, int, int, int, int],\n    vtkInformation)\nC++: void SetOutputWholeExtent(int extent[6],\n    vtkInformation *outInfo=nullptr)\nV.SetOutputWholeExtent(int, int, int, int, int, int)\nC++: void SetOutputWholeExtent(int minX, int maxX, int minY,\n    int maxY, int minZ, int maxZ)\n\nThe whole extent of the output has to be set explicitly.\n"},
  {"GetOutputWholeExtent", PyvtkStructuredGridClip_GetOutputWholeExtent, METH_VARARGS,
   "V.GetOutputWholeExtent([int, int, int, int, int, int])\nC++: void GetOutputWholeExtent(int extent[6])\nV.GetOutputWholeExtent() -> (int, ...)\nC++: int *GetOutputWholeExtent()\n\nThe whole extent of the output has to be set explicitly.\n"},
  {"ResetOutputWholeExtent", PyvtkStructuredGridClip_ResetOutputWholeExtent, METH_VARARGS,
   "V.ResetOutputWholeExtent()\nC++: void ResetOutputWholeExtent()\n\n"},
  {"SetClipData", PyvtkStructuredGridClip_SetClipData, METH_VARARGS,
   "V.SetClipData(int)\nC++: virtual void SetClipData(vtkTypeBool _arg)\n\nBy default, ClipData is off, and only the WholeExtent is\nmodified. the data's extent may actually be larger.  When this\nflag is on, the data extent will be no more than the\nOutputWholeExtent.\n"},
  {"GetClipData", PyvtkStructuredGridClip_GetClipData, METH_VARARGS,
   "V.GetClipData() -> int\nC++: virtual vtkTypeBool GetClipData()\n\nBy default, ClipData is off, and only the WholeExtent is\nmodified. the data's extent may actually be larger.  When this\nflag is on, the data extent will be no more than the\nOutputWholeExtent.\n"},
  {"ClipDataOn", PyvtkStructuredGridClip_ClipDataOn, METH_VARARGS,
   "V.ClipDataOn()\nC++: virtual void ClipDataOn()\n\nBy default, ClipData is off, and only the WholeExtent is\nmodified. the data's extent may actually be larger.  When this\nflag is on, the data extent will be no more than the\nOutputWholeExtent.\n"},
  {"ClipDataOff", PyvtkStructuredGridClip_ClipDataOff, METH_VARARGS,
   "V.ClipDataOff()\nC++: virtual void ClipDataOff()\n\nBy default, ClipData is off, and only the WholeExtent is\nmodified. the data's extent may actually be larger.  When this\nflag is on, the data extent will be no more than the\nOutputWholeExtent.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStructuredGridClip_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkStructuredGridClip", // tp_name
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
  PyvtkStructuredGridClip_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStructuredGridClip_StaticNew()
{
  return vtkStructuredGridClip::New();
}

PyObject *PyvtkStructuredGridClip_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStructuredGridClip_Type, PyvtkStructuredGridClip_Methods,
    "vtkStructuredGridClip",
 &PyvtkStructuredGridClip_StaticNew);

  PyTypeObject *pytype = &PyvtkStructuredGridClip_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkStructuredGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStructuredGridClip(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStructuredGridClip_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStructuredGridClip", o) != 0)
  {
    Py_DECREF(o);
  }

}

