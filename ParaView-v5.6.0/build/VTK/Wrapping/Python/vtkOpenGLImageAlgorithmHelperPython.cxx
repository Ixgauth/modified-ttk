// python wrapper for vtkOpenGLImageAlgorithmHelper
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
#include "vtkOpenGLImageAlgorithmHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLImageAlgorithmHelper(PyObject *); }

static const char *PyvtkOpenGLImageAlgorithmCallback_Doc =
  "vtkOpenGLImageAlgorithmCallback - no description provided.\n\n"

  "vtkOpenGLImageAlgorithmCallback()\n";


static PyObject *
PyvtkOpenGLImageAlgorithmCallback_InitializeShaderUniforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeShaderUniforms");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLImageAlgorithmCallback *op = static_cast<vtkOpenGLImageAlgorithmCallback *>(vp);

  vtkShaderProgram *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram"))
  {
    op->InitializeShaderUniforms(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLImageAlgorithmCallback_UpdateShaderUniforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateShaderUniforms");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLImageAlgorithmCallback *op = static_cast<vtkOpenGLImageAlgorithmCallback *>(vp);

  vtkShaderProgram *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram") &&
      ap.GetValue(temp1))
  {
    op->UpdateShaderUniforms(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLImageAlgorithmCallback_Methods[] = {
  {"InitializeShaderUniforms", PyvtkOpenGLImageAlgorithmCallback_InitializeShaderUniforms, METH_VARARGS,
   "V.InitializeShaderUniforms(vtkShaderProgram)\nC++: virtual void InitializeShaderUniforms(vtkShaderProgram *)\n\n"},
  {"UpdateShaderUniforms", PyvtkOpenGLImageAlgorithmCallback_UpdateShaderUniforms, METH_VARARGS,
   "V.UpdateShaderUniforms(vtkShaderProgram, int)\nC++: virtual void UpdateShaderUniforms(vtkShaderProgram *, int)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkOpenGLImageAlgorithmCallback_vtkOpenGLImageAlgorithmCallback(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkOpenGLImageAlgorithmCallback");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkOpenGLImageAlgorithmCallback *op = new vtkOpenGLImageAlgorithmCallback();

    result = PyVTKSpecialObject_New("vtkOpenGLImageAlgorithmCallback", op);
  }

  return result;
}

static PyMethodDef PyvtkOpenGLImageAlgorithmCallback_vtkOpenGLImageAlgorithmCallback_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLImageAlgorithmCallback_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkOpenGLImageAlgorithmCallback_vtkOpenGLImageAlgorithmCallback(nullptr, args);
}

static void PyvtkOpenGLImageAlgorithmCallback_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkOpenGLImageAlgorithmCallback *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkOpenGLImageAlgorithmCallback_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkOpenGLImageAlgorithmCallback_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLImageAlgorithmCallback", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkOpenGLImageAlgorithmCallback_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkOpenGLImageAlgorithmCallback_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkOpenGLImageAlgorithmCallback_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkOpenGLImageAlgorithmCallback_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLImageAlgorithmCallback_TypeNew(); }

PyObject *PyvtkOpenGLImageAlgorithmCallback_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkOpenGLImageAlgorithmCallback_Type,
    PyvtkOpenGLImageAlgorithmCallback_Methods,
    PyvtkOpenGLImageAlgorithmCallback_vtkOpenGLImageAlgorithmCallback_Methods,
    nullptr);

  PyTypeObject *pytype = &PyvtkOpenGLImageAlgorithmCallback_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLImageAlgorithmHelper_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkOpenGLImageAlgorithmHelper_Doc =
  "vtkOpenGLImageAlgorithmHelper - Help image algorithms use the GPU\n\n"
  "Superclass: vtkObject\n\n"
  "Designed to make it easier to accelerate an image algorithm on the\n"
  "GPU\n\n";


static PyObject *
PyvtkOpenGLImageAlgorithmHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLImageAlgorithmHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLImageAlgorithmHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageAlgorithmHelper *op = static_cast<vtkOpenGLImageAlgorithmHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLImageAlgorithmHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLImageAlgorithmHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLImageAlgorithmHelper *tempr = vtkOpenGLImageAlgorithmHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLImageAlgorithmHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageAlgorithmHelper *op = static_cast<vtkOpenGLImageAlgorithmHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLImageAlgorithmHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLImageAlgorithmHelper::NewInstance());

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
PyvtkOpenGLImageAlgorithmHelper_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageAlgorithmHelper *op = static_cast<vtkOpenGLImageAlgorithmHelper *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetRenderWindow(temp0);
    }
    else
    {
      op->vtkOpenGLImageAlgorithmHelper::SetRenderWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLImageAlgorithmHelper_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLImageAlgorithmHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLImageAlgorithmHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLImageAlgorithmHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOpenGLImageAlgorithmHelper\nC++: static vtkOpenGLImageAlgorithmHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLImageAlgorithmHelper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOpenGLImageAlgorithmHelper\nC++: vtkOpenGLImageAlgorithmHelper *NewInstance()\n\n"},
  {"SetRenderWindow", PyvtkOpenGLImageAlgorithmHelper_SetRenderWindow, METH_VARARGS,
   "V.SetRenderWindow(vtkRenderWindow)\nC++: void SetRenderWindow(vtkRenderWindow *renWin)\n\nSet the render window to get the OpenGL resources from\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOpenGLImageAlgorithmHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLImageAlgorithmHelper", // tp_name
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
  PyvtkOpenGLImageAlgorithmHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLImageAlgorithmHelper_StaticNew()
{
  return vtkOpenGLImageAlgorithmHelper::New();
}

PyObject *PyvtkOpenGLImageAlgorithmHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOpenGLImageAlgorithmHelper_Type, PyvtkOpenGLImageAlgorithmHelper_Methods,
    "vtkOpenGLImageAlgorithmHelper",
 &PyvtkOpenGLImageAlgorithmHelper_StaticNew);

  PyTypeObject *pytype = &PyvtkOpenGLImageAlgorithmHelper_Type;

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

void PyVTKAddFile_vtkOpenGLImageAlgorithmHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLImageAlgorithmCallback_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLImageAlgorithmCallback", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkOpenGLImageAlgorithmHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLImageAlgorithmHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

