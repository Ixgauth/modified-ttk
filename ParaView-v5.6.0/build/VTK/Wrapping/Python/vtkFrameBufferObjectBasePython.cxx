// python wrapper for vtkFrameBufferObjectBase
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
#include "vtkFrameBufferObjectBase.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFrameBufferObjectBase(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFrameBufferObjectBase_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkFrameBufferObjectBase_Doc =
  "vtkFrameBufferObjectBase - abstract interface to OpenGL FBOs\n\n"
  "Superclass: vtkObject\n\n"
  "API for classes that encapsulate an OpenGL Frame Buffer Object.\n\n";


static PyObject *
PyvtkFrameBufferObjectBase_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFrameBufferObjectBase::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrameBufferObjectBase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObjectBase *op = static_cast<vtkFrameBufferObjectBase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFrameBufferObjectBase::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrameBufferObjectBase_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFrameBufferObjectBase *tempr = vtkFrameBufferObjectBase::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrameBufferObjectBase_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObjectBase *op = static_cast<vtkFrameBufferObjectBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFrameBufferObjectBase *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFrameBufferObjectBase::NewInstance());

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
PyvtkFrameBufferObjectBase_GetLastSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObjectBase *op = static_cast<vtkFrameBufferObjectBase *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int *tempr = op->GetLastSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFrameBufferObjectBase_GetLastSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObjectBase *op = static_cast<vtkFrameBufferObjectBase *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->GetLastSize(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFrameBufferObjectBase_GetLastSize_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObjectBase *op = static_cast<vtkFrameBufferObjectBase *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetLastSize(temp0);

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
PyvtkFrameBufferObjectBase_GetLastSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkFrameBufferObjectBase_GetLastSize_s1(self, args);
    case 2:
      return PyvtkFrameBufferObjectBase_GetLastSize_s2(self, args);
    case 1:
      return PyvtkFrameBufferObjectBase_GetLastSize_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLastSize");
  return nullptr;
}


static PyMethodDef PyvtkFrameBufferObjectBase_Methods[] = {
  {"IsTypeOf", PyvtkFrameBufferObjectBase_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFrameBufferObjectBase_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFrameBufferObjectBase_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkFrameBufferObjectBase\nC++: static vtkFrameBufferObjectBase *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFrameBufferObjectBase_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFrameBufferObjectBase\nC++: vtkFrameBufferObjectBase *NewInstance()\n\n"},
  {"GetLastSize", PyvtkFrameBufferObjectBase_GetLastSize, METH_VARARGS,
   "V.GetLastSize() -> (int, ...)\nC++: virtual int *GetLastSize()\nV.GetLastSize(int, int)\nC++: virtual void GetLastSize(int &_arg1, int &_arg2)\nV.GetLastSize([int, int])\nC++: virtual void GetLastSize(int _arg[2])\n\nDimensions in pixels of the framebuffer.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFrameBufferObjectBase_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkFrameBufferObjectBase", // tp_name
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
  PyvtkFrameBufferObjectBase_Doc, // tp_doc
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

PyObject *PyvtkFrameBufferObjectBase_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFrameBufferObjectBase_Type, PyvtkFrameBufferObjectBase_Methods,
    "vtkFrameBufferObjectBase",
 nullptr);

  PyTypeObject *pytype = &PyvtkFrameBufferObjectBase_Type;

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

void PyVTKAddFile_vtkFrameBufferObjectBase(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFrameBufferObjectBase_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFrameBufferObjectBase", o) != 0)
  {
    Py_DECREF(o);
  }

}

