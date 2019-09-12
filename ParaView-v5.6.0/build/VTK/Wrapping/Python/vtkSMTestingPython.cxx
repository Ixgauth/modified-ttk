// python wrapper for vtkSMTesting
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
#include "vtkSMTesting.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMTesting(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMTesting_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMTesting_Doc =
  "vtkSMTesting - vtkTesting adaptor for Server Manager.\n\n"
  "Superclass: vtkSMObject\n\n"
  ".DESCRIPTION This provides helper methods to use view proxy for\n"
  "testing. This is also required for python testing, since when SM is\n"
  "python wrapped, VTK need not by python wrapped, hence we cannot use\n"
  "vtkTesting in python testing.\n\n";


static PyObject *
PyvtkSMTesting_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMTesting::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTesting_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTesting *op = static_cast<vtkSMTesting *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMTesting::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTesting_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMTesting *tempr = vtkSMTesting::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTesting_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTesting *op = static_cast<vtkSMTesting *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMTesting *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMTesting::NewInstance());

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
PyvtkSMTesting_SetViewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTesting *op = static_cast<vtkSMTesting *>(vp);

  vtkSMViewProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
  {
    if (ap.IsBound())
    {
      op->SetViewProxy(temp0);
    }
    else
    {
      op->vtkSMTesting::SetViewProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMTesting_SetRenderViewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTesting *op = static_cast<vtkSMTesting *>(vp);

  vtkSMViewProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
  {
    if (ap.IsBound())
    {
      op->SetRenderViewProxy(temp0);
    }
    else
    {
      op->vtkSMTesting::SetRenderViewProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMTesting_AddArgument(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArgument");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTesting *op = static_cast<vtkSMTesting *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddArgument(temp0);
    }
    else
    {
      op->vtkSMTesting::AddArgument(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMTesting_RegressionTest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegressionTest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTesting *op = static_cast<vtkSMTesting *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->RegressionTest(temp0) :
      op->vtkSMTesting::RegressionTest(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMTesting_Methods[] = {
  {"IsTypeOf", PyvtkSMTesting_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMTesting_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMTesting_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMTesting\nC++: static vtkSMTesting *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMTesting_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMTesting\nC++: vtkSMTesting *NewInstance()\n\n"},
  {"SetViewProxy", PyvtkSMTesting_SetViewProxy, METH_VARARGS,
   "V.SetViewProxy(vtkSMViewProxy)\nC++: void SetViewProxy(vtkSMViewProxy *view)\n\nSet/get the render module proxy.\n"},
  {"SetRenderViewProxy", PyvtkSMTesting_SetRenderViewProxy, METH_VARARGS,
   "V.SetRenderViewProxy(vtkSMViewProxy)\nC++: void SetRenderViewProxy(vtkSMViewProxy *proxy)\n\nAPI for backwards compatibility. Simply calls SetViewProxy(..).\n"},
  {"AddArgument", PyvtkSMTesting_AddArgument, METH_VARARGS,
   "V.AddArgument(string)\nC++: virtual void AddArgument(const char *arg)\n\nAdd argument\n"},
  {"RegressionTest", PyvtkSMTesting_RegressionTest, METH_VARARGS,
   "V.RegressionTest(float) -> int\nC++: virtual int RegressionTest(float thresh)\n\nPerform the actual test.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMTesting_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerDefaultPython.vtkSMTesting", // tp_name
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
  PyvtkSMTesting_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMTesting_StaticNew()
{
  return vtkSMTesting::New();
}

PyObject *PyvtkSMTesting_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMTesting_Type, PyvtkSMTesting_Methods,
    "vtkSMTesting",
 &PyvtkSMTesting_StaticNew);

  PyTypeObject *pytype = &PyvtkSMTesting_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMTesting(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMTesting_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMTesting", o) != 0)
  {
    Py_DECREF(o);
  }

}

