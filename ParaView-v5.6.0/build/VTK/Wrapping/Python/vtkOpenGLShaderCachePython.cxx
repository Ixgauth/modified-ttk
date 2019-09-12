// python wrapper for vtkOpenGLShaderCache
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
#include "vtkOpenGLShaderCache.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLShaderCache(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLShaderCache_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkOpenGLShaderCache_Doc =
  "vtkOpenGLShaderCache - manage Shader Programs within a context\n\n"
  "Superclass: vtkObject\n\n"
  "vtkOpenGLShaderCache manages shader program compilation and binding\n\n";


static PyObject *
PyvtkOpenGLShaderCache_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLShaderCache::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderCache_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderCache *op = static_cast<vtkOpenGLShaderCache *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLShaderCache::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderCache_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLShaderCache *tempr = vtkOpenGLShaderCache::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderCache_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderCache *op = static_cast<vtkOpenGLShaderCache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLShaderCache *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLShaderCache::NewInstance());

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
PyvtkOpenGLShaderCache_ReadyShaderProgram_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadyShaderProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderCache *op = static_cast<vtkOpenGLShaderCache *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  vtkTransformFeedback *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkTransformFeedback")))
  {
    vtkShaderProgram *tempr = (ap.IsBound() ?
      op->ReadyShaderProgram(temp0, temp1, temp2, temp3) :
      op->vtkOpenGLShaderCache::ReadyShaderProgram(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLShaderCache_ReadyShaderProgram_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadyShaderProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderCache *op = static_cast<vtkOpenGLShaderCache *>(vp);

  vtkShaderProgram *temp0 = nullptr;
  vtkTransformFeedback *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkTransformFeedback")))
  {
    vtkShaderProgram *tempr = (ap.IsBound() ?
      op->ReadyShaderProgram(temp0, temp1) :
      op->vtkOpenGLShaderCache::ReadyShaderProgram(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLShaderCache_ReadyShaderProgram(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
    case 4:
      return PyvtkOpenGLShaderCache_ReadyShaderProgram_s1(self, args);
    case 1:
    case 2:
      return PyvtkOpenGLShaderCache_ReadyShaderProgram_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ReadyShaderProgram");
  return nullptr;
}



static PyObject *
PyvtkOpenGLShaderCache_ReleaseCurrentShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseCurrentShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderCache *op = static_cast<vtkOpenGLShaderCache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseCurrentShader();
    }
    else
    {
      op->vtkOpenGLShaderCache::ReleaseCurrentShader();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderCache_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderCache *op = static_cast<vtkOpenGLShaderCache *>(vp);

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
      op->vtkOpenGLShaderCache::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderCache_ClearLastShaderBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLastShaderBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderCache *op = static_cast<vtkOpenGLShaderCache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearLastShaderBound();
    }
    else
    {
      op->vtkOpenGLShaderCache::ClearLastShaderBound();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderCache_GetLastShaderBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastShaderBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderCache *op = static_cast<vtkOpenGLShaderCache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkShaderProgram *tempr = (ap.IsBound() ?
      op->GetLastShaderBound() :
      op->vtkOpenGLShaderCache::GetLastShaderBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLShaderCache_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLShaderCache_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLShaderCache_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLShaderCache_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOpenGLShaderCache\nC++: static vtkOpenGLShaderCache *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLShaderCache_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOpenGLShaderCache\nC++: vtkOpenGLShaderCache *NewInstance()\n\n"},
  {"ReadyShaderProgram", PyvtkOpenGLShaderCache_ReadyShaderProgram, METH_VARARGS,
   "V.ReadyShaderProgram(string, string, string, vtkTransformFeedback)\n     -> vtkShaderProgram\nC++: virtual vtkShaderProgram *ReadyShaderProgram(\n    const char *vertexCode, const char *fragmentCode,\n    const char *geometryCode, vtkTransformFeedback *cap=nullptr)\nV.ReadyShaderProgram(vtkShaderProgram, vtkTransformFeedback)\n    -> vtkShaderProgram\nC++: virtual vtkShaderProgram *ReadyShaderProgram(\n    vtkShaderProgram *shader, vtkTransformFeedback *cap=nullptr)\n\n"},
  {"ReleaseCurrentShader", PyvtkOpenGLShaderCache_ReleaseCurrentShader, METH_VARARGS,
   "V.ReleaseCurrentShader()\nC++: void ReleaseCurrentShader()\n\nRelease the current shader.  Basically go back to having no\nshaders loaded.  This is useful for old legacy code that relies\non no shaders being loaded.\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLShaderCache_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *win)\n\nFree up any resources being used by the provided shader\n"},
  {"ClearLastShaderBound", PyvtkOpenGLShaderCache_ClearLastShaderBound, METH_VARARGS,
   "V.ClearLastShaderBound()\nC++: virtual void ClearLastShaderBound()\n\nGet/Clear the last Shader bound, called by shaders as they\nrelease their graphics resources\n"},
  {"GetLastShaderBound", PyvtkOpenGLShaderCache_GetLastShaderBound, METH_VARARGS,
   "V.GetLastShaderBound() -> vtkShaderProgram\nC++: virtual vtkShaderProgram *GetLastShaderBound()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOpenGLShaderCache_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLShaderCache", // tp_name
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
  PyvtkOpenGLShaderCache_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLShaderCache_StaticNew()
{
  return vtkOpenGLShaderCache::New();
}

PyObject *PyvtkOpenGLShaderCache_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOpenGLShaderCache_Type, PyvtkOpenGLShaderCache_Methods,
    "vtkOpenGLShaderCache",
 &PyvtkOpenGLShaderCache_StaticNew);

  PyTypeObject *pytype = &PyvtkOpenGLShaderCache_Type;

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

void PyVTKAddFile_vtkOpenGLShaderCache(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLShaderCache_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLShaderCache", o) != 0)
  {
    Py_DECREF(o);
  }

}

