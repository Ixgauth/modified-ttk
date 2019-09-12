// python wrapper for vtkSMMapProperty
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
#include "vtkSMMapProperty.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMMapProperty(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMMapProperty_ClassNew(); }

#ifndef DECLARED_PyvtkSMProperty_ClassNew
extern "C" { PyObject *PyvtkSMProperty_ClassNew(); }
#define DECLARED_PyvtkSMProperty_ClassNew
#endif

static const char *PyvtkSMMapProperty_Doc =
  "vtkSMMapProperty - abstract superclass for all map properties\n\n"
  "Superclass: vtkSMProperty\n\n"
  "vtkSMMapProperty defines an interface common for all map properties.\n"
  "A map property stores a set of keys and values.\n\n";


static PyObject *
PyvtkSMMapProperty_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMMapProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMMapProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMapProperty *op = static_cast<vtkSMMapProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMMapProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMMapProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMMapProperty *tempr = vtkSMMapProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMMapProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMapProperty *op = static_cast<vtkSMMapProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMMapProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMMapProperty::NewInstance());

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
PyvtkSMMapProperty_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMapProperty *op = static_cast<vtkSMMapProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfElements() :
      op->vtkSMMapProperty::GetNumberOfElements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMMapProperty_IsValueDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValueDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMapProperty *op = static_cast<vtkSMMapProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsValueDefault() :
      op->vtkSMMapProperty::IsValueDefault());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMMapProperty_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMapProperty *op = static_cast<vtkSMMapProperty *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0);
    }
    else
    {
      op->vtkSMMapProperty::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMMapProperty_Methods[] = {
  {"IsTypeOf", PyvtkSMMapProperty_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMMapProperty_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMMapProperty_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMMapProperty\nC++: static vtkSMMapProperty *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMMapProperty_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMMapProperty\nC++: vtkSMMapProperty *NewInstance()\n\n"},
  {"GetNumberOfElements", PyvtkSMMapProperty_GetNumberOfElements, METH_VARARGS,
   "V.GetNumberOfElements() -> int\nC++: virtual vtkIdType GetNumberOfElements()\n\nReturns the number of elements for the value type.\n"},
  {"IsValueDefault", PyvtkSMMapProperty_IsValueDefault, METH_VARARGS,
   "V.IsValueDefault() -> bool\nC++: bool IsValueDefault() override;\n\nReturns true if the current value is the same as the default\nvalue.\n"},
  {"Copy", PyvtkSMMapProperty_Copy, METH_VARARGS,
   "V.Copy(vtkSMProperty)\nC++: void Copy(vtkSMProperty *src) override;\n\nCopy all property values.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMMapProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMMapProperty", // tp_name
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
  PyvtkSMMapProperty_Doc, // tp_doc
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

PyObject *PyvtkSMMapProperty_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMMapProperty_Type, PyvtkSMMapProperty_Methods,
    "vtkSMMapProperty",
 nullptr);

  PyTypeObject *pytype = &PyvtkSMMapProperty_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMProperty_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMMapProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMMapProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMMapProperty", o) != 0)
  {
    Py_DECREF(o);
  }

}

