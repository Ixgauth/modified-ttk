// python wrapper for vtkGPUInfo
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
#include "vtkGPUInfo.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGPUInfo(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGPUInfo_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkGPUInfo_Doc =
  "vtkGPUInfo - Stores GPU VRAM information.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkGPUInfo stores information about GPU Video RAM. An host can have\n"
  "several GPUs. The values are set by vtkGPUInfoList.\n"
  "@sa\n"
  "vtkGPUInfoList vtkDirectXGPUInfoList vtkCoreGraphicsGPUInfoList\n\n";


static PyObject *
PyvtkGPUInfo_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGPUInfo::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfo_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGPUInfo::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfo_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGPUInfo *tempr = vtkGPUInfo::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfo_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGPUInfo *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGPUInfo::NewInstance());

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
PyvtkGPUInfo_SetDedicatedVideoMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDedicatedVideoMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDedicatedVideoMemory(temp0);
    }
    else
    {
      op->vtkGPUInfo::SetDedicatedVideoMemory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfo_GetDedicatedVideoMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDedicatedVideoMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetDedicatedVideoMemory() :
      op->vtkGPUInfo::GetDedicatedVideoMemory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfo_SetDedicatedSystemMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDedicatedSystemMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDedicatedSystemMemory(temp0);
    }
    else
    {
      op->vtkGPUInfo::SetDedicatedSystemMemory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfo_GetDedicatedSystemMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDedicatedSystemMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetDedicatedSystemMemory() :
      op->vtkGPUInfo::GetDedicatedSystemMemory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfo_SetSharedSystemMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSharedSystemMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSharedSystemMemory(temp0);
    }
    else
    {
      op->vtkGPUInfo::SetSharedSystemMemory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfo_GetSharedSystemMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSharedSystemMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetSharedSystemMemory() :
      op->vtkGPUInfo::GetSharedSystemMemory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGPUInfo_Methods[] = {
  {"IsTypeOf", PyvtkGPUInfo_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGPUInfo_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGPUInfo_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGPUInfo\nC++: static vtkGPUInfo *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGPUInfo_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGPUInfo\nC++: vtkGPUInfo *NewInstance()\n\n"},
  {"SetDedicatedVideoMemory", PyvtkGPUInfo_SetDedicatedVideoMemory, METH_VARARGS,
   "V.SetDedicatedVideoMemory(int)\nC++: virtual void SetDedicatedVideoMemory(vtkTypeUInt64 _arg)\n\nSet/Get dedicated video memory in bytes. Initial value is 0.\nUsually the fastest one. If it is not 0, it should be taken into\naccount first and DedicatedSystemMemory or SharedSystemMemory\nshould be ignored.\n"},
  {"GetDedicatedVideoMemory", PyvtkGPUInfo_GetDedicatedVideoMemory, METH_VARARGS,
   "V.GetDedicatedVideoMemory() -> int\nC++: virtual vtkTypeUInt64 GetDedicatedVideoMemory()\n\nSet/Get dedicated video memory in bytes. Initial value is 0.\nUsually the fastest one. If it is not 0, it should be taken into\naccount first and DedicatedSystemMemory or SharedSystemMemory\nshould be ignored.\n"},
  {"SetDedicatedSystemMemory", PyvtkGPUInfo_SetDedicatedSystemMemory, METH_VARARGS,
   "V.SetDedicatedSystemMemory(int)\nC++: virtual void SetDedicatedSystemMemory(vtkTypeUInt64 _arg)\n\nSet/Get dedicated system memory in bytes. Initial value is 0.\nThis is slow memory. If it is not 0, this value should be taken\ninto account only if there is no DedicatedVideoMemory and\nSharedSystemMemory should be ignored.\n"},
  {"GetDedicatedSystemMemory", PyvtkGPUInfo_GetDedicatedSystemMemory, METH_VARARGS,
   "V.GetDedicatedSystemMemory() -> int\nC++: virtual vtkTypeUInt64 GetDedicatedSystemMemory()\n\nSet/Get dedicated system memory in bytes. Initial value is 0.\nThis is slow memory. If it is not 0, this value should be taken\ninto account only if there is no DedicatedVideoMemory and\nSharedSystemMemory should be ignored.\n"},
  {"SetSharedSystemMemory", PyvtkGPUInfo_SetSharedSystemMemory, METH_VARARGS,
   "V.SetSharedSystemMemory(int)\nC++: virtual void SetSharedSystemMemory(vtkTypeUInt64 _arg)\n\nSet/Get shared system memory in bytes. Initial value is 0.\nSlowest memory. This value should be taken into account only if\nthere is neither DedicatedVideoMemory nor DedicatedSystemMemory.\n"},
  {"GetSharedSystemMemory", PyvtkGPUInfo_GetSharedSystemMemory, METH_VARARGS,
   "V.GetSharedSystemMemory() -> int\nC++: virtual vtkTypeUInt64 GetSharedSystemMemory()\n\nSet/Get shared system memory in bytes. Initial value is 0.\nSlowest memory. This value should be taken into account only if\nthere is neither DedicatedVideoMemory nor DedicatedSystemMemory.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGPUInfo_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkGPUInfo", // tp_name
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
  PyvtkGPUInfo_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGPUInfo_StaticNew()
{
  return vtkGPUInfo::New();
}

PyObject *PyvtkGPUInfo_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGPUInfo_Type, PyvtkGPUInfo_Methods,
    "vtkGPUInfo",
 &PyvtkGPUInfo_StaticNew);

  PyTypeObject *pytype = &PyvtkGPUInfo_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGPUInfo(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGPUInfo_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGPUInfo", o) != 0)
  {
    Py_DECREF(o);
  }

}

