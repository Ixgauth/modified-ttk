// python wrapper for vtkInformationExecutivePortKey
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
#include "vtkExecutive.h"
#include "vtkInformationExecutivePortKey.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInformationExecutivePortKey(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInformationExecutivePortKey_ClassNew(); }

#ifndef DECLARED_PyvtkInformationKey_ClassNew
extern "C" { PyObject *PyvtkInformationKey_ClassNew(); }
#define DECLARED_PyvtkInformationKey_ClassNew
#endif

static const char *PyvtkInformationExecutivePortKey_Doc =
  "vtkInformationExecutivePortKey - Key for vtkExecutive/Port value\npairs.\n\n"
  "Superclass: vtkInformationKey\n\n"
  "vtkInformationExecutivePortKey is used to represent keys in\n"
  "vtkInformation for values that are vtkExecutive instances paired with\n"
  "port numbers.\n\n";


static PyObject *
PyvtkInformationExecutivePortKey_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInformationExecutivePortKey::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortKey *op = static_cast<vtkInformationExecutivePortKey *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInformationExecutivePortKey::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortKey_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInformationExecutivePortKey *tempr = vtkInformationExecutivePortKey::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortKey *op = static_cast<vtkInformationExecutivePortKey *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformationExecutivePortKey *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInformationExecutivePortKey::NewInstance());

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
PyvtkInformationExecutivePortKey_MakeKey(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MakeKey");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkInformationExecutivePortKey *tempr = vtkInformationExecutivePortKey::MakeKey(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortKey_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortKey *op = static_cast<vtkInformationExecutivePortKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkExecutive *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkExecutive") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformationExecutivePortKey::Set(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortKey_GetExecutive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExecutive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortKey *op = static_cast<vtkInformationExecutivePortKey *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkExecutive *tempr = (ap.IsBound() ?
      op->GetExecutive(temp0) :
      op->vtkInformationExecutivePortKey::GetExecutive(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortKey_GetPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortKey *op = static_cast<vtkInformationExecutivePortKey *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->GetPort(temp0) :
      op->vtkInformationExecutivePortKey::GetPort(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortKey_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortKey *op = static_cast<vtkInformationExecutivePortKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0, temp1);
    }
    else
    {
      op->vtkInformationExecutivePortKey::ShallowCopy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortKey_Report(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Report");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortKey *op = static_cast<vtkInformationExecutivePortKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkGarbageCollector *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkGarbageCollector"))
  {
    if (ap.IsBound())
    {
      op->Report(temp0, temp1);
    }
    else
    {
      op->vtkInformationExecutivePortKey::Report(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformationExecutivePortKey_Methods[] = {
  {"IsTypeOf", PyvtkInformationExecutivePortKey_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInformationExecutivePortKey_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInformationExecutivePortKey_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInformationExecutivePortKey\nC++: static vtkInformationExecutivePortKey *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInformationExecutivePortKey_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInformationExecutivePortKey\nC++: vtkInformationExecutivePortKey *NewInstance()\n\n"},
  {"MakeKey", PyvtkInformationExecutivePortKey_MakeKey, METH_VARARGS,
   "V.MakeKey(string, string) -> vtkInformationExecutivePortKey\nC++: static vtkInformationExecutivePortKey *MakeKey(\n    const char *name, const char *location)\n\nThis method simply returns a new vtkInformationExecutivePortKey,\ngiven a name and a location. This method is provided for\nwrappers. Use the constructor directly from C++ instead.\n"},
  {"Set", PyvtkInformationExecutivePortKey_Set, METH_VARARGS,
   "V.Set(vtkInformation, vtkExecutive, int)\nC++: void Set(vtkInformation *info, vtkExecutive *, int)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {"GetExecutive", PyvtkInformationExecutivePortKey_GetExecutive, METH_VARARGS,
   "V.GetExecutive(vtkInformation) -> vtkExecutive\nC++: vtkExecutive *GetExecutive(vtkInformation *info)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {"GetPort", PyvtkInformationExecutivePortKey_GetPort, METH_VARARGS,
   "V.GetPort(vtkInformation) -> int\nC++: int GetPort(vtkInformation *info)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {"ShallowCopy", PyvtkInformationExecutivePortKey_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkInformation, vtkInformation)\nC++: void ShallowCopy(vtkInformation *from, vtkInformation *to)\n    override;\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {"Report", PyvtkInformationExecutivePortKey_Report, METH_VARARGS,
   "V.Report(vtkInformation, vtkGarbageCollector)\nC++: void Report(vtkInformation *info,\n    vtkGarbageCollector *collector) override;\n\nReport a reference this key has in the given information object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInformationExecutivePortKey_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonExecutionModelPython.vtkInformationExecutivePortKey", // tp_name
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
  PyvtkInformationExecutivePortKey_Doc, // tp_doc
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

PyObject *PyvtkInformationExecutivePortKey_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInformationExecutivePortKey_Type, PyvtkInformationExecutivePortKey_Methods,
    "vtkInformationExecutivePortKey",
 nullptr);

  PyTypeObject *pytype = &PyvtkInformationExecutivePortKey_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInformationKey_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInformationExecutivePortKey(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInformationExecutivePortKey_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInformationExecutivePortKey", o) != 0)
  {
    Py_DECREF(o);
  }

}

