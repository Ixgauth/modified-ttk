// python wrapper for vtkSIDoubleMapProperty
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
#include "vtkSIDoubleMapProperty.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSIDoubleMapProperty(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSIDoubleMapProperty_ClassNew(); }

#ifndef DECLARED_PyvtkSIProperty_ClassNew
extern "C" { PyObject *PyvtkSIProperty_ClassNew(); }
#define DECLARED_PyvtkSIProperty_ClassNew
#endif

static const char *PyvtkSIDoubleMapProperty_Doc =
  "vtkSIDoubleMapProperty - Map property that manage double value to be\nset through a method on a vtkObject.\n\n"
  "Superclass: vtkSIProperty\n\n"
;


static PyObject *
PyvtkSIDoubleMapProperty_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSIDoubleMapProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIDoubleMapProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDoubleMapProperty *op = static_cast<vtkSIDoubleMapProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIDoubleMapProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIDoubleMapProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSIDoubleMapProperty *tempr = vtkSIDoubleMapProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIDoubleMapProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDoubleMapProperty *op = static_cast<vtkSIDoubleMapProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSIDoubleMapProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIDoubleMapProperty::NewInstance());

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
PyvtkSIDoubleMapProperty_GetCleanCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCleanCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDoubleMapProperty *op = static_cast<vtkSIDoubleMapProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCleanCommand() :
      op->vtkSIDoubleMapProperty::GetCleanCommand());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIDoubleMapProperty_SetCleanCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCleanCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDoubleMapProperty *op = static_cast<vtkSIDoubleMapProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCleanCommand(temp0);
    }
    else
    {
      op->vtkSIDoubleMapProperty::SetCleanCommand(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSIDoubleMapProperty_Methods[] = {
  {"IsTypeOf", PyvtkSIDoubleMapProperty_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSIDoubleMapProperty_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSIDoubleMapProperty_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSIDoubleMapProperty\nC++: static vtkSIDoubleMapProperty *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSIDoubleMapProperty_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSIDoubleMapProperty\nC++: vtkSIDoubleMapProperty *NewInstance()\n\n"},
  {"GetCleanCommand", PyvtkSIDoubleMapProperty_GetCleanCommand, METH_VARARGS,
   "V.GetCleanCommand() -> string\nC++: virtual char *GetCleanCommand()\n\n"},
  {"SetCleanCommand", PyvtkSIDoubleMapProperty_SetCleanCommand, METH_VARARGS,
   "V.SetCleanCommand(string)\nC++: virtual void SetCleanCommand(const char *_arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSIDoubleMapProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerImplementationCorePython.vtkSIDoubleMapProperty", // tp_name
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
  PyvtkSIDoubleMapProperty_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSIDoubleMapProperty_StaticNew()
{
  return vtkSIDoubleMapProperty::New();
}

PyObject *PyvtkSIDoubleMapProperty_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSIDoubleMapProperty_Type, PyvtkSIDoubleMapProperty_Methods,
    "vtkSIDoubleMapProperty",
 &PyvtkSIDoubleMapProperty_StaticNew);

  PyTypeObject *pytype = &PyvtkSIDoubleMapProperty_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSIProperty_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSIDoubleMapProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSIDoubleMapProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSIDoubleMapProperty", o) != 0)
  {
    Py_DECREF(o);
  }

}

