// python wrapper for vtkAbstractImageInterpolator
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
#include "vtkAbstractImageInterpolator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractImageInterpolator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAbstractImageInterpolator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkAbstractImageInterpolator_Doc =
  "vtkAbstractImageInterpolator - interpolate data values from images\n\n"
  "Superclass: vtkObject\n\n"
  "vtkAbstractImageInterpolator provides an abstract interface for\n"
  "interpolating image data.  You specify the data set you want to\n"
  "interpolate values from, then call Interpolate(x,y,z) to interpolate\n"
  "the data.@par Thanks: Thanks to David Gobbi at the Seaman Family MR\n"
  "Centre and Dept. of Clinical Neurosciences, Foothills Medical Centre,\n"
  "Calgary, for providing this class.\n"
  "@sa\n"
  "vtkImageReslice vtkImageInterpolator vtkImageSincInterpolator\n\n";


static PyObject *
PyvtkAbstractImageInterpolator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractImageInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractImageInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractImageInterpolator *tempr = vtkAbstractImageInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractImageInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractImageInterpolator::NewInstance());

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
PyvtkAbstractImageInterpolator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkAbstractImageInterpolator::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_ReleaseData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseData();
    }
    else
    {
      op->vtkAbstractImageInterpolator::ReleaseData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  vtkAbstractImageInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractImageInterpolator"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkAbstractImageInterpolator::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkAbstractImageInterpolator::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_Interpolate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Interpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    double tempr = (ap.IsBound() ?
      op->Interpolate(temp0, temp1, temp2, temp3) :
      op->vtkAbstractImageInterpolator::Interpolate(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractImageInterpolator_Interpolate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Interpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()))
  {
    ap.Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->Interpolate(temp0, temp1) :
      op->vtkAbstractImageInterpolator::Interpolate(temp0, temp1));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractImageInterpolator_Interpolate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkAbstractImageInterpolator_Interpolate_s1(self, args);
    case 2:
      return PyvtkAbstractImageInterpolator_Interpolate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Interpolate");
  return nullptr;
}



static PyObject *
PyvtkAbstractImageInterpolator_SetOutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutValue(temp0);
    }
    else
    {
      op->vtkAbstractImageInterpolator::SetOutValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetOutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOutValue() :
      op->vtkAbstractImageInterpolator::GetOutValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkAbstractImageInterpolator::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkAbstractImageInterpolator::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetComponentOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponentOffset(temp0);
    }
    else
    {
      op->vtkAbstractImageInterpolator::SetComponentOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetComponentOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentOffset() :
      op->vtkAbstractImageInterpolator::GetComponentOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetComponentCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponentCount(temp0);
    }
    else
    {
      op->vtkAbstractImageInterpolator::SetComponentCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetComponentCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentCount() :
      op->vtkAbstractImageInterpolator::GetComponentCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_ComputeNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeNumberOfComponents(temp0) :
      op->vtkAbstractImageInterpolator::ComputeNumberOfComponents(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkAbstractImageInterpolator::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_InterpolateIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InterpolateIJK(temp0, temp1);
    }
    else
    {
      op->vtkAbstractImageInterpolator::InterpolateIJK(temp0, temp1);
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
PyvtkAbstractImageInterpolator_CheckBoundsIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckBoundsIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    bool tempr = (ap.IsBound() ?
      op->CheckBoundsIJK(temp0) :
      op->vtkAbstractImageInterpolator::CheckBoundsIJK(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetBorderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorderMode(temp0);
    }
    else
    {
      op->vtkAbstractImageInterpolator::SetBorderMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetBorderModeToClamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderModeToClamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBorderModeToClamp();
    }
    else
    {
      op->vtkAbstractImageInterpolator::SetBorderModeToClamp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetBorderModeToRepeat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderModeToRepeat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBorderModeToRepeat();
    }
    else
    {
      op->vtkAbstractImageInterpolator::SetBorderModeToRepeat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetBorderModeToMirror(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderModeToMirror");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBorderModeToMirror();
    }
    else
    {
      op->vtkAbstractImageInterpolator::SetBorderModeToMirror();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetBorderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBorderMode() :
      op->vtkAbstractImageInterpolator::GetBorderMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetBorderModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetBorderModeAsString() :
      op->vtkAbstractImageInterpolator::GetBorderModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetSlidingWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlidingWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlidingWindow(temp0);
    }
    else
    {
      op->vtkAbstractImageInterpolator::SetSlidingWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SlidingWindowOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SlidingWindowOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SlidingWindowOn();
    }
    else
    {
      op->vtkAbstractImageInterpolator::SlidingWindowOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SlidingWindowOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SlidingWindowOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SlidingWindowOff();
    }
    else
    {
      op->vtkAbstractImageInterpolator::SlidingWindowOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetSlidingWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlidingWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSlidingWindow() :
      op->vtkAbstractImageInterpolator::GetSlidingWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_ComputeSupportSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSupportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  const size_t size0 = 16;
  double temp0[16];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    op->ComputeSupportSize(temp0, temp1);

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
PyvtkAbstractImageInterpolator_IsSeparable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSeparable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    bool tempr = op->IsSeparable();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSpacing() :
      op->vtkAbstractImageInterpolator::GetSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkAbstractImageInterpolator::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkAbstractImageInterpolator::GetExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkAbstractImageInterpolator_GetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetWholeExtent() :
      op->vtkAbstractImageInterpolator::GetWholeExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif

#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkAbstractImageInterpolator_GetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetWholeExtent(temp0);
    }
    else
    {
      op->vtkAbstractImageInterpolator::GetWholeExtent(temp0);
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
#endif

#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkAbstractImageInterpolator_GetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkAbstractImageInterpolator_GetWholeExtent_s1(self, args);
    case 1:
      return PyvtkAbstractImageInterpolator_GetWholeExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetWholeExtent");
  return nullptr;
}

#endif

static PyMethodDef PyvtkAbstractImageInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkAbstractImageInterpolator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractImageInterpolator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractImageInterpolator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAbstractImageInterpolator\nC++: static vtkAbstractImageInterpolator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractImageInterpolator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAbstractImageInterpolator\nC++: vtkAbstractImageInterpolator *NewInstance()\n\n"},
  {"Initialize", PyvtkAbstractImageInterpolator_Initialize, METH_VARARGS,
   "V.Initialize(vtkDataObject)\nC++: virtual void Initialize(vtkDataObject *data)\n\nInitialize the interpolator with the data that you wish to\ninterpolate.\n"},
  {"ReleaseData", PyvtkAbstractImageInterpolator_ReleaseData, METH_VARARGS,
   "V.ReleaseData()\nC++: virtual void ReleaseData()\n\nRelease any data stored by the interpolator.\n"},
  {"DeepCopy", PyvtkAbstractImageInterpolator_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkAbstractImageInterpolator)\nC++: void DeepCopy(vtkAbstractImageInterpolator *obj)\n\nCopy the interpolator.  It is possible to duplicate an\ninterpolator by calling NewInstance() followed by DeepCopy().\n"},
  {"Update", PyvtkAbstractImageInterpolator_Update, METH_VARARGS,
   "V.Update()\nC++: void Update()\n\nUpdate the interpolator.  If the interpolator has been modified\nby a Set method since Initialize() was called, you must call this\nmethod to update the interpolator before you can use it.\n"},
  {"Interpolate", PyvtkAbstractImageInterpolator_Interpolate, METH_VARARGS,
   "V.Interpolate(float, float, float, int) -> float\nC++: double Interpolate(double x, double y, double z,\n    int component)\nV.Interpolate((float, float, float), [float, ...]) -> bool\nC++: bool Interpolate(const double point[3], double *value)\n\nGet the result of interpolating the specified component of the\ninput data, which should be set to zero if there is only one\ncomponent. If the point is not within the bounds of the data set,\nthen OutValue will be returned.  This method is primarily meant\nfor use by the wrapper languages.\n"},
  {"SetOutValue", PyvtkAbstractImageInterpolator_SetOutValue, METH_VARARGS,
   "V.SetOutValue(float)\nC++: void SetOutValue(double outValue)\n\nThe value to return when the point is out of bounds.\n"},
  {"GetOutValue", PyvtkAbstractImageInterpolator_GetOutValue, METH_VARARGS,
   "V.GetOutValue() -> float\nC++: double GetOutValue()\n\n"},
  {"SetTolerance", PyvtkAbstractImageInterpolator_SetTolerance, METH_VARARGS,
   "V.SetTolerance(float)\nC++: void SetTolerance(double tol)\n\nThe tolerance to apply when checking whether a point is out of\nbounds. This is a fractional distance relative to the voxel size,\nso a tolerance of 1 expands the bounds by one voxel.\n"},
  {"GetTolerance", PyvtkAbstractImageInterpolator_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> float\nC++: double GetTolerance()\n\n"},
  {"SetComponentOffset", PyvtkAbstractImageInterpolator_SetComponentOffset, METH_VARARGS,
   "V.SetComponentOffset(int)\nC++: void SetComponentOffset(int offset)\n\nThis method specifies which component of the input will be\ninterpolated, or if ComponentCount is also set, it specifies the\nfirst component. When the interpolation is performed, it will be\nclamped to the number of available components.\n"},
  {"GetComponentOffset", PyvtkAbstractImageInterpolator_GetComponentOffset, METH_VARARGS,
   "V.GetComponentOffset() -> int\nC++: int GetComponentOffset()\n\n"},
  {"SetComponentCount", PyvtkAbstractImageInterpolator_SetComponentCount, METH_VARARGS,
   "V.SetComponentCount(int)\nC++: void SetComponentCount(int count)\n\nThis method specifies the number of components to extract.  The\ndefault value is -1, which extracts all available components. \nWhen the interpolation is performed, this will be clamped to the\nnumber of available components.\n"},
  {"GetComponentCount", PyvtkAbstractImageInterpolator_GetComponentCount, METH_VARARGS,
   "V.GetComponentCount() -> int\nC++: int GetComponentCount()\n\n"},
  {"ComputeNumberOfComponents", PyvtkAbstractImageInterpolator_ComputeNumberOfComponents, METH_VARARGS,
   "V.ComputeNumberOfComponents(int) -> int\nC++: int ComputeNumberOfComponents(int inputComponents)\n\nCompute the number of output components based on the\nComponentOffset, ComponentCount, and the number of components in\nthe input data.\n"},
  {"GetNumberOfComponents", PyvtkAbstractImageInterpolator_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nGet the number of components that will be returned when\nInterpolate() is called.  This is only valid after\ninitialization.  Before then, use ComputeNumberOfComponents\ninstead.\n"},
  {"InterpolateIJK", PyvtkAbstractImageInterpolator_InterpolateIJK, METH_VARARGS,
   "V.InterpolateIJK((float, float, float), [float, ...])\nC++: void InterpolateIJK(const double point[3], double *value)\n\nA version of Interpolate that takes structured coords instead of\ndata coords.  Structured coords are the data coords after\nsubtracting the Origin and dividing by the Spacing.\n"},
  {"CheckBoundsIJK", PyvtkAbstractImageInterpolator_CheckBoundsIJK, METH_VARARGS,
   "V.CheckBoundsIJK((float, float, float)) -> bool\nC++: bool CheckBoundsIJK(const double x[3])\n\nCheck an x,y,z point to see if it is within the bounds for the\nstructured coords of the image.  This is meant to be called prior\nto InterpolateIJK.  The bounds that are checked against are the\ninput image extent plus the tolerance.\n"},
  {"SetBorderMode", PyvtkAbstractImageInterpolator_SetBorderMode, METH_VARARGS,
   "V.SetBorderMode(int)\nC++: void SetBorderMode(int mode)\n\nThe border mode (default: clamp).  This controls how\nout-of-bounds lookups are handled, i.e. how data will be\nextrapolated beyond the bounds of the image.  The default is to\nclamp the lookup point to the bounds.  The other modes wrap\naround to the opposite boundary, or mirror the image at the\nboundary.\n"},
  {"SetBorderModeToClamp", PyvtkAbstractImageInterpolator_SetBorderModeToClamp, METH_VARARGS,
   "V.SetBorderModeToClamp()\nC++: void SetBorderModeToClamp()\n\nThe border mode (default: clamp).  This controls how\nout-of-bounds lookups are handled, i.e. how data will be\nextrapolated beyond the bounds of the image.  The default is to\nclamp the lookup point to the bounds.  The other modes wrap\naround to the opposite boundary, or mirror the image at the\nboundary.\n"},
  {"SetBorderModeToRepeat", PyvtkAbstractImageInterpolator_SetBorderModeToRepeat, METH_VARARGS,
   "V.SetBorderModeToRepeat()\nC++: void SetBorderModeToRepeat()\n\nThe border mode (default: clamp).  This controls how\nout-of-bounds lookups are handled, i.e. how data will be\nextrapolated beyond the bounds of the image.  The default is to\nclamp the lookup point to the bounds.  The other modes wrap\naround to the opposite boundary, or mirror the image at the\nboundary.\n"},
  {"SetBorderModeToMirror", PyvtkAbstractImageInterpolator_SetBorderModeToMirror, METH_VARARGS,
   "V.SetBorderModeToMirror()\nC++: void SetBorderModeToMirror()\n\nThe border mode (default: clamp).  This controls how\nout-of-bounds lookups are handled, i.e. how data will be\nextrapolated beyond the bounds of the image.  The default is to\nclamp the lookup point to the bounds.  The other modes wrap\naround to the opposite boundary, or mirror the image at the\nboundary.\n"},
  {"GetBorderMode", PyvtkAbstractImageInterpolator_GetBorderMode, METH_VARARGS,
   "V.GetBorderMode() -> int\nC++: int GetBorderMode()\n\nThe border mode (default: clamp).  This controls how\nout-of-bounds lookups are handled, i.e. how data will be\nextrapolated beyond the bounds of the image.  The default is to\nclamp the lookup point to the bounds.  The other modes wrap\naround to the opposite boundary, or mirror the image at the\nboundary.\n"},
  {"GetBorderModeAsString", PyvtkAbstractImageInterpolator_GetBorderModeAsString, METH_VARARGS,
   "V.GetBorderModeAsString() -> string\nC++: const char *GetBorderModeAsString()\n\nThe border mode (default: clamp).  This controls how\nout-of-bounds lookups are handled, i.e. how data will be\nextrapolated beyond the bounds of the image.  The default is to\nclamp the lookup point to the bounds.  The other modes wrap\naround to the opposite boundary, or mirror the image at the\nboundary.\n"},
  {"SetSlidingWindow", PyvtkAbstractImageInterpolator_SetSlidingWindow, METH_VARARGS,
   "V.SetSlidingWindow(bool)\nC++: void SetSlidingWindow(bool x)\n\nEnable sliding window for separable kernels. When this is\nenabled, the interpolator will cache partial sums in in order to\naccelerate the computation.  It only makes sense to do this if\nthe interpolator is used by calling InterpolateRow() while\nincrementing first the Y, and then the Z index with every call.\n"},
  {"SlidingWindowOn", PyvtkAbstractImageInterpolator_SlidingWindowOn, METH_VARARGS,
   "V.SlidingWindowOn()\nC++: void SlidingWindowOn()\n\n"},
  {"SlidingWindowOff", PyvtkAbstractImageInterpolator_SlidingWindowOff, METH_VARARGS,
   "V.SlidingWindowOff()\nC++: void SlidingWindowOff()\n\n"},
  {"GetSlidingWindow", PyvtkAbstractImageInterpolator_GetSlidingWindow, METH_VARARGS,
   "V.GetSlidingWindow() -> bool\nC++: bool GetSlidingWindow()\n\n"},
  {"ComputeSupportSize", PyvtkAbstractImageInterpolator_ComputeSupportSize, METH_VARARGS,
   "V.ComputeSupportSize((float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float), [int, int, int])\nC++: virtual void ComputeSupportSize(const double matrix[16],\n    int support[3])\n\nGet the support size for use in computing update extents.  If the\ndata will be sampled on a regular grid, then pass a matrix\ndescribing the structured coordinate transformation between the\noutput and the input. Otherwise, pass nullptr as the matrix to\nretrieve the full kernel size.\n"},
  {"IsSeparable", PyvtkAbstractImageInterpolator_IsSeparable, METH_VARARGS,
   "V.IsSeparable() -> bool\nC++: virtual bool IsSeparable()\n\nTrue if the interpolation is separable, which means that the\nweights can be precomputed in order to accelerate the\ninterpolation.  Any interpolator which is separable will\nimplement the methods PrecomputeWeightsForExtent and\nInterpolateRow\n"},
  {"GetSpacing", PyvtkAbstractImageInterpolator_GetSpacing, METH_VARARGS,
   "V.GetSpacing() -> (float, float, float)\nC++: double *GetSpacing()\n\n"},
  {"GetOrigin", PyvtkAbstractImageInterpolator_GetOrigin, METH_VARARGS,
   "V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\n"},
  {"GetExtent", PyvtkAbstractImageInterpolator_GetExtent, METH_VARARGS,
   "V.GetExtent() -> (int, int, int, int, int, int)\nC++: int *GetExtent()\n\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {"GetWholeExtent", PyvtkAbstractImageInterpolator_GetWholeExtent, METH_VARARGS,
   "V.GetWholeExtent() -> (int, ...)\nC++: int *GetWholeExtent()\nV.GetWholeExtent([int, int, int, int, int, int])\nC++: void GetWholeExtent(int extent[6])\n\nGet the whole extent of the data being interpolated, including\nparts of the data that are not currently in memory.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
#endif
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAbstractImageInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkAbstractImageInterpolator", // tp_name
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
  PyvtkAbstractImageInterpolator_Doc, // tp_doc
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

PyObject *PyvtkAbstractImageInterpolator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAbstractImageInterpolator_Type, PyvtkAbstractImageInterpolator_Methods,
    "vtkAbstractImageInterpolator",
 nullptr);

  PyTypeObject *pytype = &PyvtkAbstractImageInterpolator_Type;

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

void PyVTKAddFile_vtkAbstractImageInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractImageInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractImageInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_IMAGE_BORDER_CLAMP", 0 },
        { "VTK_IMAGE_BORDER_REPEAT", 1 },
        { "VTK_IMAGE_BORDER_MIRROR", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

