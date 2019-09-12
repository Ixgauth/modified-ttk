// python wrapper for vtkOpenGLVertexBufferObjectCache
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
#include "vtkOpenGLVertexBufferObjectCache.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLVertexBufferObjectCache(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLVertexBufferObjectCache_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkOpenGLVertexBufferObjectCache_Doc =
  "vtkOpenGLVertexBufferObjectCache - manage vertex buffer objects\nshared within a context\n\n"
  "Superclass: vtkObject\n\n"
  "This class allows mappers to share VBOs. Specifically it is used by\n"
  "the V..B..O..Group to see if a VBO already exists for a given\n"
  "vtkDataArray.\n\n";


static PyObject *
PyvtkOpenGLVertexBufferObjectCache_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLVertexBufferObjectCache::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObjectCache_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObjectCache *op = static_cast<vtkOpenGLVertexBufferObjectCache *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLVertexBufferObjectCache::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObjectCache_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLVertexBufferObjectCache *tempr = vtkOpenGLVertexBufferObjectCache::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObjectCache_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObjectCache *op = static_cast<vtkOpenGLVertexBufferObjectCache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLVertexBufferObjectCache *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLVertexBufferObjectCache::NewInstance());

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
PyvtkOpenGLVertexBufferObjectCache_GetVBO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVBO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObjectCache *op = static_cast<vtkOpenGLVertexBufferObjectCache *>(vp);

  vtkDataArray *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1))
  {
    vtkOpenGLVertexBufferObject *tempr = (ap.IsBound() ?
      op->GetVBO(temp0, temp1) :
      op->vtkOpenGLVertexBufferObjectCache::GetVBO(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObjectCache_RemoveVBO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVBO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObjectCache *op = static_cast<vtkOpenGLVertexBufferObjectCache *>(vp);

  vtkOpenGLVertexBufferObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLVertexBufferObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveVBO(temp0);
    }
    else
    {
      op->vtkOpenGLVertexBufferObjectCache::RemoveVBO(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLVertexBufferObjectCache_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLVertexBufferObjectCache_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLVertexBufferObjectCache_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLVertexBufferObjectCache_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOpenGLVertexBufferObjectCache\nC++: static vtkOpenGLVertexBufferObjectCache *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLVertexBufferObjectCache_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOpenGLVertexBufferObjectCache\nC++: vtkOpenGLVertexBufferObjectCache *NewInstance()\n\n"},
  {"GetVBO", PyvtkOpenGLVertexBufferObjectCache_GetVBO, METH_VARARGS,
   "V.GetVBO(vtkDataArray, int) -> vtkOpenGLVertexBufferObject\nC++: vtkOpenGLVertexBufferObject *GetVBO(vtkDataArray *array,\n    int destType)\n\nReturns the vertex buffer object which holds the data array's\ndata. If such a VBO does not exist a new empty VBO will be\ncreated you need to append to. The return value has been\nregistered, you are responsible for deleting it. The data array\npointers are also registered.\n"},
  {"RemoveVBO", PyvtkOpenGLVertexBufferObjectCache_RemoveVBO, METH_VARARGS,
   "V.RemoveVBO(vtkOpenGLVertexBufferObject)\nC++: void RemoveVBO(vtkOpenGLVertexBufferObject *vbo)\n\nRemoves all references to a given vertex buffer object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOpenGLVertexBufferObjectCache_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLVertexBufferObjectCache", // tp_name
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
  PyvtkOpenGLVertexBufferObjectCache_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLVertexBufferObjectCache_StaticNew()
{
  return vtkOpenGLVertexBufferObjectCache::New();
}

PyObject *PyvtkOpenGLVertexBufferObjectCache_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOpenGLVertexBufferObjectCache_Type, PyvtkOpenGLVertexBufferObjectCache_Methods,
    "vtkOpenGLVertexBufferObjectCache",
 &PyvtkOpenGLVertexBufferObjectCache_StaticNew);

  PyTypeObject *pytype = &PyvtkOpenGLVertexBufferObjectCache_Type;

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

void PyVTKAddFile_vtkOpenGLVertexBufferObjectCache(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLVertexBufferObjectCache_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLVertexBufferObjectCache", o) != 0)
  {
    Py_DECREF(o);
  }

}

