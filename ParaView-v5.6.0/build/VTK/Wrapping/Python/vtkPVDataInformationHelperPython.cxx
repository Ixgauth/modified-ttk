// python wrapper for vtkPVDataInformationHelper
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
#include "vtkPVDataInformationHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVDataInformationHelper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVDataInformationHelper_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVDataInformationHelper_Doc =
  "vtkPVDataInformationHelper - allows extension of types that\n\n"
  "Superclass: vtkObject\n\n"
  "PVDataInformation can handle\n\n"
  "Plugins can subclass this and call\n"
  "vtkPVDataInformation::RegisterHelper() in order to allow\n"
  "vtkPVDataInformation (and thus ParaView) to handle new data types.\n\n";


static PyObject *
PyvtkPVDataInformationHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVDataInformationHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformationHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformationHelper *op = static_cast<vtkPVDataInformationHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVDataInformationHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformationHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVDataInformationHelper *tempr = vtkPVDataInformationHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformationHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformationHelper *op = static_cast<vtkPVDataInformationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataInformationHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVDataInformationHelper::NewInstance());

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
PyvtkPVDataInformationHelper_CopyFromDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformationHelper *op = static_cast<vtkPVDataInformationHelper *>(vp);

  vtkPVDataInformation *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVDataInformation") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->CopyFromDataObject(temp0, temp1);
    }
    else
    {
      op->vtkPVDataInformationHelper::CopyFromDataObject(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformationHelper_GetPrettyDataTypeString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrettyDataTypeString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformationHelper *op = static_cast<vtkPVDataInformationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetPrettyDataTypeString();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVDataInformationHelper_Methods[] = {
  {"IsTypeOf", PyvtkPVDataInformationHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVDataInformationHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVDataInformationHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVDataInformationHelper\nC++: static vtkPVDataInformationHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVDataInformationHelper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVDataInformationHelper\nC++: vtkPVDataInformationHelper *NewInstance()\n\n"},
  {"CopyFromDataObject", PyvtkPVDataInformationHelper_CopyFromDataObject, METH_VARARGS,
   "V.CopyFromDataObject(vtkPVDataInformation, vtkDataObject)\nC++: void CopyFromDataObject(vtkPVDataInformation *self,\n    vtkDataObject *data)\n\nThis class is a friend of PVDI, so the work of copying into self\nhappens here.\n"},
  {"GetPrettyDataTypeString", PyvtkPVDataInformationHelper_GetPrettyDataTypeString, METH_VARARGS,
   "V.GetPrettyDataTypeString() -> string\nC++: virtual const char *GetPrettyDataTypeString()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVDataInformationHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVDataInformationHelper", // tp_name
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
  PyvtkPVDataInformationHelper_Doc, // tp_doc
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

PyObject *PyvtkPVDataInformationHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVDataInformationHelper_Type, PyvtkPVDataInformationHelper_Methods,
    "vtkPVDataInformationHelper",
 nullptr);

  PyTypeObject *pytype = &PyvtkPVDataInformationHelper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVDataInformationHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVDataInformationHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVDataInformationHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

