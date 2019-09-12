// python wrapper for vtkPVSystemInformation
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
#include "vtkPVSystemInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVSystemInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVSystemInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVInformation_ClassNew
extern "C" { PyObject *PyvtkPVInformation_ClassNew(); }
#define DECLARED_PyvtkPVInformation_ClassNew
#endif

static const char *PyvtkPVSystemInformation_Doc =
  "vtkPVSystemInformation - Information object used to collect\nmiscellaneous system and memory information from all processes.\n\n"
  "Superclass: vtkPVInformation\n\n"
  "vtkPVProcessMemoryInformation is used to collect miscellaneous\n"
  "information from all processes involved. Implementation uses\n"
  "vtksys::SystemInformation to obtain the relevant information for each\n"
  "of the processes.\n\n";


static PyObject *
PyvtkPVSystemInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVSystemInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSystemInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemInformation *op = static_cast<vtkPVSystemInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVSystemInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSystemInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVSystemInformation *tempr = vtkPVSystemInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSystemInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemInformation *op = static_cast<vtkPVSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVSystemInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVSystemInformation::NewInstance());

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
PyvtkPVSystemInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemInformation *op = static_cast<vtkPVSystemInformation *>(vp);

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
      op->vtkPVSystemInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSystemInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemInformation *op = static_cast<vtkPVSystemInformation *>(vp);

  vtkPVInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVInformation"))
  {
    if (ap.IsBound())
    {
      op->AddInformation(temp0);
    }
    else
    {
      op->vtkPVSystemInformation::AddInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVSystemInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVSystemInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVSystemInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVSystemInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVSystemInformation\nC++: static vtkPVSystemInformation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVSystemInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVSystemInformation\nC++: vtkPVSystemInformation *NewInstance()\n\n"},
  {"CopyFromObject", PyvtkPVSystemInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: void CopyFromObject(vtkObject *) override;\n\nTransfer information about a single object into this object.\n"},
  {"AddInformation", PyvtkPVSystemInformation_AddInformation, METH_VARARGS,
   "V.AddInformation(vtkPVInformation)\nC++: void AddInformation(vtkPVInformation *) override;\n\nMerge another information object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVSystemInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVSystemInformation", // tp_name
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
  PyvtkPVSystemInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVSystemInformation_StaticNew()
{
  return vtkPVSystemInformation::New();
}

PyObject *PyvtkPVSystemInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVSystemInformation_Type, PyvtkPVSystemInformation_Methods,
    "vtkPVSystemInformation",
 &PyvtkPVSystemInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVSystemInformation_Type;

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

void PyVTKAddFile_vtkPVSystemInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVSystemInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVSystemInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

