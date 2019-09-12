// python wrapper for vtkInformationKey
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
#include "vtkInformationKey.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInformationKey(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInformationKey_ClassNew(); }

#ifndef DECLARED_PyvtkObjectBase_ClassNew
extern "C" { PyObject *PyvtkObjectBase_ClassNew(); }
#define DECLARED_PyvtkObjectBase_ClassNew
#endif

static const char *PyvtkInformationKey_Doc =
  "vtkInformationKey - Superclass for vtkInformation keys.\n\n"
  "Superclass: vtkObjectBase\n\n"
  "vtkInformationKey is the superclass for all keys used to access the\n"
  "map represented by vtkInformation.  The vtkInformation::Set and\n"
  "vtkInformation::Get methods of vtkInformation are accessed by\n"
  "information keys.  A key is a pointer to an instance of a subclass of\n"
  "vtkInformationKey.  The type of the subclass determines the overload\n"
  "of Set/Get that is selected.  This ensures that the type of value\n"
  "stored in a vtkInformation instance corresponding to a given key\n"
  "matches the type expected for that key.\n\n";


static PyObject *
PyvtkInformationKey_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInformationKey::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInformationKey::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKey_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInformationKey *tempr = vtkInformationKey::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformationKey *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInformationKey::NewInstance());

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
PyvtkInformationKey_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkInformationKey::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKey_GetLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLocation() :
      op->vtkInformationKey::GetLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKey_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    op->ShallowCopy(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKey_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

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
      op->vtkInformationKey::DeepCopy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKey_Has(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformationKey::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKey_Remove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformationKey::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKey_Report(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Report");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

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
      op->vtkInformationKey::Report(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKey_Print(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Print");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->Print(temp0);
    }
    else
    {
      op->vtkInformationKey::Print(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKey_NeedToExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NeedToExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    bool tempr = (ap.IsBound() ?
      op->NeedToExecute(temp0, temp1) :
      op->vtkInformationKey::NeedToExecute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKey_StoreMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StoreMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

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
      op->vtkInformationKey::StoreMetaData(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKey_CopyDefaultInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyDefaultInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

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
      op->vtkInformationKey::CopyDefaultInformation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformationKey_Methods[] = {
  {"IsTypeOf", PyvtkInformationKey_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInformationKey_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInformationKey_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInformationKey\nC++: static vtkInformationKey *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInformationKey_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInformationKey\nC++: vtkInformationKey *NewInstance()\n\n"},
  {"GetName", PyvtkInformationKey_GetName, METH_VARARGS,
   "V.GetName() -> string\nC++: const char *GetName()\n\nGet the name of the key.  This is not the type of the key, but\nthe name of the key instance.\n"},
  {"GetLocation", PyvtkInformationKey_GetLocation, METH_VARARGS,
   "V.GetLocation() -> string\nC++: const char *GetLocation()\n\nGet the location of the key.  This is the name of the class in\nwhich the key is defined.\n"},
  {"ShallowCopy", PyvtkInformationKey_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkInformation, vtkInformation)\nC++: virtual void ShallowCopy(vtkInformation *from,\n    vtkInformation *to)\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {"DeepCopy", PyvtkInformationKey_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkInformation, vtkInformation)\nC++: virtual void DeepCopy(vtkInformation *from,\n    vtkInformation *to)\n\nDuplicate (new instance created) the entry associated with this\nkey from one information object to another (new instances of any\ncontained vtkInformation and vtkInformationVector objects are\ncreated). Default implementation simply calls ShallowCopy().\n"},
  {"Has", PyvtkInformationKey_Has, METH_VARARGS,
   "V.Has(vtkInformation) -> int\nC++: virtual int Has(vtkInformation *info)\n\nCheck whether this key appears in the given information object.\n"},
  {"Remove", PyvtkInformationKey_Remove, METH_VARARGS,
   "V.Remove(vtkInformation)\nC++: virtual void Remove(vtkInformation *info)\n\nRemove this key from the given information object.\n"},
  {"Report", PyvtkInformationKey_Report, METH_VARARGS,
   "V.Report(vtkInformation, vtkGarbageCollector)\nC++: virtual void Report(vtkInformation *info,\n    vtkGarbageCollector *collector)\n\nReport a reference this key has in the given information object.\n"},
  {"Print", PyvtkInformationKey_Print, METH_VARARGS,
   "V.Print(vtkInformation)\nC++: void Print(vtkInformation *info)\n\nPrint the key's value in an information object to a stream.\n"},
  {"NeedToExecute", PyvtkInformationKey_NeedToExecute, METH_VARARGS,
   "V.NeedToExecute(vtkInformation, vtkInformation) -> bool\nC++: virtual bool NeedToExecute(vtkInformation *pipelineInfo,\n    vtkInformation *dobjInfo)\n\nThis function is only relevant when the pertaining key is used in\na VTK pipeline. Specific keys that handle pipeline data requests\n(for example, UPDATE_PIECE_NUMBER) can overwrite this method to\nnotify the pipeline that a a filter should be (re-)executed\nbecause what is in the current output is different that what is\nbeing requested by the key. For example, DATA_PIECE_NUMBER !=\nUPDATE_PIECE_NUMBER.\n"},
  {"StoreMetaData", PyvtkInformationKey_StoreMetaData, METH_VARARGS,
   "V.StoreMetaData(vtkInformation, vtkInformation, vtkInformation)\nC++: virtual void StoreMetaData(vtkInformation *request,\n    vtkInformation *pipelineInfo, vtkInformation *dobjInfo)\n\nThis function is only relevant when the pertaining key is used in\na VTK pipeline. Specific keys that handle pipeline data requests\n(for example, UPDATE_PIECE_NUMBER) can overwrite this method to\nstore in the data information meta-data about the request that\nled to the current filter execution. This meta-data can later be\nused to compare what is being requested to decide whether the\nfilter needs to re-execute. For example, a filter may store the\ncurrent UPDATE_PIECE_NUMBER in the data object's information as\nthe DATA_PIECE_NUMBER. DATA_PIECE_NUMBER can later be compared to\na new UPDATA_PIECE_NUMBER to decide whether a filter should\nre-execute.\n"},
  {"CopyDefaultInformation", PyvtkInformationKey_CopyDefaultInformation, METH_VARARGS,
   "V.CopyDefaultInformation(vtkInformation, vtkInformation,\n    vtkInformation)\nC++: virtual void CopyDefaultInformation(vtkInformation *request,\n    vtkInformation *fromInfo, vtkInformation *toInfo)\n\nThis function is only relevant when the pertaining key is used in\na VTK pipeline. By overwriting this method, a key can decide\nif/how to copy itself downstream or upstream during a particular\npipeline pass. For example, meta-data keys can copy themselves\nduring REQUEST_INFORMATION whereas request keys can copy\nthemselves during REQUEST_UPDATE_EXTENT.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInformationKey_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkInformationKey", // tp_name
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
  PyvtkInformationKey_Doc, // tp_doc
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

PyObject *PyvtkInformationKey_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInformationKey_Type, PyvtkInformationKey_Methods,
    "vtkInformationKey",
 nullptr);

  PyTypeObject *pytype = &PyvtkInformationKey_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObjectBase_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInformationKey(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInformationKey_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInformationKey", o) != 0)
  {
    Py_DECREF(o);
  }

}

