// python wrapper for vtkPVSynchronizedRenderer
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
#include "vtkPVSynchronizedRenderer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVSynchronizedRenderer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVSynchronizedRenderer_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVSynchronizedRenderer_Doc =
  "vtkPVSynchronizedRenderer - synchronizes and composites renderers\namong processes in ParaView configurations.\n\n"
  "Superclass: vtkObject\n\n"
;


static PyObject *
PyvtkPVSynchronizedRenderer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVSynchronizedRenderer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVSynchronizedRenderer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVSynchronizedRenderer *tempr = vtkPVSynchronizedRenderer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVSynchronizedRenderer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVSynchronizedRenderer::NewInstance());

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
PyvtkPVSynchronizedRenderer_SetDisableIceT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisableIceT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisableIceT(temp0);
    }
    else
    {
      op->vtkPVSynchronizedRenderer::SetDisableIceT(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_GetDisableIceT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisableIceT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDisableIceT() :
      op->vtkPVSynchronizedRenderer::GetDisableIceT());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  vtkPVSession *temp0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVSession") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1);
    }
    else
    {
      op->vtkPVSynchronizedRenderer::Initialize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_SetPartitionOrdering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartitionOrdering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  vtkPartitionOrderingInterface *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPartitionOrderingInterface"))
  {
    if (ap.IsBound())
    {
      op->SetPartitionOrdering(temp0);
    }
    else
    {
      op->vtkPVSynchronizedRenderer::SetPartitionOrdering(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

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
      op->vtkPVSynchronizedRenderer::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkPVSynchronizedRenderer::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkPVSynchronizedRenderer::GetEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_EnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOn();
    }
    else
    {
      op->vtkPVSynchronizedRenderer::EnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_EnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOff();
    }
    else
    {
      op->vtkPVSynchronizedRenderer::EnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_SetImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

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
      op->vtkPVSynchronizedRenderer::SetImageReductionFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_GetImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageReductionFactor() :
      op->vtkPVSynchronizedRenderer::GetImageReductionFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_SetDataReplicatedOnAllProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataReplicatedOnAllProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataReplicatedOnAllProcesses(temp0);
    }
    else
    {
      op->vtkPVSynchronizedRenderer::SetDataReplicatedOnAllProcesses(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_GetDataReplicatedOnAllProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataReplicatedOnAllProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDataReplicatedOnAllProcesses() :
      op->vtkPVSynchronizedRenderer::GetDataReplicatedOnAllProcesses());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_DataReplicatedOnAllProcessesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataReplicatedOnAllProcessesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DataReplicatedOnAllProcessesOn();
    }
    else
    {
      op->vtkPVSynchronizedRenderer::DataReplicatedOnAllProcessesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_DataReplicatedOnAllProcessesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataReplicatedOnAllProcessesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DataReplicatedOnAllProcessesOff();
    }
    else
    {
      op->vtkPVSynchronizedRenderer::DataReplicatedOnAllProcessesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_SetImageProcessingPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageProcessingPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  vtkImageProcessingPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageProcessingPass"))
  {
    if (ap.IsBound())
    {
      op->SetImageProcessingPass(temp0);
    }
    else
    {
      op->vtkPVSynchronizedRenderer::SetImageProcessingPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_GetImageProcessingPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageProcessingPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageProcessingPass *tempr = (ap.IsBound() ?
      op->GetImageProcessingPass() :
      op->vtkPVSynchronizedRenderer::GetImageProcessingPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_SetRenderPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  vtkRenderPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
  {
    if (ap.IsBound())
    {
      op->SetRenderPass(temp0);
    }
    else
    {
      op->vtkPVSynchronizedRenderer::SetRenderPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_GetRenderPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetRenderPass() :
      op->vtkPVSynchronizedRenderer::GetRenderPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_ConfigureCompressor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConfigureCompressor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

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
      op->vtkPVSynchronizedRenderer::ConfigureCompressor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_SetLossLessCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLossLessCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLossLessCompression(temp0);
    }
    else
    {
      op->vtkPVSynchronizedRenderer::SetLossLessCompression(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_SetUseDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDepthBuffer(temp0);
    }
    else
    {
      op->vtkPVSynchronizedRenderer::SetUseDepthBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_SetRenderEmptyImages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderEmptyImages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderEmptyImages(temp0);
    }
    else
    {
      op->vtkPVSynchronizedRenderer::SetRenderEmptyImages(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_SetNVPipeSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNVPipeSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNVPipeSupport(temp0);
    }
    else
    {
      op->vtkPVSynchronizedRenderer::SetNVPipeSupport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_GetParallelSynchronizer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelSynchronizer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSynchronizedRenderers *tempr = (ap.IsBound() ?
      op->GetParallelSynchronizer() :
      op->vtkPVSynchronizedRenderer::GetParallelSynchronizer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_GetCSSynchronizer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCSSynchronizer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSynchronizedRenderers *tempr = (ap.IsBound() ?
      op->GetCSSynchronizer() :
      op->vtkPVSynchronizedRenderer::GetCSSynchronizer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVSynchronizedRenderer_Methods[] = {
  {"IsTypeOf", PyvtkPVSynchronizedRenderer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVSynchronizedRenderer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVSynchronizedRenderer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVSynchronizedRenderer\nC++: static vtkPVSynchronizedRenderer *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVSynchronizedRenderer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVSynchronizedRenderer\nC++: vtkPVSynchronizedRenderer *NewInstance()\n\n"},
  {"SetDisableIceT", PyvtkPVSynchronizedRenderer_SetDisableIceT, METH_VARARGS,
   "V.SetDisableIceT(bool)\nC++: virtual void SetDisableIceT(bool _arg)\n\nSet this flag to true before calling Initialize() to disable\nusing vtkIceTSynchronizedRenderers for parallel rendering.\nDefault value is setup using\nvtkPVRenderViewSettings::GetDisableIceT.\n"},
  {"GetDisableIceT", PyvtkPVSynchronizedRenderer_GetDisableIceT, METH_VARARGS,
   "V.GetDisableIceT() -> bool\nC++: virtual bool GetDisableIceT()\n\nSet this flag to true before calling Initialize() to disable\nusing vtkIceTSynchronizedRenderers for parallel rendering.\nDefault value is setup using\nvtkPVRenderViewSettings::GetDisableIceT.\n"},
  {"Initialize", PyvtkPVSynchronizedRenderer_Initialize, METH_VARARGS,
   "V.Initialize(vtkPVSession, int)\nC++: void Initialize(vtkPVSession *session, unsigned int id)\n\n"},
  {"SetPartitionOrdering", PyvtkPVSynchronizedRenderer_SetPartitionOrdering, METH_VARARGS,
   "V.SetPartitionOrdering(vtkPartitionOrderingInterface)\nC++: void SetPartitionOrdering(\n    vtkPartitionOrderingInterface *partitionOrdering)\n\npartition ordering that gives processes ordering. Initial value\nis a NULL pointer. This is used only when UseOrderedCompositing\nis true.\n"},
  {"SetRenderer", PyvtkPVSynchronizedRenderer_SetRenderer, METH_VARARGS,
   "V.SetRenderer(vtkRenderer)\nC++: void SetRenderer(vtkRenderer *)\n\nSet the renderer that is being synchronized.\n"},
  {"SetEnabled", PyvtkPVSynchronizedRenderer_SetEnabled, METH_VARARGS,
   "V.SetEnabled(bool)\nC++: virtual void SetEnabled(bool enabled)\n\nEnable/Disable parallel rendering.\n"},
  {"GetEnabled", PyvtkPVSynchronizedRenderer_GetEnabled, METH_VARARGS,
   "V.GetEnabled() -> bool\nC++: virtual bool GetEnabled()\n\nEnable/Disable parallel rendering.\n"},
  {"EnabledOn", PyvtkPVSynchronizedRenderer_EnabledOn, METH_VARARGS,
   "V.EnabledOn()\nC++: virtual void EnabledOn()\n\nEnable/Disable parallel rendering.\n"},
  {"EnabledOff", PyvtkPVSynchronizedRenderer_EnabledOff, METH_VARARGS,
   "V.EnabledOff()\nC++: virtual void EnabledOff()\n\nEnable/Disable parallel rendering.\n"},
  {"SetImageReductionFactor", PyvtkPVSynchronizedRenderer_SetImageReductionFactor, METH_VARARGS,
   "V.SetImageReductionFactor(int)\nC++: void SetImageReductionFactor(int)\n\nGet/Set the image reduction factor. This needs to be set on all\nprocesses and must match up.\n"},
  {"GetImageReductionFactor", PyvtkPVSynchronizedRenderer_GetImageReductionFactor, METH_VARARGS,
   "V.GetImageReductionFactor() -> int\nC++: virtual int GetImageReductionFactor()\n\nGet/Set the image reduction factor. This needs to be set on all\nprocesses and must match up.\n"},
  {"SetDataReplicatedOnAllProcesses", PyvtkPVSynchronizedRenderer_SetDataReplicatedOnAllProcesses, METH_VARARGS,
   "V.SetDataReplicatedOnAllProcesses(bool)\nC++: void SetDataReplicatedOnAllProcesses(bool)\n\nSet to true if data is replicated on all processes. This will\nenable IceT to minimize communications since data is available on\nall process. Off by default.\n"},
  {"GetDataReplicatedOnAllProcesses", PyvtkPVSynchronizedRenderer_GetDataReplicatedOnAllProcesses, METH_VARARGS,
   "V.GetDataReplicatedOnAllProcesses() -> bool\nC++: virtual bool GetDataReplicatedOnAllProcesses()\n\nSet to true if data is replicated on all processes. This will\nenable IceT to minimize communications since data is available on\nall process. Off by default.\n"},
  {"DataReplicatedOnAllProcessesOn", PyvtkPVSynchronizedRenderer_DataReplicatedOnAllProcessesOn, METH_VARARGS,
   "V.DataReplicatedOnAllProcessesOn()\nC++: virtual void DataReplicatedOnAllProcessesOn()\n\nSet to true if data is replicated on all processes. This will\nenable IceT to minimize communications since data is available on\nall process. Off by default.\n"},
  {"DataReplicatedOnAllProcessesOff", PyvtkPVSynchronizedRenderer_DataReplicatedOnAllProcessesOff, METH_VARARGS,
   "V.DataReplicatedOnAllProcessesOff()\nC++: virtual void DataReplicatedOnAllProcessesOff()\n\nSet to true if data is replicated on all processes. This will\nenable IceT to minimize communications since data is available on\nall process. Off by default.\n"},
  {"SetImageProcessingPass", PyvtkPVSynchronizedRenderer_SetImageProcessingPass, METH_VARARGS,
   "V.SetImageProcessingPass(vtkImageProcessingPass)\nC++: void SetImageProcessingPass(vtkImageProcessingPass *)\n\nGet/Set an image processing pass to process the rendered images.\n"},
  {"GetImageProcessingPass", PyvtkPVSynchronizedRenderer_GetImageProcessingPass, METH_VARARGS,
   "V.GetImageProcessingPass() -> vtkImageProcessingPass\nC++: virtual vtkImageProcessingPass *GetImageProcessingPass()\n\nGet/Set an image processing pass to process the rendered images.\n"},
  {"SetRenderPass", PyvtkPVSynchronizedRenderer_SetRenderPass, METH_VARARGS,
   "V.SetRenderPass(vtkRenderPass)\nC++: void SetRenderPass(vtkRenderPass *)\n\nGet/Set geometry rendering pass. This pass is used to render the\ngeometry. If none specified then default rendering pipeline is\nused. This is typically the render-pass pipeline after the\nCameraPass. The CameraPass is setup by ParaView specially since\nParaView needs some customizations for multiviews/icet etc.\n"},
  {"GetRenderPass", PyvtkPVSynchronizedRenderer_GetRenderPass, METH_VARARGS,
   "V.GetRenderPass() -> vtkRenderPass\nC++: virtual vtkRenderPass *GetRenderPass()\n\nGet/Set geometry rendering pass. This pass is used to render the\ngeometry. If none specified then default rendering pipeline is\nused. This is typically the render-pass pipeline after the\nCameraPass. The CameraPass is setup by ParaView specially since\nParaView needs some customizations for multiviews/icet etc.\n"},
  {"ConfigureCompressor", PyvtkPVSynchronizedRenderer_ConfigureCompressor, METH_VARARGS,
   "V.ConfigureCompressor(string)\nC++: void ConfigureCompressor(const char *configuration)\n\nPasses the compressor configuration to the client-server\nsynchronizer, if any. This affects the image compression used to\nrelay images back to the client. See\nvtkPVClientServerSynchronizedRenderers::ConfigureCompressor() for\ndetails.\n"},
  {"SetLossLessCompression", PyvtkPVSynchronizedRenderer_SetLossLessCompression, METH_VARARGS,
   "V.SetLossLessCompression(bool)\nC++: void SetLossLessCompression(bool)\n\nPasses the compressor configuration to the client-server\nsynchronizer, if any. This affects the image compression used to\nrelay images back to the client. See\nvtkPVClientServerSynchronizedRenderers::ConfigureCompressor() for\ndetails.\n"},
  {"SetUseDepthBuffer", PyvtkPVSynchronizedRenderer_SetUseDepthBuffer, METH_VARARGS,
   "V.SetUseDepthBuffer(bool)\nC++: void SetUseDepthBuffer(bool)\n\nActivates or de-activated the use of Depth Buffer in an\nImageProcessingPass\n"},
  {"SetRenderEmptyImages", PyvtkPVSynchronizedRenderer_SetRenderEmptyImages, METH_VARARGS,
   "V.SetRenderEmptyImages(bool)\nC++: void SetRenderEmptyImages(bool)\n\nEnable/Disable empty images optimization.\n"},
  {"SetNVPipeSupport", PyvtkPVSynchronizedRenderer_SetNVPipeSupport, METH_VARARGS,
   "V.SetNVPipeSupport(bool)\nC++: void SetNVPipeSupport(bool)\n\nEnable/Disable NVPipe\n"},
  {"GetParallelSynchronizer", PyvtkPVSynchronizedRenderer_GetParallelSynchronizer, METH_VARARGS,
   "V.GetParallelSynchronizer() -> vtkSynchronizedRenderers\nC++: virtual vtkSynchronizedRenderers *GetParallelSynchronizer()\n\nNot for the faint hearted. This internal vtkSynchronizedRenderers\ninstances are exposed for advanced users that want to do advanced\ntricks with rendering. These will change without notice. Do not\nuse them unless you know what you are doing. ParallelSynchronizer\nis the vtkSynchronizedRenderers used to synchronize rendering\nbetween processes in an MPI group -- typically\nvtkIceTSynchronizedRenderers when available. CSSynchronizer is\nthe client-server vtkSynchronizedRenderers used in client-server\nconfigurations.\n"},
  {"GetCSSynchronizer", PyvtkPVSynchronizedRenderer_GetCSSynchronizer, METH_VARARGS,
   "V.GetCSSynchronizer() -> vtkSynchronizedRenderers\nC++: virtual vtkSynchronizedRenderers *GetCSSynchronizer()\n\nNot for the faint hearted. This internal vtkSynchronizedRenderers\ninstances are exposed for advanced users that want to do advanced\ntricks with rendering. These will change without notice. Do not\nuse them unless you know what you are doing. ParallelSynchronizer\nis the vtkSynchronizedRenderers used to synchronize rendering\nbetween processes in an MPI group -- typically\nvtkIceTSynchronizedRenderers when available. CSSynchronizer is\nthe client-server vtkSynchronizedRenderers used in client-server\nconfigurations.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVSynchronizedRenderer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVSynchronizedRenderer", // tp_name
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
  PyvtkPVSynchronizedRenderer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVSynchronizedRenderer_StaticNew()
{
  return vtkPVSynchronizedRenderer::New();
}

PyObject *PyvtkPVSynchronizedRenderer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVSynchronizedRenderer_Type, PyvtkPVSynchronizedRenderer_Methods,
    "vtkPVSynchronizedRenderer",
 &PyvtkPVSynchronizedRenderer_StaticNew);

  PyTypeObject *pytype = &PyvtkPVSynchronizedRenderer_Type;

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

void PyVTKAddFile_vtkPVSynchronizedRenderer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVSynchronizedRenderer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVSynchronizedRenderer", o) != 0)
  {
    Py_DECREF(o);
  }

}

