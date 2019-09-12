// python wrapper for vtkInformationQuadratureSchemeDefinitionVectorKey
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
#include "vtkQuadratureSchemeDefinition.h"
#include "vtkInformationQuadratureSchemeDefinitionVectorKey.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInformationQuadratureSchemeDefinitionVectorKey(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInformationQuadratureSchemeDefinitionVectorKey_ClassNew(); }

#ifndef DECLARED_PyvtkInformationKey_ClassNew
extern "C" { PyObject *PyvtkInformationKey_ClassNew(); }
#define DECLARED_PyvtkInformationKey_ClassNew
#endif

static const char *PyvtkInformationQuadratureSchemeDefinitionVectorKey_Doc =
  "vtkInformationQuadratureSchemeDefinitionVectorKey - Key for\nvtkQuadratureSchemeDefinition vector values.\n\n"
  "Superclass: vtkInformationKey\n\n"
  "vtkInformationQuadratureSchemeDefinitionVectorKey is used to\n"
  "represent keys for double vector values in vtkInformation.h. NOTE the\n"
  "interface in this key differs from that in other similar keys because\n"
  "of our internal use of smart pointers.\n\n";


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInformationQuadratureSchemeDefinitionVectorKey::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInformationQuadratureSchemeDefinitionVectorKey::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInformationQuadratureSchemeDefinitionVectorKey *tempr = vtkInformationQuadratureSchemeDefinitionVectorKey::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformationQuadratureSchemeDefinitionVectorKey *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInformationQuadratureSchemeDefinitionVectorKey::NewInstance());

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
PyvtkInformationQuadratureSchemeDefinitionVectorKey_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->Clear(temp0);
    }
    else
    {
      op->vtkInformationQuadratureSchemeDefinitionVectorKey::Clear(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_Resize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Resize(temp0, temp1);
    }
    else
    {
      op->vtkInformationQuadratureSchemeDefinitionVectorKey::Resize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_Size(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Size");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->Size(temp0) :
      op->vtkInformationQuadratureSchemeDefinitionVectorKey::Size(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_Length(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformationQuadratureSchemeDefinitionVectorKey::Length(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkQuadratureSchemeDefinition *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkQuadratureSchemeDefinition"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformationQuadratureSchemeDefinitionVectorKey::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkQuadratureSchemeDefinition *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkQuadratureSchemeDefinition") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformationQuadratureSchemeDefinitionVectorKey::Set(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_Get(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
  {
    vtkQuadratureSchemeDefinition *tempr = (ap.IsBound() ?
      op->Get(temp0, temp1) :
      op->vtkInformationQuadratureSchemeDefinitionVectorKey::Get(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

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
      op->vtkInformationQuadratureSchemeDefinitionVectorKey::ShallowCopy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0, temp1);
    }
    else
    {
      op->vtkInformationQuadratureSchemeDefinitionVectorKey::DeepCopy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_SaveState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkXMLDataElement *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkXMLDataElement"))
  {
    int tempr = (ap.IsBound() ?
      op->SaveState(temp0, temp1) :
      op->vtkInformationQuadratureSchemeDefinitionVectorKey::SaveState(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_RestoreState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkXMLDataElement *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkXMLDataElement"))
  {
    int tempr = (ap.IsBound() ?
      op->RestoreState(temp0, temp1) :
      op->vtkInformationQuadratureSchemeDefinitionVectorKey::RestoreState(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInformationQuadratureSchemeDefinitionVectorKey_Methods[] = {
  {"IsTypeOf", PyvtkInformationQuadratureSchemeDefinitionVectorKey_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInformationQuadratureSchemeDefinitionVectorKey_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInformationQuadratureSchemeDefinitionVectorKey_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkInformationQuadratureSchemeDefinitionVectorKey\nC++: static vtkInformationQuadratureSchemeDefinitionVectorKey *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInformationQuadratureSchemeDefinitionVectorKey_NewInstance, METH_VARARGS,
   "V.NewInstance()\n    -> vtkInformationQuadratureSchemeDefinitionVectorKey\nC++: vtkInformationQuadratureSchemeDefinitionVectorKey *NewInstance(\n    )\n\n"},
  {"Clear", PyvtkInformationQuadratureSchemeDefinitionVectorKey_Clear, METH_VARARGS,
   "V.Clear(vtkInformation)\nC++: void Clear(vtkInformation *info)\n\nClear the vector.\n"},
  {"Resize", PyvtkInformationQuadratureSchemeDefinitionVectorKey_Resize, METH_VARARGS,
   "V.Resize(vtkInformation, int)\nC++: void Resize(vtkInformation *info, int n)\n\nResize (extend) the vector to hold n objects. Any new elements\ncreated will be null initialized.\n"},
  {"Size", PyvtkInformationQuadratureSchemeDefinitionVectorKey_Size, METH_VARARGS,
   "V.Size(vtkInformation) -> int\nC++: int Size(vtkInformation *info)\n\nGet the vector's length.\n"},
  {"Length", PyvtkInformationQuadratureSchemeDefinitionVectorKey_Length, METH_VARARGS,
   "V.Length(vtkInformation) -> int\nC++: int Length(vtkInformation *info)\n\n"},
  {"Append", PyvtkInformationQuadratureSchemeDefinitionVectorKey_Append, METH_VARARGS,
   "V.Append(vtkInformation, vtkQuadratureSchemeDefinition)\nC++: void Append(vtkInformation *info,\n    vtkQuadratureSchemeDefinition *value)\n\nPut the value on the back of the vector, with reference counting.\n"},
  {"Set", PyvtkInformationQuadratureSchemeDefinitionVectorKey_Set, METH_VARARGS,
   "V.Set(vtkInformation, vtkQuadratureSchemeDefinition, int)\nC++: void Set(vtkInformation *info,\n    vtkQuadratureSchemeDefinition *value, int i)\n\nSet element i of the vector to value. Resizes the vector if\nneeded.\n"},
  {"Get", PyvtkInformationQuadratureSchemeDefinitionVectorKey_Get, METH_VARARGS,
   "V.Get(vtkInformation, int) -> vtkQuadratureSchemeDefinition\nC++: vtkQuadratureSchemeDefinition *Get(vtkInformation *info,\n    int idx)\n\nGet the vtkQuadratureSchemeDefinition at a specific location in\nthe vector.\n"},
  {"ShallowCopy", PyvtkInformationQuadratureSchemeDefinitionVectorKey_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkInformation, vtkInformation)\nC++: void ShallowCopy(vtkInformation *from, vtkInformation *to)\n    override;\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {"DeepCopy", PyvtkInformationQuadratureSchemeDefinitionVectorKey_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkInformation, vtkInformation)\nC++: void DeepCopy(vtkInformation *from, vtkInformation *to)\n    override;\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {"SaveState", PyvtkInformationQuadratureSchemeDefinitionVectorKey_SaveState, METH_VARARGS,
   "V.SaveState(vtkInformation, vtkXMLDataElement) -> int\nC++: int SaveState(vtkInformation *info,\n    vtkXMLDataElement *element)\n\nGenerate an XML representation of the object. Each key/value pair\nwill be nested in the resulting XML hierarchy. The element passed\nin is assumed to be empty.\n"},
  {"RestoreState", PyvtkInformationQuadratureSchemeDefinitionVectorKey_RestoreState, METH_VARARGS,
   "V.RestoreState(vtkInformation, vtkXMLDataElement) -> int\nC++: int RestoreState(vtkInformation *info,\n    vtkXMLDataElement *element)\n\nLoad key/value pairs from an XML state representation created\nwith SaveState. Duplicate keys will generate a fatal error.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInformationQuadratureSchemeDefinitionVectorKey_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkInformationQuadratureSchemeDefinitionVectorKey", // tp_name
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
  PyvtkInformationQuadratureSchemeDefinitionVectorKey_Doc, // tp_doc
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

PyObject *PyvtkInformationQuadratureSchemeDefinitionVectorKey_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInformationQuadratureSchemeDefinitionVectorKey_Type, PyvtkInformationQuadratureSchemeDefinitionVectorKey_Methods,
    "vtkInformationQuadratureSchemeDefinitionVectorKey",
 nullptr);

  PyTypeObject *pytype = &PyvtkInformationQuadratureSchemeDefinitionVectorKey_Type;

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

void PyVTKAddFile_vtkInformationQuadratureSchemeDefinitionVectorKey(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInformationQuadratureSchemeDefinitionVectorKey_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInformationQuadratureSchemeDefinitionVectorKey", o) != 0)
  {
    Py_DECREF(o);
  }

}

