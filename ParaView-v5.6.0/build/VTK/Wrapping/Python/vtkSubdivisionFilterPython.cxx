// python wrapper for vtkSubdivisionFilter
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
#include "vtkSubdivisionFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSubdivisionFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSubdivisionFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkSubdivisionFilter_Doc =
  "vtkSubdivisionFilter - base class for subvision filters\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkSubdivisionFilter is an abstract class that defines the protocol\n"
  "for subdivision surface filters.\n\n";


static PyObject *
PyvtkSubdivisionFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSubdivisionFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubdivisionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubdivisionFilter *op = static_cast<vtkSubdivisionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSubdivisionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubdivisionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSubdivisionFilter *tempr = vtkSubdivisionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubdivisionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubdivisionFilter *op = static_cast<vtkSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSubdivisionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSubdivisionFilter::NewInstance());

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
PyvtkSubdivisionFilter_SetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubdivisionFilter *op = static_cast<vtkSubdivisionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSubdivisions(temp0);
    }
    else
    {
      op->vtkSubdivisionFilter::SetNumberOfSubdivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSubdivisionFilter_GetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubdivisionFilter *op = static_cast<vtkSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSubdivisions() :
      op->vtkSubdivisionFilter::GetNumberOfSubdivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubdivisionFilter_SetCheckForTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckForTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubdivisionFilter *op = static_cast<vtkSubdivisionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCheckForTriangles(temp0);
    }
    else
    {
      op->vtkSubdivisionFilter::SetCheckForTriangles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSubdivisionFilter_GetCheckForTrianglesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckForTrianglesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubdivisionFilter *op = static_cast<vtkSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCheckForTrianglesMinValue() :
      op->vtkSubdivisionFilter::GetCheckForTrianglesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubdivisionFilter_GetCheckForTrianglesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckForTrianglesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubdivisionFilter *op = static_cast<vtkSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCheckForTrianglesMaxValue() :
      op->vtkSubdivisionFilter::GetCheckForTrianglesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubdivisionFilter_GetCheckForTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckForTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubdivisionFilter *op = static_cast<vtkSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCheckForTriangles() :
      op->vtkSubdivisionFilter::GetCheckForTriangles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubdivisionFilter_CheckForTrianglesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckForTrianglesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubdivisionFilter *op = static_cast<vtkSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CheckForTrianglesOn();
    }
    else
    {
      op->vtkSubdivisionFilter::CheckForTrianglesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSubdivisionFilter_CheckForTrianglesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckForTrianglesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubdivisionFilter *op = static_cast<vtkSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CheckForTrianglesOff();
    }
    else
    {
      op->vtkSubdivisionFilter::CheckForTrianglesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSubdivisionFilter_Methods[] = {
  {"IsTypeOf", PyvtkSubdivisionFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSubdivisionFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSubdivisionFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSubdivisionFilter\nC++: static vtkSubdivisionFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSubdivisionFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSubdivisionFilter\nC++: vtkSubdivisionFilter *NewInstance()\n\n"},
  {"SetNumberOfSubdivisions", PyvtkSubdivisionFilter_SetNumberOfSubdivisions, METH_VARARGS,
   "V.SetNumberOfSubdivisions(int)\nC++: virtual void SetNumberOfSubdivisions(int _arg)\n\nSet/get the number of subdivisions. Default is 1.\n"},
  {"GetNumberOfSubdivisions", PyvtkSubdivisionFilter_GetNumberOfSubdivisions, METH_VARARGS,
   "V.GetNumberOfSubdivisions() -> int\nC++: virtual int GetNumberOfSubdivisions()\n\nSet/get the number of subdivisions. Default is 1.\n"},
  {"SetCheckForTriangles", PyvtkSubdivisionFilter_SetCheckForTriangles, METH_VARARGS,
   "V.SetCheckForTriangles(int)\nC++: virtual void SetCheckForTriangles(vtkTypeBool _arg)\n\nSet/get CheckForTriangles Should subdivision check that the\ndataset only contains triangles? Default is On (1).\n"},
  {"GetCheckForTrianglesMinValue", PyvtkSubdivisionFilter_GetCheckForTrianglesMinValue, METH_VARARGS,
   "V.GetCheckForTrianglesMinValue() -> int\nC++: virtual vtkTypeBool GetCheckForTrianglesMinValue()\n\nSet/get CheckForTriangles Should subdivision check that the\ndataset only contains triangles? Default is On (1).\n"},
  {"GetCheckForTrianglesMaxValue", PyvtkSubdivisionFilter_GetCheckForTrianglesMaxValue, METH_VARARGS,
   "V.GetCheckForTrianglesMaxValue() -> int\nC++: virtual vtkTypeBool GetCheckForTrianglesMaxValue()\n\nSet/get CheckForTriangles Should subdivision check that the\ndataset only contains triangles? Default is On (1).\n"},
  {"GetCheckForTriangles", PyvtkSubdivisionFilter_GetCheckForTriangles, METH_VARARGS,
   "V.GetCheckForTriangles() -> int\nC++: virtual vtkTypeBool GetCheckForTriangles()\n\nSet/get CheckForTriangles Should subdivision check that the\ndataset only contains triangles? Default is On (1).\n"},
  {"CheckForTrianglesOn", PyvtkSubdivisionFilter_CheckForTrianglesOn, METH_VARARGS,
   "V.CheckForTrianglesOn()\nC++: virtual void CheckForTrianglesOn()\n\nSet/get CheckForTriangles Should subdivision check that the\ndataset only contains triangles? Default is On (1).\n"},
  {"CheckForTrianglesOff", PyvtkSubdivisionFilter_CheckForTrianglesOff, METH_VARARGS,
   "V.CheckForTrianglesOff()\nC++: virtual void CheckForTrianglesOff()\n\nSet/get CheckForTriangles Should subdivision check that the\ndataset only contains triangles? Default is On (1).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSubdivisionFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkSubdivisionFilter", // tp_name
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
  PyvtkSubdivisionFilter_Doc, // tp_doc
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

PyObject *PyvtkSubdivisionFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSubdivisionFilter_Type, PyvtkSubdivisionFilter_Methods,
    "vtkSubdivisionFilter",
 nullptr);

  PyTypeObject *pytype = &PyvtkSubdivisionFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSubdivisionFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSubdivisionFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSubdivisionFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

