// python wrapper for vtkParallelRenderManager
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
#include "vtkParallelRenderManager.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParallelRenderManager(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkParallelRenderManager_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkParallelRenderManager_Doc =
  "vtkParallelRenderManager - An object to control parallel rendering.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkParallelRenderManager operates in multiple processes.  It provides\n"
  "proper renderers and render windows for performing the parallel\n"
  "rendering correctly.  It can also attach itself to render windows and\n"
  "propagate rendering events and camera views.\n\n"
  "@attention Many parallel rendering schemes do not correctly handle\n"
  "transparency. Unless otherwise documented, assume a sub class does\n"
  "not.\n\n"
  "@todo Synchronization/barrier primitives.\n\n"
  "@todo Query ranges of scalar values of objects in addition to the\n"
  "boundary in three-space\n\n";

static PyTypeObject PyvtkParallelRenderManager_Tags_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingParallelPython.vtkParallelRenderManager.Tags", // tp_name
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

PyObject *PyvtkParallelRenderManager_Tags_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkParallelRenderManager_Tags_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkParallelRenderManager_Tags_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkParallelRenderManager_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParallelRenderManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParallelRenderManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParallelRenderManager *tempr = vtkParallelRenderManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParallelRenderManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParallelRenderManager::NewInstance());

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
PyvtkParallelRenderManager_MakeRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->MakeRenderWindow() :
      op->vtkParallelRenderManager::MakeRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_MakeRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->MakeRenderer() :
      op->vtkParallelRenderManager::MakeRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkParallelRenderManager::GetRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetRenderWindow(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::SetRenderWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkParallelRenderManager::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

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
      op->vtkParallelRenderManager::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_InitializePieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializePieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializePieces();
    }
    else
    {
      op->vtkParallelRenderManager::InitializePieces();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_InitializeOffScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeOffScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeOffScreen();
    }
    else
    {
      op->vtkParallelRenderManager::InitializeOffScreen();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_StartInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartInteractor();
    }
    else
    {
      op->vtkParallelRenderManager::StartInteractor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_StartServices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartServices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartServices();
    }
    else
    {
      op->vtkParallelRenderManager::StartServices();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_StopServices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StopServices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StopServices();
    }
    else
    {
      op->vtkParallelRenderManager::StopServices();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_StartRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartRender();
    }
    else
    {
      op->vtkParallelRenderManager::StartRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_EndRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndRender();
    }
    else
    {
      op->vtkParallelRenderManager::EndRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SatelliteStartRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SatelliteStartRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SatelliteStartRender();
    }
    else
    {
      op->vtkParallelRenderManager::SatelliteStartRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SatelliteEndRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SatelliteEndRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SatelliteEndRender();
    }
    else
    {
      op->vtkParallelRenderManager::SatelliteEndRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_RenderRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderRMI();
    }
    else
    {
      op->vtkParallelRenderManager::RenderRMI();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_ResetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->ResetCamera(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::ResetCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_ResetCameraClippingRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCameraClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->ResetCameraClippingRange(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::ResetCameraClippingRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_ComputeVisiblePropBoundsRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVisiblePropBoundsRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ComputeVisiblePropBoundsRMI(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::ComputeVisiblePropBoundsRMI(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_InitializeRMIs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeRMIs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeRMIs();
    }
    else
    {
      op->vtkParallelRenderManager::InitializeRMIs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_ResetAllCameras(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetAllCameras");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetAllCameras();
    }
    else
    {
      op->vtkParallelRenderManager::ResetAllCameras();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_ComputeVisiblePropBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVisiblePropBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  vtkRenderer *temp0 = nullptr;
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->ComputeVisiblePropBounds(temp0, temp1);
    }
    else
    {
      op->vtkParallelRenderManager::ComputeVisiblePropBounds(temp0, temp1);
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
PyvtkParallelRenderManager_SetParallelRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParallelRendering(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::SetParallelRendering(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetParallelRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetParallelRendering() :
      op->vtkParallelRenderManager::GetParallelRendering());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_ParallelRenderingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelRenderingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ParallelRenderingOn();
    }
    else
    {
      op->vtkParallelRenderManager::ParallelRenderingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_ParallelRenderingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelRenderingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ParallelRenderingOff();
    }
    else
    {
      op->vtkParallelRenderManager::ParallelRenderingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetRenderEventPropagation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderEventPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderEventPropagation(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::SetRenderEventPropagation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetRenderEventPropagation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderEventPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRenderEventPropagation() :
      op->vtkParallelRenderManager::GetRenderEventPropagation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_RenderEventPropagationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderEventPropagationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderEventPropagationOn();
    }
    else
    {
      op->vtkParallelRenderManager::RenderEventPropagationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_RenderEventPropagationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderEventPropagationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderEventPropagationOff();
    }
    else
    {
      op->vtkParallelRenderManager::RenderEventPropagationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetDefaultRenderEventPropagation(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDefaultRenderEventPropagation");

  bool temp0 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkParallelRenderManager::SetDefaultRenderEventPropagation(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetDefaultRenderEventPropagation(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDefaultRenderEventPropagation");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkParallelRenderManager::GetDefaultRenderEventPropagation();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetUseCompositing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCompositing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseCompositing(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::SetUseCompositing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetUseCompositing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCompositing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseCompositing() :
      op->vtkParallelRenderManager::GetUseCompositing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_UseCompositingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCompositingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCompositingOn();
    }
    else
    {
      op->vtkParallelRenderManager::UseCompositingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_UseCompositingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCompositingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCompositingOff();
    }
    else
    {
      op->vtkParallelRenderManager::UseCompositingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImageReductionFactor(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::SetImageReductionFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetImageReductionFactor() :
      op->vtkParallelRenderManager::GetImageReductionFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetMaxImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxImageReductionFactor(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::SetMaxImageReductionFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetMaxImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxImageReductionFactor() :
      op->vtkParallelRenderManager::GetMaxImageReductionFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetImageReductionFactorForUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageReductionFactorForUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImageReductionFactorForUpdateRate(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::SetImageReductionFactorForUpdateRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetAutoImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoImageReductionFactor(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::SetAutoImageReductionFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetAutoImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoImageReductionFactor() :
      op->vtkParallelRenderManager::GetAutoImageReductionFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_AutoImageReductionFactorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoImageReductionFactorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoImageReductionFactorOn();
    }
    else
    {
      op->vtkParallelRenderManager::AutoImageReductionFactorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_AutoImageReductionFactorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoImageReductionFactorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoImageReductionFactorOff();
    }
    else
    {
      op->vtkParallelRenderManager::AutoImageReductionFactorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRenderTime() :
      op->vtkParallelRenderManager::GetRenderTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetImageProcessingTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageProcessingTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetImageProcessingTime() :
      op->vtkParallelRenderManager::GetImageProcessingTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetSyncRenderWindowRenderers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSyncRenderWindowRenderers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSyncRenderWindowRenderers() :
      op->vtkParallelRenderManager::GetSyncRenderWindowRenderers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetSyncRenderWindowRenderers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSyncRenderWindowRenderers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSyncRenderWindowRenderers(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::SetSyncRenderWindowRenderers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SyncRenderWindowRenderersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SyncRenderWindowRenderersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SyncRenderWindowRenderersOn();
    }
    else
    {
      op->vtkParallelRenderManager::SyncRenderWindowRenderersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SyncRenderWindowRenderersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SyncRenderWindowRenderersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SyncRenderWindowRenderersOff();
    }
    else
    {
      op->vtkParallelRenderManager::SyncRenderWindowRenderersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_AddRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->AddRenderer(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::AddRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_RemoveRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->RemoveRenderer(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::RemoveRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_RemoveAllRenderers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllRenderers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllRenderers();
    }
    else
    {
      op->vtkParallelRenderManager::RemoveAllRenderers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetWriteBackImages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteBackImages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteBackImages(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::SetWriteBackImages(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetWriteBackImages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteBackImages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteBackImages() :
      op->vtkParallelRenderManager::GetWriteBackImages());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_WriteBackImagesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteBackImagesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteBackImagesOn();
    }
    else
    {
      op->vtkParallelRenderManager::WriteBackImagesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_WriteBackImagesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteBackImagesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteBackImagesOff();
    }
    else
    {
      op->vtkParallelRenderManager::WriteBackImagesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetMagnifyImages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnifyImages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMagnifyImages(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::SetMagnifyImages(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetMagnifyImages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnifyImages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMagnifyImages() :
      op->vtkParallelRenderManager::GetMagnifyImages());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_MagnifyImagesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MagnifyImagesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MagnifyImagesOn();
    }
    else
    {
      op->vtkParallelRenderManager::MagnifyImagesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_MagnifyImagesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MagnifyImagesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MagnifyImagesOff();
    }
    else
    {
      op->vtkParallelRenderManager::MagnifyImagesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetMagnifyImageMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnifyImageMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMagnifyImageMethod(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::SetMagnifyImageMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetMagnifyImageMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnifyImageMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMagnifyImageMethod() :
      op->vtkParallelRenderManager::GetMagnifyImageMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetMagnifyImageMethodToNearest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnifyImageMethodToNearest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMagnifyImageMethodToNearest();
    }
    else
    {
      op->vtkParallelRenderManager::SetMagnifyImageMethodToNearest();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetMagnifyImageMethodToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnifyImageMethodToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMagnifyImageMethodToLinear();
    }
    else
    {
      op->vtkParallelRenderManager::SetMagnifyImageMethodToLinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_MagnifyImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MagnifyImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  vtkUnsignedCharArray *temp0 = nullptr;
  const size_t size1 = 2;
  int temp1[2];
  vtkUnsignedCharArray *temp2 = nullptr;
  const size_t size3 = 2;
  int temp3[2];
  size_t size4 = 0;
  int store4[4];
  int *temp4 = nullptr;
  if (ap.GetArgSize(4) > 0)
  {
    size4 = 4;
    temp4 = store4;
  }
  size_t size5 = 0;
  int store5[4];
  int *temp5 = nullptr;
  if (ap.GetArgSize(5) > 0)
  {
    size5 = 4;
    temp5 = store5;
  }
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 6) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkUnsignedCharArray") &&
      ap.GetArray(temp3, size3) &&
      (ap.NoArgsLeft() || ap.GetArray(temp4, size4)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp5, size5)))
  {
    if (ap.IsBound())
    {
      op->MagnifyImage(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkParallelRenderManager::MagnifyImage(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_MagnifyImageNearest(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MagnifyImageNearest");

  vtkUnsignedCharArray *temp0 = nullptr;
  const size_t size1 = 2;
  int temp1[2];
  vtkUnsignedCharArray *temp2 = nullptr;
  const size_t size3 = 2;
  int temp3[2];
  size_t size4 = 0;
  int store4[4];
  int *temp4 = nullptr;
  if (ap.GetArgSize(4) > 0)
  {
    size4 = 4;
    temp4 = store4;
  }
  size_t size5 = 0;
  int store5[4];
  int *temp5 = nullptr;
  if (ap.GetArgSize(5) > 0)
  {
    size5 = 4;
    temp5 = store5;
  }
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4, 6) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkUnsignedCharArray") &&
      ap.GetArray(temp3, size3) &&
      (ap.NoArgsLeft() || ap.GetArray(temp4, size4)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp5, size5)))
  {
    vtkParallelRenderManager::MagnifyImageNearest(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_MagnifyImageLinear(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MagnifyImageLinear");

  vtkUnsignedCharArray *temp0 = nullptr;
  const size_t size1 = 2;
  int temp1[2];
  vtkUnsignedCharArray *temp2 = nullptr;
  const size_t size3 = 2;
  int temp3[2];
  size_t size4 = 0;
  int store4[4];
  int *temp4 = nullptr;
  if (ap.GetArgSize(4) > 0)
  {
    size4 = 4;
    temp4 = store4;
  }
  size_t size5 = 0;
  int store5[4];
  int *temp5 = nullptr;
  if (ap.GetArgSize(5) > 0)
  {
    size5 = 4;
    temp5 = store5;
  }
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4, 6) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkUnsignedCharArray") &&
      ap.GetArray(temp3, size3) &&
      (ap.NoArgsLeft() || ap.GetArray(temp4, size4)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp5, size5)))
  {
    vtkParallelRenderManager::MagnifyImageLinear(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  vtkUnsignedCharArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
  {
    if (ap.IsBound())
    {
      op->GetPixelData(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::GetPixelData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkParallelRenderManager_GetPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkUnsignedCharArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkUnsignedCharArray"))
  {
    if (ap.IsBound())
    {
      op->GetPixelData(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkParallelRenderManager::GetPixelData(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkParallelRenderManager_GetPixelData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkParallelRenderManager_GetPixelData_s1(self, args);
    case 5:
      return PyvtkParallelRenderManager_GetPixelData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPixelData");
  return nullptr;
}



static PyObject *
PyvtkParallelRenderManager_GetReducedPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReducedPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  vtkUnsignedCharArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
  {
    if (ap.IsBound())
    {
      op->GetReducedPixelData(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::GetReducedPixelData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkParallelRenderManager_GetReducedPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReducedPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkUnsignedCharArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkUnsignedCharArray"))
  {
    if (ap.IsBound())
    {
      op->GetReducedPixelData(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkParallelRenderManager::GetReducedPixelData(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkParallelRenderManager_GetReducedPixelData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkParallelRenderManager_GetReducedPixelData_s1(self, args);
    case 5:
      return PyvtkParallelRenderManager_GetReducedPixelData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetReducedPixelData");
  return nullptr;
}



static PyObject *
PyvtkParallelRenderManager_GetFullImageSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullImageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetFullImageSize() :
      op->vtkParallelRenderManager::GetFullImageSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetReducedImageSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReducedImageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetReducedImageSize() :
      op->vtkParallelRenderManager::GetReducedImageSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_TileWindows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TileWindows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->TileWindows(temp0, temp1, temp2);
    }
    else
    {
      op->vtkParallelRenderManager::TileWindows(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetUseRGBA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseRGBA(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::SetUseRGBA(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetUseRGBA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseRGBA() :
      op->vtkParallelRenderManager::GetUseRGBA());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetForceRenderWindowSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceRenderWindowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceRenderWindowSize(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::SetForceRenderWindowSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetForceRenderWindowSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceRenderWindowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetForceRenderWindowSize() :
      op->vtkParallelRenderManager::GetForceRenderWindowSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetForcedRenderWindowSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForcedRenderWindowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetForcedRenderWindowSize(temp0, temp1);
    }
    else
    {
      op->vtkParallelRenderManager::SetForcedRenderWindowSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkParallelRenderManager_SetForcedRenderWindowSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForcedRenderWindowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetForcedRenderWindowSize(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::SetForcedRenderWindowSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkParallelRenderManager_SetForcedRenderWindowSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkParallelRenderManager_SetForcedRenderWindowSize_s1(self, args);
    case 1:
      return PyvtkParallelRenderManager_SetForcedRenderWindowSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetForcedRenderWindowSize");
  return nullptr;
}



static PyObject *
PyvtkParallelRenderManager_GetForcedRenderWindowSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForcedRenderWindowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetForcedRenderWindowSize() :
      op->vtkParallelRenderManager::GetForcedRenderWindowSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_CheckForAbortRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckForAbortRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CheckForAbortRender();
    }
    else
    {
      op->vtkParallelRenderManager::CheckForAbortRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_CheckForAbortComposite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckForAbortComposite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->CheckForAbortComposite() :
      op->vtkParallelRenderManager::CheckForAbortComposite());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetUseBackBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseBackBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseBackBuffer(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::SetUseBackBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetUseBackBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseBackBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseBackBuffer() :
      op->vtkParallelRenderManager::GetUseBackBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_UseBackBufferOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBackBufferOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseBackBufferOn();
    }
    else
    {
      op->vtkParallelRenderManager::UseBackBufferOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_UseBackBufferOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBackBufferOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseBackBufferOff();
    }
    else
    {
      op->vtkParallelRenderManager::UseBackBufferOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetSynchronizeTileProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSynchronizeTileProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSynchronizeTileProperties(temp0);
    }
    else
    {
      op->vtkParallelRenderManager::SetSynchronizeTileProperties(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetSynchronizeTileProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSynchronizeTileProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSynchronizeTileProperties() :
      op->vtkParallelRenderManager::GetSynchronizeTileProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SynchronizeTilePropertiesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeTilePropertiesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SynchronizeTilePropertiesOn();
    }
    else
    {
      op->vtkParallelRenderManager::SynchronizeTilePropertiesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SynchronizeTilePropertiesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeTilePropertiesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SynchronizeTilePropertiesOff();
    }
    else
    {
      op->vtkParallelRenderManager::SynchronizeTilePropertiesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GenericStartRenderCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenericStartRenderCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenericStartRenderCallback();
    }
    else
    {
      op->vtkParallelRenderManager::GenericStartRenderCallback();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GenericEndRenderCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenericEndRenderCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenericEndRenderCallback();
    }
    else
    {
      op->vtkParallelRenderManager::GenericEndRenderCallback();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkParallelRenderManager_Methods[] = {
  {"IsTypeOf", PyvtkParallelRenderManager_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParallelRenderManager_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParallelRenderManager_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkParallelRenderManager\nC++: static vtkParallelRenderManager *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParallelRenderManager_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkParallelRenderManager\nC++: vtkParallelRenderManager *NewInstance()\n\n"},
  {"MakeRenderWindow", PyvtkParallelRenderManager_MakeRenderWindow, METH_VARARGS,
   "V.MakeRenderWindow() -> vtkRenderWindow\nC++: virtual vtkRenderWindow *MakeRenderWindow()\n\nBuilds a vtkRenderWindow compatible with this render manager. \nThe user program is responsible for registering the render window\nwith the SetRenderWindow method and calling Delete.  It is not\nadvisable to use a parallel render manager with a render window\nthat was not built with this method.\n"},
  {"MakeRenderer", PyvtkParallelRenderManager_MakeRenderer, METH_VARARGS,
   "V.MakeRenderer() -> vtkRenderer\nC++: virtual vtkRenderer *MakeRenderer()\n\nBuilds a vtkRenderer compatible with this render manager. \n(Should we also register it?)  The user program is responsible\nfor calling Delete.  It is not advisable to use a parallel render\nmanager with a renderer that was not built with this method.\n"},
  {"GetRenderWindow", PyvtkParallelRenderManager_GetRenderWindow, METH_VARARGS,
   "V.GetRenderWindow() -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetRenderWindow()\n\nSet/Get the RenderWindow to use for compositing. We add a start\nand end observer to the window.\n"},
  {"SetRenderWindow", PyvtkParallelRenderManager_SetRenderWindow, METH_VARARGS,
   "V.SetRenderWindow(vtkRenderWindow)\nC++: virtual void SetRenderWindow(vtkRenderWindow *renWin)\n\nSet/Get the RenderWindow to use for compositing. We add a start\nand end observer to the window.\n"},
  {"GetController", PyvtkParallelRenderManager_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nSet/Get the vtkMultiProcessController which will handle\ncommunications for the parallel rendering.\n"},
  {"SetController", PyvtkParallelRenderManager_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(\n    vtkMultiProcessController *controller)\n\nSet/Get the vtkMultiProcessController which will handle\ncommunications for the parallel rendering.\n"},
  {"InitializePieces", PyvtkParallelRenderManager_InitializePieces, METH_VARARGS,
   "V.InitializePieces()\nC++: virtual void InitializePieces()\n\nThis method sets the piece and number of pieces for each actor\nwith a polydata mapper.\n"},
  {"InitializeOffScreen", PyvtkParallelRenderManager_InitializeOffScreen, METH_VARARGS,
   "V.InitializeOffScreen()\nC++: virtual void InitializeOffScreen()\n\nMake all rendering windows not viewable set as off screen\nrendering. To make all renderwindows on screen rendering again,\ncall OffScreenRenderingOff on all the render windows.  This class\nassumes the window on root node is the only one viewable. \nSubclasses should change this as necessary.\n"},
  {"StartInteractor", PyvtkParallelRenderManager_StartInteractor, METH_VARARGS,
   "V.StartInteractor()\nC++: virtual void StartInteractor()\n\nInitializes the RMIs and then, if on root node, starts the\ninteractor on the attached render window.  Otherwise, starts\nprocessing RMIs. When the interactor returns, it breaks the RMI\nlistening on all other processors.\n"},
  {"StartServices", PyvtkParallelRenderManager_StartServices, METH_VARARGS,
   "V.StartServices()\nC++: virtual void StartServices()\n\nIf on node other than root, starts serving RMI requests for\nparallel renders.\n"},
  {"StopServices", PyvtkParallelRenderManager_StopServices, METH_VARARGS,
   "V.StopServices()\nC++: virtual void StopServices()\n\nIf on root node, stops the RMI processing on all service nodes.\n"},
  {"StartRender", PyvtkParallelRenderManager_StartRender, METH_VARARGS,
   "V.StartRender()\nC++: virtual void StartRender()\n\nCallbacks that initialize and finish rendering and other tasks.\n"},
  {"EndRender", PyvtkParallelRenderManager_EndRender, METH_VARARGS,
   "V.EndRender()\nC++: virtual void EndRender()\n\nCallbacks that initialize and finish rendering and other tasks.\n"},
  {"SatelliteStartRender", PyvtkParallelRenderManager_SatelliteStartRender, METH_VARARGS,
   "V.SatelliteStartRender()\nC++: virtual void SatelliteStartRender()\n\nCallbacks that initialize and finish rendering and other tasks.\n"},
  {"SatelliteEndRender", PyvtkParallelRenderManager_SatelliteEndRender, METH_VARARGS,
   "V.SatelliteEndRender()\nC++: virtual void SatelliteEndRender()\n\nCallbacks that initialize and finish rendering and other tasks.\n"},
  {"RenderRMI", PyvtkParallelRenderManager_RenderRMI, METH_VARARGS,
   "V.RenderRMI()\nC++: virtual void RenderRMI()\n\nCallbacks that initialize and finish rendering and other tasks.\n"},
  {"ResetCamera", PyvtkParallelRenderManager_ResetCamera, METH_VARARGS,
   "V.ResetCamera(vtkRenderer)\nC++: virtual void ResetCamera(vtkRenderer *ren)\n\nCallbacks that initialize and finish rendering and other tasks.\n"},
  {"ResetCameraClippingRange", PyvtkParallelRenderManager_ResetCameraClippingRange, METH_VARARGS,
   "V.ResetCameraClippingRange(vtkRenderer)\nC++: virtual void ResetCameraClippingRange(vtkRenderer *ren)\n\nCallbacks that initialize and finish rendering and other tasks.\n"},
  {"ComputeVisiblePropBoundsRMI", PyvtkParallelRenderManager_ComputeVisiblePropBoundsRMI, METH_VARARGS,
   "V.ComputeVisiblePropBoundsRMI(int)\nC++: virtual void ComputeVisiblePropBoundsRMI(int renderId)\n\nCallbacks that initialize and finish rendering and other tasks.\n"},
  {"InitializeRMIs", PyvtkParallelRenderManager_InitializeRMIs, METH_VARARGS,
   "V.InitializeRMIs()\nC++: virtual void InitializeRMIs()\n\n"},
  {"ResetAllCameras", PyvtkParallelRenderManager_ResetAllCameras, METH_VARARGS,
   "V.ResetAllCameras()\nC++: virtual void ResetAllCameras()\n\nResets the camera of each renderer contained in the RenderWindow.\nShould only be called in the \"root\" process, and all remote\nprocesses must be processing RMIs for this method to complete.\n"},
  {"ComputeVisiblePropBounds", PyvtkParallelRenderManager_ComputeVisiblePropBounds, METH_VARARGS,
   "V.ComputeVisiblePropBounds(vtkRenderer, [float, float, float,\n    float, float, float])\nC++: virtual void ComputeVisiblePropBounds(vtkRenderer *ren,\n    double bounds[6])\n\nCalculates the bounds by gathering information from all\nprocesses.\n"},
  {"SetParallelRendering", PyvtkParallelRenderManager_SetParallelRendering, METH_VARARGS,
   "V.SetParallelRendering(int)\nC++: virtual void SetParallelRendering(int _arg)\n\nTurns on/off parallel rendering.  When on (the default) the\nobject responds to render events of the attached window,\npropagates the render event to other processors, and otherwise\nenables the parallel rendering process.\n"},
  {"GetParallelRendering", PyvtkParallelRenderManager_GetParallelRendering, METH_VARARGS,
   "V.GetParallelRendering() -> int\nC++: virtual int GetParallelRendering()\n\nTurns on/off parallel rendering.  When on (the default) the\nobject responds to render events of the attached window,\npropagates the render event to other processors, and otherwise\nenables the parallel rendering process.\n"},
  {"ParallelRenderingOn", PyvtkParallelRenderManager_ParallelRenderingOn, METH_VARARGS,
   "V.ParallelRenderingOn()\nC++: virtual void ParallelRenderingOn()\n\nTurns on/off parallel rendering.  When on (the default) the\nobject responds to render events of the attached window,\npropagates the render event to other processors, and otherwise\nenables the parallel rendering process.\n"},
  {"ParallelRenderingOff", PyvtkParallelRenderManager_ParallelRenderingOff, METH_VARARGS,
   "V.ParallelRenderingOff()\nC++: virtual void ParallelRenderingOff()\n\nTurns on/off parallel rendering.  When on (the default) the\nobject responds to render events of the attached window,\npropagates the render event to other processors, and otherwise\nenables the parallel rendering process.\n"},
  {"SetRenderEventPropagation", PyvtkParallelRenderManager_SetRenderEventPropagation, METH_VARARGS,
   "V.SetRenderEventPropagation(int)\nC++: virtual void SetRenderEventPropagation(int _arg)\n\nTurns on/off render event propagation.  When on (the default) and\nParallelRendering is on, process 0 will send an RMI call to all\nremote processes to perform a synchronized render.  When off,\nrender must be manually called on each process.\n"},
  {"GetRenderEventPropagation", PyvtkParallelRenderManager_GetRenderEventPropagation, METH_VARARGS,
   "V.GetRenderEventPropagation() -> int\nC++: virtual int GetRenderEventPropagation()\n\nTurns on/off render event propagation.  When on (the default) and\nParallelRendering is on, process 0 will send an RMI call to all\nremote processes to perform a synchronized render.  When off,\nrender must be manually called on each process.\n"},
  {"RenderEventPropagationOn", PyvtkParallelRenderManager_RenderEventPropagationOn, METH_VARARGS,
   "V.RenderEventPropagationOn()\nC++: virtual void RenderEventPropagationOn()\n\nTurns on/off render event propagation.  When on (the default) and\nParallelRendering is on, process 0 will send an RMI call to all\nremote processes to perform a synchronized render.  When off,\nrender must be manually called on each process.\n"},
  {"RenderEventPropagationOff", PyvtkParallelRenderManager_RenderEventPropagationOff, METH_VARARGS,
   "V.RenderEventPropagationOff()\nC++: virtual void RenderEventPropagationOff()\n\nTurns on/off render event propagation.  When on (the default) and\nParallelRendering is on, process 0 will send an RMI call to all\nremote processes to perform a synchronized render.  When off,\nrender must be manually called on each process.\n"},
  {"SetDefaultRenderEventPropagation", PyvtkParallelRenderManager_SetDefaultRenderEventPropagation, METH_VARARGS,
   "V.SetDefaultRenderEventPropagation(bool)\nC++: static void SetDefaultRenderEventPropagation(bool val)\n\nGet/Set the default value used for RenderEventPropagation when a\nnew instance of vtkParallelRenderManager is created. Set to true\nby default.\n"},
  {"GetDefaultRenderEventPropagation", PyvtkParallelRenderManager_GetDefaultRenderEventPropagation, METH_VARARGS,
   "V.GetDefaultRenderEventPropagation() -> bool\nC++: static bool GetDefaultRenderEventPropagation()\n\n"},
  {"SetUseCompositing", PyvtkParallelRenderManager_SetUseCompositing, METH_VARARGS,
   "V.SetUseCompositing(int)\nC++: virtual void SetUseCompositing(int _arg)\n\nThis is used for tiled display rendering.  When data has been\nduplicated on all processes, then we do not need to compositing.\nCameras and renders are still propagated though.\n"},
  {"GetUseCompositing", PyvtkParallelRenderManager_GetUseCompositing, METH_VARARGS,
   "V.GetUseCompositing() -> int\nC++: virtual int GetUseCompositing()\n\nThis is used for tiled display rendering.  When data has been\nduplicated on all processes, then we do not need to compositing.\nCameras and renders are still propagated though.\n"},
  {"UseCompositingOn", PyvtkParallelRenderManager_UseCompositingOn, METH_VARARGS,
   "V.UseCompositingOn()\nC++: virtual void UseCompositingOn()\n\nThis is used for tiled display rendering.  When data has been\nduplicated on all processes, then we do not need to compositing.\nCameras and renders are still propagated though.\n"},
  {"UseCompositingOff", PyvtkParallelRenderManager_UseCompositingOff, METH_VARARGS,
   "V.UseCompositingOff()\nC++: virtual void UseCompositingOff()\n\nThis is used for tiled display rendering.  When data has been\nduplicated on all processes, then we do not need to compositing.\nCameras and renders are still propagated though.\n"},
  {"SetImageReductionFactor", PyvtkParallelRenderManager_SetImageReductionFactor, METH_VARARGS,
   "V.SetImageReductionFactor(float)\nC++: virtual void SetImageReductionFactor(double factor)\n\nSet/Get the reduction factor (for sort-last based parallel\nrenderers). The size of rendered image is divided by the\nreduction factor and then is blown up to the size of the current\nvtkRenderWindow.  Setting higher reduction factors enables\nshorter image transfer times (which is often the bottleneck) but\nwill greatly reduce image quality.  A reduction factor of 2 or\ngreater should only be used for intermediate images in\ninteractive applications.  A reduction factor of 1 (or less) will\nresult in no change in image quality.  A parallel render manager\nmay ignore the image reduction factor if it will result in little\nor no performance enhancements (eg. it does not do image space\nmanipulations).\n"},
  {"GetImageReductionFactor", PyvtkParallelRenderManager_GetImageReductionFactor, METH_VARARGS,
   "V.GetImageReductionFactor() -> float\nC++: virtual double GetImageReductionFactor()\n\nSet/Get the reduction factor (for sort-last based parallel\nrenderers). The size of rendered image is divided by the\nreduction factor and then is blown up to the size of the current\nvtkRenderWindow.  Setting higher reduction factors enables\nshorter image transfer times (which is often the bottleneck) but\nwill greatly reduce image quality.  A reduction factor of 2 or\ngreater should only be used for intermediate images in\ninteractive applications.  A reduction factor of 1 (or less) will\nresult in no change in image quality.  A parallel render manager\nmay ignore the image reduction factor if it will result in little\nor no performance enhancements (eg. it does not do image space\nmanipulations).\n"},
  {"SetMaxImageReductionFactor", PyvtkParallelRenderManager_SetMaxImageReductionFactor, METH_VARARGS,
   "V.SetMaxImageReductionFactor(float)\nC++: virtual void SetMaxImageReductionFactor(double _arg)\n\n"},
  {"GetMaxImageReductionFactor", PyvtkParallelRenderManager_GetMaxImageReductionFactor, METH_VARARGS,
   "V.GetMaxImageReductionFactor() -> float\nC++: virtual double GetMaxImageReductionFactor()\n\n"},
  {"SetImageReductionFactorForUpdateRate", PyvtkParallelRenderManager_SetImageReductionFactorForUpdateRate, METH_VARARGS,
   "V.SetImageReductionFactorForUpdateRate(float)\nC++: virtual void SetImageReductionFactorForUpdateRate(\n    double DesiredUpdateRate)\n\nSets the ReductionFactor based on the given desired update rate\nand the rendering metrics taken from the last time\nUpdateServerInfo was called.  Note that if AutoReductionFactor is\non, this function is called with the desired update rate of the\nrender window automatically.\n"},
  {"SetAutoImageReductionFactor", PyvtkParallelRenderManager_SetAutoImageReductionFactor, METH_VARARGS,
   "V.SetAutoImageReductionFactor(int)\nC++: virtual void SetAutoImageReductionFactor(int _arg)\n\nIf on, the ReductionFactor is automatically adjusted to best meet\nthe the DesiredUpdateRate in the current RenderWindow based on\nmetrics from the last render.\n"},
  {"GetAutoImageReductionFactor", PyvtkParallelRenderManager_GetAutoImageReductionFactor, METH_VARARGS,
   "V.GetAutoImageReductionFactor() -> int\nC++: virtual int GetAutoImageReductionFactor()\n\nIf on, the ReductionFactor is automatically adjusted to best meet\nthe the DesiredUpdateRate in the current RenderWindow based on\nmetrics from the last render.\n"},
  {"AutoImageReductionFactorOn", PyvtkParallelRenderManager_AutoImageReductionFactorOn, METH_VARARGS,
   "V.AutoImageReductionFactorOn()\nC++: virtual void AutoImageReductionFactorOn()\n\nIf on, the ReductionFactor is automatically adjusted to best meet\nthe the DesiredUpdateRate in the current RenderWindow based on\nmetrics from the last render.\n"},
  {"AutoImageReductionFactorOff", PyvtkParallelRenderManager_AutoImageReductionFactorOff, METH_VARARGS,
   "V.AutoImageReductionFactorOff()\nC++: virtual void AutoImageReductionFactorOff()\n\nIf on, the ReductionFactor is automatically adjusted to best meet\nthe the DesiredUpdateRate in the current RenderWindow based on\nmetrics from the last render.\n"},
  {"GetRenderTime", PyvtkParallelRenderManager_GetRenderTime, METH_VARARGS,
   "V.GetRenderTime() -> float\nC++: virtual double GetRenderTime()\n\nGet rendering metrics.\n"},
  {"GetImageProcessingTime", PyvtkParallelRenderManager_GetImageProcessingTime, METH_VARARGS,
   "V.GetImageProcessingTime() -> float\nC++: virtual double GetImageProcessingTime()\n\nGet rendering metrics.\n"},
  {"GetSyncRenderWindowRenderers", PyvtkParallelRenderManager_GetSyncRenderWindowRenderers, METH_VARARGS,
   "V.GetSyncRenderWindowRenderers() -> int\nC++: virtual int GetSyncRenderWindowRenderers()\n\nBy default, the state of all renderers in the root's render\nwindow is propagated to the rest of the processes.  In order for\nthis to work, all render windows must have the same renderers in\nthe same order.  If this is not the case, you can turn off the\nSyncRenderWindowRenderers.  When this flag is off, the list of\nrenderers held by this parallel render manager (initially empty)\nis synced.  You can modify the list of renderers with the\nAddRenderer, RemoveRenderer, and RemoveAllRenderers methods.\n"},
  {"SetSyncRenderWindowRenderers", PyvtkParallelRenderManager_SetSyncRenderWindowRenderers, METH_VARARGS,
   "V.SetSyncRenderWindowRenderers(int)\nC++: virtual void SetSyncRenderWindowRenderers(int _arg)\n\nBy default, the state of all renderers in the root's render\nwindow is propagated to the rest of the processes.  In order for\nthis to work, all render windows must have the same renderers in\nthe same order.  If this is not the case, you can turn off the\nSyncRenderWindowRenderers.  When this flag is off, the list of\nrenderers held by this parallel render manager (initially empty)\nis synced.  You can modify the list of renderers with the\nAddRenderer, RemoveRenderer, and RemoveAllRenderers methods.\n"},
  {"SyncRenderWindowRenderersOn", PyvtkParallelRenderManager_SyncRenderWindowRenderersOn, METH_VARARGS,
   "V.SyncRenderWindowRenderersOn()\nC++: virtual void SyncRenderWindowRenderersOn()\n\nBy default, the state of all renderers in the root's render\nwindow is propagated to the rest of the processes.  In order for\nthis to work, all render windows must have the same renderers in\nthe same order.  If this is not the case, you can turn off the\nSyncRenderWindowRenderers.  When this flag is off, the list of\nrenderers held by this parallel render manager (initially empty)\nis synced.  You can modify the list of renderers with the\nAddRenderer, RemoveRenderer, and RemoveAllRenderers methods.\n"},
  {"SyncRenderWindowRenderersOff", PyvtkParallelRenderManager_SyncRenderWindowRenderersOff, METH_VARARGS,
   "V.SyncRenderWindowRenderersOff()\nC++: virtual void SyncRenderWindowRenderersOff()\n\nBy default, the state of all renderers in the root's render\nwindow is propagated to the rest of the processes.  In order for\nthis to work, all render windows must have the same renderers in\nthe same order.  If this is not the case, you can turn off the\nSyncRenderWindowRenderers.  When this flag is off, the list of\nrenderers held by this parallel render manager (initially empty)\nis synced.  You can modify the list of renderers with the\nAddRenderer, RemoveRenderer, and RemoveAllRenderers methods.\n"},
  {"AddRenderer", PyvtkParallelRenderManager_AddRenderer, METH_VARARGS,
   "V.AddRenderer(vtkRenderer)\nC++: virtual void AddRenderer(vtkRenderer *)\n\nBy default, the state of all renderers in the root's render\nwindow is propagated to the rest of the processes.  In order for\nthis to work, all render windows must have the same renderers in\nthe same order.  If this is not the case, you can turn off the\nSyncRenderWindowRenderers.  When this flag is off, the list of\nrenderers held by this parallel render manager (initially empty)\nis synced.  You can modify the list of renderers with the\nAddRenderer, RemoveRenderer, and RemoveAllRenderers methods.\n"},
  {"RemoveRenderer", PyvtkParallelRenderManager_RemoveRenderer, METH_VARARGS,
   "V.RemoveRenderer(vtkRenderer)\nC++: virtual void RemoveRenderer(vtkRenderer *)\n\nBy default, the state of all renderers in the root's render\nwindow is propagated to the rest of the processes.  In order for\nthis to work, all render windows must have the same renderers in\nthe same order.  If this is not the case, you can turn off the\nSyncRenderWindowRenderers.  When this flag is off, the list of\nrenderers held by this parallel render manager (initially empty)\nis synced.  You can modify the list of renderers with the\nAddRenderer, RemoveRenderer, and RemoveAllRenderers methods.\n"},
  {"RemoveAllRenderers", PyvtkParallelRenderManager_RemoveAllRenderers, METH_VARARGS,
   "V.RemoveAllRenderers()\nC++: virtual void RemoveAllRenderers()\n\nBy default, the state of all renderers in the root's render\nwindow is propagated to the rest of the processes.  In order for\nthis to work, all render windows must have the same renderers in\nthe same order.  If this is not the case, you can turn off the\nSyncRenderWindowRenderers.  When this flag is off, the list of\nrenderers held by this parallel render manager (initially empty)\nis synced.  You can modify the list of renderers with the\nAddRenderer, RemoveRenderer, and RemoveAllRenderers methods.\n"},
  {"SetWriteBackImages", PyvtkParallelRenderManager_SetWriteBackImages, METH_VARARGS,
   "V.SetWriteBackImages(int)\nC++: virtual void SetWriteBackImages(int _arg)\n\nIf on (the default), the result of any image space manipulations\nare written back to the render window frame buffer.  If off, the\nimage stored in the frame buffer may not be correct.  Either way,\nthe correct frame buffer images may be read with\nvtkParallelRenderManager::GetPixelData.  Turning WriteBackImages\noff may result in a speedup if the render window is not visible\nto the user and images are read back for further processing or\ntransit.\n"},
  {"GetWriteBackImages", PyvtkParallelRenderManager_GetWriteBackImages, METH_VARARGS,
   "V.GetWriteBackImages() -> int\nC++: virtual int GetWriteBackImages()\n\nIf on (the default), the result of any image space manipulations\nare written back to the render window frame buffer.  If off, the\nimage stored in the frame buffer may not be correct.  Either way,\nthe correct frame buffer images may be read with\nvtkParallelRenderManager::GetPixelData.  Turning WriteBackImages\noff may result in a speedup if the render window is not visible\nto the user and images are read back for further processing or\ntransit.\n"},
  {"WriteBackImagesOn", PyvtkParallelRenderManager_WriteBackImagesOn, METH_VARARGS,
   "V.WriteBackImagesOn()\nC++: virtual void WriteBackImagesOn()\n\nIf on (the default), the result of any image space manipulations\nare written back to the render window frame buffer.  If off, the\nimage stored in the frame buffer may not be correct.  Either way,\nthe correct frame buffer images may be read with\nvtkParallelRenderManager::GetPixelData.  Turning WriteBackImages\noff may result in a speedup if the render window is not visible\nto the user and images are read back for further processing or\ntransit.\n"},
  {"WriteBackImagesOff", PyvtkParallelRenderManager_WriteBackImagesOff, METH_VARARGS,
   "V.WriteBackImagesOff()\nC++: virtual void WriteBackImagesOff()\n\nIf on (the default), the result of any image space manipulations\nare written back to the render window frame buffer.  If off, the\nimage stored in the frame buffer may not be correct.  Either way,\nthe correct frame buffer images may be read with\nvtkParallelRenderManager::GetPixelData.  Turning WriteBackImages\noff may result in a speedup if the render window is not visible\nto the user and images are read back for further processing or\ntransit.\n"},
  {"SetMagnifyImages", PyvtkParallelRenderManager_SetMagnifyImages, METH_VARARGS,
   "V.SetMagnifyImages(int)\nC++: virtual void SetMagnifyImages(int _arg)\n\nIf on (the default), when the ImageReductionFactor is greater\nthan 1 and WriteBackImages is on, the image will be magnified to\nfill the entire render window.\n"},
  {"GetMagnifyImages", PyvtkParallelRenderManager_GetMagnifyImages, METH_VARARGS,
   "V.GetMagnifyImages() -> int\nC++: virtual int GetMagnifyImages()\n\nIf on (the default), when the ImageReductionFactor is greater\nthan 1 and WriteBackImages is on, the image will be magnified to\nfill the entire render window.\n"},
  {"MagnifyImagesOn", PyvtkParallelRenderManager_MagnifyImagesOn, METH_VARARGS,
   "V.MagnifyImagesOn()\nC++: virtual void MagnifyImagesOn()\n\nIf on (the default), when the ImageReductionFactor is greater\nthan 1 and WriteBackImages is on, the image will be magnified to\nfill the entire render window.\n"},
  {"MagnifyImagesOff", PyvtkParallelRenderManager_MagnifyImagesOff, METH_VARARGS,
   "V.MagnifyImagesOff()\nC++: virtual void MagnifyImagesOff()\n\nIf on (the default), when the ImageReductionFactor is greater\nthan 1 and WriteBackImages is on, the image will be magnified to\nfill the entire render window.\n"},
  {"SetMagnifyImageMethod", PyvtkParallelRenderManager_SetMagnifyImageMethod, METH_VARARGS,
   "V.SetMagnifyImageMethod(int)\nC++: virtual void SetMagnifyImageMethod(int method)\n\nSets the method used to magnify images.  Nearest simply\nreplicates each pixel enough times to fill the image.  Linear\nperforms linear interpolation between the pixels.\n"},
  {"GetMagnifyImageMethod", PyvtkParallelRenderManager_GetMagnifyImageMethod, METH_VARARGS,
   "V.GetMagnifyImageMethod() -> int\nC++: virtual int GetMagnifyImageMethod()\n\nSets the method used to magnify images.  Nearest simply\nreplicates each pixel enough times to fill the image.  Linear\nperforms linear interpolation between the pixels.\n"},
  {"SetMagnifyImageMethodToNearest", PyvtkParallelRenderManager_SetMagnifyImageMethodToNearest, METH_VARARGS,
   "V.SetMagnifyImageMethodToNearest()\nC++: void SetMagnifyImageMethodToNearest()\n\nSets the method used to magnify images.  Nearest simply\nreplicates each pixel enough times to fill the image.  Linear\nperforms linear interpolation between the pixels.\n"},
  {"SetMagnifyImageMethodToLinear", PyvtkParallelRenderManager_SetMagnifyImageMethodToLinear, METH_VARARGS,
   "V.SetMagnifyImageMethodToLinear()\nC++: void SetMagnifyImageMethodToLinear()\n\nSets the method used to magnify images.  Nearest simply\nreplicates each pixel enough times to fill the image.  Linear\nperforms linear interpolation between the pixels.\n"},
  {"MagnifyImage", PyvtkParallelRenderManager_MagnifyImage, METH_VARARGS,
   "V.MagnifyImage(vtkUnsignedCharArray, (int, int),\n    vtkUnsignedCharArray, (int, int), (int, int, int, int), (int,\n    int, int, int))\nC++: virtual void MagnifyImage(vtkUnsignedCharArray *fullImage,\n    const int fullImageSize[2],\n    vtkUnsignedCharArray *reducedImage,\n    const int reducedImageSize[2],\n    const int fullImageViewport[4]=nullptr,\n    const int reducedImageViewport[4]=nullptr)\n\nConvenience functions for magnifying images.\n"},
  {"MagnifyImageNearest", PyvtkParallelRenderManager_MagnifyImageNearest, METH_VARARGS,
   "V.MagnifyImageNearest(vtkUnsignedCharArray, (int, int),\n    vtkUnsignedCharArray, (int, int), (int, int, int, int), (int,\n    int, int, int))\nC++: static void MagnifyImageNearest(\n    vtkUnsignedCharArray *fullImage, const int fullImageSize[2],\n    vtkUnsignedCharArray *reducedImage,\n    const int reducedImageSize[2],\n    const int fullImageViewport[4]=nullptr,\n    const int reducedImageViewport[4]=nullptr)\n\nConvenience functions for magnifying images.\n"},
  {"MagnifyImageLinear", PyvtkParallelRenderManager_MagnifyImageLinear, METH_VARARGS,
   "V.MagnifyImageLinear(vtkUnsignedCharArray, (int, int),\n    vtkUnsignedCharArray, (int, int), (int, int, int, int), (int,\n    int, int, int))\nC++: static void MagnifyImageLinear(\n    vtkUnsignedCharArray *fullImage, const int fullImageSize[2],\n    vtkUnsignedCharArray *reducedImage,\n    const int reducedImageSize[2],\n    const int fullImageViewport[4]=nullptr,\n    const int reducedImageViewport[4]=nullptr)\n\nConvenience functions for magnifying images.\n"},
  {"GetPixelData", PyvtkParallelRenderManager_GetPixelData, METH_VARARGS,
   "V.GetPixelData(vtkUnsignedCharArray)\nC++: virtual void GetPixelData(vtkUnsignedCharArray *data)\nV.GetPixelData(int, int, int, int, vtkUnsignedCharArray)\nC++: virtual void GetPixelData(int x1, int y1, int x2, int y2,\n    vtkUnsignedCharArray *data)\n\nThe most appropriate way to retrieve full size image data after a\nrender.  Will work regardless of whether WriteBackImages or\nMagnifyImage is on or off.  The data returned may be a shallow\ncopy of an internal array.  Therefore, the data may be invalid\nafter the next render or if the ParallelRenderManager is\ndestroyed.\n"},
  {"GetReducedPixelData", PyvtkParallelRenderManager_GetReducedPixelData, METH_VARARGS,
   "V.GetReducedPixelData(vtkUnsignedCharArray)\nC++: virtual void GetReducedPixelData(vtkUnsignedCharArray *data)\nV.GetReducedPixelData(int, int, int, int, vtkUnsignedCharArray)\nC++: virtual void GetReducedPixelData(int x1, int y1, int x2,\n    int y2, vtkUnsignedCharArray *data)\n\nThe most appropriate way to retrieve reduced size image data\nafter a render.  Will work regardless of whether WriteBackImages\nor MagnifyImage is on or off.  The data returned may be a shallow\ncopy of an internal array.  Therefore, the data may be invalid\nafter the next render or if the ParallelRenderManager is\ndestroyed.\n"},
  {"GetFullImageSize", PyvtkParallelRenderManager_GetFullImageSize, METH_VARARGS,
   "V.GetFullImageSize() -> (int, int)\nC++: int *GetFullImageSize()\n\n"},
  {"GetReducedImageSize", PyvtkParallelRenderManager_GetReducedImageSize, METH_VARARGS,
   "V.GetReducedImageSize() -> (int, int)\nC++: int *GetReducedImageSize()\n\n"},
  {"TileWindows", PyvtkParallelRenderManager_TileWindows, METH_VARARGS,
   "V.TileWindows(int, int, int)\nC++: void TileWindows(int xsize, int ysize, int nColumns)\n\nGiven the x and y size of the render windows, reposition them in\na tile of n columns.\n"},
  {"SetUseRGBA", PyvtkParallelRenderManager_SetUseRGBA, METH_VARARGS,
   "V.SetUseRGBA(int)\nC++: virtual void SetUseRGBA(int _arg)\n\nGet/Set if all Images must use RGBA instead of RGB. By default,\nthis flag is on.\n"},
  {"GetUseRGBA", PyvtkParallelRenderManager_GetUseRGBA, METH_VARARGS,
   "V.GetUseRGBA() -> int\nC++: virtual int GetUseRGBA()\n\nGet/Set if all Images must use RGBA instead of RGB. By default,\nthis flag is on.\n"},
  {"SetForceRenderWindowSize", PyvtkParallelRenderManager_SetForceRenderWindowSize, METH_VARARGS,
   "V.SetForceRenderWindowSize(int)\nC++: virtual void SetForceRenderWindowSize(int _arg)\n\nIf ForceRenderWindowSize is set to true, the render manager will\nuse the RenderWindowSize ivar instead of getting the size from\nthe render window.\n"},
  {"GetForceRenderWindowSize", PyvtkParallelRenderManager_GetForceRenderWindowSize, METH_VARARGS,
   "V.GetForceRenderWindowSize() -> int\nC++: virtual int GetForceRenderWindowSize()\n\nIf ForceRenderWindowSize is set to true, the render manager will\nuse the RenderWindowSize ivar instead of getting the size from\nthe render window.\n"},
  {"SetForcedRenderWindowSize", PyvtkParallelRenderManager_SetForcedRenderWindowSize, METH_VARARGS,
   "V.SetForcedRenderWindowSize(int, int)\nC++: void SetForcedRenderWindowSize(int, int)\nV.SetForcedRenderWindowSize((int, int))\nC++: void SetForcedRenderWindowSize(int a[2])\n\n"},
  {"GetForcedRenderWindowSize", PyvtkParallelRenderManager_GetForcedRenderWindowSize, METH_VARARGS,
   "V.GetForcedRenderWindowSize() -> (int, int)\nC++: int *GetForcedRenderWindowSize()\n\n"},
  {"CheckForAbortRender", PyvtkParallelRenderManager_CheckForAbortRender, METH_VARARGS,
   "V.CheckForAbortRender()\nC++: virtual void CheckForAbortRender()\n\n"},
  {"CheckForAbortComposite", PyvtkParallelRenderManager_CheckForAbortComposite, METH_VARARGS,
   "V.CheckForAbortComposite() -> int\nC++: virtual int CheckForAbortComposite()\n\n"},
  {"SetUseBackBuffer", PyvtkParallelRenderManager_SetUseBackBuffer, METH_VARARGS,
   "V.SetUseBackBuffer(int)\nC++: virtual void SetUseBackBuffer(int _arg)\n\nThe default is to allow the use of the back buffer for\ncompositing. If set to false, this will prevent to manager from\nswapping buffers. This allows something else (for instance\nVisibleCellSelection) to control front/back buffer swapping.\n"},
  {"GetUseBackBuffer", PyvtkParallelRenderManager_GetUseBackBuffer, METH_VARARGS,
   "V.GetUseBackBuffer() -> int\nC++: virtual int GetUseBackBuffer()\n\nThe default is to allow the use of the back buffer for\ncompositing. If set to false, this will prevent to manager from\nswapping buffers. This allows something else (for instance\nVisibleCellSelection) to control front/back buffer swapping.\n"},
  {"UseBackBufferOn", PyvtkParallelRenderManager_UseBackBufferOn, METH_VARARGS,
   "V.UseBackBufferOn()\nC++: virtual void UseBackBufferOn()\n\nThe default is to allow the use of the back buffer for\ncompositing. If set to false, this will prevent to manager from\nswapping buffers. This allows something else (for instance\nVisibleCellSelection) to control front/back buffer swapping.\n"},
  {"UseBackBufferOff", PyvtkParallelRenderManager_UseBackBufferOff, METH_VARARGS,
   "V.UseBackBufferOff()\nC++: virtual void UseBackBufferOff()\n\nThe default is to allow the use of the back buffer for\ncompositing. If set to false, this will prevent to manager from\nswapping buffers. This allows something else (for instance\nVisibleCellSelection) to control front/back buffer swapping.\n"},
  {"SetSynchronizeTileProperties", PyvtkParallelRenderManager_SetSynchronizeTileProperties, METH_VARARGS,
   "V.SetSynchronizeTileProperties(int)\nC++: virtual void SetSynchronizeTileProperties(int _arg)\n\nWhen set the render manager will synchronize the TileViewport and\nTileScale properties. This may not be desirable in cases where\nthere's some other mechanism to set the tile dimensions eg. Tile\ndisplays.\n"},
  {"GetSynchronizeTileProperties", PyvtkParallelRenderManager_GetSynchronizeTileProperties, METH_VARARGS,
   "V.GetSynchronizeTileProperties() -> int\nC++: virtual int GetSynchronizeTileProperties()\n\nWhen set the render manager will synchronize the TileViewport and\nTileScale properties. This may not be desirable in cases where\nthere's some other mechanism to set the tile dimensions eg. Tile\ndisplays.\n"},
  {"SynchronizeTilePropertiesOn", PyvtkParallelRenderManager_SynchronizeTilePropertiesOn, METH_VARARGS,
   "V.SynchronizeTilePropertiesOn()\nC++: virtual void SynchronizeTilePropertiesOn()\n\nWhen set the render manager will synchronize the TileViewport and\nTileScale properties. This may not be desirable in cases where\nthere's some other mechanism to set the tile dimensions eg. Tile\ndisplays.\n"},
  {"SynchronizeTilePropertiesOff", PyvtkParallelRenderManager_SynchronizeTilePropertiesOff, METH_VARARGS,
   "V.SynchronizeTilePropertiesOff()\nC++: virtual void SynchronizeTilePropertiesOff()\n\nWhen set the render manager will synchronize the TileViewport and\nTileScale properties. This may not be desirable in cases where\nthere's some other mechanism to set the tile dimensions eg. Tile\ndisplays.\n"},
  {"GenericStartRenderCallback", PyvtkParallelRenderManager_GenericStartRenderCallback, METH_VARARGS,
   "V.GenericStartRenderCallback()\nC++: virtual void GenericStartRenderCallback()\n\nINTERNAL METHODS (DON NOT USE). There are internal methods made\npublic so that they can be called from callback functions.\n"},
  {"GenericEndRenderCallback", PyvtkParallelRenderManager_GenericEndRenderCallback, METH_VARARGS,
   "V.GenericEndRenderCallback()\nC++: virtual void GenericEndRenderCallback()\n\nINTERNAL METHODS (DON NOT USE). There are internal methods made\npublic so that they can be called from callback functions.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkParallelRenderManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingParallelPython.vtkParallelRenderManager", // tp_name
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
  PyvtkParallelRenderManager_Doc, // tp_doc
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

PyObject *PyvtkParallelRenderManager_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkParallelRenderManager_Type, PyvtkParallelRenderManager_Methods,
    "vtkParallelRenderManager",
 nullptr);

  PyTypeObject *pytype = &PyvtkParallelRenderManager_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkParallelRenderManager_Tags_Type);
  PyvtkParallelRenderManager_Tags_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkParallelRenderManager_Tags_Type);

  o = (PyObject *)&PyvtkParallelRenderManager_Tags_Type;
  if (PyDict_SetItemString(d, "Tags", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "NEAREST", vtkParallelRenderManager::NEAREST },
        { "LINEAR", vtkParallelRenderManager::LINEAR },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkParallelRenderManager::Tags cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "RENDER_RMI_TAG", vtkParallelRenderManager::RENDER_RMI_TAG },
        { "COMPUTE_VISIBLE_PROP_BOUNDS_RMI_TAG", vtkParallelRenderManager::COMPUTE_VISIBLE_PROP_BOUNDS_RMI_TAG },
        { "WIN_INFO_TAG", vtkParallelRenderManager::WIN_INFO_TAG },
        { "REN_INFO_TAG", vtkParallelRenderManager::REN_INFO_TAG },
        { "LIGHT_INFO_TAG", vtkParallelRenderManager::LIGHT_INFO_TAG },
        { "REN_ID_TAG", vtkParallelRenderManager::REN_ID_TAG },
        { "BOUNDS_TAG", vtkParallelRenderManager::BOUNDS_TAG },
      };

    o = PyvtkParallelRenderManager_Tags_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkParallelRenderManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParallelRenderManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParallelRenderManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

