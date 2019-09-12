// python wrapper for vtkPVImageSliceMapper
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
#include "vtkPVImageSliceMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVImageSliceMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVImageSliceMapper_ClassNew(); }

#ifndef DECLARED_PyvtkMapper_ClassNew
extern "C" { PyObject *PyvtkMapper_ClassNew(); }
#define DECLARED_PyvtkMapper_ClassNew
#endif

static const char *PyvtkPVImageSliceMapper_Doc =
  "vtkPVImageSliceMapper - Mapper for vtkImageData that renders the\nimage using a texture applied to a quad.\n\n"
  "Superclass: vtkMapper\n\n"
  "vtkPVImageSliceMapper is a mapper for vtkImageData that renders the\n"
  "image by loading the image as a texture and then applying it to a\n"
  "quad. For 3D images, this mapper only shows a single Z slice which\n"
  "can be chosen using SetZSlice. By default, the image data scalars are\n"
  "rendering, however, this mapper provides API to select another point\n"
  "or cell data array. Internally, this mapper uses painters similar to\n"
  "those employed by vtkPainterPolyDataMapper.\n"
  "@sa\n"
  "vtkPainterPolyDataMapper\n\n";


static PyObject *
PyvtkPVImageSliceMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVImageSliceMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVImageSliceMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVImageSliceMapper *tempr = vtkPVImageSliceMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVImageSliceMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVImageSliceMapper::NewInstance());

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
PyvtkPVImageSliceMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkPVImageSliceMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

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
      op->vtkPVImageSliceMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_SetPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  vtkPainter *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPainter"))
  {
    if (ap.IsBound())
    {
      op->SetPainter(temp0);
    }
    else
    {
      op->vtkPVImageSliceMapper::SetPainter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPainter *tempr = (ap.IsBound() ?
      op->GetPainter() :
      op->vtkPVImageSliceMapper::GetPainter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

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
      op->vtkPVImageSliceMapper::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkPVImageSliceMapper::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_SetSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlice(temp0);
    }
    else
    {
      op->vtkPVImageSliceMapper::SetSlice(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSlice() :
      op->vtkPVImageSliceMapper::GetSlice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_SetSliceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceMode(temp0);
    }
    else
    {
      op->vtkPVImageSliceMapper::SetSliceMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetSliceModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceModeMinValue() :
      op->vtkPVImageSliceMapper::GetSliceModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetSliceModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceModeMaxValue() :
      op->vtkPVImageSliceMapper::GetSliceModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetSliceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceMode() :
      op->vtkPVImageSliceMapper::GetSliceMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_SetSliceModeToYZPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceModeToYZPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSliceModeToYZPlane();
    }
    else
    {
      op->vtkPVImageSliceMapper::SetSliceModeToYZPlane();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_SetSliceModeToXZPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceModeToXZPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSliceModeToXZPlane();
    }
    else
    {
      op->vtkPVImageSliceMapper::SetSliceModeToXZPlane();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_SetSliceModeToXYPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceModeToXYPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSliceModeToXYPlane();
    }
    else
    {
      op->vtkPVImageSliceMapper::SetSliceModeToXYPlane();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_SetUseXYPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseXYPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseXYPlane(temp0);
    }
    else
    {
      op->vtkPVImageSliceMapper::SetUseXYPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetUseXYPlaneMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseXYPlaneMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseXYPlaneMinValue() :
      op->vtkPVImageSliceMapper::GetUseXYPlaneMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetUseXYPlaneMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseXYPlaneMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseXYPlaneMaxValue() :
      op->vtkPVImageSliceMapper::GetUseXYPlaneMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_UseXYPlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseXYPlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseXYPlaneOn();
    }
    else
    {
      op->vtkPVImageSliceMapper::UseXYPlaneOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_UseXYPlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseXYPlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseXYPlaneOff();
    }
    else
    {
      op->vtkPVImageSliceMapper::UseXYPlaneOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetUseXYPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseXYPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseXYPlane() :
      op->vtkPVImageSliceMapper::GetUseXYPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_Update_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Update(temp0);
    }
    else
    {
      op->vtkPVImageSliceMapper::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVImageSliceMapper_Update_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkPVImageSliceMapper::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVImageSliceMapper_Update_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  int temp0;
  vtkInformationVector *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformationVector"))
  {
    int tempr = (ap.IsBound() ?
      op->Update(temp0, temp1) :
      op->vtkPVImageSliceMapper::Update(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVImageSliceMapper_Update_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->Update(temp0) :
      op->vtkPVImageSliceMapper::Update(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVImageSliceMapper_Update_Methods[] = {
  {nullptr, PyvtkPVImageSliceMapper_Update_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkPVImageSliceMapper_Update_s4, METH_VARARGS,
   "@V *vtkInformation"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVImageSliceMapper_Update(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVImageSliceMapper_Update_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPVImageSliceMapper_Update_s2(self, args);
    case 2:
      return PyvtkPVImageSliceMapper_Update_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Update");
  return nullptr;
}



static PyObject *
PyvtkPVImageSliceMapper_SetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPiece(temp0);
    }
    else
    {
      op->vtkPVImageSliceMapper::SetPiece(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPiece() :
      op->vtkPVImageSliceMapper::GetPiece());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPieces(temp0);
    }
    else
    {
      op->vtkPVImageSliceMapper::SetNumberOfPieces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkPVImageSliceMapper::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_SetNumberOfSubPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSubPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSubPieces(temp0);
    }
    else
    {
      op->vtkPVImageSliceMapper::SetNumberOfSubPieces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetNumberOfSubPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSubPieces() :
      op->vtkPVImageSliceMapper::GetNumberOfSubPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGhostLevel(temp0);
    }
    else
    {
      op->vtkPVImageSliceMapper::SetGhostLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkPVImageSliceMapper::GetGhostLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPVImageSliceMapper::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkPVImageSliceMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

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
      op->vtkPVImageSliceMapper::GetBounds(temp0);
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
PyvtkPVImageSliceMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPVImageSliceMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkPVImageSliceMapper_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkPVImageSliceMapper_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  vtkAbstractMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractMapper"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkPVImageSliceMapper::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVImageSliceMapper_Methods[] = {
  {"IsTypeOf", PyvtkPVImageSliceMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVImageSliceMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVImageSliceMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVImageSliceMapper\nC++: static vtkPVImageSliceMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVImageSliceMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVImageSliceMapper\nC++: vtkPVImageSliceMapper *NewInstance()\n\n"},
  {"Render", PyvtkPVImageSliceMapper_Render, METH_VARARGS,
   "V.Render(vtkRenderer, vtkActor)\nC++: void Render(vtkRenderer *ren, vtkActor *act) override;\n\nThis calls RenderPiece (in a for loop is streaming is necessary).\n"},
  {"ReleaseGraphicsResources", PyvtkPVImageSliceMapper_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"SetPainter", PyvtkPVImageSliceMapper_SetPainter, METH_VARARGS,
   "V.SetPainter(vtkPainter)\nC++: void SetPainter(vtkPainter *)\n\nGet/Set the painter that does the actual rendering.\n"},
  {"GetPainter", PyvtkPVImageSliceMapper_GetPainter, METH_VARARGS,
   "V.GetPainter() -> vtkPainter\nC++: virtual vtkPainter *GetPainter()\n\nGet/Set the painter that does the actual rendering.\n"},
  {"SetInputData", PyvtkPVImageSliceMapper_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkImageData)\nC++: void SetInputData(vtkImageData *in)\n\nSpecify the input data to map.\n"},
  {"GetInput", PyvtkPVImageSliceMapper_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkImageData\nC++: virtual vtkImageData *GetInput()\n\nSpecify the input data to map.\n"},
  {"SetSlice", PyvtkPVImageSliceMapper_SetSlice, METH_VARARGS,
   "V.SetSlice(int)\nC++: virtual void SetSlice(int _arg)\n\nSet/Get the current X/Y or Z slice number.\n"},
  {"GetSlice", PyvtkPVImageSliceMapper_GetSlice, METH_VARARGS,
   "V.GetSlice() -> int\nC++: virtual int GetSlice()\n\nSet/Get the current X/Y or Z slice number.\n"},
  {"SetSliceMode", PyvtkPVImageSliceMapper_SetSliceMode, METH_VARARGS,
   "V.SetSliceMode(int)\nC++: virtual void SetSliceMode(int _arg)\n\n"},
  {"GetSliceModeMinValue", PyvtkPVImageSliceMapper_GetSliceModeMinValue, METH_VARARGS,
   "V.GetSliceModeMinValue() -> int\nC++: virtual int GetSliceModeMinValue()\n\n"},
  {"GetSliceModeMaxValue", PyvtkPVImageSliceMapper_GetSliceModeMaxValue, METH_VARARGS,
   "V.GetSliceModeMaxValue() -> int\nC++: virtual int GetSliceModeMaxValue()\n\n"},
  {"GetSliceMode", PyvtkPVImageSliceMapper_GetSliceMode, METH_VARARGS,
   "V.GetSliceMode() -> int\nC++: virtual int GetSliceMode()\n\n"},
  {"SetSliceModeToYZPlane", PyvtkPVImageSliceMapper_SetSliceModeToYZPlane, METH_VARARGS,
   "V.SetSliceModeToYZPlane()\nC++: void SetSliceModeToYZPlane()\n\n"},
  {"SetSliceModeToXZPlane", PyvtkPVImageSliceMapper_SetSliceModeToXZPlane, METH_VARARGS,
   "V.SetSliceModeToXZPlane()\nC++: void SetSliceModeToXZPlane()\n\n"},
  {"SetSliceModeToXYPlane", PyvtkPVImageSliceMapper_SetSliceModeToXYPlane, METH_VARARGS,
   "V.SetSliceModeToXYPlane()\nC++: void SetSliceModeToXYPlane()\n\n"},
  {"SetUseXYPlane", PyvtkPVImageSliceMapper_SetUseXYPlane, METH_VARARGS,
   "V.SetUseXYPlane(int)\nC++: virtual void SetUseXYPlane(int _arg)\n\nWhen set, the image slice is always rendered in the XY plane\n(Z==0) irrespective of the image bounds. Default is Off.\n"},
  {"GetUseXYPlaneMinValue", PyvtkPVImageSliceMapper_GetUseXYPlaneMinValue, METH_VARARGS,
   "V.GetUseXYPlaneMinValue() -> int\nC++: virtual int GetUseXYPlaneMinValue()\n\nWhen set, the image slice is always rendered in the XY plane\n(Z==0) irrespective of the image bounds. Default is Off.\n"},
  {"GetUseXYPlaneMaxValue", PyvtkPVImageSliceMapper_GetUseXYPlaneMaxValue, METH_VARARGS,
   "V.GetUseXYPlaneMaxValue() -> int\nC++: virtual int GetUseXYPlaneMaxValue()\n\nWhen set, the image slice is always rendered in the XY plane\n(Z==0) irrespective of the image bounds. Default is Off.\n"},
  {"UseXYPlaneOn", PyvtkPVImageSliceMapper_UseXYPlaneOn, METH_VARARGS,
   "V.UseXYPlaneOn()\nC++: virtual void UseXYPlaneOn()\n\nWhen set, the image slice is always rendered in the XY plane\n(Z==0) irrespective of the image bounds. Default is Off.\n"},
  {"UseXYPlaneOff", PyvtkPVImageSliceMapper_UseXYPlaneOff, METH_VARARGS,
   "V.UseXYPlaneOff()\nC++: virtual void UseXYPlaneOff()\n\nWhen set, the image slice is always rendered in the XY plane\n(Z==0) irrespective of the image bounds. Default is Off.\n"},
  {"GetUseXYPlane", PyvtkPVImageSliceMapper_GetUseXYPlane, METH_VARARGS,
   "V.GetUseXYPlane() -> int\nC++: virtual int GetUseXYPlane()\n\nWhen set, the image slice is always rendered in the XY plane\n(Z==0) irrespective of the image bounds. Default is Off.\n"},
  {"Update", PyvtkPVImageSliceMapper_Update, METH_VARARGS,
   "V.Update(int)\nC++: void Update(int port) override;\nV.Update()\nC++: void Update() override;\nV.Update(int, vtkInformationVector) -> int\nC++: int Update(int port, vtkInformationVector *requests)\n    override;\nV.Update(vtkInformation) -> int\nC++: int Update(vtkInformation *requests) override;\n\nUpdate that sets the update piece first.\n"},
  {"SetPiece", PyvtkPVImageSliceMapper_SetPiece, METH_VARARGS,
   "V.SetPiece(int)\nC++: virtual void SetPiece(int _arg)\n\nIf you want only a part of the data, specify by setting the\npiece.\n"},
  {"GetPiece", PyvtkPVImageSliceMapper_GetPiece, METH_VARARGS,
   "V.GetPiece() -> int\nC++: virtual int GetPiece()\n\nIf you want only a part of the data, specify by setting the\npiece.\n"},
  {"SetNumberOfPieces", PyvtkPVImageSliceMapper_SetNumberOfPieces, METH_VARARGS,
   "V.SetNumberOfPieces(int)\nC++: virtual void SetNumberOfPieces(int _arg)\n\nIf you want only a part of the data, specify by setting the\npiece.\n"},
  {"GetNumberOfPieces", PyvtkPVImageSliceMapper_GetNumberOfPieces, METH_VARARGS,
   "V.GetNumberOfPieces() -> int\nC++: virtual int GetNumberOfPieces()\n\nIf you want only a part of the data, specify by setting the\npiece.\n"},
  {"SetNumberOfSubPieces", PyvtkPVImageSliceMapper_SetNumberOfSubPieces, METH_VARARGS,
   "V.SetNumberOfSubPieces(int)\nC++: virtual void SetNumberOfSubPieces(int _arg)\n\nIf you want only a part of the data, specify by setting the\npiece.\n"},
  {"GetNumberOfSubPieces", PyvtkPVImageSliceMapper_GetNumberOfSubPieces, METH_VARARGS,
   "V.GetNumberOfSubPieces() -> int\nC++: virtual int GetNumberOfSubPieces()\n\nIf you want only a part of the data, specify by setting the\npiece.\n"},
  {"SetGhostLevel", PyvtkPVImageSliceMapper_SetGhostLevel, METH_VARARGS,
   "V.SetGhostLevel(int)\nC++: virtual void SetGhostLevel(int _arg)\n\nSet the number of ghost cells to return.\n"},
  {"GetGhostLevel", PyvtkPVImageSliceMapper_GetGhostLevel, METH_VARARGS,
   "V.GetGhostLevel() -> int\nC++: virtual int GetGhostLevel()\n\nSet the number of ghost cells to return.\n"},
  {"GetBounds", PyvtkPVImageSliceMapper_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6]) override;\n\nReturn bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {"ShallowCopy", PyvtkPVImageSliceMapper_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkAbstractMapper)\nC++: virtual void ShallowCopy(vtkAbstractMapper *m)\n\nMake a shallow copy of this mapper.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVImageSliceMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVImageSliceMapper", // tp_name
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
  PyvtkPVImageSliceMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVImageSliceMapper_StaticNew()
{
  return vtkPVImageSliceMapper::New();
}

PyObject *PyvtkPVImageSliceMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVImageSliceMapper_Type, PyvtkPVImageSliceMapper_Methods,
    "vtkPVImageSliceMapper",
 &PyvtkPVImageSliceMapper_StaticNew);

  PyTypeObject *pytype = &PyvtkPVImageSliceMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMapper_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "XY_PLANE", vtkPVImageSliceMapper::XY_PLANE },
        { "YZ_PLANE", vtkPVImageSliceMapper::YZ_PLANE },
        { "XZ_PLANE", vtkPVImageSliceMapper::XZ_PLANE },
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

void PyVTKAddFile_vtkPVImageSliceMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVImageSliceMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVImageSliceMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

