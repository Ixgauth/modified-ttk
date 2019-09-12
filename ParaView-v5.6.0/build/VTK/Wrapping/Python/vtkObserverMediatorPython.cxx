// python wrapper for vtkObserverMediator
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
#include "vtkObserverMediator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkObserverMediator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkObserverMediator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkObserverMediator_Doc =
  "vtkObserverMediator - manage contention for cursors and other\nresources\n\n"
  "Superclass: vtkObject\n\n"
  "The vtkObserverMediator is a helper class that manages requests for\n"
  "cursor changes from multiple interactor observers (e.g. widgets). It\n"
  "keeps a list of widgets (and their priorities) and their current\n"
  "requests for cursor shape. It then satisfies requests based on widget\n"
  "priority and the relative importance of the request (e.g., a lower\n"
  "priority widget requesting a particular cursor shape will overrule a\n"
  "higher priority widget requesting a default shape).\n\n"
  "@sa\n"
  "vtkAbstractWidget vtkWidgetRepresentation\n\n";


static PyObject *
PyvtkObserverMediator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkObserverMediator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObserverMediator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverMediator *op = static_cast<vtkObserverMediator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkObserverMediator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObserverMediator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkObserverMediator *tempr = vtkObserverMediator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObserverMediator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverMediator *op = static_cast<vtkObserverMediator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObserverMediator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkObserverMediator::NewInstance());

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
PyvtkObserverMediator_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverMediator *op = static_cast<vtkObserverMediator *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->SetInteractor(temp0);
    }
    else
    {
      op->vtkObserverMediator::SetInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObserverMediator_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverMediator *op = static_cast<vtkObserverMediator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkObserverMediator::GetInteractor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObserverMediator_RequestCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverMediator *op = static_cast<vtkObserverMediator *>(vp);

  vtkInteractorObserver *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInteractorObserver") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->RequestCursorShape(temp0, temp1) :
      op->vtkObserverMediator::RequestCursorShape(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObserverMediator_RemoveAllCursorShapeRequests(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllCursorShapeRequests");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverMediator *op = static_cast<vtkObserverMediator *>(vp);

  vtkInteractorObserver *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInteractorObserver"))
  {
    if (ap.IsBound())
    {
      op->RemoveAllCursorShapeRequests(temp0);
    }
    else
    {
      op->vtkObserverMediator::RemoveAllCursorShapeRequests(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkObserverMediator_Methods[] = {
  {"IsTypeOf", PyvtkObserverMediator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard macros.\n"},
  {"IsA", PyvtkObserverMediator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard macros.\n"},
  {"SafeDownCast", PyvtkObserverMediator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkObserverMediator\nC++: static vtkObserverMediator *SafeDownCast(vtkObjectBase *o)\n\nStandard macros.\n"},
  {"NewInstance", PyvtkObserverMediator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkObserverMediator\nC++: vtkObserverMediator *NewInstance()\n\nStandard macros.\n"},
  {"SetInteractor", PyvtkObserverMediator_SetInteractor, METH_VARARGS,
   "V.SetInteractor(vtkRenderWindowInteractor)\nC++: void SetInteractor(vtkRenderWindowInteractor *iren)\n\nSpecify the instance of vtkRenderWindow whose cursor shape is to\nbe managed.\n"},
  {"GetInteractor", PyvtkObserverMediator_GetInteractor, METH_VARARGS,
   "V.GetInteractor() -> vtkRenderWindowInteractor\nC++: virtual vtkRenderWindowInteractor *GetInteractor()\n\nSpecify the instance of vtkRenderWindow whose cursor shape is to\nbe managed.\n"},
  {"RequestCursorShape", PyvtkObserverMediator_RequestCursorShape, METH_VARARGS,
   "V.RequestCursorShape(vtkInteractorObserver, int) -> int\nC++: int RequestCursorShape(vtkInteractorObserver *,\n    int cursorShape)\n\nMethod used to request a cursor shape. Note that the shape is\nspecified using one of the integral values determined in\nvtkRenderWindow.h. The method returns a non-zero value if the\nshape was successfully changed.\n"},
  {"RemoveAllCursorShapeRequests", PyvtkObserverMediator_RemoveAllCursorShapeRequests, METH_VARARGS,
   "V.RemoveAllCursorShapeRequests(vtkInteractorObserver)\nC++: void RemoveAllCursorShapeRequests(vtkInteractorObserver *)\n\nRemove all requests for cursor shape from a given interactor.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkObserverMediator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkObserverMediator", // tp_name
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
  PyvtkObserverMediator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkObserverMediator_StaticNew()
{
  return vtkObserverMediator::New();
}

PyObject *PyvtkObserverMediator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkObserverMediator_Type, PyvtkObserverMediator_Methods,
    "vtkObserverMediator",
 &PyvtkObserverMediator_StaticNew);

  PyTypeObject *pytype = &PyvtkObserverMediator_Type;

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

void PyVTKAddFile_vtkObserverMediator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkObserverMediator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkObserverMediator", o) != 0)
  {
    Py_DECREF(o);
  }

}

