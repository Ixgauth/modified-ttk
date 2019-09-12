// python wrapper for vtkNetCDFPOPReader
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
#include "vtkNetCDFPOPReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkNetCDFPOPReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkNetCDFPOPReader_ClassNew(); }

#ifndef DECLARED_PyvtkRectilinearGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkRectilinearGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkRectilinearGridAlgorithm_ClassNew
#endif

static const char *PyvtkNetCDFPOPReader_Doc =
  "vtkNetCDFPOPReader - read NetCDF files .Author Joshua Wu 09.15.2009\n\n"
  "Superclass: vtkRectilinearGridAlgorithm\n\n"
  "vtkNetCDFPOPReader is a source object that reads NetCDF files. It\n"
  "should be able to read most any NetCDF file that wants to output a\n"
  "rectilinear grid.  The ordering of the variables is changed such that\n"
  "the NetCDF x, y, z directions correspond to the vtkRectilinearGrid z,\n"
  "y, x directions, respectively.  The striding is done with respect to\n"
  "the vtkRectilinearGrid ordering.  Additionally, the z coordinates of\n"
  "the vtkRectilinearGrid are negated so that the first slice/plane has\n"
  "the highest z-value and the last slice/plane has the lowest z-value.\n\n";


static PyObject *
PyvtkNetCDFPOPReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkNetCDFPOPReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNetCDFPOPReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkNetCDFPOPReader *tempr = vtkNetCDFPOPReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNetCDFPOPReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNetCDFPOPReader::NewInstance());

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
PyvtkNetCDFPOPReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkNetCDFPOPReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkNetCDFPOPReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_SetStride_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetStride(temp0, temp1, temp2);
    }
    else
    {
      op->vtkNetCDFPOPReader::SetStride(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNetCDFPOPReader_SetStride_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetStride(temp0);
    }
    else
    {
      op->vtkNetCDFPOPReader::SetStride(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNetCDFPOPReader_SetStride(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkNetCDFPOPReader_SetStride_s1(self, args);
    case 1:
      return PyvtkNetCDFPOPReader_SetStride_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetStride");
  return nullptr;
}



static PyObject *
PyvtkNetCDFPOPReader_GetStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetStride() :
      op->vtkNetCDFPOPReader::GetStride());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_GetNumberOfVariableArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariableArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVariableArrays() :
      op->vtkNetCDFPOPReader::GetNumberOfVariableArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_GetVariableArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVariableArrayName(temp0) :
      op->vtkNetCDFPOPReader::GetVariableArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_GetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVariableArrayStatus(temp0) :
      op->vtkNetCDFPOPReader::GetVariableArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_SetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetVariableArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkNetCDFPOPReader::SetVariableArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkNetCDFPOPReader_Methods[] = {
  {"IsTypeOf", PyvtkNetCDFPOPReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkNetCDFPOPReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkNetCDFPOPReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkNetCDFPOPReader\nC++: static vtkNetCDFPOPReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkNetCDFPOPReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkNetCDFPOPReader\nC++: vtkNetCDFPOPReader *NewInstance()\n\n"},
  {"SetFileName", PyvtkNetCDFPOPReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nThe file to open\n"},
  {"GetFileName", PyvtkNetCDFPOPReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nThe file to open\n"},
  {"SetStride", PyvtkNetCDFPOPReader_SetStride, METH_VARARGS,
   "V.SetStride(int, int, int)\nC++: void SetStride(int, int, int)\nV.SetStride((int, int, int))\nC++: void SetStride(int a[3])\n\n"},
  {"GetStride", PyvtkNetCDFPOPReader_GetStride, METH_VARARGS,
   "V.GetStride() -> (int, int, int)\nC++: int *GetStride()\n\n"},
  {"GetNumberOfVariableArrays", PyvtkNetCDFPOPReader_GetNumberOfVariableArrays, METH_VARARGS,
   "V.GetNumberOfVariableArrays() -> int\nC++: virtual int GetNumberOfVariableArrays()\n\nVariable array selection.\n"},
  {"GetVariableArrayName", PyvtkNetCDFPOPReader_GetVariableArrayName, METH_VARARGS,
   "V.GetVariableArrayName(int) -> string\nC++: virtual const char *GetVariableArrayName(int idx)\n\nVariable array selection.\n"},
  {"GetVariableArrayStatus", PyvtkNetCDFPOPReader_GetVariableArrayStatus, METH_VARARGS,
   "V.GetVariableArrayStatus(string) -> int\nC++: virtual int GetVariableArrayStatus(const char *name)\n\nVariable array selection.\n"},
  {"SetVariableArrayStatus", PyvtkNetCDFPOPReader_SetVariableArrayStatus, METH_VARARGS,
   "V.SetVariableArrayStatus(string, int)\nC++: virtual void SetVariableArrayStatus(const char *name,\n    int status)\n\nVariable array selection.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkNetCDFPOPReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIONetCDFPython.vtkNetCDFPOPReader", // tp_name
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
  PyvtkNetCDFPOPReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkNetCDFPOPReader_StaticNew()
{
  return vtkNetCDFPOPReader::New();
}

PyObject *PyvtkNetCDFPOPReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkNetCDFPOPReader_Type, PyvtkNetCDFPOPReader_Methods,
    "vtkNetCDFPOPReader",
 &PyvtkNetCDFPOPReader_StaticNew);

  PyTypeObject *pytype = &PyvtkNetCDFPOPReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkRectilinearGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkNetCDFPOPReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkNetCDFPOPReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkNetCDFPOPReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

