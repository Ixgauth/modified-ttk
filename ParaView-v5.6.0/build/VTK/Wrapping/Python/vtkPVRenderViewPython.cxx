// python wrapper for vtkPVRenderView
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
#include "vtkStdString.h"
#include "vtkPVRenderView.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVRenderView(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVRenderView_ClassNew(); }

#ifndef DECLARED_PyvtkPVView_ClassNew
extern "C" { PyObject *PyvtkPVView_ClassNew(); }
#define DECLARED_PyvtkPVView_ClassNew
#endif

static const char *PyvtkPVRenderView_Doc =
  "vtkPVRenderView - Render View for ParaView.\n\n"
  "Superclass: vtkPVView\n\n"
  "vtkRenderView equivalent that is specialized for ParaView.\n"
  "vtkRenderView handles polygonal rendering for ParaView in all the\n"
  "different modes of operation. vtkPVRenderView instance must be\n"
  "created on all involved processes. vtkPVRenderView uses the\n"
  "information about what process it has been created on to decide what\n"
  "part of the \"rendering\" happens on the process.\n\n";

static PyTypeObject PyvtkPVRenderView_InteractionModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVRenderView.InteractionModes", // tp_name
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

PyObject *PyvtkPVRenderView_InteractionModes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkPVRenderView_InteractionModes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVRenderView_InteractionModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkPVRenderView_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVRenderView::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVRenderView::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVRenderView *tempr = vtkPVRenderView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVRenderView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVRenderView::NewInstance());

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
PyvtkPVRenderView_SetInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionMode(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetInteractionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionMode() :
      op->vtkPVRenderView::GetInteractionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkPVRenderView::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0, temp1);
    }
    else
    {
      op->vtkPVRenderView::SetSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0, temp1);
    }
    else
    {
      op->vtkPVRenderView::SetPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetNonCompositedRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonCompositedRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetNonCompositedRenderer() :
      op->vtkPVRenderView::GetNonCompositedRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0 = vtkPVRenderView::DEFAULT_RENDERER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer(temp0) :
      op->vtkPVRenderView::GetRenderer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetActiveCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetActiveCamera() :
      op->vtkPVRenderView::GetActiveCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetActiveCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  vtkCamera *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
  {
    if (ap.IsBound())
    {
      op->SetActiveCamera(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetActiveCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkPVRenderView::GetRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkPVRenderView::GetInteractor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetupInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->SetupInteractor(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetupInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetInteractorStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractorStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVInteractorStyle *tempr = (ap.IsBound() ?
      op->GetInteractorStyle() :
      op->vtkPVRenderView::GetInteractorStyle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_ResetCamera_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetCamera();
    }
    else
    {
      op->vtkPVRenderView::ResetCamera();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVRenderView_ResetCamera_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->ResetCamera(temp0);
    }
    else
    {
      op->vtkPVRenderView::ResetCamera(temp0);
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
PyvtkPVRenderView_ResetCamera(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPVRenderView_ResetCamera_s1(self, args);
    case 1:
      return PyvtkPVRenderView_ResetCamera_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ResetCamera");
  return nullptr;
}



static PyObject *
PyvtkPVRenderView_StillRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StillRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StillRender();
    }
    else
    {
      op->vtkPVRenderView::StillRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_InteractiveRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractiveRender();
    }
    else
    {
      op->vtkPVRenderView::InteractiveRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetStillRenderImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStillRenderImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStillRenderImageReductionFactor(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetStillRenderImageReductionFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetStillRenderImageReductionFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStillRenderImageReductionFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStillRenderImageReductionFactorMinValue() :
      op->vtkPVRenderView::GetStillRenderImageReductionFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetStillRenderImageReductionFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStillRenderImageReductionFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStillRenderImageReductionFactorMaxValue() :
      op->vtkPVRenderView::GetStillRenderImageReductionFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetStillRenderImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStillRenderImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStillRenderImageReductionFactor() :
      op->vtkPVRenderView::GetStillRenderImageReductionFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetInteractiveRenderImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractiveRenderImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractiveRenderImageReductionFactor(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetInteractiveRenderImageReductionFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetInteractiveRenderImageReductionFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveRenderImageReductionFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractiveRenderImageReductionFactorMinValue() :
      op->vtkPVRenderView::GetInteractiveRenderImageReductionFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetInteractiveRenderImageReductionFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveRenderImageReductionFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractiveRenderImageReductionFactorMaxValue() :
      op->vtkPVRenderView::GetInteractiveRenderImageReductionFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetInteractiveRenderImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveRenderImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractiveRenderImageReductionFactor() :
      op->vtkPVRenderView::GetInteractiveRenderImageReductionFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetRemoteRenderingThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoteRenderingThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRemoteRenderingThreshold(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetRemoteRenderingThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetRemoteRenderingThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoteRenderingThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRemoteRenderingThreshold() :
      op->vtkPVRenderView::GetRemoteRenderingThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetLODRenderingThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODRenderingThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLODRenderingThreshold(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetLODRenderingThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetLODRenderingThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODRenderingThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLODRenderingThreshold() :
      op->vtkPVRenderView::GetLODRenderingThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetLODResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLODResolution(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetLODResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetLODResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLODResolutionMinValue() :
      op->vtkPVRenderView::GetLODResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetLODResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLODResolutionMaxValue() :
      op->vtkPVRenderView::GetLODResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetLODResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLODResolution() :
      op->vtkPVRenderView::GetLODResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetUseOutlineForLODRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOutlineForLODRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseOutlineForLODRendering(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetUseOutlineForLODRendering(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetUseOutlineForLODRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOutlineForLODRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseOutlineForLODRendering() :
      op->vtkPVRenderView::GetUseOutlineForLODRendering());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_ConfigureCompressor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConfigureCompressor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ConfigureCompressor(temp0);
    }
    else
    {
      op->vtkPVRenderView::ConfigureCompressor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_ResetCameraClippingRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCameraClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetCameraClippingRange();
    }
    else
    {
      op->vtkPVRenderView::ResetCameraClippingRange();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetUseLightKit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseLightKit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseLightKit(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetUseLightKit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetUseLightKit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLightKit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseLightKit() :
      op->vtkPVRenderView::GetUseLightKit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_UseLightKitOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLightKitOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLightKitOn();
    }
    else
    {
      op->vtkPVRenderView::UseLightKitOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_UseLightKitOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLightKitOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLightKitOff();
    }
    else
    {
      op->vtkPVRenderView::UseLightKitOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_StreamingUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StreamingUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  const size_t size0 = 24;
  double temp0[24];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->StreamingUpdate(temp0);
    }
    else
    {
      op->vtkPVRenderView::StreamingUpdate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_DeliverStreamedPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeliverStreamedPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  unsigned int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned int> store1(2*size1);
  unsigned int *temp1 = store1.Data();
  unsigned int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->DeliverStreamedPieces(temp0, temp1);
    }
    else
    {
      op->vtkPVRenderView::DeliverStreamedPieces(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_USE_LOD(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "USE_LOD");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkPVRenderView::USE_LOD();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_LOD_RESOLUTION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LOD_RESOLUTION");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleKey *tempr = vtkPVRenderView::LOD_RESOLUTION();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_USE_OUTLINE_FOR_LOD(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "USE_OUTLINE_FOR_LOD");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkPVRenderView::USE_OUTLINE_FOR_LOD();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_RENDER_EMPTY_IMAGES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RENDER_EMPTY_IMAGES");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkPVRenderView::RENDER_EMPTY_IMAGES();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_NEED_ORDERED_COMPOSITING(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NEED_ORDERED_COMPOSITING");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkPVRenderView::NEED_ORDERED_COMPOSITING();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_VIEW_PLANES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "VIEW_PLANES");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleVectorKey *tempr = vtkPVRenderView::VIEW_PLANES();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_REQUEST_STREAMING_UPDATE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_STREAMING_UPDATE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationRequestKey *tempr = vtkPVRenderView::REQUEST_STREAMING_UPDATE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_REQUEST_PROCESS_STREAMED_PIECE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_PROCESS_STREAMED_PIECE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationRequestKey *tempr = vtkPVRenderView::REQUEST_PROCESS_STREAMED_PIECE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SelectCells_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

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
      op->SelectCells(temp0);
    }
    else
    {
      op->vtkPVRenderView::SelectCells(temp0);
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
PyvtkPVRenderView_SelectCells_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SelectCells(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVRenderView::SelectCells(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVRenderView_SelectCells(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPVRenderView_SelectCells_s1(self, args);
    case 4:
      return PyvtkPVRenderView_SelectCells_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SelectCells");
  return nullptr;
}



static PyObject *
PyvtkPVRenderView_SelectPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

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
      op->SelectPoints(temp0);
    }
    else
    {
      op->vtkPVRenderView::SelectPoints(temp0);
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
PyvtkPVRenderView_SelectPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SelectPoints(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVRenderView::SelectPoints(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVRenderView_SelectPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPVRenderView_SelectPoints_s1(self, args);
    case 4:
      return PyvtkPVRenderView_SelectPoints_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SelectPoints");
  return nullptr;
}



static PyObject *
PyvtkPVRenderView_Select(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Select");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  const size_t size1 = 4;
  int temp1[4];
  int save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->Select(temp0, temp1);
    }
    else
    {
      op->vtkPVRenderView::Select(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SelectPolygonPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPolygonPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SelectPolygonPoints(temp0, temp1);
    }
    else
    {
      op->vtkPVRenderView::SelectPolygonPoints(temp0, temp1);
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
PyvtkPVRenderView_SelectPolygonCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPolygonCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SelectPolygonCells(temp0, temp1);
    }
    else
    {
      op->vtkPVRenderView::SelectPolygonCells(temp0, temp1);
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
PyvtkPVRenderView_SelectPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SelectPolygon(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVRenderView::SelectPolygon(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetLastSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelection *tempr = (ap.IsBound() ?
      op->GetLastSelection() :
      op->vtkPVRenderView::GetLastSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetUseInteractiveRenderingForScreenshots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseInteractiveRenderingForScreenshots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseInteractiveRenderingForScreenshots(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetUseInteractiveRenderingForScreenshots(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_UseInteractiveRenderingForScreenshotsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInteractiveRenderingForScreenshotsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseInteractiveRenderingForScreenshotsOn();
    }
    else
    {
      op->vtkPVRenderView::UseInteractiveRenderingForScreenshotsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_UseInteractiveRenderingForScreenshotsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInteractiveRenderingForScreenshotsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseInteractiveRenderingForScreenshotsOff();
    }
    else
    {
      op->vtkPVRenderView::UseInteractiveRenderingForScreenshotsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetUseInteractiveRenderingForScreenshots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseInteractiveRenderingForScreenshots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseInteractiveRenderingForScreenshots() :
      op->vtkPVRenderView::GetUseInteractiveRenderingForScreenshots());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetRemoteRenderingAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoteRenderingAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRemoteRenderingAvailable() :
      op->vtkPVRenderView::GetRemoteRenderingAvailable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_RemoteRenderingAvailableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoteRenderingAvailableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoteRenderingAvailableOff();
    }
    else
    {
      op->vtkPVRenderView::RemoteRenderingAvailableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_NVPipeAvailableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NVPipeAvailableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NVPipeAvailableOn();
    }
    else
    {
      op->vtkPVRenderView::NVPipeAvailableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_NVPipeAvailableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NVPipeAvailableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NVPipeAvailableOff();
    }
    else
    {
      op->vtkPVRenderView::NVPipeAvailableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetUsedLODForLastRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUsedLODForLastRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUsedLODForLastRender() :
      op->vtkPVRenderView::GetUsedLODForLastRender());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_InvalidateCachedSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvalidateCachedSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvalidateCachedSelection();
    }
    else
    {
      op->vtkPVRenderView::InvalidateCachedSelection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetZbufferDataAtPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferDataAtPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->GetZbufferDataAtPoint(temp0, temp1) :
      op->vtkPVRenderView::GetZbufferDataAtPoint(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetPiece(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetPiece");

  vtkInformation *temp0 = nullptr;
  vtkPVDataRepresentation *temp1 = nullptr;
  vtkDataObject *temp2 = nullptr;
  unsigned long temp3 = 0;
  int temp4 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 5) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      ap.GetVTKObject(temp2, "vtkDataObject") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    vtkPVRenderView::SetPiece(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetPieceProducer(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPieceProducer");

  vtkInformation *temp0 = nullptr;
  vtkPVDataRepresentation *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkAlgorithmOutput *tempr = vtkPVRenderView::GetPieceProducer(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetPieceLOD(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetPieceLOD");

  vtkInformation *temp0 = nullptr;
  vtkPVDataRepresentation *temp1 = nullptr;
  vtkDataObject *temp2 = nullptr;
  int temp3 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      ap.GetVTKObject(temp2, "vtkDataObject") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkPVRenderView::SetPieceLOD(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetPieceProducerLOD(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPieceProducerLOD");

  vtkInformation *temp0 = nullptr;
  vtkPVDataRepresentation *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkAlgorithmOutput *tempr = vtkPVRenderView::GetPieceProducerLOD(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_MarkAsRedistributable(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MarkAsRedistributable");

  vtkInformation *temp0 = nullptr;
  vtkPVDataRepresentation *temp1 = nullptr;
  bool temp2 = true;
  int temp3 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 4) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkPVRenderView::MarkAsRedistributable(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetRedistributionMode(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetRedistributionMode");

  vtkInformation *temp0 = nullptr;
  vtkPVDataRepresentation *temp1 = nullptr;
  int temp2;
  int temp3 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkPVRenderView::SetRedistributionMode(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetRedistributionModeToSplitBoundaryCells(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetRedistributionModeToSplitBoundaryCells");

  vtkInformation *temp0 = nullptr;
  vtkPVDataRepresentation *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkPVRenderView::SetRedistributionModeToSplitBoundaryCells(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetRedistributionModeToDuplicateBoundaryCells(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetRedistributionModeToDuplicateBoundaryCells");

  vtkInformation *temp0 = nullptr;
  vtkPVDataRepresentation *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkPVRenderView::SetRedistributionModeToDuplicateBoundaryCells(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetGeometryBounds(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGeometryBounds");

  vtkInformation *temp0 = nullptr;
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  vtkMatrix4x4 *temp2 = NULL;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkMatrix4x4")))
  {
    ap.Save(temp1, save1, size1);

    vtkPVRenderView::SetGeometryBounds(temp0, temp1, temp2);

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetStreamable(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetStreamable");

  vtkInformation *temp0 = nullptr;
  vtkPVDataRepresentation *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      ap.GetValue(temp2))
  {
    vtkPVRenderView::SetStreamable(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetNextStreamedPiece(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetNextStreamedPiece");

  vtkInformation *temp0 = nullptr;
  vtkPVDataRepresentation *temp1 = nullptr;
  vtkDataObject *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      ap.GetVTKObject(temp2, "vtkDataObject"))
  {
    vtkPVRenderView::SetNextStreamedPiece(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetCurrentStreamedPiece(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCurrentStreamedPiece");

  vtkInformation *temp0 = nullptr;
  vtkPVDataRepresentation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation"))
  {
    vtkDataObject *tempr = vtkPVRenderView::GetCurrentStreamedPiece(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetMaxClipBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxClipBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetMaxClipBounds(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetMaxClipBounds(temp0);
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
PyvtkPVRenderView_SetLockBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLockBounds(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetLockBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetLockBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLockBounds() :
      op->vtkPVRenderView::GetLockBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetDeliverToAllProcesses(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDeliverToAllProcesses");

  vtkInformation *temp0 = nullptr;
  vtkPVDataRepresentation *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      ap.GetValue(temp2))
  {
    vtkPVRenderView::SetDeliverToAllProcesses(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetDeliverToClientAndRenderingProcesses(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDeliverToClientAndRenderingProcesses");

  vtkInformation *temp0 = nullptr;
  vtkPVDataRepresentation *temp1 = nullptr;
  bool temp2 = false;
  bool temp3 = false;
  int temp4 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    vtkPVRenderView::SetDeliverToClientAndRenderingProcesses(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetOrderedCompositingInformation_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetOrderedCompositingInformation");

  vtkInformation *temp0 = nullptr;
  vtkPVDataRepresentation *temp1 = nullptr;
  vtkExtentTranslator *temp2 = nullptr;
  const size_t size3 = 6;
  int temp3[6];
  const size_t size4 = 3;
  double temp4[3];
  const size_t size5 = 3;
  double temp5[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      ap.GetVTKObject(temp2, "vtkExtentTranslator") &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPVRenderView::SetOrderedCompositingInformation(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVRenderView_SetOrderedCompositingInformation_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetOrderedCompositingInformation");

  vtkInformation *temp0 = nullptr;
  const size_t size1 = 6;
  double temp1[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetArray(temp1, size1))
  {
    vtkPVRenderView::SetOrderedCompositingInformation(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVRenderView_SetOrderedCompositingInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 6:
      return PyvtkPVRenderView_SetOrderedCompositingInformation_s1(self, args);
    case 2:
      return PyvtkPVRenderView_SetOrderedCompositingInformation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrderedCompositingInformation");
  return nullptr;
}



static PyObject *
PyvtkPVRenderView_SetRequiresDistributedRendering(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetRequiresDistributedRendering");

  vtkInformation *temp0 = nullptr;
  vtkPVDataRepresentation *temp1 = nullptr;
  bool temp2 = false;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkPVRenderView::SetRequiresDistributedRendering(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetRequiresDistributedRenderingLOD(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetRequiresDistributedRenderingLOD");

  vtkInformation *temp0 = nullptr;
  vtkPVDataRepresentation *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      ap.GetValue(temp2))
  {
    vtkPVRenderView::SetRequiresDistributedRenderingLOD(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetForceDataDistributionMode(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetForceDataDistributionMode");

  vtkInformation *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
  {
    vtkPVRenderView::SetForceDataDistributionMode(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_IsForceDataDistributionModeSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsForceDataDistributionModeSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsForceDataDistributionModeSet() :
      op->vtkPVRenderView::IsForceDataDistributionModeSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetForceDataDistributionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceDataDistributionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetForceDataDistributionMode() :
      op->vtkPVRenderView::GetForceDataDistributionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_RegisterPropForHardwareSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPropForHardwareSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  vtkPVDataRepresentation *temp0 = nullptr;
  vtkProp *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      ap.GetVTKObject(temp1, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->RegisterPropForHardwareSelection(temp0, temp1);
    }
    else
    {
      op->vtkPVRenderView::RegisterPropForHardwareSelection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_UnRegisterPropForHardwareSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterPropForHardwareSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  vtkPVDataRepresentation *temp0 = nullptr;
  vtkProp *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      ap.GetVTKObject(temp1, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->UnRegisterPropForHardwareSelection(temp0, temp1);
    }
    else
    {
      op->vtkPVRenderView::UnRegisterPropForHardwareSelection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetShowAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowAnnotation(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetShowAnnotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetUpdateAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUpdateAnnotation(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetUpdateAnnotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetAnnotationColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

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
      op->SetAnnotationColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVRenderView::SetAnnotationColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetGridAxes3DActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridAxes3DActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  vtkPVGridAxes3DActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVGridAxes3DActor"))
  {
    if (ap.IsBound())
    {
      op->SetGridAxes3DActor(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetGridAxes3DActor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetOrientationAxesInteractivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationAxesInteractivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationAxesInteractivity(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetOrientationAxesInteractivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetOrientationAxesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationAxesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationAxesVisibility(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetOrientationAxesVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetOrientationAxesLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationAxesLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

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
      op->SetOrientationAxesLabelColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVRenderView::SetOrientationAxesLabelColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetOrientationAxesOutlineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationAxesOutlineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

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
      op->SetOrientationAxesOutlineColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVRenderView::SetOrientationAxesOutlineColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetCenterAxesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterAxesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCenterAxesVisibility(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetCenterAxesVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetCenterOfRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterOfRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

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
      op->SetCenterOfRotation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVRenderView::SetCenterOfRotation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetRotationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotationFactor(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetRotationFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetKeyLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyLightWarmth(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetKeyLightWarmth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetKeyLightIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyLightIntensity(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetKeyLightIntensity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetKeyLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyLightElevation(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetKeyLightElevation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetKeyLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyLightAzimuth(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetKeyLightAzimuth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetFillLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFillLightWarmth(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetFillLightWarmth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetKeyToFillRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyToFillRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyToFillRatio(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetKeyToFillRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetFillLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFillLightElevation(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetFillLightElevation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetFillLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFillLightAzimuth(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetFillLightAzimuth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetBackLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackLightWarmth(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetBackLightWarmth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetKeyToBackRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyToBackRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyToBackRatio(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetKeyToBackRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetBackLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackLightElevation(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetBackLightElevation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetBackLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackLightAzimuth(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetBackLightAzimuth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetHeadLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeadLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeadLightWarmth(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetHeadLightWarmth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetKeyToHeadRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyToHeadRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyToHeadRatio(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetKeyToHeadRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetMaintainLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaintainLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaintainLuminance(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetMaintainLuminance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetUseHiddenLineRemoval(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseHiddenLineRemoval");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseHiddenLineRemoval(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetUseHiddenLineRemoval(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetUseDepthPeeling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDepthPeeling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDepthPeeling(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetUseDepthPeeling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetUseDepthPeelingForVolumes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDepthPeelingForVolumes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDepthPeelingForVolumes(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetUseDepthPeelingForVolumes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetMaximumNumberOfPeels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfPeels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfPeels(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetMaximumNumberOfPeels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

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
      op->SetBackground(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVRenderView::SetBackground(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetBackground2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

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
      op->SetBackground2(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVRenderView::SetBackground2(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetBackgroundTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  vtkTexture *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTexture"))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundTexture(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetBackgroundTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetGradientBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGradientBackground(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetGradientBackground(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetTexturedBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexturedBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTexturedBackground(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetTexturedBackground(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_AddLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  vtkLight *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLight"))
  {
    if (ap.IsBound())
    {
      op->AddLight(temp0);
    }
    else
    {
      op->vtkPVRenderView::AddLight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_RemoveLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  vtkLight *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLight"))
  {
    if (ap.IsBound())
    {
      op->RemoveLight(temp0);
    }
    else
    {
      op->vtkPVRenderView::RemoveLight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetStereoCapableWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoCapableWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStereoCapableWindow(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetStereoCapableWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetStereoRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStereoRender(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetStereoRender(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetStereoType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStereoType(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetStereoType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetServerStereoType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetServerStereoType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetServerStereoType(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetServerStereoType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetMultiSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMultiSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMultiSamples(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetMultiSamples(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetAlphaBitPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlphaBitPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlphaBitPlanes(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetAlphaBitPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetStencilCapable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencilCapable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStencilCapable(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetStencilCapable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetParallelProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParallelProjection(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetParallelProjection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetCamera2DManipulators(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera2DManipulators");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  const size_t size0 = 9;
  int temp0[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCamera2DManipulators(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetCamera2DManipulators(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetCamera3DManipulators(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera3DManipulators");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  const size_t size0 = 9;
  int temp0[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCamera3DManipulators(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetCamera3DManipulators(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetCameraManipulators(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCameraManipulators");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  vtkPVInteractorStyle *temp0 = nullptr;
  const size_t size1 = 9;
  int temp1[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVInteractorStyle") &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetCameraManipulators(temp0, temp1);
    }
    else
    {
      op->vtkPVRenderView::SetCameraManipulators(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetCamera2DMouseWheelMotionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera2DMouseWheelMotionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCamera2DMouseWheelMotionFactor(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetCamera2DMouseWheelMotionFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetCamera3DMouseWheelMotionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera3DMouseWheelMotionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCamera3DMouseWheelMotionFactor(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetCamera3DMouseWheelMotionFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkPVRenderView::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_UpdateLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateLOD();
    }
    else
    {
      op->vtkPVRenderView::UpdateLOD();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetUseLODForInteractiveRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLODForInteractiveRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseLODForInteractiveRender() :
      op->vtkPVRenderView::GetUseLODForInteractiveRender());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetUseDistributedRenderingForRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDistributedRenderingForRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseDistributedRenderingForRender() :
      op->vtkPVRenderView::GetUseDistributedRenderingForRender());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkPVRenderView_GetUseDistributedRenderingForStillRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDistributedRenderingForStillRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseDistributedRenderingForStillRender() :
      op->vtkPVRenderView::GetUseDistributedRenderingForStillRender());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


static PyObject *
PyvtkPVRenderView_GetUseDistributedRenderingForLODRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDistributedRenderingForLODRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseDistributedRenderingForLODRender() :
      op->vtkPVRenderView::GetUseDistributedRenderingForLODRender());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkPVRenderView_GetUseDistributedRenderingForInteractiveRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDistributedRenderingForInteractiveRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseDistributedRenderingForInteractiveRender() :
      op->vtkPVRenderView::GetUseDistributedRenderingForInteractiveRender());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


static PyObject *
PyvtkPVRenderView_GetStillRenderProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStillRenderProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetStillRenderProcesses() :
      op->vtkPVRenderView::GetStillRenderProcesses());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetInteractiveRenderProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveRenderProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetInteractiveRenderProcesses() :
      op->vtkPVRenderView::GetInteractiveRenderProcesses());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetDataDistributionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDistributionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataDistributionMode(temp0) :
      op->vtkPVRenderView::GetDataDistributionMode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetDeliveryManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeliveryManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataDeliveryManager *tempr = (ap.IsBound() ?
      op->GetDeliveryManager() :
      op->vtkPVRenderView::GetDeliveryManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_Deliver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Deliver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  unsigned int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned int> store2(2*size2);
  unsigned int *temp2 = store2.Data();
  unsigned int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->Deliver(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVRenderView::Deliver(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetUseOrderedCompositing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOrderedCompositing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseOrderedCompositing() :
      op->vtkPVRenderView::GetUseOrderedCompositing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetRenderEmptyImages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderEmptyImages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRenderEmptyImages() :
      op->vtkPVRenderView::GetRenderEmptyImages());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetUseFXAA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseFXAA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseFXAA(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetUseFXAA(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetUseFXAA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseFXAA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseFXAA() :
      op->vtkPVRenderView::GetUseFXAA());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetFXAARelativeContrastThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFXAARelativeContrastThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFXAARelativeContrastThreshold(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetFXAARelativeContrastThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetFXAAHardContrastThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFXAAHardContrastThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFXAAHardContrastThreshold(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetFXAAHardContrastThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetFXAASubpixelBlendLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFXAASubpixelBlendLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFXAASubpixelBlendLimit(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetFXAASubpixelBlendLimit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetFXAASubpixelContrastThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFXAASubpixelContrastThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFXAASubpixelContrastThreshold(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetFXAASubpixelContrastThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetFXAAUseHighQualityEndpoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFXAAUseHighQualityEndpoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFXAAUseHighQualityEndpoints(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetFXAAUseHighQualityEndpoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetFXAAEndpointSearchIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFXAAEndpointSearchIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFXAAEndpointSearchIterations(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetFXAAEndpointSearchIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetUpdateTimeStamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateTimeStamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetUpdateTimeStamp() :
      op->vtkPVRenderView::GetUpdateTimeStamp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_CopyViewUpdateOptions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyViewUpdateOptions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  vtkPVRenderView *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVRenderView"))
  {
    if (ap.IsBound())
    {
      op->CopyViewUpdateOptions(temp0);
    }
    else
    {
      op->vtkPVRenderView::CopyViewUpdateOptions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_AddPropToRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPropToRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->AddPropToRenderer(temp0);
    }
    else
    {
      op->vtkPVRenderView::AddPropToRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_RemovePropFromRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePropFromRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->RemovePropFromRenderer(temp0);
    }
    else
    {
      op->vtkPVRenderView::RemovePropFromRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetDrawCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawCells(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetDrawCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetArrayNameToDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayNameToDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayNameToDraw(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetArrayNameToDraw(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetArrayNumberToDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayNumberToDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayNumberToDraw(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetArrayNumberToDraw(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetArrayComponentToDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayComponentToDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayComponentToDraw(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetArrayComponentToDraw(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0, temp1);
    }
    else
    {
      op->vtkPVRenderView::SetScalarRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_BeginValueCapture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginValueCapture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BeginValueCapture();
    }
    else
    {
      op->vtkPVRenderView::BeginValueCapture();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_EndValueCapture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndValueCapture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndValueCapture();
    }
    else
    {
      op->vtkPVRenderView::EndValueCapture();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetValueRenderingModeCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueRenderingModeCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValueRenderingModeCommand(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetValueRenderingModeCommand(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetValueRenderingModeCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRenderingModeCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetValueRenderingModeCommand() :
      op->vtkPVRenderView::GetValueRenderingModeCommand());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_CaptureValuesFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CaptureValuesFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CaptureValuesFloat();
    }
    else
    {
      op->vtkPVRenderView::CaptureValuesFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetCapturedValuesFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapturedValuesFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetCapturedValuesFloat() :
      op->vtkPVRenderView::GetCapturedValuesFloat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_StartCaptureLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartCaptureLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartCaptureLuminance();
    }
    else
    {
      op->vtkPVRenderView::StartCaptureLuminance();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_StopCaptureLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StopCaptureLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StopCaptureLuminance();
    }
    else
    {
      op->vtkPVRenderView::StopCaptureLuminance();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_CaptureZBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CaptureZBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CaptureZBuffer();
    }
    else
    {
      op->vtkPVRenderView::CaptureZBuffer();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetCapturedZBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapturedZBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetCapturedZBuffer() :
      op->vtkPVRenderView::GetCapturedZBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetEnableOSPRay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableOSPRay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableOSPRay(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetEnableOSPRay(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetEnableOSPRay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableOSPRay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnableOSPRay() :
      op->vtkPVRenderView::GetEnableOSPRay());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShadows(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetShadows(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetShadows() :
      op->vtkPVRenderView::GetShadows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetAmbientOcclusionSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbientOcclusionSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAmbientOcclusionSamples(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetAmbientOcclusionSamples(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetAmbientOcclusionSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbientOcclusionSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAmbientOcclusionSamples() :
      op->vtkPVRenderView::GetAmbientOcclusionSamples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetSamplesPerPixel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSamplesPerPixel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSamplesPerPixel(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetSamplesPerPixel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetSamplesPerPixel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSamplesPerPixel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSamplesPerPixel() :
      op->vtkPVRenderView::GetSamplesPerPixel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetMaxFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxFrames(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetMaxFrames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetMaxFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxFrames() :
      op->vtkPVRenderView::GetMaxFrames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetOSPRayContinueStreaming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOSPRayContinueStreaming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOSPRayContinueStreaming() :
      op->vtkPVRenderView::GetOSPRayContinueStreaming());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetLightScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLightScale(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetLightScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetLightScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLightScale() :
      op->vtkPVRenderView::GetLightScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetOSPRayRendererType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOSPRayRendererType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOSPRayRendererType(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetOSPRayRendererType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetBackgroundNorth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundNorth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

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
      op->SetBackgroundNorth(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVRenderView::SetBackgroundNorth(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetBackgroundEast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundEast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

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
      op->SetBackgroundEast(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVRenderView::SetBackgroundEast(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetMaterialLibrary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialLibrary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  vtkPVMaterialLibrary *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVMaterialLibrary"))
  {
    if (ap.IsBound())
    {
      op->SetMaterialLibrary(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetMaterialLibrary(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetViewTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetViewTime(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetViewTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetTimeCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeCacheSize(temp0);
    }
    else
    {
      op->vtkPVRenderView::SetTimeCacheSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetTimeCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeCacheSize() :
      op->vtkPVRenderView::GetTimeCacheSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetDiscreteCameras(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDiscreteCameras");

  vtkInformation *temp0 = nullptr;
  vtkPVDataRepresentation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation"))
  {
    vtkPVCameraCollection *tempr = vtkPVRenderView::GetDiscreteCameras(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetDiscreteCameras(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDiscreteCameras");

  vtkInformation *temp0 = nullptr;
  vtkPVDataRepresentation *temp1 = nullptr;
  vtkPVCameraCollection *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      ap.GetVTKObject(temp2, "vtkPVCameraCollection"))
  {
    vtkPVRenderView::SetDiscreteCameras(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetRenderView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderViewBase *tempr = (ap.IsBound() ?
      op->GetRenderView() :
      op->vtkPVRenderView::GetRenderView());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVRenderView_Methods[] = {
  {"IsTypeOf", PyvtkPVRenderView_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVRenderView_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVRenderView_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVRenderView\nC++: static vtkPVRenderView *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVRenderView_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVRenderView\nC++: vtkPVRenderView *NewInstance()\n\n"},
  {"SetInteractionMode", PyvtkPVRenderView_SetInteractionMode, METH_VARARGS,
   "V.SetInteractionMode(int)\nC++: virtual void SetInteractionMode(int mode)\n\nGet/Set the interaction mode. Default is INTERACTION_MODE_3D. If\nINTERACTION_MODE_SELECTION is selected, then whenever the user\ndrags and creates a selection region, this class will fire a\nvtkCommand::SelectionChangedEvent event with the selection region\nas the argument.\n\note CallOnAllProcesses\n\note this must be called on all processes, however it will have\nany effect only the driver processes i.e. the process with the\ninteractor.\n"},
  {"GetInteractionMode", PyvtkPVRenderView_GetInteractionMode, METH_VARARGS,
   "V.GetInteractionMode() -> int\nC++: virtual int GetInteractionMode()\n\nGet/Set the interaction mode. Default is INTERACTION_MODE_3D. If\nINTERACTION_MODE_SELECTION is selected, then whenever the user\ndrags and creates a selection region, this class will fire a\nvtkCommand::SelectionChangedEvent event with the selection region\nas the argument.\n\note CallOnAllProcesses\n\note this must be called on all processes, however it will have\nany effect only the driver processes i.e. the process with the\ninteractor.\n"},
  {"Initialize", PyvtkPVRenderView_Initialize, METH_VARARGS,
   "V.Initialize(int)\nC++: void Initialize(unsigned int id) override;\n\nInitialize the view with an identifier. Unless noted otherwise,\nthis method must be called before calling any other methods on\nthis class.\n\note CallOnAllProcesses\n"},
  {"SetSize", PyvtkPVRenderView_SetSize, METH_VARARGS,
   "V.SetSize(int, int)\nC++: void SetSize(int, int) override;\n\nOverridden to call InvalidateCachedSelection() whenever the\nrender window parameters change.\n"},
  {"SetPosition", PyvtkPVRenderView_SetPosition, METH_VARARGS,
   "V.SetPosition(int, int)\nC++: void SetPosition(int, int) override;\n\nOverridden to call InvalidateCachedSelection() whenever the\nrender window parameters change.\n"},
  {"GetNonCompositedRenderer", PyvtkPVRenderView_GetNonCompositedRenderer, METH_VARARGS,
   "V.GetNonCompositedRenderer() -> vtkRenderer\nC++: virtual vtkRenderer *GetNonCompositedRenderer()\n\nGets the non-composited renderer for this view. This is typically\nused for labels, 2D annotations etc.\n\note CallOnAllProcesses\n"},
  {"GetRenderer", PyvtkPVRenderView_GetRenderer, METH_VARARGS,
   "V.GetRenderer(int) -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer(\n    int rendererType=vtkPVRenderView::DEFAULT_RENDERER)\n\nReturns the renderer given an int identifying its type.\n\\li DEFAULT_RENDERER: returns the 3D renderer.\n\\li NON_COMPOSITED_RENDERER: returns the NonCompositedRenderer.\n"},
  {"GetActiveCamera", PyvtkPVRenderView_GetActiveCamera, METH_VARARGS,
   "V.GetActiveCamera() -> vtkCamera\nC++: vtkCamera *GetActiveCamera()\n\nGet/Set the active camera. The active camera is set on both the\ncomposited and non-composited renderer.\n"},
  {"SetActiveCamera", PyvtkPVRenderView_SetActiveCamera, METH_VARARGS,
   "V.SetActiveCamera(vtkCamera)\nC++: virtual void SetActiveCamera(vtkCamera *)\n\nGet/Set the active camera. The active camera is set on both the\ncomposited and non-composited renderer.\n"},
  {"GetRenderWindow", PyvtkPVRenderView_GetRenderWindow, METH_VARARGS,
   "V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow() override;\n\nReturns the render window.\n"},
  {"GetInteractor", PyvtkPVRenderView_GetInteractor, METH_VARARGS,
   "V.GetInteractor() -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *GetInteractor()\n\nReturns the interactor.\n"},
  {"SetupInteractor", PyvtkPVRenderView_SetupInteractor, METH_VARARGS,
   "V.SetupInteractor(vtkRenderWindowInteractor)\nC++: virtual void SetupInteractor(vtkRenderWindowInteractor *)\n\nSet the interactor. Client applications must set the interactor\nto enable interactivity. Note this method will also change the\ninteractor styles set on the interactor.\n"},
  {"GetInteractorStyle", PyvtkPVRenderView_GetInteractorStyle, METH_VARARGS,
   "V.GetInteractorStyle() -> vtkPVInteractorStyle\nC++: virtual vtkPVInteractorStyle *GetInteractorStyle()\n\nReturns the interactor style.\n"},
  {"ResetCamera", PyvtkPVRenderView_ResetCamera, METH_VARARGS,
   "V.ResetCamera()\nC++: void ResetCamera()\nV.ResetCamera([float, float, float, float, float, float])\nC++: void ResetCamera(double bounds[6])\n\nResets the active camera using collective prop-bounds.\n\note CallOnAllProcesses\n"},
  {"StillRender", PyvtkPVRenderView_StillRender, METH_VARARGS,
   "V.StillRender()\nC++: void StillRender() override;\n\nTriggers a high-resolution render.\n\note Can be called on processes involved in rendering i.e those\nreturned by `this->GetStillRenderProcesses()`.\n"},
  {"InteractiveRender", PyvtkPVRenderView_InteractiveRender, METH_VARARGS,
   "V.InteractiveRender()\nC++: void InteractiveRender() override;\n\nTriggers a interactive render. Based on the settings on the view,\nthis may result in a low-resolution rendering or a simplified\ngeometry rendering.\n\note Can be called on processes involved in rendering i.e those\nreturned by `this->GetInteractiveRenderProcesses()`.\n"},
  {"SetStillRenderImageReductionFactor", PyvtkPVRenderView_SetStillRenderImageReductionFactor, METH_VARARGS,
   "V.SetStillRenderImageReductionFactor(int)\nC++: virtual void SetStillRenderImageReductionFactor(int _arg)\n\nGet/Set the reduction-factor to use when for StillRender(). This\nis typically set to 1, but in some cases with terrible\nconnectivity or really large displays, one may want to use a\nsub-sampled image even for StillRender(). This is set it number\nof pixels to be sub-sampled by. Note that image reduction factors\nhave no effect when in built-in mode.\n\note CallOnAllProcesses\n"},
  {"GetStillRenderImageReductionFactorMinValue", PyvtkPVRenderView_GetStillRenderImageReductionFactorMinValue, METH_VARARGS,
   "V.GetStillRenderImageReductionFactorMinValue() -> int\nC++: virtual int GetStillRenderImageReductionFactorMinValue()\n\nGet/Set the reduction-factor to use when for StillRender(). This\nis typically set to 1, but in some cases with terrible\nconnectivity or really large displays, one may want to use a\nsub-sampled image even for StillRender(). This is set it number\nof pixels to be sub-sampled by. Note that image reduction factors\nhave no effect when in built-in mode.\n\note CallOnAllProcesses\n"},
  {"GetStillRenderImageReductionFactorMaxValue", PyvtkPVRenderView_GetStillRenderImageReductionFactorMaxValue, METH_VARARGS,
   "V.GetStillRenderImageReductionFactorMaxValue() -> int\nC++: virtual int GetStillRenderImageReductionFactorMaxValue()\n\nGet/Set the reduction-factor to use when for StillRender(). This\nis typically set to 1, but in some cases with terrible\nconnectivity or really large displays, one may want to use a\nsub-sampled image even for StillRender(). This is set it number\nof pixels to be sub-sampled by. Note that image reduction factors\nhave no effect when in built-in mode.\n\note CallOnAllProcesses\n"},
  {"GetStillRenderImageReductionFactor", PyvtkPVRenderView_GetStillRenderImageReductionFactor, METH_VARARGS,
   "V.GetStillRenderImageReductionFactor() -> int\nC++: virtual int GetStillRenderImageReductionFactor()\n\nGet/Set the reduction-factor to use when for StillRender(). This\nis typically set to 1, but in some cases with terrible\nconnectivity or really large displays, one may want to use a\nsub-sampled image even for StillRender(). This is set it number\nof pixels to be sub-sampled by. Note that image reduction factors\nhave no effect when in built-in mode.\n\note CallOnAllProcesses\n"},
  {"SetInteractiveRenderImageReductionFactor", PyvtkPVRenderView_SetInteractiveRenderImageReductionFactor, METH_VARARGS,
   "V.SetInteractiveRenderImageReductionFactor(int)\nC++: virtual void SetInteractiveRenderImageReductionFactor(\n    int _arg)\n\nGet/Set the reduction-factor to use when for InteractiveRender().\nThis is set it number of pixels to be sub-sampled by. Note that\nimage reduction factors have no effect when in built-in mode.\n\note CallOnAllProcesses\n"},
  {"GetInteractiveRenderImageReductionFactorMinValue", PyvtkPVRenderView_GetInteractiveRenderImageReductionFactorMinValue, METH_VARARGS,
   "V.GetInteractiveRenderImageReductionFactorMinValue() -> int\nC++: virtual int GetInteractiveRenderImageReductionFactorMinValue(\n    )\n\nGet/Set the reduction-factor to use when for InteractiveRender().\nThis is set it number of pixels to be sub-sampled by. Note that\nimage reduction factors have no effect when in built-in mode.\n\note CallOnAllProcesses\n"},
  {"GetInteractiveRenderImageReductionFactorMaxValue", PyvtkPVRenderView_GetInteractiveRenderImageReductionFactorMaxValue, METH_VARARGS,
   "V.GetInteractiveRenderImageReductionFactorMaxValue() -> int\nC++: virtual int GetInteractiveRenderImageReductionFactorMaxValue(\n    )\n\nGet/Set the reduction-factor to use when for InteractiveRender().\nThis is set it number of pixels to be sub-sampled by. Note that\nimage reduction factors have no effect when in built-in mode.\n\note CallOnAllProcesses\n"},
  {"GetInteractiveRenderImageReductionFactor", PyvtkPVRenderView_GetInteractiveRenderImageReductionFactor, METH_VARARGS,
   "V.GetInteractiveRenderImageReductionFactor() -> int\nC++: virtual int GetInteractiveRenderImageReductionFactor()\n\nGet/Set the reduction-factor to use when for InteractiveRender().\nThis is set it number of pixels to be sub-sampled by. Note that\nimage reduction factors have no effect when in built-in mode.\n\note CallOnAllProcesses\n"},
  {"SetRemoteRenderingThreshold", PyvtkPVRenderView_SetRemoteRenderingThreshold, METH_VARARGS,
   "V.SetRemoteRenderingThreshold(float)\nC++: virtual void SetRemoteRenderingThreshold(double _arg)\n\nGet/Set the data-size in megabytes above which remote-rendering\nshould be used, if possible.\n\note CallOnAllProcesses\n"},
  {"GetRemoteRenderingThreshold", PyvtkPVRenderView_GetRemoteRenderingThreshold, METH_VARARGS,
   "V.GetRemoteRenderingThreshold() -> float\nC++: virtual double GetRemoteRenderingThreshold()\n\nGet/Set the data-size in megabytes above which remote-rendering\nshould be used, if possible.\n\note CallOnAllProcesses\n"},
  {"SetLODRenderingThreshold", PyvtkPVRenderView_SetLODRenderingThreshold, METH_VARARGS,
   "V.SetLODRenderingThreshold(float)\nC++: virtual void SetLODRenderingThreshold(double _arg)\n\nGet/Set the data-size in megabytes above which LOD rendering\nshould be used, if possible.\n\note CallOnAllProcesses\n"},
  {"GetLODRenderingThreshold", PyvtkPVRenderView_GetLODRenderingThreshold, METH_VARARGS,
   "V.GetLODRenderingThreshold() -> float\nC++: virtual double GetLODRenderingThreshold()\n\nGet/Set the data-size in megabytes above which LOD rendering\nshould be used, if possible.\n\note CallOnAllProcesses\n"},
  {"SetLODResolution", PyvtkPVRenderView_SetLODResolution, METH_VARARGS,
   "V.SetLODResolution(float)\nC++: virtual void SetLODResolution(double _arg)\n\nGet/Set the LOD resolution. This affects the size of the grid\nused for quadric clustering, for example. 1.0 implies maximum\nresolution while 0 implies minimum resolution.\n\note CallOnAllProcesses\n"},
  {"GetLODResolutionMinValue", PyvtkPVRenderView_GetLODResolutionMinValue, METH_VARARGS,
   "V.GetLODResolutionMinValue() -> float\nC++: virtual double GetLODResolutionMinValue()\n\nGet/Set the LOD resolution. This affects the size of the grid\nused for quadric clustering, for example. 1.0 implies maximum\nresolution while 0 implies minimum resolution.\n\note CallOnAllProcesses\n"},
  {"GetLODResolutionMaxValue", PyvtkPVRenderView_GetLODResolutionMaxValue, METH_VARARGS,
   "V.GetLODResolutionMaxValue() -> float\nC++: virtual double GetLODResolutionMaxValue()\n\nGet/Set the LOD resolution. This affects the size of the grid\nused for quadric clustering, for example. 1.0 implies maximum\nresolution while 0 implies minimum resolution.\n\note CallOnAllProcesses\n"},
  {"GetLODResolution", PyvtkPVRenderView_GetLODResolution, METH_VARARGS,
   "V.GetLODResolution() -> float\nC++: virtual double GetLODResolution()\n\nGet/Set the LOD resolution. This affects the size of the grid\nused for quadric clustering, for example. 1.0 implies maximum\nresolution while 0 implies minimum resolution.\n\note CallOnAllProcesses\n"},
  {"SetUseOutlineForLODRendering", PyvtkPVRenderView_SetUseOutlineForLODRendering, METH_VARARGS,
   "V.SetUseOutlineForLODRendering(bool)\nC++: virtual void SetUseOutlineForLODRendering(bool _arg)\n\nWhen set to true, instead of using simplified geometry for LOD\nrendering, uses outline, if possible. Note that not all\nrepresentations support this mode and hence one may still see\nnon-outline data being rendering when this flag is ON and LOD is\nbeing used.\n"},
  {"GetUseOutlineForLODRendering", PyvtkPVRenderView_GetUseOutlineForLODRendering, METH_VARARGS,
   "V.GetUseOutlineForLODRendering() -> bool\nC++: virtual bool GetUseOutlineForLODRendering()\n\nWhen set to true, instead of using simplified geometry for LOD\nrendering, uses outline, if possible. Note that not all\nrepresentations support this mode and hence one may still see\nnon-outline data being rendering when this flag is ON and LOD is\nbeing used.\n"},
  {"ConfigureCompressor", PyvtkPVRenderView_ConfigureCompressor, METH_VARARGS,
   "V.ConfigureCompressor(string)\nC++: void ConfigureCompressor(const char *configuration)\n\nPasses the compressor configuration to the client-server\nsynchronizer, if any. This affects the image compression used to\nrelay images back to the client. See\nvtkPVClientServerSynchronizedRenderers::ConfigureCompressor() for\ndetails.\n\note CallOnAllProcesses\n"},
  {"ResetCameraClippingRange", PyvtkPVRenderView_ResetCameraClippingRange, METH_VARARGS,
   "V.ResetCameraClippingRange()\nC++: virtual void ResetCameraClippingRange()\n\nResets the clipping range. One does not need to call this\ndirectly ever. It is called periodically by the vtkRenderer to\nreset the camera range.\n"},
  {"SetUseLightKit", PyvtkPVRenderView_SetUseLightKit, METH_VARARGS,
   "V.SetUseLightKit(bool)\nC++: void SetUseLightKit(bool enable)\n\nEnable/Disable light kit.\n\note CallOnAllProcesses\n"},
  {"GetUseLightKit", PyvtkPVRenderView_GetUseLightKit, METH_VARARGS,
   "V.GetUseLightKit() -> bool\nC++: virtual bool GetUseLightKit()\n\nEnable/Disable light kit.\n\note CallOnAllProcesses\n"},
  {"UseLightKitOn", PyvtkPVRenderView_UseLightKitOn, METH_VARARGS,
   "V.UseLightKitOn()\nC++: virtual void UseLightKitOn()\n\nEnable/Disable light kit.\n\note CallOnAllProcesses\n"},
  {"UseLightKitOff", PyvtkPVRenderView_UseLightKitOff, METH_VARARGS,
   "V.UseLightKitOff()\nC++: virtual void UseLightKitOff()\n\nEnable/Disable light kit.\n\note CallOnAllProcesses\n"},
  {"StreamingUpdate", PyvtkPVRenderView_StreamingUpdate, METH_VARARGS,
   "V.StreamingUpdate((float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float))\nC++: void StreamingUpdate(const double view_planes[24])\n\n"},
  {"DeliverStreamedPieces", PyvtkPVRenderView_DeliverStreamedPieces, METH_VARARGS,
   "V.DeliverStreamedPieces(int, [int, ...])\nC++: void DeliverStreamedPieces(unsigned int size,\n    unsigned int *representation_ids)\n\n"},
  {"USE_LOD", PyvtkPVRenderView_USE_LOD, METH_VARARGS,
   "V.USE_LOD() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *USE_LOD()\n\nUSE_LOD indicates if LOD is being used for the current\nrender/update.\n"},
  {"LOD_RESOLUTION", PyvtkPVRenderView_LOD_RESOLUTION, METH_VARARGS,
   "V.LOD_RESOLUTION() -> vtkInformationDoubleKey\nC++: static vtkInformationDoubleKey *LOD_RESOLUTION()\n\nIndicates the LOD resolution in REQUEST_UPDATE_LOD() pass.\n"},
  {"USE_OUTLINE_FOR_LOD", PyvtkPVRenderView_USE_OUTLINE_FOR_LOD, METH_VARARGS,
   "V.USE_OUTLINE_FOR_LOD() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *USE_OUTLINE_FOR_LOD()\n\nIndicates the LOD must use outline if possible in\nREQUEST_UPDATE_LOD() pass.\n"},
  {"RENDER_EMPTY_IMAGES", PyvtkPVRenderView_RENDER_EMPTY_IMAGES, METH_VARARGS,
   "V.RENDER_EMPTY_IMAGES() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *RENDER_EMPTY_IMAGES()\n\nRepresentation can publish this key in their\nREQUEST_INFORMATION() pass to indicate that the representation\nneeds to disable IceT's empty image optimization. This is\ntypically only needed if a painter will make use of MPI global\ncollective communications.\n"},
  {"NEED_ORDERED_COMPOSITING", PyvtkPVRenderView_NEED_ORDERED_COMPOSITING, METH_VARARGS,
   "V.NEED_ORDERED_COMPOSITING() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *NEED_ORDERED_COMPOSITING()\n\nRepresentation can publish this key in their\nREQUEST_INFORMATION() pass to indicate that the representation\nneeds ordered compositing.\n"},
  {"VIEW_PLANES", PyvtkPVRenderView_VIEW_PLANES, METH_VARARGS,
   "V.VIEW_PLANES() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *VIEW_PLANES()\n\nKey used to pass meta-data about the view frustum in\nREQUEST_STREAMING_UPDATE() pass. The value is a double vector\nwith exactly 24 values.\n"},
  {"REQUEST_STREAMING_UPDATE", PyvtkPVRenderView_REQUEST_STREAMING_UPDATE, METH_VARARGS,
   "V.REQUEST_STREAMING_UPDATE() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_STREAMING_UPDATE()\n\nStreaming pass request.\n"},
  {"REQUEST_PROCESS_STREAMED_PIECE", PyvtkPVRenderView_REQUEST_PROCESS_STREAMED_PIECE, METH_VARARGS,
   "V.REQUEST_PROCESS_STREAMED_PIECE() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_PROCESS_STREAMED_PIECE(\n    )\n\nPass to relay the streamed \"piece\" to the representations.\n"},
  {"SelectCells", PyvtkPVRenderView_SelectCells, METH_VARARGS,
   "V.SelectCells([int, int, int, int])\nC++: void SelectCells(int region[4])\nV.SelectCells(int, int, int, int)\nC++: void SelectCells(int region0, int region1, int region2,\n    int region3)\n\nMake a selection. This will result in setting up of\nthis->LastSelection which can be accessed using\nGetLastSelection().\n\note This method is called on call rendering processes and client\n(or driver). Thus, if doing client only rendering, this shouldn't\nbe called on server nodes.\n"},
  {"SelectPoints", PyvtkPVRenderView_SelectPoints, METH_VARARGS,
   "V.SelectPoints([int, int, int, int])\nC++: void SelectPoints(int region[4])\nV.SelectPoints(int, int, int, int)\nC++: void SelectPoints(int region0, int region1, int region2,\n    int region3)\n\nMake a selection. This will result in setting up of\nthis->LastSelection which can be accessed using\nGetLastSelection().\n\note This method is called on call rendering processes and client\n(or driver). Thus, if doing client only rendering, this shouldn't\nbe called on server nodes.\n"},
  {"Select", PyvtkPVRenderView_Select, METH_VARARGS,
   "V.Select(int, [int, int, int, int])\nC++: void Select(int field_association, int region[4])\n\nMake a selection. This will result in setting up of\nthis->LastSelection which can be accessed using\nGetLastSelection().\n\note This method is called on call rendering processes and client\n(or driver). Thus, if doing client only rendering, this shouldn't\nbe called on server nodes.\n"},
  {"SelectPolygonPoints", PyvtkPVRenderView_SelectPolygonPoints, METH_VARARGS,
   "V.SelectPolygonPoints([int, ...], int)\nC++: void SelectPolygonPoints(int *polygon2DArray,\n    vtkIdType arrayLen)\n\nMake a selection with a polygon. The polygon2DArray should\ncontain the polygon points in display units of (x, y) tuples, and\narrayLen is the total length of polygon2DArray. This will result\nin setting up of this->LastSelection which can be accessed using\nGetLastSelection().\n\note This method is called on call rendering processes and client\n(or driver). Thus, if doing client only rendering, this shouldn't\nbe called on server nodes.\n"},
  {"SelectPolygonCells", PyvtkPVRenderView_SelectPolygonCells, METH_VARARGS,
   "V.SelectPolygonCells([int, ...], int)\nC++: void SelectPolygonCells(int *polygon2DArray,\n    vtkIdType arrayLen)\n\nMake a selection with a polygon. The polygon2DArray should\ncontain the polygon points in display units of (x, y) tuples, and\narrayLen is the total length of polygon2DArray. This will result\nin setting up of this->LastSelection which can be accessed using\nGetLastSelection().\n\note This method is called on call rendering processes and client\n(or driver). Thus, if doing client only rendering, this shouldn't\nbe called on server nodes.\n"},
  {"SelectPolygon", PyvtkPVRenderView_SelectPolygon, METH_VARARGS,
   "V.SelectPolygon(int, [int, ...], int)\nC++: void SelectPolygon(int field_association,\n    int *polygon2DArray, vtkIdType arrayLen)\n\nMake a selection with a polygon. The polygon2DArray should\ncontain the polygon points in display units of (x, y) tuples, and\narrayLen is the total length of polygon2DArray. This will result\nin setting up of this->LastSelection which can be accessed using\nGetLastSelection().\n\note This method is called on call rendering processes and client\n(or driver). Thus, if doing client only rendering, this shouldn't\nbe called on server nodes.\n"},
  {"GetLastSelection", PyvtkPVRenderView_GetLastSelection, METH_VARARGS,
   "V.GetLastSelection() -> vtkSelection\nC++: virtual vtkSelection *GetLastSelection()\n\nProvides access to the last selection. This is valid only on the\nclient or driver node displaying the composited result.\n"},
  {"SetUseInteractiveRenderingForScreenshots", PyvtkPVRenderView_SetUseInteractiveRenderingForScreenshots, METH_VARARGS,
   "V.SetUseInteractiveRenderingForScreenshots(bool)\nC++: virtual void SetUseInteractiveRenderingForScreenshots(\n    bool _arg)\n\nSet or get whether capture should be done as StillRender or\nInteractiveRender when capturing screenshots.\n"},
  {"UseInteractiveRenderingForScreenshotsOn", PyvtkPVRenderView_UseInteractiveRenderingForScreenshotsOn, METH_VARARGS,
   "V.UseInteractiveRenderingForScreenshotsOn()\nC++: virtual void UseInteractiveRenderingForScreenshotsOn()\n\nSet or get whether capture should be done as StillRender or\nInteractiveRender when capturing screenshots.\n"},
  {"UseInteractiveRenderingForScreenshotsOff", PyvtkPVRenderView_UseInteractiveRenderingForScreenshotsOff, METH_VARARGS,
   "V.UseInteractiveRenderingForScreenshotsOff()\nC++: virtual void UseInteractiveRenderingForScreenshotsOff()\n\nSet or get whether capture should be done as StillRender or\nInteractiveRender when capturing screenshots.\n"},
  {"GetUseInteractiveRenderingForScreenshots", PyvtkPVRenderView_GetUseInteractiveRenderingForScreenshots, METH_VARARGS,
   "V.GetUseInteractiveRenderingForScreenshots() -> bool\nC++: virtual bool GetUseInteractiveRenderingForScreenshots()\n\nSet or get whether capture should be done as StillRender or\nInteractiveRender when capturing screenshots.\n"},
  {"GetRemoteRenderingAvailable", PyvtkPVRenderView_GetRemoteRenderingAvailable, METH_VARARGS,
   "V.GetRemoteRenderingAvailable() -> bool\nC++: virtual bool GetRemoteRenderingAvailable()\n\nReturns if remote-rendering is possible on the current group of\nprocesses.\n"},
  {"RemoteRenderingAvailableOff", PyvtkPVRenderView_RemoteRenderingAvailableOff, METH_VARARGS,
   "V.RemoteRenderingAvailableOff()\nC++: void RemoteRenderingAvailableOff()\n\nReturns if remote-rendering is possible on the current group of\nprocesses.\n"},
  {"NVPipeAvailableOn", PyvtkPVRenderView_NVPipeAvailableOn, METH_VARARGS,
   "V.NVPipeAvailableOn()\nC++: void NVPipeAvailableOn()\n\nDetermine if NVPipe is an available compressor option.\n"},
  {"NVPipeAvailableOff", PyvtkPVRenderView_NVPipeAvailableOff, METH_VARARGS,
   "V.NVPipeAvailableOff()\nC++: void NVPipeAvailableOff()\n\nDetermine if NVPipe is an available compressor option.\n"},
  {"GetUsedLODForLastRender", PyvtkPVRenderView_GetUsedLODForLastRender, METH_VARARGS,
   "V.GetUsedLODForLastRender() -> bool\nC++: virtual bool GetUsedLODForLastRender()\n\nReturns true if the most recent render used LOD.\n"},
  {"InvalidateCachedSelection", PyvtkPVRenderView_InvalidateCachedSelection, METH_VARARGS,
   "V.InvalidateCachedSelection()\nC++: void InvalidateCachedSelection()\n\nInvalidates cached selection. Called explicitly when view proxy\nthinks the cache may have become obsolete.\n\note CallOnAllProcesses\n"},
  {"GetZbufferDataAtPoint", PyvtkPVRenderView_GetZbufferDataAtPoint, METH_VARARGS,
   "V.GetZbufferDataAtPoint(int, int) -> float\nC++: double GetZbufferDataAtPoint(int x, int y)\n\nReturns the z-buffer value at the given location.\n\note CallOnClientOnly\n"},
  {"SetPiece", PyvtkPVRenderView_SetPiece, METH_VARARGS,
   "V.SetPiece(vtkInformation, vtkPVDataRepresentation, vtkDataObject,\n     int, int)\nC++: static void SetPiece(vtkInformation *info,\n    vtkPVDataRepresentation *repr, vtkDataObject *data,\n    unsigned long trueSize=0, int port=0)\n\nConvenience methods used by representations to pass represented\ndata. If trueSize is non-zero, then that's the size used in\nmaking decisions about LOD/remote rendering etc and not the\nactual size of the dataset.\n"},
  {"GetPieceProducer", PyvtkPVRenderView_GetPieceProducer, METH_VARARGS,
   "V.GetPieceProducer(vtkInformation, vtkPVDataRepresentation, int)\n    -> vtkAlgorithmOutput\nC++: static vtkAlgorithmOutput *GetPieceProducer(\n    vtkInformation *info, vtkPVDataRepresentation *repr,\n    int port=0)\n\nConvenience methods used by representations to pass represented\ndata. If trueSize is non-zero, then that's the size used in\nmaking decisions about LOD/remote rendering etc and not the\nactual size of the dataset.\n"},
  {"SetPieceLOD", PyvtkPVRenderView_SetPieceLOD, METH_VARARGS,
   "V.SetPieceLOD(vtkInformation, vtkPVDataRepresentation,\n    vtkDataObject, int)\nC++: static void SetPieceLOD(vtkInformation *info,\n    vtkPVDataRepresentation *repr, vtkDataObject *data,\n    int port=0)\n\nConvenience methods used by representations to pass represented\ndata. If trueSize is non-zero, then that's the size used in\nmaking decisions about LOD/remote rendering etc and not the\nactual size of the dataset.\n"},
  {"GetPieceProducerLOD", PyvtkPVRenderView_GetPieceProducerLOD, METH_VARARGS,
   "V.GetPieceProducerLOD(vtkInformation, vtkPVDataRepresentation,\n    int) -> vtkAlgorithmOutput\nC++: static vtkAlgorithmOutput *GetPieceProducerLOD(\n    vtkInformation *info, vtkPVDataRepresentation *repr,\n    int port=0)\n\nConvenience methods used by representations to pass represented\ndata. If trueSize is non-zero, then that's the size used in\nmaking decisions about LOD/remote rendering etc and not the\nactual size of the dataset.\n"},
  {"MarkAsRedistributable", PyvtkPVRenderView_MarkAsRedistributable, METH_VARARGS,
   "V.MarkAsRedistributable(vtkInformation, vtkPVDataRepresentation,\n    bool, int)\nC++: static void MarkAsRedistributable(vtkInformation *info,\n    vtkPVDataRepresentation *repr, bool value=true, int port=0)\n\nConvenience methods used by representations to pass represented\ndata. If trueSize is non-zero, then that's the size used in\nmaking decisions about LOD/remote rendering etc and not the\nactual size of the dataset.\n"},
  {"SetRedistributionMode", PyvtkPVRenderView_SetRedistributionMode, METH_VARARGS,
   "V.SetRedistributionMode(vtkInformation, vtkPVDataRepresentation,\n    int, int)\nC++: static void SetRedistributionMode(vtkInformation *info,\n    vtkPVDataRepresentation *repr, int mode, int port=0)\n\nConvenience methods used by representations to pass represented\ndata. If trueSize is non-zero, then that's the size used in\nmaking decisions about LOD/remote rendering etc and not the\nactual size of the dataset.\n"},
  {"SetRedistributionModeToSplitBoundaryCells", PyvtkPVRenderView_SetRedistributionModeToSplitBoundaryCells, METH_VARARGS,
   "V.SetRedistributionModeToSplitBoundaryCells(vtkInformation,\n    vtkPVDataRepresentation, int)\nC++: static void SetRedistributionModeToSplitBoundaryCells(\n    vtkInformation *info, vtkPVDataRepresentation *repr,\n    int port=0)\n\nConvenience methods used by representations to pass represented\ndata. If trueSize is non-zero, then that's the size used in\nmaking decisions about LOD/remote rendering etc and not the\nactual size of the dataset.\n"},
  {"SetRedistributionModeToDuplicateBoundaryCells", PyvtkPVRenderView_SetRedistributionModeToDuplicateBoundaryCells, METH_VARARGS,
   "V.SetRedistributionModeToDuplicateBoundaryCells(vtkInformation,\n    vtkPVDataRepresentation, int)\nC++: static void SetRedistributionModeToDuplicateBoundaryCells(\n    vtkInformation *info, vtkPVDataRepresentation *repr,\n    int port=0)\n\nConvenience methods used by representations to pass represented\ndata. If trueSize is non-zero, then that's the size used in\nmaking decisions about LOD/remote rendering etc and not the\nactual size of the dataset.\n"},
  {"SetGeometryBounds", PyvtkPVRenderView_SetGeometryBounds, METH_VARARGS,
   "V.SetGeometryBounds(vtkInformation, [float, float, float, float,\n    float, float], vtkMatrix4x4)\nC++: static void SetGeometryBounds(vtkInformation *info,\n    double bounds[6], vtkMatrix4x4 *transform=NULL)\n\nConvenience methods used by representations to pass represented\ndata. If trueSize is non-zero, then that's the size used in\nmaking decisions about LOD/remote rendering etc and not the\nactual size of the dataset.\n"},
  {"SetStreamable", PyvtkPVRenderView_SetStreamable, METH_VARARGS,
   "V.SetStreamable(vtkInformation, vtkPVDataRepresentation, bool)\nC++: static void SetStreamable(vtkInformation *info,\n    vtkPVDataRepresentation *repr, bool streamable)\n\nConvenience methods used by representations to pass represented\ndata. If trueSize is non-zero, then that's the size used in\nmaking decisions about LOD/remote rendering etc and not the\nactual size of the dataset.\n"},
  {"SetNextStreamedPiece", PyvtkPVRenderView_SetNextStreamedPiece, METH_VARARGS,
   "V.SetNextStreamedPiece(vtkInformation, vtkPVDataRepresentation,\n    vtkDataObject)\nC++: static void SetNextStreamedPiece(vtkInformation *info,\n    vtkPVDataRepresentation *repr, vtkDataObject *piece)\n\nConvenience methods used by representations to pass represented\ndata. If trueSize is non-zero, then that's the size used in\nmaking decisions about LOD/remote rendering etc and not the\nactual size of the dataset.\n"},
  {"GetCurrentStreamedPiece", PyvtkPVRenderView_GetCurrentStreamedPiece, METH_VARARGS,
   "V.GetCurrentStreamedPiece(vtkInformation, vtkPVDataRepresentation)\n     -> vtkDataObject\nC++: static vtkDataObject *GetCurrentStreamedPiece(\n    vtkInformation *info, vtkPVDataRepresentation *repr)\n\nConvenience methods used by representations to pass represented\ndata. If trueSize is non-zero, then that's the size used in\nmaking decisions about LOD/remote rendering etc and not the\nactual size of the dataset.\n"},
  {"SetMaxClipBounds", PyvtkPVRenderView_SetMaxClipBounds, METH_VARARGS,
   "V.SetMaxClipBounds([float, float, float, float, float, float])\nC++: void SetMaxClipBounds(double bds[6])\n\nUsed by Cinema to enforce a consistent depth scaling. Called with\nthe global (visible and invisible) bounds at start of export.\n"},
  {"SetLockBounds", PyvtkPVRenderView_SetLockBounds, METH_VARARGS,
   "V.SetLockBounds(bool)\nC++: void SetLockBounds(bool nv)\n\nUsed by Cinema to enforce a consistent viewpoint and depth\nscaling. Prevents ParaView from changing depth scaling over\ncourse of an export.\n"},
  {"GetLockBounds", PyvtkPVRenderView_GetLockBounds, METH_VARARGS,
   "V.GetLockBounds() -> bool\nC++: virtual bool GetLockBounds()\n\nUsed by Cinema to enforce a consistent viewpoint and depth\nscaling. Prevents ParaView from changing depth scaling over\ncourse of an export.\n"},
  {"SetDeliverToAllProcesses", PyvtkPVRenderView_SetDeliverToAllProcesses, METH_VARARGS,
   "V.SetDeliverToAllProcesses(vtkInformation,\n    vtkPVDataRepresentation, bool)\nC++: static void SetDeliverToAllProcesses(vtkInformation *info,\n    vtkPVDataRepresentation *repr, bool clone)\n\nRequests the view to deliver the pieces produced by the repr to\nall processes after a gather to the root node to merge the\ndatasets generated by each process.\n"},
  {"SetDeliverToClientAndRenderingProcesses", PyvtkPVRenderView_SetDeliverToClientAndRenderingProcesses, METH_VARARGS,
   "V.SetDeliverToClientAndRenderingProcesses(vtkInformation,\n    vtkPVDataRepresentation, bool, bool, int)\nC++: static void SetDeliverToClientAndRenderingProcesses(\n    vtkInformation *info, vtkPVDataRepresentation *repr,\n    bool deliver_to_client, bool gather_before_delivery,\n    int port=0)\n\nRequests the view to deliver the data to the client always. This\nis essential for representation that render in the non-composited\nviews e.g. the text-source representation. If\nSetDeliverToAllProcesses() is true, this is redundant.\ngather_before_delivery can be used to indicate if the data on the\nserver-nodes must be gathered to the root node before shipping to\nthe client. If gather_before_delivery is false, only the data\nfrom the root node will be sent to the client without any\nparallel communication.\n"},
  {"SetOrderedCompositingInformation", PyvtkPVRenderView_SetOrderedCompositingInformation, METH_VARARGS,
   "V.SetOrderedCompositingInformation(vtkInformation,\n    vtkPVDataRepresentation, vtkExtentTranslator, (int, int, int,\n    int, int, int), (float, float, float), (float, float, float))\nC++: static void SetOrderedCompositingInformation(\n    vtkInformation *info, vtkPVDataRepresentation *repr,\n    vtkExtentTranslator *translator, const int whole_extents[6],\n    const double origin[3], const double spacing[3])\nV.SetOrderedCompositingInformation(vtkInformation, (float, float,\n    float, float, float, float))\nC++: static void SetOrderedCompositingInformation(\n    vtkInformation *info, const double bounds[6])\n\nPass the structured-meta-data for determining rendering order for\nordered compositing.\n"},
  {"SetRequiresDistributedRendering", PyvtkPVRenderView_SetRequiresDistributedRendering, METH_VARARGS,
   "V.SetRequiresDistributedRendering(vtkInformation,\n    vtkPVDataRepresentation, bool, bool)\nC++: static void SetRequiresDistributedRendering(\n    vtkInformation *info, vtkPVDataRepresentation *repr,\n    bool value, bool for_lod=false)\n\nSome representation only work when remote rendering or local\nrendering. Use this method in REQUEST_UPDATE() pass to tell the\nview if the representation requires a particular mode. Note, only\nuse this to \"require\" a remote or local render. value == true\nindicates that the representation requires distributed rendering,\nvalue == false indicates the representation can only render\nproperty on the client or root node.\n"},
  {"SetRequiresDistributedRenderingLOD", PyvtkPVRenderView_SetRequiresDistributedRenderingLOD, METH_VARARGS,
   "V.SetRequiresDistributedRenderingLOD(vtkInformation,\n    vtkPVDataRepresentation, bool)\nC++: static void SetRequiresDistributedRenderingLOD(\n    vtkInformation *info, vtkPVDataRepresentation *repr,\n    bool value)\n\nSome representation only work when remote rendering or local\nrendering. Use this method in REQUEST_UPDATE() pass to tell the\nview if the representation requires a particular mode. Note, only\nuse this to \"require\" a remote or local render. value == true\nindicates that the representation requires distributed rendering,\nvalue == false indicates the representation can only render\nproperty on the client or root node.\n"},
  {"SetForceDataDistributionMode", PyvtkPVRenderView_SetForceDataDistributionMode, METH_VARARGS,
   "V.SetForceDataDistributionMode(vtkInformation, int)\nC++: static void SetForceDataDistributionMode(\n    vtkInformation *info, int flag)\n\nThis is an temporary/experimental option and may be removed\nwithout notice. This is intended to be used within some\nexperimental representations that require that all data being\nmoved around uses a specific mode rather than the one\nautomatically determined based on the process type. Set flag to\n-1 to clear. The flag is cleared in every\nvtkPVRenderView::Update() call, hence a representation must set\nit in vtkPVView::REQUEST_UPDATE() pass if needed each time. Also\nnote, if the value it set to non-negative and is not equal to\nvtkMPIMoveData::PASS_THROUGH, ordered compositing will also be\ndisabled.\n"},
  {"IsForceDataDistributionModeSet", PyvtkPVRenderView_IsForceDataDistributionModeSet, METH_VARARGS,
   "V.IsForceDataDistributionModeSet() -> bool\nC++: bool IsForceDataDistributionModeSet()\n\nThis is an temporary/experimental option and may be removed\nwithout notice. This is intended to be used within some\nexperimental representations that require that all data being\nmoved around uses a specific mode rather than the one\nautomatically determined based on the process type. Set flag to\n-1 to clear. The flag is cleared in every\nvtkPVRenderView::Update() call, hence a representation must set\nit in vtkPVView::REQUEST_UPDATE() pass if needed each time. Also\nnote, if the value it set to non-negative and is not equal to\nvtkMPIMoveData::PASS_THROUGH, ordered compositing will also be\ndisabled.\n"},
  {"GetForceDataDistributionMode", PyvtkPVRenderView_GetForceDataDistributionMode, METH_VARARGS,
   "V.GetForceDataDistributionMode() -> int\nC++: int GetForceDataDistributionMode()\n\nThis is an temporary/experimental option and may be removed\nwithout notice. This is intended to be used within some\nexperimental representations that require that all data being\nmoved around uses a specific mode rather than the one\nautomatically determined based on the process type. Set flag to\n-1 to clear. The flag is cleared in every\nvtkPVRenderView::Update() call, hence a representation must set\nit in vtkPVView::REQUEST_UPDATE() pass if needed each time. Also\nnote, if the value it set to non-negative and is not equal to\nvtkMPIMoveData::PASS_THROUGH, ordered compositing will also be\ndisabled.\n"},
  {"RegisterPropForHardwareSelection", PyvtkPVRenderView_RegisterPropForHardwareSelection, METH_VARARGS,
   "V.RegisterPropForHardwareSelection(vtkPVDataRepresentation,\n    vtkProp)\nC++: void RegisterPropForHardwareSelection(\n    vtkPVDataRepresentation *repr, vtkProp *prop)\n\nRepresentations that support hardware (render-buffer based)\nselection, should register the prop that they use for selection\nrendering. They can do that in the\nvtkPVDataRepresentation::AddToView() implementation.\n"},
  {"UnRegisterPropForHardwareSelection", PyvtkPVRenderView_UnRegisterPropForHardwareSelection, METH_VARARGS,
   "V.UnRegisterPropForHardwareSelection(vtkPVDataRepresentation,\n    vtkProp)\nC++: void UnRegisterPropForHardwareSelection(\n    vtkPVDataRepresentation *repr, vtkProp *prop)\n\nRepresentations that support hardware (render-buffer based)\nselection, should register the prop that they use for selection\nrendering. They can do that in the\nvtkPVDataRepresentation::AddToView() implementation.\n"},
  {"SetShowAnnotation", PyvtkPVRenderView_SetShowAnnotation, METH_VARARGS,
   "V.SetShowAnnotation(bool)\nC++: void SetShowAnnotation(bool val)\n\nEnable/disable showing of annotation for developers.\n"},
  {"SetUpdateAnnotation", PyvtkPVRenderView_SetUpdateAnnotation, METH_VARARGS,
   "V.SetUpdateAnnotation(bool)\nC++: virtual void SetUpdateAnnotation(bool _arg)\n\nEnable/disable showing of annotation for developers.\n"},
  {"SetAnnotationColor", PyvtkPVRenderView_SetAnnotationColor, METH_VARARGS,
   "V.SetAnnotationColor(float, float, float)\nC++: void SetAnnotationColor(double r, double g, double b)\n\nSet color of annotation text for developers\n"},
  {"SetGridAxes3DActor", PyvtkPVRenderView_SetGridAxes3DActor, METH_VARARGS,
   "V.SetGridAxes3DActor(vtkPVGridAxes3DActor)\nC++: virtual void SetGridAxes3DActor(vtkPVGridAxes3DActor *)\n\nSet the vtkPVGridAxes3DActor to use for the view.\n"},
  {"SetOrientationAxesInteractivity", PyvtkPVRenderView_SetOrientationAxesInteractivity, METH_VARARGS,
   "V.SetOrientationAxesInteractivity(bool)\nC++: virtual void SetOrientationAxesInteractivity(bool)\n\n"},
  {"SetOrientationAxesVisibility", PyvtkPVRenderView_SetOrientationAxesVisibility, METH_VARARGS,
   "V.SetOrientationAxesVisibility(bool)\nC++: virtual void SetOrientationAxesVisibility(bool)\n\n"},
  {"SetOrientationAxesLabelColor", PyvtkPVRenderView_SetOrientationAxesLabelColor, METH_VARARGS,
   "V.SetOrientationAxesLabelColor(float, float, float)\nC++: void SetOrientationAxesLabelColor(double r, double g,\n    double b)\n\n"},
  {"SetOrientationAxesOutlineColor", PyvtkPVRenderView_SetOrientationAxesOutlineColor, METH_VARARGS,
   "V.SetOrientationAxesOutlineColor(float, float, float)\nC++: void SetOrientationAxesOutlineColor(double r, double g,\n    double b)\n\n"},
  {"SetCenterAxesVisibility", PyvtkPVRenderView_SetCenterAxesVisibility, METH_VARARGS,
   "V.SetCenterAxesVisibility(bool)\nC++: virtual void SetCenterAxesVisibility(bool)\n\n"},
  {"SetCenterOfRotation", PyvtkPVRenderView_SetCenterOfRotation, METH_VARARGS,
   "V.SetCenterOfRotation(float, float, float)\nC++: virtual void SetCenterOfRotation(double x, double y,\n    double z)\n\n"},
  {"SetRotationFactor", PyvtkPVRenderView_SetRotationFactor, METH_VARARGS,
   "V.SetRotationFactor(float)\nC++: virtual void SetRotationFactor(double factor)\n\n"},
  {"SetKeyLightWarmth", PyvtkPVRenderView_SetKeyLightWarmth, METH_VARARGS,
   "V.SetKeyLightWarmth(float)\nC++: void SetKeyLightWarmth(double val)\n\n"},
  {"SetKeyLightIntensity", PyvtkPVRenderView_SetKeyLightIntensity, METH_VARARGS,
   "V.SetKeyLightIntensity(float)\nC++: void SetKeyLightIntensity(double val)\n\n"},
  {"SetKeyLightElevation", PyvtkPVRenderView_SetKeyLightElevation, METH_VARARGS,
   "V.SetKeyLightElevation(float)\nC++: void SetKeyLightElevation(double val)\n\n"},
  {"SetKeyLightAzimuth", PyvtkPVRenderView_SetKeyLightAzimuth, METH_VARARGS,
   "V.SetKeyLightAzimuth(float)\nC++: void SetKeyLightAzimuth(double val)\n\n"},
  {"SetFillLightWarmth", PyvtkPVRenderView_SetFillLightWarmth, METH_VARARGS,
   "V.SetFillLightWarmth(float)\nC++: void SetFillLightWarmth(double val)\n\n"},
  {"SetKeyToFillRatio", PyvtkPVRenderView_SetKeyToFillRatio, METH_VARARGS,
   "V.SetKeyToFillRatio(float)\nC++: void SetKeyToFillRatio(double val)\n\n"},
  {"SetFillLightElevation", PyvtkPVRenderView_SetFillLightElevation, METH_VARARGS,
   "V.SetFillLightElevation(float)\nC++: void SetFillLightElevation(double val)\n\n"},
  {"SetFillLightAzimuth", PyvtkPVRenderView_SetFillLightAzimuth, METH_VARARGS,
   "V.SetFillLightAzimuth(float)\nC++: void SetFillLightAzimuth(double val)\n\n"},
  {"SetBackLightWarmth", PyvtkPVRenderView_SetBackLightWarmth, METH_VARARGS,
   "V.SetBackLightWarmth(float)\nC++: void SetBackLightWarmth(double val)\n\n"},
  {"SetKeyToBackRatio", PyvtkPVRenderView_SetKeyToBackRatio, METH_VARARGS,
   "V.SetKeyToBackRatio(float)\nC++: void SetKeyToBackRatio(double val)\n\n"},
  {"SetBackLightElevation", PyvtkPVRenderView_SetBackLightElevation, METH_VARARGS,
   "V.SetBackLightElevation(float)\nC++: void SetBackLightElevation(double val)\n\n"},
  {"SetBackLightAzimuth", PyvtkPVRenderView_SetBackLightAzimuth, METH_VARARGS,
   "V.SetBackLightAzimuth(float)\nC++: void SetBackLightAzimuth(double val)\n\n"},
  {"SetHeadLightWarmth", PyvtkPVRenderView_SetHeadLightWarmth, METH_VARARGS,
   "V.SetHeadLightWarmth(float)\nC++: void SetHeadLightWarmth(double val)\n\n"},
  {"SetKeyToHeadRatio", PyvtkPVRenderView_SetKeyToHeadRatio, METH_VARARGS,
   "V.SetKeyToHeadRatio(float)\nC++: void SetKeyToHeadRatio(double val)\n\n"},
  {"SetMaintainLuminance", PyvtkPVRenderView_SetMaintainLuminance, METH_VARARGS,
   "V.SetMaintainLuminance(int)\nC++: void SetMaintainLuminance(int val)\n\n"},
  {"SetUseHiddenLineRemoval", PyvtkPVRenderView_SetUseHiddenLineRemoval, METH_VARARGS,
   "V.SetUseHiddenLineRemoval(bool)\nC++: virtual void SetUseHiddenLineRemoval(bool _arg)\n\n"},
  {"SetUseDepthPeeling", PyvtkPVRenderView_SetUseDepthPeeling, METH_VARARGS,
   "V.SetUseDepthPeeling(int)\nC++: virtual void SetUseDepthPeeling(int val)\n\n"},
  {"SetUseDepthPeelingForVolumes", PyvtkPVRenderView_SetUseDepthPeelingForVolumes, METH_VARARGS,
   "V.SetUseDepthPeelingForVolumes(bool)\nC++: virtual void SetUseDepthPeelingForVolumes(bool val)\n\n"},
  {"SetMaximumNumberOfPeels", PyvtkPVRenderView_SetMaximumNumberOfPeels, METH_VARARGS,
   "V.SetMaximumNumberOfPeels(int)\nC++: virtual void SetMaximumNumberOfPeels(int val)\n\n"},
  {"SetBackground", PyvtkPVRenderView_SetBackground, METH_VARARGS,
   "V.SetBackground(float, float, float)\nC++: virtual void SetBackground(double r, double g, double b)\n\n"},
  {"SetBackground2", PyvtkPVRenderView_SetBackground2, METH_VARARGS,
   "V.SetBackground2(float, float, float)\nC++: virtual void SetBackground2(double r, double g, double b)\n\n"},
  {"SetBackgroundTexture", PyvtkPVRenderView_SetBackgroundTexture, METH_VARARGS,
   "V.SetBackgroundTexture(vtkTexture)\nC++: virtual void SetBackgroundTexture(vtkTexture *val)\n\n"},
  {"SetGradientBackground", PyvtkPVRenderView_SetGradientBackground, METH_VARARGS,
   "V.SetGradientBackground(int)\nC++: virtual void SetGradientBackground(int val)\n\n"},
  {"SetTexturedBackground", PyvtkPVRenderView_SetTexturedBackground, METH_VARARGS,
   "V.SetTexturedBackground(int)\nC++: virtual void SetTexturedBackground(int val)\n\n"},
  {"AddLight", PyvtkPVRenderView_AddLight, METH_VARARGS,
   "V.AddLight(vtkLight)\nC++: void AddLight(vtkLight *)\n\n"},
  {"RemoveLight", PyvtkPVRenderView_RemoveLight, METH_VARARGS,
   "V.RemoveLight(vtkLight)\nC++: void RemoveLight(vtkLight *)\n\n"},
  {"SetStereoCapableWindow", PyvtkPVRenderView_SetStereoCapableWindow, METH_VARARGS,
   "V.SetStereoCapableWindow(int)\nC++: void SetStereoCapableWindow(int val)\n\n"},
  {"SetStereoRender", PyvtkPVRenderView_SetStereoRender, METH_VARARGS,
   "V.SetStereoRender(int)\nC++: void SetStereoRender(int val)\n\n"},
  {"SetStereoType", PyvtkPVRenderView_SetStereoType, METH_VARARGS,
   "V.SetStereoType(int)\nC++: virtual void SetStereoType(int _arg)\n\n"},
  {"SetServerStereoType", PyvtkPVRenderView_SetServerStereoType, METH_VARARGS,
   "V.SetServerStereoType(int)\nC++: virtual void SetServerStereoType(int _arg)\n\n"},
  {"SetMultiSamples", PyvtkPVRenderView_SetMultiSamples, METH_VARARGS,
   "V.SetMultiSamples(int)\nC++: void SetMultiSamples(int val)\n\n"},
  {"SetAlphaBitPlanes", PyvtkPVRenderView_SetAlphaBitPlanes, METH_VARARGS,
   "V.SetAlphaBitPlanes(int)\nC++: void SetAlphaBitPlanes(int val)\n\n"},
  {"SetStencilCapable", PyvtkPVRenderView_SetStencilCapable, METH_VARARGS,
   "V.SetStencilCapable(int)\nC++: void SetStencilCapable(int val)\n\n"},
  {"SetParallelProjection", PyvtkPVRenderView_SetParallelProjection, METH_VARARGS,
   "V.SetParallelProjection(int)\nC++: void SetParallelProjection(int mode)\n\n"},
  {"SetCamera2DManipulators", PyvtkPVRenderView_SetCamera2DManipulators, METH_VARARGS,
   "V.SetCamera2DManipulators((int, int, int, int, int, int, int, int,\n     int))\nC++: virtual void SetCamera2DManipulators(\n    const int manipulators[9])\n\n"},
  {"SetCamera3DManipulators", PyvtkPVRenderView_SetCamera3DManipulators, METH_VARARGS,
   "V.SetCamera3DManipulators((int, int, int, int, int, int, int, int,\n     int))\nC++: virtual void SetCamera3DManipulators(\n    const int manipulators[9])\n\n"},
  {"SetCameraManipulators", PyvtkPVRenderView_SetCameraManipulators, METH_VARARGS,
   "V.SetCameraManipulators(vtkPVInteractorStyle, (int, int, int, int,\n     int, int, int, int, int))\nC++: void SetCameraManipulators(vtkPVInteractorStyle *style,\n    const int manipulators[9])\n\n"},
  {"SetCamera2DMouseWheelMotionFactor", PyvtkPVRenderView_SetCamera2DMouseWheelMotionFactor, METH_VARARGS,
   "V.SetCamera2DMouseWheelMotionFactor(float)\nC++: virtual void SetCamera2DMouseWheelMotionFactor(double factor)\n\n"},
  {"SetCamera3DMouseWheelMotionFactor", PyvtkPVRenderView_SetCamera3DMouseWheelMotionFactor, METH_VARARGS,
   "V.SetCamera3DMouseWheelMotionFactor(float)\nC++: virtual void SetCamera3DMouseWheelMotionFactor(double factor)\n\n"},
  {"Update", PyvtkPVRenderView_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nOverridden to synchronize information among processes whenever\ndata changes. The vtkSMViewProxy ensures that this method is\ncalled only when something has changed on the view-proxy or one\nof its representations or their inputs. Hence it's okay to do\nsome extra inter-process communication here.\n"},
  {"UpdateLOD", PyvtkPVRenderView_UpdateLOD, METH_VARARGS,
   "V.UpdateLOD()\nC++: virtual void UpdateLOD()\n\nAsks representations to update their LOD geometries.\n"},
  {"GetUseLODForInteractiveRender", PyvtkPVRenderView_GetUseLODForInteractiveRender, METH_VARARGS,
   "V.GetUseLODForInteractiveRender() -> bool\nC++: virtual bool GetUseLODForInteractiveRender()\n\nReturns whether the view will use LOD rendering for the next\nInteractiveRender() call based on the geometry sizes determined\nby the most recent call to Update().\n"},
  {"GetUseDistributedRenderingForRender", PyvtkPVRenderView_GetUseDistributedRenderingForRender, METH_VARARGS,
   "V.GetUseDistributedRenderingForRender() -> bool\nC++: virtual bool GetUseDistributedRenderingForRender()\n\nReturns whether the view will use distributed rendering for the\nnext full-resolution render. This uses the full resolution\ngeometry sizes as determined by the most recent call to `Update`.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {"GetUseDistributedRenderingForStillRender", PyvtkPVRenderView_GetUseDistributedRenderingForStillRender, METH_VARARGS,
   "V.GetUseDistributedRenderingForStillRender() -> bool\nC++: bool GetUseDistributedRenderingForStillRender()\n\n@deprecated ParaView 5.6.\n\nPlease use `GetUseDistributedRenderingForRender` instead. The\nchange was done to make the name better reflect the\nimplementation.\n"},
#endif
  {"GetUseDistributedRenderingForLODRender", PyvtkPVRenderView_GetUseDistributedRenderingForLODRender, METH_VARARGS,
   "V.GetUseDistributedRenderingForLODRender() -> bool\nC++: virtual bool GetUseDistributedRenderingForLODRender()\n\nReturns whether the view will use distributed rendering for the\nnext low-resolution render. This uses the low-resolution (or LOD)\ngeometry sizes as determined by the most recent call to\n`UpdateLOD`.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {"GetUseDistributedRenderingForInteractiveRender", PyvtkPVRenderView_GetUseDistributedRenderingForInteractiveRender, METH_VARARGS,
   "V.GetUseDistributedRenderingForInteractiveRender() -> bool\nC++: bool GetUseDistributedRenderingForInteractiveRender()\n\n@deprecated ParaView 5.6.\n\nPlease use `GetUseDistributedRenderingForLODRender` instead. The\nchange was done to make the name better reflect the\nimplementation.\n"},
#endif
  {"GetStillRenderProcesses", PyvtkPVRenderView_GetStillRenderProcesses, METH_VARARGS,
   "V.GetStillRenderProcesses() -> int\nC++: virtual vtkTypeUInt32 GetStillRenderProcesses()\n\nReturns the processes (vtkPVSession::ServerFlags) that are to be\ninvolved in the next StillRender() call based on the decisions\nmade during the most recent Update().\n"},
  {"GetInteractiveRenderProcesses", PyvtkPVRenderView_GetInteractiveRenderProcesses, METH_VARARGS,
   "V.GetInteractiveRenderProcesses() -> int\nC++: virtual vtkTypeUInt32 GetInteractiveRenderProcesses()\n\nReturns the processes (vtkPVSession::ServerFlags) that are to be\ninvolved in the next InteractiveRender() call based on the\ndecisions made during the most recent Update() and UpdateLOD().\n"},
  {"GetDataDistributionMode", PyvtkPVRenderView_GetDataDistributionMode, METH_VARARGS,
   "V.GetDataDistributionMode(bool) -> int\nC++: int GetDataDistributionMode(bool use_remote_rendering)\n\nReturns the data distribution mode to use.\n"},
  {"GetDeliveryManager", PyvtkPVRenderView_GetDeliveryManager, METH_VARARGS,
   "V.GetDeliveryManager() -> vtkPVDataDeliveryManager\nC++: vtkPVDataDeliveryManager *GetDeliveryManager()\n\nProvides access to the geometry storage for this view.\n"},
  {"Deliver", PyvtkPVRenderView_Deliver, METH_VARARGS,
   "V.Deliver(int, int, [int, ...])\nC++: void Deliver(int use_lod, unsigned int size,\n    unsigned int *representation_ids)\n\nCalled on all processes to request data-delivery for the list of\nrepresentations. Note this method has to be called on all\nprocesses or it may lead to deadlock.\n"},
  {"GetUseOrderedCompositing", PyvtkPVRenderView_GetUseOrderedCompositing, METH_VARARGS,
   "V.GetUseOrderedCompositing() -> bool\nC++: bool GetUseOrderedCompositing()\n\nReturns true when ordered compositing is needed on the current\ngroup of processes. Note that unlike most other functions, this\nmay return different values on different processes e.g.\n\\li always false on client and dataserver\n\\li true on pvserver or renderserver if opacity < 1 or volume\n    present, else\nfalse\n"},
  {"GetRenderEmptyImages", PyvtkPVRenderView_GetRenderEmptyImages, METH_VARARGS,
   "V.GetRenderEmptyImages() -> bool\nC++: bool GetRenderEmptyImages()\n\nReturns true when the compositor should not use the empty images\noptimization.\n"},
  {"SetUseFXAA", PyvtkPVRenderView_SetUseFXAA, METH_VARARGS,
   "V.SetUseFXAA(bool)\nC++: virtual void SetUseFXAA(bool _arg)\n\nEnable/disable FXAA antialiasing.\n"},
  {"GetUseFXAA", PyvtkPVRenderView_GetUseFXAA, METH_VARARGS,
   "V.GetUseFXAA() -> bool\nC++: virtual bool GetUseFXAA()\n\nEnable/disable FXAA antialiasing.\n"},
  {"SetFXAARelativeContrastThreshold", PyvtkPVRenderView_SetFXAARelativeContrastThreshold, METH_VARARGS,
   "V.SetFXAARelativeContrastThreshold(float)\nC++: void SetFXAARelativeContrastThreshold(double val)\n\nFXAA tunable parameters. See vtkFXAAOptions for details.\n"},
  {"SetFXAAHardContrastThreshold", PyvtkPVRenderView_SetFXAAHardContrastThreshold, METH_VARARGS,
   "V.SetFXAAHardContrastThreshold(float)\nC++: void SetFXAAHardContrastThreshold(double val)\n\nFXAA tunable parameters. See vtkFXAAOptions for details.\n"},
  {"SetFXAASubpixelBlendLimit", PyvtkPVRenderView_SetFXAASubpixelBlendLimit, METH_VARARGS,
   "V.SetFXAASubpixelBlendLimit(float)\nC++: void SetFXAASubpixelBlendLimit(double val)\n\nFXAA tunable parameters. See vtkFXAAOptions for details.\n"},
  {"SetFXAASubpixelContrastThreshold", PyvtkPVRenderView_SetFXAASubpixelContrastThreshold, METH_VARARGS,
   "V.SetFXAASubpixelContrastThreshold(float)\nC++: void SetFXAASubpixelContrastThreshold(double val)\n\nFXAA tunable parameters. See vtkFXAAOptions for details.\n"},
  {"SetFXAAUseHighQualityEndpoints", PyvtkPVRenderView_SetFXAAUseHighQualityEndpoints, METH_VARARGS,
   "V.SetFXAAUseHighQualityEndpoints(bool)\nC++: void SetFXAAUseHighQualityEndpoints(bool val)\n\nFXAA tunable parameters. See vtkFXAAOptions for details.\n"},
  {"SetFXAAEndpointSearchIterations", PyvtkPVRenderView_SetFXAAEndpointSearchIterations, METH_VARARGS,
   "V.SetFXAAEndpointSearchIterations(int)\nC++: void SetFXAAEndpointSearchIterations(int val)\n\nFXAA tunable parameters. See vtkFXAAOptions for details.\n"},
  {"GetUpdateTimeStamp", PyvtkPVRenderView_GetUpdateTimeStamp, METH_VARARGS,
   "V.GetUpdateTimeStamp() -> int\nC++: vtkMTimeType GetUpdateTimeStamp()\n\nProvides access to the time when Update() was last called.\n"},
  {"CopyViewUpdateOptions", PyvtkPVRenderView_CopyViewUpdateOptions, METH_VARARGS,
   "V.CopyViewUpdateOptions(vtkPVRenderView)\nC++: void CopyViewUpdateOptions(vtkPVRenderView *otherView)\n\nCopy internal fields that are used for rendering decision such as\nremote/local rendering, composite and so on. This method was\nintroduced for the quad view so internal views could use the\ndecision that were made in the main view.\n"},
  {"AddPropToRenderer", PyvtkPVRenderView_AddPropToRenderer, METH_VARARGS,
   "V.AddPropToRenderer(vtkProp)\nC++: void AddPropToRenderer(vtkProp *prop)\n\nAdd props directly to the view.\n"},
  {"RemovePropFromRenderer", PyvtkPVRenderView_RemovePropFromRenderer, METH_VARARGS,
   "V.RemovePropFromRenderer(vtkProp)\nC++: void RemovePropFromRenderer(vtkProp *prop)\n\nAdd props directly to the view.\n"},
  {"SetDrawCells", PyvtkPVRenderView_SetDrawCells, METH_VARARGS,
   "V.SetDrawCells(bool)\nC++: void SetDrawCells(bool choice)\n\nTells view that it should draw a particular array component to\nthe screen such that the pixels can be read back and decoded to\nobtain the values.\n"},
  {"SetArrayNameToDraw", PyvtkPVRenderView_SetArrayNameToDraw, METH_VARARGS,
   "V.SetArrayNameToDraw(string)\nC++: void SetArrayNameToDraw(const char *name)\n\nTells view that it should draw a particular array component to\nthe screen such that the pixels can be read back and decoded to\nobtain the values.\n"},
  {"SetArrayNumberToDraw", PyvtkPVRenderView_SetArrayNumberToDraw, METH_VARARGS,
   "V.SetArrayNumberToDraw(int)\nC++: void SetArrayNumberToDraw(int fieldAttributeType)\n\nTells view that it should draw a particular array component to\nthe screen such that the pixels can be read back and decoded to\nobtain the values.\n"},
  {"SetArrayComponentToDraw", PyvtkPVRenderView_SetArrayComponentToDraw, METH_VARARGS,
   "V.SetArrayComponentToDraw(int)\nC++: void SetArrayComponentToDraw(int comp)\n\nTells view that it should draw a particular array component to\nthe screen such that the pixels can be read back and decoded to\nobtain the values.\n"},
  {"SetScalarRange", PyvtkPVRenderView_SetScalarRange, METH_VARARGS,
   "V.SetScalarRange(float, float)\nC++: void SetScalarRange(double min, double max)\n\nTells view that it should draw a particular array component to\nthe screen such that the pixels can be read back and decoded to\nobtain the values.\n"},
  {"BeginValueCapture", PyvtkPVRenderView_BeginValueCapture, METH_VARARGS,
   "V.BeginValueCapture()\nC++: void BeginValueCapture()\n\nTells view that it should draw a particular array component to\nthe screen such that the pixels can be read back and decoded to\nobtain the values.\n"},
  {"EndValueCapture", PyvtkPVRenderView_EndValueCapture, METH_VARARGS,
   "V.EndValueCapture()\nC++: void EndValueCapture()\n\nTells view that it should draw a particular array component to\nthe screen such that the pixels can be read back and decoded to\nobtain the values.\n"},
  {"SetValueRenderingModeCommand", PyvtkPVRenderView_SetValueRenderingModeCommand, METH_VARARGS,
   "V.SetValueRenderingModeCommand(int)\nC++: void SetValueRenderingModeCommand(int mode)\n\nCurrent rendering mode of vtkValuePass (float or invertible RGB).\n"},
  {"GetValueRenderingModeCommand", PyvtkPVRenderView_GetValueRenderingModeCommand, METH_VARARGS,
   "V.GetValueRenderingModeCommand() -> int\nC++: int GetValueRenderingModeCommand()\n\nCurrent rendering mode of vtkValuePass (float or invertible RGB).\n"},
  {"CaptureValuesFloat", PyvtkPVRenderView_CaptureValuesFloat, METH_VARARGS,
   "V.CaptureValuesFloat()\nC++: void CaptureValuesFloat()\n\nAccess to vtkValuePass::FLOATING_POINT mode rendered image.\nvtkValuePass's internal FBO is accessed directly when rendering\nlocally. When rendering in parallel, IceT composites the\nintermediate results from vtkValuePass and the final result is\naccessed through vtkIceTCompositePass. Float value rendering is\nonly supported in BATCH mode and in CLIENT mode (local\nrendering). These methods do nothing if INVERTIBLE_LUT mode is\nactive.\n"},
  {"GetCapturedValuesFloat", PyvtkPVRenderView_GetCapturedValuesFloat, METH_VARARGS,
   "V.GetCapturedValuesFloat() -> vtkFloatArray\nC++: vtkFloatArray *GetCapturedValuesFloat()\n\nAccess to vtkValuePass::FLOATING_POINT mode rendered image.\nvtkValuePass's internal FBO is accessed directly when rendering\nlocally. When rendering in parallel, IceT composites the\nintermediate results from vtkValuePass and the final result is\naccessed through vtkIceTCompositePass. Float value rendering is\nonly supported in BATCH mode and in CLIENT mode (local\nrendering). These methods do nothing if INVERTIBLE_LUT mode is\nactive.\n"},
  {"StartCaptureLuminance", PyvtkPVRenderView_StartCaptureLuminance, METH_VARARGS,
   "V.StartCaptureLuminance()\nC++: void StartCaptureLuminance()\n\nTells views that it should draw the lighting contributions to the\nframebuffer.\n"},
  {"StopCaptureLuminance", PyvtkPVRenderView_StopCaptureLuminance, METH_VARARGS,
   "V.StopCaptureLuminance()\nC++: void StopCaptureLuminance()\n\nTells views that it should draw the lighting contributions to the\nframebuffer.\n"},
  {"CaptureZBuffer", PyvtkPVRenderView_CaptureZBuffer, METH_VARARGS,
   "V.CaptureZBuffer()\nC++: void CaptureZBuffer()\n\nAccess to the Z buffer.\n"},
  {"GetCapturedZBuffer", PyvtkPVRenderView_GetCapturedZBuffer, METH_VARARGS,
   "V.GetCapturedZBuffer() -> vtkFloatArray\nC++: vtkFloatArray *GetCapturedZBuffer()\n\nAccess to the Z buffer.\n"},
  {"SetEnableOSPRay", PyvtkPVRenderView_SetEnableOSPRay, METH_VARARGS,
   "V.SetEnableOSPRay(bool)\nC++: void SetEnableOSPRay(bool)\n\nSwitches between rasterization and ray tracing.\n"},
  {"GetEnableOSPRay", PyvtkPVRenderView_GetEnableOSPRay, METH_VARARGS,
   "V.GetEnableOSPRay() -> bool\nC++: bool GetEnableOSPRay()\n\nSwitches between rasterization and ray tracing.\n"},
  {"SetShadows", PyvtkPVRenderView_SetShadows, METH_VARARGS,
   "V.SetShadows(bool)\nC++: void SetShadows(bool)\n\nControls whether OSPRay sends casts shadow rays or not.\n"},
  {"GetShadows", PyvtkPVRenderView_GetShadows, METH_VARARGS,
   "V.GetShadows() -> bool\nC++: bool GetShadows()\n\nControls whether OSPRay sends casts shadow rays or not.\n"},
  {"SetAmbientOcclusionSamples", PyvtkPVRenderView_SetAmbientOcclusionSamples, METH_VARARGS,
   "V.SetAmbientOcclusionSamples(int)\nC++: void SetAmbientOcclusionSamples(int)\n\nSets the number of occlusion query rays that OSPRay sends at each\nintersection.\n"},
  {"GetAmbientOcclusionSamples", PyvtkPVRenderView_GetAmbientOcclusionSamples, METH_VARARGS,
   "V.GetAmbientOcclusionSamples() -> int\nC++: int GetAmbientOcclusionSamples()\n\nSets the number of occlusion query rays that OSPRay sends at each\nintersection.\n"},
  {"SetSamplesPerPixel", PyvtkPVRenderView_SetSamplesPerPixel, METH_VARARGS,
   "V.SetSamplesPerPixel(int)\nC++: void SetSamplesPerPixel(int)\n\nSet the number of primary rays that OSPRay shoots per pixel.\n"},
  {"GetSamplesPerPixel", PyvtkPVRenderView_GetSamplesPerPixel, METH_VARARGS,
   "V.GetSamplesPerPixel() -> int\nC++: int GetSamplesPerPixel()\n\nSet the number of primary rays that OSPRay shoots per pixel.\n"},
  {"SetMaxFrames", PyvtkPVRenderView_SetMaxFrames, METH_VARARGS,
   "V.SetMaxFrames(int)\nC++: void SetMaxFrames(int)\n\nSet the number of render passes OSPRay takes to accumulate\nsubsampled color results.\n"},
  {"GetMaxFrames", PyvtkPVRenderView_GetMaxFrames, METH_VARARGS,
   "V.GetMaxFrames() -> int\nC++: int GetMaxFrames()\n\nSet the number of render passes OSPRay takes to accumulate\nsubsampled color results.\n"},
  {"GetOSPRayContinueStreaming", PyvtkPVRenderView_GetOSPRayContinueStreaming, METH_VARARGS,
   "V.GetOSPRayContinueStreaming() -> bool\nC++: bool GetOSPRayContinueStreaming()\n\nHas OSPRay reached the max frames?\n"},
  {"SetLightScale", PyvtkPVRenderView_SetLightScale, METH_VARARGS,
   "V.SetLightScale(float)\nC++: void SetLightScale(double)\n\nDimish or Amplify all lights in the scene.\n"},
  {"GetLightScale", PyvtkPVRenderView_GetLightScale, METH_VARARGS,
   "V.GetLightScale() -> float\nC++: double GetLightScale()\n\nDimish or Amplify all lights in the scene.\n"},
  {"SetOSPRayRendererType", PyvtkPVRenderView_SetOSPRayRendererType, METH_VARARGS,
   "V.SetOSPRayRendererType(string)\nC++: void SetOSPRayRendererType(std::string)\n\nSet the OSPRay renderer to use. May be either scivis (default) or\npathtracer.\n"},
  {"SetBackgroundNorth", PyvtkPVRenderView_SetBackgroundNorth, METH_VARARGS,
   "V.SetBackgroundNorth(float, float, float)\nC++: void SetBackgroundNorth(double x, double y, double z)\n\nControl of background orientation for OSPRay.\n"},
  {"SetBackgroundEast", PyvtkPVRenderView_SetBackgroundEast, METH_VARARGS,
   "V.SetBackgroundEast(float, float, float)\nC++: void SetBackgroundEast(double x, double y, double z)\n\nControl of background orientation for OSPRay.\n"},
  {"SetMaterialLibrary", PyvtkPVRenderView_SetMaterialLibrary, METH_VARARGS,
   "V.SetMaterialLibrary(vtkPVMaterialLibrary)\nC++: virtual void SetMaterialLibrary(vtkPVMaterialLibrary *)\n\nFor OSPRay, set the library of materials.\n"},
  {"SetViewTime", PyvtkPVRenderView_SetViewTime, METH_VARARGS,
   "V.SetViewTime(float)\nC++: void SetViewTime(double value) override;\n\nGet/Set the time this view is showing. Whenever time is changed,\nthis fires a ViewTimeChangedEvent event.\n\note CallOnAllProcesses\n"},
  {"SetTimeCacheSize", PyvtkPVRenderView_SetTimeCacheSize, METH_VARARGS,
   "V.SetTimeCacheSize(int)\nC++: void SetTimeCacheSize(int)\n\nSet the size of OSPRay's temporal cache.\n"},
  {"GetTimeCacheSize", PyvtkPVRenderView_GetTimeCacheSize, METH_VARARGS,
   "V.GetTimeCacheSize() -> int\nC++: int GetTimeCacheSize()\n\nSet the size of OSPRay's temporal cache.\n"},
  {"GetDiscreteCameras", PyvtkPVRenderView_GetDiscreteCameras, METH_VARARGS,
   "V.GetDiscreteCameras(vtkInformation, vtkPVDataRepresentation)\n    -> vtkPVCameraCollection\nC++: static vtkPVCameraCollection *GetDiscreteCameras(\n    vtkInformation *info, vtkPVDataRepresentation *repr)\n\nDiscreteCameras are a collection of cameras when specified,\nforces the view to only interact *to* a camera in the collection.\n\nIn `vtkPVView::REQUEST_UPDATE()` pass, representations may\nrequest the view to use discrete cameras by providing a\nvtkPVCameraCollection to the view. Since multiple representations\nmay be visible in the view, it's up to the representations how to\nhandle multiple representations providing different styles.\n\nWhen set, on each render, vtkPVRenderView will try to update the\ncurrent camera to match a camera in the collection. During\ninteracting, however, the snapping to a camera in the collection\nis only done when the snapped to camera is different from the\nprevious. This avoids side effects on camera manipulators that\nsimply update existing camera positions during interaction.\n\note Since this is supposed to set in vtkPVView::REQUEST_UPDATE(),\nit is unset before the pass is triggered.\n\n@warning This is a new/experimental feature that was added to\n    support\nviewing of Cinema databases in ParaView. As the support for\nCinema in ParaView improve, this is likely to change.\n"},
  {"SetDiscreteCameras", PyvtkPVRenderView_SetDiscreteCameras, METH_VARARGS,
   "V.SetDiscreteCameras(vtkInformation, vtkPVDataRepresentation,\n    vtkPVCameraCollection)\nC++: static void SetDiscreteCameras(vtkInformation *info,\n    vtkPVDataRepresentation *repr, vtkPVCameraCollection *style)\n\nDiscreteCameras are a collection of cameras when specified,\nforces the view to only interact *to* a camera in the collection.\n\nIn `vtkPVView::REQUEST_UPDATE()` pass, representations may\nrequest the view to use discrete cameras by providing a\nvtkPVCameraCollection to the view. Since multiple representations\nmay be visible in the view, it's up to the representations how to\nhandle multiple representations providing different styles.\n\nWhen set, on each render, vtkPVRenderView will try to update the\ncurrent camera to match a camera in the collection. During\ninteracting, however, the snapping to a camera in the collection\nis only done when the snapped to camera is different from the\nprevious. This avoids side effects on camera manipulators that\nsimply update existing camera positions during interaction.\n\note Since this is supposed to set in vtkPVView::REQUEST_UPDATE(),\nit is unset before the pass is triggered.\n\n@warning This is a new/experimental feature that was added to\n    support\nviewing of Cinema databases in ParaView. As the support for\nCinema in ParaView improve, this is likely to change.\n"},
  {"GetRenderView", PyvtkPVRenderView_GetRenderView, METH_VARARGS,
   "V.GetRenderView() -> vtkRenderViewBase\nC++: virtual vtkRenderViewBase *GetRenderView()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVRenderView_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVRenderView", // tp_name
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
  PyvtkPVRenderView_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVRenderView_StaticNew()
{
  return vtkPVRenderView::New();
}

PyObject *PyvtkPVRenderView_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVRenderView_Type, PyvtkPVRenderView_Methods,
    "vtkPVRenderView",
 &PyvtkPVRenderView_StaticNew);

  PyTypeObject *pytype = &PyvtkPVRenderView_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVView_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPVRenderView_InteractionModes_Type);
  PyvtkPVRenderView_InteractionModes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkPVRenderView_InteractionModes_Type);

  o = (PyObject *)&PyvtkPVRenderView_InteractionModes_Type;
  if (PyDict_SetItemString(d, "InteractionModes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkPVRenderView::InteractionModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "INTERACTION_MODE_UNINTIALIZED", vtkPVRenderView::INTERACTION_MODE_UNINTIALIZED },
        { "INTERACTION_MODE_3D", vtkPVRenderView::INTERACTION_MODE_3D },
        { "INTERACTION_MODE_2D", vtkPVRenderView::INTERACTION_MODE_2D },
        { "INTERACTION_MODE_SELECTION", vtkPVRenderView::INTERACTION_MODE_SELECTION },
        { "INTERACTION_MODE_ZOOM", vtkPVRenderView::INTERACTION_MODE_ZOOM },
        { "INTERACTION_MODE_POLYGON", vtkPVRenderView::INTERACTION_MODE_POLYGON },
      };

    o = PyvtkPVRenderView_InteractionModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "DEFAULT_RENDERER", vtkPVRenderView::DEFAULT_RENDERER },
        { "NON_COMPOSITED_RENDERER", vtkPVRenderView::NON_COMPOSITED_RENDERER },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVRenderView(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVRenderView_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVRenderView", o) != 0)
  {
    Py_DECREF(o);
  }

}

