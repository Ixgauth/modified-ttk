// python wrapper for vtkUnstructuredGridVolumeRepresentation
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
#include "vtkUnstructuredGridVolumeRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUnstructuredGridVolumeRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUnstructuredGridVolumeRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkPVDataRepresentation_ClassNew
extern "C" { PyObject *PyvtkPVDataRepresentation_ClassNew(); }
#define DECLARED_PyvtkPVDataRepresentation_ClassNew
#endif

static const char *PyvtkUnstructuredGridVolumeRepresentation_Doc =
  "vtkUnstructuredGridVolumeRepresentation - representation for showing\nvtkUnstructuredGrid datasets as volumes.\n\n"
  "Superclass: vtkPVDataRepresentation\n\n"
  "vtkUnstructuredGridVolumeRepresentation is a representation for\n"
  "volume rendering vtkUnstructuredGrid datasets. It simply renders a\n"
  "translucent surface for LOD i.e. interactive rendering.\n\n";


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUnstructuredGridVolumeRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridVolumeRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUnstructuredGridVolumeRepresentation *tempr = vtkUnstructuredGridVolumeRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridVolumeRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridVolumeRepresentation::NewInstance());

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
PyvtkUnstructuredGridVolumeRepresentation_AddVolumeMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVolumeMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  const char *temp0 = nullptr;
  vtkAbstractVolumeMapper *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAbstractVolumeMapper"))
  {
    if (ap.IsBound())
    {
      op->AddVolumeMapper(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRepresentation::AddVolumeMapper(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetActiveVolumeMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveVolumeMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveVolumeMapper(temp0);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRepresentation::SetActiveVolumeMapper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_GetActiveVolumeMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveVolumeMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractVolumeMapper *tempr = (ap.IsBound() ?
      op->GetActiveVolumeMapper() :
      op->vtkUnstructuredGridVolumeRepresentation::GetActiveVolumeMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

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
      op->vtkUnstructuredGridVolumeRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkModified();
    }
    else
    {
      op->vtkUnstructuredGridVolumeRepresentation::MarkModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

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
      op->vtkUnstructuredGridVolumeRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetExtractedBlockIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractedBlockIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractedBlockIndex(temp0);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRepresentation::SetExtractedBlockIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetSamplingDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSamplingDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetSamplingDimensions(temp0);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRepresentation::SetSamplingDimensions(temp0);
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
PyvtkUnstructuredGridVolumeRepresentation_SetSamplingDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSamplingDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

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
      op->SetSamplingDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRepresentation::SetSamplingDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetSamplingDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkUnstructuredGridVolumeRepresentation_SetSamplingDimensions_s1(self, args);
    case 3:
      return PyvtkUnstructuredGridVolumeRepresentation_SetSamplingDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSamplingDimensions");
  return nullptr;
}



static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

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
      op->SetOrientation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRepresentation::SetOrientation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRepresentation::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetPickable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickable(temp0);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRepresentation::SetPickable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRepresentation::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

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
      op->SetScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRepresentation::SetScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationType(temp0);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRepresentation::SetInterpolationType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  vtkColorTransferFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction"))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRepresentation::SetColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetScalarOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  vtkPiecewiseFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetScalarOpacity(temp0);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRepresentation::SetScalarOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetScalarOpacityUnitDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacityUnitDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarOpacityUnitDistance(temp0);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRepresentation::SetScalarOpacityUnitDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_GetActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVLODVolume *tempr = (ap.IsBound() ?
      op->GetActor() :
      op->vtkUnstructuredGridVolumeRepresentation::GetActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetUseDataPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDataPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDataPartitions(temp0);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRepresentation::SetUseDataPartitions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_GetUseDataPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDataPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseDataPartitions() :
      op->vtkUnstructuredGridVolumeRepresentation::GetUseDataPartitions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridVolumeRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkUnstructuredGridVolumeRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUnstructuredGridVolumeRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUnstructuredGridVolumeRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkUnstructuredGridVolumeRepresentation\nC++: static vtkUnstructuredGridVolumeRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUnstructuredGridVolumeRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkUnstructuredGridVolumeRepresentation\nC++: vtkUnstructuredGridVolumeRepresentation *NewInstance()\n\n"},
  {"AddVolumeMapper", PyvtkUnstructuredGridVolumeRepresentation_AddVolumeMapper, METH_VARARGS,
   "V.AddVolumeMapper(string, vtkAbstractVolumeMapper)\nC++: void AddVolumeMapper(const char *name,\n    vtkAbstractVolumeMapper *)\n\nRegister a volume mapper with the representation.\n"},
  {"SetActiveVolumeMapper", PyvtkUnstructuredGridVolumeRepresentation_SetActiveVolumeMapper, METH_VARARGS,
   "V.SetActiveVolumeMapper(string)\nC++: virtual void SetActiveVolumeMapper(const char *)\n\nSet the active volume mapper to use.\n"},
  {"GetActiveVolumeMapper", PyvtkUnstructuredGridVolumeRepresentation_GetActiveVolumeMapper, METH_VARARGS,
   "V.GetActiveVolumeMapper() -> vtkAbstractVolumeMapper\nC++: vtkAbstractVolumeMapper *GetActiveVolumeMapper()\n\nSet the active volume mapper to use.\n"},
  {"ProcessViewRequest", PyvtkUnstructuredGridVolumeRepresentation_ProcessViewRequest, METH_VARARGS,
   "V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo) override;\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering.\n"},
  {"MarkModified", PyvtkUnstructuredGridVolumeRepresentation_MarkModified, METH_VARARGS,
   "V.MarkModified()\nC++: void MarkModified() override;\n\nThis needs to be called on all instances of\nvtkGeometryRepresentation when the input is modified. This is\nessential since the geometry filter does not have any real-input\non the client side which messes with the Update requests.\n"},
  {"SetVisibility", PyvtkUnstructuredGridVolumeRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool val) override;\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored. Overridden to propagate to the active representation.\n"},
  {"SetExtractedBlockIndex", PyvtkUnstructuredGridVolumeRepresentation_SetExtractedBlockIndex, METH_VARARGS,
   "V.SetExtractedBlockIndex(int)\nC++: void SetExtractedBlockIndex(unsigned int index)\n\n"},
  {"SetSamplingDimensions", PyvtkUnstructuredGridVolumeRepresentation_SetSamplingDimensions, METH_VARARGS,
   "V.SetSamplingDimensions([int, int, int])\nC++: void SetSamplingDimensions(int dims[3])\nV.SetSamplingDimensions(int, int, int)\nC++: void SetSamplingDimensions(int xdim, int ydim, int zdim)\n\n"},
  {"SetOrientation", PyvtkUnstructuredGridVolumeRepresentation_SetOrientation, METH_VARARGS,
   "V.SetOrientation(float, float, float)\nC++: void SetOrientation(double, double, double)\n\n"},
  {"SetOrigin", PyvtkUnstructuredGridVolumeRepresentation_SetOrigin, METH_VARARGS,
   "V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\n\n"},
  {"SetPickable", PyvtkUnstructuredGridVolumeRepresentation_SetPickable, METH_VARARGS,
   "V.SetPickable(int)\nC++: void SetPickable(int val)\n\n"},
  {"SetPosition", PyvtkUnstructuredGridVolumeRepresentation_SetPosition, METH_VARARGS,
   "V.SetPosition(float, float, float)\nC++: void SetPosition(double, double, double)\n\n"},
  {"SetScale", PyvtkUnstructuredGridVolumeRepresentation_SetScale, METH_VARARGS,
   "V.SetScale(float, float, float)\nC++: void SetScale(double, double, double)\n\n"},
  {"SetInterpolationType", PyvtkUnstructuredGridVolumeRepresentation_SetInterpolationType, METH_VARARGS,
   "V.SetInterpolationType(int)\nC++: void SetInterpolationType(int val)\n\n"},
  {"SetColor", PyvtkUnstructuredGridVolumeRepresentation_SetColor, METH_VARARGS,
   "V.SetColor(vtkColorTransferFunction)\nC++: void SetColor(vtkColorTransferFunction *lut)\n\n"},
  {"SetScalarOpacity", PyvtkUnstructuredGridVolumeRepresentation_SetScalarOpacity, METH_VARARGS,
   "V.SetScalarOpacity(vtkPiecewiseFunction)\nC++: void SetScalarOpacity(vtkPiecewiseFunction *pwf)\n\n"},
  {"SetScalarOpacityUnitDistance", PyvtkUnstructuredGridVolumeRepresentation_SetScalarOpacityUnitDistance, METH_VARARGS,
   "V.SetScalarOpacityUnitDistance(float)\nC++: void SetScalarOpacityUnitDistance(double val)\n\n"},
  {"GetActor", PyvtkUnstructuredGridVolumeRepresentation_GetActor, METH_VARARGS,
   "V.GetActor() -> vtkPVLODVolume\nC++: vtkPVLODVolume *GetActor()\n\nProvides access to the actor used by this representation.\n"},
  {"SetUseDataPartitions", PyvtkUnstructuredGridVolumeRepresentation_SetUseDataPartitions, METH_VARARGS,
   "V.SetUseDataPartitions(bool)\nC++: virtual void SetUseDataPartitions(bool)\n\nSpecify whether or not to redistribute the data. The default is\nfalse since that is the only way in general to guarantee correct\nrendering. Can set to true if all rendered data sets are based on\nthe same data partitioning in order to save on the data\nredistribution.\n"},
  {"GetUseDataPartitions", PyvtkUnstructuredGridVolumeRepresentation_GetUseDataPartitions, METH_VARARGS,
   "V.GetUseDataPartitions() -> bool\nC++: virtual bool GetUseDataPartitions()\n\nSpecify whether or not to redistribute the data. The default is\nfalse since that is the only way in general to guarantee correct\nrendering. Can set to true if all rendered data sets are based on\nthe same data partitioning in order to save on the data\nredistribution.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkUnstructuredGridVolumeRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkUnstructuredGridVolumeRepresentation", // tp_name
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
  PyvtkUnstructuredGridVolumeRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUnstructuredGridVolumeRepresentation_StaticNew()
{
  return vtkUnstructuredGridVolumeRepresentation::New();
}

PyObject *PyvtkUnstructuredGridVolumeRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkUnstructuredGridVolumeRepresentation_Type, PyvtkUnstructuredGridVolumeRepresentation_Methods,
    "vtkUnstructuredGridVolumeRepresentation",
 &PyvtkUnstructuredGridVolumeRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkUnstructuredGridVolumeRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVDataRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUnstructuredGridVolumeRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnstructuredGridVolumeRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUnstructuredGridVolumeRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

