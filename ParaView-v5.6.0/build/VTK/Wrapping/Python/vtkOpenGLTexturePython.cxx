// python wrapper for vtkOpenGLTexture
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
#include "vtkOpenGLTexture.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLTexture(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLTexture_ClassNew(); }

#ifndef DECLARED_PyvtkTexture_ClassNew
extern "C" { PyObject *PyvtkTexture_ClassNew(); }
#define DECLARED_PyvtkTexture_ClassNew
#endif

static const char *PyvtkOpenGLTexture_Doc =
  "vtkOpenGLTexture - OpenGL texture map\n\n"
  "Superclass: vtkTexture\n\n"
  "vtkOpenGLTexture is a concrete implementation of the abstract class\n"
  "vtkTexture. vtkOpenGLTexture interfaces to the OpenGL rendering\n"
  "library.\n\n";


static PyObject *
PyvtkOpenGLTexture_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLTexture::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLTexture::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLTexture *tempr = vtkOpenGLTexture::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLTexture *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLTexture::NewInstance());

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
PyvtkOpenGLTexture_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0);
    }
    else
    {
      op->vtkOpenGLTexture::Render(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_Load(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Load");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->Load(temp0);
    }
    else
    {
      op->vtkOpenGLTexture::Load(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_PostRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->PostRender(temp0);
    }
    else
    {
      op->vtkOpenGLTexture::PostRender(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

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
      op->vtkOpenGLTexture::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_CopyTexImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTexImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

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
      op->CopyTexImage(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLTexture::CopyTexImage(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_GetIsDepthTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsDepthTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIsDepthTexture() :
      op->vtkOpenGLTexture::GetIsDepthTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_SetIsDepthTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsDepthTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIsDepthTexture(temp0);
    }
    else
    {
      op->vtkOpenGLTexture::SetIsDepthTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_GetTextureType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureType() :
      op->vtkOpenGLTexture::GetTextureType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_SetTextureType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureType(temp0);
    }
    else
    {
      op->vtkOpenGLTexture::SetTextureType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_GetTextureObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextureObject *tempr = (ap.IsBound() ?
      op->GetTextureObject() :
      op->vtkOpenGLTexture::GetTextureObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_SetTextureObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

  vtkTextureObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
  {
    if (ap.IsBound())
    {
      op->SetTextureObject(temp0);
    }
    else
    {
      op->vtkOpenGLTexture::SetTextureObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_GetTextureUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureUnit() :
      op->vtkOpenGLTexture::GetTextureUnit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_IsTranslucent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsTranslucent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsTranslucent() :
      op->vtkOpenGLTexture::IsTranslucent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLTexture_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLTexture_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLTexture_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLTexture_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOpenGLTexture\nC++: static vtkOpenGLTexture *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLTexture_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOpenGLTexture\nC++: vtkOpenGLTexture *NewInstance()\n\n"},
  {"Render", PyvtkOpenGLTexture_Render, METH_VARARGS,
   "V.Render(vtkRenderer)\nC++: void Render(vtkRenderer *ren) override;\n\nRenders a texture map. It first checks the object's modified time\nto make sure the texture maps Input is valid, then it invokes the\nLoad() method.\n"},
  {"Load", PyvtkOpenGLTexture_Load, METH_VARARGS,
   "V.Load(vtkRenderer)\nC++: void Load(vtkRenderer *) override;\n\nImplement base class method.\n"},
  {"PostRender", PyvtkOpenGLTexture_PostRender, METH_VARARGS,
   "V.PostRender(vtkRenderer)\nC++: void PostRender(vtkRenderer *) override;\n\nCleans up after the texture rendering to restore the state of the\ngraphics context.\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLTexture_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\ntexture. The parameter window could be used to determine which\ngraphic resources to release. Using the same texture object in\nmultiple render windows is NOT currently supported.\n"},
  {"CopyTexImage", PyvtkOpenGLTexture_CopyTexImage, METH_VARARGS,
   "V.CopyTexImage(int, int, int, int)\nC++: void CopyTexImage(int x, int y, int width, int height)\n\ncopy the renderers read buffer into this texture\n"},
  {"GetIsDepthTexture", PyvtkOpenGLTexture_GetIsDepthTexture, METH_VARARGS,
   "V.GetIsDepthTexture() -> int\nC++: virtual int GetIsDepthTexture()\n\nProvide for specifying a format for the texture\n"},
  {"SetIsDepthTexture", PyvtkOpenGLTexture_SetIsDepthTexture, METH_VARARGS,
   "V.SetIsDepthTexture(int)\nC++: virtual void SetIsDepthTexture(int _arg)\n\nProvide for specifying a format for the texture\n"},
  {"GetTextureType", PyvtkOpenGLTexture_GetTextureType, METH_VARARGS,
   "V.GetTextureType() -> int\nC++: virtual int GetTextureType()\n\nWhat type of texture map GL_TEXTURE_2D versus\nGL_TEXTURE_RECTANGLE\n"},
  {"SetTextureType", PyvtkOpenGLTexture_SetTextureType, METH_VARARGS,
   "V.SetTextureType(int)\nC++: virtual void SetTextureType(int _arg)\n\nWhat type of texture map GL_TEXTURE_2D versus\nGL_TEXTURE_RECTANGLE\n"},
  {"GetTextureObject", PyvtkOpenGLTexture_GetTextureObject, METH_VARARGS,
   "V.GetTextureObject() -> vtkTextureObject\nC++: virtual vtkTextureObject *GetTextureObject()\n\n"},
  {"SetTextureObject", PyvtkOpenGLTexture_SetTextureObject, METH_VARARGS,
   "V.SetTextureObject(vtkTextureObject)\nC++: void SetTextureObject(vtkTextureObject *)\n\n"},
  {"GetTextureUnit", PyvtkOpenGLTexture_GetTextureUnit, METH_VARARGS,
   "V.GetTextureUnit() -> int\nC++: int GetTextureUnit() override;\n\nReturn the texture unit used for this texture\n"},
  {"IsTranslucent", PyvtkOpenGLTexture_IsTranslucent, METH_VARARGS,
   "V.IsTranslucent() -> int\nC++: int IsTranslucent() override;\n\nIs this Texture Translucent? returns false (0) if the texture is\neither fully opaque or has only fully transparent pixels and\nfully opaque pixels and the Interpolate flag is turn off.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOpenGLTexture_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLTexture", // tp_name
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
  PyvtkOpenGLTexture_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLTexture_StaticNew()
{
  return vtkOpenGLTexture::New();
}

PyObject *PyvtkOpenGLTexture_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOpenGLTexture_Type, PyvtkOpenGLTexture_Methods,
    "vtkOpenGLTexture",
 &PyvtkOpenGLTexture_StaticNew);

  PyTypeObject *pytype = &PyvtkOpenGLTexture_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTexture_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLTexture(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLTexture_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLTexture", o) != 0)
  {
    Py_DECREF(o);
  }

}

