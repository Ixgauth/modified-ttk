// python wrapper for vtkPVClassNameInformation
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
#include "vtkPVClassNameInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVClassNameInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVClassNameInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVInformation_ClassNew
extern "C" { PyObject *PyvtkPVInformation_ClassNew(); }
#define DECLARED_PyvtkPVInformation_ClassNew
#endif

static const char *PyvtkPVClassNameInformation_Doc =
  "vtkPVClassNameInformation - Holds class name\n\n"
  "Superclass: vtkPVInformation\n\n"
  "This information object gets the class name of the input VTK object. \n"
  "This is separate from vtkPVDataInformation because it can be\n"
  "determined before Update is called and because it operates on any VTK\n"
  "object.\n\n";


static PyObject *
PyvtkPVClassNameInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVClassNameInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVClassNameInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClassNameInformation *op = static_cast<vtkPVClassNameInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVClassNameInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVClassNameInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVClassNameInformation *tempr = vtkPVClassNameInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVClassNameInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClassNameInformation *op = static_cast<vtkPVClassNameInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVClassNameInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVClassNameInformation::NewInstance());

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
PyvtkPVClassNameInformation_SetPortNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPortNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClassNameInformation *op = static_cast<vtkPVClassNameInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPortNumber(temp0);
    }
    else
    {
      op->vtkPVClassNameInformation::SetPortNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVClassNameInformation_GetVTKClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClassNameInformation *op = static_cast<vtkPVClassNameInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVTKClassName() :
      op->vtkPVClassNameInformation::GetVTKClassName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVClassNameInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClassNameInformation *op = static_cast<vtkPVClassNameInformation *>(vp);

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
      op->vtkPVClassNameInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVClassNameInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClassNameInformation *op = static_cast<vtkPVClassNameInformation *>(vp);

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
      op->vtkPVClassNameInformation::AddInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVClassNameInformation_CopyParametersToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParametersToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClassNameInformation *op = static_cast<vtkPVClassNameInformation *>(vp);

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
      op->vtkPVClassNameInformation::CopyParametersToStream(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVClassNameInformation_CopyParametersFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParametersFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClassNameInformation *op = static_cast<vtkPVClassNameInformation *>(vp);

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
      op->vtkPVClassNameInformation::CopyParametersFromStream(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVClassNameInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVClassNameInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVClassNameInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVClassNameInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVClassNameInformation\nC++: static vtkPVClassNameInformation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVClassNameInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVClassNameInformation\nC++: vtkPVClassNameInformation *NewInstance()\n\n"},
  {"SetPortNumber", PyvtkPVClassNameInformation_SetPortNumber, METH_VARARGS,
   "V.SetPortNumber(int)\nC++: virtual void SetPortNumber(int _arg)\n\nPort number controls which output port the information is\ngathered from. This is only applicable when the vtkObject from\nwhich the information being gathered is a vtkAlgorithm. Set it to\n-1(default), to return the classname of the vtkAlgorithm itself.\nThis is the only parameter that can be set on  the client-side\nbefore gathering the information.\n"},
  {"GetVTKClassName", PyvtkPVClassNameInformation_GetVTKClassName, METH_VARARGS,
   "V.GetVTKClassName() -> string\nC++: virtual char *GetVTKClassName()\n\nGet class name of VTK object.\n"},
  {"CopyFromObject", PyvtkPVClassNameInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: void CopyFromObject(vtkObject *) override;\n\nTransfer information about a single object into this object.\n"},
  {"AddInformation", PyvtkPVClassNameInformation_AddInformation, METH_VARARGS,
   "V.AddInformation(vtkPVInformation)\nC++: void AddInformation(vtkPVInformation *) override;\n\nMerge another information object.\n"},
  {"CopyParametersToStream", PyvtkPVClassNameInformation_CopyParametersToStream, METH_VARARGS,
   "V.CopyParametersToStream(vtkMultiProcessStream)\nC++: void CopyParametersToStream(vtkMultiProcessStream &)\n    override;\n\nSerialize/Deserialize the parameters that control how/what\ninformation is gathered. This are different from the ivars that\nconstitute the gathered information itself. For example,\nPortNumber on vtkPVDataInformation controls what output port the\ndata-information is gathered from.\n"},
  {"CopyParametersFromStream", PyvtkPVClassNameInformation_CopyParametersFromStream, METH_VARARGS,
   "V.CopyParametersFromStream(vtkMultiProcessStream)\nC++: void CopyParametersFromStream(vtkMultiProcessStream &)\n    override;\n\nSerialize/Deserialize the parameters that control how/what\ninformation is gathered. This are different from the ivars that\nconstitute the gathered information itself. For example,\nPortNumber on vtkPVDataInformation controls what output port the\ndata-information is gathered from.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVClassNameInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVClassNameInformation", // tp_name
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
  PyvtkPVClassNameInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVClassNameInformation_StaticNew()
{
  return vtkPVClassNameInformation::New();
}

PyObject *PyvtkPVClassNameInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVClassNameInformation_Type, PyvtkPVClassNameInformation_Methods,
    "vtkPVClassNameInformation",
 &PyvtkPVClassNameInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVClassNameInformation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVInformation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVClassNameInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVClassNameInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVClassNameInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}
