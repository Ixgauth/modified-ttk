// python wrapper for vtkCompositeSurfaceLICMapper
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
#include "vtkCompositeSurfaceLICMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositeSurfaceLICMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCompositeSurfaceLICMapper_ClassNew(); }

#ifndef DECLARED_PyvtkCompositePolyDataMapper2_ClassNew
extern "C" { PyObject *PyvtkCompositePolyDataMapper2_ClassNew(); }
#define DECLARED_PyvtkCompositePolyDataMapper2_ClassNew
#endif

static const char *PyvtkCompositeSurfaceLICMapper_Doc =
  "vtkCompositeSurfaceLICMapper - mapper for composite dataset\n\n"
  "Superclass: vtkCompositePolyDataMapper2\n\n"
  "vtkCompositeSurfaceLICMapper is similar to\n"
  "vtkGenericCompositeSurfaceLICMapper but requires that its inputs all\n"
  "have the same properties (normals, tcoord, scalars, etc) It will only\n"
  "draw polys and it does not support edge flags. The advantage to using\n"
  "this class is that it generally should be faster\n\n";


static PyObject *
PyvtkCompositeSurfaceLICMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositeSurfaceLICMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeSurfaceLICMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeSurfaceLICMapper *op = static_cast<vtkCompositeSurfaceLICMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeSurfaceLICMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeSurfaceLICMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositeSurfaceLICMapper *tempr = vtkCompositeSurfaceLICMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeSurfaceLICMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeSurfaceLICMapper *op = static_cast<vtkCompositeSurfaceLICMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeSurfaceLICMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeSurfaceLICMapper::NewInstance());

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
PyvtkCompositeSurfaceLICMapper_GetLICInterface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLICInterface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeSurfaceLICMapper *op = static_cast<vtkCompositeSurfaceLICMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSurfaceLICInterface *tempr = (ap.IsBound() ?
      op->GetLICInterface() :
      op->vtkCompositeSurfaceLICMapper::GetLICInterface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeSurfaceLICMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeSurfaceLICMapper *op = static_cast<vtkCompositeSurfaceLICMapper *>(vp);

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
      op->vtkCompositeSurfaceLICMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeSurfaceLICMapper_Methods[] = {
  {"IsTypeOf", PyvtkCompositeSurfaceLICMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositeSurfaceLICMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositeSurfaceLICMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCompositeSurfaceLICMapper\nC++: static vtkCompositeSurfaceLICMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositeSurfaceLICMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCompositeSurfaceLICMapper\nC++: vtkCompositeSurfaceLICMapper *NewInstance()\n\n"},
  {"GetLICInterface", PyvtkCompositeSurfaceLICMapper_GetLICInterface, METH_VARARGS,
   "V.GetLICInterface() -> vtkSurfaceLICInterface\nC++: vtkSurfaceLICInterface *GetLICInterface()\n\nGet the vtkSurfaceLICInterface used by this mapper\n"},
  {"Render", PyvtkCompositeSurfaceLICMapper_Render, METH_VARARGS,
   "V.Render(vtkRenderer, vtkActor)\nC++: void Render(vtkRenderer *ren, vtkActor *act) override;\n\nLots of LIC setup code\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCompositeSurfaceLICMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingLICOpenGL2Python.vtkCompositeSurfaceLICMapper", // tp_name
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
  PyvtkCompositeSurfaceLICMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositeSurfaceLICMapper_StaticNew()
{
  return vtkCompositeSurfaceLICMapper::New();
}

PyObject *PyvtkCompositeSurfaceLICMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCompositeSurfaceLICMapper_Type, PyvtkCompositeSurfaceLICMapper_Methods,
    "vtkCompositeSurfaceLICMapper",
 &PyvtkCompositeSurfaceLICMapper_StaticNew);

  PyTypeObject *pytype = &PyvtkCompositeSurfaceLICMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCompositePolyDataMapper2_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompositeSurfaceLICMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositeSurfaceLICMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeSurfaceLICMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

