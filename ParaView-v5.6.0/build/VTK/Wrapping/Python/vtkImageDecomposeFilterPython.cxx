// python wrapper for vtkImageDecomposeFilter
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
#include "vtkImageDecomposeFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageDecomposeFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageDecomposeFilter_ClassNew(); }

#ifndef DECLARED_PyvtkImageIterateFilter_ClassNew
extern "C" { PyObject *PyvtkImageIterateFilter_ClassNew(); }
#define DECLARED_PyvtkImageIterateFilter_ClassNew
#endif

static const char *PyvtkImageDecomposeFilter_Doc =
  "vtkImageDecomposeFilter - Filters that execute axes in series.\n\n"
  "Superclass: vtkImageIterateFilter\n\n"
  "This superclass molds the vtkImageIterateFilter superclass so it\n"
  "iterates over the axes.  The filter uses dimensionality to determine\n"
  "how many axes to execute (starting from x). The filter also provides\n"
  "convenience methods for permuting information retrieved from input,\n"
  "output and vtkImageData.\n\n";


static PyObject *
PyvtkImageDecomposeFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageDecomposeFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDecomposeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDecomposeFilter *op = static_cast<vtkImageDecomposeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageDecomposeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDecomposeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageDecomposeFilter *tempr = vtkImageDecomposeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDecomposeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDecomposeFilter *op = static_cast<vtkImageDecomposeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageDecomposeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageDecomposeFilter::NewInstance());

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
PyvtkImageDecomposeFilter_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDecomposeFilter *op = static_cast<vtkImageDecomposeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDimensionality(temp0);
    }
    else
    {
      op->vtkImageDecomposeFilter::SetDimensionality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDecomposeFilter_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDecomposeFilter *op = static_cast<vtkImageDecomposeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionality() :
      op->vtkImageDecomposeFilter::GetDimensionality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDecomposeFilter_PermuteIncrements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PermuteIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDecomposeFilter *op = static_cast<vtkImageDecomposeFilter *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<vtkIdType> store0(2*size0);
  vtkIdType *temp0 = store0.Data();
  vtkIdType *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkIdType temp1;
  vtkIdType temp2;
  vtkIdType temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->PermuteIncrements(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageDecomposeFilter::PermuteIncrements(temp0, temp1, temp2, temp3);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDecomposeFilter_PermuteExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PermuteExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDecomposeFilter *op = static_cast<vtkImageDecomposeFilter *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->PermuteExtent(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkImageDecomposeFilter::PermuteExtent(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(6, temp6);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageDecomposeFilter_Methods[] = {
  {"IsTypeOf", PyvtkImageDecomposeFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"IsA", PyvtkImageDecomposeFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"SafeDownCast", PyvtkImageDecomposeFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageDecomposeFilter\nC++: static vtkImageDecomposeFilter *SafeDownCast(\n    vtkObjectBase *o)\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"NewInstance", PyvtkImageDecomposeFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageDecomposeFilter\nC++: vtkImageDecomposeFilter *NewInstance()\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"SetDimensionality", PyvtkImageDecomposeFilter_SetDimensionality, METH_VARARGS,
   "V.SetDimensionality(int)\nC++: void SetDimensionality(int dim)\n\nDimensionality is the number of axes which are considered during\nexecution. To process images dimensionality would be set to 2.\n"},
  {"GetDimensionality", PyvtkImageDecomposeFilter_GetDimensionality, METH_VARARGS,
   "V.GetDimensionality() -> int\nC++: virtual int GetDimensionality()\n\nDimensionality is the number of axes which are considered during\nexecution. To process images dimensionality would be set to 2.\n"},
  {"PermuteIncrements", PyvtkImageDecomposeFilter_PermuteIncrements, METH_VARARGS,
   "V.PermuteIncrements([int, ...], int, int, int)\nC++: void PermuteIncrements(vtkIdType *increments,\n    vtkIdType &inc0, vtkIdType &inc1, vtkIdType &inc2)\n\nPrivate methods kept public for template execute functions.\n"},
  {"PermuteExtent", PyvtkImageDecomposeFilter_PermuteExtent, METH_VARARGS,
   "V.PermuteExtent([int, ...], int, int, int, int, int, int)\nC++: void PermuteExtent(int *extent, int &min0, int &max0,\n    int &min1, int &max1, int &min2, int &max2)\n\nPrivate methods kept public for template execute functions.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageDecomposeFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImageDecomposeFilter", // tp_name
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
  PyvtkImageDecomposeFilter_Doc, // tp_doc
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

PyObject *PyvtkImageDecomposeFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageDecomposeFilter_Type, PyvtkImageDecomposeFilter_Methods,
    "vtkImageDecomposeFilter",
 nullptr);

  PyTypeObject *pytype = &PyvtkImageDecomposeFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageIterateFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageDecomposeFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageDecomposeFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageDecomposeFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

