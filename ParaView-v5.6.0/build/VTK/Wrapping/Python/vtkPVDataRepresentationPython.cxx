// python wrapper for vtkPVDataRepresentation
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
#include "vtkPVDataRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVDataRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVDataRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkDataRepresentation_ClassNew
extern "C" { PyObject *PyvtkDataRepresentation_ClassNew(); }
#define DECLARED_PyvtkDataRepresentation_ClassNew
#endif

static const char *PyvtkPVDataRepresentation_Doc =
  "vtkPVDataRepresentation - vtkPVDataRepresentation adds some ParaView\nspecific API to data representations.\n\n"
  "Superclass: vtkDataRepresentation\n\n"
  "@sa\n"
  "vtkPVDataRepresentationPipeline\n\n";


static PyObject *
PyvtkPVDataRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVDataRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVDataRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVDataRepresentation *tempr = vtkPVDataRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVDataRepresentation::NewInstance());

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
PyvtkPVDataRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  vtkInformationRequestKey *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->ProcessViewRequest(temp0, temp1, temp2) :
      op->vtkPVDataRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkModified();
    }
    else
    {
      op->vtkPVDataRepresentation::MarkModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->Initialize(temp0, temp1) :
      op->vtkPVDataRepresentation::Initialize(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_GetUniqueIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniqueIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetUniqueIdentifier() :
      op->vtkPVDataRepresentation::GetUniqueIdentifier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility(temp0);
    }
    else
    {
      op->vtkPVDataRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_GetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVisibility() :
      op->vtkPVDataRepresentation::GetVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_GetRenderedDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderedDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetRenderedDataObject(temp0) :
      op->vtkPVDataRepresentation::GetRenderedDataObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_SetUpdateTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUpdateTime(temp0);
    }
    else
    {
      op->vtkPVDataRepresentation::SetUpdateTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_GetUpdateTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUpdateTime() :
      op->vtkPVDataRepresentation::GetUpdateTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_GetUpdateTimeValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateTimeValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUpdateTimeValid() :
      op->vtkPVDataRepresentation::GetUpdateTimeValid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_SetForcedCacheKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForcedCacheKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForcedCacheKey(temp0);
    }
    else
    {
      op->vtkPVDataRepresentation::SetForcedCacheKey(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_SetForceUseCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceUseCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceUseCache(temp0);
    }
    else
    {
      op->vtkPVDataRepresentation::SetForceUseCache(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_GetCacheKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCacheKey() :
      op->vtkPVDataRepresentation::GetCacheKey());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_GetUseCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseCache() :
      op->vtkPVDataRepresentation::GetUseCache());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_GetUsingCacheForUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUsingCacheForUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUsingCacheForUpdate() :
      op->vtkPVDataRepresentation::GetUsingCacheForUpdate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_GetNeedUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeedUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNeedUpdate() :
      op->vtkPVDataRepresentation::GetNeedUpdate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_AddToView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  vtkView *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkView"))
  {
    bool tempr = (ap.IsBound() ?
      op->AddToView(temp0) :
      op->vtkPVDataRepresentation::AddToView(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_RemoveFromView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFromView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  vtkView *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkView"))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveFromView(temp0) :
      op->vtkPVDataRepresentation::RemoveFromView(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_GetInternalOutputPort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalOutputPort() :
      op->vtkPVDataRepresentation::GetInternalOutputPort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVDataRepresentation_GetInternalOutputPort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalOutputPort(temp0) :
      op->vtkPVDataRepresentation::GetInternalOutputPort(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVDataRepresentation_GetInternalOutputPort_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalOutputPort(temp0, temp1) :
      op->vtkPVDataRepresentation::GetInternalOutputPort(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVDataRepresentation_GetInternalOutputPort(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPVDataRepresentation_GetInternalOutputPort_s1(self, args);
    case 1:
      return PyvtkPVDataRepresentation_GetInternalOutputPort_s2(self, args);
    case 2:
      return PyvtkPVDataRepresentation_GetInternalOutputPort_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInternalOutputPort");
  return nullptr;
}



static PyObject *
PyvtkPVDataRepresentation_GetView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkView *tempr = (ap.IsBound() ?
      op->GetView() :
      op->vtkPVDataRepresentation::GetView());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_GetPipelineDataTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPipelineDataTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetPipelineDataTime() :
      op->vtkPVDataRepresentation::GetPipelineDataTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_SetDebugName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDebugName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDebugName(temp0);
    }
    else
    {
      op->vtkPVDataRepresentation::SetDebugName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_GetDebugName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDebugName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetDebugName() :
      &op->vtkPVDataRepresentation::GetDebugName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVDataRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkPVDataRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVDataRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVDataRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVDataRepresentation\nC++: static vtkPVDataRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVDataRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVDataRepresentation\nC++: vtkPVDataRepresentation *NewInstance()\n\n"},
  {"ProcessViewRequest", PyvtkPVDataRepresentation_ProcessViewRequest, METH_VARARGS,
   "V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: virtual int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo)\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering. Overridden to skip processing when\nvisibility if off.\n"},
  {"MarkModified", PyvtkPVDataRepresentation_MarkModified, METH_VARARGS,
   "V.MarkModified()\nC++: virtual void MarkModified()\n\nThis is one of the most important functions. In VTK pipelines,\nit's very easy for the pipeline to decide when it needs to\nre-execute. vtkAlgorithm::Update() can go up the entire pipeline\nto see if any filters MTime changed (among other things) and if\nso, it can re-execute the pipeline. However in case of\nrepresentations, the real input connection may only be present on\nthe data-server nodes. In that case the\nvtkPVDataRepresentation::RequestData() will only get called on\nthe data-server nodes. That means that representations won't be\nable to any data-delivery in RequestData(). We'd need some other\nmechanisms to synchronize data-delivery among processes. To avoid\nthat conundrum, the vtkSMRepresentationProxy calls MarkModified()\non all processes whenever any filter in the pipeline is modified.\nIn this method, the vtkPVDataRepresentation subclasses should\nensure that they mark all delivery related filters dirty in their\nRequestData to ensure they execute then next time they are\nupdated. The vtkPVDataRepresentation also uses a special\nexecutive which avoids updating the representation unless\nMarkModified() was called since the last Update(), thus acting as\na update-suppressor.\n"},
  {"Initialize", PyvtkPVDataRepresentation_Initialize, METH_VARARGS,
   "V.Initialize(int, int) -> int\nC++: virtual unsigned int Initialize(unsigned int minIdAvailable,\n    unsigned int maxIdAvailable)\n\nInitialize the representation with an identifier range so each\ninternal representation can own a unique ID. If a representation\nrequires more IDs than the set of ids provided, the\nrepresentation MUST complains by an error or abort explaining how\nmany ids where expected so the number of reserved ids could be\neasily adjust. Unless noted otherwise, this method must be called\nbefore calling any other methods on this class.\n\note CallOnAllProcesses Internally you can pick an id that follow\nthat condition minIdAvailable <= id <= maxIdAvailable Return the\nminIdAvailable after initialization so that new range could be\nused\n"},
  {"GetUniqueIdentifier", PyvtkPVDataRepresentation_GetUniqueIdentifier, METH_VARARGS,
   "V.GetUniqueIdentifier() -> int\nC++: unsigned int GetUniqueIdentifier()\n\nReturn 0 if the Initialize() method was not called otherwise a\nunique ID that will be shared across the processes for that same\nobject.\n"},
  {"SetVisibility", PyvtkPVDataRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: virtual void SetVisibility(bool val)\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored.\n"},
  {"GetVisibility", PyvtkPVDataRepresentation_GetVisibility, METH_VARARGS,
   "V.GetVisibility() -> bool\nC++: virtual bool GetVisibility()\n\n"},
  {"GetRenderedDataObject", PyvtkPVDataRepresentation_GetRenderedDataObject, METH_VARARGS,
   "V.GetRenderedDataObject(int) -> vtkDataObject\nC++: virtual vtkDataObject *GetRenderedDataObject(int port)\n\nReturns the data object that is rendered from the given input\nport.\n"},
  {"SetUpdateTime", PyvtkPVDataRepresentation_SetUpdateTime, METH_VARARGS,
   "V.SetUpdateTime(float)\nC++: virtual void SetUpdateTime(double time)\n\nSet the update time.\n"},
  {"GetUpdateTime", PyvtkPVDataRepresentation_GetUpdateTime, METH_VARARGS,
   "V.GetUpdateTime() -> float\nC++: virtual double GetUpdateTime()\n\nSet the update time.\n"},
  {"GetUpdateTimeValid", PyvtkPVDataRepresentation_GetUpdateTimeValid, METH_VARARGS,
   "V.GetUpdateTimeValid() -> bool\nC++: virtual bool GetUpdateTimeValid()\n\nSet whether the UpdateTime is valid.\n"},
  {"SetForcedCacheKey", PyvtkPVDataRepresentation_SetForcedCacheKey, METH_VARARGS,
   "V.SetForcedCacheKey(float)\nC++: virtual void SetForcedCacheKey(double val)\n\nTypically a representation decides whether to use cache based on\nthe view's values for UseCache and CacheKey. However in some\ncases we may want to force a representation to cache irrespective\nof the view (e.g. comparative views). In which case these ivars\ncan up set. If ForcedCacheKey is true, it overrides UseCache and\nCacheKey. Instead, ForcedCacheKey is used.\n"},
  {"SetForceUseCache", PyvtkPVDataRepresentation_SetForceUseCache, METH_VARARGS,
   "V.SetForceUseCache(bool)\nC++: virtual void SetForceUseCache(bool val)\n\n"},
  {"GetCacheKey", PyvtkPVDataRepresentation_GetCacheKey, METH_VARARGS,
   "V.GetCacheKey() -> float\nC++: virtual double GetCacheKey()\n\nReturns whether caching is used and what key to use when caching\nis enabled.\n"},
  {"GetUseCache", PyvtkPVDataRepresentation_GetUseCache, METH_VARARGS,
   "V.GetUseCache() -> bool\nC++: virtual bool GetUseCache()\n\nReturns whether caching is used and what key to use when caching\nis enabled.\n"},
  {"GetUsingCacheForUpdate", PyvtkPVDataRepresentation_GetUsingCacheForUpdate, METH_VARARGS,
   "V.GetUsingCacheForUpdate() -> bool\nC++: bool GetUsingCacheForUpdate()\n\nCalled by vtkPVDataRepresentationPipeline to see if using cache\nis valid and will be used for the update. If so, it bypasses all\npipeline passes. Subclasses should override IsCached(double) to\nindicate if a particular entry is cached.\n"},
  {"GetNeedUpdate", PyvtkPVDataRepresentation_GetNeedUpdate, METH_VARARGS,
   "V.GetNeedUpdate() -> bool\nC++: virtual bool GetNeedUpdate()\n\n"},
  {"AddToView", PyvtkPVDataRepresentation_AddToView, METH_VARARGS,
   "V.AddToView(vtkView) -> bool\nC++: bool AddToView(vtkView *view) override;\n\nMaking these methods public. When constructing composite\nrepresentations, we need to call these methods directly on\ninternal representations.\n"},
  {"RemoveFromView", PyvtkPVDataRepresentation_RemoveFromView, METH_VARARGS,
   "V.RemoveFromView(vtkView) -> bool\nC++: bool RemoveFromView(vtkView *view) override;\n\nMaking these methods public. When constructing composite\nrepresentations, we need to call these methods directly on\ninternal representations.\n"},
  {"GetInternalOutputPort", PyvtkPVDataRepresentation_GetInternalOutputPort, METH_VARARGS,
   "V.GetInternalOutputPort() -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetInternalOutputPort() override;\nV.GetInternalOutputPort(int) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetInternalOutputPort(int port) override;\nV.GetInternalOutputPort(int, int) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetInternalOutputPort(int port, int conn)\n     override;\n\nRetrieves an output port for the input data object at the\nspecified port and connection index. This may be connected to the\nrepresentation's internal pipeline. Overridden to use\nvtkPVTrivialProducer instead of vtkTrivialProducer\n"},
  {"GetView", PyvtkPVDataRepresentation_GetView, METH_VARARGS,
   "V.GetView() -> vtkView\nC++: vtkView *GetView()\n\nProvides access to the view.\n"},
  {"GetPipelineDataTime", PyvtkPVDataRepresentation_GetPipelineDataTime, METH_VARARGS,
   "V.GetPipelineDataTime() -> int\nC++: vtkMTimeType GetPipelineDataTime()\n\nReturns the timestamp when `RequestData` was executed on the\nrepresentation.\n"},
  {"SetDebugName", PyvtkPVDataRepresentation_SetDebugName, METH_VARARGS,
   "V.SetDebugName(string)\nC++: void SetDebugName(const std::string &name)\n\nSee `vtkSMRepresentationProxy::SetDebugName`. This is solely\nintended to simplify debugging and use for any other purpose is\nvehemently discouraged.\n"},
  {"GetDebugName", PyvtkPVDataRepresentation_GetDebugName, METH_VARARGS,
   "V.GetDebugName() -> string\nC++: const std::string &GetDebugName()\n\nSee `vtkSMRepresentationProxy::SetDebugName`. This is solely\nintended to simplify debugging and use for any other purpose is\nvehemently discouraged.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVDataRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVDataRepresentation", // tp_name
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
  PyvtkPVDataRepresentation_Doc, // tp_doc
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

PyObject *PyvtkPVDataRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVDataRepresentation_Type, PyvtkPVDataRepresentation_Methods,
    "vtkPVDataRepresentation",
 nullptr);

  PyTypeObject *pytype = &PyvtkPVDataRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVDataRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVDataRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVDataRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

