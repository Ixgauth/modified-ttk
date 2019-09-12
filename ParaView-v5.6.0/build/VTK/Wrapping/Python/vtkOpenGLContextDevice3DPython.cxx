// python wrapper for vtkOpenGLContextDevice3D
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
#include "vtkOpenGLContextDevice3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLContextDevice3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLContextDevice3D_ClassNew(); }

#ifndef DECLARED_PyvtkContextDevice3D_ClassNew
extern "C" { PyObject *PyvtkContextDevice3D_ClassNew(); }
#define DECLARED_PyvtkContextDevice3D_ClassNew
#endif

static const char *PyvtkOpenGLContextDevice3D_Doc =
  "vtkOpenGLContextDevice3D - OpenGL class drawing 3D primitives.\n\n"
  "Superclass: vtkContextDevice3D\n\n"
  "This defines the implementation of a 3D context device for drawing\n"
  "simple primitives.\n\n";


static PyObject *
PyvtkOpenGLContextDevice3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLContextDevice3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice3D *op = static_cast<vtkOpenGLContextDevice3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLContextDevice3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLContextDevice3D *tempr = vtkOpenGLContextDevice3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice3D *op = static_cast<vtkOpenGLContextDevice3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLContextDevice3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLContextDevice3D::NewInstance());

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
PyvtkOpenGLContextDevice3D_DrawPoly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice3D *op = static_cast<vtkOpenGLContextDevice3D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(size0);
  float *temp0 = store0.Data();
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(size2);
  unsigned char *temp2 = store2.Data();
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->DrawPoly(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLContextDevice3D::DrawPoly(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice3D_DrawLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice3D *op = static_cast<vtkOpenGLContextDevice3D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(size0);
  float *temp0 = store0.Data();
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(size2);
  unsigned char *temp2 = store2.Data();
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->DrawLines(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLContextDevice3D::DrawLines(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice3D_DrawPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice3D *op = static_cast<vtkOpenGLContextDevice3D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(size0);
  float *temp0 = store0.Data();
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(size2);
  unsigned char *temp2 = store2.Data();
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->DrawPoints(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLContextDevice3D::DrawPoints(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice3D_DrawTriangleMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawTriangleMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice3D *op = static_cast<vtkOpenGLContextDevice3D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(size0);
  float *temp0 = store0.Data();
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(size2);
  unsigned char *temp2 = store2.Data();
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->DrawTriangleMesh(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLContextDevice3D::DrawTriangleMesh(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice3D_ApplyPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice3D *op = static_cast<vtkOpenGLContextDevice3D *>(vp);

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
      op->vtkOpenGLContextDevice3D::ApplyPen(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice3D_ApplyBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice3D *op = static_cast<vtkOpenGLContextDevice3D *>(vp);

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
      op->vtkOpenGLContextDevice3D::ApplyBrush(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice3D_SetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice3D *op = static_cast<vtkOpenGLContextDevice3D *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetMatrix(temp0);
    }
    else
    {
      op->vtkOpenGLContextDevice3D::SetMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice3D_GetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice3D *op = static_cast<vtkOpenGLContextDevice3D *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->GetMatrix(temp0);
    }
    else
    {
      op->vtkOpenGLContextDevice3D::GetMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice3D_MultiplyMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice3D *op = static_cast<vtkOpenGLContextDevice3D *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->MultiplyMatrix(temp0);
    }
    else
    {
      op->vtkOpenGLContextDevice3D::MultiplyMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice3D_PushMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice3D *op = static_cast<vtkOpenGLContextDevice3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PushMatrix();
    }
    else
    {
      op->vtkOpenGLContextDevice3D::PushMatrix();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice3D_PopMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice3D *op = static_cast<vtkOpenGLContextDevice3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PopMatrix();
    }
    else
    {
      op->vtkOpenGLContextDevice3D::PopMatrix();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice3D_SetClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice3D *op = static_cast<vtkOpenGLContextDevice3D *>(vp);

  vtkRecti *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRecti"))
  {
    if (ap.IsBound())
    {
      op->SetClipping(*temp0);
    }
    else
    {
      op->vtkOpenGLContextDevice3D::SetClipping(*temp0);
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
PyvtkOpenGLContextDevice3D_EnableClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice3D *op = static_cast<vtkOpenGLContextDevice3D *>(vp);

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
      op->vtkOpenGLContextDevice3D::EnableClipping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice3D_EnableClippingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableClippingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice3D *op = static_cast<vtkOpenGLContextDevice3D *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->EnableClippingPlane(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLContextDevice3D::EnableClippingPlane(temp0, temp1);
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
PyvtkOpenGLContextDevice3D_DisableClippingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableClippingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice3D *op = static_cast<vtkOpenGLContextDevice3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisableClippingPlane(temp0);
    }
    else
    {
      op->vtkOpenGLContextDevice3D::DisableClippingPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice3D_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice3D *op = static_cast<vtkOpenGLContextDevice3D *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkOpenGLContextDevice2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkOpenGLContextDevice2D"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLContextDevice3D::Initialize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextDevice3D_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextDevice3D *op = static_cast<vtkOpenGLContextDevice3D *>(vp);

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
      op->vtkOpenGLContextDevice3D::Begin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLContextDevice3D_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLContextDevice3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLContextDevice3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLContextDevice3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOpenGLContextDevice3D\nC++: static vtkOpenGLContextDevice3D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLContextDevice3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOpenGLContextDevice3D\nC++: vtkOpenGLContextDevice3D *NewInstance()\n\n"},
  {"DrawPoly", PyvtkOpenGLContextDevice3D_DrawPoly, METH_VARARGS,
   "V.DrawPoly((float, ...), int, (int, ...), int)\nC++: void DrawPoly(const float *verts, int n,\n    const unsigned char *colors, int nc) override;\n\nDraw a polyline between the specified points.\n"},
  {"DrawLines", PyvtkOpenGLContextDevice3D_DrawLines, METH_VARARGS,
   "V.DrawLines((float, ...), int, (int, ...), int)\nC++: void DrawLines(const float *verts, int n,\n    const unsigned char *colors, int nc) override;\n\nDraw lines defined by specified pair of points.\n\\sa DrawPoly()\n"},
  {"DrawPoints", PyvtkOpenGLContextDevice3D_DrawPoints, METH_VARARGS,
   "V.DrawPoints((float, ...), int, (int, ...), int)\nC++: void DrawPoints(const float *verts, int n,\n    const unsigned char *colors, int nc) override;\n\nDraw points at the vertex positions specified.\n"},
  {"DrawTriangleMesh", PyvtkOpenGLContextDevice3D_DrawTriangleMesh, METH_VARARGS,
   "V.DrawTriangleMesh((float, ...), int, (int, ...), int)\nC++: void DrawTriangleMesh(const float *mesh, int n,\n    const unsigned char *colors, int nc) override;\n\nDraw triangles to generate the specified mesh.\n"},
  {"ApplyPen", PyvtkOpenGLContextDevice3D_ApplyPen, METH_VARARGS,
   "V.ApplyPen(vtkPen)\nC++: void ApplyPen(vtkPen *pen) override;\n\nApply the supplied pen which controls the outlines of shapes, as\nwell as lines, points and related primitives. This makes a deep\ncopy of the vtkPen object in the vtkContext2D, it does not hold a\npointer to the supplied object.\n"},
  {"ApplyBrush", PyvtkOpenGLContextDevice3D_ApplyBrush, METH_VARARGS,
   "V.ApplyBrush(vtkBrush)\nC++: void ApplyBrush(vtkBrush *brush) override;\n\nApply the supplied brush which controls the outlines of shapes,\nas well as lines, points and related primitives. This makes a\ndeep copy of the vtkBrush object in the vtkContext2D, it does not\nhold a pointer to the supplied object.\n"},
  {"SetMatrix", PyvtkOpenGLContextDevice3D_SetMatrix, METH_VARARGS,
   "V.SetMatrix(vtkMatrix4x4)\nC++: void SetMatrix(vtkMatrix4x4 *m) override;\n\nSet the model view matrix for the display\n"},
  {"GetMatrix", PyvtkOpenGLContextDevice3D_GetMatrix, METH_VARARGS,
   "V.GetMatrix(vtkMatrix4x4)\nC++: void GetMatrix(vtkMatrix4x4 *m) override;\n\nSet the model view matrix for the display\n"},
  {"MultiplyMatrix", PyvtkOpenGLContextDevice3D_MultiplyMatrix, METH_VARARGS,
   "V.MultiplyMatrix(vtkMatrix4x4)\nC++: void MultiplyMatrix(vtkMatrix4x4 *m) override;\n\nMultiply the current model view matrix by the supplied one\n"},
  {"PushMatrix", PyvtkOpenGLContextDevice3D_PushMatrix, METH_VARARGS,
   "V.PushMatrix()\nC++: void PushMatrix() override;\n\nPush the current matrix onto the stack.\n"},
  {"PopMatrix", PyvtkOpenGLContextDevice3D_PopMatrix, METH_VARARGS,
   "V.PopMatrix()\nC++: void PopMatrix() override;\n\nPop the current matrix off of the stack.\n"},
  {"SetClipping", PyvtkOpenGLContextDevice3D_SetClipping, METH_VARARGS,
   "V.SetClipping(vtkRecti)\nC++: void SetClipping(const vtkRecti &rect) override;\n\nSupply a float array of length 4 with x1, y1, width, height\nspecifying clipping region for the device in pixels.\n"},
  {"EnableClipping", PyvtkOpenGLContextDevice3D_EnableClipping, METH_VARARGS,
   "V.EnableClipping(bool)\nC++: void EnableClipping(bool enable) override;\n\nEnable or disable the clipping of the scene.\n"},
  {"EnableClippingPlane", PyvtkOpenGLContextDevice3D_EnableClippingPlane, METH_VARARGS,
   "V.EnableClippingPlane(int, [float, ...])\nC++: void EnableClippingPlane(int i, double *planeEquation)\n    override;\n\nEnable/Disable the specified clipping plane. i is the index of\nthe clipping plane being enabled or disabled (0 - 5).\nplaneEquation points to the four coefficients of the equation for\nthe clipping plane: Ax + By + Cz + D = 0.  This is the equation\nformat expected by glClipPlane.\n"},
  {"DisableClippingPlane", PyvtkOpenGLContextDevice3D_DisableClippingPlane, METH_VARARGS,
   "V.DisableClippingPlane(int)\nC++: void DisableClippingPlane(int i) override;\n\nEnable/Disable the specified clipping plane. i is the index of\nthe clipping plane being enabled or disabled (0 - 5).\nplaneEquation points to the four coefficients of the equation for\nthe clipping plane: Ax + By + Cz + D = 0.  This is the equation\nformat expected by glClipPlane.\n"},
  {"Initialize", PyvtkOpenGLContextDevice3D_Initialize, METH_VARARGS,
   "V.Initialize(vtkRenderer, vtkOpenGLContextDevice2D)\nC++: void Initialize(vtkRenderer *, vtkOpenGLContextDevice2D *)\n\nThis must be set during initialization\n"},
  {"Begin", PyvtkOpenGLContextDevice3D_Begin, METH_VARARGS,
   "V.Begin(vtkViewport)\nC++: virtual void Begin(vtkViewport *viewport)\n\nBegin drawing, pass in the viewport to set up the view.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOpenGLContextDevice3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingContextOpenGL2Python.vtkOpenGLContextDevice3D", // tp_name
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
  PyvtkOpenGLContextDevice3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLContextDevice3D_StaticNew()
{
  return vtkOpenGLContextDevice3D::New();
}

PyObject *PyvtkOpenGLContextDevice3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOpenGLContextDevice3D_Type, PyvtkOpenGLContextDevice3D_Methods,
    "vtkOpenGLContextDevice3D",
 &PyvtkOpenGLContextDevice3D_StaticNew);

  PyTypeObject *pytype = &PyvtkOpenGLContextDevice3D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkContextDevice3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLContextDevice3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLContextDevice3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLContextDevice3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

