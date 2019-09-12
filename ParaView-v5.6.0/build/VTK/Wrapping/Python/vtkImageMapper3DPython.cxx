// python wrapper for vtkImageMapper3D
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
#include "vtkImageMapper3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageMapper3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageMapper3D_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractMapper3D_ClassNew
extern "C" { PyObject *PyvtkAbstractMapper3D_ClassNew(); }
#define DECLARED_PyvtkAbstractMapper3D_ClassNew
#endif

static const char *PyvtkImageMapper3D_Doc =
  "vtkImageMapper3D - abstract class for mapping images to the screen\n\n"
  "Superclass: vtkAbstractMapper3D\n\n"
  "vtkImageMapper3D is a mapper that will draw a 2D image, or a slice of\n"
  "a 3D image.  The slice plane can be set automatically follow the\n"
  "camera, so that it slices through the focal point and faces the\n"
  "camera.@par Thanks: Thanks to David Gobbi at the Seaman Family MR\n"
  "Centre and Dept. of Clinical Neurosciences, Foothills Medical Centre,\n"
  "Calgary, for providing this class.\n"
  "@sa\n"
  "vtkImage vtkImageProperty vtkImageResliceMapper vtkImageSliceMapper\n\n";


static PyObject *
PyvtkImageMapper3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageMapper3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageMapper3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageMapper3D *tempr = vtkImageMapper3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageMapper3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageMapper3D::NewInstance());

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
PyvtkImageMapper3D_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkImageSlice *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkImageSlice"))
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
PyvtkImageMapper3D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    op->ReleaseGraphicsResources(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkImageMapper3D::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkImageMapper3D::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetDataSetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetDataSetInput() :
      op->vtkImageMapper3D::GetDataSetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetDataObjectInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetDataObjectInput() :
      op->vtkImageMapper3D::GetDataObjectInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorder(temp0);
    }
    else
    {
      op->vtkImageMapper3D::SetBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_BorderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BorderOn();
    }
    else
    {
      op->vtkImageMapper3D::BorderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_BorderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BorderOff();
    }
    else
    {
      op->vtkImageMapper3D::BorderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBorder() :
      op->vtkImageMapper3D::GetBorder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SetBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackground(temp0);
    }
    else
    {
      op->vtkImageMapper3D::SetBackground(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_BackgroundOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackgroundOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BackgroundOn();
    }
    else
    {
      op->vtkImageMapper3D::BackgroundOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_BackgroundOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackgroundOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BackgroundOff();
    }
    else
    {
      op->vtkImageMapper3D::BackgroundOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBackground() :
      op->vtkImageMapper3D::GetBackground());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SetSliceAtFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceAtFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceAtFocalPoint(temp0);
    }
    else
    {
      op->vtkImageMapper3D::SetSliceAtFocalPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SliceAtFocalPointOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceAtFocalPointOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceAtFocalPointOn();
    }
    else
    {
      op->vtkImageMapper3D::SliceAtFocalPointOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SliceAtFocalPointOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceAtFocalPointOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceAtFocalPointOff();
    }
    else
    {
      op->vtkImageMapper3D::SliceAtFocalPointOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetSliceAtFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceAtFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceAtFocalPoint() :
      op->vtkImageMapper3D::GetSliceAtFocalPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SetSliceFacesCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceFacesCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceFacesCamera(temp0);
    }
    else
    {
      op->vtkImageMapper3D::SetSliceFacesCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SliceFacesCameraOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceFacesCameraOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceFacesCameraOn();
    }
    else
    {
      op->vtkImageMapper3D::SliceFacesCameraOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SliceFacesCameraOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceFacesCameraOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceFacesCameraOff();
    }
    else
    {
      op->vtkImageMapper3D::SliceFacesCameraOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetSliceFacesCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceFacesCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceFacesCamera() :
      op->vtkImageMapper3D::GetSliceFacesCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetSlicePlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlicePlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetSlicePlane() :
      op->vtkImageMapper3D::GetSlicePlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetSlicePlaneInDataCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlicePlaneInDataCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

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
      op->vtkImageMapper3D::GetSlicePlaneInDataCoords(temp0, temp1);
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
PyvtkImageMapper3D_SetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfThreads(temp0);
    }
    else
    {
      op->vtkImageMapper3D::SetNumberOfThreads(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetNumberOfThreadsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsMinValue() :
      op->vtkImageMapper3D::GetNumberOfThreadsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetNumberOfThreadsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsMaxValue() :
      op->vtkImageMapper3D::GetNumberOfThreadsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreads() :
      op->vtkImageMapper3D::GetNumberOfThreads());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SetStreaming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStreaming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStreaming(temp0);
    }
    else
    {
      op->vtkImageMapper3D::SetStreaming(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetStreaming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStreaming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStreaming() :
      op->vtkImageMapper3D::GetStreaming());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_StreamingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StreamingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StreamingOn();
    }
    else
    {
      op->vtkImageMapper3D::StreamingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_StreamingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StreamingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StreamingOff();
    }
    else
    {
      op->vtkImageMapper3D::StreamingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageMapper3D_Methods[] = {
  {"IsTypeOf", PyvtkImageMapper3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageMapper3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageMapper3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageMapper3D\nC++: static vtkImageMapper3D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageMapper3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageMapper3D\nC++: vtkImageMapper3D *NewInstance()\n\n"},
  {"Render", PyvtkImageMapper3D_Render, METH_VARARGS,
   "V.Render(vtkRenderer, vtkImageSlice)\nC++: virtual void Render(vtkRenderer *renderer,\n    vtkImageSlice *prop)\n\nThis should only be called by the renderer.\n"},
  {"ReleaseGraphicsResources", PyvtkImageMapper3D_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override = 0;\n\nRelease any graphics resources that are being consumed by this\nmapper.  The parameter window is used to determine which graphic\nresources to release.\n"},
  {"SetInputData", PyvtkImageMapper3D_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkImageData)\nC++: void SetInputData(vtkImageData *input)\n\nThe input data for this mapper.\n"},
  {"GetInput", PyvtkImageMapper3D_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput()\n\nThe input data for this mapper.\n"},
  {"GetDataSetInput", PyvtkImageMapper3D_GetDataSetInput, METH_VARARGS,
   "V.GetDataSetInput() -> vtkDataSet\nC++: vtkDataSet *GetDataSetInput()\n\nThe input data for this mapper.\n"},
  {"GetDataObjectInput", PyvtkImageMapper3D_GetDataObjectInput, METH_VARARGS,
   "V.GetDataObjectInput() -> vtkDataObject\nC++: vtkDataObject *GetDataObjectInput()\n\nThe input data for this mapper.\n"},
  {"SetBorder", PyvtkImageMapper3D_SetBorder, METH_VARARGS,
   "V.SetBorder(int)\nC++: virtual void SetBorder(vtkTypeBool _arg)\n\nInstead of displaying the image only out to the image bounds,\ninclude a half-voxel border around the image. Within this border,\nthe image values will be extrapolated rather than interpolated.\n"},
  {"BorderOn", PyvtkImageMapper3D_BorderOn, METH_VARARGS,
   "V.BorderOn()\nC++: virtual void BorderOn()\n\nInstead of displaying the image only out to the image bounds,\ninclude a half-voxel border around the image. Within this border,\nthe image values will be extrapolated rather than interpolated.\n"},
  {"BorderOff", PyvtkImageMapper3D_BorderOff, METH_VARARGS,
   "V.BorderOff()\nC++: virtual void BorderOff()\n\nInstead of displaying the image only out to the image bounds,\ninclude a half-voxel border around the image. Within this border,\nthe image values will be extrapolated rather than interpolated.\n"},
  {"GetBorder", PyvtkImageMapper3D_GetBorder, METH_VARARGS,
   "V.GetBorder() -> int\nC++: virtual vtkTypeBool GetBorder()\n\nInstead of displaying the image only out to the image bounds,\ninclude a half-voxel border around the image. Within this border,\nthe image values will be extrapolated rather than interpolated.\n"},
  {"SetBackground", PyvtkImageMapper3D_SetBackground, METH_VARARGS,
   "V.SetBackground(int)\nC++: virtual void SetBackground(vtkTypeBool _arg)\n\nInstead of rendering only to the image border, render out to the\nviewport boundary with the background color.  The background\ncolor will be the lowest color on the lookup table that is being\nused for the image.\n"},
  {"BackgroundOn", PyvtkImageMapper3D_BackgroundOn, METH_VARARGS,
   "V.BackgroundOn()\nC++: virtual void BackgroundOn()\n\nInstead of rendering only to the image border, render out to the\nviewport boundary with the background color.  The background\ncolor will be the lowest color on the lookup table that is being\nused for the image.\n"},
  {"BackgroundOff", PyvtkImageMapper3D_BackgroundOff, METH_VARARGS,
   "V.BackgroundOff()\nC++: virtual void BackgroundOff()\n\nInstead of rendering only to the image border, render out to the\nviewport boundary with the background color.  The background\ncolor will be the lowest color on the lookup table that is being\nused for the image.\n"},
  {"GetBackground", PyvtkImageMapper3D_GetBackground, METH_VARARGS,
   "V.GetBackground() -> int\nC++: virtual vtkTypeBool GetBackground()\n\nInstead of rendering only to the image border, render out to the\nviewport boundary with the background color.  The background\ncolor will be the lowest color on the lookup table that is being\nused for the image.\n"},
  {"SetSliceAtFocalPoint", PyvtkImageMapper3D_SetSliceAtFocalPoint, METH_VARARGS,
   "V.SetSliceAtFocalPoint(int)\nC++: virtual void SetSliceAtFocalPoint(vtkTypeBool _arg)\n\nAutomatically set the slice position to the camera focal point.\nThis provides a convenient way to interact with the image, since\nmost Interactors directly control the camera.\n"},
  {"SliceAtFocalPointOn", PyvtkImageMapper3D_SliceAtFocalPointOn, METH_VARARGS,
   "V.SliceAtFocalPointOn()\nC++: virtual void SliceAtFocalPointOn()\n\nAutomatically set the slice position to the camera focal point.\nThis provides a convenient way to interact with the image, since\nmost Interactors directly control the camera.\n"},
  {"SliceAtFocalPointOff", PyvtkImageMapper3D_SliceAtFocalPointOff, METH_VARARGS,
   "V.SliceAtFocalPointOff()\nC++: virtual void SliceAtFocalPointOff()\n\nAutomatically set the slice position to the camera focal point.\nThis provides a convenient way to interact with the image, since\nmost Interactors directly control the camera.\n"},
  {"GetSliceAtFocalPoint", PyvtkImageMapper3D_GetSliceAtFocalPoint, METH_VARARGS,
   "V.GetSliceAtFocalPoint() -> int\nC++: virtual vtkTypeBool GetSliceAtFocalPoint()\n\nAutomatically set the slice position to the camera focal point.\nThis provides a convenient way to interact with the image, since\nmost Interactors directly control the camera.\n"},
  {"SetSliceFacesCamera", PyvtkImageMapper3D_SetSliceFacesCamera, METH_VARARGS,
   "V.SetSliceFacesCamera(int)\nC++: virtual void SetSliceFacesCamera(vtkTypeBool _arg)\n\nAutomatically set the slice orientation so that it faces the\ncamera. This provides a convenient way to interact with the\nimage, since most Interactors directly control the camera.\n"},
  {"SliceFacesCameraOn", PyvtkImageMapper3D_SliceFacesCameraOn, METH_VARARGS,
   "V.SliceFacesCameraOn()\nC++: virtual void SliceFacesCameraOn()\n\nAutomatically set the slice orientation so that it faces the\ncamera. This provides a convenient way to interact with the\nimage, since most Interactors directly control the camera.\n"},
  {"SliceFacesCameraOff", PyvtkImageMapper3D_SliceFacesCameraOff, METH_VARARGS,
   "V.SliceFacesCameraOff()\nC++: virtual void SliceFacesCameraOff()\n\nAutomatically set the slice orientation so that it faces the\ncamera. This provides a convenient way to interact with the\nimage, since most Interactors directly control the camera.\n"},
  {"GetSliceFacesCamera", PyvtkImageMapper3D_GetSliceFacesCamera, METH_VARARGS,
   "V.GetSliceFacesCamera() -> int\nC++: virtual vtkTypeBool GetSliceFacesCamera()\n\nAutomatically set the slice orientation so that it faces the\ncamera. This provides a convenient way to interact with the\nimage, since most Interactors directly control the camera.\n"},
  {"GetSlicePlane", PyvtkImageMapper3D_GetSlicePlane, METH_VARARGS,
   "V.GetSlicePlane() -> vtkPlane\nC++: virtual vtkPlane *GetSlicePlane()\n\nA plane that describes what slice of the input is being rendered\nby the mapper.  This plane is in world coordinates, not data\ncoordinates.  Before using this plane, call Update or\nUpdateInformation to make sure the plane is up-to-date. These\nmethods are automatically called by Render.\n"},
  {"GetSlicePlaneInDataCoords", PyvtkImageMapper3D_GetSlicePlaneInDataCoords, METH_VARARGS,
   "V.GetSlicePlaneInDataCoords(vtkMatrix4x4, [float, float, float,\n    float])\nC++: virtual void GetSlicePlaneInDataCoords(\n    vtkMatrix4x4 *propMatrix, double plane[4])\n\nGet the plane as a homogeneous 4-vector that gives the plane\nequation coefficients.  The prop3D matrix must be provided so\nthat the plane can be converted to data coords.\n"},
  {"SetNumberOfThreads", PyvtkImageMapper3D_SetNumberOfThreads, METH_VARARGS,
   "V.SetNumberOfThreads(int)\nC++: virtual void SetNumberOfThreads(int _arg)\n\nThe number of threads to create when rendering.\n"},
  {"GetNumberOfThreadsMinValue", PyvtkImageMapper3D_GetNumberOfThreadsMinValue, METH_VARARGS,
   "V.GetNumberOfThreadsMinValue() -> int\nC++: virtual int GetNumberOfThreadsMinValue()\n\nThe number of threads to create when rendering.\n"},
  {"GetNumberOfThreadsMaxValue", PyvtkImageMapper3D_GetNumberOfThreadsMaxValue, METH_VARARGS,
   "V.GetNumberOfThreadsMaxValue() -> int\nC++: virtual int GetNumberOfThreadsMaxValue()\n\nThe number of threads to create when rendering.\n"},
  {"GetNumberOfThreads", PyvtkImageMapper3D_GetNumberOfThreads, METH_VARARGS,
   "V.GetNumberOfThreads() -> int\nC++: virtual int GetNumberOfThreads()\n\nThe number of threads to create when rendering.\n"},
  {"SetStreaming", PyvtkImageMapper3D_SetStreaming, METH_VARARGS,
   "V.SetStreaming(int)\nC++: virtual void SetStreaming(vtkTypeBool _arg)\n\nTurn on streaming, to pull the minimum amount of data from the\ninput. Streaming decreases the memory required to display large\nimages, since only one slice will be pulled through the input\npipeline if only one slice is mapped to the screen.  The default\nbehavior is to pull the full 3D input extent through the input\npipeline, but to do this only when the input data changes.  The\ndefault behavior results in much faster follow-up renders when\nthe input data is static.\n"},
  {"GetStreaming", PyvtkImageMapper3D_GetStreaming, METH_VARARGS,
   "V.GetStreaming() -> int\nC++: virtual vtkTypeBool GetStreaming()\n\nTurn on streaming, to pull the minimum amount of data from the\ninput. Streaming decreases the memory required to display large\nimages, since only one slice will be pulled through the input\npipeline if only one slice is mapped to the screen.  The default\nbehavior is to pull the full 3D input extent through the input\npipeline, but to do this only when the input data changes.  The\ndefault behavior results in much faster follow-up renders when\nthe input data is static.\n"},
  {"StreamingOn", PyvtkImageMapper3D_StreamingOn, METH_VARARGS,
   "V.StreamingOn()\nC++: virtual void StreamingOn()\n\nTurn on streaming, to pull the minimum amount of data from the\ninput. Streaming decreases the memory required to display large\nimages, since only one slice will be pulled through the input\npipeline if only one slice is mapped to the screen.  The default\nbehavior is to pull the full 3D input extent through the input\npipeline, but to do this only when the input data changes.  The\ndefault behavior results in much faster follow-up renders when\nthe input data is static.\n"},
  {"StreamingOff", PyvtkImageMapper3D_StreamingOff, METH_VARARGS,
   "V.StreamingOff()\nC++: virtual void StreamingOff()\n\nTurn on streaming, to pull the minimum amount of data from the\ninput. Streaming decreases the memory required to display large\nimages, since only one slice will be pulled through the input\npipeline if only one slice is mapped to the screen.  The default\nbehavior is to pull the full 3D input extent through the input\npipeline, but to do this only when the input data changes.  The\ndefault behavior results in much faster follow-up renders when\nthe input data is static.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageMapper3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkImageMapper3D", // tp_name
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
  PyvtkImageMapper3D_Doc, // tp_doc
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

PyObject *PyvtkImageMapper3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageMapper3D_Type, PyvtkImageMapper3D_Methods,
    "vtkImageMapper3D",
 nullptr);

  PyTypeObject *pytype = &PyvtkImageMapper3D_Type;

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

void PyVTKAddFile_vtkImageMapper3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageMapper3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageMapper3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

