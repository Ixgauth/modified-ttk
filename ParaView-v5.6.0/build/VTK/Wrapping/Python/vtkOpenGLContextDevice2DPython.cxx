// python wrapper for vtkOpenGLContextDevice2D
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
#include "vtkUnicodeString.h"
#include "vtkRect.h"
#include "vtkOpenGLContextDevice2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLContextDevice2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLContextDevice2D_ClassNew(); }

#ifndef DECLARED_PyvtkContextDevice2D_ClassNew
extern "C" { PyObject *PyvtkContextDevice2D_ClassNew(); }
#define DECLARED_PyvtkContextDevice2D_ClassNew
#endif

static const char *PyvtkOpenGLContextDevice2D_Doc =
  "vtkOpenGLContextDevice2D - Class for drawing 2D primitives using\nOpenGL 1.1+.\n\n"
  "Superclass: vtkContextDevice2D\n\n"
  "This class takes care of drawing the 2D primitives for the\n"
  "vtkContext2D class. In general this class should not be used\n"
  "directly, but called by vtkContext2D which takes care of many of the\n"
  "higher level details.\n\n"
  "@sa\n"
  "vtkOpenGL2ContextDevice2D\n\n";


static PyObject *
PyvtkOpenGLContextDevice2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLContextDevice2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLContextDevice2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLContextDevice2D *tempr = vtkOpenGLContextDevice2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLContextDevice2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLContextDevice2D::NewInstance());

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
PyvtkOpenGLContextDevice2D_DrawPoly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::DrawPoly(temp0, temp1, temp2, temp3);
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
PyvtkOpenGLContextDevice2D_DrawLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::DrawLines(temp0, temp1, temp2, temp3);
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
PyvtkOpenGLContextDevice2D_DrawPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::DrawPoints(temp0, temp1, temp2, temp3);
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
PyvtkOpenGLContextDevice2D_DrawPointSprites(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPointSprites");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::DrawPointSprites(temp0, temp1, temp2, temp3, temp4);
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
PyvtkOpenGLContextDevice2D_DrawMarkers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMarkers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::DrawMarkers(temp0, temp1, temp2, temp3, temp4, temp5);
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
PyvtkOpenGLContextDevice2D_SetMaximumMarkerCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumMarkerCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumMarkerCacheSize(temp0);
    }
    else
    {
      op->vtkOpenGLContextDevice2D::SetMaximumMarkerCacheSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_GetMaximumMarkerCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumMarkerCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumMarkerCacheSize() :
      op->vtkOpenGLContextDevice2D::GetMaximumMarkerCacheSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_DrawQuad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DrawQuad(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLContextDevice2D::DrawQuad(temp0, temp1);
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
PyvtkOpenGLContextDevice2D_DrawQuadStrip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawQuadStrip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DrawQuadStrip(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLContextDevice2D::DrawQuadStrip(temp0, temp1);
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
PyvtkOpenGLContextDevice2D_DrawPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DrawPolygon(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLContextDevice2D::DrawPolygon(temp0, temp1);
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
PyvtkOpenGLContextDevice2D_DrawColoredPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawColoredPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->DrawColoredPolygon(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLContextDevice2D::DrawColoredPolygon(temp0, temp1, temp2, temp3);
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
PyvtkOpenGLContextDevice2D_DrawEllipseWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawEllipseWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::DrawEllipseWedge(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_DrawEllipticArc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawEllipticArc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::DrawEllipticArc(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_DrawString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::DrawString(temp0, temp1);
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
PyvtkOpenGLContextDevice2D_DrawString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::DrawString(temp0, temp1);
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

static PyMethodDef PyvtkOpenGLContextDevice2D_DrawString_Methods[] = {
  {nullptr, PyvtkOpenGLContextDevice2D_DrawString_s1, METH_VARARGS,
   "@Ps *f"},
  {nullptr, PyvtkOpenGLContextDevice2D_DrawString_s2, METH_VARARGS,
   "@Pu *f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLContextDevice2D_DrawString(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLContextDevice2D_DrawString_Methods;
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
PyvtkOpenGLContextDevice2D_ComputeStringBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStringBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::ComputeStringBounds(temp0, temp1);
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
PyvtkOpenGLContextDevice2D_ComputeStringBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStringBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::ComputeStringBounds(temp0, temp1);
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

static PyMethodDef PyvtkOpenGLContextDevice2D_ComputeStringBounds_Methods[] = {
  {nullptr, PyvtkOpenGLContextDevice2D_ComputeStringBounds_s1, METH_VARARGS,
   "@sP *f"},
  {nullptr, PyvtkOpenGLContextDevice2D_ComputeStringBounds_s2, METH_VARARGS,
   "@uP *f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLContextDevice2D_ComputeStringBounds(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLContextDevice2D_ComputeStringBounds_Methods;
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
PyvtkOpenGLContextDevice2D_ComputeJustifiedStringBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeJustifiedStringBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::ComputeJustifiedStringBounds(temp0, temp1);
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
PyvtkOpenGLContextDevice2D_DrawMathTextString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMathTextString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

  const size_t size0 = 2;
  float temp0[2];
  float save0[2];
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
      op->vtkOpenGLContextDevice2D::DrawMathTextString(temp0, temp1);
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
PyvtkOpenGLContextDevice2D_DrawImage_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::DrawImage(temp0, temp1, temp2);
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
PyvtkOpenGLContextDevice2D_DrawImage_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::DrawImage(*temp0, temp1);
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
PyvtkOpenGLContextDevice2D_DrawImage(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkOpenGLContextDevice2D_DrawImage_s1(self, args);
    case 2:
      return PyvtkOpenGLContextDevice2D_DrawImage_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawImage");
  return nullptr;
}



static PyObject *
PyvtkOpenGLContextDevice2D_DrawPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::DrawPolyData(temp0, temp1, temp2, temp3, temp4);
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
PyvtkOpenGLContextDevice2D_SetColor4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::SetColor4(temp0);
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
PyvtkOpenGLContextDevice2D_SetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

  const size_t size0 = 3;
  unsigned char temp0[3];
  unsigned char save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetColor(temp0);
    }
    else
    {
      op->vtkOpenGLContextDevice2D::SetColor(temp0);
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
PyvtkOpenGLContextDevice2D_SetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

  vtkImageData *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetTexture(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLContextDevice2D::SetTexture(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_SetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::SetPointSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::SetLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_SetLineType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::SetLineType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_MultiplyMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::MultiplyMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_SetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::SetMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_GetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::GetMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_PushMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PushMatrix();
    }
    else
    {
      op->vtkOpenGLContextDevice2D::PushMatrix();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_PopMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PopMatrix();
    }
    else
    {
      op->vtkOpenGLContextDevice2D::PopMatrix();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_SetClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::SetClipping(temp0);
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
PyvtkOpenGLContextDevice2D_EnableClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::EnableClipping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::Begin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_End(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "End");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->End();
    }
    else
    {
      op->vtkOpenGLContextDevice2D::End();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_BufferIdModeBegin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BufferIdModeBegin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::BufferIdModeBegin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_BufferIdModeEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BufferIdModeEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BufferIdModeEnd();
    }
    else
    {
      op->vtkOpenGLContextDevice2D::BufferIdModeEnd();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_SetStringRendererToFreeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStringRendererToFreeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetStringRendererToFreeType() :
      op->vtkOpenGLContextDevice2D::SetStringRendererToFreeType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_SetStringRendererToQt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStringRendererToQt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetStringRendererToQt() :
      op->vtkOpenGLContextDevice2D::SetStringRendererToQt());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_HasGLSL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasGLSL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasGLSL() :
      op->vtkOpenGLContextDevice2D::HasGLSL());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkOpenGLContextDevice2D::GetRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

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
      op->vtkOpenGLContextDevice2D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_GetProjectionMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetProjectionMatrix() :
      op->vtkOpenGLContextDevice2D::GetProjectionMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice2D_GetModelMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice2D *op = static_cast<vtkOpenGLContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetModelMatrix() :
      op->vtkOpenGLContextDevice2D::GetModelMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLContextDevice2D_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLContextDevice2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLContextDevice2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLContextDevice2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOpenGLContextDevice2D\nC++: static vtkOpenGLContextDevice2D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLContextDevice2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOpenGLContextDevice2D\nC++: vtkOpenGLContextDevice2D *NewInstance()\n\n"},
  {"DrawPoly", PyvtkOpenGLContextDevice2D_DrawPoly, METH_VARARGS,
   "V.DrawPoly([float, ...], int, [int, ...], int)\nC++: void DrawPoly(float *f, int n, unsigned char *colors=nullptr,\n     int nc_comps=0) override;\n\nDraw a poly line using the points - fastest code path due to\nmemory layout of the coordinates. The line will be colored by\ncolors array which has nc_comps components\n"},
  {"DrawLines", PyvtkOpenGLContextDevice2D_DrawLines, METH_VARARGS,
   "V.DrawLines([float, ...], int, [int, ...], int)\nC++: void DrawLines(float *f, int n,\n    unsigned char *colors=nullptr, int nc_comps=0) override;\n\nDraw lines using the points - memory layout is as follows:\nl1p1,l1p2,l2p1,l2p2... The lines will be colored by colors array\nwhich has nc_comps components.\n\\sa DrawPoly()\n"},
  {"DrawPoints", PyvtkOpenGLContextDevice2D_DrawPoints, METH_VARARGS,
   "V.DrawPoints([float, ...], int, [int, ...], int)\nC++: void DrawPoints(float *points, int n,\n    unsigned char *colors=nullptr, int nc_comps=0) override;\n\nDraw a series of points - fastest code path due to memory layout\nof the coordinates. Points are colored by colors array which has\nnc_comps components\n"},
  {"DrawPointSprites", PyvtkOpenGLContextDevice2D_DrawPointSprites, METH_VARARGS,
   "V.DrawPointSprites(vtkImageData, [float, ...], int, [int, ...],\n    int)\nC++: void DrawPointSprites(vtkImageData *sprite, float *points,\n    int n, unsigned char *colors=nullptr, int nc_comps=0)\n    override;\n\nDraw a series of point sprites, images centred at the points\nsupplied. The supplied vtkImageData is the sprite to be drawn,\nonly squares will be drawn and the size is set using\nSetPointSize. Points are colored by colors array which has\nnc_comps components - this part is optional.\n"},
  {"DrawMarkers", PyvtkOpenGLContextDevice2D_DrawMarkers, METH_VARARGS,
   "V.DrawMarkers(int, bool, [float, ...], int, [int, ...], int)\nC++: void DrawMarkers(int shape, bool highlight, float *points,\n    int n, unsigned char *colors=nullptr, int nc_comps=0)\n    override;\n\nDraw a series of markers centered at the points supplied. The\nshape argument controls the marker shape, and can be one of\n- VTK_MARKER_CROSS\n- VTK_MARKER_PLUS\n- VTK_MARKER_SQUARE\n- VTK_MARKER_CIRCLE\n- VTK_MARKER_DIAMOND\n\\param colors is an optional array of colors.\n\\param nc_comps is the number of components for the color.\n"},
  {"SetMaximumMarkerCacheSize", PyvtkOpenGLContextDevice2D_SetMaximumMarkerCacheSize, METH_VARARGS,
   "V.SetMaximumMarkerCacheSize(int)\nC++: virtual void SetMaximumMarkerCacheSize(int _arg)\n\nAdjust the size of the MarkerCache. This implementation generates\npoint sprites for each mark size/shape and uses DrawPointSprites\nto render them. The number of cached markers can be accessed with\nthis function.\n"},
  {"GetMaximumMarkerCacheSize", PyvtkOpenGLContextDevice2D_GetMaximumMarkerCacheSize, METH_VARARGS,
   "V.GetMaximumMarkerCacheSize() -> int\nC++: virtual int GetMaximumMarkerCacheSize()\n\nAdjust the size of the MarkerCache. This implementation generates\npoint sprites for each mark size/shape and uses DrawPointSprites\nto render them. The number of cached markers can be accessed with\nthis function.\n"},
  {"DrawQuad", PyvtkOpenGLContextDevice2D_DrawQuad, METH_VARARGS,
   "V.DrawQuad([float, ...], int)\nC++: void DrawQuad(float *points, int n) override;\n\nDraws a rectangle\n"},
  {"DrawQuadStrip", PyvtkOpenGLContextDevice2D_DrawQuadStrip, METH_VARARGS,
   "V.DrawQuadStrip([float, ...], int)\nC++: void DrawQuadStrip(float *points, int n) override;\n\nDraws a rectangle\n"},
  {"DrawPolygon", PyvtkOpenGLContextDevice2D_DrawPolygon, METH_VARARGS,
   "V.DrawPolygon([float, ...], int)\nC++: void DrawPolygon(float *, int) override;\n\nDraw a polygon using the specified number of points.\n"},
  {"DrawColoredPolygon", PyvtkOpenGLContextDevice2D_DrawColoredPolygon, METH_VARARGS,
   "V.DrawColoredPolygon([float, ...], int, [int, ...], int)\nC++: void DrawColoredPolygon(float *points, int numPoints,\n    unsigned char *colors=nullptr, int nc_comps=0) override;\n\n"},
  {"DrawEllipseWedge", PyvtkOpenGLContextDevice2D_DrawEllipseWedge, METH_VARARGS,
   "V.DrawEllipseWedge(float, float, float, float, float, float,\n    float, float)\nC++: void DrawEllipseWedge(float x, float y, float outRx,\n    float outRy, float inRx, float inRy, float startAngle,\n    float stopAngle) override;\n\nDraw an elliptic wedge with center at x, y, outer radii outRx,\noutRy, inner radii inRx, inRy between angles startAngle and\nstopAngle (expressed in degrees).\n\\pre positive_outRx: outRx>=0\n\\pre positive_outRy: outRy>=0\n\\pre positive_inRx: inRx>=0\n\\pre positive_inRy: inRy>=0\n\\pre ordered_rx: inRx<=outRx\n\\pre ordered_ry: inRy<=outRy\n"},
  {"DrawEllipticArc", PyvtkOpenGLContextDevice2D_DrawEllipticArc, METH_VARARGS,
   "V.DrawEllipticArc(float, float, float, float, float, float)\nC++: void DrawEllipticArc(float x, float y, float rX, float rY,\n    float startAngle, float stopAngle) override;\n\nDraw an elliptic arc with center at x,y with radii rX and rY\nbetween angles startAngle and stopAngle (expressed in degrees).\n\\pre positive_rX: rX>=0\n\\pre positive_rY: rY>=0\n"},
  {"DrawString", PyvtkOpenGLContextDevice2D_DrawString, METH_VARARGS,
   "V.DrawString([float, ...], string)\nC++: void DrawString(float *point, const vtkStdString &string)\n    override;\nV.DrawString([float, ...], unicode)\nC++: void DrawString(float *point, const vtkUnicodeString &string)\n     override;\n\nDraw some text to the screen!\n"},
  {"ComputeStringBounds", PyvtkOpenGLContextDevice2D_ComputeStringBounds, METH_VARARGS,
   "V.ComputeStringBounds(string, [float, float, float, float])\nC++: void ComputeStringBounds(const vtkStdString &string,\n    float bounds[4]) override;\nV.ComputeStringBounds(unicode, [float, float, float, float])\nC++: void ComputeStringBounds(const vtkUnicodeString &string,\n    float bounds[4]) override;\n\nCompute the bounds of the supplied string. The bounds will be\ncopied to the supplied bounds variable, the first two elements\nare the bottom corner of the string, and the second two elements\nare the width and height of the bounding box. An empty bounding\nbox (0, 0, 0, 0) is returned for an empty string or string with\nonly characters that cannot be rendered. NOTE: This function does\nnot take account of the text rotation.\n"},
  {"ComputeJustifiedStringBounds", PyvtkOpenGLContextDevice2D_ComputeJustifiedStringBounds, METH_VARARGS,
   "V.ComputeJustifiedStringBounds(string, [float, float, float,\n    float])\nC++: void ComputeJustifiedStringBounds(const char *string,\n    float bounds[4]) override;\n\nCompute the bounds of the supplied string while taking into\naccount the justification of the currently applied text property.\nSimple rotations (0, 90, 180, 270 degrees) are also propertly\ntaken into account.\n"},
  {"DrawMathTextString", PyvtkOpenGLContextDevice2D_DrawMathTextString, METH_VARARGS,
   "V.DrawMathTextString([float, float], string)\nC++: void DrawMathTextString(float point[2],\n    const vtkStdString &string) override;\n\nDraw text using MathText markup for mathematical equations. See\nhttp://matplotlib.sourceforge.net/users/mathtext.html for more\ninformation.\n"},
  {"DrawImage", PyvtkOpenGLContextDevice2D_DrawImage, METH_VARARGS,
   "V.DrawImage([float, float], float, vtkImageData)\nC++: void DrawImage(float p[2], float scale, vtkImageData *image)\n    override;\nV.DrawImage(vtkRectf, vtkImageData)\nC++: void DrawImage(const vtkRectf &pos, vtkImageData *image)\n    override;\n\nDraw the supplied image at the given x, y (p[0], p[1]) (bottom\ncorner), scaled by scale (1.0 would match the image).\n"},
  {"DrawPolyData", PyvtkOpenGLContextDevice2D_DrawPolyData, METH_VARARGS,
   "V.DrawPolyData([float, float], float, vtkPolyData,\n    vtkUnsignedCharArray, int)\nC++: void DrawPolyData(float p[2], float scale,\n    vtkPolyData *polyData, vtkUnsignedCharArray *colors,\n    int scalarMode) override;\n\nDraw the supplied PolyData at the given x, y (p[0], p[1]) (bottom\ncorner), scaled by scale (1.0 would match the actual dataset).\n"},
  {"SetColor4", PyvtkOpenGLContextDevice2D_SetColor4, METH_VARARGS,
   "V.SetColor4([int, int, int, int])\nC++: void SetColor4(unsigned char color[4]) override;\n\nSet the color for the device using unsigned char of length 4,\nRGBA.\n"},
  {"SetColor", PyvtkOpenGLContextDevice2D_SetColor, METH_VARARGS,
   "V.SetColor([int, int, int])\nC++: virtual void SetColor(unsigned char color[3])\n\nSet the color for the device using unsigned char of length 3,\nRGB.\n"},
  {"SetTexture", PyvtkOpenGLContextDevice2D_SetTexture, METH_VARARGS,
   "V.SetTexture(vtkImageData, int)\nC++: void SetTexture(vtkImageData *image, int properties=0)\n    override;\n\nSet the texture for the device, it is used to fill the polygons\n"},
  {"SetPointSize", PyvtkOpenGLContextDevice2D_SetPointSize, METH_VARARGS,
   "V.SetPointSize(float)\nC++: void SetPointSize(float size) override;\n\nSet the point size for glyphs/sprites.\n"},
  {"SetLineWidth", PyvtkOpenGLContextDevice2D_SetLineWidth, METH_VARARGS,
   "V.SetLineWidth(float)\nC++: void SetLineWidth(float width) override;\n\nSet the line width for glyphs/sprites.\n"},
  {"SetLineType", PyvtkOpenGLContextDevice2D_SetLineType, METH_VARARGS,
   "V.SetLineType(int)\nC++: void SetLineType(int type) override;\n\nSet the line type type (using anonymous enum in vtkPen).\n"},
  {"MultiplyMatrix", PyvtkOpenGLContextDevice2D_MultiplyMatrix, METH_VARARGS,
   "V.MultiplyMatrix(vtkMatrix3x3)\nC++: void MultiplyMatrix(vtkMatrix3x3 *m) override;\n\nMultiply the current model view matrix by the supplied one.\n"},
  {"SetMatrix", PyvtkOpenGLContextDevice2D_SetMatrix, METH_VARARGS,
   "V.SetMatrix(vtkMatrix3x3)\nC++: void SetMatrix(vtkMatrix3x3 *m) override;\n\nSet the model view matrix for the display\n"},
  {"GetMatrix", PyvtkOpenGLContextDevice2D_GetMatrix, METH_VARARGS,
   "V.GetMatrix(vtkMatrix3x3)\nC++: void GetMatrix(vtkMatrix3x3 *m) override;\n\nSet the model view matrix for the display\n"},
  {"PushMatrix", PyvtkOpenGLContextDevice2D_PushMatrix, METH_VARARGS,
   "V.PushMatrix()\nC++: void PushMatrix() override;\n\nPush the current matrix onto the stack.\n"},
  {"PopMatrix", PyvtkOpenGLContextDevice2D_PopMatrix, METH_VARARGS,
   "V.PopMatrix()\nC++: void PopMatrix() override;\n\nPop the current matrix off of the stack.\n"},
  {"SetClipping", PyvtkOpenGLContextDevice2D_SetClipping, METH_VARARGS,
   "V.SetClipping([int, ...])\nC++: void SetClipping(int *x) override;\n\nSupply an int array of length 4 with x1, y1, x2, y2 specifying\nclipping for the display.\n"},
  {"EnableClipping", PyvtkOpenGLContextDevice2D_EnableClipping, METH_VARARGS,
   "V.EnableClipping(bool)\nC++: void EnableClipping(bool enable) override;\n\nDisable clipping of the display.\n"},
  {"Begin", PyvtkOpenGLContextDevice2D_Begin, METH_VARARGS,
   "V.Begin(vtkViewport)\nC++: void Begin(vtkViewport *viewport) override;\n\nBegin drawing, pass in the viewport to set up the view.\n"},
  {"End", PyvtkOpenGLContextDevice2D_End, METH_VARARGS,
   "V.End()\nC++: void End() override;\n\nEnd drawing, clean up the view.\n"},
  {"BufferIdModeBegin", PyvtkOpenGLContextDevice2D_BufferIdModeBegin, METH_VARARGS,
   "V.BufferIdModeBegin(vtkAbstractContextBufferId)\nC++: void BufferIdModeBegin(vtkAbstractContextBufferId *bufferId)\n    override;\n\nStart BufferId creation Mode. The default implementation is\nempty.\n\\pre not_yet: !GetBufferIdMode()\n\\pre bufferId_exists: bufferId!=0\n\\post started: GetBufferIdMode()\n"},
  {"BufferIdModeEnd", PyvtkOpenGLContextDevice2D_BufferIdModeEnd, METH_VARARGS,
   "V.BufferIdModeEnd()\nC++: void BufferIdModeEnd() override;\n\nFinalize BufferId creation Mode. It makes sure that the content\nof the bufferId passed in argument of BufferIdModeBegin() is\ncorrectly set. The default implementation is empty.\n\\pre started: GetBufferIdMode()\n\\post done: !GetBufferIdMode()\n"},
  {"SetStringRendererToFreeType", PyvtkOpenGLContextDevice2D_SetStringRendererToFreeType, METH_VARARGS,
   "V.SetStringRendererToFreeType() -> bool\nC++: bool SetStringRendererToFreeType()\n\nForce the use of the freetype based render strategy. If Qt is\navailable then freetype will be used preferentially, otherwise\nthis has no effect. Returns true on success.\n"},
  {"SetStringRendererToQt", PyvtkOpenGLContextDevice2D_SetStringRendererToQt, METH_VARARGS,
   "V.SetStringRendererToQt() -> bool\nC++: bool SetStringRendererToQt()\n\nForce the use of the Qt based string render strategy. If Qt is\nnot available then freetype will be used and this will return\nfalse.\n"},
  {"HasGLSL", PyvtkOpenGLContextDevice2D_HasGLSL, METH_VARARGS,
   "V.HasGLSL() -> bool\nC++: bool HasGLSL()\n\nCheck whether the current context device has support for GLSL.\n"},
  {"GetRenderWindow", PyvtkOpenGLContextDevice2D_GetRenderWindow, METH_VARARGS,
   "V.GetRenderWindow() -> vtkOpenGLRenderWindow\nC++: virtual vtkOpenGLRenderWindow *GetRenderWindow()\n\nGet the active RenderWindow of the device. Will return null if\nnot active.\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLContextDevice2D_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *window)\n\nRelease any graphics resources that are being consumed by this\ndevice. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetProjectionMatrix", PyvtkOpenGLContextDevice2D_GetProjectionMatrix, METH_VARARGS,
   "V.GetProjectionMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetProjectionMatrix()\n\nGet the projection matrix this is needed\n"},
  {"GetModelMatrix", PyvtkOpenGLContextDevice2D_GetModelMatrix, METH_VARARGS,
   "V.GetModelMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetModelMatrix()\n\nGet the projection matrix this is needed\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOpenGLContextDevice2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingContextOpenGL2Python.vtkOpenGLContextDevice2D", // tp_name
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
  PyvtkOpenGLContextDevice2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLContextDevice2D_StaticNew()
{
  return vtkOpenGLContextDevice2D::New();
}

PyObject *PyvtkOpenGLContextDevice2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOpenGLContextDevice2D_Type, PyvtkOpenGLContextDevice2D_Methods,
    "vtkOpenGLContextDevice2D",
 &PyvtkOpenGLContextDevice2D_StaticNew);

  PyTypeObject *pytype = &PyvtkOpenGLContextDevice2D_Type;

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

void PyVTKAddFile_vtkOpenGLContextDevice2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLContextDevice2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLContextDevice2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

