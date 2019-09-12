// python wrapper for vtkSMTransferFunctionManager
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
#include "vtkSMTransferFunctionManager.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMTransferFunctionManager(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMTransferFunctionManager_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMTransferFunctionManager_Doc =
  "vtkSMTransferFunctionManager - manages transfer functions i.e.\n\n"
  "Superclass: vtkSMObject\n\n"
  "color lookuptables and opacity piecewise functions for ParaView\n"
  "applications.\n\n"
  "vtkSMTransferFunctionManager manages transfer functions i.e. color\n"
  "lookuptables and opacity piecewise functions for ParaView\n"
  "applications. vtkSMTransferFunctionManager implements the ParaView\n"
  "specific mechanism for managing such transfer function proxies where\n"
  "there's one transfer function created and maintained per data array\n"
  "name.\n\n"
  "vtkSMTransferFunctionManager has no state. You can create as many\n"
  "instances as per your choosing to call the methods. It uses the\n"
  "session proxy manager to locate proxies registered using specific\n"
  "names under specific groups. Thus, the state is maintained by the\n"
  "proxy manager itself.\n\n";

static PyTypeObject PyvtkSMTransferFunctionManager_UpdateScalarBarsMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMTransferFunctionManager.UpdateScalarBarsMode", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSMTransferFunctionManager_UpdateScalarBarsMode_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSMTransferFunctionManager_UpdateScalarBarsMode_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMTransferFunctionManager_UpdateScalarBarsMode_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkSMTransferFunctionManager_TransferFunctionResetMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMTransferFunctionManager.TransferFunctionResetMode", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSMTransferFunctionManager_TransferFunctionResetMode_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSMTransferFunctionManager_TransferFunctionResetMode_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMTransferFunctionManager_TransferFunctionResetMode_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSMTransferFunctionManager_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMTransferFunctionManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionManager *op = static_cast<vtkSMTransferFunctionManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMTransferFunctionManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMTransferFunctionManager *tempr = vtkSMTransferFunctionManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionManager *op = static_cast<vtkSMTransferFunctionManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMTransferFunctionManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMTransferFunctionManager::NewInstance());

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
PyvtkSMTransferFunctionManager_GetColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionManager *op = static_cast<vtkSMTransferFunctionManager *>(vp);

  const char *temp0 = nullptr;
  vtkSMSessionProxyManager *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMSessionProxyManager"))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetColorTransferFunction(temp0, temp1) :
      op->vtkSMTransferFunctionManager::GetColorTransferFunction(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionManager_GetOpacityTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionManager *op = static_cast<vtkSMTransferFunctionManager *>(vp);

  const char *temp0 = nullptr;
  vtkSMSessionProxyManager *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMSessionProxyManager"))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetOpacityTransferFunction(temp0, temp1) :
      op->vtkSMTransferFunctionManager::GetOpacityTransferFunction(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionManager_GetScalarBarRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarBarRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionManager *op = static_cast<vtkSMTransferFunctionManager *>(vp);

  vtkSMProxy *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetScalarBarRepresentation(temp0, temp1) :
      op->vtkSMTransferFunctionManager::GetScalarBarRepresentation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionManager_ResetAllTransferFunctionRangesUsingCurrentData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetAllTransferFunctionRangesUsingCurrentData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionManager *op = static_cast<vtkSMTransferFunctionManager *>(vp);

  vtkSMSessionProxyManager *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMSessionProxyManager") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->ResetAllTransferFunctionRangesUsingCurrentData(temp0, temp1);
    }
    else
    {
      op->vtkSMTransferFunctionManager::ResetAllTransferFunctionRangesUsingCurrentData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionManager_UpdateScalarBars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScalarBars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionManager *op = static_cast<vtkSMTransferFunctionManager *>(vp);

  vtkSMProxy *temp0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->UpdateScalarBars(temp0, temp1) :
      op->vtkSMTransferFunctionManager::UpdateScalarBars(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionManager_UpdateScalarBarsComponentTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScalarBarsComponentTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionManager *op = static_cast<vtkSMTransferFunctionManager *>(vp);

  vtkSMProxy *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->UpdateScalarBarsComponentTitle(temp0, temp1) :
      op->vtkSMTransferFunctionManager::UpdateScalarBarsComponentTitle(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionManager_HideScalarBarIfNotNeeded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideScalarBarIfNotNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionManager *op = static_cast<vtkSMTransferFunctionManager *>(vp);

  vtkSMProxy *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->HideScalarBarIfNotNeeded(temp0, temp1) :
      op->vtkSMTransferFunctionManager::HideScalarBarIfNotNeeded(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMTransferFunctionManager_Methods[] = {
  {"IsTypeOf", PyvtkSMTransferFunctionManager_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMTransferFunctionManager_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMTransferFunctionManager_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMTransferFunctionManager\nC++: static vtkSMTransferFunctionManager *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMTransferFunctionManager_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMTransferFunctionManager\nC++: vtkSMTransferFunctionManager *NewInstance()\n\n"},
  {"GetColorTransferFunction", PyvtkSMTransferFunctionManager_GetColorTransferFunction, METH_VARARGS,
   "V.GetColorTransferFunction(string, vtkSMSessionProxyManager)\n    -> vtkSMProxy\nC++: virtual vtkSMProxy *GetColorTransferFunction(\n    const char *arrayName, vtkSMSessionProxyManager *pxm)\n\nReturns a color transfer function proxy instance for mapping a\ndata array with the given name. If none exists in the given\nsession, a new instance will be created and returned.\n"},
  {"GetOpacityTransferFunction", PyvtkSMTransferFunctionManager_GetOpacityTransferFunction, METH_VARARGS,
   "V.GetOpacityTransferFunction(string, vtkSMSessionProxyManager)\n    -> vtkSMProxy\nC++: virtual vtkSMProxy *GetOpacityTransferFunction(\n    const char *arrayName, vtkSMSessionProxyManager *pxm)\n\nReturns a opacity transfer function proxy (aka Piecewise\nFunction) instance for mapping a data array with the given name.\nIf none exists in the given session, a new instance will be\ncreated and returned.\n"},
  {"GetScalarBarRepresentation", PyvtkSMTransferFunctionManager_GetScalarBarRepresentation, METH_VARARGS,
   "V.GetScalarBarRepresentation(vtkSMProxy, vtkSMProxy) -> vtkSMProxy\nC++: virtual vtkSMProxy *GetScalarBarRepresentation(\n    vtkSMProxy *colorTransferFunctionProxy, vtkSMProxy *view)\n\nReturns the scalar-bar (color-legend) representation\ncorresponding to the transfer function for the view (currently\nonly render-views are supported). Thus returns an existing proxy,\nif present, otherwise a new one is created, if possible.\n"},
  {"ResetAllTransferFunctionRangesUsingCurrentData", PyvtkSMTransferFunctionManager_ResetAllTransferFunctionRangesUsingCurrentData, METH_VARARGS,
   "V.ResetAllTransferFunctionRangesUsingCurrentData(\n    vtkSMSessionProxyManager, bool)\nC++: void ResetAllTransferFunctionRangesUsingCurrentData(\n    vtkSMSessionProxyManager *pxm, bool animating=false)\n\nIterates over all \"known\" transfer function proxies and request\neach one of them to update its range using data information\ncurrently available. Set animating to true if this is called in\nthe context of an animation, false otherwise.\n"},
  {"UpdateScalarBars", PyvtkSMTransferFunctionManager_UpdateScalarBars, METH_VARARGS,
   "V.UpdateScalarBars(vtkSMProxy, int) -> bool\nC++: virtual bool UpdateScalarBars(vtkSMProxy *viewProxy,\n    unsigned int mode)\n\nUpdates the scalar bar visibility in the view. Based on the\nspecified mode, scalars bars representing non-represented arrays\ncan be automatically hidden; and those corresponding to arrays\nused for coloring can be automatically shown.\n"},
  {"UpdateScalarBarsComponentTitle", PyvtkSMTransferFunctionManager_UpdateScalarBarsComponentTitle, METH_VARARGS,
   "V.UpdateScalarBarsComponentTitle(vtkSMProxy, vtkSMProxy) -> bool\nC++: virtual bool UpdateScalarBarsComponentTitle(\n    vtkSMProxy *lutProxy, vtkSMProxy *representation)\n\nUpdates all scalar bars using provided lutProxy, the\nrepresentation is used to recover the component title\n"},
  {"HideScalarBarIfNotNeeded", PyvtkSMTransferFunctionManager_HideScalarBarIfNotNeeded, METH_VARARGS,
   "V.HideScalarBarIfNotNeeded(vtkSMProxy, vtkSMProxy) -> bool\nC++: virtual bool HideScalarBarIfNotNeeded(vtkSMProxy *lutProxy,\n    vtkSMProxy *view)\n\nHides the scalar bar, if any, for the lutProxy in the view if\nit's not being used. Returns true if the scalar bar visibility\nwas changed.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMTransferFunctionManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMTransferFunctionManager", // tp_name
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
  PyvtkSMTransferFunctionManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMTransferFunctionManager_StaticNew()
{
  return vtkSMTransferFunctionManager::New();
}

PyObject *PyvtkSMTransferFunctionManager_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMTransferFunctionManager_Type, PyvtkSMTransferFunctionManager_Methods,
    "vtkSMTransferFunctionManager",
 &PyvtkSMTransferFunctionManager_StaticNew);

  PyTypeObject *pytype = &PyvtkSMTransferFunctionManager_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSMTransferFunctionManager_UpdateScalarBarsMode_Type);
  PyvtkSMTransferFunctionManager_UpdateScalarBarsMode_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSMTransferFunctionManager_UpdateScalarBarsMode_Type);

  o = (PyObject *)&PyvtkSMTransferFunctionManager_UpdateScalarBarsMode_Type;
  if (PyDict_SetItemString(d, "UpdateScalarBarsMode", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkSMTransferFunctionManager_TransferFunctionResetMode_Type);
  PyvtkSMTransferFunctionManager_TransferFunctionResetMode_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSMTransferFunctionManager_TransferFunctionResetMode_Type);

  o = (PyObject *)&PyvtkSMTransferFunctionManager_TransferFunctionResetMode_Type;
  if (PyDict_SetItemString(d, "TransferFunctionResetMode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkSMTransferFunctionManager::UpdateScalarBarsMode cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "HIDE_UNUSED_SCALAR_BARS", vtkSMTransferFunctionManager::HIDE_UNUSED_SCALAR_BARS },
        { "SHOW_USED_SCALAR_BARS", vtkSMTransferFunctionManager::SHOW_USED_SCALAR_BARS },
      };

    o = PyvtkSMTransferFunctionManager_UpdateScalarBarsMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkSMTransferFunctionManager::TransferFunctionResetMode cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "NEVER", vtkSMTransferFunctionManager::NEVER },
        { "GROW_ON_APPLY", vtkSMTransferFunctionManager::GROW_ON_APPLY },
        { "GROW_ON_APPLY_AND_TIMESTEP", vtkSMTransferFunctionManager::GROW_ON_APPLY_AND_TIMESTEP },
        { "RESET_ON_APPLY", vtkSMTransferFunctionManager::RESET_ON_APPLY },
        { "RESET_ON_APPLY_AND_TIMESTEP", vtkSMTransferFunctionManager::RESET_ON_APPLY_AND_TIMESTEP },
      };

    o = PyvtkSMTransferFunctionManager_TransferFunctionResetMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMTransferFunctionManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMTransferFunctionManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMTransferFunctionManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

