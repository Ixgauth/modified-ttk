// python wrapper for vtkPVGridAxes3DActor
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
#include "vtkPVGridAxes3DActor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVGridAxes3DActor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVGridAxes3DActor_ClassNew(); }

#ifndef DECLARED_PyvtkGridAxes3DActor_ClassNew
extern "C" { PyObject *PyvtkGridAxes3DActor_ClassNew(); }
#define DECLARED_PyvtkGridAxes3DActor_ClassNew
#endif

static const char *PyvtkPVGridAxes3DActor_Doc =
  "vtkPVGridAxes3DActor - ParaView extensions for vtkGridAxes3DActor.\n\n"
  "Superclass: vtkGridAxes3DActor\n\n"
  "vtkPVGridAxes3DActor adds support for ParaView-specific use-cases to\n"
  "vtkGridAxes3DActor. The special use-cases are:\n"
  "\\li Showing original data bounds when data has been transformed by\n"
  "specifying a transform on the Display properties: To support this, we\n"
  "add API to set the DataScale and DataPosition (we cannot support\n"
  "rotations, I am afraid). User is expected to set these to match the\n"
  "Scale and Position set on the Display properties of the data.\n"
  "vtkPVGridAxes3DActor converts that to scale and position on the\n"
  "vtkProperty for the superclass and sets the GridBounds on the\n"
  "superclass transformed using an inverse of the specified transform on\n"
  "the bounds reported by vtkPVRenderView. vtkPVRenderView uses\n"
  "SetTransformedBounds to set the bounds.\n\n"
  "\\li Supporting change of basis transformations: for that, one is\n"
  "    expected to\n"
  "set UseModelTransform to true, and then specify the ModelBounds and\n"
  "ModelTransformMatrix. Note: ModelTransform and DataScale/DataPosition\n"
  "are mutually exclusive.\n\n";


static PyObject *
PyvtkPVGridAxes3DActor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVGridAxes3DActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGridAxes3DActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DActor *op = static_cast<vtkPVGridAxes3DActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVGridAxes3DActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGridAxes3DActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVGridAxes3DActor *tempr = vtkPVGridAxes3DActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGridAxes3DActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DActor *op = static_cast<vtkPVGridAxes3DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVGridAxes3DActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVGridAxes3DActor::NewInstance());

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
PyvtkPVGridAxes3DActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DActor *op = static_cast<vtkPVGridAxes3DActor *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkPVGridAxes3DActor::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGridAxes3DActor_SetDataScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DActor *op = static_cast<vtkPVGridAxes3DActor *>(vp);

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
      op->SetDataScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVGridAxes3DActor::SetDataScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVGridAxes3DActor_SetDataScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DActor *op = static_cast<vtkPVGridAxes3DActor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDataScale(temp0);
    }
    else
    {
      op->vtkPVGridAxes3DActor::SetDataScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVGridAxes3DActor_SetDataScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPVGridAxes3DActor_SetDataScale_s1(self, args);
    case 1:
      return PyvtkPVGridAxes3DActor_SetDataScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataScale");
  return nullptr;
}



static PyObject *
PyvtkPVGridAxes3DActor_GetDataScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DActor *op = static_cast<vtkPVGridAxes3DActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataScale() :
      op->vtkPVGridAxes3DActor::GetDataScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGridAxes3DActor_SetDataPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DActor *op = static_cast<vtkPVGridAxes3DActor *>(vp);

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
      op->SetDataPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVGridAxes3DActor::SetDataPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVGridAxes3DActor_SetDataPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DActor *op = static_cast<vtkPVGridAxes3DActor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDataPosition(temp0);
    }
    else
    {
      op->vtkPVGridAxes3DActor::SetDataPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVGridAxes3DActor_SetDataPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPVGridAxes3DActor_SetDataPosition_s1(self, args);
    case 1:
      return PyvtkPVGridAxes3DActor_SetDataPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataPosition");
  return nullptr;
}



static PyObject *
PyvtkPVGridAxes3DActor_GetDataPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DActor *op = static_cast<vtkPVGridAxes3DActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataPosition() :
      op->vtkPVGridAxes3DActor::GetDataPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGridAxes3DActor_SetDataBoundsScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataBoundsScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DActor *op = static_cast<vtkPVGridAxes3DActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataBoundsScaleFactor(temp0);
    }
    else
    {
      op->vtkPVGridAxes3DActor::SetDataBoundsScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGridAxes3DActor_GetDataBoundsScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataBoundsScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DActor *op = static_cast<vtkPVGridAxes3DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDataBoundsScaleFactor() :
      op->vtkPVGridAxes3DActor::GetDataBoundsScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGridAxes3DActor_SetTransformedBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DActor *op = static_cast<vtkPVGridAxes3DActor *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetTransformedBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkPVGridAxes3DActor::SetTransformedBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVGridAxes3DActor_SetTransformedBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DActor *op = static_cast<vtkPVGridAxes3DActor *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTransformedBounds(temp0);
    }
    else
    {
      op->vtkPVGridAxes3DActor::SetTransformedBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVGridAxes3DActor_SetTransformedBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkPVGridAxes3DActor_SetTransformedBounds_s1(self, args);
    case 1:
      return PyvtkPVGridAxes3DActor_SetTransformedBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTransformedBounds");
  return nullptr;
}



static PyObject *
PyvtkPVGridAxes3DActor_GetTransformedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DActor *op = static_cast<vtkPVGridAxes3DActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTransformedBounds() :
      op->vtkPVGridAxes3DActor::GetTransformedBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGridAxes3DActor_SetUseModelTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseModelTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DActor *op = static_cast<vtkPVGridAxes3DActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseModelTransform(temp0);
    }
    else
    {
      op->vtkPVGridAxes3DActor::SetUseModelTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGridAxes3DActor_GetUseModelTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseModelTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DActor *op = static_cast<vtkPVGridAxes3DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseModelTransform() :
      op->vtkPVGridAxes3DActor::GetUseModelTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGridAxes3DActor_UseModelTransformOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseModelTransformOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DActor *op = static_cast<vtkPVGridAxes3DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseModelTransformOn();
    }
    else
    {
      op->vtkPVGridAxes3DActor::UseModelTransformOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGridAxes3DActor_UseModelTransformOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseModelTransformOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DActor *op = static_cast<vtkPVGridAxes3DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseModelTransformOff();
    }
    else
    {
      op->vtkPVGridAxes3DActor::UseModelTransformOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGridAxes3DActor_SetModelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DActor *op = static_cast<vtkPVGridAxes3DActor *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkPVGridAxes3DActor::SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVGridAxes3DActor_SetModelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DActor *op = static_cast<vtkPVGridAxes3DActor *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetModelBounds(temp0);
    }
    else
    {
      op->vtkPVGridAxes3DActor::SetModelBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVGridAxes3DActor_SetModelBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkPVGridAxes3DActor_SetModelBounds_s1(self, args);
    case 1:
      return PyvtkPVGridAxes3DActor_SetModelBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetModelBounds");
  return nullptr;
}



static PyObject *
PyvtkPVGridAxes3DActor_GetModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DActor *op = static_cast<vtkPVGridAxes3DActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetModelBounds() :
      op->vtkPVGridAxes3DActor::GetModelBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGridAxes3DActor_SetModelTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DActor *op = static_cast<vtkPVGridAxes3DActor *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetModelTransformMatrix(temp0);
    }
    else
    {
      op->vtkPVGridAxes3DActor::SetModelTransformMatrix(temp0);
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
PyvtkPVGridAxes3DActor_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DActor *op = static_cast<vtkPVGridAxes3DActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPVGridAxes3DActor::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVGridAxes3DActor_Methods[] = {
  {"IsTypeOf", PyvtkPVGridAxes3DActor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVGridAxes3DActor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVGridAxes3DActor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVGridAxes3DActor\nC++: static vtkPVGridAxes3DActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVGridAxes3DActor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVGridAxes3DActor\nC++: vtkPVGridAxes3DActor *NewInstance()\n\n"},
  {"ShallowCopy", PyvtkPVGridAxes3DActor_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy from another vtkPVGridAxes3DActor.\n"},
  {"SetDataScale", PyvtkPVGridAxes3DActor_SetDataScale, METH_VARARGS,
   "V.SetDataScale(float, float, float)\nC++: void SetDataScale(double, double, double)\nV.SetDataScale((float, float, float))\nC++: void SetDataScale(double a[3])\n\n"},
  {"GetDataScale", PyvtkPVGridAxes3DActor_GetDataScale, METH_VARARGS,
   "V.GetDataScale() -> (float, float, float)\nC++: double *GetDataScale()\n\n"},
  {"SetDataPosition", PyvtkPVGridAxes3DActor_SetDataPosition, METH_VARARGS,
   "V.SetDataPosition(float, float, float)\nC++: void SetDataPosition(double, double, double)\nV.SetDataPosition((float, float, float))\nC++: void SetDataPosition(double a[3])\n\n"},
  {"GetDataPosition", PyvtkPVGridAxes3DActor_GetDataPosition, METH_VARARGS,
   "V.GetDataPosition() -> (float, float, float)\nC++: double *GetDataPosition()\n\n"},
  {"SetDataBoundsScaleFactor", PyvtkPVGridAxes3DActor_SetDataBoundsScaleFactor, METH_VARARGS,
   "V.SetDataBoundsScaleFactor(float)\nC++: virtual void SetDataBoundsScaleFactor(double _arg)\n\nSpecify the scale factor used to proportionally scale each axis.\n1 means no change.\n"},
  {"GetDataBoundsScaleFactor", PyvtkPVGridAxes3DActor_GetDataBoundsScaleFactor, METH_VARARGS,
   "V.GetDataBoundsScaleFactor() -> float\nC++: virtual double GetDataBoundsScaleFactor()\n\nSpecify the scale factor used to proportionally scale each axis.\n1 means no change.\n"},
  {"SetTransformedBounds", PyvtkPVGridAxes3DActor_SetTransformedBounds, METH_VARARGS,
   "V.SetTransformedBounds(float, float, float, float, float, float)\nC++: void SetTransformedBounds(double, double, double, double,\n    double, double)\nV.SetTransformedBounds((float, float, float, float, float, float))\nC++: void SetTransformedBounds(double a[6])\n\n"},
  {"GetTransformedBounds", PyvtkPVGridAxes3DActor_GetTransformedBounds, METH_VARARGS,
   "V.GetTransformedBounds() -> (float, float, float, float, float,\n    float)\nC++: double *GetTransformedBounds()\n\n"},
  {"SetUseModelTransform", PyvtkPVGridAxes3DActor_SetUseModelTransform, METH_VARARGS,
   "V.SetUseModelTransform(bool)\nC++: virtual void SetUseModelTransform(bool _arg)\n\n"},
  {"GetUseModelTransform", PyvtkPVGridAxes3DActor_GetUseModelTransform, METH_VARARGS,
   "V.GetUseModelTransform() -> bool\nC++: virtual bool GetUseModelTransform()\n\n"},
  {"UseModelTransformOn", PyvtkPVGridAxes3DActor_UseModelTransformOn, METH_VARARGS,
   "V.UseModelTransformOn()\nC++: virtual void UseModelTransformOn()\n\n"},
  {"UseModelTransformOff", PyvtkPVGridAxes3DActor_UseModelTransformOff, METH_VARARGS,
   "V.UseModelTransformOff()\nC++: virtual void UseModelTransformOff()\n\n"},
  {"SetModelBounds", PyvtkPVGridAxes3DActor_SetModelBounds, METH_VARARGS,
   "V.SetModelBounds(float, float, float, float, float, float)\nC++: void SetModelBounds(double, double, double, double, double,\n    double)\nV.SetModelBounds((float, float, float, float, float, float))\nC++: void SetModelBounds(double a[6])\n\n"},
  {"GetModelBounds", PyvtkPVGridAxes3DActor_GetModelBounds, METH_VARARGS,
   "V.GetModelBounds() -> (float, float, float, float, float, float)\nC++: double *GetModelBounds()\n\n"},
  {"SetModelTransformMatrix", PyvtkPVGridAxes3DActor_SetModelTransformMatrix, METH_VARARGS,
   "V.SetModelTransformMatrix([float, ...])\nC++: void SetModelTransformMatrix(double *matrix)\n\n"},
  {"GetBounds", PyvtkPVGridAxes3DActor_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nOverridden to ensure that the transform information is passed on\nthe superclass.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVGridAxes3DActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPVGridAxes3DActor", // tp_name
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
  PyvtkPVGridAxes3DActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVGridAxes3DActor_StaticNew()
{
  return vtkPVGridAxes3DActor::New();
}

PyObject *PyvtkPVGridAxes3DActor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVGridAxes3DActor_Type, PyvtkPVGridAxes3DActor_Methods,
    "vtkPVGridAxes3DActor",
 &PyvtkPVGridAxes3DActor_StaticNew);

  PyTypeObject *pytype = &PyvtkPVGridAxes3DActor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGridAxes3DActor_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVGridAxes3DActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVGridAxes3DActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVGridAxes3DActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

