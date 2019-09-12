// python wrapper for vtkWindBladeReader
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
#include "vtkWindBladeReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWindBladeReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkWindBladeReader_ClassNew(); }

#ifndef DECLARED_PyvtkStructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkStructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkStructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkWindBladeReader_Doc =
  "vtkWindBladeReader - class for reading WindBlade data files\n\n"
  "Superclass: vtkStructuredGridAlgorithm\n\n"
  "vtkWindBladeReader is a source object that reads WindBlade files\n"
  "which are block binary files with tags before and after each block\n"
  "giving the number of bytes within the block.  The number of data\n"
  "variables dumped varies.  There are 3 output ports with the first\n"
  "being a structured grid with irregular spacing in the Z dimension.\n"
  "The second is an unstructured grid only read on on process 0 and used\n"
  "to represent the blade.  The third is also a structured grid with\n"
  "irregular spacing on the Z dimension.  Only the first and second\n"
  "output ports have time dependent data.\n\n";


static PyObject *
PyvtkWindBladeReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWindBladeReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindBladeReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWindBladeReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindBladeReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWindBladeReader *tempr = vtkWindBladeReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindBladeReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWindBladeReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWindBladeReader::NewInstance());

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
PyvtkWindBladeReader_SetFilename(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilename");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFilename(temp0);
    }
    else
    {
      op->vtkWindBladeReader::SetFilename(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindBladeReader_GetFilename(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilename");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFilename() :
      op->vtkWindBladeReader::GetFilename());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindBladeReader_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

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
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkWindBladeReader::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindBladeReader_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetWholeExtent(temp0);
    }
    else
    {
      op->vtkWindBladeReader::SetWholeExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindBladeReader_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkWindBladeReader_SetWholeExtent_s1(self, args);
    case 1:
      return PyvtkWindBladeReader_SetWholeExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return nullptr;
}



static PyObject *
PyvtkWindBladeReader_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetWholeExtent() :
      op->vtkWindBladeReader::GetWholeExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWindBladeReader_SetSubExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

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
      op->SetSubExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkWindBladeReader::SetSubExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindBladeReader_SetSubExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSubExtent(temp0);
    }
    else
    {
      op->vtkWindBladeReader::SetSubExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindBladeReader_SetSubExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkWindBladeReader_SetSubExtent_s1(self, args);
    case 1:
      return PyvtkWindBladeReader_SetSubExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSubExtent");
  return nullptr;
}



static PyObject *
PyvtkWindBladeReader_GetSubExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSubExtent() :
      op->vtkWindBladeReader::GetSubExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWindBladeReader_GetFieldOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredGrid *tempr = (ap.IsBound() ?
      op->GetFieldOutput() :
      op->vtkWindBladeReader::GetFieldOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindBladeReader_GetBladeOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBladeOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetBladeOutput() :
      op->vtkWindBladeReader::GetBladeOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindBladeReader_GetGroundOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroundOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredGrid *tempr = (ap.IsBound() ?
      op->GetGroundOutput() :
      op->vtkWindBladeReader::GetGroundOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindBladeReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkWindBladeReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindBladeReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkWindBladeReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindBladeReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkWindBladeReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindBladeReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkWindBladeReader::SetPointArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindBladeReader_DisableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllPointArrays();
    }
    else
    {
      op->vtkWindBladeReader::DisableAllPointArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindBladeReader_EnableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllPointArrays();
    }
    else
    {
      op->vtkWindBladeReader::EnableAllPointArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkWindBladeReader_Methods[] = {
  {"IsTypeOf", PyvtkWindBladeReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWindBladeReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWindBladeReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkWindBladeReader\nC++: static vtkWindBladeReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWindBladeReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkWindBladeReader\nC++: vtkWindBladeReader *NewInstance()\n\n"},
  {"SetFilename", PyvtkWindBladeReader_SetFilename, METH_VARARGS,
   "V.SetFilename(string)\nC++: virtual void SetFilename(const char *_arg)\n\n"},
  {"GetFilename", PyvtkWindBladeReader_GetFilename, METH_VARARGS,
   "V.GetFilename() -> string\nC++: virtual char *GetFilename()\n\n"},
  {"SetWholeExtent", PyvtkWindBladeReader_SetWholeExtent, METH_VARARGS,
   "V.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int, int, int, int, int, int)\nV.SetWholeExtent((int, int, int, int, int, int))\nC++: void SetWholeExtent(int a[6])\n\n"},
  {"GetWholeExtent", PyvtkWindBladeReader_GetWholeExtent, METH_VARARGS,
   "V.GetWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetWholeExtent()\n\n"},
  {"SetSubExtent", PyvtkWindBladeReader_SetSubExtent, METH_VARARGS,
   "V.SetSubExtent(int, int, int, int, int, int)\nC++: void SetSubExtent(int, int, int, int, int, int)\nV.SetSubExtent((int, int, int, int, int, int))\nC++: void SetSubExtent(int a[6])\n\n"},
  {"GetSubExtent", PyvtkWindBladeReader_GetSubExtent, METH_VARARGS,
   "V.GetSubExtent() -> (int, int, int, int, int, int)\nC++: int *GetSubExtent()\n\n"},
  {"GetFieldOutput", PyvtkWindBladeReader_GetFieldOutput, METH_VARARGS,
   "V.GetFieldOutput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetFieldOutput()\n\nGet the reader's output\n"},
  {"GetBladeOutput", PyvtkWindBladeReader_GetBladeOutput, METH_VARARGS,
   "V.GetBladeOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetBladeOutput()\n\n"},
  {"GetGroundOutput", PyvtkWindBladeReader_GetGroundOutput, METH_VARARGS,
   "V.GetGroundOutput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetGroundOutput()\n\n"},
  {"GetNumberOfPointArrays", PyvtkWindBladeReader_GetNumberOfPointArrays, METH_VARARGS,
   "V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {"GetPointArrayName", PyvtkWindBladeReader_GetPointArrayName, METH_VARARGS,
   "V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {"GetPointArrayStatus", PyvtkWindBladeReader_GetPointArrayStatus, METH_VARARGS,
   "V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\n"},
  {"SetPointArrayStatus", PyvtkWindBladeReader_SetPointArrayStatus, METH_VARARGS,
   "V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\n"},
  {"DisableAllPointArrays", PyvtkWindBladeReader_DisableAllPointArrays, METH_VARARGS,
   "V.DisableAllPointArrays()\nC++: void DisableAllPointArrays()\n\n"},
  {"EnableAllPointArrays", PyvtkWindBladeReader_EnableAllPointArrays, METH_VARARGS,
   "V.EnableAllPointArrays()\nC++: void EnableAllPointArrays()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkWindBladeReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOGeometryPython.vtkWindBladeReader", // tp_name
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
  PyvtkWindBladeReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWindBladeReader_StaticNew()
{
  return vtkWindBladeReader::New();
}

PyObject *PyvtkWindBladeReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkWindBladeReader_Type, PyvtkWindBladeReader_Methods,
    "vtkWindBladeReader",
 &PyvtkWindBladeReader_StaticNew);

  PyTypeObject *pytype = &PyvtkWindBladeReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkStructuredGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWindBladeReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWindBladeReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWindBladeReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

