// python wrapper for vtkSMStateVersionController
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
#include "vtkSMStateVersionController.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMStateVersionController(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMStateVersionController_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMStateVersionController_Doc =
  "vtkSMStateVersionController - vtkSMStateVersionController is used to\nconvert the state XML from any previously supported versions to the\ncurrent version.\n\n"
  "Superclass: vtkSMObject\n\n"
;


static PyObject *
PyvtkSMStateVersionController_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMStateVersionController::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateVersionController_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateVersionController *op = static_cast<vtkSMStateVersionController *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMStateVersionController::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateVersionController_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMStateVersionController *tempr = vtkSMStateVersionController::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateVersionController_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateVersionController *op = static_cast<vtkSMStateVersionController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMStateVersionController *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMStateVersionController::NewInstance());

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
PyvtkSMStateVersionController_Process(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Process");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateVersionController *op = static_cast<vtkSMStateVersionController *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  vtkSMSession *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkSMSession")))
  {
    bool tempr = (ap.IsBound() ?
      op->Process(temp0, temp1) :
      op->vtkSMStateVersionController::Process(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMStateVersionController_Methods[] = {
  {"IsTypeOf", PyvtkSMStateVersionController_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMStateVersionController_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMStateVersionController_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMStateVersionController\nC++: static vtkSMStateVersionController *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMStateVersionController_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMStateVersionController\nC++: vtkSMStateVersionController *NewInstance()\n\n"},
  {"Process", PyvtkSMStateVersionController_Process, METH_VARARGS,
   "V.Process(vtkPVXMLElement, vtkSMSession) -> bool\nC++: virtual bool Process(vtkPVXMLElement *root,\n    vtkSMSession *session=nullptr)\n\nCalled before a state is loaded.\n\\param root Root element for the state being loaded, e.g. for\n    server manager\nstate, it will point to a \\<ServerManagerState/> element.\n\\param session The current session, null by default.\n\n\\return false if the conversion failed, else true.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMStateVersionController_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMStateVersionController", // tp_name
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
  PyvtkSMStateVersionController_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMStateVersionController_StaticNew()
{
  return vtkSMStateVersionController::New();
}

PyObject *PyvtkSMStateVersionController_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMStateVersionController_Type, PyvtkSMStateVersionController_Methods,
    "vtkSMStateVersionController",
 &PyvtkSMStateVersionController_StaticNew);

  PyTypeObject *pytype = &PyvtkSMStateVersionController_Type;

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

void PyVTKAddFile_vtkSMStateVersionController(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMStateVersionController_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMStateVersionController", o) != 0)
  {
    Py_DECREF(o);
  }

}

