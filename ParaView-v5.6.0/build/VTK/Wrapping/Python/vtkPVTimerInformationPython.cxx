// python wrapper for vtkPVTimerInformation
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
#include "vtkPVTimerInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVTimerInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVTimerInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVInformation_ClassNew
extern "C" { PyObject *PyvtkPVInformation_ClassNew(); }
#define DECLARED_PyvtkPVInformation_ClassNew
#endif

static const char *PyvtkPVTimerInformation_Doc =
  "vtkPVTimerInformation - Holds timer log for all processes.\n\n"
  "Superclass: vtkPVInformation\n\n"
  "I am using this information object to gather timer logs from all\n"
  "processes.\n\n";


static PyObject *
PyvtkPVTimerInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVTimerInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTimerInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTimerInformation *op = static_cast<vtkPVTimerInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVTimerInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTimerInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVTimerInformation *tempr = vtkPVTimerInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTimerInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTimerInformation *op = static_cast<vtkPVTimerInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVTimerInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVTimerInformation::NewInstance());

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
PyvtkPVTimerInformation_SetLogThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTimerInformation *op = static_cast<vtkPVTimerInformation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLogThreshold(temp0);
    }
    else
    {
      op->vtkPVTimerInformation::SetLogThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTimerInformation_GetLogThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTimerInformation *op = static_cast<vtkPVTimerInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLogThreshold() :
      op->vtkPVTimerInformation::GetLogThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTimerInformation_GetNumberOfLogs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLogs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTimerInformation *op = static_cast<vtkPVTimerInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLogs() :
      op->vtkPVTimerInformation::GetNumberOfLogs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTimerInformation_GetLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLog");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTimerInformation *op = static_cast<vtkPVTimerInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLog(temp0) :
      op->vtkPVTimerInformation::GetLog(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTimerInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTimerInformation *op = static_cast<vtkPVTimerInformation *>(vp);

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
      op->vtkPVTimerInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTimerInformation_CopyFromMessage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromMessage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTimerInformation *op = static_cast<vtkPVTimerInformation *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(2*size0);
  unsigned char *temp0 = store0.Data();
  unsigned char *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->CopyFromMessage(temp0);
    }
    else
    {
      op->vtkPVTimerInformation::CopyFromMessage(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTimerInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTimerInformation *op = static_cast<vtkPVTimerInformation *>(vp);

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
      op->vtkPVTimerInformation::AddInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTimerInformation_CopyParametersToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParametersToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTimerInformation *op = static_cast<vtkPVTimerInformation *>(vp);

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
      op->vtkPVTimerInformation::CopyParametersToStream(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTimerInformation_CopyParametersFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParametersFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTimerInformation *op = static_cast<vtkPVTimerInformation *>(vp);

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
      op->vtkPVTimerInformation::CopyParametersFromStream(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVTimerInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVTimerInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVTimerInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVTimerInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVTimerInformation\nC++: static vtkPVTimerInformation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVTimerInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVTimerInformation\nC++: vtkPVTimerInformation *NewInstance()\n\n"},
  {"SetLogThreshold", PyvtkPVTimerInformation_SetLogThreshold, METH_VARARGS,
   "V.SetLogThreshold(float)\nC++: virtual void SetLogThreshold(double _arg)\n\nGet/Set the threshold to use to gather the timer log information.\nThis must be set before calling GatherInformation().\n"},
  {"GetLogThreshold", PyvtkPVTimerInformation_GetLogThreshold, METH_VARARGS,
   "V.GetLogThreshold() -> float\nC++: virtual double GetLogThreshold()\n\nGet/Set the threshold to use to gather the timer log information.\nThis must be set before calling GatherInformation().\n"},
  {"GetNumberOfLogs", PyvtkPVTimerInformation_GetNumberOfLogs, METH_VARARGS,
   "V.GetNumberOfLogs() -> int\nC++: int GetNumberOfLogs()\n\nAccess to the logs.\n"},
  {"GetLog", PyvtkPVTimerInformation_GetLog, METH_VARARGS,
   "V.GetLog(int) -> string\nC++: char *GetLog(int proc)\n\nAccess to the logs.\n"},
  {"CopyFromObject", PyvtkPVTimerInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: void CopyFromObject(vtkObject *data) override;\n\nTransfer information about a single object into this object.\n"},
  {"CopyFromMessage", PyvtkPVTimerInformation_CopyFromMessage, METH_VARARGS,
   "V.CopyFromMessage([int, ...])\nC++: virtual void CopyFromMessage(unsigned char *msg)\n\nTransfer information about a single object into this object.\n"},
  {"AddInformation", PyvtkPVTimerInformation_AddInformation, METH_VARARGS,
   "V.AddInformation(vtkPVInformation)\nC++: void AddInformation(vtkPVInformation *info) override;\n\nMerge another information object.\n"},
  {"CopyParametersToStream", PyvtkPVTimerInformation_CopyParametersToStream, METH_VARARGS,
   "V.CopyParametersToStream(vtkMultiProcessStream)\nC++: void CopyParametersToStream(vtkMultiProcessStream &)\n    override;\n\nSerialize/Deserialize the parameters that control how/what\ninformation is gathered. This are different from the ivars that\nconstitute the gathered information itself.\n"},
  {"CopyParametersFromStream", PyvtkPVTimerInformation_CopyParametersFromStream, METH_VARARGS,
   "V.CopyParametersFromStream(vtkMultiProcessStream)\nC++: void CopyParametersFromStream(vtkMultiProcessStream &)\n    override;\n\nSerialize/Deserialize the parameters that control how/what\ninformation is gathered. This are different from the ivars that\nconstitute the gathered information itself.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVTimerInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVTimerInformation", // tp_name
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
  PyvtkPVTimerInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVTimerInformation_StaticNew()
{
  return vtkPVTimerInformation::New();
}

PyObject *PyvtkPVTimerInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVTimerInformation_Type, PyvtkPVTimerInformation_Methods,
    "vtkPVTimerInformation",
 &PyvtkPVTimerInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVTimerInformation_Type;

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

void PyVTKAddFile_vtkPVTimerInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVTimerInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVTimerInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

