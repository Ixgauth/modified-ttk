// python wrapper for vtkPVPostFilterExecutive
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
#include "vtkInformationVector.h"
#include "vtkPVPostFilterExecutive.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVPostFilterExecutive(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVPostFilterExecutive_ClassNew(); }

#ifndef DECLARED_PyvtkPVCompositeDataPipeline_ClassNew
extern "C" { PyObject *PyvtkPVCompositeDataPipeline_ClassNew(); }
#define DECLARED_PyvtkPVCompositeDataPipeline_ClassNew
#endif

static const char *PyvtkPVPostFilterExecutive_Doc =
  "vtkPVPostFilterExecutive - Executive supporting post filters.\n\n"
  "Superclass: vtkPVCompositeDataPipeline\n\n"
  "vtkPVPostFilterExecutive is an executive that supports the creation\n"
  "of post filters for the following uses cases: Provide the ability to\n"
  "automatically use a vector component as a scalar input property.\n\n"
  "Interpolate cell centered data to point data, and the inverse if\n"
  "needed by the filter.\n\n";


static PyObject *
PyvtkPVPostFilterExecutive_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVPostFilterExecutive::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPostFilterExecutive_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPostFilterExecutive *op = static_cast<vtkPVPostFilterExecutive *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVPostFilterExecutive::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPostFilterExecutive_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVPostFilterExecutive *tempr = vtkPVPostFilterExecutive::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPostFilterExecutive_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPostFilterExecutive *op = static_cast<vtkPVPostFilterExecutive *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVPostFilterExecutive *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVPostFilterExecutive::NewInstance());

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
PyvtkPVPostFilterExecutive_POST_ARRAYS_TO_PROCESS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "POST_ARRAYS_TO_PROCESS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationInformationVectorKey *tempr = vtkPVPostFilterExecutive::POST_ARRAYS_TO_PROCESS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPostFilterExecutive_POST_ARRAY_COMPONENT_KEY(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "POST_ARRAY_COMPONENT_KEY");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationStringVectorKey *tempr = vtkPVPostFilterExecutive::POST_ARRAY_COMPONENT_KEY();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPostFilterExecutive_GetPostArrayToProcessInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPostArrayToProcessInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPostFilterExecutive *op = static_cast<vtkPVPostFilterExecutive *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetPostArrayToProcessInformation(temp0) :
      op->vtkPVPostFilterExecutive::GetPostArrayToProcessInformation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPostFilterExecutive_SetPostArrayToProcessInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPostArrayToProcessInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPostFilterExecutive *op = static_cast<vtkPVPostFilterExecutive *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->SetPostArrayToProcessInformation(temp0, temp1);
    }
    else
    {
      op->vtkPVPostFilterExecutive::SetPostArrayToProcessInformation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVPostFilterExecutive_Methods[] = {
  {"IsTypeOf", PyvtkPVPostFilterExecutive_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVPostFilterExecutive_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVPostFilterExecutive_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVPostFilterExecutive\nC++: static vtkPVPostFilterExecutive *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVPostFilterExecutive_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVPostFilterExecutive\nC++: vtkPVPostFilterExecutive *NewInstance()\n\n"},
  {"POST_ARRAYS_TO_PROCESS", PyvtkPVPostFilterExecutive_POST_ARRAYS_TO_PROCESS, METH_VARARGS,
   "V.POST_ARRAYS_TO_PROCESS() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *POST_ARRAYS_TO_PROCESS(\n    )\n\n"},
  {"POST_ARRAY_COMPONENT_KEY", PyvtkPVPostFilterExecutive_POST_ARRAY_COMPONENT_KEY, METH_VARARGS,
   "V.POST_ARRAY_COMPONENT_KEY() -> vtkInformationStringVectorKey\nC++: static vtkInformationStringVectorKey *POST_ARRAY_COMPONENT_KEY(\n    )\n\n"},
  {"GetPostArrayToProcessInformation", PyvtkPVPostFilterExecutive_GetPostArrayToProcessInformation, METH_VARARGS,
   "V.GetPostArrayToProcessInformation(int) -> vtkInformation\nC++: vtkInformation *GetPostArrayToProcessInformation(int idx)\n\n"},
  {"SetPostArrayToProcessInformation", PyvtkPVPostFilterExecutive_SetPostArrayToProcessInformation, METH_VARARGS,
   "V.SetPostArrayToProcessInformation(int, vtkInformation)\nC++: void SetPostArrayToProcessInformation(int idx,\n    vtkInformation *inInfo)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVPostFilterExecutive_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkPVPostFilterExecutive", // tp_name
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
  PyvtkPVPostFilterExecutive_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVPostFilterExecutive_StaticNew()
{
  return vtkPVPostFilterExecutive::New();
}

PyObject *PyvtkPVPostFilterExecutive_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVPostFilterExecutive_Type, PyvtkPVPostFilterExecutive_Methods,
    "vtkPVPostFilterExecutive",
 &PyvtkPVPostFilterExecutive_StaticNew);

  PyTypeObject *pytype = &PyvtkPVPostFilterExecutive_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVCompositeDataPipeline_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVPostFilterExecutive(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVPostFilterExecutive_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVPostFilterExecutive", o) != 0)
  {
    Py_DECREF(o);
  }

}

