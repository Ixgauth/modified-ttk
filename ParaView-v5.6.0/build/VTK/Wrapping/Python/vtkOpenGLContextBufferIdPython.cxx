// python wrapper for vtkOpenGLContextBufferId
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
#include "vtkOpenGLContextBufferId.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLContextBufferId(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLContextBufferId_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractContextBufferId_ClassNew
extern "C" { PyObject *PyvtkAbstractContextBufferId_ClassNew(); }
#define DECLARED_PyvtkAbstractContextBufferId_ClassNew
#endif

static const char *PyvtkOpenGLContextBufferId_Doc =
  "vtkOpenGLContextBufferId - 2D array of ids stored in VRAM.\n\n"
  "Superclass: vtkAbstractContextBufferId\n\n"
  "An 2D array where each element is the id of an entity drawn at the\n"
  "given pixel.\n\n";


static PyObject *
PyvtkOpenGLContextBufferId_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLContextBufferId::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextBufferId_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextBufferId *op = static_cast<vtkOpenGLContextBufferId *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLContextBufferId::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextBufferId_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLContextBufferId *tempr = vtkOpenGLContextBufferId::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextBufferId_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextBufferId *op = static_cast<vtkOpenGLContextBufferId *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLContextBufferId *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLContextBufferId::NewInstance());

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
PyvtkOpenGLContextBufferId_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextBufferId *op = static_cast<vtkOpenGLContextBufferId *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources();
    }
    else
    {
      op->vtkOpenGLContextBufferId::ReleaseGraphicsResources();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextBufferId_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextBufferId *op = static_cast<vtkOpenGLContextBufferId *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetContext(temp0);
    }
    else
    {
      op->vtkOpenGLContextBufferId::SetContext(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextBufferId_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextBufferId *op = static_cast<vtkOpenGLContextBufferId *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkOpenGLContextBufferId::GetContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextBufferId_IsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextBufferId *op = static_cast<vtkOpenGLContextBufferId *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSupported() :
      op->vtkOpenGLContextBufferId::IsSupported());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextBufferId_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextBufferId *op = static_cast<vtkOpenGLContextBufferId *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Allocate();
    }
    else
    {
      op->vtkOpenGLContextBufferId::Allocate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextBufferId_IsAllocated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAllocated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextBufferId *op = static_cast<vtkOpenGLContextBufferId *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsAllocated() :
      op->vtkOpenGLContextBufferId::IsAllocated());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextBufferId_SetValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextBufferId *op = static_cast<vtkOpenGLContextBufferId *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValues(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLContextBufferId::SetValues(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLContextBufferId_GetPickedItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextBufferId *op = static_cast<vtkOpenGLContextBufferId *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPickedItem(temp0, temp1) :
      op->vtkOpenGLContextBufferId::GetPickedItem(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLContextBufferId_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLContextBufferId_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLContextBufferId_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLContextBufferId_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOpenGLContextBufferId\nC++: static vtkOpenGLContextBufferId *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLContextBufferId_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOpenGLContextBufferId\nC++: vtkOpenGLContextBufferId *NewInstance()\n\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLContextBufferId_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources()\nC++: void ReleaseGraphicsResources() override;\n\nRelease any graphics resources that are being consumed by this\nobject.\n"},
  {"SetContext", PyvtkOpenGLContextBufferId_SetContext, METH_VARARGS,
   "V.SetContext(vtkRenderWindow)\nC++: void SetContext(vtkRenderWindow *context) override;\n\nSet/Get the OpenGL context owning the texture object resource.\n"},
  {"GetContext", PyvtkOpenGLContextBufferId_GetContext, METH_VARARGS,
   "V.GetContext() -> vtkRenderWindow\nC++: vtkRenderWindow *GetContext() override;\n\nSet/Get the OpenGL context owning the texture object resource.\n"},
  {"IsSupported", PyvtkOpenGLContextBufferId_IsSupported, METH_VARARGS,
   "V.IsSupported() -> bool\nC++: bool IsSupported() override;\n\nReturns if the context supports the required extensions.\n\\pre context_is_set: this->GetContext()!=0\n"},
  {"Allocate", PyvtkOpenGLContextBufferId_Allocate, METH_VARARGS,
   "V.Allocate()\nC++: void Allocate() override;\n\nAllocate the memory for at least Width*Height elements.\n\\pre positive_width: GetWidth()>0\n\\pre positive_height: GetHeight()>0\n\\pre context_is_set: this->GetContext()!=0\n"},
  {"IsAllocated", PyvtkOpenGLContextBufferId_IsAllocated, METH_VARARGS,
   "V.IsAllocated() -> bool\nC++: bool IsAllocated() override;\n\nTell if the buffer has been allocated.\n"},
  {"SetValues", PyvtkOpenGLContextBufferId_SetValues, METH_VARARGS,
   "V.SetValues(int, int)\nC++: void SetValues(int srcXmin, int srcYmin) override;\n\nCopy the contents of the current read buffer to the internal\ntexture starting at lower left corner of the framebuffer\n(srcXmin,srcYmin).\n\\pre is_allocated: this->IsAllocated()\n"},
  {"GetPickedItem", PyvtkOpenGLContextBufferId_GetPickedItem, METH_VARARGS,
   "V.GetPickedItem(int, int) -> int\nC++: vtkIdType GetPickedItem(int x, int y) override;\n\nReturn item under abscissa x and ordinate y. Abscissa go from\nleft to right. Ordinate go from bottom to top. The return value\nis -1 if there is no item.\n\\pre is_allocated: IsAllocated()\n\\post valid_result: result>=-1\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOpenGLContextBufferId_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingContextOpenGL2Python.vtkOpenGLContextBufferId", // tp_name
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
  PyvtkOpenGLContextBufferId_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLContextBufferId_StaticNew()
{
  return vtkOpenGLContextBufferId::New();
}

PyObject *PyvtkOpenGLContextBufferId_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOpenGLContextBufferId_Type, PyvtkOpenGLContextBufferId_Methods,
    "vtkOpenGLContextBufferId",
 &PyvtkOpenGLContextBufferId_StaticNew);

  PyTypeObject *pytype = &PyvtkOpenGLContextBufferId_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractContextBufferId_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLContextBufferId(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLContextBufferId_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLContextBufferId", o) != 0)
  {
    Py_DECREF(o);
  }

}

