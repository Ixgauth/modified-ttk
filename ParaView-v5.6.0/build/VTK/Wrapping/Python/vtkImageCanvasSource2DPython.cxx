// python wrapper for vtkImageCanvasSource2D
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
#include "vtkImageCanvasSource2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageCanvasSource2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageCanvasSource2D_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageCanvasSource2D_Doc =
  "vtkImageCanvasSource2D - Paints on a canvas\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageCanvasSource2D is a source that starts as a blank image. you\n"
  "may add to the image with two-dimensional drawing routines. It can\n"
  "paint multi-spectral images.\n\n";


static PyObject *
PyvtkImageCanvasSource2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageCanvasSource2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageCanvasSource2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageCanvasSource2D *tempr = vtkImageCanvasSource2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageCanvasSource2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageCanvasSource2D::NewInstance());

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
PyvtkImageCanvasSource2D_SetDrawColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetDrawColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetDrawColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_SetDrawColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDrawColor(temp0);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetDrawColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_SetDrawColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawColor(temp0);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetDrawColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_SetDrawColor_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDrawColor(temp0, temp1);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetDrawColor(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_SetDrawColor_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

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
      op->SetDrawColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetDrawColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageCanvasSource2D_SetDrawColor_Methods[] = {
  {nullptr, PyvtkImageCanvasSource2D_SetDrawColor_s2, METH_VARARGS,
   "@P *d"},
  {nullptr, PyvtkImageCanvasSource2D_SetDrawColor_s3, METH_VARARGS,
   "@d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageCanvasSource2D_SetDrawColor(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageCanvasSource2D_SetDrawColor_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkImageCanvasSource2D_SetDrawColor_s1(self, args);
    case 2:
      return PyvtkImageCanvasSource2D_SetDrawColor_s4(self, args);
    case 3:
      return PyvtkImageCanvasSource2D_SetDrawColor_s5(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDrawColor");
  return nullptr;
}



static PyObject *
PyvtkImageCanvasSource2D_GetDrawColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDrawColor() :
      op->vtkImageCanvasSource2D::GetDrawColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_InitializeCanvasVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeCanvasVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->InitializeCanvasVolume(temp0);
    }
    else
    {
      op->vtkImageCanvasSource2D::InitializeCanvasVolume(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_FillBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->FillBox(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageCanvasSource2D::FillBox(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_FillTube(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillTube");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  double temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->FillTube(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkImageCanvasSource2D::FillTube(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_FillTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

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
      op->FillTriangle(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageCanvasSource2D::FillTriangle(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_DrawCircle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawCircle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->DrawCircle(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageCanvasSource2D::DrawCircle(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_DrawPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->DrawPoint(temp0, temp1);
    }
    else
    {
      op->vtkImageCanvasSource2D::DrawPoint(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_DrawSegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->DrawSegment(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageCanvasSource2D::DrawSegment(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_DrawSegment3D_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawSegment3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->DrawSegment3D(temp0, temp1);
    }
    else
    {
      op->vtkImageCanvasSource2D::DrawSegment3D(temp0, temp1);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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
PyvtkImageCanvasSource2D_DrawSegment3D_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawSegment3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

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
      op->DrawSegment3D(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageCanvasSource2D::DrawSegment3D(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_DrawSegment3D(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageCanvasSource2D_DrawSegment3D_s1(self, args);
    case 6:
      return PyvtkImageCanvasSource2D_DrawSegment3D_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawSegment3D");
  return nullptr;
}



static PyObject *
PyvtkImageCanvasSource2D_DrawImage_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  vtkImageData *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->DrawImage(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageCanvasSource2D::DrawImage(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_DrawImage_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  vtkImageData *temp2 = nullptr;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    if (ap.IsBound())
    {
      op->DrawImage(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkImageCanvasSource2D::DrawImage(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_DrawImage(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageCanvasSource2D_DrawImage_s1(self, args);
    case 7:
      return PyvtkImageCanvasSource2D_DrawImage_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawImage");
  return nullptr;
}



static PyObject *
PyvtkImageCanvasSource2D_FillPixel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillPixel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->FillPixel(temp0, temp1);
    }
    else
    {
      op->vtkImageCanvasSource2D::FillPixel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetExtent(temp0);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetExtent(temp0);
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
PyvtkImageCanvasSource2D_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

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
      op->SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageCanvasSource2D_SetExtent_s1(self, args);
    case 6:
      return PyvtkImageCanvasSource2D_SetExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return nullptr;
}



static PyObject *
PyvtkImageCanvasSource2D_SetDefaultZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultZ(temp0);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetDefaultZ(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_GetDefaultZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDefaultZ() :
      op->vtkImageCanvasSource2D::GetDefaultZ());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetRatio_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

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
      op->SetRatio(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetRatio(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_SetRatio_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetRatio(temp0);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_SetRatio(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageCanvasSource2D_SetRatio_s1(self, args);
    case 1:
      return PyvtkImageCanvasSource2D_SetRatio_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRatio");
  return nullptr;
}



static PyObject *
PyvtkImageCanvasSource2D_GetRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRatio() :
      op->vtkImageCanvasSource2D::GetRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfScalarComponents(temp0);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetNumberOfScalarComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_GetNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarComponents() :
      op->vtkImageCanvasSource2D::GetNumberOfScalarComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToFloat();
    }
    else
    {
      op->vtkImageCanvasSource2D::SetScalarTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToDouble();
    }
    else
    {
      op->vtkImageCanvasSource2D::SetScalarTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToInt();
    }
    else
    {
      op->vtkImageCanvasSource2D::SetScalarTypeToInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedInt();
    }
    else
    {
      op->vtkImageCanvasSource2D::SetScalarTypeToUnsignedInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToLong();
    }
    else
    {
      op->vtkImageCanvasSource2D::SetScalarTypeToLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedLong();
    }
    else
    {
      op->vtkImageCanvasSource2D::SetScalarTypeToUnsignedLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToShort();
    }
    else
    {
      op->vtkImageCanvasSource2D::SetScalarTypeToShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedShort();
    }
    else
    {
      op->vtkImageCanvasSource2D::SetScalarTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedChar();
    }
    else
    {
      op->vtkImageCanvasSource2D::SetScalarTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToChar();
    }
    else
    {
      op->vtkImageCanvasSource2D::SetScalarTypeToChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarType(temp0);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_GetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarType() :
      op->vtkImageCanvasSource2D::GetScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageCanvasSource2D_Methods[] = {
  {"IsTypeOf", PyvtkImageCanvasSource2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageCanvasSource2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageCanvasSource2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageCanvasSource2D\nC++: static vtkImageCanvasSource2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageCanvasSource2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageCanvasSource2D\nC++: vtkImageCanvasSource2D *NewInstance()\n\n"},
  {"SetDrawColor", PyvtkImageCanvasSource2D_SetDrawColor, METH_VARARGS,
   "V.SetDrawColor(float, float, float, float)\nC++: void SetDrawColor(double, double, double, double)\nV.SetDrawColor((float, float, float, float))\nC++: void SetDrawColor(double a[4])\nV.SetDrawColor(float)\nC++: void SetDrawColor(double a)\nV.SetDrawColor(float, float)\nC++: void SetDrawColor(double a, double b)\nV.SetDrawColor(float, float, float)\nC++: void SetDrawColor(double a, double b, double c)\n\n"},
  {"GetDrawColor", PyvtkImageCanvasSource2D_GetDrawColor, METH_VARARGS,
   "V.GetDrawColor() -> (float, float, float, float)\nC++: double *GetDrawColor()\n\n"},
  {"InitializeCanvasVolume", PyvtkImageCanvasSource2D_InitializeCanvasVolume, METH_VARARGS,
   "V.InitializeCanvasVolume(vtkImageData)\nC++: void InitializeCanvasVolume(vtkImageData *volume)\n\nInitialize the canvas with a given volume\n"},
  {"FillBox", PyvtkImageCanvasSource2D_FillBox, METH_VARARGS,
   "V.FillBox(int, int, int, int)\nC++: void FillBox(int min0, int max0, int min1, int max1)\n\nSet the pixels inside the box (min0, max0, min1, max1) to the\ncurrent DrawColor\n"},
  {"FillTube", PyvtkImageCanvasSource2D_FillTube, METH_VARARGS,
   "V.FillTube(int, int, int, int, float)\nC++: void FillTube(int x0, int y0, int x1, int y1, double radius)\n\nSet the pixels inside the box (min0, max0, min1, max1) to the\ncurrent DrawColor\n"},
  {"FillTriangle", PyvtkImageCanvasSource2D_FillTriangle, METH_VARARGS,
   "V.FillTriangle(int, int, int, int, int, int)\nC++: void FillTriangle(int x0, int y0, int x1, int y1, int x2,\n    int y2)\n\nSet the pixels inside the box (min0, max0, min1, max1) to the\ncurrent DrawColor\n"},
  {"DrawCircle", PyvtkImageCanvasSource2D_DrawCircle, METH_VARARGS,
   "V.DrawCircle(int, int, float)\nC++: void DrawCircle(int c0, int c1, double radius)\n\nSet the pixels inside the box (min0, max0, min1, max1) to the\ncurrent DrawColor\n"},
  {"DrawPoint", PyvtkImageCanvasSource2D_DrawPoint, METH_VARARGS,
   "V.DrawPoint(int, int)\nC++: void DrawPoint(int p0, int p1)\n\nSet the pixels inside the box (min0, max0, min1, max1) to the\ncurrent DrawColor\n"},
  {"DrawSegment", PyvtkImageCanvasSource2D_DrawSegment, METH_VARARGS,
   "V.DrawSegment(int, int, int, int)\nC++: void DrawSegment(int x0, int y0, int x1, int y1)\n\nSet the pixels inside the box (min0, max0, min1, max1) to the\ncurrent DrawColor\n"},
  {"DrawSegment3D", PyvtkImageCanvasSource2D_DrawSegment3D, METH_VARARGS,
   "V.DrawSegment3D([float, ...], [float, ...])\nC++: void DrawSegment3D(double *p0, double *p1)\nV.DrawSegment3D(float, float, float, float, float, float)\nC++: void DrawSegment3D(double x1, double y1, double z1,\n    double x2, double y2, double z2)\n\nSet the pixels inside the box (min0, max0, min1, max1) to the\ncurrent DrawColor\n"},
  {"DrawImage", PyvtkImageCanvasSource2D_DrawImage, METH_VARARGS,
   "V.DrawImage(int, int, vtkImageData)\nC++: void DrawImage(int x0, int y0, vtkImageData *i)\nV.DrawImage(int, int, vtkImageData, int, int, int, int)\nC++: void DrawImage(int x0, int y0, vtkImageData *, int sx,\n    int sy, int width, int height)\n\nDraw subimage of the input image in the canvas at position x0 and\ny0. The subimage is defined with sx, sy, width, and height.\n"},
  {"FillPixel", PyvtkImageCanvasSource2D_FillPixel, METH_VARARGS,
   "V.FillPixel(int, int)\nC++: void FillPixel(int x, int y)\n\nFill a colored area with another color. (like connectivity) All\npixels connected (and with the same value) to pixel (x, y) get\nreplaced by the current \"DrawColor\".\n"},
  {"SetExtent", PyvtkImageCanvasSource2D_SetExtent, METH_VARARGS,
   "V.SetExtent([int, ...])\nC++: void SetExtent(int *extent)\nV.SetExtent(int, int, int, int, int, int)\nC++: void SetExtent(int x1, int x2, int y1, int y2, int z1,\n    int z2)\n\nThese methods set the WholeExtent of the output It sets the size\nof the canvas. Extent is a min max 3D box.  Minimums and maximums\nare inclusive.\n"},
  {"SetDefaultZ", PyvtkImageCanvasSource2D_SetDefaultZ, METH_VARARGS,
   "V.SetDefaultZ(int)\nC++: virtual void SetDefaultZ(int _arg)\n\nThe drawing operations can only draw into one 2D XY plane at a\ntime. If the canvas is a 3D volume, then this z value is used as\nthe default for 2D operations. The default is 0.\n"},
  {"GetDefaultZ", PyvtkImageCanvasSource2D_GetDefaultZ, METH_VARARGS,
   "V.GetDefaultZ() -> int\nC++: virtual int GetDefaultZ()\n\nThe drawing operations can only draw into one 2D XY plane at a\ntime. If the canvas is a 3D volume, then this z value is used as\nthe default for 2D operations. The default is 0.\n"},
  {"SetRatio", PyvtkImageCanvasSource2D_SetRatio, METH_VARARGS,
   "V.SetRatio(float, float, float)\nC++: void SetRatio(double, double, double)\nV.SetRatio((float, float, float))\nC++: void SetRatio(double a[3])\n\n"},
  {"GetRatio", PyvtkImageCanvasSource2D_GetRatio, METH_VARARGS,
   "V.GetRatio() -> (float, float, float)\nC++: double *GetRatio()\n\n"},
  {"SetNumberOfScalarComponents", PyvtkImageCanvasSource2D_SetNumberOfScalarComponents, METH_VARARGS,
   "V.SetNumberOfScalarComponents(int)\nC++: virtual void SetNumberOfScalarComponents(int i)\n\nSet the number of scalar components\n"},
  {"GetNumberOfScalarComponents", PyvtkImageCanvasSource2D_GetNumberOfScalarComponents, METH_VARARGS,
   "V.GetNumberOfScalarComponents() -> int\nC++: virtual int GetNumberOfScalarComponents()\n\nSet the number of scalar components\n"},
  {"SetScalarTypeToFloat", PyvtkImageCanvasSource2D_SetScalarTypeToFloat, METH_VARARGS,
   "V.SetScalarTypeToFloat()\nC++: void SetScalarTypeToFloat()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {"SetScalarTypeToDouble", PyvtkImageCanvasSource2D_SetScalarTypeToDouble, METH_VARARGS,
   "V.SetScalarTypeToDouble()\nC++: void SetScalarTypeToDouble()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {"SetScalarTypeToInt", PyvtkImageCanvasSource2D_SetScalarTypeToInt, METH_VARARGS,
   "V.SetScalarTypeToInt()\nC++: void SetScalarTypeToInt()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {"SetScalarTypeToUnsignedInt", PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedInt, METH_VARARGS,
   "V.SetScalarTypeToUnsignedInt()\nC++: void SetScalarTypeToUnsignedInt()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {"SetScalarTypeToLong", PyvtkImageCanvasSource2D_SetScalarTypeToLong, METH_VARARGS,
   "V.SetScalarTypeToLong()\nC++: void SetScalarTypeToLong()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {"SetScalarTypeToUnsignedLong", PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedLong, METH_VARARGS,
   "V.SetScalarTypeToUnsignedLong()\nC++: void SetScalarTypeToUnsignedLong()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {"SetScalarTypeToShort", PyvtkImageCanvasSource2D_SetScalarTypeToShort, METH_VARARGS,
   "V.SetScalarTypeToShort()\nC++: void SetScalarTypeToShort()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {"SetScalarTypeToUnsignedShort", PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedShort, METH_VARARGS,
   "V.SetScalarTypeToUnsignedShort()\nC++: void SetScalarTypeToUnsignedShort()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {"SetScalarTypeToUnsignedChar", PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedChar, METH_VARARGS,
   "V.SetScalarTypeToUnsignedChar()\nC++: void SetScalarTypeToUnsignedChar()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {"SetScalarTypeToChar", PyvtkImageCanvasSource2D_SetScalarTypeToChar, METH_VARARGS,
   "V.SetScalarTypeToChar()\nC++: void SetScalarTypeToChar()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {"SetScalarType", PyvtkImageCanvasSource2D_SetScalarType, METH_VARARGS,
   "V.SetScalarType(int)\nC++: void SetScalarType(int)\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {"GetScalarType", PyvtkImageCanvasSource2D_GetScalarType, METH_VARARGS,
   "V.GetScalarType() -> int\nC++: int GetScalarType()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageCanvasSource2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingSourcesPython.vtkImageCanvasSource2D", // tp_name
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
  PyvtkImageCanvasSource2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageCanvasSource2D_StaticNew()
{
  return vtkImageCanvasSource2D::New();
}

PyObject *PyvtkImageCanvasSource2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageCanvasSource2D_Type, PyvtkImageCanvasSource2D_Methods,
    "vtkImageCanvasSource2D",
 &PyvtkImageCanvasSource2D_StaticNew);

  PyTypeObject *pytype = &PyvtkImageCanvasSource2D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageCanvasSource2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageCanvasSource2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageCanvasSource2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

