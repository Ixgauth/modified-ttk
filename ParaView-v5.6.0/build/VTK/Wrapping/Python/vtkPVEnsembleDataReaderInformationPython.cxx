// python wrapper for vtkPVEnsembleDataReaderInformation
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
#include "vtkStdString.h"
#include "vtkPVEnsembleDataReaderInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVEnsembleDataReaderInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVEnsembleDataReaderInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVInformation_ClassNew
extern "C" { PyObject *PyvtkPVInformation_ClassNew(); }
#define DECLARED_PyvtkPVInformation_ClassNew
#endif

static const char *PyvtkPVEnsembleDataReaderInformation_Doc =
  "vtkPVEnsembleDataReaderInformation - Information obeject to collect\nfile information from vtkEnsembleDataReader.\n\n"
  "Superclass: vtkPVInformation\n\n"
  "Gather information about data files from vtkEnsembleDataReader.\n\n";


static PyObject *
PyvtkPVEnsembleDataReaderInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVEnsembleDataReaderInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnsembleDataReaderInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnsembleDataReaderInformation *op = static_cast<vtkPVEnsembleDataReaderInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVEnsembleDataReaderInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnsembleDataReaderInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVEnsembleDataReaderInformation *tempr = vtkPVEnsembleDataReaderInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnsembleDataReaderInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnsembleDataReaderInformation *op = static_cast<vtkPVEnsembleDataReaderInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVEnsembleDataReaderInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVEnsembleDataReaderInformation::NewInstance());

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
PyvtkPVEnsembleDataReaderInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnsembleDataReaderInformation *op = static_cast<vtkPVEnsembleDataReaderInformation *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->CopyFromObject(temp0);
    }
    else
    {
      op->vtkPVEnsembleDataReaderInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnsembleDataReaderInformation_GetFileCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnsembleDataReaderInformation *op = static_cast<vtkPVEnsembleDataReaderInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetFileCount() :
      op->vtkPVEnsembleDataReaderInformation::GetFileCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnsembleDataReaderInformation_GetFilePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnsembleDataReaderInformation *op = static_cast<vtkPVEnsembleDataReaderInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetFilePath(temp0) :
      op->vtkPVEnsembleDataReaderInformation::GetFilePath(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVEnsembleDataReaderInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVEnsembleDataReaderInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVEnsembleDataReaderInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVEnsembleDataReaderInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkPVEnsembleDataReaderInformation\nC++: static vtkPVEnsembleDataReaderInformation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVEnsembleDataReaderInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVEnsembleDataReaderInformation\nC++: vtkPVEnsembleDataReaderInformation *NewInstance()\n\n"},
  {"CopyFromObject", PyvtkPVEnsembleDataReaderInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: void CopyFromObject(vtkObject *) override;\n\nTransfer information about a single object into this object.\n"},
  {"GetFileCount", PyvtkPVEnsembleDataReaderInformation_GetFileCount, METH_VARARGS,
   "V.GetFileCount() -> int\nC++: virtual unsigned int GetFileCount()\n\nGet number of files contained in the ensemble.\n"},
  {"GetFilePath", PyvtkPVEnsembleDataReaderInformation_GetFilePath, METH_VARARGS,
   "V.GetFilePath(int) -> string\nC++: virtual vtkStdString GetFilePath(const unsigned int)\n\nGet the file path for the input row index.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVEnsembleDataReaderInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreDefaultPython.vtkPVEnsembleDataReaderInformation", // tp_name
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
  PyvtkPVEnsembleDataReaderInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVEnsembleDataReaderInformation_StaticNew()
{
  return vtkPVEnsembleDataReaderInformation::New();
}

PyObject *PyvtkPVEnsembleDataReaderInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVEnsembleDataReaderInformation_Type, PyvtkPVEnsembleDataReaderInformation_Methods,
    "vtkPVEnsembleDataReaderInformation",
 &PyvtkPVEnsembleDataReaderInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVEnsembleDataReaderInformation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVInformation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVEnsembleDataReaderInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVEnsembleDataReaderInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVEnsembleDataReaderInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

