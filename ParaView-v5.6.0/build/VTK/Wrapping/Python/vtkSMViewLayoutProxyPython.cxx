// python wrapper for vtkSMViewLayoutProxy
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
#include "vtkVector.h"
#include "vtkSMViewLayoutProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMViewLayoutProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMViewLayoutProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxy_ClassNew
extern "C" { PyObject *PyvtkSMProxy_ClassNew(); }
#define DECLARED_PyvtkSMProxy_ClassNew
#endif

static const char *PyvtkSMViewLayoutProxy_Doc =
  "vtkSMViewLayoutProxy - vtkSMViewLayoutProxy is used by ParaView to\nlayout multiple views in a 2D KD-Tree layout.\n\n"
  "Superclass: vtkSMProxy\n\n"
  "vtkSMViewLayoutProxy is used by ParaView to layout multiple views in\n"
  "a 2D KD-Tree layout. This is proxy, hence can be registered with the\n"
  "proxy manager just like other regular proxies; participates in xml\n"
  "state saving/restoring, undo-redo, etc. Users can affects the GUI\n"
  "layout using this proxy instance from Python as well.\n\n"
  "Every time the vtkSMViewLayoutProxy changes so that it would affect\n"
  "the UI, this class fires vtkCommand::ConfigureEvent.\n\n"
  "View proxies that are to laid out in an layout should be \"assigned\"\n"
  "to a particular cell in a vtkSMViewLayoutProxy instance.\n"
  "vtkSMViewLayoutProxy takes over the responsibility of updating the\n"
  "view's Position property correctly.\n\n"
  "Although, currently, there are no safe guards against assigning a\n"
  "view to more than one layout, this is strictly prohibited and can\n"
  "cause unexpected problems at run-time.\n\n";

static PyTypeObject PyvtkSMViewLayoutProxy_Direction_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMViewLayoutProxy.Direction", // tp_name
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

PyObject *PyvtkSMViewLayoutProxy_Direction_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSMViewLayoutProxy_Direction_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMViewLayoutProxy_Direction_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSMViewLayoutProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMViewLayoutProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMViewLayoutProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMViewLayoutProxy *tempr = vtkSMViewLayoutProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMViewLayoutProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMViewLayoutProxy::NewInstance());

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
PyvtkSMViewLayoutProxy_Split(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Split");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Split(temp0, temp1, temp2) :
      op->vtkSMViewLayoutProxy::Split(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_SplitVertical(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitVertical");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SplitVertical(temp0, temp1) :
      op->vtkSMViewLayoutProxy::SplitVertical(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_SplitHorizontal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitHorizontal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SplitHorizontal(temp0, temp1) :
      op->vtkSMViewLayoutProxy::SplitHorizontal(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_AssignView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AssignView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  vtkSMViewProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMViewProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->AssignView(temp0, temp1) :
      op->vtkSMViewLayoutProxy::AssignView(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_AssignViewToAnyCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AssignViewToAnyCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  vtkSMViewProxy *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->AssignViewToAnyCell(temp0, temp1) :
      op->vtkSMViewLayoutProxy::AssignViewToAnyCell(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_RemoveView_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  vtkSMViewProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveView(temp0) :
      op->vtkSMViewLayoutProxy::RemoveView(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMViewLayoutProxy_RemoveView_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveView(temp0) :
      op->vtkSMViewLayoutProxy::RemoveView(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMViewLayoutProxy_RemoveView_Methods[] = {
  {nullptr, PyvtkSMViewLayoutProxy_RemoveView_s1, METH_VARARGS,
   "@V *vtkSMViewProxy"},
  {nullptr, PyvtkSMViewLayoutProxy_RemoveView_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMViewLayoutProxy_RemoveView(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMViewLayoutProxy_RemoveView_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveView");
  return nullptr;
}



static PyObject *
PyvtkSMViewLayoutProxy_Collapse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Collapse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->Collapse(temp0) :
      op->vtkSMViewLayoutProxy::Collapse(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_SwapCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->SwapCells(temp0, temp1) :
      op->vtkSMViewLayoutProxy::SwapCells(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_SetSplitFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetSplitFraction(temp0, temp1) :
      op->vtkSMViewLayoutProxy::SetSplitFraction(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_MaximizeCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaximizeCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->MaximizeCell(temp0) :
      op->vtkSMViewLayoutProxy::MaximizeCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_RestoreMaximizedState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreMaximizedState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RestoreMaximizedState();
    }
    else
    {
      op->vtkSMViewLayoutProxy::RestoreMaximizedState();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetMaximizedCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximizedCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximizedCell() :
      op->vtkSMViewLayoutProxy::GetMaximizedCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_IsSplitCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSplitCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSplitCell(temp0) :
      op->vtkSMViewLayoutProxy::IsSplitCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetSplitDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    typedef vtkSMViewLayoutProxy::Direction tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetSplitDirection(temp0) :
      op->vtkSMViewLayoutProxy::GetSplitDirection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = PyvtkSMViewLayoutProxy_Direction_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetSplitFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSplitFraction(temp0) :
      op->vtkSMViewLayoutProxy::GetSplitFraction(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetFirstChild(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFirstChild");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMViewLayoutProxy::GetFirstChild(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetSecondChild(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSecondChild");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMViewLayoutProxy::GetSecondChild(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetParent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetParent");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMViewLayoutProxy::GetParent(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMViewProxy *tempr = (ap.IsBound() ?
      op->GetView(temp0) :
      op->vtkSMViewLayoutProxy::GetView(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetViewLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  vtkSMViewProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
  {
    int tempr = (ap.IsBound() ?
      op->GetViewLocation(temp0) :
      op->vtkSMViewLayoutProxy::GetViewLocation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_ContainsView_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContainsView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  vtkSMViewProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->ContainsView(temp0) :
      op->vtkSMViewLayoutProxy::ContainsView(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMViewLayoutProxy_ContainsView_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContainsView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->ContainsView(temp0) :
      op->vtkSMViewLayoutProxy::ContainsView(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMViewLayoutProxy_ContainsView_Methods[] = {
  {nullptr, PyvtkSMViewLayoutProxy_ContainsView_s1, METH_VARARGS,
   "@V *vtkSMViewProxy"},
  {nullptr, PyvtkSMViewLayoutProxy_ContainsView_s2, METH_VARARGS,
   "@V *vtkSMProxy"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMViewLayoutProxy_ContainsView(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMViewLayoutProxy_ContainsView_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ContainsView");
  return nullptr;
}



static PyObject *
PyvtkSMViewLayoutProxy_UpdateViewPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateViewPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateViewPositions();
    }
    else
    {
      op->vtkSMViewLayoutProxy::UpdateViewPositions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_ShowViewsOnTileDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowViewsOnTileDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowViewsOnTileDisplay();
    }
    else
    {
      op->vtkSMViewLayoutProxy::ShowViewsOnTileDisplay();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_CaptureWindow_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CaptureWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->CaptureWindow(temp0) :
      op->vtkSMViewLayoutProxy::CaptureWindow(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMViewLayoutProxy_CaptureWindow_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CaptureWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->CaptureWindow(temp0, temp1) :
      op->vtkSMViewLayoutProxy::CaptureWindow(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMViewLayoutProxy_CaptureWindow(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMViewLayoutProxy_CaptureWindow_s1(self, args);
    case 2:
      return PyvtkSMViewLayoutProxy_CaptureWindow_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CaptureWindow");
  return nullptr;
}



static PyObject *
PyvtkSMViewLayoutProxy_SaveXMLState_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->SaveXMLState(temp0) :
      op->vtkSMViewLayoutProxy::SaveXMLState(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMViewLayoutProxy_SaveXMLState_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  vtkSMPropertyIterator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      ap.GetVTKObject(temp1, "vtkSMPropertyIterator"))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->SaveXMLState(temp0, temp1) :
      op->vtkSMViewLayoutProxy::SaveXMLState(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMViewLayoutProxy_SaveXMLState(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMViewLayoutProxy_SaveXMLState_s1(self, args);
    case 2:
      return PyvtkSMViewLayoutProxy_SaveXMLState_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SaveXMLState");
  return nullptr;
}



static PyObject *
PyvtkSMViewLayoutProxy_LoadXMLState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  vtkSMProxyLocator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      ap.GetVTKObject(temp1, "vtkSMProxyLocator"))
  {
    int tempr = (ap.IsBound() ?
      op->LoadXMLState(temp0, temp1) :
      op->vtkSMViewLayoutProxy::LoadXMLState(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkSMViewLayoutProxy::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetLayoutExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  const size_t size0 = 4;
  int temp0[4];
  int save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetLayoutExtent(temp0);
    }
    else
    {
      op->vtkSMViewLayoutProxy::GetLayoutExtent(temp0);
    }

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
PyvtkSMViewLayoutProxy_SetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0);
    }
    else
    {
      op->vtkSMViewLayoutProxy::SetSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2i tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkSMViewLayoutProxy::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_FindLayout(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FindLayout");

  vtkSMViewProxy *temp0 = nullptr;
  const char *temp1 = "layouts";
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkSMViewLayoutProxy *tempr = vtkSMViewLayoutProxy::FindLayout(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_SetSeparatorColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeparatorColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetSeparatorColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMViewLayoutProxy::SetSeparatorColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMViewLayoutProxy_SetSeparatorColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeparatorColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetSeparatorColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMViewLayoutProxy::SetSeparatorColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMViewLayoutProxy_SetSeparatorColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeparatorColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSeparatorColor(temp0);
    }
    else
    {
      op->vtkSMViewLayoutProxy::SetSeparatorColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMViewLayoutProxy_SetSeparatorColor_Methods[] = {
  {nullptr, PyvtkSMViewLayoutProxy_SetSeparatorColor_s1, METH_VARARGS,
   "@BBB"},
  {nullptr, PyvtkSMViewLayoutProxy_SetSeparatorColor_s2, METH_VARARGS,
   "@ddd"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMViewLayoutProxy_SetSeparatorColor(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMViewLayoutProxy_SetSeparatorColor_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMViewLayoutProxy_SetSeparatorColor_s3(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSeparatorColor");
  return nullptr;
}



static PyObject *
PyvtkSMViewLayoutProxy_GetSeparatorColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeparatorColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSeparatorColor() :
      op->vtkSMViewLayoutProxy::GetSeparatorColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_SetSeparatorWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeparatorWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSeparatorWidth(temp0);
    }
    else
    {
      op->vtkSMViewLayoutProxy::SetSeparatorWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetSeparatorWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeparatorWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSeparatorWidthMinValue() :
      op->vtkSMViewLayoutProxy::GetSeparatorWidthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetSeparatorWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeparatorWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSeparatorWidthMaxValue() :
      op->vtkSMViewLayoutProxy::GetSeparatorWidthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetSeparatorWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeparatorWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSeparatorWidth() :
      op->vtkSMViewLayoutProxy::GetSeparatorWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMViewLayoutProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMViewLayoutProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMViewLayoutProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMViewLayoutProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMViewLayoutProxy\nC++: static vtkSMViewLayoutProxy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMViewLayoutProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMViewLayoutProxy\nC++: vtkSMViewLayoutProxy *NewInstance()\n\n"},
  {"Split", PyvtkSMViewLayoutProxy_Split, METH_VARARGS,
   "V.Split(int, int, float) -> int\nC++: int Split(int location, int direction, double fraction)\n\nSplit a frame at the given location. Location must point to an\nexisting cell that's not split. If the location does not exist or\nis already split, then returns -1, to indicate failure. Otherwise\nreturns the index of the left (or top) child node. The index for\nthe sibling can be computed as (ret_val + 1). fraction indicates\na value in the range [0.0, 1.0] at which the cell is split. If a\nView is set at the given location, it will be moved to the left\n(or top) child after the split.\n"},
  {"SplitVertical", PyvtkSMViewLayoutProxy_SplitVertical, METH_VARARGS,
   "V.SplitVertical(int, float) -> int\nC++: int SplitVertical(int location, double fraction)\n\n"},
  {"SplitHorizontal", PyvtkSMViewLayoutProxy_SplitHorizontal, METH_VARARGS,
   "V.SplitHorizontal(int, float) -> int\nC++: int SplitHorizontal(int location, double fraction)\n\n"},
  {"AssignView", PyvtkSMViewLayoutProxy_AssignView, METH_VARARGS,
   "V.AssignView(int, vtkSMViewProxy) -> bool\nC++: bool AssignView(int location, vtkSMViewProxy *view)\n\nAssign a view at a particular location. Note that the view's\nposition may be changed by Split() calls. Returns true on\nsuccess.\n"},
  {"AssignViewToAnyCell", PyvtkSMViewLayoutProxy_AssignViewToAnyCell, METH_VARARGS,
   "V.AssignViewToAnyCell(vtkSMViewProxy, int) -> int\nC++: int AssignViewToAnyCell(vtkSMViewProxy *view,\n    int location_hint)\n\nSimilar to AssignView() except that is location specified is not\navailable, then this method treats the location merely as a hint\nand tries to find a suitable place. First, if any empty cell is\navailable, then that is used. Second, if no empty cell is\navailable and location is a valid cell, then we either split the\ncell or traverse down the sub-tree from the cell and split a cell\nto make room for the view. Thus, this method will always assign\nthe view to a frame. Returns the assigned location.\n"},
  {"RemoveView", PyvtkSMViewLayoutProxy_RemoveView, METH_VARARGS,
   "V.RemoveView(vtkSMViewProxy) -> int\nC++: int RemoveView(vtkSMViewProxy *view)\nV.RemoveView(int) -> bool\nC++: bool RemoveView(int index)\n\nRemoves a view. Returns the location of the cell emptied by the\nview, if any, otherwise -1.\n"},
  {"Collapse", PyvtkSMViewLayoutProxy_Collapse, METH_VARARGS,
   "V.Collapse(int) -> bool\nC++: bool Collapse(int location)\n\nCollapses a cell. Only leaf cells without any assigned views can\nbe collapsed. If the cell has a sibling, then that sibling is\nassigned to the parent node and the sibling cell is destroyed as\nwell. Returns true on success, else false.\n"},
  {"SwapCells", PyvtkSMViewLayoutProxy_SwapCells, METH_VARARGS,
   "V.SwapCells(int, int) -> bool\nC++: bool SwapCells(int location1, int location2)\n\nSwaps the cells at the two locations. Both locations must be leaf\nlocations i.e. cannot be split-cells.\n"},
  {"SetSplitFraction", PyvtkSMViewLayoutProxy_SetSplitFraction, METH_VARARGS,
   "V.SetSplitFraction(int, float) -> bool\nC++: bool SetSplitFraction(int location, double fraction)\n\nUpdate the split fraction for a split cell. If\nIsSplitCell(location) returns false, this method does not update\nthe fraction.\n"},
  {"MaximizeCell", PyvtkSMViewLayoutProxy_MaximizeCell, METH_VARARGS,
   "V.MaximizeCell(int) -> bool\nC++: bool MaximizeCell(int location)\n\nOne can maximize a particular (non-split) cell. Note the\nmaximized state is restored as soon as the layout is changed or\nwhen RestoreMaximizedState() is called. Returns false if the cell\nat the location cannot be maximized since it's a split cell or\ninvalid cell, true otherwise.\n"},
  {"RestoreMaximizedState", PyvtkSMViewLayoutProxy_RestoreMaximizedState, METH_VARARGS,
   "V.RestoreMaximizedState()\nC++: void RestoreMaximizedState()\n\nRestores the maximized state.\n"},
  {"GetMaximizedCell", PyvtkSMViewLayoutProxy_GetMaximizedCell, METH_VARARGS,
   "V.GetMaximizedCell() -> int\nC++: virtual int GetMaximizedCell()\n\nReturns the maximized cell, if any. Returns -1 if no cell is\ncurrently maximized.\n"},
  {"IsSplitCell", PyvtkSMViewLayoutProxy_IsSplitCell, METH_VARARGS,
   "V.IsSplitCell(int) -> bool\nC++: bool IsSplitCell(int location)\n\nReturns true if the cell identified by the location is a split\ncell.\n"},
  {"GetSplitDirection", PyvtkSMViewLayoutProxy_GetSplitDirection, METH_VARARGS,
   "V.GetSplitDirection(int) -> Direction\nC++: Direction GetSplitDirection(int location)\n\nReturns the split direction for a split cell at the given\nlocation.\n"},
  {"GetSplitFraction", PyvtkSMViewLayoutProxy_GetSplitFraction, METH_VARARGS,
   "V.GetSplitFraction(int) -> float\nC++: double GetSplitFraction(int location)\n\nReturns the split-fraction for a split cell at the given\nlocation.\n"},
  {"GetFirstChild", PyvtkSMViewLayoutProxy_GetFirstChild, METH_VARARGS,
   "V.GetFirstChild(int) -> int\nC++: static int GetFirstChild(int location)\n\nReturns the index for the first child of the given location. This\ndoes not do any validity checks for the location, nor that of the\nchild.\n"},
  {"GetSecondChild", PyvtkSMViewLayoutProxy_GetSecondChild, METH_VARARGS,
   "V.GetSecondChild(int) -> int\nC++: static int GetSecondChild(int location)\n\nReturns the index for the second child of the given location.\nThis does not do any validity checks for the location, nor that\nof the child.\n"},
  {"GetParent", PyvtkSMViewLayoutProxy_GetParent, METH_VARARGS,
   "V.GetParent(int) -> int\nC++: static int GetParent(int location)\n\nReturns the parent index.\n"},
  {"GetView", PyvtkSMViewLayoutProxy_GetView, METH_VARARGS,
   "V.GetView(int) -> vtkSMViewProxy\nC++: vtkSMViewProxy *GetView(int location)\n\nReturns the view, if any, assigned to the given cell location.\n"},
  {"GetViewLocation", PyvtkSMViewLayoutProxy_GetViewLocation, METH_VARARGS,
   "V.GetViewLocation(vtkSMViewProxy) -> int\nC++: int GetViewLocation(vtkSMViewProxy *)\n\nReturns the location for the view, of any. Returns -1 if the view\nis not found.\n"},
  {"ContainsView", PyvtkSMViewLayoutProxy_ContainsView, METH_VARARGS,
   "V.ContainsView(vtkSMViewProxy) -> bool\nC++: bool ContainsView(vtkSMViewProxy *view)\nV.ContainsView(vtkSMProxy) -> bool\nC++: bool ContainsView(vtkSMProxy *view)\n\nReturns if a view is contained in this layout.\n"},
  {"UpdateViewPositions", PyvtkSMViewLayoutProxy_UpdateViewPositions, METH_VARARGS,
   "V.UpdateViewPositions()\nC++: void UpdateViewPositions()\n\nUpdates positions for all views using the layout and current\nsizes. This method is called automatically when the layout\nchanges or the \"ViewSize\" property on the assigned views changes.\n"},
  {"ShowViewsOnTileDisplay", PyvtkSMViewLayoutProxy_ShowViewsOnTileDisplay, METH_VARARGS,
   "V.ShowViewsOnTileDisplay()\nC++: void ShowViewsOnTileDisplay()\n\nWhen in tile-display configuration, only 1 view-layout is shown\non the tile-display (for obvious reasons). To show any particular\nlayout on the tile display, simply call this method.\n"},
  {"CaptureWindow", PyvtkSMViewLayoutProxy_CaptureWindow, METH_VARARGS,
   "V.CaptureWindow(int) -> vtkImageData\nC++: vtkImageData *CaptureWindow(int magnification)\nV.CaptureWindow(int, int) -> vtkImageData\nC++: vtkImageData *CaptureWindow(int magnificationX,\n    int magnificationY)\n\nCaptures an image from the layout (including all the views in the\nlayout.\n"},
  {"SaveXMLState", PyvtkSMViewLayoutProxy_SaveXMLState, METH_VARARGS,
   "V.SaveXMLState(vtkPVXMLElement) -> vtkPVXMLElement\nC++: vtkPVXMLElement *SaveXMLState(vtkPVXMLElement *root)\n    override;\nV.SaveXMLState(vtkPVXMLElement, vtkSMPropertyIterator)\n    -> vtkPVXMLElement\nC++: vtkPVXMLElement *SaveXMLState(vtkPVXMLElement *root,\n    vtkSMPropertyIterator *iter) override;\n\nOverridden to save custom XML state.\n"},
  {"LoadXMLState", PyvtkSMViewLayoutProxy_LoadXMLState, METH_VARARGS,
   "V.LoadXMLState(vtkPVXMLElement, vtkSMProxyLocator) -> int\nC++: int LoadXMLState(vtkPVXMLElement *element,\n    vtkSMProxyLocator *locator) override;\n\nOverridden to load custom XML state.\n"},
  {"Reset", PyvtkSMViewLayoutProxy_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nResets the layout.\n"},
  {"GetLayoutExtent", PyvtkSMViewLayoutProxy_GetLayoutExtent, METH_VARARGS,
   "V.GetLayoutExtent([int, int, int, int])\nC++: void GetLayoutExtent(int extent[4])\n\nReturns the extents for all views in the layout.\n"},
  {"SetSize", PyvtkSMViewLayoutProxy_SetSize, METH_VARARGS,
   "V.SetSize((int, int))\nC++: void SetSize(const int size[2])\n\nUpdate the size for all the views in the layout assuming the new\nsize provided for the whole layout.\n"},
  {"GetSize", PyvtkSMViewLayoutProxy_GetSize, METH_VARARGS,
   "V.GetSize() -> vtkVector2i\nC++: vtkVector2i GetSize()\n\n"},
  {"FindLayout", PyvtkSMViewLayoutProxy_FindLayout, METH_VARARGS,
   "V.FindLayout(vtkSMViewProxy, string) -> vtkSMViewLayoutProxy\nC++: static vtkSMViewLayoutProxy *FindLayout(vtkSMViewProxy *,\n    const char *reggroup=\"layouts\")\n\nHelper method to locate a layout, if any that contains the\nspecified view proxy.\n"},
  {"SetSeparatorColor", PyvtkSMViewLayoutProxy_SetSeparatorColor, METH_VARARGS,
   "V.SetSeparatorColor(int, int, int)\nC++: void SetSeparatorColor(unsigned char r, unsigned char g,\n    unsigned char b)\nV.SetSeparatorColor(float, float, float)\nC++: void SetSeparatorColor(double, double, double)\nV.SetSeparatorColor((float, float, float))\nC++: void SetSeparatorColor(double a[3])\n\nSet the color to use for separator between views in multi-view\nconfigurations when saving images.\n@param[in] r Red component value in range (0, 255);\n@param[in] g Green component value in range (0, 255);\n@param[in] b Blue component value in range (0, 255);\n"},
  {"GetSeparatorColor", PyvtkSMViewLayoutProxy_GetSeparatorColor, METH_VARARGS,
   "V.GetSeparatorColor() -> (float, float, float)\nC++: double *GetSeparatorColor()\n\n"},
  {"SetSeparatorWidth", PyvtkSMViewLayoutProxy_SetSeparatorWidth, METH_VARARGS,
   "V.SetSeparatorWidth(int)\nC++: virtual void SetSeparatorWidth(int _arg)\n\nGet/Set the separator width (in pixels) to use for separator\nbetween views in multi-view configurations.\n"},
  {"GetSeparatorWidthMinValue", PyvtkSMViewLayoutProxy_GetSeparatorWidthMinValue, METH_VARARGS,
   "V.GetSeparatorWidthMinValue() -> int\nC++: virtual int GetSeparatorWidthMinValue()\n\nGet/Set the separator width (in pixels) to use for separator\nbetween views in multi-view configurations.\n"},
  {"GetSeparatorWidthMaxValue", PyvtkSMViewLayoutProxy_GetSeparatorWidthMaxValue, METH_VARARGS,
   "V.GetSeparatorWidthMaxValue() -> int\nC++: virtual int GetSeparatorWidthMaxValue()\n\nGet/Set the separator width (in pixels) to use for separator\nbetween views in multi-view configurations.\n"},
  {"GetSeparatorWidth", PyvtkSMViewLayoutProxy_GetSeparatorWidth, METH_VARARGS,
   "V.GetSeparatorWidth() -> int\nC++: virtual int GetSeparatorWidth()\n\nGet/Set the separator width (in pixels) to use for separator\nbetween views in multi-view configurations.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMViewLayoutProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMViewLayoutProxy", // tp_name
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
  PyvtkSMViewLayoutProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMViewLayoutProxy_StaticNew()
{
  return vtkSMViewLayoutProxy::New();
}

PyObject *PyvtkSMViewLayoutProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMViewLayoutProxy_Type, PyvtkSMViewLayoutProxy_Methods,
    "vtkSMViewLayoutProxy",
 &PyvtkSMViewLayoutProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMViewLayoutProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMProxy_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSMViewLayoutProxy_Direction_Type);
  PyvtkSMViewLayoutProxy_Direction_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSMViewLayoutProxy_Direction_Type);

  o = (PyObject *)&PyvtkSMViewLayoutProxy_Direction_Type;
  if (PyDict_SetItemString(d, "Direction", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkSMViewLayoutProxy::Direction cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "NONE", vtkSMViewLayoutProxy::NONE },
        { "VERTICAL", vtkSMViewLayoutProxy::VERTICAL },
        { "HORIZONTAL", vtkSMViewLayoutProxy::HORIZONTAL },
      };

    o = PyvtkSMViewLayoutProxy_Direction_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMViewLayoutProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMViewLayoutProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMViewLayoutProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

