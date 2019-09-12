// python wrapper for vtkBoundingRectContextDevice2D
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
#include "vtkRect.h"
#include "vtkStdString.h"
#include "vtkUnicodeString.h"
#include "vtkBoundingRectContextDevice2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBoundingRectContextDevice2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBoundingRectContextDevice2D_ClassNew(); }

#ifndef DECLARED_PyvtkContextDevice2D_ClassNew
extern "C" { PyObject *PyvtkContextDevice2D_ClassNew(); }
#define DECLARED_PyvtkContextDevice2D_ClassNew
#endif

static const char *PyvtkBoundingRectContextDevice2D_Doc =
  "vtkBoundingRectContextDevice2D - no description provided.\n\n"
  "Superclass: vtkContextDevice2D\n\n"
;


static PyObject *
PyvtkBoundingRectContextDevice2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBoundingRectContextDevice2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBoundingRectContextDevice2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBoundingRectContextDevice2D *tempr = vtkBoundingRectContextDevice2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBoundingRectContextDevice2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBoundingRectContextDevice2D::NewInstance());

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
PyvtkBoundingRectContextDevice2D_SetDelegateDevice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDelegateDevice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  vtkContextDevice2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContextDevice2D"))
  {
    if (ap.IsBound())
    {
      op->SetDelegateDevice(temp0);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::SetDelegateDevice(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_GetDelegateDevice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDelegateDevice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContextDevice2D *tempr = (ap.IsBound() ?
      op->GetDelegateDevice() :
      op->vtkBoundingRectContextDevice2D::GetDelegateDevice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_GetBoundingRect_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetBoundingRect");

  vtkAbstractContextItem *temp0 = nullptr;
  vtkViewport *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractContextItem") &&
      ap.GetVTKObject(temp1, "vtkViewport"))
  {
    vtkRectf tempr = vtkBoundingRectContextDevice2D::GetBoundingRect(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingRectContextDevice2D_GetBoundingRect_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectf tempr = (ap.IsBound() ?
      op->GetBoundingRect() :
      op->vtkBoundingRectContextDevice2D::GetBoundingRect());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingRectContextDevice2D_GetBoundingRect(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkBoundingRectContextDevice2D_GetBoundingRect_s1(self, args);
    case 0:
    case 1:
      return PyvtkBoundingRectContextDevice2D_GetBoundingRect_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBoundingRect");
  return nullptr;
}



static PyObject *
PyvtkBoundingRectContextDevice2D_DrawString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DrawString(temp0, temp1);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::DrawString(temp0, temp1);
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
PyvtkBoundingRectContextDevice2D_DrawString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkUnicodeString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DrawString(temp0, temp1);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::DrawString(temp0, temp1);
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

static PyMethodDef PyvtkBoundingRectContextDevice2D_DrawString_Methods[] = {
  {nullptr, PyvtkBoundingRectContextDevice2D_DrawString_s1, METH_VARARGS,
   "@Ps *f"},
  {nullptr, PyvtkBoundingRectContextDevice2D_DrawString_s2, METH_VARARGS,
   "@Pu *f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkBoundingRectContextDevice2D_DrawString(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBoundingRectContextDevice2D_DrawString_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawString");
  return nullptr;
}



static PyObject *
PyvtkBoundingRectContextDevice2D_DrawMathTextString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMathTextString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DrawMathTextString(temp0, temp1);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::DrawMathTextString(temp0, temp1);
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
PyvtkBoundingRectContextDevice2D_DrawImage_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  const size_t size0 = 2;
  float temp0[2];
  float save0[2];
  float temp1;
  vtkImageData *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData"))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DrawImage(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::DrawImage(temp0, temp1, temp2);
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
PyvtkBoundingRectContextDevice2D_DrawImage_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  vtkRectf *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkImageData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectf") &&
      ap.GetVTKObject(temp1, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->DrawImage(*temp0, temp1);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::DrawImage(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkBoundingRectContextDevice2D_DrawImage(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkBoundingRectContextDevice2D_DrawImage_s1(self, args);
    case 2:
      return PyvtkBoundingRectContextDevice2D_DrawImage_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawImage");
  return nullptr;
}



static PyObject *
PyvtkBoundingRectContextDevice2D_DrawPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  const size_t size0 = 2;
  float temp0[2];
  float save0[2];
  float temp1;
  vtkPolyData *temp2 = nullptr;
  vtkUnsignedCharArray *temp3 = nullptr;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPolyData") &&
      ap.GetVTKObject(temp3, "vtkUnsignedCharArray") &&
      ap.GetValue(temp4))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DrawPolyData(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::DrawPolyData(temp0, temp1, temp2, temp3, temp4);
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
PyvtkBoundingRectContextDevice2D_SetColor4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  const size_t size0 = 4;
  unsigned char temp0[4];
  unsigned char save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetColor4(temp0);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::SetColor4(temp0);
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
PyvtkBoundingRectContextDevice2D_SetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  vtkImageData *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTexture(temp0, temp1);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::SetTexture(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_SetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointSize(temp0);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::SetPointSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineWidth(temp0);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::SetLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_SetLineType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineType(temp0);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::SetLineType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_SetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  vtkMatrix3x3 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
  {
    if (ap.IsBound())
    {
      op->SetMatrix(temp0);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::SetMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_GetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  vtkMatrix3x3 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
  {
    if (ap.IsBound())
    {
      op->GetMatrix(temp0);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::GetMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_MultiplyMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  vtkMatrix3x3 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
  {
    if (ap.IsBound())
    {
      op->MultiplyMatrix(temp0);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::MultiplyMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_PushMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PushMatrix();
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::PushMatrix();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_PopMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PopMatrix();
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::PopMatrix();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_EnableClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->EnableClipping(temp0);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::EnableClipping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_SetClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

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
      op->SetClipping(temp0);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::SetClipping(temp0);
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
PyvtkBoundingRectContextDevice2D_ApplyPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  vtkPen *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPen"))
  {
    if (ap.IsBound())
    {
      op->ApplyPen(temp0);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::ApplyPen(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_GetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetPen() :
      op->vtkBoundingRectContextDevice2D::GetPen());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_ApplyBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  vtkBrush *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBrush"))
  {
    if (ap.IsBound())
    {
      op->ApplyBrush(temp0);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::ApplyBrush(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_GetBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBrush *tempr = (ap.IsBound() ?
      op->GetBrush() :
      op->vtkBoundingRectContextDevice2D::GetBrush());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_ApplyTextProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTextProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->ApplyTextProp(temp0);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::ApplyTextProp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_GetTextProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProp() :
      op->vtkBoundingRectContextDevice2D::GetTextProp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_DrawPoly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(2*size2);
  unsigned char *temp2 = store2.Data();
  unsigned char *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->DrawPoly(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::DrawPoly(temp0, temp1, temp2, temp3);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_DrawLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(2*size2);
  unsigned char *temp2 = store2.Data();
  unsigned char *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->DrawLines(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::DrawLines(temp0, temp1, temp2, temp3);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_DrawPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(2*size2);
  unsigned char *temp2 = store2.Data();
  unsigned char *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->DrawPoints(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::DrawPoints(temp0, temp1, temp2, temp3);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_DrawPointSprites(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPointSprites");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  vtkImageData *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<unsigned char> store3(2*size3);
  unsigned char *temp3 = store3.Data();
  unsigned char *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  int temp4 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 5) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetArray(temp3, size3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->DrawPointSprites(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::DrawPointSprites(temp0, temp1, temp2, temp3, temp4);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_DrawMarkers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMarkers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  int temp0;
  bool temp1 = false;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<float> store2(2*size2);
  float *temp2 = store2.Data();
  float *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<unsigned char> store4(2*size4);
  unsigned char *temp4 = store4.Data();
  unsigned char *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetArray(temp4, size4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->DrawMarkers(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::DrawMarkers(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_DrawEllipseWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawEllipseWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  float temp4;
  float temp5;
  float temp6;
  float temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    if (ap.IsBound())
    {
      op->DrawEllipseWedge(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::DrawEllipseWedge(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_DrawEllipticArc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawEllipticArc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  float temp4;
  float temp5;
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
      op->DrawEllipticArc(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::DrawEllipticArc(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_ComputeStringBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStringBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  vtkStdString temp0;
  const size_t size1 = 4;
  float temp1[4];
  float save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->ComputeStringBounds(temp0, temp1);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::ComputeStringBounds(temp0, temp1);
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
PyvtkBoundingRectContextDevice2D_ComputeStringBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStringBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  vtkUnicodeString temp0;
  const size_t size1 = 4;
  float temp1[4];
  float save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->ComputeStringBounds(temp0, temp1);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::ComputeStringBounds(temp0, temp1);
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

static PyMethodDef PyvtkBoundingRectContextDevice2D_ComputeStringBounds_Methods[] = {
  {nullptr, PyvtkBoundingRectContextDevice2D_ComputeStringBounds_s1, METH_VARARGS,
   "@sP *f"},
  {nullptr, PyvtkBoundingRectContextDevice2D_ComputeStringBounds_s2, METH_VARARGS,
   "@uP *f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkBoundingRectContextDevice2D_ComputeStringBounds(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBoundingRectContextDevice2D_ComputeStringBounds_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeStringBounds");
  return nullptr;
}



static PyObject *
PyvtkBoundingRectContextDevice2D_ComputeJustifiedStringBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeJustifiedStringBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 4;
  float temp1[4];
  float save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->ComputeJustifiedStringBounds(temp0, temp1);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::ComputeJustifiedStringBounds(temp0, temp1);
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
PyvtkBoundingRectContextDevice2D_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->Begin(temp0);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::Begin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_End(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "End");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->End();
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::End();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_GetBufferIdMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBufferIdMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBufferIdMode() :
      op->vtkBoundingRectContextDevice2D::GetBufferIdMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_BufferIdModeBegin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BufferIdModeBegin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  vtkAbstractContextBufferId *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractContextBufferId"))
  {
    if (ap.IsBound())
    {
      op->BufferIdModeBegin(temp0);
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::BufferIdModeBegin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingRectContextDevice2D_BufferIdModeEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BufferIdModeEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundingRectContextDevice2D *op = static_cast<vtkBoundingRectContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BufferIdModeEnd();
    }
    else
    {
      op->vtkBoundingRectContextDevice2D::BufferIdModeEnd();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBoundingRectContextDevice2D_Methods[] = {
  {"IsTypeOf", PyvtkBoundingRectContextDevice2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBoundingRectContextDevice2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBoundingRectContextDevice2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBoundingRectContextDevice2D\nC++: static vtkBoundingRectContextDevice2D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBoundingRectContextDevice2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBoundingRectContextDevice2D\nC++: vtkBoundingRectContextDevice2D *NewInstance()\n\n"},
  {"SetDelegateDevice", PyvtkBoundingRectContextDevice2D_SetDelegateDevice, METH_VARARGS,
   "V.SetDelegateDevice(vtkContextDevice2D)\nC++: virtual void SetDelegateDevice(vtkContextDevice2D *_arg)\n\nSet/get delegate device used to compute bounding boxes around\nstrings.\n"},
  {"GetDelegateDevice", PyvtkBoundingRectContextDevice2D_GetDelegateDevice, METH_VARARGS,
   "V.GetDelegateDevice() -> vtkContextDevice2D\nC++: virtual vtkContextDevice2D *GetDelegateDevice()\n\n"},
  {"Reset", PyvtkBoundingRectContextDevice2D_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nReset the bounding box.\n"},
  {"GetBoundingRect", PyvtkBoundingRectContextDevice2D_GetBoundingRect, METH_VARARGS,
   "V.GetBoundingRect(vtkAbstractContextItem, vtkViewport) -> vtkRectf\nC++: static vtkRectf GetBoundingRect(vtkAbstractContextItem *item,\n     vtkViewport *viewport)\nV.GetBoundingRect() -> vtkRectf\nC++: vtkRectf GetBoundingRect()\n\nGet the bounding rect that contains the given\nvtkAbstractContextItem.\n"},
  {"DrawString", PyvtkBoundingRectContextDevice2D_DrawString, METH_VARARGS,
   "V.DrawString([float, ...], string)\nC++: void DrawString(float *point, const vtkStdString &string)\n    override;\nV.DrawString([float, ...], unicode)\nC++: void DrawString(float *point, const vtkUnicodeString &string)\n     override;\n\nExpand bounding box to contain the string's bounding box.\n"},
  {"DrawMathTextString", PyvtkBoundingRectContextDevice2D_DrawMathTextString, METH_VARARGS,
   "V.DrawMathTextString([float, ...], string)\nC++: void DrawMathTextString(float *point,\n    const vtkStdString &string) override;\n\nExpand bounding box to contain the string's bounding box.\n"},
  {"DrawImage", PyvtkBoundingRectContextDevice2D_DrawImage, METH_VARARGS,
   "V.DrawImage([float, float], float, vtkImageData)\nC++: void DrawImage(float p[2], float scale, vtkImageData *image)\n    override;\nV.DrawImage(vtkRectf, vtkImageData)\nC++: void DrawImage(const vtkRectf &pos, vtkImageData *image)\n    override;\n\nExpand bounding box to contain the image's bounding box.\n"},
  {"DrawPolyData", PyvtkBoundingRectContextDevice2D_DrawPolyData, METH_VARARGS,
   "V.DrawPolyData([float, float], float, vtkPolyData,\n    vtkUnsignedCharArray, int)\nC++: void DrawPolyData(float p[2], float scale,\n    vtkPolyData *polyData, vtkUnsignedCharArray *colors,\n    int scalarMode) override;\n\nDraw the supplied PolyData at the given x, y (p[0], p[1]) (bottom\ncorner), scaled by scale (1.0 would match the actual dataset).\n@warning Not currently implemented.\n"},
  {"SetColor4", PyvtkBoundingRectContextDevice2D_SetColor4, METH_VARARGS,
   "V.SetColor4([int, int, int, int])\nC++: void SetColor4(unsigned char color[4]) override;\n\nImplement pure virtual member function. Does not affect bounding\nrect.\n"},
  {"SetTexture", PyvtkBoundingRectContextDevice2D_SetTexture, METH_VARARGS,
   "V.SetTexture(vtkImageData, int)\nC++: void SetTexture(vtkImageData *image, int properties)\n    override;\n\nImplement pure virtual member function. Does not affect bounding\nrect.\n"},
  {"SetPointSize", PyvtkBoundingRectContextDevice2D_SetPointSize, METH_VARARGS,
   "V.SetPointSize(float)\nC++: void SetPointSize(float size) override;\n\nImplement pure virtual member function. Does not affect bounding\nrect.\n"},
  {"SetLineWidth", PyvtkBoundingRectContextDevice2D_SetLineWidth, METH_VARARGS,
   "V.SetLineWidth(float)\nC++: void SetLineWidth(float width) override;\n\nImplement pure virtual member function. Forward line width to\ndelegate device.\n"},
  {"SetLineType", PyvtkBoundingRectContextDevice2D_SetLineType, METH_VARARGS,
   "V.SetLineType(int)\nC++: void SetLineType(int type) override;\n\nImplement pure virtual member function. Forward line type to\ndelegate device.\n"},
  {"SetMatrix", PyvtkBoundingRectContextDevice2D_SetMatrix, METH_VARARGS,
   "V.SetMatrix(vtkMatrix3x3)\nC++: void SetMatrix(vtkMatrix3x3 *m) override;\n\nForward current matrix to delegate device.\n"},
  {"GetMatrix", PyvtkBoundingRectContextDevice2D_GetMatrix, METH_VARARGS,
   "V.GetMatrix(vtkMatrix3x3)\nC++: void GetMatrix(vtkMatrix3x3 *m) override;\n\nGet current matrix from delegate device.\n"},
  {"MultiplyMatrix", PyvtkBoundingRectContextDevice2D_MultiplyMatrix, METH_VARARGS,
   "V.MultiplyMatrix(vtkMatrix3x3)\nC++: void MultiplyMatrix(vtkMatrix3x3 *m) override;\n\nMultiply the current matrix in the delegate device by this one.\n"},
  {"PushMatrix", PyvtkBoundingRectContextDevice2D_PushMatrix, METH_VARARGS,
   "V.PushMatrix()\nC++: void PushMatrix() override;\n\nPush matrix in the delegate device.\n"},
  {"PopMatrix", PyvtkBoundingRectContextDevice2D_PopMatrix, METH_VARARGS,
   "V.PopMatrix()\nC++: void PopMatrix() override;\n\nPope matrix from the delegate device.\n"},
  {"EnableClipping", PyvtkBoundingRectContextDevice2D_EnableClipping, METH_VARARGS,
   "V.EnableClipping(bool)\nC++: void EnableClipping(bool enable) override;\n\nImplement pure virtual member function. Does nothing.\n"},
  {"SetClipping", PyvtkBoundingRectContextDevice2D_SetClipping, METH_VARARGS,
   "V.SetClipping([int, ...])\nC++: void SetClipping(int *x) override;\n\nImplement pure virtual member function. Does nothing.\n"},
  {"ApplyPen", PyvtkBoundingRectContextDevice2D_ApplyPen, METH_VARARGS,
   "V.ApplyPen(vtkPen)\nC++: void ApplyPen(vtkPen *pen) override;\n\nForward the pen to the delegate device.\n"},
  {"GetPen", PyvtkBoundingRectContextDevice2D_GetPen, METH_VARARGS,
   "V.GetPen() -> vtkPen\nC++: vtkPen *GetPen() override;\n\nGet the pen from the delegate device.\n"},
  {"ApplyBrush", PyvtkBoundingRectContextDevice2D_ApplyBrush, METH_VARARGS,
   "V.ApplyBrush(vtkBrush)\nC++: void ApplyBrush(vtkBrush *brush) override;\n\nForward the brush to the delegate device.\n"},
  {"GetBrush", PyvtkBoundingRectContextDevice2D_GetBrush, METH_VARARGS,
   "V.GetBrush() -> vtkBrush\nC++: vtkBrush *GetBrush() override;\n\nGet the brush from the delegate device.\n"},
  {"ApplyTextProp", PyvtkBoundingRectContextDevice2D_ApplyTextProp, METH_VARARGS,
   "V.ApplyTextProp(vtkTextProperty)\nC++: void ApplyTextProp(vtkTextProperty *prop) override;\n\nForward the text property to the delegate device.\n"},
  {"GetTextProp", PyvtkBoundingRectContextDevice2D_GetTextProp, METH_VARARGS,
   "V.GetTextProp() -> vtkTextProperty\nC++: vtkTextProperty *GetTextProp() override;\n\nGet the text property from the delegate device.\n"},
  {"DrawPoly", PyvtkBoundingRectContextDevice2D_DrawPoly, METH_VARARGS,
   "V.DrawPoly([float, ...], int, [int, ...], int)\nC++: void DrawPoly(float *points, int n, unsigned char *colors=0,\n    int nc_comps=0) override;\n\nExpand bounding box to contain the given polygon.\n"},
  {"DrawLines", PyvtkBoundingRectContextDevice2D_DrawLines, METH_VARARGS,
   "V.DrawLines([float, ...], int, [int, ...], int)\nC++: void DrawLines(float *f, int n, unsigned char *colors=0,\n    int nc_comps=0) override;\n\nExpand bounding rect to contain the given lines.\n"},
  {"DrawPoints", PyvtkBoundingRectContextDevice2D_DrawPoints, METH_VARARGS,
   "V.DrawPoints([float, ...], int, [int, ...], int)\nC++: void DrawPoints(float *points, int n,\n    unsigned char *colors=0, int nc_comps=0) override;\n\nExpand bounding rect to contain the given points.\n"},
  {"DrawPointSprites", PyvtkBoundingRectContextDevice2D_DrawPointSprites, METH_VARARGS,
   "V.DrawPointSprites(vtkImageData, [float, ...], int, [int, ...],\n    int)\nC++: void DrawPointSprites(vtkImageData *sprite, float *points,\n    int n, unsigned char *colors=0, int nc_comps=0) override;\n\nExpand bounding rect to contain the point sprites.\n"},
  {"DrawMarkers", PyvtkBoundingRectContextDevice2D_DrawMarkers, METH_VARARGS,
   "V.DrawMarkers(int, bool, [float, ...], int, [int, ...], int)\nC++: void DrawMarkers(int shape, bool highlight, float *points,\n    int n, unsigned char *colors=0, int nc_comps=0) override;\n\nExpand bounding rect to contain the markers.\n"},
  {"DrawEllipseWedge", PyvtkBoundingRectContextDevice2D_DrawEllipseWedge, METH_VARARGS,
   "V.DrawEllipseWedge(float, float, float, float, float, float,\n    float, float)\nC++: void DrawEllipseWedge(float x, float y, float outRx,\n    float outRy, float inRx, float inRy, float startAngle,\n    float stopAngle) override;\n\nExpand bounding rect to contain the ellipse.\n"},
  {"DrawEllipticArc", PyvtkBoundingRectContextDevice2D_DrawEllipticArc, METH_VARARGS,
   "V.DrawEllipticArc(float, float, float, float, float, float)\nC++: void DrawEllipticArc(float x, float y, float rX, float rY,\n    float startAngle, float stopAngle) override;\n\nExpand bounding rect to contain the elliptic arc.\n"},
  {"ComputeStringBounds", PyvtkBoundingRectContextDevice2D_ComputeStringBounds, METH_VARARGS,
   "V.ComputeStringBounds(string, [float, float, float, float])\nC++: void ComputeStringBounds(const vtkStdString &string,\n    float bounds[4]) override;\nV.ComputeStringBounds(unicode, [float, float, float, float])\nC++: void ComputeStringBounds(const vtkUnicodeString &string,\n    float bounds[4]) override;\n\nForward string bounds calculation to the delegate device.\n"},
  {"ComputeJustifiedStringBounds", PyvtkBoundingRectContextDevice2D_ComputeJustifiedStringBounds, METH_VARARGS,
   "V.ComputeJustifiedStringBounds(string, [float, float, float,\n    float])\nC++: void ComputeJustifiedStringBounds(const char *string,\n    float bounds[4]) override;\n\nForward string bounds calculation to the delegate device.\n"},
  {"Begin", PyvtkBoundingRectContextDevice2D_Begin, METH_VARARGS,
   "V.Begin(vtkViewport)\nC++: void Begin(vtkViewport *) override;\n\nCall before drawing to this device.\n"},
  {"End", PyvtkBoundingRectContextDevice2D_End, METH_VARARGS,
   "V.End()\nC++: void End() override;\n\nCall after drawing to this device.\n"},
  {"GetBufferIdMode", PyvtkBoundingRectContextDevice2D_GetBufferIdMode, METH_VARARGS,
   "V.GetBufferIdMode() -> bool\nC++: bool GetBufferIdMode() override;\n\nGet value from delegate device.\n"},
  {"BufferIdModeBegin", PyvtkBoundingRectContextDevice2D_BufferIdModeBegin, METH_VARARGS,
   "V.BufferIdModeBegin(vtkAbstractContextBufferId)\nC++: void BufferIdModeBegin(vtkAbstractContextBufferId *bufferId)\n    override;\n\nBegin ID buffering mode.\n"},
  {"BufferIdModeEnd", PyvtkBoundingRectContextDevice2D_BufferIdModeEnd, METH_VARARGS,
   "V.BufferIdModeEnd()\nC++: void BufferIdModeEnd() override;\n\nEnd ID buffering mode.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBoundingRectContextDevice2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkBoundingRectContextDevice2D", // tp_name
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
  PyvtkBoundingRectContextDevice2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBoundingRectContextDevice2D_StaticNew()
{
  return vtkBoundingRectContextDevice2D::New();
}

PyObject *PyvtkBoundingRectContextDevice2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBoundingRectContextDevice2D_Type, PyvtkBoundingRectContextDevice2D_Methods,
    "vtkBoundingRectContextDevice2D",
 &PyvtkBoundingRectContextDevice2D_StaticNew);

  PyTypeObject *pytype = &PyvtkBoundingRectContextDevice2D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkContextDevice2D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBoundingRectContextDevice2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBoundingRectContextDevice2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBoundingRectContextDevice2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

