// python wrapper for vtkOpenGLGL2PSHelperImpl
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
#include "vtkOpenGLGL2PSHelperImpl.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLGL2PSHelperImpl(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLGL2PSHelperImpl_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLGL2PSHelper_ClassNew
extern "C" { PyObject *PyvtkOpenGLGL2PSHelper_ClassNew(); }
#define DECLARED_PyvtkOpenGLGL2PSHelper_ClassNew
#endif

static const char *PyvtkOpenGLGL2PSHelperImpl_Doc =
  "vtkOpenGLGL2PSHelperImpl - vtkOpenGLGL2PSHelper override\nimplementation.\n\n"
  "Superclass: vtkOpenGLGL2PSHelper\n\n"
;


static PyObject *
PyvtkOpenGLGL2PSHelperImpl_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLGL2PSHelperImpl::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelperImpl_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelperImpl *op = static_cast<vtkOpenGLGL2PSHelperImpl *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLGL2PSHelperImpl::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelperImpl_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLGL2PSHelperImpl *tempr = vtkOpenGLGL2PSHelperImpl::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelperImpl_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelperImpl *op = static_cast<vtkOpenGLGL2PSHelperImpl *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLGL2PSHelperImpl *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLGL2PSHelperImpl::NewInstance());

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
PyvtkOpenGLGL2PSHelperImpl_ProcessTransformFeedback_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessTransformFeedback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelperImpl *op = static_cast<vtkOpenGLGL2PSHelperImpl *>(vp);

  vtkTransformFeedback *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  vtkActor *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTransformFeedback") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetVTKObject(temp2, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->ProcessTransformFeedback(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLGL2PSHelperImpl::ProcessTransformFeedback(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLGL2PSHelperImpl_ProcessTransformFeedback_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessTransformFeedback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelperImpl *op = static_cast<vtkOpenGLGL2PSHelperImpl *>(vp);

  vtkTransformFeedback *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  const size_t size2 = 4;
  unsigned char temp2[4];
  unsigned char save2[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTransformFeedback") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->ProcessTransformFeedback(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLGL2PSHelperImpl::ProcessTransformFeedback(temp0, temp1, temp2);
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
PyvtkOpenGLGL2PSHelperImpl_ProcessTransformFeedback_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessTransformFeedback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelperImpl *op = static_cast<vtkOpenGLGL2PSHelperImpl *>(vp);

  vtkTransformFeedback *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  const size_t size2 = 4;
  float temp2[4];
  float save2[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTransformFeedback") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->ProcessTransformFeedback(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLGL2PSHelperImpl::ProcessTransformFeedback(temp0, temp1, temp2);
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

static PyMethodDef PyvtkOpenGLGL2PSHelperImpl_ProcessTransformFeedback_Methods[] = {
  {nullptr, PyvtkOpenGLGL2PSHelperImpl_ProcessTransformFeedback_s1, METH_VARARGS,
   "@VVV *vtkTransformFeedback *vtkRenderer *vtkActor"},
  {nullptr, PyvtkOpenGLGL2PSHelperImpl_ProcessTransformFeedback_s2, METH_VARARGS,
   "@VVP *vtkTransformFeedback *vtkRenderer *B"},
  {nullptr, PyvtkOpenGLGL2PSHelperImpl_ProcessTransformFeedback_s3, METH_VARARGS,
   "@VVP *vtkTransformFeedback *vtkRenderer *f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLGL2PSHelperImpl_ProcessTransformFeedback(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLGL2PSHelperImpl_ProcessTransformFeedback_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ProcessTransformFeedback");
  return nullptr;
}



static PyObject *
PyvtkOpenGLGL2PSHelperImpl_DrawString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelperImpl *op = static_cast<vtkOpenGLGL2PSHelperImpl *>(vp);

  std::string temp0;
  vtkTextProperty *temp1 = nullptr;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  double temp3;
  vtkRenderer *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkRenderer"))
  {
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->DrawString(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkOpenGLGL2PSHelperImpl::DrawString(temp0, temp1, temp2, temp3, temp4);
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
PyvtkOpenGLGL2PSHelperImpl_DrawPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelperImpl *op = static_cast<vtkOpenGLGL2PSHelperImpl *>(vp);

  vtkPath *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 2;
  double temp2[2];
  double save2[2];
  const size_t size3 = 4;
  unsigned char temp3[4];
  unsigned char save3[4];
  size_t size4 = 0;
  double store4[2*2];
  double *temp4 = nullptr;
  double *save4 = nullptr;
  if (ap.GetArgSize(4) > 0)
  {
    size4 = 2;
    temp4 = store4;
    save4 = store4 + 2;
  }
  double temp5 = 0.0;
  float temp6 = -1;
  const char *temp7 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 8) &&
      ap.GetVTKObject(temp0, "vtkPath") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      (ap.NoArgsLeft() || ap.GetArray(temp4, size4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp7)))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->DrawPath(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkOpenGLGL2PSHelperImpl::DrawPath(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
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
PyvtkOpenGLGL2PSHelperImpl_Draw3DPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Draw3DPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelperImpl *op = static_cast<vtkOpenGLGL2PSHelperImpl *>(vp);

  vtkPath *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  const size_t size3 = 4;
  unsigned char temp3[4];
  unsigned char save3[4];
  vtkRenderer *temp4 = nullptr;
  const char *temp5 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5, 6) &&
      ap.GetVTKObject(temp0, "vtkPath") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetVTKObject(temp4, "vtkRenderer") &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->Draw3DPath(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkOpenGLGL2PSHelperImpl::Draw3DPath(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
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
PyvtkOpenGLGL2PSHelperImpl_DrawImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelperImpl *op = static_cast<vtkOpenGLGL2PSHelperImpl *>(vp);

  vtkImageData *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->DrawImage(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLGL2PSHelperImpl::DrawImage(temp0, temp1);
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

static PyMethodDef PyvtkOpenGLGL2PSHelperImpl_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLGL2PSHelperImpl_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLGL2PSHelperImpl_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLGL2PSHelperImpl_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOpenGLGL2PSHelperImpl\nC++: static vtkOpenGLGL2PSHelperImpl *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLGL2PSHelperImpl_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOpenGLGL2PSHelperImpl\nC++: vtkOpenGLGL2PSHelperImpl *NewInstance()\n\n"},
  {"ProcessTransformFeedback", PyvtkOpenGLGL2PSHelperImpl_ProcessTransformFeedback, METH_VARARGS,
   "V.ProcessTransformFeedback(vtkTransformFeedback, vtkRenderer,\n    vtkActor)\nC++: void ProcessTransformFeedback(vtkTransformFeedback *tfc,\n    vtkRenderer *ren, vtkActor *act) override;\nV.ProcessTransformFeedback(vtkTransformFeedback, vtkRenderer,\n    [int, int, int, int])\nC++: void ProcessTransformFeedback(vtkTransformFeedback *tfc,\n    vtkRenderer *ren, unsigned char col[4]) override;\nV.ProcessTransformFeedback(vtkTransformFeedback, vtkRenderer,\n    [float, float, float, float])\nC++: void ProcessTransformFeedback(vtkTransformFeedback *tfc,\n    vtkRenderer *ren, float col[4]) override;\n\nParse the vertex information in tfc and inject primitives into\nGL2PS. ren is used to obtain viewport information to complete the\nvertex transformation into pixel coordinates, and act/col are\nused to color the vertices when tfc does not contain color\ninformation.\n"},
  {"DrawString", PyvtkOpenGLGL2PSHelperImpl_DrawString, METH_VARARGS,
   "V.DrawString(string, vtkTextProperty, [float, float, float],\n    float, vtkRenderer)\nC++: void DrawString(const std::string &str,\n    vtkTextProperty *tprop, double pos[3], double backgroundDepth,\n     vtkRenderer *ren) override;\n\nFormat the text in str according to tprop and instruct GL2PS to\ndraw it at pixel coordinate pos. Background depth is the z value\nfor the background quad, and should be in NDC space. The drawing\nis always done in the overlay plane.\n@sa TextAsPath\n"},
  {"DrawPath", PyvtkOpenGLGL2PSHelperImpl_DrawPath, METH_VARARGS,
   "V.DrawPath(vtkPath, [float, float, float], [float, float], [int,\n    int, int, int], [float, float], float, float, string)\nC++: void DrawPath(vtkPath *path, double rasterPos[3],\n    double windowPos[2], unsigned char rgba[4],\n    double scale[2]=nullptr, double rotateAngle=0.0,\n    float strokeWidth=-1, const char *label=nullptr) override;\n\nGenerate PS, EPS, or SVG markup from a vtkPath object, and then\ninject it into the output using the gl2psSpecial command. The\npath is translated uniformly in the scene by windowPos. It is\nscaled by scale and rotated counter-clockwise by rotateAngle. The\nrasterPos is in world coordinates and determines clipping and\ndepth. If scale is NULL, no scaling is done. If strokeWidth is\npositive, the path will be stroked with the indicated width. If\nzero or negative, the path will be filled (default). The label\nstring is inserted into the GL2PS output at the beginning of the\npath specification as a comment on supported backends.\n"},
  {"Draw3DPath", PyvtkOpenGLGL2PSHelperImpl_Draw3DPath, METH_VARARGS,
   "V.Draw3DPath(vtkPath, vtkMatrix4x4, [float, float, float], [int,\n    int, int, int], vtkRenderer, string)\nC++: void Draw3DPath(vtkPath *path, vtkMatrix4x4 *actorMatrix,\n    double rasterPos[3], unsigned char actorColor[4],\n    vtkRenderer *ren, const char *label=nullptr) override;\n\nTransform the path using the actor's matrix and current GL state,\nthen draw it to GL2PS. The label string is inserted into the\nGL2PS output at the beginning of the path specification as a\ncomment on supported backends.\n"},
  {"DrawImage", PyvtkOpenGLGL2PSHelperImpl_DrawImage, METH_VARARGS,
   "V.DrawImage(vtkImageData, [float, float, float])\nC++: void DrawImage(vtkImageData *image, double pos[3]) override;\n\nDraw the image at pos. Image must be RGB or RGBA with float\nscalars.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOpenGLGL2PSHelperImpl_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingGL2PSOpenGL2Python.vtkOpenGLGL2PSHelperImpl", // tp_name
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
  PyvtkOpenGLGL2PSHelperImpl_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLGL2PSHelperImpl_StaticNew()
{
  return vtkOpenGLGL2PSHelperImpl::New();
}

PyObject *PyvtkOpenGLGL2PSHelperImpl_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOpenGLGL2PSHelperImpl_Type, PyvtkOpenGLGL2PSHelperImpl_Methods,
    "vtkOpenGLGL2PSHelperImpl",
 &PyvtkOpenGLGL2PSHelperImpl_StaticNew);

  PyTypeObject *pytype = &PyvtkOpenGLGL2PSHelperImpl_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLGL2PSHelper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLGL2PSHelperImpl(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLGL2PSHelperImpl_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLGL2PSHelperImpl", o) != 0)
  {
    Py_DECREF(o);
  }

}

