// python wrapper for vtkTextureUnitManager
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
#include "vtkTextureUnitManager.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTextureUnitManager(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTextureUnitManager_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkTextureUnitManager_Doc =
  "vtkTextureUnitManager - allocate/free texture units.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkTextureUnitManager is a central place used by shaders to reserve a\n"
  "texture unit ( Allocate() ) or release it ( Free() ).\n\n"
  "Don't create a vtkTextureUnitManager, query it from the\n"
  "vtkOpenGLRenderWindow\n\n"
  "@sa\n"
  "vtkOpenGLRenderWindow\n\n";


static PyObject *
PyvtkTextureUnitManager_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTextureUnitManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureUnitManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureUnitManager *op = static_cast<vtkTextureUnitManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextureUnitManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureUnitManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTextureUnitManager *tempr = vtkTextureUnitManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureUnitManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureUnitManager *op = static_cast<vtkTextureUnitManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextureUnitManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextureUnitManager::NewInstance());

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
PyvtkTextureUnitManager_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureUnitManager *op = static_cast<vtkTextureUnitManager *>(vp);

  vtkOpenGLRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetContext(temp0);
    }
    else
    {
      op->vtkTextureUnitManager::SetContext(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureUnitManager_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureUnitManager *op = static_cast<vtkTextureUnitManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLRenderWindow *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkTextureUnitManager::GetContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureUnitManager_GetNumberOfTextureUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTextureUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureUnitManager *op = static_cast<vtkTextureUnitManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTextureUnits() :
      op->vtkTextureUnitManager::GetNumberOfTextureUnits());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureUnitManager_Allocate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureUnitManager *op = static_cast<vtkTextureUnitManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Allocate() :
      op->vtkTextureUnitManager::Allocate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextureUnitManager_Allocate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureUnitManager *op = static_cast<vtkTextureUnitManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Allocate(temp0) :
      op->vtkTextureUnitManager::Allocate(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextureUnitManager_Allocate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkTextureUnitManager_Allocate_s1(self, args);
    case 1:
      return PyvtkTextureUnitManager_Allocate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Allocate");
  return nullptr;
}



static PyObject *
PyvtkTextureUnitManager_IsAllocated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAllocated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureUnitManager *op = static_cast<vtkTextureUnitManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsAllocated(temp0) :
      op->vtkTextureUnitManager::IsAllocated(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureUnitManager_Free(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Free");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureUnitManager *op = static_cast<vtkTextureUnitManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Free(temp0);
    }
    else
    {
      op->vtkTextureUnitManager::Free(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTextureUnitManager_Methods[] = {
  {"IsTypeOf", PyvtkTextureUnitManager_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTextureUnitManager_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTextureUnitManager_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTextureUnitManager\nC++: static vtkTextureUnitManager *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTextureUnitManager_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTextureUnitManager\nC++: vtkTextureUnitManager *NewInstance()\n\n"},
  {"SetContext", PyvtkTextureUnitManager_SetContext, METH_VARARGS,
   "V.SetContext(vtkOpenGLRenderWindow)\nC++: void SetContext(vtkOpenGLRenderWindow *context)\n\nGet/Set the context. This does not increase the reference count\nof the context to avoid reference loops. SetContext() may raise\nan error is the OpenGL context does not support the required\nOpenGL extensions.\n"},
  {"GetContext", PyvtkTextureUnitManager_GetContext, METH_VARARGS,
   "V.GetContext() -> vtkOpenGLRenderWindow\nC++: virtual vtkOpenGLRenderWindow *GetContext()\n\nGet/Set the context. This does not increase the reference count\nof the context to avoid reference loops. SetContext() may raise\nan error is the OpenGL context does not support the required\nOpenGL extensions.\n"},
  {"GetNumberOfTextureUnits", PyvtkTextureUnitManager_GetNumberOfTextureUnits, METH_VARARGS,
   "V.GetNumberOfTextureUnits() -> int\nC++: int GetNumberOfTextureUnits()\n\nNumber of texture units supported by the OpenGL context.\n"},
  {"Allocate", PyvtkTextureUnitManager_Allocate, METH_VARARGS,
   "V.Allocate() -> int\nC++: virtual int Allocate()\nV.Allocate(int) -> int\nC++: virtual int Allocate(int unit)\n\nReserve a texture unit. It returns its number. It returns -1 if\nthe allocation failed (because there are no more texture units\nleft).\n\\post valid_result: result==-1 || result>=0 &&\n    result<this->GetNumberOfTextureUnits())\n\\post allocated: result==-1 || this->IsAllocated(result)\n"},
  {"IsAllocated", PyvtkTextureUnitManager_IsAllocated, METH_VARARGS,
   "V.IsAllocated(int) -> bool\nC++: bool IsAllocated(int textureUnitId)\n\nTell if texture unit `textureUnitId' is already allocated.\n\\pre valid_textureUnitId_range : textureUnitId>=0 &&\n    textureUnitId<this->GetNumberOfTextureUnits()\n"},
  {"Free", PyvtkTextureUnitManager_Free, METH_VARARGS,
   "V.Free(int)\nC++: virtual void Free(int textureUnitId)\n\nRelease a texture unit.\n\\pre valid_textureUnitId: textureUnitId>=0 &&\n    textureUnitId<this->GetNumberOfTextureUnits()\n\\pre allocated_textureUnitId: this->IsAllocated(textureUnitId)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTextureUnitManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkTextureUnitManager", // tp_name
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
  PyvtkTextureUnitManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTextureUnitManager_StaticNew()
{
  return vtkTextureUnitManager::New();
}

PyObject *PyvtkTextureUnitManager_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTextureUnitManager_Type, PyvtkTextureUnitManager_Methods,
    "vtkTextureUnitManager",
 &PyvtkTextureUnitManager_StaticNew);

  PyTypeObject *pytype = &PyvtkTextureUnitManager_Type;

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

void PyVTKAddFile_vtkTextureUnitManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTextureUnitManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTextureUnitManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

