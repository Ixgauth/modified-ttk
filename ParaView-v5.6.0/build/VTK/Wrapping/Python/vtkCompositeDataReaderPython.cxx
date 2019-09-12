// python wrapper for vtkCompositeDataReader
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
#include "vtkCompositeDataReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositeDataReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCompositeDataReader_ClassNew(); }

#ifndef DECLARED_PyvtkDataReader_ClassNew
extern "C" { PyObject *PyvtkDataReader_ClassNew(); }
#define DECLARED_PyvtkDataReader_ClassNew
#endif

static const char *PyvtkCompositeDataReader_Doc =
  "vtkCompositeDataReader - read vtkCompositeDataSet data file.\n\n"
  "Superclass: vtkDataReader\n\n"
  "@warning\n"
  "This is an experimental format. Use XML-based formats for writing\n"
  "composite datasets. Saving composite dataset in legacy VTK format is\n"
  "expected to change in future including changes to the file layout.\n\n";


static PyObject *
PyvtkCompositeDataReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositeDataReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataReader *op = static_cast<vtkCompositeDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeDataReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositeDataReader *tempr = vtkCompositeDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataReader *op = static_cast<vtkCompositeDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeDataReader::NewInstance());

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
PyvtkCompositeDataReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataReader *op = static_cast<vtkCompositeDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataSet *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkCompositeDataReader::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCompositeDataReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataReader *op = static_cast<vtkCompositeDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCompositeDataSet *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkCompositeDataReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCompositeDataReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkCompositeDataReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkCompositeDataReader_GetOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return nullptr;
}



static PyObject *
PyvtkCompositeDataReader_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataReader *op = static_cast<vtkCompositeDataReader *>(vp);

  vtkCompositeDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetOutput(temp0);
    }
    else
    {
      op->vtkCompositeDataReader::SetOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeDataReader_Methods[] = {
  {"IsTypeOf", PyvtkCompositeDataReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositeDataReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositeDataReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCompositeDataReader\nC++: static vtkCompositeDataReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositeDataReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCompositeDataReader\nC++: vtkCompositeDataReader *NewInstance()\n\n"},
  {"GetOutput", PyvtkCompositeDataReader_GetOutput, METH_VARARGS,
   "V.GetOutput() -> vtkCompositeDataSet\nC++: vtkCompositeDataSet *GetOutput()\nV.GetOutput(int) -> vtkCompositeDataSet\nC++: vtkCompositeDataSet *GetOutput(int idx)\n\nGet the output of this reader.\n"},
  {"SetOutput", PyvtkCompositeDataReader_SetOutput, METH_VARARGS,
   "V.SetOutput(vtkCompositeDataSet)\nC++: void SetOutput(vtkCompositeDataSet *output)\n\nGet the output of this reader.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCompositeDataReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOLegacyPython.vtkCompositeDataReader", // tp_name
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
  PyvtkCompositeDataReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositeDataReader_StaticNew()
{
  return vtkCompositeDataReader::New();
}

PyObject *PyvtkCompositeDataReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCompositeDataReader_Type, PyvtkCompositeDataReader_Methods,
    "vtkCompositeDataReader",
 &PyvtkCompositeDataReader_StaticNew);

  PyTypeObject *pytype = &PyvtkCompositeDataReader_Type;

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

void PyVTKAddFile_vtkCompositeDataReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositeDataReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeDataReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

