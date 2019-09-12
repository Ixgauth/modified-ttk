// python wrapper for vtkAbstractVolumeMapper
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
#include "vtkAbstractVolumeMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractVolumeMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAbstractVolumeMapper_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractMapper3D_ClassNew
extern "C" { PyObject *PyvtkAbstractMapper3D_ClassNew(); }
#define DECLARED_PyvtkAbstractMapper3D_ClassNew
#endif

static const char *PyvtkAbstractVolumeMapper_Doc =
  "vtkAbstractVolumeMapper - Abstract class for a volume mapper\n\n"
  "Superclass: vtkAbstractMapper3D\n\n"
  "vtkAbstractVolumeMapper is the abstract definition of a volume\n"
  "mapper. Specific subclasses deal with different specific types of\n"
  "data input\n\n"
  "@sa\n"
  "vtkVolumeMapper vtkUnstructuredGridVolumeMapper\n\n";


static PyObject *
PyvtkAbstractVolumeMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractVolumeMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractVolumeMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractVolumeMapper *tempr = vtkAbstractVolumeMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractVolumeMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractVolumeMapper::NewInstance());

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
PyvtkAbstractVolumeMapper_GetDataSetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetDataSetInput() :
      op->vtkAbstractVolumeMapper::GetDataSetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetDataObjectInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetDataObjectInput() :
      op->vtkAbstractVolumeMapper::GetDataObjectInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkAbstractVolumeMapper::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractVolumeMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

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
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkAbstractVolumeMapper::GetBounds(temp0);
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
PyvtkAbstractVolumeMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkAbstractVolumeMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkAbstractVolumeMapper_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkAbstractVolumeMapper_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarMode(temp0);
    }
    else
    {
      op->vtkAbstractVolumeMapper::SetScalarMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarMode() :
      op->vtkAbstractVolumeMapper::GetScalarMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_SetArrayAccessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayAccessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayAccessMode(temp0);
    }
    else
    {
      op->vtkAbstractVolumeMapper::SetArrayAccessMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_SetScalarModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToDefault();
    }
    else
    {
      op->vtkAbstractVolumeMapper::SetScalarModeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_SetScalarModeToUsePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUsePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToUsePointData();
    }
    else
    {
      op->vtkAbstractVolumeMapper::SetScalarModeToUsePointData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_SetScalarModeToUseCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUseCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToUseCellData();
    }
    else
    {
      op->vtkAbstractVolumeMapper::SetScalarModeToUseCellData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_SetScalarModeToUsePointFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUsePointFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToUsePointFieldData();
    }
    else
    {
      op->vtkAbstractVolumeMapper::SetScalarModeToUsePointFieldData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_SetScalarModeToUseCellFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUseCellFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToUseCellFieldData();
    }
    else
    {
      op->vtkAbstractVolumeMapper::SetScalarModeToUseCellFieldData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_SelectScalarArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectScalarArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectScalarArray(temp0);
    }
    else
    {
      op->vtkAbstractVolumeMapper::SelectScalarArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractVolumeMapper_SelectScalarArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectScalarArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectScalarArray(temp0);
    }
    else
    {
      op->vtkAbstractVolumeMapper::SelectScalarArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractVolumeMapper_SelectScalarArray_Methods[] = {
  {nullptr, PyvtkAbstractVolumeMapper_SelectScalarArray_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkAbstractVolumeMapper_SelectScalarArray_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAbstractVolumeMapper_SelectScalarArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAbstractVolumeMapper_SelectScalarArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SelectScalarArray");
  return nullptr;
}



static PyObject *
PyvtkAbstractVolumeMapper_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkAbstractVolumeMapper::GetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayId() :
      op->vtkAbstractVolumeMapper::GetArrayId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetArrayAccessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayAccessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayAccessMode() :
      op->vtkAbstractVolumeMapper::GetArrayAccessMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetScalarModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScalarModeAsString() :
      op->vtkAbstractVolumeMapper::GetScalarModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetGradientMagnitudeScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGradientMagnitudeScale() :
      op->vtkAbstractVolumeMapper::GetGradientMagnitudeScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractVolumeMapper_GetGradientMagnitudeScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGradientMagnitudeScale(temp0) :
      op->vtkAbstractVolumeMapper::GetGradientMagnitudeScale(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractVolumeMapper_GetGradientMagnitudeScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkAbstractVolumeMapper_GetGradientMagnitudeScale_s1(self, args);
    case 1:
      return PyvtkAbstractVolumeMapper_GetGradientMagnitudeScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGradientMagnitudeScale");
  return nullptr;
}



static PyObject *
PyvtkAbstractVolumeMapper_GetGradientMagnitudeBias_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGradientMagnitudeBias() :
      op->vtkAbstractVolumeMapper::GetGradientMagnitudeBias());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractVolumeMapper_GetGradientMagnitudeBias_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGradientMagnitudeBias(temp0) :
      op->vtkAbstractVolumeMapper::GetGradientMagnitudeBias(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractVolumeMapper_GetGradientMagnitudeBias(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkAbstractVolumeMapper_GetGradientMagnitudeBias_s1(self, args);
    case 1:
      return PyvtkAbstractVolumeMapper_GetGradientMagnitudeBias_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGradientMagnitudeBias");
  return nullptr;
}



static PyObject *
PyvtkAbstractVolumeMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
  {
    op->Render(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkAbstractVolumeMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractVolumeMapper_Methods[] = {
  {"IsTypeOf", PyvtkAbstractVolumeMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractVolumeMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractVolumeMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAbstractVolumeMapper\nC++: static vtkAbstractVolumeMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractVolumeMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAbstractVolumeMapper\nC++: vtkAbstractVolumeMapper *NewInstance()\n\n"},
  {"GetDataSetInput", PyvtkAbstractVolumeMapper_GetDataSetInput, METH_VARARGS,
   "V.GetDataSetInput() -> vtkDataSet\nC++: virtual vtkDataSet *GetDataSetInput()\n\nSet/Get the input data\n"},
  {"GetDataObjectInput", PyvtkAbstractVolumeMapper_GetDataObjectInput, METH_VARARGS,
   "V.GetDataObjectInput() -> vtkDataObject\nC++: virtual vtkDataObject *GetDataObjectInput()\n\nSet/Get the input data\n"},
  {"GetBounds", PyvtkAbstractVolumeMapper_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6]) override;\n\nReturn bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {"SetScalarMode", PyvtkAbstractVolumeMapper_SetScalarMode, METH_VARARGS,
   "V.SetScalarMode(int)\nC++: virtual void SetScalarMode(int _arg)\n\nControl how the mapper works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the mapper\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the mapper to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectScalarArray.\n"},
  {"GetScalarMode", PyvtkAbstractVolumeMapper_GetScalarMode, METH_VARARGS,
   "V.GetScalarMode() -> int\nC++: virtual int GetScalarMode()\n\nControl how the mapper works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the mapper\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the mapper to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectScalarArray.\n"},
  {"SetArrayAccessMode", PyvtkAbstractVolumeMapper_SetArrayAccessMode, METH_VARARGS,
   "V.SetArrayAccessMode(int)\nC++: virtual void SetArrayAccessMode(int _arg)\n\nControl how the mapper works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the mapper\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the mapper to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectScalarArray.\n"},
  {"SetScalarModeToDefault", PyvtkAbstractVolumeMapper_SetScalarModeToDefault, METH_VARARGS,
   "V.SetScalarModeToDefault()\nC++: void SetScalarModeToDefault()\n\nControl how the mapper works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the mapper\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the mapper to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectScalarArray.\n"},
  {"SetScalarModeToUsePointData", PyvtkAbstractVolumeMapper_SetScalarModeToUsePointData, METH_VARARGS,
   "V.SetScalarModeToUsePointData()\nC++: void SetScalarModeToUsePointData()\n\nControl how the mapper works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the mapper\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the mapper to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectScalarArray.\n"},
  {"SetScalarModeToUseCellData", PyvtkAbstractVolumeMapper_SetScalarModeToUseCellData, METH_VARARGS,
   "V.SetScalarModeToUseCellData()\nC++: void SetScalarModeToUseCellData()\n\nControl how the mapper works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the mapper\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the mapper to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectScalarArray.\n"},
  {"SetScalarModeToUsePointFieldData", PyvtkAbstractVolumeMapper_SetScalarModeToUsePointFieldData, METH_VARARGS,
   "V.SetScalarModeToUsePointFieldData()\nC++: void SetScalarModeToUsePointFieldData()\n\nControl how the mapper works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the mapper\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the mapper to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectScalarArray.\n"},
  {"SetScalarModeToUseCellFieldData", PyvtkAbstractVolumeMapper_SetScalarModeToUseCellFieldData, METH_VARARGS,
   "V.SetScalarModeToUseCellFieldData()\nC++: void SetScalarModeToUseCellFieldData()\n\nControl how the mapper works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the mapper\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the mapper to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectScalarArray.\n"},
  {"SelectScalarArray", PyvtkAbstractVolumeMapper_SelectScalarArray, METH_VARARGS,
   "V.SelectScalarArray(int)\nC++: virtual void SelectScalarArray(int arrayNum)\nV.SelectScalarArray(string)\nC++: virtual void SelectScalarArray(const char *arrayName)\n\nWhen ScalarMode is set to UsePointFieldData or UseCellFieldData,\nyou can specify which scalar array to use during rendering. The\ntransfer function in the vtkVolumeProperty (attached to the\ncalling vtkVolume) will decide how to convert vectors to colors.\n"},
  {"GetArrayName", PyvtkAbstractVolumeMapper_GetArrayName, METH_VARARGS,
   "V.GetArrayName() -> string\nC++: virtual char *GetArrayName()\n\nGet the array name or number and component to use for rendering.\n"},
  {"GetArrayId", PyvtkAbstractVolumeMapper_GetArrayId, METH_VARARGS,
   "V.GetArrayId() -> int\nC++: virtual int GetArrayId()\n\n"},
  {"GetArrayAccessMode", PyvtkAbstractVolumeMapper_GetArrayAccessMode, METH_VARARGS,
   "V.GetArrayAccessMode() -> int\nC++: virtual int GetArrayAccessMode()\n\n"},
  {"GetScalarModeAsString", PyvtkAbstractVolumeMapper_GetScalarModeAsString, METH_VARARGS,
   "V.GetScalarModeAsString() -> string\nC++: const char *GetScalarModeAsString()\n\nReturn the method for obtaining scalar data.\n"},
  {"GetGradientMagnitudeScale", PyvtkAbstractVolumeMapper_GetGradientMagnitudeScale, METH_VARARGS,
   "V.GetGradientMagnitudeScale() -> float\nC++: virtual float GetGradientMagnitudeScale()\nV.GetGradientMagnitudeScale(int) -> float\nC++: virtual float GetGradientMagnitudeScale(int)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE\n"},
  {"GetGradientMagnitudeBias", PyvtkAbstractVolumeMapper_GetGradientMagnitudeBias, METH_VARARGS,
   "V.GetGradientMagnitudeBias() -> float\nC++: virtual float GetGradientMagnitudeBias()\nV.GetGradientMagnitudeBias(int) -> float\nC++: virtual float GetGradientMagnitudeBias(int)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE\n"},
  {"Render", PyvtkAbstractVolumeMapper_Render, METH_VARARGS,
   "V.Render(vtkRenderer, vtkVolume)\nC++: virtual void Render(vtkRenderer *ren, vtkVolume *vol)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Render the\nvolume\n"},
  {"ReleaseGraphicsResources", PyvtkAbstractVolumeMapper_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this mapper.\nThe parameter window could be used to determine which graphic\nresources to release.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAbstractVolumeMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkAbstractVolumeMapper", // tp_name
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
  PyvtkAbstractVolumeMapper_Doc, // tp_doc
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

PyObject *PyvtkAbstractVolumeMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAbstractVolumeMapper_Type, PyvtkAbstractVolumeMapper_Methods,
    "vtkAbstractVolumeMapper",
 nullptr);

  PyTypeObject *pytype = &PyvtkAbstractVolumeMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractMapper3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractVolumeMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractVolumeMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractVolumeMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

