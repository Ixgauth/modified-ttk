// python wrapper for vtkSynchronizedRenderers
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
#include "vtkSynchronizedRenderers.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSynchronizedRenderers(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSynchronizedRenderers_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSynchronizedRenderers_Doc =
  "vtkSynchronizedRenderers - synchronizes renderers across processes.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkSynchronizedRenderers is used to synchronize renderers\n"
  "(vtkRenderer and subclasses) across processes for parallel rendering.\n"
  "It's designed to be used in conjunction with\n"
  "vtkSynchronizedRenderWindows to synchronize the render windows among\n"
  "those processes. This class handles synchronization of certain render\n"
  "parameters among the renderers such as viewport, camera parameters.\n"
  "It doesn't support compositing of rendered images across processes on\n"
  "its own. You typically either subclass to implement a compositing\n"
  "algorithm or use a renderer capable of compositing eg. IceT based\n"
  "renderer.\n\n";


static PyObject *
PyvtkSynchronizedRenderers_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSynchronizedRenderers::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSynchronizedRenderers::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSynchronizedRenderers *tempr = vtkSynchronizedRenderers::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSynchronizedRenderers *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSynchronizedRenderers::NewInstance());

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
PyvtkSynchronizedRenderers_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkSynchronizedRenderers::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkSynchronizedRenderers::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_SetParallelController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetParallelController(temp0);
    }
    else
    {
      op->vtkSynchronizedRenderers::SetParallelController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_GetParallelController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetParallelController() :
      op->vtkSynchronizedRenderers::GetParallelController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_SetParallelRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  bool temp0 = false;
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
      op->vtkSynchronizedRenderers::SetParallelRendering(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_GetParallelRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetParallelRendering() :
      op->vtkSynchronizedRenderers::GetParallelRendering());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_ParallelRenderingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelRenderingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ParallelRenderingOn();
    }
    else
    {
      op->vtkSynchronizedRenderers::ParallelRenderingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_ParallelRenderingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelRenderingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ParallelRenderingOff();
    }
    else
    {
      op->vtkSynchronizedRenderers::ParallelRenderingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_SetImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  int temp0;
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
      op->vtkSynchronizedRenderers::SetImageReductionFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_GetImageReductionFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageReductionFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageReductionFactorMinValue() :
      op->vtkSynchronizedRenderers::GetImageReductionFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_GetImageReductionFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageReductionFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageReductionFactorMaxValue() :
      op->vtkSynchronizedRenderers::GetImageReductionFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_GetImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageReductionFactor() :
      op->vtkSynchronizedRenderers::GetImageReductionFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_SetWriteBackImages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteBackImages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  bool temp0 = false;
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
      op->vtkSynchronizedRenderers::SetWriteBackImages(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_GetWriteBackImages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteBackImages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetWriteBackImages() :
      op->vtkSynchronizedRenderers::GetWriteBackImages());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_WriteBackImagesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteBackImagesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteBackImagesOn();
    }
    else
    {
      op->vtkSynchronizedRenderers::WriteBackImagesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_WriteBackImagesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteBackImagesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteBackImagesOff();
    }
    else
    {
      op->vtkSynchronizedRenderers::WriteBackImagesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_SetRootProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRootProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRootProcessId(temp0);
    }
    else
    {
      op->vtkSynchronizedRenderers::SetRootProcessId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_GetRootProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRootProcessId() :
      op->vtkSynchronizedRenderers::GetRootProcessId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_CollectiveExpandForVisiblePropBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CollectiveExpandForVisiblePropBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

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
      op->CollectiveExpandForVisiblePropBounds(temp0);
    }
    else
    {
      op->vtkSynchronizedRenderers::CollectiveExpandForVisiblePropBounds(temp0);
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
PyvtkSynchronizedRenderers_SetCaptureDelegate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaptureDelegate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  vtkSynchronizedRenderers *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSynchronizedRenderers"))
  {
    if (ap.IsBound())
    {
      op->SetCaptureDelegate(temp0);
    }
    else
    {
      op->vtkSynchronizedRenderers::SetCaptureDelegate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_GetCaptureDelegate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaptureDelegate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSynchronizedRenderers *tempr = (ap.IsBound() ?
      op->GetCaptureDelegate() :
      op->vtkSynchronizedRenderers::GetCaptureDelegate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_SetAutomaticEventHandling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticEventHandling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomaticEventHandling(temp0);
    }
    else
    {
      op->vtkSynchronizedRenderers::SetAutomaticEventHandling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_GetAutomaticEventHandling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticEventHandling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAutomaticEventHandling() :
      op->vtkSynchronizedRenderers::GetAutomaticEventHandling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_AutomaticEventHandlingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticEventHandlingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticEventHandlingOn();
    }
    else
    {
      op->vtkSynchronizedRenderers::AutomaticEventHandlingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_AutomaticEventHandlingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticEventHandlingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticEventHandlingOff();
    }
    else
    {
      op->vtkSynchronizedRenderers::AutomaticEventHandlingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSynchronizedRenderers_Methods[] = {
  {"IsTypeOf", PyvtkSynchronizedRenderers_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSynchronizedRenderers_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSynchronizedRenderers_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSynchronizedRenderers\nC++: static vtkSynchronizedRenderers *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSynchronizedRenderers_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSynchronizedRenderers\nC++: vtkSynchronizedRenderers *NewInstance()\n\n"},
  {"SetRenderer", PyvtkSynchronizedRenderers_SetRenderer, METH_VARARGS,
   "V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *)\n\nSet the renderer to be synchronized by this instance. A\nvtkSynchronizedRenderers instance can be used to synchronize\nexactly 1 renderer on each processes. You can create multiple\ninstances on vtkSynchronizedRenderers to synchronize multiple\nrenderers.\n"},
  {"GetRenderer", PyvtkSynchronizedRenderers_GetRenderer, METH_VARARGS,
   "V.GetRenderer() -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\nSet the renderer to be synchronized by this instance. A\nvtkSynchronizedRenderers instance can be used to synchronize\nexactly 1 renderer on each processes. You can create multiple\ninstances on vtkSynchronizedRenderers to synchronize multiple\nrenderers.\n"},
  {"SetParallelController", PyvtkSynchronizedRenderers_SetParallelController, METH_VARARGS,
   "V.SetParallelController(vtkMultiProcessController)\nC++: virtual void SetParallelController(\n    vtkMultiProcessController *)\n\nSet the parallel message communicator. This is used to\ncommunicate among processes.\n"},
  {"GetParallelController", PyvtkSynchronizedRenderers_GetParallelController, METH_VARARGS,
   "V.GetParallelController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetParallelController()\n\nSet the parallel message communicator. This is used to\ncommunicate among processes.\n"},
  {"SetParallelRendering", PyvtkSynchronizedRenderers_SetParallelRendering, METH_VARARGS,
   "V.SetParallelRendering(bool)\nC++: virtual void SetParallelRendering(bool _arg)\n\nEnable/Disable parallel rendering. Unless Parallel rendering is\non, the cameras won't be synchronized across processes.\n"},
  {"GetParallelRendering", PyvtkSynchronizedRenderers_GetParallelRendering, METH_VARARGS,
   "V.GetParallelRendering() -> bool\nC++: virtual bool GetParallelRendering()\n\nEnable/Disable parallel rendering. Unless Parallel rendering is\non, the cameras won't be synchronized across processes.\n"},
  {"ParallelRenderingOn", PyvtkSynchronizedRenderers_ParallelRenderingOn, METH_VARARGS,
   "V.ParallelRenderingOn()\nC++: virtual void ParallelRenderingOn()\n\nEnable/Disable parallel rendering. Unless Parallel rendering is\non, the cameras won't be synchronized across processes.\n"},
  {"ParallelRenderingOff", PyvtkSynchronizedRenderers_ParallelRenderingOff, METH_VARARGS,
   "V.ParallelRenderingOff()\nC++: virtual void ParallelRenderingOff()\n\nEnable/Disable parallel rendering. Unless Parallel rendering is\non, the cameras won't be synchronized across processes.\n"},
  {"SetImageReductionFactor", PyvtkSynchronizedRenderers_SetImageReductionFactor, METH_VARARGS,
   "V.SetImageReductionFactor(int)\nC++: virtual void SetImageReductionFactor(int _arg)\n\nGet/Set the image reduction factor.\n"},
  {"GetImageReductionFactorMinValue", PyvtkSynchronizedRenderers_GetImageReductionFactorMinValue, METH_VARARGS,
   "V.GetImageReductionFactorMinValue() -> int\nC++: virtual int GetImageReductionFactorMinValue()\n\nGet/Set the image reduction factor.\n"},
  {"GetImageReductionFactorMaxValue", PyvtkSynchronizedRenderers_GetImageReductionFactorMaxValue, METH_VARARGS,
   "V.GetImageReductionFactorMaxValue() -> int\nC++: virtual int GetImageReductionFactorMaxValue()\n\nGet/Set the image reduction factor.\n"},
  {"GetImageReductionFactor", PyvtkSynchronizedRenderers_GetImageReductionFactor, METH_VARARGS,
   "V.GetImageReductionFactor() -> int\nC++: virtual int GetImageReductionFactor()\n\nGet/Set the image reduction factor.\n"},
  {"SetWriteBackImages", PyvtkSynchronizedRenderers_SetWriteBackImages, METH_VARARGS,
   "V.SetWriteBackImages(bool)\nC++: virtual void SetWriteBackImages(bool _arg)\n\nIf on (default), the rendered images are pasted back on to the\nscreen. You should turn this flag off on processes that are not\nmeant to be visible to the user.\n"},
  {"GetWriteBackImages", PyvtkSynchronizedRenderers_GetWriteBackImages, METH_VARARGS,
   "V.GetWriteBackImages() -> bool\nC++: virtual bool GetWriteBackImages()\n\nIf on (default), the rendered images are pasted back on to the\nscreen. You should turn this flag off on processes that are not\nmeant to be visible to the user.\n"},
  {"WriteBackImagesOn", PyvtkSynchronizedRenderers_WriteBackImagesOn, METH_VARARGS,
   "V.WriteBackImagesOn()\nC++: virtual void WriteBackImagesOn()\n\nIf on (default), the rendered images are pasted back on to the\nscreen. You should turn this flag off on processes that are not\nmeant to be visible to the user.\n"},
  {"WriteBackImagesOff", PyvtkSynchronizedRenderers_WriteBackImagesOff, METH_VARARGS,
   "V.WriteBackImagesOff()\nC++: virtual void WriteBackImagesOff()\n\nIf on (default), the rendered images are pasted back on to the\nscreen. You should turn this flag off on processes that are not\nmeant to be visible to the user.\n"},
  {"SetRootProcessId", PyvtkSynchronizedRenderers_SetRootProcessId, METH_VARARGS,
   "V.SetRootProcessId(int)\nC++: virtual void SetRootProcessId(int _arg)\n\nGet/Set the root-process id. This is required when the\nParallelController is a vtkSocketController. Set to 0 by default\n(which will not work when using a vtkSocketController but will\nwork for vtkMPIController).\n"},
  {"GetRootProcessId", PyvtkSynchronizedRenderers_GetRootProcessId, METH_VARARGS,
   "V.GetRootProcessId() -> int\nC++: virtual int GetRootProcessId()\n\nGet/Set the root-process id. This is required when the\nParallelController is a vtkSocketController. Set to 0 by default\n(which will not work when using a vtkSocketController but will\nwork for vtkMPIController).\n"},
  {"CollectiveExpandForVisiblePropBounds", PyvtkSynchronizedRenderers_CollectiveExpandForVisiblePropBounds, METH_VARARGS,
   "V.CollectiveExpandForVisiblePropBounds([float, float, float,\n    float, float, float])\nC++: void CollectiveExpandForVisiblePropBounds(double bounds[6])\n\nComputes visible prob bounds. This must be called on all\nprocesses at the same time. The collective result is made\navailable on all processes once this method returns. Note that\nthis method requires that bounds is initialized to some value.\nThis expands the bounds to include the prop bounds.\n"},
  {"SetCaptureDelegate", PyvtkSynchronizedRenderers_SetCaptureDelegate, METH_VARARGS,
   "V.SetCaptureDelegate(vtkSynchronizedRenderers)\nC++: virtual void SetCaptureDelegate(vtkSynchronizedRenderers *)\n\nWhen set, this->CaptureRenderedImage() does not capture image\nfrom the screen instead passes the call to the delegate.\n"},
  {"GetCaptureDelegate", PyvtkSynchronizedRenderers_GetCaptureDelegate, METH_VARARGS,
   "V.GetCaptureDelegate() -> vtkSynchronizedRenderers\nC++: virtual vtkSynchronizedRenderers *GetCaptureDelegate()\n\nWhen set, this->CaptureRenderedImage() does not capture image\nfrom the screen instead passes the call to the delegate.\n"},
  {"SetAutomaticEventHandling", PyvtkSynchronizedRenderers_SetAutomaticEventHandling, METH_VARARGS,
   "V.SetAutomaticEventHandling(bool)\nC++: virtual void SetAutomaticEventHandling(bool _arg)\n\nWhen multiple groups of processes are synchronized together using\ndifferent controllers, one needs to specify the order in which\nthe various synchronizers execute. In such cases one starts with\nthe outer most vtkSynchronizedRenderers, sets the dependent one\nas a CaptureDelegate on it and the turn off\nAutomaticEventHandling on the delegate.\n"},
  {"GetAutomaticEventHandling", PyvtkSynchronizedRenderers_GetAutomaticEventHandling, METH_VARARGS,
   "V.GetAutomaticEventHandling() -> bool\nC++: virtual bool GetAutomaticEventHandling()\n\nWhen multiple groups of processes are synchronized together using\ndifferent controllers, one needs to specify the order in which\nthe various synchronizers execute. In such cases one starts with\nthe outer most vtkSynchronizedRenderers, sets the dependent one\nas a CaptureDelegate on it and the turn off\nAutomaticEventHandling on the delegate.\n"},
  {"AutomaticEventHandlingOn", PyvtkSynchronizedRenderers_AutomaticEventHandlingOn, METH_VARARGS,
   "V.AutomaticEventHandlingOn()\nC++: virtual void AutomaticEventHandlingOn()\n\nWhen multiple groups of processes are synchronized together using\ndifferent controllers, one needs to specify the order in which\nthe various synchronizers execute. In such cases one starts with\nthe outer most vtkSynchronizedRenderers, sets the dependent one\nas a CaptureDelegate on it and the turn off\nAutomaticEventHandling on the delegate.\n"},
  {"AutomaticEventHandlingOff", PyvtkSynchronizedRenderers_AutomaticEventHandlingOff, METH_VARARGS,
   "V.AutomaticEventHandlingOff()\nC++: virtual void AutomaticEventHandlingOff()\n\nWhen multiple groups of processes are synchronized together using\ndifferent controllers, one needs to specify the order in which\nthe various synchronizers execute. In such cases one starts with\nthe outer most vtkSynchronizedRenderers, sets the dependent one\nas a CaptureDelegate on it and the turn off\nAutomaticEventHandling on the delegate.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSynchronizedRenderers_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingParallelPython.vtkSynchronizedRenderers", // tp_name
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
  PyvtkSynchronizedRenderers_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSynchronizedRenderers_StaticNew()
{
  return vtkSynchronizedRenderers::New();
}

PyObject *PyvtkSynchronizedRenderers_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSynchronizedRenderers_Type, PyvtkSynchronizedRenderers_Methods,
    "vtkSynchronizedRenderers",
 &PyvtkSynchronizedRenderers_StaticNew);

  PyTypeObject *pytype = &PyvtkSynchronizedRenderers_Type;

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

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "SYNC_RENDERER_TAG", vtkSynchronizedRenderers::SYNC_RENDERER_TAG },
        { "RESET_CAMERA_TAG", vtkSynchronizedRenderers::RESET_CAMERA_TAG },
        { "COMPUTE_BOUNDS_TAG", vtkSynchronizedRenderers::COMPUTE_BOUNDS_TAG },
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

void PyVTKAddFile_vtkSynchronizedRenderers(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSynchronizedRenderers_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSynchronizedRenderers", o) != 0)
  {
    Py_DECREF(o);
  }

}

