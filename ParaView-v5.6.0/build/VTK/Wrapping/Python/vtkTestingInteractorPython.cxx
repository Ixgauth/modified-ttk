// python wrapper for vtkTestingInteractor
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
#include "vtkTestingInteractor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTestingInteractor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTestingInteractor_ClassNew(); }

#ifndef DECLARED_PyvtkRenderWindowInteractor_ClassNew
extern "C" { PyObject *PyvtkRenderWindowInteractor_ClassNew(); }
#define DECLARED_PyvtkRenderWindowInteractor_ClassNew
#endif

static const char *PyvtkTestingInteractor_Doc =
  "vtkTestingInteractor - A RenderWindowInteractor for testing\n\n"
  "Superclass: vtkRenderWindowInteractor\n\n"
  "Provides a Start() method that passes arguments to a test for\n"
  "regression testing and returns. This permits programs that run as\n"
  "tests to exit gracefully during the test run without needing\n"
  "interaction.\n"
  "@sa\n"
  "vtkTestingObjectFactory\n\n";


static PyObject *
PyvtkTestingInteractor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTestingInteractor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTestingInteractor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingInteractor *op = static_cast<vtkTestingInteractor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTestingInteractor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTestingInteractor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTestingInteractor *tempr = vtkTestingInteractor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTestingInteractor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingInteractor *op = static_cast<vtkTestingInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTestingInteractor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTestingInteractor::NewInstance());

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
PyvtkTestingInteractor_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingInteractor *op = static_cast<vtkTestingInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Start();
    }
    else
    {
      op->vtkTestingInteractor::Start();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTestingInteractor_Methods[] = {
  {"IsTypeOf", PyvtkTestingInteractor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nType and printing information.\n"},
  {"IsA", PyvtkTestingInteractor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nType and printing information.\n"},
  {"SafeDownCast", PyvtkTestingInteractor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTestingInteractor\nC++: static vtkTestingInteractor *SafeDownCast(vtkObjectBase *o)\n\nType and printing information.\n"},
  {"NewInstance", PyvtkTestingInteractor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTestingInteractor\nC++: vtkTestingInteractor *NewInstance()\n\nType and printing information.\n"},
  {"Start", PyvtkTestingInteractor_Start, METH_VARARGS,
   "V.Start()\nC++: void Start() override;\n\nStart the event loop. This is provided so that you do not have to\nimplement your own event loop. You still can use your own event\nloop if you want.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTestingInteractor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkTestingRenderingPython.vtkTestingInteractor", // tp_name
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
  PyvtkTestingInteractor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTestingInteractor_StaticNew()
{
  return vtkTestingInteractor::New();
}

PyObject *PyvtkTestingInteractor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTestingInteractor_Type, PyvtkTestingInteractor_Methods,
    "vtkTestingInteractor",
 &PyvtkTestingInteractor_StaticNew);

  PyTypeObject *pytype = &PyvtkTestingInteractor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkRenderWindowInteractor_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTestingInteractor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTestingInteractor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTestingInteractor", o) != 0)
  {
    Py_DECREF(o);
  }

}

