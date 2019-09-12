// python wrapper for vtkOpenGLSphereMapper
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
#include "vtkOpenGLSphereMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLSphereMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLSphereMapper_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLPolyDataMapper_ClassNew
extern "C" { PyObject *PyvtkOpenGLPolyDataMapper_ClassNew(); }
#define DECLARED_PyvtkOpenGLPolyDataMapper_ClassNew
#endif

static const char *PyvtkOpenGLSphereMapper_Doc =
  "vtkOpenGLSphereMapper - draw spheres using imposters\n\n"
  "Superclass: vtkOpenGLPolyDataMapper\n\n"
  "An OpenGL mapper that uses imposters to draw spheres. Supports\n"
  "transparency and picking as well.\n\n";


static PyObject *
PyvtkOpenGLSphereMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLSphereMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSphereMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSphereMapper *op = static_cast<vtkOpenGLSphereMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLSphereMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSphereMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLSphereMapper *tempr = vtkOpenGLSphereMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSphereMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSphereMapper *op = static_cast<vtkOpenGLSphereMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLSphereMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLSphereMapper::NewInstance());

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
PyvtkOpenGLSphereMapper_SetScaleArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSphereMapper *op = static_cast<vtkOpenGLSphereMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleArray(temp0);
    }
    else
    {
      op->vtkOpenGLSphereMapper::SetScaleArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSphereMapper_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSphereMapper *op = static_cast<vtkOpenGLSphereMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadius(temp0);
    }
    else
    {
      op->vtkOpenGLSphereMapper::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSphereMapper_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSphereMapper *op = static_cast<vtkOpenGLSphereMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkOpenGLSphereMapper::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSphereMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSphereMapper *op = static_cast<vtkOpenGLSphereMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLSphereMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLSphereMapper_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLSphereMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLSphereMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLSphereMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOpenGLSphereMapper\nC++: static vtkOpenGLSphereMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLSphereMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOpenGLSphereMapper\nC++: vtkOpenGLSphereMapper *NewInstance()\n\n"},
  {"SetScaleArray", PyvtkOpenGLSphereMapper_SetScaleArray, METH_VARARGS,
   "V.SetScaleArray(string)\nC++: virtual void SetScaleArray(const char *_arg)\n\nConvenience method to set the array to scale with.\n"},
  {"SetRadius", PyvtkOpenGLSphereMapper_SetRadius, METH_VARARGS,
   "V.SetRadius(float)\nC++: virtual void SetRadius(float _arg)\n\nThis value will be used for the radius is the scale array is not\nprovided.\n"},
  {"GetRadius", PyvtkOpenGLSphereMapper_GetRadius, METH_VARARGS,
   "V.GetRadius() -> float\nC++: virtual float GetRadius()\n\nThis value will be used for the radius is the scale array is not\nprovided.\n"},
  {"Render", PyvtkOpenGLSphereMapper_Render, METH_VARARGS,
   "V.Render(vtkRenderer, vtkActor)\nC++: void Render(vtkRenderer *ren, vtkActor *act) override;\n\nThis calls RenderPiece (twice when transparent)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOpenGLSphereMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLSphereMapper", // tp_name
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
  PyvtkOpenGLSphereMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLSphereMapper_StaticNew()
{
  return vtkOpenGLSphereMapper::New();
}

PyObject *PyvtkOpenGLSphereMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOpenGLSphereMapper_Type, PyvtkOpenGLSphereMapper_Methods,
    "vtkOpenGLSphereMapper",
 &PyvtkOpenGLSphereMapper_StaticNew);

  PyTypeObject *pytype = &PyvtkOpenGLSphereMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLPolyDataMapper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLSphereMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLSphereMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLSphereMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

