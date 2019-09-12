// python wrapper for vtkPVPythonOptions
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
#include "vtkPVPythonOptions.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVPythonOptions(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVPythonOptions_ClassNew(); }

#ifndef DECLARED_PyvtkPVOptions_ClassNew
extern "C" { PyObject *PyvtkPVOptions_ClassNew(); }
#define DECLARED_PyvtkPVOptions_ClassNew
#endif

static const char *PyvtkPVPythonOptions_Doc =
  "vtkPVPythonOptions - ParaView options storage\n\n"
  "Superclass: vtkPVOptions\n\n"
  "An object of this class represents a storage for ParaView options\n\n"
  "These options can be retrieved during run-time, set using\n"
  "configuration file or using Command Line Arguments.\n\n";


static PyObject *
PyvtkPVPythonOptions_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVPythonOptions::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonOptions_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonOptions *op = static_cast<vtkPVPythonOptions *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVPythonOptions::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonOptions_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVPythonOptions *tempr = vtkPVPythonOptions::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonOptions_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonOptions *op = static_cast<vtkPVPythonOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVPythonOptions *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVPythonOptions::NewInstance());

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
PyvtkPVPythonOptions_GetPythonScriptName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPythonScriptName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonOptions *op = static_cast<vtkPVPythonOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPythonScriptName() :
      op->vtkPVPythonOptions::GetPythonScriptName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVPythonOptions_Methods[] = {
  {"IsTypeOf", PyvtkPVPythonOptions_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVPythonOptions_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVPythonOptions_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVPythonOptions\nC++: static vtkPVPythonOptions *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVPythonOptions_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVPythonOptions\nC++: vtkPVPythonOptions *NewInstance()\n\n"},
  {"GetPythonScriptName", PyvtkPVPythonOptions_GetPythonScriptName, METH_VARARGS,
   "V.GetPythonScriptName() -> string\nC++: virtual char *GetPythonScriptName()\n\nGet the python script name.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVPythonOptions_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVPythonOptions", // tp_name
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
  PyvtkPVPythonOptions_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVPythonOptions_StaticNew()
{
  return vtkPVPythonOptions::New();
}

PyObject *PyvtkPVPythonOptions_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVPythonOptions_Type, PyvtkPVPythonOptions_Methods,
    "vtkPVPythonOptions",
 &PyvtkPVPythonOptions_StaticNew);

  PyTypeObject *pytype = &PyvtkPVPythonOptions_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVOptions_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVPythonOptions(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVPythonOptions_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVPythonOptions", o) != 0)
  {
    Py_DECREF(o);
  }

}

