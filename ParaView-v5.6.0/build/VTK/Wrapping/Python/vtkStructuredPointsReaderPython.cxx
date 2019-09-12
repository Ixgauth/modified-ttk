// python wrapper for vtkStructuredPointsReader
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
#include "vtkStructuredPointsReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStructuredPointsReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStructuredPointsReader_ClassNew(); }

#ifndef DECLARED_PyvtkDataReader_ClassNew
extern "C" { PyObject *PyvtkDataReader_ClassNew(); }
#define DECLARED_PyvtkDataReader_ClassNew
#endif

static const char *PyvtkStructuredPointsReader_Doc =
  "vtkStructuredPointsReader - read vtk structured points data file\n\n"
  "Superclass: vtkDataReader\n\n"
  "vtkStructuredPointsReader is a source object that reads ASCII or\n"
  "binary structured points data files in vtk format (see text for\n"
  "format details). The output of this reader is a single\n"
  "vtkStructuredPoints data object. The superclass of this class,\n"
  "vtkDataReader, provides many methods for controlling the reading of\n"
  "the data file, see vtkDataReader for more information.\n"
  "@warning\n"
  "Binary files written on one system may not be readable on other\n"
  "systems.\n"
  "@sa\n"
  "vtkStructuredPoints vtkDataReader\n\n";


static PyObject *
PyvtkStructuredPointsReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStructuredPointsReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredPointsReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsReader *op = static_cast<vtkStructuredPointsReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredPointsReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredPointsReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStructuredPointsReader *tempr = vtkStructuredPointsReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredPointsReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsReader *op = static_cast<vtkStructuredPointsReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredPointsReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredPointsReader::NewInstance());

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
PyvtkStructuredPointsReader_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsReader *op = static_cast<vtkStructuredPointsReader *>(vp);

  vtkStructuredPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStructuredPoints"))
  {
    if (ap.IsBound())
    {
      op->SetOutput(temp0);
    }
    else
    {
      op->vtkStructuredPointsReader::SetOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredPointsReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsReader *op = static_cast<vtkStructuredPointsReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStructuredPoints *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkStructuredPointsReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredPointsReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsReader *op = static_cast<vtkStructuredPointsReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredPoints *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkStructuredPointsReader::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredPointsReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkStructuredPointsReader_GetOutput_s1(self, args);
    case 0:
      return PyvtkStructuredPointsReader_GetOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return nullptr;
}



static PyObject *
PyvtkStructuredPointsReader_ReadMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsReader *op = static_cast<vtkStructuredPointsReader *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadMetaData(temp0) :
      op->vtkStructuredPointsReader::ReadMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkStructuredPointsReader_Methods[] = {
  {"IsTypeOf", PyvtkStructuredPointsReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStructuredPointsReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStructuredPointsReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkStructuredPointsReader\nC++: static vtkStructuredPointsReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStructuredPointsReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStructuredPointsReader\nC++: vtkStructuredPointsReader *NewInstance()\n\n"},
  {"SetOutput", PyvtkStructuredPointsReader_SetOutput, METH_VARARGS,
   "V.SetOutput(vtkStructuredPoints)\nC++: void SetOutput(vtkStructuredPoints *output)\n\nSet/Get the output of this reader.\n"},
  {"GetOutput", PyvtkStructuredPointsReader_GetOutput, METH_VARARGS,
   "V.GetOutput(int) -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetOutput(int idx)\nV.GetOutput() -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetOutput()\n\nSet/Get the output of this reader.\n"},
  {"ReadMetaData", PyvtkStructuredPointsReader_ReadMetaData, METH_VARARGS,
   "V.ReadMetaData(vtkInformation) -> int\nC++: int ReadMetaData(vtkInformation *outInfo) override;\n\nRead the meta information from the file.  This needs to be public\nto it can be accessed by vtkDataSetReader.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStructuredPointsReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOLegacyPython.vtkStructuredPointsReader", // tp_name
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
  PyvtkStructuredPointsReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStructuredPointsReader_StaticNew()
{
  return vtkStructuredPointsReader::New();
}

PyObject *PyvtkStructuredPointsReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStructuredPointsReader_Type, PyvtkStructuredPointsReader_Methods,
    "vtkStructuredPointsReader",
 &PyvtkStructuredPointsReader_StaticNew);

  PyTypeObject *pytype = &PyvtkStructuredPointsReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStructuredPointsReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStructuredPointsReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStructuredPointsReader", o) != 0)
  {
    Py_DECREF(o);
  }

}
