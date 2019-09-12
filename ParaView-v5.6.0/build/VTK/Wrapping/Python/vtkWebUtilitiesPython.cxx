// python wrapper for vtkWebUtilities
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
#include "vtkWebUtilities.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWebUtilities(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkWebUtilities_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkWebUtilities_Doc =
  "vtkWebUtilities - collection of utility functions for ParaView Web.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkWebUtilities consolidates miscellaneous utility functions useful\n"
  "for Python scripts designed for ParaView Web.\n\n";


static PyObject *
PyvtkWebUtilities_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWebUtilities::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebUtilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebUtilities *op = static_cast<vtkWebUtilities *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWebUtilities::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebUtilities_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWebUtilities *tempr = vtkWebUtilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebUtilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebUtilities *op = static_cast<vtkWebUtilities *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWebUtilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWebUtilities::NewInstance());

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
PyvtkWebUtilities_WriteAttributesToJavaScript(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "WriteAttributesToJavaScript");

  int temp0;
  vtkDataSet *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataSet"))
  {
    std::string tempr = vtkWebUtilities::WriteAttributesToJavaScript(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebUtilities_WriteAttributeHeadersToJavaScript(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "WriteAttributeHeadersToJavaScript");

  int temp0;
  vtkDataSet *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataSet"))
  {
    std::string tempr = vtkWebUtilities::WriteAttributeHeadersToJavaScript(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebUtilities_ProcessRMIs_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ProcessRMIs");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkWebUtilities::ProcessRMIs();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWebUtilities_ProcessRMIs_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ProcessRMIs");

  int temp0;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkWebUtilities::ProcessRMIs(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWebUtilities_ProcessRMIs(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkWebUtilities_ProcessRMIs_s1(self, args);
    case 1:
    case 2:
      return PyvtkWebUtilities_ProcessRMIs_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ProcessRMIs");
  return nullptr;
}


static PyMethodDef PyvtkWebUtilities_Methods[] = {
  {"IsTypeOf", PyvtkWebUtilities_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWebUtilities_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWebUtilities_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkWebUtilities\nC++: static vtkWebUtilities *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWebUtilities_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkWebUtilities\nC++: vtkWebUtilities *NewInstance()\n\n"},
  {"WriteAttributesToJavaScript", PyvtkWebUtilities_WriteAttributesToJavaScript, METH_VARARGS,
   "V.WriteAttributesToJavaScript(int, vtkDataSet) -> string\nC++: static std::string WriteAttributesToJavaScript(\n    int field_type, vtkDataSet *)\n\n"},
  {"WriteAttributeHeadersToJavaScript", PyvtkWebUtilities_WriteAttributeHeadersToJavaScript, METH_VARARGS,
   "V.WriteAttributeHeadersToJavaScript(int, vtkDataSet) -> string\nC++: static std::string WriteAttributeHeadersToJavaScript(\n    int field_type, vtkDataSet *)\n\n"},
  {"ProcessRMIs", PyvtkWebUtilities_ProcessRMIs, METH_VARARGS,
   "V.ProcessRMIs()\nC++: static void ProcessRMIs()\nV.ProcessRMIs(int, int)\nC++: static void ProcessRMIs(int reportError, int dont_loop=0)\n\nThis method is similar to the ProcessRMIs() method on the\nGlobalController except that it is Python friendly in the sense\nthat it will release the Python GIS lock, so when run in a\nthread, this will truly work in the background without locking\nthe main one.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkWebUtilities_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkWebCorePython.vtkWebUtilities", // tp_name
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
  PyvtkWebUtilities_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWebUtilities_StaticNew()
{
  return vtkWebUtilities::New();
}

PyObject *PyvtkWebUtilities_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkWebUtilities_Type, PyvtkWebUtilities_Methods,
    "vtkWebUtilities",
 &PyvtkWebUtilities_StaticNew);

  PyTypeObject *pytype = &PyvtkWebUtilities_Type;

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

void PyVTKAddFile_vtkWebUtilities(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWebUtilities_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWebUtilities", o) != 0)
  {
    Py_DECREF(o);
  }

}

