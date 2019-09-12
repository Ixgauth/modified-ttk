// python wrapper for vtkPassThrough
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
#include "vtkPassThrough.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPassThrough(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPassThrough_ClassNew(); }

#ifndef DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPassInputTypeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
#endif

static const char *PyvtkPassThrough_Doc =
  "vtkPassThrough - Shallow copies the input into the output\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "The output type is always the same as the input object type.\n\n";


static PyObject *
PyvtkPassThrough_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPassThrough::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassThrough_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThrough *op = static_cast<vtkPassThrough *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPassThrough::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassThrough_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPassThrough *tempr = vtkPassThrough::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassThrough_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThrough *op = static_cast<vtkPassThrough *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPassThrough *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPassThrough::NewInstance());

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
PyvtkPassThrough_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThrough *op = static_cast<vtkPassThrough *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkPassThrough::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassThrough_SetDeepCopyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeepCopyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThrough *op = static_cast<vtkPassThrough *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeepCopyInput(temp0);
    }
    else
    {
      op->vtkPassThrough::SetDeepCopyInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassThrough_GetDeepCopyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeepCopyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThrough *op = static_cast<vtkPassThrough *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDeepCopyInput() :
      op->vtkPassThrough::GetDeepCopyInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassThrough_DeepCopyInputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopyInputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThrough *op = static_cast<vtkPassThrough *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeepCopyInputOn();
    }
    else
    {
      op->vtkPassThrough::DeepCopyInputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassThrough_DeepCopyInputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopyInputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThrough *op = static_cast<vtkPassThrough *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeepCopyInputOff();
    }
    else
    {
      op->vtkPassThrough::DeepCopyInputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassThrough_SetAllowNullInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowNullInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThrough *op = static_cast<vtkPassThrough *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllowNullInput(temp0);
    }
    else
    {
      op->vtkPassThrough::SetAllowNullInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassThrough_GetAllowNullInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowNullInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThrough *op = static_cast<vtkPassThrough *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAllowNullInput() :
      op->vtkPassThrough::GetAllowNullInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassThrough_AllowNullInputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowNullInputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThrough *op = static_cast<vtkPassThrough *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowNullInputOn();
    }
    else
    {
      op->vtkPassThrough::AllowNullInputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassThrough_AllowNullInputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowNullInputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThrough *op = static_cast<vtkPassThrough *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowNullInputOff();
    }
    else
    {
      op->vtkPassThrough::AllowNullInputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPassThrough_Methods[] = {
  {"IsTypeOf", PyvtkPassThrough_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPassThrough_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPassThrough_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPassThrough\nC++: static vtkPassThrough *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPassThrough_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPassThrough\nC++: vtkPassThrough *NewInstance()\n\n"},
  {"FillInputPortInformation", PyvtkPassThrough_FillInputPortInformation, METH_VARARGS,
   "V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nSpecify the first input port as optional\n"},
  {"SetDeepCopyInput", PyvtkPassThrough_SetDeepCopyInput, METH_VARARGS,
   "V.SetDeepCopyInput(int)\nC++: virtual void SetDeepCopyInput(vtkTypeBool _arg)\n\nWhether or not to deep copy the input. This can be useful if you\nwant to create a copy of a data object. You can then disconnect\nthis filter's input connections and it will act like a source.\nDefaults to OFF.\n"},
  {"GetDeepCopyInput", PyvtkPassThrough_GetDeepCopyInput, METH_VARARGS,
   "V.GetDeepCopyInput() -> int\nC++: virtual vtkTypeBool GetDeepCopyInput()\n\nWhether or not to deep copy the input. This can be useful if you\nwant to create a copy of a data object. You can then disconnect\nthis filter's input connections and it will act like a source.\nDefaults to OFF.\n"},
  {"DeepCopyInputOn", PyvtkPassThrough_DeepCopyInputOn, METH_VARARGS,
   "V.DeepCopyInputOn()\nC++: virtual void DeepCopyInputOn()\n\nWhether or not to deep copy the input. This can be useful if you\nwant to create a copy of a data object. You can then disconnect\nthis filter's input connections and it will act like a source.\nDefaults to OFF.\n"},
  {"DeepCopyInputOff", PyvtkPassThrough_DeepCopyInputOff, METH_VARARGS,
   "V.DeepCopyInputOff()\nC++: virtual void DeepCopyInputOff()\n\nWhether or not to deep copy the input. This can be useful if you\nwant to create a copy of a data object. You can then disconnect\nthis filter's input connections and it will act like a source.\nDefaults to OFF.\n"},
  {"SetAllowNullInput", PyvtkPassThrough_SetAllowNullInput, METH_VARARGS,
   "V.SetAllowNullInput(bool)\nC++: virtual void SetAllowNullInput(bool _arg)\n\n"},
  {"GetAllowNullInput", PyvtkPassThrough_GetAllowNullInput, METH_VARARGS,
   "V.GetAllowNullInput() -> bool\nC++: virtual bool GetAllowNullInput()\n\n"},
  {"AllowNullInputOn", PyvtkPassThrough_AllowNullInputOn, METH_VARARGS,
   "V.AllowNullInputOn()\nC++: virtual void AllowNullInputOn()\n\n"},
  {"AllowNullInputOff", PyvtkPassThrough_AllowNullInputOff, METH_VARARGS,
   "V.AllowNullInputOff()\nC++: virtual void AllowNullInputOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPassThrough_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkPassThrough", // tp_name
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
  PyvtkPassThrough_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPassThrough_StaticNew()
{
  return vtkPassThrough::New();
}

PyObject *PyvtkPassThrough_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPassThrough_Type, PyvtkPassThrough_Methods,
    "vtkPassThrough",
 &PyvtkPassThrough_StaticNew);

  PyTypeObject *pytype = &PyvtkPassThrough_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPassInputTypeAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPassThrough(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPassThrough_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPassThrough", o) != 0)
  {
    Py_DECREF(o);
  }

}

