// python wrapper for vtkOpenGLBufferObject
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
#include "vtkOpenGLBufferObject.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLBufferObject(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLBufferObject_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkOpenGLBufferObject_Doc =
  "vtkOpenGLBufferObject - OpenGL buffer object\n\n"
  "Superclass: vtkObject\n\n"
  "OpenGL buffer object to store index, geometry and/or attribute data\n"
  "on the GPU.\n\n";

static PyTypeObject PyvtkOpenGLBufferObject_ObjectType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLBufferObject.ObjectType", // tp_name
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

PyObject *PyvtkOpenGLBufferObject_ObjectType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkOpenGLBufferObject_ObjectType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkOpenGLBufferObject_ObjectType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkOpenGLBufferObject_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLBufferObject::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLBufferObject::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLBufferObject *tempr = vtkOpenGLBufferObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLBufferObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLBufferObject::NewInstance());

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
PyvtkOpenGLBufferObject_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkOpenGLBufferObject::ObjectType tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetType() :
      op->vtkOpenGLBufferObject::GetType());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkOpenGLBufferObject_ObjectType_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_SetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  typedef vtkOpenGLBufferObject::ObjectType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkOpenGLBufferObject.ObjectType"))
  {
    if (ap.IsBound())
    {
      op->SetType(temp0);
    }
    else
    {
      op->vtkOpenGLBufferObject::SetType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_GetHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHandle() :
      op->vtkOpenGLBufferObject::GetHandle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_IsReady(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsReady");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsReady() :
      op->vtkOpenGLBufferObject::IsReady());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_GenerateBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  typedef vtkOpenGLBufferObject::ObjectType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkOpenGLBufferObject.ObjectType"))
  {
    bool tempr = (ap.IsBound() ?
      op->GenerateBuffer(temp0) :
      op->vtkOpenGLBufferObject::GenerateBuffer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_Bind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Bind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Bind() :
      op->vtkOpenGLBufferObject::Bind());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_Release(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Release");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Release() :
      op->vtkOpenGLBufferObject::Release());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources();
    }
    else
    {
      op->vtkOpenGLBufferObject::ReleaseGraphicsResources();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_GetError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetError() :
      op->vtkOpenGLBufferObject::GetError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLBufferObject_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLBufferObject_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLBufferObject_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLBufferObject_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOpenGLBufferObject\nC++: static vtkOpenGLBufferObject *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLBufferObject_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOpenGLBufferObject\nC++: vtkOpenGLBufferObject *NewInstance()\n\n"},
  {"GetType", PyvtkOpenGLBufferObject_GetType, METH_VARARGS,
   "V.GetType() -> ObjectType\nC++: ObjectType GetType()\n\nGet the type of the buffer object.\n"},
  {"SetType", PyvtkOpenGLBufferObject_SetType, METH_VARARGS,
   "V.SetType(ObjectType)\nC++: void SetType(ObjectType value)\n\nSet the type of the buffer object.\n"},
  {"GetHandle", PyvtkOpenGLBufferObject_GetHandle, METH_VARARGS,
   "V.GetHandle() -> int\nC++: int GetHandle()\n\nGet the handle of the buffer object.\n"},
  {"IsReady", PyvtkOpenGLBufferObject_IsReady, METH_VARARGS,
   "V.IsReady() -> bool\nC++: bool IsReady()\n\nDetermine if the buffer object is ready to be used.\n"},
  {"GenerateBuffer", PyvtkOpenGLBufferObject_GenerateBuffer, METH_VARARGS,
   "V.GenerateBuffer(ObjectType) -> bool\nC++: bool GenerateBuffer(ObjectType type)\n\nGenerate the opengl buffer for this Handle\n"},
  {"Bind", PyvtkOpenGLBufferObject_Bind, METH_VARARGS,
   "V.Bind() -> bool\nC++: bool Bind()\n\nBind the buffer object ready for rendering.\n\note Only one ARRAY_BUFFER and one ELEMENT_ARRAY_BUFFER may be\nbound at any time.\n"},
  {"Release", PyvtkOpenGLBufferObject_Release, METH_VARARGS,
   "V.Release() -> bool\nC++: bool Release()\n\nRelease the buffer. This should be done after rendering is\ncomplete.\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLBufferObject_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources()\nC++: void ReleaseGraphicsResources()\n\nRelease any graphics resources that are being consumed by this\nclass.\n"},
  {"GetError", PyvtkOpenGLBufferObject_GetError, METH_VARARGS,
   "V.GetError() -> string\nC++: std::string GetError()\n\nReturn a string describing errors.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOpenGLBufferObject_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLBufferObject", // tp_name
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
  PyvtkOpenGLBufferObject_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLBufferObject_StaticNew()
{
  return vtkOpenGLBufferObject::New();
}

PyObject *PyvtkOpenGLBufferObject_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOpenGLBufferObject_Type, PyvtkOpenGLBufferObject_Methods,
    "vtkOpenGLBufferObject",
 &PyvtkOpenGLBufferObject_StaticNew);

  PyTypeObject *pytype = &PyvtkOpenGLBufferObject_Type;

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

  PyType_Ready(&PyvtkOpenGLBufferObject_ObjectType_Type);
  PyvtkOpenGLBufferObject_ObjectType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkOpenGLBufferObject_ObjectType_Type);

  o = (PyObject *)&PyvtkOpenGLBufferObject_ObjectType_Type;
  if (PyDict_SetItemString(d, "ObjectType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkOpenGLBufferObject::ObjectType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "ArrayBuffer", vtkOpenGLBufferObject::ArrayBuffer },
        { "ElementArrayBuffer", vtkOpenGLBufferObject::ElementArrayBuffer },
        { "TextureBuffer", vtkOpenGLBufferObject::TextureBuffer },
      };

    o = PyvtkOpenGLBufferObject_ObjectType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLBufferObject(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLBufferObject_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLBufferObject", o) != 0)
  {
    Py_DECREF(o);
  }

}

