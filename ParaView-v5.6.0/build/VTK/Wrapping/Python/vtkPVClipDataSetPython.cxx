// python wrapper for vtkPVClipDataSet
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
#include "vtkInformationVector.h"
#include "vtkPVClipDataSet.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVClipDataSet(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVClipDataSet_ClassNew(); }

#ifndef DECLARED_PyvtkTableBasedClipDataSet_ClassNew
extern "C" { PyObject *PyvtkTableBasedClipDataSet_ClassNew(); }
#define DECLARED_PyvtkTableBasedClipDataSet_ClassNew
#endif

static const char *PyvtkPVClipDataSet_Doc =
  "vtkPVClipDataSet - Clip filter\n\n"
  "Superclass: vtkTableBasedClipDataSet\n\n"
  "This is a subclass of vtkTableBasedClipDataSet that allows selection\n"
  "of input scalars.\n\n";


static PyObject *
PyvtkPVClipDataSet_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVClipDataSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVClipDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipDataSet *op = static_cast<vtkPVClipDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVClipDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVClipDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVClipDataSet *tempr = vtkPVClipDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVClipDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipDataSet *op = static_cast<vtkPVClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVClipDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVClipDataSet::NewInstance());

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
PyvtkPVClipDataSet_SetUseAMRDualClipForAMR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseAMRDualClipForAMR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipDataSet *op = static_cast<vtkPVClipDataSet *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseAMRDualClipForAMR(temp0);
    }
    else
    {
      op->vtkPVClipDataSet::SetUseAMRDualClipForAMR(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVClipDataSet_GetUseAMRDualClipForAMR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseAMRDualClipForAMR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipDataSet *op = static_cast<vtkPVClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseAMRDualClipForAMR() :
      op->vtkPVClipDataSet::GetUseAMRDualClipForAMR());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVClipDataSet_UseAMRDualClipForAMROn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAMRDualClipForAMROn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipDataSet *op = static_cast<vtkPVClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseAMRDualClipForAMROn();
    }
    else
    {
      op->vtkPVClipDataSet::UseAMRDualClipForAMROn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVClipDataSet_UseAMRDualClipForAMROff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAMRDualClipForAMROff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipDataSet *op = static_cast<vtkPVClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseAMRDualClipForAMROff();
    }
    else
    {
      op->vtkPVClipDataSet::UseAMRDualClipForAMROff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVClipDataSet_SetExactBoxClip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExactBoxClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipDataSet *op = static_cast<vtkPVClipDataSet *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExactBoxClip(temp0);
    }
    else
    {
      op->vtkPVClipDataSet::SetExactBoxClip(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVClipDataSet_GetExactBoxClip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExactBoxClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipDataSet *op = static_cast<vtkPVClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetExactBoxClip() :
      op->vtkPVClipDataSet::GetExactBoxClip());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVClipDataSet_ExactBoxClipOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExactBoxClipOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipDataSet *op = static_cast<vtkPVClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExactBoxClipOn();
    }
    else
    {
      op->vtkPVClipDataSet::ExactBoxClipOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVClipDataSet_ExactBoxClipOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExactBoxClipOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipDataSet *op = static_cast<vtkPVClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExactBoxClipOff();
    }
    else
    {
      op->vtkPVClipDataSet::ExactBoxClipOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVClipDataSet_Methods[] = {
  {"IsTypeOf", PyvtkPVClipDataSet_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVClipDataSet_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVClipDataSet_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVClipDataSet\nC++: static vtkPVClipDataSet *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVClipDataSet_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVClipDataSet\nC++: vtkPVClipDataSet *NewInstance()\n\n"},
  {"SetUseAMRDualClipForAMR", PyvtkPVClipDataSet_SetUseAMRDualClipForAMR, METH_VARARGS,
   "V.SetUseAMRDualClipForAMR(bool)\nC++: virtual void SetUseAMRDualClipForAMR(bool _arg)\n\nThis filter uses vtkAMRDualClip for clipping AMR datasets. To\ndisable that behavior, turn this flag off.\n"},
  {"GetUseAMRDualClipForAMR", PyvtkPVClipDataSet_GetUseAMRDualClipForAMR, METH_VARARGS,
   "V.GetUseAMRDualClipForAMR() -> bool\nC++: virtual bool GetUseAMRDualClipForAMR()\n\nThis filter uses vtkAMRDualClip for clipping AMR datasets. To\ndisable that behavior, turn this flag off.\n"},
  {"UseAMRDualClipForAMROn", PyvtkPVClipDataSet_UseAMRDualClipForAMROn, METH_VARARGS,
   "V.UseAMRDualClipForAMROn()\nC++: virtual void UseAMRDualClipForAMROn()\n\nThis filter uses vtkAMRDualClip for clipping AMR datasets. To\ndisable that behavior, turn this flag off.\n"},
  {"UseAMRDualClipForAMROff", PyvtkPVClipDataSet_UseAMRDualClipForAMROff, METH_VARARGS,
   "V.UseAMRDualClipForAMROff()\nC++: virtual void UseAMRDualClipForAMROff()\n\nThis filter uses vtkAMRDualClip for clipping AMR datasets. To\ndisable that behavior, turn this flag off.\n"},
  {"SetExactBoxClip", PyvtkPVClipDataSet_SetExactBoxClip, METH_VARARGS,
   "V.SetExactBoxClip(bool)\nC++: virtual void SetExactBoxClip(bool _arg)\n\nFor a vtkPVBlox implicit function we can do an exact clip of the\nexterior portion of the box.\n"},
  {"GetExactBoxClip", PyvtkPVClipDataSet_GetExactBoxClip, METH_VARARGS,
   "V.GetExactBoxClip() -> bool\nC++: virtual bool GetExactBoxClip()\n\nFor a vtkPVBlox implicit function we can do an exact clip of the\nexterior portion of the box.\n"},
  {"ExactBoxClipOn", PyvtkPVClipDataSet_ExactBoxClipOn, METH_VARARGS,
   "V.ExactBoxClipOn()\nC++: virtual void ExactBoxClipOn()\n\nFor a vtkPVBlox implicit function we can do an exact clip of the\nexterior portion of the box.\n"},
  {"ExactBoxClipOff", PyvtkPVClipDataSet_ExactBoxClipOff, METH_VARARGS,
   "V.ExactBoxClipOff()\nC++: virtual void ExactBoxClipOff()\n\nFor a vtkPVBlox implicit function we can do an exact clip of the\nexterior portion of the box.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVClipDataSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPVClipDataSet", // tp_name
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
  PyvtkPVClipDataSet_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVClipDataSet_StaticNew()
{
  return vtkPVClipDataSet::New();
}

PyObject *PyvtkPVClipDataSet_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVClipDataSet_Type, PyvtkPVClipDataSet_Methods,
    "vtkPVClipDataSet",
 &PyvtkPVClipDataSet_StaticNew);

  PyTypeObject *pytype = &PyvtkPVClipDataSet_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTableBasedClipDataSet_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVClipDataSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVClipDataSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVClipDataSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

