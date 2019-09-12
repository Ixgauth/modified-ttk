// python wrapper for vtkPVGenericAttributeInformation
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
#include "vtkPVGenericAttributeInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVGenericAttributeInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVGenericAttributeInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVArrayInformation_ClassNew
extern "C" { PyObject *PyvtkPVArrayInformation_ClassNew(); }
#define DECLARED_PyvtkPVArrayInformation_ClassNew
#endif

static const char *PyvtkPVGenericAttributeInformation_Doc =
  "vtkPVGenericAttributeInformation - Generic attribute information like\ntype.\n\n"
  "Superclass: vtkPVArrayInformation\n\n"
  "This objects is for eliminating direct access to vtkDataObjects by\n"
  "the \"client\".  Only vtkPVPart and vtkPVProcessModule should access\n"
  "the data directly.  At the moment, this object is only a container\n"
  "and has no useful methods for operating on data.\n\n";


static PyObject *
PyvtkPVGenericAttributeInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVGenericAttributeInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGenericAttributeInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericAttributeInformation *op = static_cast<vtkPVGenericAttributeInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVGenericAttributeInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGenericAttributeInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVGenericAttributeInformation *tempr = vtkPVGenericAttributeInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGenericAttributeInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericAttributeInformation *op = static_cast<vtkPVGenericAttributeInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVGenericAttributeInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVGenericAttributeInformation::NewInstance());

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
PyvtkPVGenericAttributeInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericAttributeInformation *op = static_cast<vtkPVGenericAttributeInformation *>(vp);

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
      op->vtkPVGenericAttributeInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVGenericAttributeInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVGenericAttributeInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVGenericAttributeInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVGenericAttributeInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVGenericAttributeInformation\nC++: static vtkPVGenericAttributeInformation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVGenericAttributeInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVGenericAttributeInformation\nC++: vtkPVGenericAttributeInformation *NewInstance()\n\n"},
  {"CopyFromObject", PyvtkPVGenericAttributeInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: void CopyFromObject(vtkObject *) override;\n\nTransfer information about a single object into this object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVGenericAttributeInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVGenericAttributeInformation", // tp_name
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
  PyvtkPVGenericAttributeInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVGenericAttributeInformation_StaticNew()
{
  return vtkPVGenericAttributeInformation::New();
}

PyObject *PyvtkPVGenericAttributeInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVGenericAttributeInformation_Type, PyvtkPVGenericAttributeInformation_Methods,
    "vtkPVGenericAttributeInformation",
 &PyvtkPVGenericAttributeInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVGenericAttributeInformation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVArrayInformation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVGenericAttributeInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVGenericAttributeInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVGenericAttributeInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

