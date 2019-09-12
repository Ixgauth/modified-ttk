// python wrapper for vtkAppendPoints
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
#include "vtkAppendPoints.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAppendPoints(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAppendPoints_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkAppendPoints_Doc =
  "vtkAppendPoints - appends points of one or more vtkPolyData data sets\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkAppendPoints is a filter that appends the points and associated\n"
  "data of one or more polygonal (vtkPolyData) datasets. This filter can\n"
  "optionally add a new array marking the input index that the point\n"
  "came from.\n\n"
  "@sa\n"
  "vtkAppendFilter vtkAppendPolyData\n\n";


static PyObject *
PyvtkAppendPoints_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAppendPoints::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPoints *op = static_cast<vtkAppendPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAppendPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAppendPoints *tempr = vtkAppendPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPoints *op = static_cast<vtkAppendPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAppendPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAppendPoints::NewInstance());

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
PyvtkAppendPoints_SetInputIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPoints *op = static_cast<vtkAppendPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputIdArrayName(temp0);
    }
    else
    {
      op->vtkAppendPoints::SetInputIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPoints_GetInputIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPoints *op = static_cast<vtkAppendPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInputIdArrayName() :
      op->vtkAppendPoints::GetInputIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPoints_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPoints *op = static_cast<vtkAppendPoints *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkAppendPoints::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPoints_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPoints *op = static_cast<vtkAppendPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkAppendPoints::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAppendPoints_Methods[] = {
  {"IsTypeOf", PyvtkAppendPoints_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAppendPoints_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAppendPoints_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAppendPoints\nC++: static vtkAppendPoints *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAppendPoints_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAppendPoints\nC++: vtkAppendPoints *NewInstance()\n\n"},
  {"SetInputIdArrayName", PyvtkAppendPoints_SetInputIdArrayName, METH_VARARGS,
   "V.SetInputIdArrayName(string)\nC++: virtual void SetInputIdArrayName(const char *_arg)\n\nSets the output array name to fill with the input connection\nindex for each point. This provides a way to trace a point back\nto a particular input. If this is nullptr (the default), the\narray is not generated.\n"},
  {"GetInputIdArrayName", PyvtkAppendPoints_GetInputIdArrayName, METH_VARARGS,
   "V.GetInputIdArrayName() -> string\nC++: virtual char *GetInputIdArrayName()\n\nSets the output array name to fill with the input connection\nindex for each point. This provides a way to trace a point back\nto a particular input. If this is nullptr (the default), the\narray is not generated.\n"},
  {"SetOutputPointsPrecision", PyvtkAppendPoints_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output type. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings. If the\ndesired precision is DEFAULT_PRECISION and any of the inputs are\ndouble precision, then the output precision will be double\nprecision. Otherwise, if the desired precision is\nDEFAULT_PRECISION and all the inputs are single precision, then\nthe output will be single precision.\n"},
  {"GetOutputPointsPrecision", PyvtkAppendPoints_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output type. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings. If the\ndesired precision is DEFAULT_PRECISION and any of the inputs are\ndouble precision, then the output precision will be double\nprecision. Otherwise, if the desired precision is\nDEFAULT_PRECISION and all the inputs are single precision, then\nthe output will be single precision.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAppendPoints_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkAppendPoints", // tp_name
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
  PyvtkAppendPoints_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAppendPoints_StaticNew()
{
  return vtkAppendPoints::New();
}

PyObject *PyvtkAppendPoints_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAppendPoints_Type, PyvtkAppendPoints_Methods,
    "vtkAppendPoints",
 &PyvtkAppendPoints_StaticNew);

  PyTypeObject *pytype = &PyvtkAppendPoints_Type;

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

void PyVTKAddFile_vtkAppendPoints(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAppendPoints_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAppendPoints", o) != 0)
  {
    Py_DECREF(o);
  }

}

