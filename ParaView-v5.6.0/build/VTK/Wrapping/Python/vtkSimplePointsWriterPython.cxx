// python wrapper for vtkSimplePointsWriter
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
#include "vtkSimplePointsWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSimplePointsWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSimplePointsWriter_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetWriter_ClassNew
extern "C" { PyObject *PyvtkDataSetWriter_ClassNew(); }
#define DECLARED_PyvtkDataSetWriter_ClassNew
#endif

static const char *PyvtkSimplePointsWriter_Doc =
  "vtkSimplePointsWriter - write a file of xyz coordinates\n\n"
  "Superclass: vtkDataSetWriter\n\n"
  "vtkSimplePointsWriter writes a simple file of xyz coordinates\n\n"
  "@sa\n"
  "vtkSimplePointsReader\n\n";


static PyObject *
PyvtkSimplePointsWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSimplePointsWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimplePointsWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimplePointsWriter *op = static_cast<vtkSimplePointsWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSimplePointsWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimplePointsWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSimplePointsWriter *tempr = vtkSimplePointsWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimplePointsWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimplePointsWriter *op = static_cast<vtkSimplePointsWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSimplePointsWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSimplePointsWriter::NewInstance());

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
PyvtkSimplePointsWriter_GetDecimalPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecimalPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimplePointsWriter *op = static_cast<vtkSimplePointsWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDecimalPrecision() :
      op->vtkSimplePointsWriter::GetDecimalPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimplePointsWriter_SetDecimalPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDecimalPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimplePointsWriter *op = static_cast<vtkSimplePointsWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDecimalPrecision(temp0);
    }
    else
    {
      op->vtkSimplePointsWriter::SetDecimalPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSimplePointsWriter_Methods[] = {
  {"IsTypeOf", PyvtkSimplePointsWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSimplePointsWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSimplePointsWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSimplePointsWriter\nC++: static vtkSimplePointsWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSimplePointsWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSimplePointsWriter\nC++: vtkSimplePointsWriter *NewInstance()\n\n"},
  {"GetDecimalPrecision", PyvtkSimplePointsWriter_GetDecimalPrecision, METH_VARARGS,
   "V.GetDecimalPrecision() -> int\nC++: virtual int GetDecimalPrecision()\n\n"},
  {"SetDecimalPrecision", PyvtkSimplePointsWriter_SetDecimalPrecision, METH_VARARGS,
   "V.SetDecimalPrecision(int)\nC++: virtual void SetDecimalPrecision(int _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSimplePointsWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOLegacyPython.vtkSimplePointsWriter", // tp_name
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
  PyvtkSimplePointsWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSimplePointsWriter_StaticNew()
{
  return vtkSimplePointsWriter::New();
}

PyObject *PyvtkSimplePointsWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSimplePointsWriter_Type, PyvtkSimplePointsWriter_Methods,
    "vtkSimplePointsWriter",
 &PyvtkSimplePointsWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkSimplePointsWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSimplePointsWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSimplePointsWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSimplePointsWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

