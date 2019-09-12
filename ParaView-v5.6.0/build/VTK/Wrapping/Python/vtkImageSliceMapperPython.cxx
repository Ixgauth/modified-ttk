// python wrapper for vtkImageSliceMapper
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
#include "vtkInformationVector.h"
#include "vtkImageSliceMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageSliceMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageSliceMapper_ClassNew(); }

#ifndef DECLARED_PyvtkImageMapper3D_ClassNew
extern "C" { PyObject *PyvtkImageMapper3D_ClassNew(); }
#define DECLARED_PyvtkImageMapper3D_ClassNew
#endif

static const char *PyvtkImageSliceMapper_Doc =
  "vtkImageSliceMapper - map a slice of a vtkImageData to the screen\n\n"
  "Superclass: vtkImageMapper3D\n\n"
  "vtkImageSliceMapper is a mapper that will draw a 2D image, or a slice\n"
  "of a 3D image.  For 3D images, the slice may be oriented in the X, Y,\n"
  "or Z direction.  This mapper works via 2D textures with accelerated\n"
  "zoom and pan operations.@par Thanks: Thanks to David Gobbi at the\n"
  "Seaman Family MR Centre and Dept. of Clinical Neurosciences,\n"
  "Foothills Medical Centre, Calgary, for providing this class.\n"
  "@sa\n"
  "vtkImageSlice vtkImageProperty vtkImageResliceMapper\n\n";


static PyObject *
PyvtkImageSliceMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageSliceMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageSliceMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageSliceMapper *tempr = vtkImageSliceMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageSliceMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageSliceMapper::NewInstance());

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
PyvtkImageSliceMapper_SetSliceNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceNumber(temp0);
    }
    else
    {
      op->vtkImageSliceMapper::SetSliceNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetSliceNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceNumber() :
      op->vtkImageSliceMapper::GetSliceNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetSliceNumberMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNumberMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceNumberMinValue() :
      op->vtkImageSliceMapper::GetSliceNumberMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetSliceNumberMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNumberMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceNumberMaxValue() :
      op->vtkImageSliceMapper::GetSliceNumberMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientation(temp0);
    }
    else
    {
      op->vtkImageSliceMapper::SetOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetOrientationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientationMinValue() :
      op->vtkImageSliceMapper::GetOrientationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetOrientationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientationMaxValue() :
      op->vtkImageSliceMapper::GetOrientationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkImageSliceMapper::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetOrientationToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationToX();
    }
    else
    {
      op->vtkImageSliceMapper::SetOrientationToX();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetOrientationToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationToY();
    }
    else
    {
      op->vtkImageSliceMapper::SetOrientationToY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetOrientationToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationToZ();
    }
    else
    {
      op->vtkImageSliceMapper::SetOrientationToZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetCropping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCropping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCropping(temp0);
    }
    else
    {
      op->vtkImageSliceMapper::SetCropping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_CroppingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CroppingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CroppingOn();
    }
    else
    {
      op->vtkImageSliceMapper::CroppingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_CroppingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CroppingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CroppingOff();
    }
    else
    {
      op->vtkImageSliceMapper::CroppingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetCropping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCropping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCropping() :
      op->vtkImageSliceMapper::GetCropping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetCroppingRegion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetCroppingRegion(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageSliceMapper::SetCroppingRegion(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageSliceMapper_SetCroppingRegion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCroppingRegion(temp0);
    }
    else
    {
      op->vtkImageSliceMapper::SetCroppingRegion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageSliceMapper_SetCroppingRegion(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkImageSliceMapper_SetCroppingRegion_s1(self, args);
    case 1:
      return PyvtkImageSliceMapper_SetCroppingRegion_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCroppingRegion");
  return nullptr;
}



static PyObject *
PyvtkImageSliceMapper_GetCroppingRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetCroppingRegion() :
      op->vtkImageSliceMapper::GetCroppingRegion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkImageSlice *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkImageSlice"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkImageSliceMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

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
      op->vtkImageSliceMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageSliceMapper::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkImageSliceMapper::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageSliceMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

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
      op->vtkImageSliceMapper::GetBounds(temp0);
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
PyvtkImageSliceMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageSliceMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkImageSliceMapper_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkImageSliceMapper_GetSlicePlaneInDataCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlicePlaneInDataCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetSlicePlaneInDataCoords(temp0, temp1);
    }
    else
    {
      op->vtkImageSliceMapper::GetSlicePlaneInDataCoords(temp0, temp1);
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

static PyMethodDef PyvtkImageSliceMapper_Methods[] = {
  {"IsTypeOf", PyvtkImageSliceMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageSliceMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageSliceMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageSliceMapper\nC++: static vtkImageSliceMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageSliceMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageSliceMapper\nC++: vtkImageSliceMapper *NewInstance()\n\n"},
  {"SetSliceNumber", PyvtkImageSliceMapper_SetSliceNumber, METH_VARARGS,
   "V.SetSliceNumber(int)\nC++: virtual void SetSliceNumber(int slice)\n\nThe slice to display, if there are multiple slices.\n"},
  {"GetSliceNumber", PyvtkImageSliceMapper_GetSliceNumber, METH_VARARGS,
   "V.GetSliceNumber() -> int\nC++: virtual int GetSliceNumber()\n\nThe slice to display, if there are multiple slices.\n"},
  {"GetSliceNumberMinValue", PyvtkImageSliceMapper_GetSliceNumberMinValue, METH_VARARGS,
   "V.GetSliceNumberMinValue() -> int\nC++: virtual int GetSliceNumberMinValue()\n\nUse GetSliceNumberMinValue() and GetSliceNumberMaxValue() to get\nthe range of allowed slices.  These methods call\nUpdateInformation as a side-effect.\n"},
  {"GetSliceNumberMaxValue", PyvtkImageSliceMapper_GetSliceNumberMaxValue, METH_VARARGS,
   "V.GetSliceNumberMaxValue() -> int\nC++: virtual int GetSliceNumberMaxValue()\n\nUse GetSliceNumberMinValue() and GetSliceNumberMaxValue() to get\nthe range of allowed slices.  These methods call\nUpdateInformation as a side-effect.\n"},
  {"SetOrientation", PyvtkImageSliceMapper_SetOrientation, METH_VARARGS,
   "V.SetOrientation(int)\nC++: virtual void SetOrientation(int _arg)\n\nSet the orientation of the slices to display.  The default\norientation is 2, which is Z.\n"},
  {"GetOrientationMinValue", PyvtkImageSliceMapper_GetOrientationMinValue, METH_VARARGS,
   "V.GetOrientationMinValue() -> int\nC++: virtual int GetOrientationMinValue()\n\nSet the orientation of the slices to display.  The default\norientation is 2, which is Z.\n"},
  {"GetOrientationMaxValue", PyvtkImageSliceMapper_GetOrientationMaxValue, METH_VARARGS,
   "V.GetOrientationMaxValue() -> int\nC++: virtual int GetOrientationMaxValue()\n\nSet the orientation of the slices to display.  The default\norientation is 2, which is Z.\n"},
  {"GetOrientation", PyvtkImageSliceMapper_GetOrientation, METH_VARARGS,
   "V.GetOrientation() -> int\nC++: virtual int GetOrientation()\n\nSet the orientation of the slices to display.  The default\norientation is 2, which is Z.\n"},
  {"SetOrientationToX", PyvtkImageSliceMapper_SetOrientationToX, METH_VARARGS,
   "V.SetOrientationToX()\nC++: void SetOrientationToX()\n\nSet the orientation of the slices to display.  The default\norientation is 2, which is Z.\n"},
  {"SetOrientationToY", PyvtkImageSliceMapper_SetOrientationToY, METH_VARARGS,
   "V.SetOrientationToY()\nC++: void SetOrientationToY()\n\nSet the orientation of the slices to display.  The default\norientation is 2, which is Z.\n"},
  {"SetOrientationToZ", PyvtkImageSliceMapper_SetOrientationToZ, METH_VARARGS,
   "V.SetOrientationToZ()\nC++: void SetOrientationToZ()\n\nSet the orientation of the slices to display.  The default\norientation is 2, which is Z.\n"},
  {"SetCropping", PyvtkImageSliceMapper_SetCropping, METH_VARARGS,
   "V.SetCropping(int)\nC++: virtual void SetCropping(vtkTypeBool _arg)\n\nUse the specified CroppingRegion.  The default is to display the\nfull slice.\n"},
  {"CroppingOn", PyvtkImageSliceMapper_CroppingOn, METH_VARARGS,
   "V.CroppingOn()\nC++: virtual void CroppingOn()\n\nUse the specified CroppingRegion.  The default is to display the\nfull slice.\n"},
  {"CroppingOff", PyvtkImageSliceMapper_CroppingOff, METH_VARARGS,
   "V.CroppingOff()\nC++: virtual void CroppingOff()\n\nUse the specified CroppingRegion.  The default is to display the\nfull slice.\n"},
  {"GetCropping", PyvtkImageSliceMapper_GetCropping, METH_VARARGS,
   "V.GetCropping() -> int\nC++: virtual vtkTypeBool GetCropping()\n\nUse the specified CroppingRegion.  The default is to display the\nfull slice.\n"},
  {"SetCroppingRegion", PyvtkImageSliceMapper_SetCroppingRegion, METH_VARARGS,
   "V.SetCroppingRegion(int, int, int, int, int, int)\nC++: void SetCroppingRegion(int, int, int, int, int, int)\nV.SetCroppingRegion((int, int, int, int, int, int))\nC++: void SetCroppingRegion(int a[6])\n\n"},
  {"GetCroppingRegion", PyvtkImageSliceMapper_GetCroppingRegion, METH_VARARGS,
   "V.GetCroppingRegion() -> (int, int, int, int, int, int)\nC++: int *GetCroppingRegion()\n\n"},
  {"Render", PyvtkImageSliceMapper_Render, METH_VARARGS,
   "V.Render(vtkRenderer, vtkImageSlice)\nC++: void Render(vtkRenderer *renderer, vtkImageSlice *prop)\n    override;\n\nThis should only be called by the renderer.\n"},
  {"ReleaseGraphicsResources", PyvtkImageSliceMapper_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nmapper.  The parameter window is used to determine which graphic\nresources to release.\n"},
  {"GetMTime", PyvtkImageSliceMapper_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the mtime for the mapper.\n"},
  {"GetBounds", PyvtkImageSliceMapper_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6]) override;\n\nThe bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {"GetSlicePlaneInDataCoords", PyvtkImageSliceMapper_GetSlicePlaneInDataCoords, METH_VARARGS,
   "V.GetSlicePlaneInDataCoords(vtkMatrix4x4, [float, float, float,\n    float])\nC++: void GetSlicePlaneInDataCoords(vtkMatrix4x4 *propMatrix,\n    double plane[4]) override;\n\nGet the plane as a homogeneous 4-vector that gives the plane\nequation coefficients.  It is computed from the Orientation and\nSliceNumber, the propMatrix is unused and can be zero.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageSliceMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkImageSliceMapper", // tp_name
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
  PyvtkImageSliceMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageSliceMapper_StaticNew()
{
  return vtkImageSliceMapper::New();
}

PyObject *PyvtkImageSliceMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageSliceMapper_Type, PyvtkImageSliceMapper_Methods,
    "vtkImageSliceMapper",
 &PyvtkImageSliceMapper_StaticNew);

  PyTypeObject *pytype = &PyvtkImageSliceMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageMapper3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageSliceMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageSliceMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageSliceMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

