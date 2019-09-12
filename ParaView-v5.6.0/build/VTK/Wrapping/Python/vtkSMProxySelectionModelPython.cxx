// python wrapper for vtkSMProxySelectionModel
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
#include "vtkSMProxySelectionModel.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMProxySelectionModel(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMProxySelectionModel_ClassNew(); }

#ifndef DECLARED_PyvtkSMRemoteObject_ClassNew
extern "C" { PyObject *PyvtkSMRemoteObject_ClassNew(); }
#define DECLARED_PyvtkSMRemoteObject_ClassNew
#endif

static const char *PyvtkSMProxySelectionModel_Doc =
  "vtkSMProxySelectionModel - selects proxies.\n\n"
  "Superclass: vtkSMRemoteObject\n\n"
  "vtkSMProxySelectionModel is used to select proxies. vtkSMProxyManager\n"
  "uses two instances of vtkSMProxySelectionModel for keeping track of\n"
  "the selected/active sources/filters and the active view.\n"
  "@sa\n"
  "vtkSMProxyManager\n\n";

static PyTypeObject PyvtkSMProxySelectionModel_ProxySelectionFlag_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMProxySelectionModel.ProxySelectionFlag", // tp_name
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

PyObject *PyvtkSMProxySelectionModel_ProxySelectionFlag_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSMProxySelectionModel_ProxySelectionFlag_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMProxySelectionModel_ProxySelectionFlag_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSMProxySelectionModel_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMProxySelectionModel::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxySelectionModel::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMProxySelectionModel *tempr = vtkSMProxySelectionModel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxySelectionModel *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxySelectionModel::NewInstance());

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
PyvtkSMProxySelectionModel_SetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  vtkSMSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
  {
    if (ap.IsBound())
    {
      op->SetSession(temp0);
    }
    else
    {
      op->vtkSMProxySelectionModel::SetSession(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_SetFollowingMaster(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFollowingMaster");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFollowingMaster(temp0);
    }
    else
    {
      op->vtkSMProxySelectionModel::SetFollowingMaster(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_IsFollowingMaster(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFollowingMaster");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsFollowingMaster() :
      op->vtkSMProxySelectionModel::IsFollowingMaster());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_GetCurrentProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetCurrentProxy() :
      op->vtkSMProxySelectionModel::GetCurrentProxy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_SetCurrentProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  vtkSMProxy *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCurrentProxy(temp0, temp1);
    }
    else
    {
      op->vtkSMProxySelectionModel::SetCurrentProxy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_IsSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSelected(temp0) :
      op->vtkSMProxySelectionModel::IsSelected(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_GetNumberOfSelectedProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSelectedProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfSelectedProxies() :
      op->vtkSMProxySelectionModel::GetNumberOfSelectedProxies());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_GetSelectedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetSelectedProxy(temp0) :
      op->vtkSMProxySelectionModel::GetSelectedProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_Select_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Select");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  vtkSMProxy *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Select(temp0, temp1);
    }
    else
    {
      op->vtkSMProxySelectionModel::Select(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxySelectionModel_Select_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Select");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->Select(temp0);
    }
    else
    {
      op->vtkSMProxySelectionModel::Select(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxySelectionModel_Select(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMProxySelectionModel_Select_s1(self, args);
    case 1:
      return PyvtkSMProxySelectionModel_Select_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Select");
  return nullptr;
}



static PyObject *
PyvtkSMProxySelectionModel_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkSMProxySelectionModel::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_Deselect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Deselect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->Deselect(temp0);
    }
    else
    {
      op->vtkSMProxySelectionModel::Deselect(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_ClearAndSelect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAndSelect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->ClearAndSelect(temp0);
    }
    else
    {
      op->vtkSMProxySelectionModel::ClearAndSelect(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_GetSelectionDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->GetSelectionDataBounds(temp0) :
      op->vtkSMProxySelectionModel::GetSelectionDataBounds(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_GetFullState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkSMMessage *tempr = (ap.IsBound() ?
      op->GetFullState() :
      op->vtkSMProxySelectionModel::GetFullState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  vtkSMMessage *temp0 = nullptr;
  vtkSMProxyLocator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMMessage") &&
      ap.GetVTKObject(temp1, "vtkSMProxyLocator"))
  {
    if (ap.IsBound())
    {
      op->LoadState(temp0, temp1);
    }
    else
    {
      op->vtkSMProxySelectionModel::LoadState(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMProxySelectionModel_Methods[] = {
  {"IsTypeOf", PyvtkSMProxySelectionModel_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMProxySelectionModel_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMProxySelectionModel_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMProxySelectionModel\nC++: static vtkSMProxySelectionModel *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMProxySelectionModel_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMProxySelectionModel\nC++: vtkSMProxySelectionModel *NewInstance()\n\n"},
  {"SetSession", PyvtkSMProxySelectionModel_SetSession, METH_VARARGS,
   "V.SetSession(vtkSMSession)\nC++: void SetSession(vtkSMSession *) override;\n\nOverride the set session, so we can attach an observer to the\nCollaboration manager in order to monitor master/slave changes.\n"},
  {"SetFollowingMaster", PyvtkSMProxySelectionModel_SetFollowingMaster, METH_VARARGS,
   "V.SetFollowingMaster(bool)\nC++: void SetFollowingMaster(bool following)\n\nAllow to synchronize the active object with master or just keep\nremote object out-of-synch. Only the state from the master will\nbe loaded.\n"},
  {"IsFollowingMaster", PyvtkSMProxySelectionModel_IsFollowingMaster, METH_VARARGS,
   "V.IsFollowingMaster() -> bool\nC++: bool IsFollowingMaster()\n\nAllow to synchronize the active object with master or just keep\nremote object out-of-synch. Only the state from the master will\nbe loaded.\n"},
  {"GetCurrentProxy", PyvtkSMProxySelectionModel_GetCurrentProxy, METH_VARARGS,
   "V.GetCurrentProxy() -> vtkSMProxy\nC++: vtkSMProxy *GetCurrentProxy()\n\nReturns the proxy that is current, NULL if there is no current.\n"},
  {"SetCurrentProxy", PyvtkSMProxySelectionModel_SetCurrentProxy, METH_VARARGS,
   "V.SetCurrentProxy(vtkSMProxy, int)\nC++: void SetCurrentProxy(vtkSMProxy *proxy, int command)\n\nSets the current proxy. command is used to control how the\ncurrent selection is affected.\n\\li NO_UPDATE: change the current without affecting the selected\n    set of\nproxies.\n\\li CLEAR: clear current selection\n\\li SELECT: also select the proxy being set as current\n\\li DESELECT: deselect the proxy being set as current.\n"},
  {"IsSelected", PyvtkSMProxySelectionModel_IsSelected, METH_VARARGS,
   "V.IsSelected(vtkSMProxy) -> bool\nC++: bool IsSelected(vtkSMProxy *proxy)\n\nReturns true if the proxy is selected.\n"},
  {"GetNumberOfSelectedProxies", PyvtkSMProxySelectionModel_GetNumberOfSelectedProxies, METH_VARARGS,
   "V.GetNumberOfSelectedProxies() -> int\nC++: unsigned int GetNumberOfSelectedProxies()\n\n"},
  {"GetSelectedProxy", PyvtkSMProxySelectionModel_GetSelectedProxy, METH_VARARGS,
   "V.GetSelectedProxy(int) -> vtkSMProxy\nC++: vtkSMProxy *GetSelectedProxy(unsigned int index)\n\nReturns the selected proxy at the given index.\n"},
  {"Select", PyvtkSMProxySelectionModel_Select, METH_VARARGS,
   "V.Select(vtkSMProxy, int)\nC++: void Select(vtkSMProxy *proxy, int command)\nV.Select(vtkSMProxy)\nC++: void Select(vtkSMProxy *proxy)\n\n"},
  {"Clear", PyvtkSMProxySelectionModel_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nWrapper friendly methods to doing what Select() can do.\n"},
  {"Deselect", PyvtkSMProxySelectionModel_Deselect, METH_VARARGS,
   "V.Deselect(vtkSMProxy)\nC++: void Deselect(vtkSMProxy *proxy)\n\n"},
  {"ClearAndSelect", PyvtkSMProxySelectionModel_ClearAndSelect, METH_VARARGS,
   "V.ClearAndSelect(vtkSMProxy)\nC++: void ClearAndSelect(vtkSMProxy *proxy)\n\n"},
  {"GetSelectionDataBounds", PyvtkSMProxySelectionModel_GetSelectionDataBounds, METH_VARARGS,
   "V.GetSelectionDataBounds([float, float, float, float, float,\n    float]) -> bool\nC++: bool GetSelectionDataBounds(double bounds[6])\n\nUtility method to get the data bounds for the currently selected\nitems. This only makes sense for selections comprising of\nsource-proxies or output-port proxies. Returns true is the bounds\nare valid.\n"},
  {"GetFullState", PyvtkSMProxySelectionModel_GetFullState, METH_VARARGS,
   "V.GetFullState() -> vtkSMMessage\nC++: const vtkSMMessage *GetFullState() override;\n\nThis method return the full object state that can be used to\ncreate that object from scratch. This method will be used to fill\nthe undo stack. If not overridden this will return NULL.\n"},
  {"LoadState", PyvtkSMProxySelectionModel_LoadState, METH_VARARGS,
   "V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator) override;\n\nThis method is used to initialise the object to the given state\nIf the definitionOnly Flag is set to True the proxy won't load\nthe properties values and just setup the new proxy hierarchy with\nall subproxy globalID set. This allow to split the load process\nin 2 step to prevent invalid state when property refere to a\nsub-proxy that does not exist yet.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMProxySelectionModel_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMProxySelectionModel", // tp_name
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
  PyvtkSMProxySelectionModel_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMProxySelectionModel_StaticNew()
{
  return vtkSMProxySelectionModel::New();
}

PyObject *PyvtkSMProxySelectionModel_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMProxySelectionModel_Type, PyvtkSMProxySelectionModel_Methods,
    "vtkSMProxySelectionModel",
 &PyvtkSMProxySelectionModel_StaticNew);

  PyTypeObject *pytype = &PyvtkSMProxySelectionModel_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMRemoteObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSMProxySelectionModel_ProxySelectionFlag_Type);
  PyvtkSMProxySelectionModel_ProxySelectionFlag_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSMProxySelectionModel_ProxySelectionFlag_Type);

  o = (PyObject *)&PyvtkSMProxySelectionModel_ProxySelectionFlag_Type;
  if (PyDict_SetItemString(d, "ProxySelectionFlag", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkSMProxySelectionModel::ProxySelectionFlag cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "NO_UPDATE", vtkSMProxySelectionModel::NO_UPDATE },
        { "CLEAR", vtkSMProxySelectionModel::CLEAR },
        { "SELECT", vtkSMProxySelectionModel::SELECT },
        { "DESELECT", vtkSMProxySelectionModel::DESELECT },
        { "CLEAR_AND_SELECT", vtkSMProxySelectionModel::CLEAR_AND_SELECT },
      };

    o = PyvtkSMProxySelectionModel_ProxySelectionFlag_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMProxySelectionModel(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMProxySelectionModel_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMProxySelectionModel", o) != 0)
  {
    Py_DECREF(o);
  }

}

