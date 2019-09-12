// python wrapper for vtkInformationDataObjectMetaDataKey
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
#include "vtkInformationDataObjectMetaDataKey.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInformationDataObjectMetaDataKey(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInformationDataObjectMetaDataKey_ClassNew(); }

#ifndef DECLARED_PyvtkInformationDataObjectKey_ClassNew
extern "C" { PyObject *PyvtkInformationDataObjectKey_ClassNew(); }
#define DECLARED_PyvtkInformationDataObjectKey_ClassNew
#endif

static const char *PyvtkInformationDataObjectMetaDataKey_Doc =
  "vtkInformationDataObjectMetaDataKey - key used to define meta-data of\ntype vtkDataObject vtkInformationDataObjectMetaDataKey is a\nvtkInformationDataObjectKey that (shallow) copies itself downstream\nduring the REQUEST_INFORMATION pass.\n\n"
  "Superclass: vtkInformationDataObjectKey\n\n"
  "Hence it can be used to provide meta-data of type vtkDataObject or\n"
  "any subclass.\n\n";


static PyObject *
PyvtkInformationDataObjectMetaDataKey_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInformationDataObjectMetaDataKey::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationDataObjectMetaDataKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationDataObjectMetaDataKey *op = static_cast<vtkInformationDataObjectMetaDataKey *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInformationDataObjectMetaDataKey::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationDataObjectMetaDataKey_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInformationDataObjectMetaDataKey *tempr = vtkInformationDataObjectMetaDataKey::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationDataObjectMetaDataKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationDataObjectMetaDataKey *op = static_cast<vtkInformationDataObjectMetaDataKey *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformationDataObjectMetaDataKey *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInformationDataObjectMetaDataKey::NewInstance());

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
PyvtkInformationDataObjectMetaDataKey_MakeKey(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MakeKey");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkInformationDataObjectMetaDataKey *tempr = vtkInformationDataObjectMetaDataKey::MakeKey(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationDataObjectMetaDataKey_CopyDefaultInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyDefaultInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationDataObjectMetaDataKey *op = static_cast<vtkInformationDataObjectMetaDataKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->CopyDefaultInformation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformationDataObjectMetaDataKey::CopyDefaultInformation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformationDataObjectMetaDataKey_Methods[] = {
  {"IsTypeOf", PyvtkInformationDataObjectMetaDataKey_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInformationDataObjectMetaDataKey_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInformationDataObjectMetaDataKey_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkInformationDataObjectMetaDataKey\nC++: static vtkInformationDataObjectMetaDataKey *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInformationDataObjectMetaDataKey_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInformationDataObjectMetaDataKey\nC++: vtkInformationDataObjectMetaDataKey *NewInstance()\n\n"},
  {"MakeKey", PyvtkInformationDataObjectMetaDataKey_MakeKey, METH_VARARGS,
   "V.MakeKey(string, string) -> vtkInformationDataObjectMetaDataKey\nC++: static vtkInformationDataObjectMetaDataKey *MakeKey(\n    const char *name, const char *location)\n\nThis method simply returns a new\nvtkInformationDataObjectMetaDataKey, given a name and a location.\nThis method is provided for wrappers. Use the constructor\ndirectly from C++ instead.\n"},
  {"CopyDefaultInformation", PyvtkInformationDataObjectMetaDataKey_CopyDefaultInformation, METH_VARARGS,
   "V.CopyDefaultInformation(vtkInformation, vtkInformation,\n    vtkInformation)\nC++: void CopyDefaultInformation(vtkInformation *request,\n    vtkInformation *fromInfo, vtkInformation *toInfo) override;\n\nSimply shallow copies the key from fromInfo to toInfo if request\nhas the REQUEST_INFORMATION() key. This is used by the pipeline\nto propagate this key downstream.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInformationDataObjectMetaDataKey_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonExecutionModelPython.vtkInformationDataObjectMetaDataKey", // tp_name
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
  PyvtkInformationDataObjectMetaDataKey_Doc, // tp_doc
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

PyObject *PyvtkInformationDataObjectMetaDataKey_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInformationDataObjectMetaDataKey_Type, PyvtkInformationDataObjectMetaDataKey_Methods,
    "vtkInformationDataObjectMetaDataKey",
 nullptr);

  PyTypeObject *pytype = &PyvtkInformationDataObjectMetaDataKey_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInformationDataObjectKey_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInformationDataObjectMetaDataKey(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInformationDataObjectMetaDataKey_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInformationDataObjectMetaDataKey", o) != 0)
  {
    Py_DECREF(o);
  }

}

