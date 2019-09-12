// python wrapper for vtkInformationIntegerRequestKey
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
#include "vtkInformationIntegerRequestKey.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInformationIntegerRequestKey(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInformationIntegerRequestKey_ClassNew(); }

#ifndef DECLARED_PyvtkInformationIntegerKey_ClassNew
extern "C" { PyObject *PyvtkInformationIntegerKey_ClassNew(); }
#define DECLARED_PyvtkInformationIntegerKey_ClassNew
#endif

static const char *PyvtkInformationIntegerRequestKey_Doc =
  "vtkInformationIntegerRequestKey - key that can used to request\ninteger values from the pipeline vtkInformationIntegerRequestKey is a\nvtkInformationIntegerKey that can used to request integer values from\nupstream.\n\n"
  "Superclass: vtkInformationIntegerKey\n\n"
  "A good example of this is UPDATE_NUMBER_OF_PIECES where downstream\n"
  "can request that upstream provides data partitioned into a certain\n"
  "number of pieces. There are several components that make this work.\n"
  "First, the key will copy itself upstream during\n"
  "REQUEST_UPDATE_EXTENT. Second, after a successful execution, it will\n"
  "stor its value into a data object's information using a specific key\n"
  "defined by its data member DataKey. Third, before execution, it will\n"
  "check if the requested value matched the value in the data object's\n"
  "information. If not, it will ask the pipeline to execute.\n\n"
  "The best way to use this class is to subclass it to set the DataKey\n"
  "data member. This is usually done in the subclass' constructor.\n\n";


static PyObject *
PyvtkInformationIntegerRequestKey_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInformationIntegerRequestKey::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIntegerRequestKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerRequestKey *op = static_cast<vtkInformationIntegerRequestKey *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInformationIntegerRequestKey::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIntegerRequestKey_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInformationIntegerRequestKey *tempr = vtkInformationIntegerRequestKey::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIntegerRequestKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerRequestKey *op = static_cast<vtkInformationIntegerRequestKey *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformationIntegerRequestKey *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInformationIntegerRequestKey::NewInstance());

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
PyvtkInformationIntegerRequestKey_MakeKey(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MakeKey");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkInformationIntegerRequestKey *tempr = vtkInformationIntegerRequestKey::MakeKey(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIntegerRequestKey_NeedToExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NeedToExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerRequestKey *op = static_cast<vtkInformationIntegerRequestKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    bool tempr = (ap.IsBound() ?
      op->NeedToExecute(temp0, temp1) :
      op->vtkInformationIntegerRequestKey::NeedToExecute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIntegerRequestKey_StoreMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StoreMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerRequestKey *op = static_cast<vtkInformationIntegerRequestKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->StoreMetaData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformationIntegerRequestKey::StoreMetaData(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIntegerRequestKey_CopyDefaultInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyDefaultInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerRequestKey *op = static_cast<vtkInformationIntegerRequestKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->CopyDefaultInformation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformationIntegerRequestKey::CopyDefaultInformation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformationIntegerRequestKey_Methods[] = {
  {"IsTypeOf", PyvtkInformationIntegerRequestKey_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInformationIntegerRequestKey_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInformationIntegerRequestKey_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInformationIntegerRequestKey\nC++: static vtkInformationIntegerRequestKey *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInformationIntegerRequestKey_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInformationIntegerRequestKey\nC++: vtkInformationIntegerRequestKey *NewInstance()\n\n"},
  {"MakeKey", PyvtkInformationIntegerRequestKey_MakeKey, METH_VARARGS,
   "V.MakeKey(string, string) -> vtkInformationIntegerRequestKey\nC++: static vtkInformationIntegerRequestKey *MakeKey(\n    const char *name, const char *location)\n\nThis method simply returns a new vtkInformationIntegerRequestKey,\ngiven a name and a location. This method is provided for\nwrappers. Use the constructor directly from C++ instead.\n"},
  {"NeedToExecute", PyvtkInformationIntegerRequestKey_NeedToExecute, METH_VARARGS,
   "V.NeedToExecute(vtkInformation, vtkInformation) -> bool\nC++: bool NeedToExecute(vtkInformation *pipelineInfo,\n    vtkInformation *dobjInfo) override;\n\nReturns true if a value of type DataKey does not exist in\ndobjInfo or if it is different that the value stored in\npipelineInfo using this key.\n"},
  {"StoreMetaData", PyvtkInformationIntegerRequestKey_StoreMetaData, METH_VARARGS,
   "V.StoreMetaData(vtkInformation, vtkInformation, vtkInformation)\nC++: void StoreMetaData(vtkInformation *request,\n    vtkInformation *pipelineInfo, vtkInformation *dobjInfo)\n    override;\n\nCopies the value stored in pipelineInfo using this key into\ndobjInfo.\n"},
  {"CopyDefaultInformation", PyvtkInformationIntegerRequestKey_CopyDefaultInformation, METH_VARARGS,
   "V.CopyDefaultInformation(vtkInformation, vtkInformation,\n    vtkInformation)\nC++: void CopyDefaultInformation(vtkInformation *request,\n    vtkInformation *fromInfo, vtkInformation *toInfo) override;\n\nCopies the value stored in fromInfo using this key into toInfo if\nrequest has the REQUEST_UPDATE_EXTENT key.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInformationIntegerRequestKey_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonExecutionModelPython.vtkInformationIntegerRequestKey", // tp_name
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
  PyvtkInformationIntegerRequestKey_Doc, // tp_doc
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

PyObject *PyvtkInformationIntegerRequestKey_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInformationIntegerRequestKey_Type, PyvtkInformationIntegerRequestKey_Methods,
    "vtkInformationIntegerRequestKey",
 nullptr);

  PyTypeObject *pytype = &PyvtkInformationIntegerRequestKey_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInformationIntegerKey_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInformationIntegerRequestKey(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInformationIntegerRequestKey_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInformationIntegerRequestKey", o) != 0)
  {
    Py_DECREF(o);
  }

}

