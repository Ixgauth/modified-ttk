// python wrapper for vtkCompositer
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
#include "vtkCompositer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCompositer_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCompositer_Doc =
  "vtkCompositer - Super class for composite algorthms.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkCompositer operates in multiple processes.  Each compositer has a\n"
  "render window.  They use vtkMultiProcessControllers to communicate\n"
  "the color and depth buffer to process 0's render window. It will not\n"
  "handle transparency well.\n\n"
  "@sa\n"
  "vtkCompositeManager.\n\n";


static PyObject *
PyvtkCompositer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositer *op = static_cast<vtkCompositer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositer *tempr = vtkCompositer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositer *op = static_cast<vtkCompositer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositer::NewInstance());

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
PyvtkCompositer_CompositeBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompositeBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositer *op = static_cast<vtkCompositer *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkFloatArray *temp1 = nullptr;
  vtkDataArray *temp2 = nullptr;
  vtkFloatArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkFloatArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetVTKObject(temp3, "vtkFloatArray"))
  {
    if (ap.IsBound())
    {
      op->CompositeBuffer(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkCompositer::CompositeBuffer(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositer_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositer *op = static_cast<vtkCompositer *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkCompositer::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositer_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositer *op = static_cast<vtkCompositer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkCompositer::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositer_SetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositer *op = static_cast<vtkCompositer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfProcesses(temp0);
    }
    else
    {
      op->vtkCompositer::SetNumberOfProcesses(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositer_GetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositer *op = static_cast<vtkCompositer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfProcesses() :
      op->vtkCompositer::GetNumberOfProcesses());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositer_DeleteArray(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DeleteArray");

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    vtkCompositer::DeleteArray(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositer_ResizeFloatArray(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ResizeFloatArray");

  vtkFloatArray *temp0 = nullptr;
  int temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkFloatArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkCompositer::ResizeFloatArray(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositer_ResizeUnsignedCharArray(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ResizeUnsignedCharArray");

  vtkUnsignedCharArray *temp0 = nullptr;
  int temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkCompositer::ResizeUnsignedCharArray(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositer_Methods[] = {
  {"IsTypeOf", PyvtkCompositer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCompositer\nC++: static vtkCompositer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCompositer\nC++: vtkCompositer *NewInstance()\n\n"},
  {"CompositeBuffer", PyvtkCompositer_CompositeBuffer, METH_VARARGS,
   "V.CompositeBuffer(vtkDataArray, vtkFloatArray, vtkDataArray,\n    vtkFloatArray)\nC++: virtual void CompositeBuffer(vtkDataArray *pBuf,\n    vtkFloatArray *zBuf, vtkDataArray *pTmp, vtkFloatArray *zTmp)\n\nThis method gets called on every process.  The final image gets\nput into pBuf and zBuf.\n"},
  {"SetController", PyvtkCompositer_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nAccess to the controller.\n"},
  {"GetController", PyvtkCompositer_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nAccess to the controller.\n"},
  {"SetNumberOfProcesses", PyvtkCompositer_SetNumberOfProcesses, METH_VARARGS,
   "V.SetNumberOfProcesses(int)\nC++: virtual void SetNumberOfProcesses(int _arg)\n\nA hack to get a sub world until I can get communicators working.\n"},
  {"GetNumberOfProcesses", PyvtkCompositer_GetNumberOfProcesses, METH_VARARGS,
   "V.GetNumberOfProcesses() -> int\nC++: virtual int GetNumberOfProcesses()\n\nA hack to get a sub world until I can get communicators working.\n"},
  {"DeleteArray", PyvtkCompositer_DeleteArray, METH_VARARGS,
   "V.DeleteArray(vtkDataArray)\nC++: static void DeleteArray(vtkDataArray *da)\n\nMethods that allocate and delete memory with special MPIPro\ncalls.\n"},
  {"ResizeFloatArray", PyvtkCompositer_ResizeFloatArray, METH_VARARGS,
   "V.ResizeFloatArray(vtkFloatArray, int, int)\nC++: static void ResizeFloatArray(vtkFloatArray *fa, int numComp,\n    vtkIdType size)\n\nMethods that allocate and delete memory with special MPIPro\ncalls.\n"},
  {"ResizeUnsignedCharArray", PyvtkCompositer_ResizeUnsignedCharArray, METH_VARARGS,
   "V.ResizeUnsignedCharArray(vtkUnsignedCharArray, int, int)\nC++: static void ResizeUnsignedCharArray(\n    vtkUnsignedCharArray *uca, int numComp, vtkIdType size)\n\nMethods that allocate and delete memory with special MPIPro\ncalls.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCompositer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingParallelPython.vtkCompositer", // tp_name
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
  PyvtkCompositer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositer_StaticNew()
{
  return vtkCompositer::New();
}

PyObject *PyvtkCompositer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCompositer_Type, PyvtkCompositer_Methods,
    "vtkCompositer",
 &PyvtkCompositer_StaticNew);

  PyTypeObject *pytype = &PyvtkCompositer_Type;

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

void PyVTKAddFile_vtkCompositer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositer", o) != 0)
  {
    Py_DECREF(o);
  }

}

