// python wrapper for vtkSMDataDeliveryManager
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
#include "vtkSMDataDeliveryManager.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMDataDeliveryManager(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMDataDeliveryManager_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMDataDeliveryManager_Doc =
  "vtkSMDataDeliveryManager - server-manager class for\nvtkPVDataDeliveryManager.\n\n"
  "Superclass: vtkSMObject\n\n"
  "vtkSMDataDeliveryManager is the server-manager wrapper for\n"
  "vtkPVDataDeliveryManager. It manages calling on methods on instances\n"
  "of vtkPVDataDeliveryManager. Before every render call,\n"
  "vtkSMRenderViewProxy calls vtkSMDataDeliveryManager::Deliver() to\n"
  "ensure that any geometries that need to be delivered are explicitly\n"
  "delivered. This separating into Update-Deliver-Render calls ensures\n"
  "makes it possible to extend the framework for streaming, in future.\n\n"
  "The streaming components of this class are experimental and will be\n"
  "changed.\n\n";


static PyObject *
PyvtkSMDataDeliveryManager_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMDataDeliveryManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDataDeliveryManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataDeliveryManager *op = static_cast<vtkSMDataDeliveryManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDataDeliveryManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDataDeliveryManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMDataDeliveryManager *tempr = vtkSMDataDeliveryManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDataDeliveryManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataDeliveryManager *op = static_cast<vtkSMDataDeliveryManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMDataDeliveryManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDataDeliveryManager::NewInstance());

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
PyvtkSMDataDeliveryManager_SetViewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataDeliveryManager *op = static_cast<vtkSMDataDeliveryManager *>(vp);

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
      op->vtkSMDataDeliveryManager::SetViewProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMDataDeliveryManager_Deliver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Deliver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataDeliveryManager *op = static_cast<vtkSMDataDeliveryManager *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Deliver(temp0);
    }
    else
    {
      op->vtkSMDataDeliveryManager::Deliver(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMDataDeliveryManager_DeliverStreamedPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeliverStreamedPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataDeliveryManager *op = static_cast<vtkSMDataDeliveryManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->DeliverStreamedPieces() :
      op->vtkSMDataDeliveryManager::DeliverStreamedPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMDataDeliveryManager_Methods[] = {
  {"IsTypeOf", PyvtkSMDataDeliveryManager_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMDataDeliveryManager_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMDataDeliveryManager_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMDataDeliveryManager\nC++: static vtkSMDataDeliveryManager *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMDataDeliveryManager_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMDataDeliveryManager\nC++: vtkSMDataDeliveryManager *NewInstance()\n\n"},
  {"SetViewProxy", PyvtkSMDataDeliveryManager_SetViewProxy, METH_VARARGS,
   "V.SetViewProxy(vtkSMViewProxy)\nC++: void SetViewProxy(vtkSMViewProxy *)\n\nGet/Set the view proxy for whom we are delivering the data.\n"},
  {"Deliver", PyvtkSMDataDeliveryManager_Deliver, METH_VARARGS,
   "V.Deliver(bool)\nC++: void Deliver(bool interactive)\n\nCalled to request delivery of the geometry. This checks the\nclient-side vtkPVDataDeliveryManager instance to see if any\ngeometries need to be delivered and then requests delivery for\nthose.\n"},
  {"DeliverStreamedPieces", PyvtkSMDataDeliveryManager_DeliverStreamedPieces, METH_VARARGS,
   "V.DeliverStreamedPieces() -> bool\nC++: bool DeliverStreamedPieces()\n\nEXPERIMEMTAL: Delivery when streaming is enabled. Returns true\nwhen some new data was streamed. When this returns false, it\nimplies that there is no more data to stream or streaming is not\nenabled.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMDataDeliveryManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMDataDeliveryManager", // tp_name
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
  PyvtkSMDataDeliveryManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMDataDeliveryManager_StaticNew()
{
  return vtkSMDataDeliveryManager::New();
}

PyObject *PyvtkSMDataDeliveryManager_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMDataDeliveryManager_Type, PyvtkSMDataDeliveryManager_Methods,
    "vtkSMDataDeliveryManager",
 &PyvtkSMDataDeliveryManager_StaticNew);

  PyTypeObject *pytype = &PyvtkSMDataDeliveryManager_Type;

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

void PyVTKAddFile_vtkSMDataDeliveryManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMDataDeliveryManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMDataDeliveryManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

