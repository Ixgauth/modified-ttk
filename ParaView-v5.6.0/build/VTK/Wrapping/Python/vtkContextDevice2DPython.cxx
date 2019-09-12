// python wrapper for vtkContextDevice2D
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
#include "vtkVector.h"
#include "vtkRect.h"
#include "vtkContextDevice2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContextDevice2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkContextDevice2D_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkContextDevice2D_Doc =
  "vtkContextDevice2D - Abstract class for drawing 2D primitives.\n\n"
  "Superclass: vtkObject\n\n"
  "This defines the interface for a vtkContextDevice2D. In this sense a\n"
  "ContextDevice is a class used to paint 2D primitives onto a device,\n"
  "such as an OpenGL context or a QGraphicsView.\n\n";

static PyTypeObject PyvtkContextDevice2D_TextureProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingContext2DPython.vtkContextDevice2D.TextureProperty", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkContextDevice2D_TextureProperty_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkContextDevice2D_TextureProperty_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkContextDevice2D_TextureProperty_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkContextDevice2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkContextDevice2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContextDevice2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkContextDevice2D *tempr = vtkContextDevice2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContextDevice2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContextDevice2D::NewInstance());

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
PyvtkContextDevice2D_DrawPoly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

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

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);

    op->DrawPoly(temp0, temp1, temp2, temp3);

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
PyvtkContextDevice2D_DrawLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

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

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);

    op->DrawLines(temp0, temp1, temp2, temp3);

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
PyvtkContextDevice2D_DrawPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

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

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);

    op->DrawPoints(temp0, temp1, temp2, temp3);

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
PyvtkContextDevice2D_DrawPointSprites(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPointSprites");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

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

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3, 5) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetArray(temp3, size3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp3, save3, size3);

    op->DrawPointSprites(temp0, temp1, temp2, temp3, temp4);

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
PyvtkContextDevice2D_DrawMarkers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMarkers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

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
      op->vtkContextDevice2D::DrawMarkers(temp0, temp1, temp2, temp3, temp4, temp5);
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
PyvtkContextDevice2D_DrawQuad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

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
      op->vtkContextDevice2D::DrawQuad(temp0, temp1);
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
PyvtkContextDevice2D_DrawQuadStrip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawQuadStrip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

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
      op->vtkContextDevice2D::DrawQuadStrip(temp0, temp1);
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
PyvtkContextDevice2D_DrawPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

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
      op->vtkContextDevice2D::DrawPolygon(temp0, temp1);
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
PyvtkContextDevice2D_DrawColoredPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawColoredPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

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
      op->vtkContextDevice2D::DrawColoredPolygon(temp0, temp1, temp2, temp3);
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
PyvtkContextDevice2D_DrawEllipseWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawEllipseWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  float temp4;
  float temp5;
  float temp6;
  float temp7;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    op->DrawEllipseWedge(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_DrawEllipticArc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawEllipticArc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  float temp4;
  float temp5;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    op->DrawEllipticArc(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_DrawString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    op->DrawString(temp0, temp1);

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
PyvtkContextDevice2D_DrawString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkUnicodeString temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    op->DrawString(temp0, temp1);

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

static PyMethodDef PyvtkContextDevice2D_DrawString_Methods[] = {
  {nullptr, PyvtkContextDevice2D_DrawString_s1, METH_VARARGS,
   "@Ps *f"},
  {nullptr, PyvtkContextDevice2D_DrawString_s2, METH_VARARGS,
   "@Pu *f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContextDevice2D_DrawString(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContextDevice2D_DrawString_Methods;
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
PyvtkContextDevice2D_ComputeStringBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStringBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkStdString temp0;
  const size_t size1 = 4;
  float temp1[4];
  float save1[4];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    op->ComputeStringBounds(temp0, temp1);

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
PyvtkContextDevice2D_ComputeStringBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStringBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkUnicodeString temp0;
  const size_t size1 = 4;
  float temp1[4];
  float save1[4];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    op->ComputeStringBounds(temp0, temp1);

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

static PyMethodDef PyvtkContextDevice2D_ComputeStringBounds_Methods[] = {
  {nullptr, PyvtkContextDevice2D_ComputeStringBounds_s1, METH_VARARGS,
   "@sP *f"},
  {nullptr, PyvtkContextDevice2D_ComputeStringBounds_s2, METH_VARARGS,
   "@uP *f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContextDevice2D_ComputeStringBounds(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContextDevice2D_ComputeStringBounds_Methods;
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
PyvtkContextDevice2D_ComputeJustifiedStringBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeJustifiedStringBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 4;
  float temp1[4];
  float save1[4];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    op->ComputeJustifiedStringBounds(temp0, temp1);

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
PyvtkContextDevice2D_DrawMathTextString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMathTextString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    op->DrawMathTextString(temp0, temp1);

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
PyvtkContextDevice2D_MathTextIsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MathTextIsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->MathTextIsSupported() :
      op->vtkContextDevice2D::MathTextIsSupported());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_DrawImage_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  const size_t size0 = 2;
  float temp0[2];
  float save0[2];
  float temp1;
  vtkImageData *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData"))
  {
    ap.Save(temp0, save0, size0);

    op->DrawImage(temp0, temp1, temp2);

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
PyvtkContextDevice2D_DrawImage_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkRectf *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkImageData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectf") &&
      ap.GetVTKObject(temp1, "vtkImageData"))
  {
    op->DrawImage(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkContextDevice2D_DrawImage(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkContextDevice2D_DrawImage_s1(self, args);
    case 2:
      return PyvtkContextDevice2D_DrawImage_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawImage");
  return nullptr;
}



static PyObject *
PyvtkContextDevice2D_DrawPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

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
      op->vtkContextDevice2D::DrawPolyData(temp0, temp1, temp2, temp3, temp4);
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
PyvtkContextDevice2D_ApplyPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

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
      op->vtkContextDevice2D::ApplyPen(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_GetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetPen() :
      op->vtkContextDevice2D::GetPen());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_ApplyBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

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
      op->vtkContextDevice2D::ApplyBrush(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_GetBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBrush *tempr = (ap.IsBound() ?
      op->GetBrush() :
      op->vtkContextDevice2D::GetBrush());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_ApplyTextProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTextProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

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
      op->vtkContextDevice2D::ApplyTextProp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_GetTextProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProp() :
      op->vtkContextDevice2D::GetTextProp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_SetColor4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  const size_t size0 = 4;
  unsigned char temp0[4];
  unsigned char save0[4];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->SetColor4(temp0);

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
PyvtkContextDevice2D_SetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkImageData *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetValue(temp1))
  {
    op->SetTexture(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_SetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetPointSize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetLineWidth(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_SetLineType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetLineType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWidth() :
      op->vtkContextDevice2D::GetWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHeight() :
      op->vtkContextDevice2D::GetHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_SetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkMatrix3x3 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
  {
    op->SetMatrix(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_GetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkMatrix3x3 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
  {
    op->GetMatrix(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_MultiplyMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkMatrix3x3 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
  {
    op->MultiplyMatrix(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_PushMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->PushMatrix();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_PopMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->PopMatrix();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_SetClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->SetClipping(temp0);

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
PyvtkContextDevice2D_DisableClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableClipping();
    }
    else
    {
      op->vtkContextDevice2D::DisableClipping();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_EnableClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->EnableClipping(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

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
      op->vtkContextDevice2D::Begin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_End(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "End");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->End();
    }
    else
    {
      op->vtkContextDevice2D::End();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_GetBufferIdMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBufferIdMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBufferIdMode() :
      op->vtkContextDevice2D::GetBufferIdMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_BufferIdModeBegin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BufferIdModeBegin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

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
      op->vtkContextDevice2D::BufferIdModeBegin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_BufferIdModeEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BufferIdModeEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BufferIdModeEnd();
    }
    else
    {
      op->vtkContextDevice2D::BufferIdModeEnd();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_SetViewportSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
  {
    if (ap.IsBound())
    {
      op->SetViewportSize(*temp0);
    }
    else
    {
      op->vtkContextDevice2D::SetViewportSize(*temp0);
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
PyvtkContextDevice2D_GetViewportSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2i tempr = (ap.IsBound() ?
      op->GetViewportSize() :
      op->vtkContextDevice2D::GetViewportSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice2D_SetViewportRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewportRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkRecti *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRecti"))
  {
    if (ap.IsBound())
    {
      op->SetViewportRect(*temp0);
    }
    else
    {
      op->vtkContextDevice2D::SetViewportRect(*temp0);
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
PyvtkContextDevice2D_GetViewportRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewportRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRecti tempr = (ap.IsBound() ?
      op->GetViewportRect() :
      op->vtkContextDevice2D::GetViewportRect());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkRecti");
    }
  }

  return result;
}

static PyMethodDef PyvtkContextDevice2D_Methods[] = {
  {"IsTypeOf", PyvtkContextDevice2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkContextDevice2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkContextDevice2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkContextDevice2D\nC++: static vtkContextDevice2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkContextDevice2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkContextDevice2D\nC++: vtkContextDevice2D *NewInstance()\n\n"},
  {"DrawPoly", PyvtkContextDevice2D_DrawPoly, METH_VARARGS,
   "V.DrawPoly([float, ...], int, [int, ...], int)\nC++: virtual void DrawPoly(float *points, int n,\n    unsigned char *colors=nullptr, int nc_comps=0)\n\nDraw a poly line using the points - fastest code path due to\nmemory layout of the coordinates. The line will be colored by the\ncolors array, which must be have nc_comps components (defining a\nsingle color).\n\\sa DrawLines()\n"},
  {"DrawLines", PyvtkContextDevice2D_DrawLines, METH_VARARGS,
   "V.DrawLines([float, ...], int, [int, ...], int)\nC++: virtual void DrawLines(float *f, int n,\n    unsigned char *colors=nullptr, int nc_comps=0)\n\nDraw lines using the points - memory layout is as follows:\nl1p1,l1p2,l2p1,l2p2... The lines will be colored by colors array\nwhich has nc_comps components (defining a single color).\n\\sa DrawPoly()\n"},
  {"DrawPoints", PyvtkContextDevice2D_DrawPoints, METH_VARARGS,
   "V.DrawPoints([float, ...], int, [int, ...], int)\nC++: virtual void DrawPoints(float *points, int n,\n    unsigned char *colors=nullptr, int nc_comps=0)\n\nDraw a series of points - fastest code path due to memory layout\nof the coordinates. The colors and nc_comps are optional - color\narray.\n"},
  {"DrawPointSprites", PyvtkContextDevice2D_DrawPointSprites, METH_VARARGS,
   "V.DrawPointSprites(vtkImageData, [float, ...], int, [int, ...],\n    int)\nC++: virtual void DrawPointSprites(vtkImageData *sprite,\n    float *points, int n, unsigned char *colors=nullptr,\n    int nc_comps=0)\n\nDraw a series of point sprites, images centred at the points\nsupplied. The supplied vtkImageData is the sprite to be drawn,\nonly squares will be drawn and the size is set using\nSetPointSize.\n\\param colors is an optional array of colors.\n\\param nc_comps is the number of components for the color.\n"},
  {"DrawMarkers", PyvtkContextDevice2D_DrawMarkers, METH_VARARGS,
   "V.DrawMarkers(int, bool, [float, ...], int, [int, ...], int)\nC++: virtual void DrawMarkers(int shape, bool highlight,\n    float *points, int n, unsigned char *colors=nullptr,\n    int nc_comps=0)\n\nDraw a series of markers centered at the points supplied. The\nshape argument controls the marker shape, and can be one of\n- VTK_MARKER_CROSS\n- VTK_MARKER_PLUS\n- VTK_MARKER_SQUARE\n- VTK_MARKER_CIRCLE\n- VTK_MARKER_DIAMOND\n\\param colors is an optional array of colors.\n\\param nc_comps is the number of components for the color.\n"},
  {"DrawQuad", PyvtkContextDevice2D_DrawQuad, METH_VARARGS,
   "V.DrawQuad([float, ...], int)\nC++: virtual void DrawQuad(float *, int)\n\nDraw a quad using the specified number of points.\n"},
  {"DrawQuadStrip", PyvtkContextDevice2D_DrawQuadStrip, METH_VARARGS,
   "V.DrawQuadStrip([float, ...], int)\nC++: virtual void DrawQuadStrip(float *, int)\n\nDraw a quad using the specified number of points.\n"},
  {"DrawPolygon", PyvtkContextDevice2D_DrawPolygon, METH_VARARGS,
   "V.DrawPolygon([float, ...], int)\nC++: virtual void DrawPolygon(float *p, int n)\n\n"},
  {"DrawColoredPolygon", PyvtkContextDevice2D_DrawColoredPolygon, METH_VARARGS,
   "V.DrawColoredPolygon([float, ...], int, [int, ...], int)\nC++: virtual void DrawColoredPolygon(float *points, int numPoints,\n     unsigned char *colors=nullptr, int nc_comps=0)\n\n"},
  {"DrawEllipseWedge", PyvtkContextDevice2D_DrawEllipseWedge, METH_VARARGS,
   "V.DrawEllipseWedge(float, float, float, float, float, float,\n    float, float)\nC++: virtual void DrawEllipseWedge(float x, float y, float outRx,\n    float outRy, float inRx, float inRy, float startAngle,\n    float stopAngle)\n\nDraw an elliptic wedge with center at x, y, outer radii outRx,\noutRy, inner radii inRx, inRy between angles startAngle and\nstopAngle (expressed in degrees).\n\\pre positive_outRx: outRx>=0\n\\pre positive_outRy: outRy>=0\n\\pre positive_inRx: inRx>=0\n\\pre positive_inRy: inRy>=0\n\\pre ordered_rx: inRx<=outRx\n\\pre ordered_ry: inRy<=outRy\n"},
  {"DrawEllipticArc", PyvtkContextDevice2D_DrawEllipticArc, METH_VARARGS,
   "V.DrawEllipticArc(float, float, float, float, float, float)\nC++: virtual void DrawEllipticArc(float x, float y, float rX,\n    float rY, float startAngle, float stopAngle)\n\nDraw an elliptic arc with center at x,y with radii rX and rY\nbetween angles startAngle and stopAngle (expressed in degrees).\n\\pre positive_rX: rX>=0\n\\pre positive_rY: rY>=0\n"},
  {"DrawString", PyvtkContextDevice2D_DrawString, METH_VARARGS,
   "V.DrawString([float, ...], string)\nC++: virtual void DrawString(float *point,\n    const vtkStdString &string)\nV.DrawString([float, ...], unicode)\nC++: virtual void DrawString(float *point,\n    const vtkUnicodeString &string)\n\nDraw some text to the screen.\n"},
  {"ComputeStringBounds", PyvtkContextDevice2D_ComputeStringBounds, METH_VARARGS,
   "V.ComputeStringBounds(string, [float, float, float, float])\nC++: virtual void ComputeStringBounds(const vtkStdString &string,\n    float bounds[4])\nV.ComputeStringBounds(unicode, [float, float, float, float])\nC++: virtual void ComputeStringBounds(\n    const vtkUnicodeString &string, float bounds[4])\n\nCompute the bounds of the supplied string. The bounds will be\ncopied to the supplied bounds variable, the first two elements\nare the bottom corner of the string, and the second two elements\nare the width and height of the bounding box. NOTE: This function\ndoes not take account of the text rotation or justification.\n"},
  {"ComputeJustifiedStringBounds", PyvtkContextDevice2D_ComputeJustifiedStringBounds, METH_VARARGS,
   "V.ComputeJustifiedStringBounds(string, [float, float, float,\n    float])\nC++: virtual void ComputeJustifiedStringBounds(const char *string,\n     float bounds[4])\n\nCompute the bounds of the supplied string while taking into\naccount the justification of the currently applied text property.\nSimple rotations (0, 90, 180, 270) are also correctly taken into\naccount.\n"},
  {"DrawMathTextString", PyvtkContextDevice2D_DrawMathTextString, METH_VARARGS,
   "V.DrawMathTextString([float, ...], string)\nC++: virtual void DrawMathTextString(float *point,\n    const vtkStdString &string)\n\nDraw text using MathText markup for mathematical equations. See\nhttp://matplotlib.sourceforge.net/users/mathtext.html for more\ninformation.\n"},
  {"MathTextIsSupported", PyvtkContextDevice2D_MathTextIsSupported, METH_VARARGS,
   "V.MathTextIsSupported() -> bool\nC++: virtual bool MathTextIsSupported()\n\nReturn true if MathText rendering available on this device.\n"},
  {"DrawImage", PyvtkContextDevice2D_DrawImage, METH_VARARGS,
   "V.DrawImage([float, float], float, vtkImageData)\nC++: virtual void DrawImage(float p[2], float scale,\n    vtkImageData *image)\nV.DrawImage(vtkRectf, vtkImageData)\nC++: virtual void DrawImage(const vtkRectf &pos,\n    vtkImageData *image)\n\nDraw the supplied image at the given x, y (p[0], p[1]) (bottom\ncorner), scaled by scale (1.0 would match the image).\n"},
  {"DrawPolyData", PyvtkContextDevice2D_DrawPolyData, METH_VARARGS,
   "V.DrawPolyData([float, float], float, vtkPolyData,\n    vtkUnsignedCharArray, int)\nC++: virtual void DrawPolyData(float p[2], float scale,\n    vtkPolyData *polyData, vtkUnsignedCharArray *colors,\n    int scalarMode)\n\nDraw the supplied PolyData at the given x, y (p[0], p[1]) (bottom\ncorner), scaled by scale (1.0 would match the actual dataset).\n\nOnly lines and polys are rendered. Only the x/y coordinates of\nthe polydata are used.\n\n@param p Offset to apply to polydata.\n@param scale Isotropic scale for polydata. Applied after offset.\n@param polyData Draw lines and polys from this dataset.\n@param colors RGBA for points or cells, depending on value of\n    scalarMode.\nMust not be NULL.\n@param scalarMode Must be either VTK_SCALAR_MODE_USE_POINT_DATA\n    or\nVTK_SCALAR_MODE_USE_CELL_DATA.\n\nThe base implementation breaks the polydata apart and renders\neach polygon individually using the device API. Subclasses should\noverride this method with a batch-drawing implementation if\nperformance is a concern.\n"},
  {"ApplyPen", PyvtkContextDevice2D_ApplyPen, METH_VARARGS,
   "V.ApplyPen(vtkPen)\nC++: virtual void ApplyPen(vtkPen *pen)\n\nApply the supplied pen which controls the outlines of shapes, as\nwell as lines, points and related primitives. This makes a deep\ncopy of the vtkPen object in the vtkContext2D, it does not hold a\npointer to the supplied object.\n"},
  {"GetPen", PyvtkContextDevice2D_GetPen, METH_VARARGS,
   "V.GetPen() -> vtkPen\nC++: virtual vtkPen *GetPen()\n\nGet the pen which controls the outlines of shapes, as well as\nlines, points and related primitives. This object can be modified\nand the changes will be reflected in subsequent drawing\noperations.\n"},
  {"ApplyBrush", PyvtkContextDevice2D_ApplyBrush, METH_VARARGS,
   "V.ApplyBrush(vtkBrush)\nC++: virtual void ApplyBrush(vtkBrush *brush)\n\nApply the supplied brush which controls the outlines of shapes,\nas well as lines, points and related primitives. This makes a\ndeep copy of the vtkBrush object in the vtkContext2D, it does not\nhold a pointer to the supplied object.\n"},
  {"GetBrush", PyvtkContextDevice2D_GetBrush, METH_VARARGS,
   "V.GetBrush() -> vtkBrush\nC++: virtual vtkBrush *GetBrush()\n\nGet the pen which controls the outlines of shapes as well as\nlines, points and related primitives.\n"},
  {"ApplyTextProp", PyvtkContextDevice2D_ApplyTextProp, METH_VARARGS,
   "V.ApplyTextProp(vtkTextProperty)\nC++: virtual void ApplyTextProp(vtkTextProperty *prop)\n\nApply the supplied text property which controls how text is\nrendered. This makes a deep copy of the vtkTextProperty object in\nthe vtkContext2D, it does not hold a pointer to the supplied\nobject.\n"},
  {"GetTextProp", PyvtkContextDevice2D_GetTextProp, METH_VARARGS,
   "V.GetTextProp() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTextProp()\n\nGet the text properties object for the vtkContext2D.\n"},
  {"SetColor4", PyvtkContextDevice2D_SetColor4, METH_VARARGS,
   "V.SetColor4([int, int, int, int])\nC++: virtual void SetColor4(unsigned char color[4])\n\nSet the color for the device using unsigned char of length 4,\nRGBA.\n"},
  {"SetTexture", PyvtkContextDevice2D_SetTexture, METH_VARARGS,
   "V.SetTexture(vtkImageData, int)\nC++: virtual void SetTexture(vtkImageData *image, int properties)\n\nSet the texture for the device, it is used to fill the polygons\n"},
  {"SetPointSize", PyvtkContextDevice2D_SetPointSize, METH_VARARGS,
   "V.SetPointSize(float)\nC++: virtual void SetPointSize(float size)\n\nSet the point size for glyphs/sprites.\n"},
  {"SetLineWidth", PyvtkContextDevice2D_SetLineWidth, METH_VARARGS,
   "V.SetLineWidth(float)\nC++: virtual void SetLineWidth(float width)\n\nSet the line width.\n"},
  {"SetLineType", PyvtkContextDevice2D_SetLineType, METH_VARARGS,
   "V.SetLineType(int)\nC++: virtual void SetLineType(int type)\n\nSet the line type type (using anonymous enum in vtkPen).\n"},
  {"GetWidth", PyvtkContextDevice2D_GetWidth, METH_VARARGS,
   "V.GetWidth() -> int\nC++: virtual int GetWidth()\n\nGet the width of the device in pixels.\n"},
  {"GetHeight", PyvtkContextDevice2D_GetHeight, METH_VARARGS,
   "V.GetHeight() -> int\nC++: virtual int GetHeight()\n\nGet the width of the device in pixels.\n"},
  {"SetMatrix", PyvtkContextDevice2D_SetMatrix, METH_VARARGS,
   "V.SetMatrix(vtkMatrix3x3)\nC++: virtual void SetMatrix(vtkMatrix3x3 *m)\n\nSet the model view matrix for the display\n"},
  {"GetMatrix", PyvtkContextDevice2D_GetMatrix, METH_VARARGS,
   "V.GetMatrix(vtkMatrix3x3)\nC++: virtual void GetMatrix(vtkMatrix3x3 *m)\n\nSet the model view matrix for the display\n"},
  {"MultiplyMatrix", PyvtkContextDevice2D_MultiplyMatrix, METH_VARARGS,
   "V.MultiplyMatrix(vtkMatrix3x3)\nC++: virtual void MultiplyMatrix(vtkMatrix3x3 *m)\n\nMultiply the current model view matrix by the supplied one\n"},
  {"PushMatrix", PyvtkContextDevice2D_PushMatrix, METH_VARARGS,
   "V.PushMatrix()\nC++: virtual void PushMatrix()\n\nPush the current matrix onto the stack.\n"},
  {"PopMatrix", PyvtkContextDevice2D_PopMatrix, METH_VARARGS,
   "V.PopMatrix()\nC++: virtual void PopMatrix()\n\nPop the current matrix off of the stack.\n"},
  {"SetClipping", PyvtkContextDevice2D_SetClipping, METH_VARARGS,
   "V.SetClipping([int, ...])\nC++: virtual void SetClipping(int *x)\n\nSupply a float array of length 4 with x1, y1, width, height\nspecifying clipping region for the device in pixels.\n"},
  {"DisableClipping", PyvtkContextDevice2D_DisableClipping, METH_VARARGS,
   "V.DisableClipping()\nC++: virtual void DisableClipping()\n\nDisable clipping of the display. Remove in a future release -\nretained for API compatibility.\n"},
  {"EnableClipping", PyvtkContextDevice2D_EnableClipping, METH_VARARGS,
   "V.EnableClipping(bool)\nC++: virtual void EnableClipping(bool enable)\n\nEnable or disable the clipping of the scene.\n"},
  {"Begin", PyvtkContextDevice2D_Begin, METH_VARARGS,
   "V.Begin(vtkViewport)\nC++: virtual void Begin(vtkViewport *)\n\nBegin drawing, pass in the viewport to set up the view.\n"},
  {"End", PyvtkContextDevice2D_End, METH_VARARGS,
   "V.End()\nC++: virtual void End()\n\nEnd drawing, clean up the view.\n"},
  {"GetBufferIdMode", PyvtkContextDevice2D_GetBufferIdMode, METH_VARARGS,
   "V.GetBufferIdMode() -> bool\nC++: virtual bool GetBufferIdMode()\n\nTell if the device context is in BufferId creation mode. Initial\nvalue is false.\n"},
  {"BufferIdModeBegin", PyvtkContextDevice2D_BufferIdModeBegin, METH_VARARGS,
   "V.BufferIdModeBegin(vtkAbstractContextBufferId)\nC++: virtual void BufferIdModeBegin(\n    vtkAbstractContextBufferId *bufferId)\n\nStart BufferId creation Mode. The default implementation is\nempty.\n\\pre not_yet: !GetBufferIdMode()\n\\pre bufferId_exists: bufferId!=0\n\\post started: GetBufferIdMode()\n"},
  {"BufferIdModeEnd", PyvtkContextDevice2D_BufferIdModeEnd, METH_VARARGS,
   "V.BufferIdModeEnd()\nC++: virtual void BufferIdModeEnd()\n\nFinalize BufferId creation Mode. It makes sure that the content\nof the bufferId passed in argument of BufferIdModeBegin() is\ncorrectly set. The default implementation is empty.\n\\pre started: GetBufferIdMode()\n\\post done: !GetBufferIdMode()\n"},
  {"SetViewportSize", PyvtkContextDevice2D_SetViewportSize, METH_VARARGS,
   "V.SetViewportSize(vtkVector2i)\nC++: virtual void SetViewportSize(const vtkVector2i &size)\n\n"},
  {"GetViewportSize", PyvtkContextDevice2D_GetViewportSize, METH_VARARGS,
   "V.GetViewportSize() -> vtkVector2i\nC++: virtual vtkVector2i GetViewportSize()\n\n"},
  {"SetViewportRect", PyvtkContextDevice2D_SetViewportRect, METH_VARARGS,
   "V.SetViewportRect(vtkRecti)\nC++: virtual void SetViewportRect(const vtkRecti &rect)\n\n"},
  {"GetViewportRect", PyvtkContextDevice2D_GetViewportRect, METH_VARARGS,
   "V.GetViewportRect() -> vtkRecti\nC++: virtual vtkRecti GetViewportRect()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkContextDevice2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingContext2DPython.vtkContextDevice2D", // tp_name
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
  PyvtkContextDevice2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkContextDevice2D_StaticNew()
{
  return vtkContextDevice2D::New();
}

PyObject *PyvtkContextDevice2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkContextDevice2D_Type, PyvtkContextDevice2D_Methods,
    "vtkContextDevice2D",
 &PyvtkContextDevice2D_StaticNew);

  PyTypeObject *pytype = &PyvtkContextDevice2D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkContextDevice2D_TextureProperty_Type);
  PyvtkContextDevice2D_TextureProperty_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkContextDevice2D_TextureProperty_Type);

  o = (PyObject *)&PyvtkContextDevice2D_TextureProperty_Type;
  if (PyDict_SetItemString(d, "TextureProperty", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkContextDevice2D::TextureProperty cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "Nearest", vtkContextDevice2D::Nearest },
        { "Linear", vtkContextDevice2D::Linear },
        { "Stretch", vtkContextDevice2D::Stretch },
        { "Repeat", vtkContextDevice2D::Repeat },
      };

    o = PyvtkContextDevice2D_TextureProperty_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkContextDevice2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContextDevice2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkContextDevice2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

