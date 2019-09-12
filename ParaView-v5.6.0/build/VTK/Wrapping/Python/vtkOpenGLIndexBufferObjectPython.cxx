// python wrapper for vtkOpenGLIndexBufferObject
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
#include "vtkCellArray.h"
#include "vtkOpenGLIndexBufferObject.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLIndexBufferObject(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLIndexBufferObject_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLBufferObject_ClassNew
extern "C" { PyObject *PyvtkOpenGLBufferObject_ClassNew(); }
#define DECLARED_PyvtkOpenGLBufferObject_ClassNew
#endif

static const char *PyvtkOpenGLIndexBufferObject_Doc =
  "vtkOpenGLIndexBufferObject - OpenGL vertex buffer object\n\n"
  "Superclass: vtkOpenGLBufferObject\n\n"
  "OpenGL buffer object to store geometry and/or attribute data on the\n"
  "GPU.\n\n";


static PyObject *
PyvtkOpenGLIndexBufferObject_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLIndexBufferObject::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLIndexBufferObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLIndexBufferObject *op = static_cast<vtkOpenGLIndexBufferObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLIndexBufferObject::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLIndexBufferObject_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLIndexBufferObject *tempr = vtkOpenGLIndexBufferObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLIndexBufferObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLIndexBufferObject *op = static_cast<vtkOpenGLIndexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLIndexBufferObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLIndexBufferObject::NewInstance());

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
PyvtkOpenGLIndexBufferObject_CreateTriangleIndexBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateTriangleIndexBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLIndexBufferObject *op = static_cast<vtkOpenGLIndexBufferObject *>(vp);

  vtkCellArray *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCellArray") &&
      ap.GetVTKObject(temp1, "vtkPoints"))
  {
    size_t tempr = (ap.IsBound() ?
      op->CreateTriangleIndexBuffer(temp0, temp1) :
      op->vtkOpenGLIndexBufferObject::CreateTriangleIndexBuffer(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLIndexBufferObject_CreateTriangleLineIndexBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateTriangleLineIndexBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLIndexBufferObject *op = static_cast<vtkOpenGLIndexBufferObject *>(vp);

  vtkCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
  {
    size_t tempr = (ap.IsBound() ?
      op->CreateTriangleLineIndexBuffer(temp0) :
      op->vtkOpenGLIndexBufferObject::CreateTriangleLineIndexBuffer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLIndexBufferObject_CreateLineIndexBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateLineIndexBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLIndexBufferObject *op = static_cast<vtkOpenGLIndexBufferObject *>(vp);

  vtkCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
  {
    size_t tempr = (ap.IsBound() ?
      op->CreateLineIndexBuffer(temp0) :
      op->vtkOpenGLIndexBufferObject::CreateLineIndexBuffer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLIndexBufferObject_CreatePointIndexBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreatePointIndexBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLIndexBufferObject *op = static_cast<vtkOpenGLIndexBufferObject *>(vp);

  vtkCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
  {
    size_t tempr = (ap.IsBound() ?
      op->CreatePointIndexBuffer(temp0) :
      op->vtkOpenGLIndexBufferObject::CreatePointIndexBuffer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLIndexBufferObject_CreateStripIndexBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateStripIndexBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLIndexBufferObject *op = static_cast<vtkOpenGLIndexBufferObject *>(vp);

  vtkCellArray *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCellArray") &&
      ap.GetValue(temp1))
  {
    size_t tempr = (ap.IsBound() ?
      op->CreateStripIndexBuffer(temp0, temp1) :
      op->vtkOpenGLIndexBufferObject::CreateStripIndexBuffer(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLIndexBufferObject_CreateEdgeFlagIndexBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateEdgeFlagIndexBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLIndexBufferObject *op = static_cast<vtkOpenGLIndexBufferObject *>(vp);

  vtkCellArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCellArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    size_t tempr = (ap.IsBound() ?
      op->CreateEdgeFlagIndexBuffer(temp0, temp1) :
      op->vtkOpenGLIndexBufferObject::CreateEdgeFlagIndexBuffer(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLIndexBufferObject_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLIndexBufferObject_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLIndexBufferObject_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLIndexBufferObject_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOpenGLIndexBufferObject\nC++: static vtkOpenGLIndexBufferObject *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLIndexBufferObject_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOpenGLIndexBufferObject\nC++: vtkOpenGLIndexBufferObject *NewInstance()\n\n"},
  {"CreateTriangleIndexBuffer", PyvtkOpenGLIndexBufferObject_CreateTriangleIndexBuffer, METH_VARARGS,
   "V.CreateTriangleIndexBuffer(vtkCellArray, vtkPoints) -> int\nC++: size_t CreateTriangleIndexBuffer(vtkCellArray *cells,\n    vtkPoints *points)\n\nused to create an IBO for triangle primitives\n"},
  {"CreateTriangleLineIndexBuffer", PyvtkOpenGLIndexBufferObject_CreateTriangleLineIndexBuffer, METH_VARARGS,
   "V.CreateTriangleLineIndexBuffer(vtkCellArray) -> int\nC++: size_t CreateTriangleLineIndexBuffer(vtkCellArray *cells)\n\ncreate a IBO for wireframe polys/tris\n"},
  {"CreateLineIndexBuffer", PyvtkOpenGLIndexBufferObject_CreateLineIndexBuffer, METH_VARARGS,
   "V.CreateLineIndexBuffer(vtkCellArray) -> int\nC++: size_t CreateLineIndexBuffer(vtkCellArray *cells)\n\ncreate a IBO for wireframe polys/tris\n"},
  {"CreatePointIndexBuffer", PyvtkOpenGLIndexBufferObject_CreatePointIndexBuffer, METH_VARARGS,
   "V.CreatePointIndexBuffer(vtkCellArray) -> int\nC++: size_t CreatePointIndexBuffer(vtkCellArray *cells)\n\nused to create an IBO for primitives as points\n"},
  {"CreateStripIndexBuffer", PyvtkOpenGLIndexBufferObject_CreateStripIndexBuffer, METH_VARARGS,
   "V.CreateStripIndexBuffer(vtkCellArray, bool) -> int\nC++: size_t CreateStripIndexBuffer(vtkCellArray *cells,\n    bool wireframeTriStrips)\n\nused to create an IBO for line strips and triangle strips\n"},
  {"CreateEdgeFlagIndexBuffer", PyvtkOpenGLIndexBufferObject_CreateEdgeFlagIndexBuffer, METH_VARARGS,
   "V.CreateEdgeFlagIndexBuffer(vtkCellArray, vtkDataArray) -> int\nC++: size_t CreateEdgeFlagIndexBuffer(vtkCellArray *cells,\n    vtkDataArray *edgeflags)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOpenGLIndexBufferObject_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLIndexBufferObject", // tp_name
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
  PyvtkOpenGLIndexBufferObject_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLIndexBufferObject_StaticNew()
{
  return vtkOpenGLIndexBufferObject::New();
}

PyObject *PyvtkOpenGLIndexBufferObject_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOpenGLIndexBufferObject_Type, PyvtkOpenGLIndexBufferObject_Methods,
    "vtkOpenGLIndexBufferObject",
 &PyvtkOpenGLIndexBufferObject_StaticNew);

  PyTypeObject *pytype = &PyvtkOpenGLIndexBufferObject_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLBufferObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLIndexBufferObject(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLIndexBufferObject_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLIndexBufferObject", o) != 0)
  {
    Py_DECREF(o);
  }

}

