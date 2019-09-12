// python wrapper for vtkPhastaReader
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
#include "vtkPhastaReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPhastaReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPhastaReader_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkPhastaReader_Doc =
  "vtkPhastaReader - Reader for RPI's PHASTA software\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkPhastaReader reads RPI's Scorec's PHASTA (Parallel Hierarchic\n"
  "Adaptive Stabilized Transient Analysis) dumps.  See\n"
  "http://www.scorec.rpi.edu/software_products.html or contact Scorec\n"
  "for information on PHASTA.\n\n";


static PyObject *
PyvtkPhastaReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPhastaReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPhastaReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhastaReader *op = static_cast<vtkPhastaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPhastaReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPhastaReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPhastaReader *tempr = vtkPhastaReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPhastaReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhastaReader *op = static_cast<vtkPhastaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPhastaReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPhastaReader::NewInstance());

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
PyvtkPhastaReader_SetGeometryFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometryFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhastaReader *op = static_cast<vtkPhastaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeometryFileName(temp0);
    }
    else
    {
      op->vtkPhastaReader::SetGeometryFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPhastaReader_GetGeometryFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometryFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhastaReader *op = static_cast<vtkPhastaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetGeometryFileName() :
      op->vtkPhastaReader::GetGeometryFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPhastaReader_SetFieldFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhastaReader *op = static_cast<vtkPhastaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldFileName(temp0);
    }
    else
    {
      op->vtkPhastaReader::SetFieldFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPhastaReader_GetFieldFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhastaReader *op = static_cast<vtkPhastaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFieldFileName() :
      op->vtkPhastaReader::GetFieldFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPhastaReader_ClearFieldInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearFieldInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhastaReader *op = static_cast<vtkPhastaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearFieldInfo();
    }
    else
    {
      op->vtkPhastaReader::ClearFieldInfo();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPhastaReader_SetFieldInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhastaReader *op = static_cast<vtkPhastaReader *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  int temp4;
  const char *temp5 = nullptr;
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
      op->SetFieldInfo(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkPhastaReader::SetFieldInfo(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPhastaReader_SetCachedGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCachedGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhastaReader *op = static_cast<vtkPhastaReader *>(vp);

  vtkUnstructuredGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid"))
  {
    if (ap.IsBound())
    {
      op->SetCachedGrid(temp0);
    }
    else
    {
      op->vtkPhastaReader::SetCachedGrid(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPhastaReader_GetCachedGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCachedGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhastaReader *op = static_cast<vtkPhastaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetCachedGrid() :
      op->vtkPhastaReader::GetCachedGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPhastaReader_Methods[] = {
  {"IsTypeOf", PyvtkPhastaReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPhastaReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPhastaReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPhastaReader\nC++: static vtkPhastaReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPhastaReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPhastaReader\nC++: vtkPhastaReader *NewInstance()\n\n"},
  {"SetGeometryFileName", PyvtkPhastaReader_SetGeometryFileName, METH_VARARGS,
   "V.SetGeometryFileName(string)\nC++: virtual void SetGeometryFileName(const char *_arg)\n\nSpecify file name of Phasta geometry file to read.\n"},
  {"GetGeometryFileName", PyvtkPhastaReader_GetGeometryFileName, METH_VARARGS,
   "V.GetGeometryFileName() -> string\nC++: virtual char *GetGeometryFileName()\n\nSpecify file name of Phasta geometry file to read.\n"},
  {"SetFieldFileName", PyvtkPhastaReader_SetFieldFileName, METH_VARARGS,
   "V.SetFieldFileName(string)\nC++: virtual void SetFieldFileName(const char *_arg)\n\nSpecify file name of Phasta field file to read.\n"},
  {"GetFieldFileName", PyvtkPhastaReader_GetFieldFileName, METH_VARARGS,
   "V.GetFieldFileName() -> string\nC++: virtual char *GetFieldFileName()\n\nSpecify file name of Phasta field file to read.\n"},
  {"ClearFieldInfo", PyvtkPhastaReader_ClearFieldInfo, METH_VARARGS,
   "V.ClearFieldInfo()\nC++: void ClearFieldInfo()\n\nClear/Set info. in FieldInfoMap for object of\nvtkPhastaReaderInternal\n"},
  {"SetFieldInfo", PyvtkPhastaReader_SetFieldInfo, METH_VARARGS,
   "V.SetFieldInfo(string, string, int, int, int, string)\nC++: void SetFieldInfo(const char *paraviewFieldTag,\n    const char *phastaFieldTag, int index, int numOfComps,\n    int dataDependency, const char *dataType)\n\nClear/Set info. in FieldInfoMap for object of\nvtkPhastaReaderInternal\n"},
  {"SetCachedGrid", PyvtkPhastaReader_SetCachedGrid, METH_VARARGS,
   "V.SetCachedGrid(vtkUnstructuredGrid)\nC++: void SetCachedGrid(vtkUnstructuredGrid *)\n\n"},
  {"GetCachedGrid", PyvtkPhastaReader_GetCachedGrid, METH_VARARGS,
   "V.GetCachedGrid() -> vtkUnstructuredGrid\nC++: virtual vtkUnstructuredGrid *GetCachedGrid()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPhastaReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPhastaReader", // tp_name
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
  PyvtkPhastaReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPhastaReader_StaticNew()
{
  return vtkPhastaReader::New();
}

PyObject *PyvtkPhastaReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPhastaReader_Type, PyvtkPhastaReader_Methods,
    "vtkPhastaReader",
 &PyvtkPhastaReader_StaticNew);

  PyTypeObject *pytype = &PyvtkPhastaReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPhastaReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPhastaReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPhastaReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

