// python wrapper for vtkDSPFilterGroup
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
#include "vtkDSPFilterGroup.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDSPFilterGroup(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDSPFilterGroup_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkDSPFilterGroup_Doc =
  "vtkDSPFilterGroup - used by the Exodus readers\n\n"
  "Superclass: vtkObject\n\n"
  "vtkDSPFilterGroup is used by vtkExodusReader, vtkExodusIIReader and\n"
  "vtkPExodusReader to do temporal smoothing of data\n"
  "@sa\n"
  "vtkDSPFilterDefinition vtkExodusReader vtkExodusIIReader\n"
  "vtkPExodusReader\n\n";


static PyObject *
PyvtkDSPFilterGroup_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDSPFilterGroup::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDSPFilterGroup::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDSPFilterGroup *tempr = vtkDSPFilterGroup::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDSPFilterGroup *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDSPFilterGroup::NewInstance());

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
PyvtkDSPFilterGroup_AddFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  vtkDSPFilterDefinition *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDSPFilterDefinition"))
  {
    if (ap.IsBound())
    {
      op->AddFilter(temp0);
    }
    else
    {
      op->vtkDSPFilterGroup::AddFilter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_RemoveFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveFilter(temp0);
    }
    else
    {
      op->vtkDSPFilterGroup::RemoveFilter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_IsThisInputVariableInstanceNeeded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsThisInputVariableInstanceNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->IsThisInputVariableInstanceNeeded(temp0, temp1, temp2) :
      op->vtkDSPFilterGroup::IsThisInputVariableInstanceNeeded(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_IsThisInputVariableInstanceCached(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsThisInputVariableInstanceCached");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->IsThisInputVariableInstanceCached(temp0, temp1) :
      op->vtkDSPFilterGroup::IsThisInputVariableInstanceCached(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_AddInputVariableInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputVariableInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  vtkFloatArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkFloatArray"))
  {
    if (ap.IsBound())
    {
      op->AddInputVariableInstance(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDSPFilterGroup::AddInputVariableInstance(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetOutput(temp0, temp1, temp2) :
      op->vtkDSPFilterGroup::GetOutput(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_GetCachedInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCachedInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetCachedInput(temp0, temp1) :
      op->vtkDSPFilterGroup::GetCachedInput(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_GetCachedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCachedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetCachedOutput(temp0, temp1) :
      op->vtkDSPFilterGroup::GetCachedOutput(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_GetInputVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetInputVariableName(temp0) :
      op->vtkDSPFilterGroup::GetInputVariableName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_GetNumFilters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumFilters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumFilters() :
      op->vtkDSPFilterGroup::GetNumFilters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  vtkDSPFilterGroup *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDSPFilterGroup"))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0);
    }
    else
    {
      op->vtkDSPFilterGroup::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_GetFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDSPFilterDefinition *tempr = (ap.IsBound() ?
      op->GetFilter(temp0) :
      op->vtkDSPFilterGroup::GetFilter(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDSPFilterGroup_Methods[] = {
  {"IsTypeOf", PyvtkDSPFilterGroup_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDSPFilterGroup_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDSPFilterGroup_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDSPFilterGroup\nC++: static vtkDSPFilterGroup *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDSPFilterGroup_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDSPFilterGroup\nC++: vtkDSPFilterGroup *NewInstance()\n\n"},
  {"AddFilter", PyvtkDSPFilterGroup_AddFilter, METH_VARARGS,
   "V.AddFilter(vtkDSPFilterDefinition)\nC++: void AddFilter(vtkDSPFilterDefinition *filter)\n\n"},
  {"RemoveFilter", PyvtkDSPFilterGroup_RemoveFilter, METH_VARARGS,
   "V.RemoveFilter(string)\nC++: void RemoveFilter(const char *a_outputVariableName)\n\n"},
  {"IsThisInputVariableInstanceNeeded", PyvtkDSPFilterGroup_IsThisInputVariableInstanceNeeded, METH_VARARGS,
   "V.IsThisInputVariableInstanceNeeded(string, int, int) -> bool\nC++: bool IsThisInputVariableInstanceNeeded(const char *a_name,\n    int a_timestep, int a_outputTimestep)\n\n"},
  {"IsThisInputVariableInstanceCached", PyvtkDSPFilterGroup_IsThisInputVariableInstanceCached, METH_VARARGS,
   "V.IsThisInputVariableInstanceCached(string, int) -> bool\nC++: bool IsThisInputVariableInstanceCached(const char *a_name,\n    int a_timestep)\n\n"},
  {"AddInputVariableInstance", PyvtkDSPFilterGroup_AddInputVariableInstance, METH_VARARGS,
   "V.AddInputVariableInstance(string, int, vtkFloatArray)\nC++: void AddInputVariableInstance(const char *a_name,\n    int a_timestep, vtkFloatArray *a_data)\n\n"},
  {"GetOutput", PyvtkDSPFilterGroup_GetOutput, METH_VARARGS,
   "V.GetOutput(int, int, int) -> vtkFloatArray\nC++: vtkFloatArray *GetOutput(int a_whichFilter,\n    int a_whichTimestep, int &a_instancesCalculated)\n\n"},
  {"GetCachedInput", PyvtkDSPFilterGroup_GetCachedInput, METH_VARARGS,
   "V.GetCachedInput(int, int) -> vtkFloatArray\nC++: vtkFloatArray *GetCachedInput(int a_whichFilter,\n    int a_whichTimestep)\n\n"},
  {"GetCachedOutput", PyvtkDSPFilterGroup_GetCachedOutput, METH_VARARGS,
   "V.GetCachedOutput(int, int) -> vtkFloatArray\nC++: vtkFloatArray *GetCachedOutput(int a_whichFilter,\n    int a_whichTimestep)\n\n"},
  {"GetInputVariableName", PyvtkDSPFilterGroup_GetInputVariableName, METH_VARARGS,
   "V.GetInputVariableName(int) -> string\nC++: const char *GetInputVariableName(int a_whichFilter)\n\n"},
  {"GetNumFilters", PyvtkDSPFilterGroup_GetNumFilters, METH_VARARGS,
   "V.GetNumFilters() -> int\nC++: int GetNumFilters()\n\n"},
  {"Copy", PyvtkDSPFilterGroup_Copy, METH_VARARGS,
   "V.Copy(vtkDSPFilterGroup)\nC++: void Copy(vtkDSPFilterGroup *other)\n\n"},
  {"GetFilter", PyvtkDSPFilterGroup_GetFilter, METH_VARARGS,
   "V.GetFilter(int) -> vtkDSPFilterDefinition\nC++: vtkDSPFilterDefinition *GetFilter(int a_whichFilter)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDSPFilterGroup_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHybridPython.vtkDSPFilterGroup", // tp_name
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
  PyvtkDSPFilterGroup_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDSPFilterGroup_StaticNew()
{
  return vtkDSPFilterGroup::New();
}

PyObject *PyvtkDSPFilterGroup_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDSPFilterGroup_Type, PyvtkDSPFilterGroup_Methods,
    "vtkDSPFilterGroup",
 &PyvtkDSPFilterGroup_StaticNew);

  PyTypeObject *pytype = &PyvtkDSPFilterGroup_Type;

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

void PyVTKAddFile_vtkDSPFilterGroup(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDSPFilterGroup_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDSPFilterGroup", o) != 0)
  {
    Py_DECREF(o);
  }

}

