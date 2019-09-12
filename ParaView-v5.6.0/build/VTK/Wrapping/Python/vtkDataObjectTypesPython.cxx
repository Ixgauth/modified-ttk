// python wrapper for vtkDataObjectTypes
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
#include "vtkDataObjectTypes.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataObjectTypes(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDataObjectTypes_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkDataObjectTypes_Doc =
  "vtkDataObjectTypes - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;


static PyObject *
PyvtkDataObjectTypes_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataObjectTypes::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTypes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTypes *op = static_cast<vtkDataObjectTypes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataObjectTypes::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTypes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataObjectTypes *tempr = vtkDataObjectTypes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTypes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTypes *op = static_cast<vtkDataObjectTypes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObjectTypes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataObjectTypes::NewInstance());

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
PyvtkDataObjectTypes_GetClassNameFromTypeId(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetClassNameFromTypeId");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkDataObjectTypes::GetClassNameFromTypeId(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTypes_GetTypeIdFromClassName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTypeIdFromClassName");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataObjectTypes::GetTypeIdFromClassName(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTypes_NewDataObject_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NewDataObject");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = vtkDataObjectTypes::NewDataObject(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectTypes_NewDataObject_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NewDataObject");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = vtkDataObjectTypes::NewDataObject(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataObjectTypes_NewDataObject_Methods[] = {
  {nullptr, PyvtkDataObjectTypes_NewDataObject_s1, METH_VARARGS | METH_STATIC,
   "z"},
  {nullptr, PyvtkDataObjectTypes_NewDataObject_s2, METH_VARARGS | METH_STATIC,
   "i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataObjectTypes_NewDataObject(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataObjectTypes_NewDataObject_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "NewDataObject");
  return nullptr;
}


static PyMethodDef PyvtkDataObjectTypes_Methods[] = {
  {"IsTypeOf", PyvtkDataObjectTypes_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataObjectTypes_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataObjectTypes_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDataObjectTypes\nC++: static vtkDataObjectTypes *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataObjectTypes_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDataObjectTypes\nC++: vtkDataObjectTypes *NewInstance()\n\n"},
  {"GetClassNameFromTypeId", PyvtkDataObjectTypes_GetClassNameFromTypeId, METH_VARARGS,
   "V.GetClassNameFromTypeId(int) -> string\nC++: static const char *GetClassNameFromTypeId(int typeId)\n\nGiven an int (as defined in vtkType.h) identifier for a class\nreturn it's classname.\n"},
  {"GetTypeIdFromClassName", PyvtkDataObjectTypes_GetTypeIdFromClassName, METH_VARARGS,
   "V.GetTypeIdFromClassName(string) -> int\nC++: static int GetTypeIdFromClassName(const char *classname)\n\nGiven a data object classname, return it's int identified (as\ndefined in vtkType.h)\n"},
  {"NewDataObject", PyvtkDataObjectTypes_NewDataObject, METH_VARARGS,
   "V.NewDataObject(string) -> vtkDataObject\nC++: static vtkDataObject *NewDataObject(const char *classname)\nV.NewDataObject(int) -> vtkDataObject\nC++: static vtkDataObject *NewDataObject(int typeId)\n\nCreate (New) and return a data object of the given classname.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDataObjectTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkDataObjectTypes", // tp_name
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
  PyvtkDataObjectTypes_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataObjectTypes_StaticNew()
{
  return vtkDataObjectTypes::New();
}

PyObject *PyvtkDataObjectTypes_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDataObjectTypes_Type, PyvtkDataObjectTypes_Methods,
    "vtkDataObjectTypes",
 &PyvtkDataObjectTypes_StaticNew);

  PyTypeObject *pytype = &PyvtkDataObjectTypes_Type;

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

void PyVTKAddFile_vtkDataObjectTypes(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataObjectTypes_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataObjectTypes", o) != 0)
  {
    Py_DECREF(o);
  }

}

