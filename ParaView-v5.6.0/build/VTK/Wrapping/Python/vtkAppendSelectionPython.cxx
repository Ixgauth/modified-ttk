// python wrapper for vtkAppendSelection
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
#include "vtkAppendSelection.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAppendSelection(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAppendSelection_ClassNew(); }

#ifndef DECLARED_PyvtkSelectionAlgorithm_ClassNew
extern "C" { PyObject *PyvtkSelectionAlgorithm_ClassNew(); }
#define DECLARED_PyvtkSelectionAlgorithm_ClassNew
#endif

static const char *PyvtkAppendSelection_Doc =
  "vtkAppendSelection - appends one or more selections together\n\n"
  "Superclass: vtkSelectionAlgorithm\n\n"
  "vtkAppendSelection is a filter that appends one of more selections\n"
  "into a single selection.  All selections must have the same content\n"
  "type unless AppendByUnion is false.\n\n";


static PyObject *
PyvtkAppendSelection_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAppendSelection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAppendSelection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAppendSelection *tempr = vtkAppendSelection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAppendSelection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAppendSelection::NewInstance());

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
PyvtkAppendSelection_SetUserManagedInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserManagedInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUserManagedInputs(temp0);
    }
    else
    {
      op->vtkAppendSelection::SetUserManagedInputs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_GetUserManagedInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserManagedInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUserManagedInputs() :
      op->vtkAppendSelection::GetUserManagedInputs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_UserManagedInputsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserManagedInputsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UserManagedInputsOn();
    }
    else
    {
      op->vtkAppendSelection::UserManagedInputsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_UserManagedInputsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserManagedInputsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UserManagedInputsOff();
    }
    else
    {
      op->vtkAppendSelection::UserManagedInputsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_AddInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  vtkSelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
  {
    if (ap.IsBound())
    {
      op->AddInputData(temp0);
    }
    else
    {
      op->vtkAppendSelection::AddInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_RemoveInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  vtkSelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
  {
    if (ap.IsBound())
    {
      op->RemoveInputData(temp0);
    }
    else
    {
      op->vtkAppendSelection::RemoveInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSelection *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkAppendSelection::GetInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAppendSelection_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelection *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkAppendSelection::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAppendSelection_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAppendSelection_GetInput_s1(self, args);
    case 0:
      return PyvtkAppendSelection_GetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return nullptr;
}



static PyObject *
PyvtkAppendSelection_SetNumberOfInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfInputs(temp0);
    }
    else
    {
      op->vtkAppendSelection::SetNumberOfInputs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_SetInputConnectionByNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnectionByNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnectionByNumber(temp0, temp1);
    }
    else
    {
      op->vtkAppendSelection::SetInputConnectionByNumber(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_SetAppendByUnion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAppendByUnion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAppendByUnion(temp0);
    }
    else
    {
      op->vtkAppendSelection::SetAppendByUnion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_GetAppendByUnion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAppendByUnion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAppendByUnion() :
      op->vtkAppendSelection::GetAppendByUnion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_AppendByUnionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendByUnionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AppendByUnionOn();
    }
    else
    {
      op->vtkAppendSelection::AppendByUnionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_AppendByUnionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendByUnionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AppendByUnionOff();
    }
    else
    {
      op->vtkAppendSelection::AppendByUnionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAppendSelection_Methods[] = {
  {"IsTypeOf", PyvtkAppendSelection_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAppendSelection_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAppendSelection_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAppendSelection\nC++: static vtkAppendSelection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAppendSelection_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAppendSelection\nC++: vtkAppendSelection *NewInstance()\n\n"},
  {"SetUserManagedInputs", PyvtkAppendSelection_SetUserManagedInputs, METH_VARARGS,
   "V.SetUserManagedInputs(int)\nC++: virtual void SetUserManagedInputs(vtkTypeBool _arg)\n\nUserManagedInputs allows the user to set inputs by number instead\nof using the AddInput/RemoveInput functions. Calls to\nSetNumberOfInputs/SetInputByNumber should not be mixed with calls\nto AddInput/RemoveInput. By default, UserManagedInputs is false.\n"},
  {"GetUserManagedInputs", PyvtkAppendSelection_GetUserManagedInputs, METH_VARARGS,
   "V.GetUserManagedInputs() -> int\nC++: virtual vtkTypeBool GetUserManagedInputs()\n\nUserManagedInputs allows the user to set inputs by number instead\nof using the AddInput/RemoveInput functions. Calls to\nSetNumberOfInputs/SetInputByNumber should not be mixed with calls\nto AddInput/RemoveInput. By default, UserManagedInputs is false.\n"},
  {"UserManagedInputsOn", PyvtkAppendSelection_UserManagedInputsOn, METH_VARARGS,
   "V.UserManagedInputsOn()\nC++: virtual void UserManagedInputsOn()\n\nUserManagedInputs allows the user to set inputs by number instead\nof using the AddInput/RemoveInput functions. Calls to\nSetNumberOfInputs/SetInputByNumber should not be mixed with calls\nto AddInput/RemoveInput. By default, UserManagedInputs is false.\n"},
  {"UserManagedInputsOff", PyvtkAppendSelection_UserManagedInputsOff, METH_VARARGS,
   "V.UserManagedInputsOff()\nC++: virtual void UserManagedInputsOff()\n\nUserManagedInputs allows the user to set inputs by number instead\nof using the AddInput/RemoveInput functions. Calls to\nSetNumberOfInputs/SetInputByNumber should not be mixed with calls\nto AddInput/RemoveInput. By default, UserManagedInputs is false.\n"},
  {"AddInputData", PyvtkAppendSelection_AddInputData, METH_VARARGS,
   "V.AddInputData(vtkSelection)\nC++: void AddInputData(vtkSelection *)\n\nAdd a dataset to the list of data to append. Should not be used\nwhen UserManagedInputs is true, use SetInputByNumber instead.\n"},
  {"RemoveInputData", PyvtkAppendSelection_RemoveInputData, METH_VARARGS,
   "V.RemoveInputData(vtkSelection)\nC++: void RemoveInputData(vtkSelection *)\n\nRemove a dataset from the list of data to append. Should not be\nused when UserManagedInputs is true, use SetInputByNumber\n(nullptr) instead.\n"},
  {"GetInput", PyvtkAppendSelection_GetInput, METH_VARARGS,
   "V.GetInput(int) -> vtkSelection\nC++: vtkSelection *GetInput(int idx)\nV.GetInput() -> vtkSelection\nC++: vtkSelection *GetInput()\n\nGet any input of this filter.\n"},
  {"SetNumberOfInputs", PyvtkAppendSelection_SetNumberOfInputs, METH_VARARGS,
   "V.SetNumberOfInputs(int)\nC++: void SetNumberOfInputs(int num)\n\nDirectly set(allocate) number of inputs, should only be used when\nUserManagedInputs is true.\n"},
  {"SetInputConnectionByNumber", PyvtkAppendSelection_SetInputConnectionByNumber, METH_VARARGS,
   "V.SetInputConnectionByNumber(int, vtkAlgorithmOutput)\nC++: void SetInputConnectionByNumber(int num,\n    vtkAlgorithmOutput *input)\n\n"},
  {"SetAppendByUnion", PyvtkAppendSelection_SetAppendByUnion, METH_VARARGS,
   "V.SetAppendByUnion(int)\nC++: virtual void SetAppendByUnion(vtkTypeBool _arg)\n\nWhen set to true, all the selections are combined together to\nform a single vtkSelection output. When set to false, the output\nis a composite selection with input selections as the children of\nthe composite selection. This allows for selections with\ndifferent content types and properties. Default is true.\n"},
  {"GetAppendByUnion", PyvtkAppendSelection_GetAppendByUnion, METH_VARARGS,
   "V.GetAppendByUnion() -> int\nC++: virtual vtkTypeBool GetAppendByUnion()\n\nWhen set to true, all the selections are combined together to\nform a single vtkSelection output. When set to false, the output\nis a composite selection with input selections as the children of\nthe composite selection. This allows for selections with\ndifferent content types and properties. Default is true.\n"},
  {"AppendByUnionOn", PyvtkAppendSelection_AppendByUnionOn, METH_VARARGS,
   "V.AppendByUnionOn()\nC++: virtual void AppendByUnionOn()\n\nWhen set to true, all the selections are combined together to\nform a single vtkSelection output. When set to false, the output\nis a composite selection with input selections as the children of\nthe composite selection. This allows for selections with\ndifferent content types and properties. Default is true.\n"},
  {"AppendByUnionOff", PyvtkAppendSelection_AppendByUnionOff, METH_VARARGS,
   "V.AppendByUnionOff()\nC++: virtual void AppendByUnionOff()\n\nWhen set to true, all the selections are combined together to\nform a single vtkSelection output. When set to false, the output\nis a composite selection with input selections as the children of\nthe composite selection. This allows for selections with\ndifferent content types and properties. Default is true.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAppendSelection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkAppendSelection", // tp_name
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
  PyvtkAppendSelection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAppendSelection_StaticNew()
{
  return vtkAppendSelection::New();
}

PyObject *PyvtkAppendSelection_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAppendSelection_Type, PyvtkAppendSelection_Methods,
    "vtkAppendSelection",
 &PyvtkAppendSelection_StaticNew);

  PyTypeObject *pytype = &PyvtkAppendSelection_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSelectionAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAppendSelection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAppendSelection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAppendSelection", o) != 0)
  {
    Py_DECREF(o);
  }

}

