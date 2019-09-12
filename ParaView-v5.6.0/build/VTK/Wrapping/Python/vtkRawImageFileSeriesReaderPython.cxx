// python wrapper for vtkRawImageFileSeriesReader
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
#include "vtkRawImageFileSeriesReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRawImageFileSeriesReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRawImageFileSeriesReader_ClassNew(); }

#ifndef DECLARED_PyvtkImageFileSeriesReader_ClassNew
extern "C" { PyObject *PyvtkImageFileSeriesReader_ClassNew(); }
#define DECLARED_PyvtkImageFileSeriesReader_ClassNew
#endif

static const char *PyvtkRawImageFileSeriesReader_Doc =
  "vtkRawImageFileSeriesReader - adds support for optionally reading raw\nimage stacks.\n\n"
  "Superclass: vtkImageFileSeriesReader\n\n"
  "vtkRawImageFileSeriesReader is designed to read in raw files. The\n"
  "issue with raw files is that the extents are not known and must be\n"
  "passed to vtkImageReader2 and subclasses.\n\n";


static PyObject *
PyvtkRawImageFileSeriesReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRawImageFileSeriesReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRawImageFileSeriesReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRawImageFileSeriesReader *op = static_cast<vtkRawImageFileSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRawImageFileSeriesReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRawImageFileSeriesReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRawImageFileSeriesReader *tempr = vtkRawImageFileSeriesReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRawImageFileSeriesReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRawImageFileSeriesReader *op = static_cast<vtkRawImageFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRawImageFileSeriesReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRawImageFileSeriesReader::NewInstance());

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
PyvtkRawImageFileSeriesReader_SetFileDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRawImageFileSeriesReader *op = static_cast<vtkRawImageFileSeriesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileDimensionality(temp0);
    }
    else
    {
      op->vtkRawImageFileSeriesReader::SetFileDimensionality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRawImageFileSeriesReader_GetFileDimensionalityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileDimensionalityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRawImageFileSeriesReader *op = static_cast<vtkRawImageFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileDimensionalityMinValue() :
      op->vtkRawImageFileSeriesReader::GetFileDimensionalityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRawImageFileSeriesReader_GetFileDimensionalityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileDimensionalityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRawImageFileSeriesReader *op = static_cast<vtkRawImageFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileDimensionalityMaxValue() :
      op->vtkRawImageFileSeriesReader::GetFileDimensionalityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRawImageFileSeriesReader_GetFileDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRawImageFileSeriesReader *op = static_cast<vtkRawImageFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileDimensionality() :
      op->vtkRawImageFileSeriesReader::GetFileDimensionality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRawImageFileSeriesReader_SetDataExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRawImageFileSeriesReader *op = static_cast<vtkRawImageFileSeriesReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetDataExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkRawImageFileSeriesReader::SetDataExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRawImageFileSeriesReader_SetDataExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRawImageFileSeriesReader *op = static_cast<vtkRawImageFileSeriesReader *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDataExtent(temp0);
    }
    else
    {
      op->vtkRawImageFileSeriesReader::SetDataExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRawImageFileSeriesReader_SetDataExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkRawImageFileSeriesReader_SetDataExtent_s1(self, args);
    case 1:
      return PyvtkRawImageFileSeriesReader_SetDataExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataExtent");
  return nullptr;
}



static PyObject *
PyvtkRawImageFileSeriesReader_GetDataExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRawImageFileSeriesReader *op = static_cast<vtkRawImageFileSeriesReader *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDataExtent() :
      op->vtkRawImageFileSeriesReader::GetDataExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkRawImageFileSeriesReader_Methods[] = {
  {"IsTypeOf", PyvtkRawImageFileSeriesReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRawImageFileSeriesReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRawImageFileSeriesReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRawImageFileSeriesReader\nC++: static vtkRawImageFileSeriesReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRawImageFileSeriesReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRawImageFileSeriesReader\nC++: vtkRawImageFileSeriesReader *NewInstance()\n\n"},
  {"SetFileDimensionality", PyvtkRawImageFileSeriesReader_SetFileDimensionality, METH_VARARGS,
   "V.SetFileDimensionality(int)\nC++: virtual void SetFileDimensionality(int _arg)\n\nThe number of dimensions stored in a file. This defaults to two.\n"},
  {"GetFileDimensionalityMinValue", PyvtkRawImageFileSeriesReader_GetFileDimensionalityMinValue, METH_VARARGS,
   "V.GetFileDimensionalityMinValue() -> int\nC++: virtual int GetFileDimensionalityMinValue()\n\nThe number of dimensions stored in a file. This defaults to two.\n"},
  {"GetFileDimensionalityMaxValue", PyvtkRawImageFileSeriesReader_GetFileDimensionalityMaxValue, METH_VARARGS,
   "V.GetFileDimensionalityMaxValue() -> int\nC++: virtual int GetFileDimensionalityMaxValue()\n\nThe number of dimensions stored in a file. This defaults to two.\n"},
  {"GetFileDimensionality", PyvtkRawImageFileSeriesReader_GetFileDimensionality, METH_VARARGS,
   "V.GetFileDimensionality() -> int\nC++: virtual int GetFileDimensionality()\n\nThe number of dimensions stored in a file. This defaults to two.\n"},
  {"SetDataExtent", PyvtkRawImageFileSeriesReader_SetDataExtent, METH_VARARGS,
   "V.SetDataExtent(int, int, int, int, int, int)\nC++: void SetDataExtent(int, int, int, int, int, int)\nV.SetDataExtent((int, int, int, int, int, int))\nC++: void SetDataExtent(int a[6])\n\n"},
  {"GetDataExtent", PyvtkRawImageFileSeriesReader_GetDataExtent, METH_VARARGS,
   "V.GetDataExtent() -> (int, int, int, int, int, int)\nC++: int *GetDataExtent()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRawImageFileSeriesReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkRawImageFileSeriesReader", // tp_name
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
  PyvtkRawImageFileSeriesReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRawImageFileSeriesReader_StaticNew()
{
  return vtkRawImageFileSeriesReader::New();
}

PyObject *PyvtkRawImageFileSeriesReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRawImageFileSeriesReader_Type, PyvtkRawImageFileSeriesReader_Methods,
    "vtkRawImageFileSeriesReader",
 &PyvtkRawImageFileSeriesReader_StaticNew);

  PyTypeObject *pytype = &PyvtkRawImageFileSeriesReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageFileSeriesReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRawImageFileSeriesReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRawImageFileSeriesReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRawImageFileSeriesReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

