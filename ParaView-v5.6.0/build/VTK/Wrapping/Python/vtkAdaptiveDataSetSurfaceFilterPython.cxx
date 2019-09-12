// python wrapper for vtkAdaptiveDataSetSurfaceFilter
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
#include "vtkAdaptiveDataSetSurfaceFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAdaptiveDataSetSurfaceFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAdaptiveDataSetSurfaceFilter_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetSurfaceFilter_ClassNew
extern "C" { PyObject *PyvtkDataSetSurfaceFilter_ClassNew(); }
#define DECLARED_PyvtkDataSetSurfaceFilter_ClassNew
#endif

static const char *PyvtkAdaptiveDataSetSurfaceFilter_Doc =
  "vtkAdaptiveDataSetSurfaceFilter - Adaptively extract dataset surface\n\n"
  "Superclass: vtkDataSetSurfaceFilter\n\n"
  "vtkAdaptiveDataSetSurfaceFilter uses view and dataset properties to\n"
  "create the outside surface mesh with the minimum minimorum of facets\n"
  "@warning\n"
  "Only implemented currently for 2-dimensional vtkHyperTreeGrid objects\n"
  "@sa\n"
  "vtkHyperTreeGrid vtkDataSetSurfaceFilter@par Thanks: This class was\n"
  "written by Guenole Harel and Jacques-Bernard Lekien, 2014 This class\n"
  "was rewritten by Philippe Pebay, 2016 This class was modified by\n"
  "Rogeli Grima, 2016 This work was supported by Commissariat a\n"
  "l'Energie Atomique (CEA/DIF)\n\n";


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAdaptiveDataSetSurfaceFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAdaptiveDataSetSurfaceFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAdaptiveDataSetSurfaceFilter *tempr = vtkAdaptiveDataSetSurfaceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAdaptiveDataSetSurfaceFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAdaptiveDataSetSurfaceFilter::NewInstance());

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
PyvtkAdaptiveDataSetSurfaceFilter_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkAdaptiveDataSetSurfaceFilter::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkAdaptiveDataSetSurfaceFilter::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkAdaptiveDataSetSurfaceFilter::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAdaptiveDataSetSurfaceFilter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAdaptiveDataSetSurfaceFilter_Methods[] = {
  {"IsTypeOf", PyvtkAdaptiveDataSetSurfaceFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAdaptiveDataSetSurfaceFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAdaptiveDataSetSurfaceFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAdaptiveDataSetSurfaceFilter\nC++: static vtkAdaptiveDataSetSurfaceFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAdaptiveDataSetSurfaceFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAdaptiveDataSetSurfaceFilter\nC++: vtkAdaptiveDataSetSurfaceFilter *NewInstance()\n\n"},
  {"SetRenderer", PyvtkAdaptiveDataSetSurfaceFilter_SetRenderer, METH_VARARGS,
   "V.SetRenderer(vtkRenderer)\nC++: void SetRenderer(vtkRenderer *ren)\n\nSet/Get the renderer attached to this adaptive surface extractor\n"},
  {"GetRenderer", PyvtkAdaptiveDataSetSurfaceFilter_GetRenderer, METH_VARARGS,
   "V.GetRenderer() -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\nSet/Get the renderer attached to this adaptive surface extractor\n"},
  {"SetScale", PyvtkAdaptiveDataSetSurfaceFilter_SetScale, METH_VARARGS,
   "V.SetScale(float)\nC++: virtual void SetScale(double _arg)\n\nSet the scale factor\n"},
  {"GetMTime", PyvtkAdaptiveDataSetSurfaceFilter_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the mtime of this object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAdaptiveDataSetSurfaceFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHybridPython.vtkAdaptiveDataSetSurfaceFilter", // tp_name
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
  PyvtkAdaptiveDataSetSurfaceFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAdaptiveDataSetSurfaceFilter_StaticNew()
{
  return vtkAdaptiveDataSetSurfaceFilter::New();
}

PyObject *PyvtkAdaptiveDataSetSurfaceFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAdaptiveDataSetSurfaceFilter_Type, PyvtkAdaptiveDataSetSurfaceFilter_Methods,
    "vtkAdaptiveDataSetSurfaceFilter",
 &PyvtkAdaptiveDataSetSurfaceFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkAdaptiveDataSetSurfaceFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetSurfaceFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAdaptiveDataSetSurfaceFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAdaptiveDataSetSurfaceFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAdaptiveDataSetSurfaceFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

