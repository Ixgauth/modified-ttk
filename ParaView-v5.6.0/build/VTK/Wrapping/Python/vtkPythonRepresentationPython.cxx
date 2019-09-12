// python wrapper for vtkPythonRepresentation
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
#include "vtkPythonRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPythonRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPythonRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkPVDataRepresentation_ClassNew
extern "C" { PyObject *PyvtkPVDataRepresentation_ClassNew(); }
#define DECLARED_PyvtkPVDataRepresentation_ClassNew
#endif

static const char *PyvtkPythonRepresentation_Doc =
  "vtkPythonRepresentation - Representation for showing data in a\nvtkPythonView.\n\n"
  "Superclass: vtkPVDataRepresentation\n\n"
  "This representation does not create any intermediate data for\n"
  "display. Instead, it simply fetches data from the server.\n\n";


static PyObject *
PyvtkPythonRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPythonRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonRepresentation *op = static_cast<vtkPythonRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPythonRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPythonRepresentation *tempr = vtkPythonRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonRepresentation *op = static_cast<vtkPythonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPythonRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPythonRepresentation::NewInstance());

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
PyvtkPythonRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonRepresentation *op = static_cast<vtkPythonRepresentation *>(vp);

  vtkInformationRequestKey *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->ProcessViewRequest(temp0, temp1, temp2) :
      op->vtkPythonRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonRepresentation_GetLocalInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonRepresentation *op = static_cast<vtkPythonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetLocalInput() :
      op->vtkPythonRepresentation::GetLocalInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonRepresentation_GetClientDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonRepresentation *op = static_cast<vtkPythonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetClientDataObject() :
      op->vtkPythonRepresentation::GetClientDataObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonRepresentation_GetNumberOfAttributeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAttributeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonRepresentation *op = static_cast<vtkPythonRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAttributeArrays(temp0) :
      op->vtkPythonRepresentation::GetNumberOfAttributeArrays(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonRepresentation_GetAttributeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonRepresentation *op = static_cast<vtkPythonRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeArrayName(temp0, temp1) :
      op->vtkPythonRepresentation::GetAttributeArrayName(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonRepresentation_SetAttributeArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonRepresentation *op = static_cast<vtkPythonRepresentation *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetAttributeArrayStatus(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPythonRepresentation::SetAttributeArrayStatus(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonRepresentation_GetAttributeArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonRepresentation *op = static_cast<vtkPythonRepresentation *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeArrayStatus(temp0, temp1) :
      op->vtkPythonRepresentation::GetAttributeArrayStatus(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonRepresentation_EnableAllAttributeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllAttributeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonRepresentation *op = static_cast<vtkPythonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllAttributeArrays();
    }
    else
    {
      op->vtkPythonRepresentation::EnableAllAttributeArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonRepresentation_DisableAllAttributeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllAttributeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonRepresentation *op = static_cast<vtkPythonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllAttributeArrays();
    }
    else
    {
      op->vtkPythonRepresentation::DisableAllAttributeArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPythonRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkPythonRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPythonRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPythonRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPythonRepresentation\nC++: static vtkPythonRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPythonRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPythonRepresentation\nC++: vtkPythonRepresentation *NewInstance()\n\n"},
  {"ProcessViewRequest", PyvtkPythonRepresentation_ProcessViewRequest, METH_VARARGS,
   "V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo) override;\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering. Overridden to skip processing when\nvisibility if off.\n"},
  {"GetLocalInput", PyvtkPythonRepresentation_GetLocalInput, METH_VARARGS,
   "V.GetLocalInput() -> vtkDataObject\nC++: virtual vtkDataObject *GetLocalInput()\n\nGets local copy of the input. This will be NULL on the client\nwhen running in client-only mode until after Update() is called.\n"},
  {"GetClientDataObject", PyvtkPythonRepresentation_GetClientDataObject, METH_VARARGS,
   "V.GetClientDataObject() -> vtkDataObject\nC++: virtual vtkDataObject *GetClientDataObject()\n\nGets the client's copy of the input\n"},
  {"GetNumberOfAttributeArrays", PyvtkPythonRepresentation_GetNumberOfAttributeArrays, METH_VARARGS,
   "V.GetNumberOfAttributeArrays(int) -> int\nC++: int GetNumberOfAttributeArrays(int attributeType)\n\nGet number of arrays in an attribute (e.g., vtkDataObject::POINT,\nvtkDataObject::CELL, vtkDataObject::ROW,\nvtkDataObject::FIELD_DATA).\n"},
  {"GetAttributeArrayName", PyvtkPythonRepresentation_GetAttributeArrayName, METH_VARARGS,
   "V.GetAttributeArrayName(int, int) -> string\nC++: const char *GetAttributeArrayName(int attributeType,\n    int arrayIndex)\n\nFrom the input data, get the name of attribute array at index for\nthe given attribute type.\n"},
  {"SetAttributeArrayStatus", PyvtkPythonRepresentation_SetAttributeArrayStatus, METH_VARARGS,
   "V.SetAttributeArrayStatus(int, string, int)\nC++: void SetAttributeArrayStatus(int attributeType,\n    const char *name, int status)\n\nSet the array status for the input data object. A status of 1\nmeans that the array with the given name for the given attribute\nwill be copied to the client. A status of 0 means the array will\nnot be copied to the client. The status is 0 by default.\n"},
  {"GetAttributeArrayStatus", PyvtkPythonRepresentation_GetAttributeArrayStatus, METH_VARARGS,
   "V.GetAttributeArrayStatus(int, string) -> int\nC++: int GetAttributeArrayStatus(int attributeType,\n    const char *name)\n\nGet the status indicating whether the array with the given name\nand attribute type in the input will be copied to the client.\nStatus is 0 by default.\n"},
  {"EnableAllAttributeArrays", PyvtkPythonRepresentation_EnableAllAttributeArrays, METH_VARARGS,
   "V.EnableAllAttributeArrays()\nC++: void EnableAllAttributeArrays()\n\nEnable all arrays. When called, all arrays will be marked as\nenabled.\n"},
  {"DisableAllAttributeArrays", PyvtkPythonRepresentation_DisableAllAttributeArrays, METH_VARARGS,
   "V.DisableAllAttributeArrays()\nC++: void DisableAllAttributeArrays()\n\nDisable all arrays. When called, all arrays will be marked as\ndisabled.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPythonRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPythonRepresentation", // tp_name
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
  PyvtkPythonRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPythonRepresentation_StaticNew()
{
  return vtkPythonRepresentation::New();
}

PyObject *PyvtkPythonRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPythonRepresentation_Type, PyvtkPythonRepresentation_Methods,
    "vtkPythonRepresentation",
 &PyvtkPythonRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkPythonRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVDataRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPythonRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPythonRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPythonRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

