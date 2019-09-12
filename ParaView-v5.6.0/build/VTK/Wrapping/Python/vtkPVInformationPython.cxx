// python wrapper for vtkPVInformation
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
#include "vtkMultiProcessStream.h"
#include "vtkPVInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVInformation_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVInformation_Doc =
  "vtkPVInformation - Superclass for information objects.\n\n"
  "Superclass: vtkObject\n\n"
  "Subclasses of this class are used to get information from the server.\n\n";


static PyObject *
PyvtkPVInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInformation *op = static_cast<vtkPVInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVInformation *tempr = vtkPVInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInformation *op = static_cast<vtkPVInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVInformation::NewInstance());

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
PyvtkPVInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInformation *op = static_cast<vtkPVInformation *>(vp);

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
      op->vtkPVInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInformation *op = static_cast<vtkPVInformation *>(vp);

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
      op->vtkPVInformation::AddInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVInformation_CopyParametersToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParametersToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInformation *op = static_cast<vtkPVInformation *>(vp);

  vtkMultiProcessStream *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, "vtkMultiProcessStream"))
  {
    if (ap.IsBound())
    {
      op->CopyParametersToStream(*temp0);
    }
    else
    {
      op->vtkPVInformation::CopyParametersToStream(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVInformation_CopyParametersFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParametersFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInformation *op = static_cast<vtkPVInformation *>(vp);

  vtkMultiProcessStream *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, "vtkMultiProcessStream"))
  {
    if (ap.IsBound())
    {
      op->CopyParametersFromStream(*temp0);
    }
    else
    {
      op->vtkPVInformation::CopyParametersFromStream(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVInformation_GetRootOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInformation *op = static_cast<vtkPVInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRootOnly() :
      op->vtkPVInformation::GetRootOnly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVInformation\nC++: static vtkPVInformation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVInformation\nC++: vtkPVInformation *NewInstance()\n\n"},
  {"CopyFromObject", PyvtkPVInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: virtual void CopyFromObject(vtkObject *)\n\nTransfer information about a single object into this object.\n"},
  {"AddInformation", PyvtkPVInformation_AddInformation, METH_VARARGS,
   "V.AddInformation(vtkPVInformation)\nC++: virtual void AddInformation(vtkPVInformation *)\n\nMerge another information object.\n"},
  {"CopyParametersToStream", PyvtkPVInformation_CopyParametersToStream, METH_VARARGS,
   "V.CopyParametersToStream(vtkMultiProcessStream)\nC++: virtual void CopyParametersToStream(vtkMultiProcessStream &)\n\nSerialize/Deserialize the parameters that control how/what\ninformation is gathered. This are different from the ivars that\nconstitute the gathered information itself. For example,\nPortNumber on vtkPVDataInformation controls what output port the\ndata-information is gathered from.\n"},
  {"CopyParametersFromStream", PyvtkPVInformation_CopyParametersFromStream, METH_VARARGS,
   "V.CopyParametersFromStream(vtkMultiProcessStream)\nC++: virtual void CopyParametersFromStream(\n    vtkMultiProcessStream &)\n\nSerialize/Deserialize the parameters that control how/what\ninformation is gathered. This are different from the ivars that\nconstitute the gathered information itself. For example,\nPortNumber on vtkPVDataInformation controls what output port the\ndata-information is gathered from.\n"},
  {"GetRootOnly", PyvtkPVInformation_GetRootOnly, METH_VARARGS,
   "V.GetRootOnly() -> int\nC++: virtual int GetRootOnly()\n\nSet/get whether to gather information only from the root.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVInformation", // tp_name
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
  PyvtkPVInformation_Doc, // tp_doc
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

PyObject *PyvtkPVInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVInformation_Type, PyvtkPVInformation_Methods,
    "vtkPVInformation",
 nullptr);

  PyTypeObject *pytype = &PyvtkPVInformation_Type;

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

void PyVTKAddFile_vtkPVInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

