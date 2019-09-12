// python wrapper for vtkPVCatalystSessionCore
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
#include "vtkPVCatalystSessionCore.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVCatalystSessionCore(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVCatalystSessionCore_ClassNew(); }

#ifndef DECLARED_PyvtkPVSessionCore_ClassNew
extern "C" { PyObject *PyvtkPVSessionCore_ClassNew(); }
#define DECLARED_PyvtkPVSessionCore_ClassNew
#endif

static const char *PyvtkPVCatalystSessionCore_Doc =
  "vtkPVCatalystSessionCore - vtkPVCatalystSessionCore is used by\nvtkSMSession.\n\n"
  "Superclass: vtkPVSessionCore\n\n"
  "vtkPVCatalystSessionCore handle catalyst based proxy which don't\n"
  "contains any real data and therefore are not allowed to execute the\n"
  "VTK pipeline.@ingroup LiveInsitu\n\n";


static PyObject *
PyvtkPVCatalystSessionCore_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVCatalystSessionCore::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCatalystSessionCore_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCatalystSessionCore *op = static_cast<vtkPVCatalystSessionCore *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCatalystSessionCore::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCatalystSessionCore_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVCatalystSessionCore *tempr = vtkPVCatalystSessionCore::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCatalystSessionCore_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCatalystSessionCore *op = static_cast<vtkPVCatalystSessionCore *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVCatalystSessionCore *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCatalystSessionCore::NewInstance());

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
PyvtkPVCatalystSessionCore_GatherInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCatalystSessionCore *op = static_cast<vtkPVCatalystSessionCore *>(vp);

  unsigned int temp0;
  vtkPVInformation *temp1 = nullptr;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPVInformation") &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->GatherInformation(temp0, temp1, temp2) :
      op->vtkPVCatalystSessionCore::GatherInformation(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCatalystSessionCore_RegisterDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCatalystSessionCore *op = static_cast<vtkPVCatalystSessionCore *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  vtkPVInformation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPVInformation"))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->RegisterDataInformation(temp0, temp1, temp2) :
      op->vtkPVCatalystSessionCore::RegisterDataInformation(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCatalystSessionCore_UpdateIdMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateIdMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCatalystSessionCore *op = static_cast<vtkPVCatalystSessionCore *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned int> store0(2*size0);
  unsigned int *temp0 = store0.Data();
  unsigned int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->UpdateIdMap(temp0, temp1);
    }
    else
    {
      op->vtkPVCatalystSessionCore::UpdateIdMap(temp0, temp1);
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
PyvtkPVCatalystSessionCore_ResetIdMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetIdMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCatalystSessionCore *op = static_cast<vtkPVCatalystSessionCore *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetIdMap();
    }
    else
    {
      op->vtkPVCatalystSessionCore::ResetIdMap();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVCatalystSessionCore_Methods[] = {
  {"IsTypeOf", PyvtkPVCatalystSessionCore_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVCatalystSessionCore_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVCatalystSessionCore_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVCatalystSessionCore\nC++: static vtkPVCatalystSessionCore *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVCatalystSessionCore_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVCatalystSessionCore\nC++: vtkPVCatalystSessionCore *NewInstance()\n\n"},
  {"GatherInformation", PyvtkPVCatalystSessionCore_GatherInformation, METH_VARARGS,
   "V.GatherInformation(int, vtkPVInformation, int) -> bool\nC++: bool GatherInformation(vtkTypeUInt32 location,\n    vtkPVInformation *information, vtkTypeUInt32 globalid)\n    override;\n\nGather information about an object referred by the\nglobalid.location identifies the processes to gather the\ninformation from.\n"},
  {"RegisterDataInformation", PyvtkPVCatalystSessionCore_RegisterDataInformation, METH_VARARGS,
   "V.RegisterDataInformation(int, int, vtkPVInformation) -> int\nC++: vtkTypeUInt32 RegisterDataInformation(vtkTypeUInt32 globalid,\n     unsigned int port, vtkPVInformation *information)\n\nUpdate the data information for a given proxy with the given\nglobalid. This will allow the GatherInformation to work with\n\"fake\" VTK pipeline. Return the real corresponding proxy id\n"},
  {"UpdateIdMap", PyvtkPVCatalystSessionCore_UpdateIdMap, METH_VARARGS,
   "V.UpdateIdMap([int, ...], int)\nC++: void UpdateIdMap(vtkTypeUInt32 *idMapArray, int size)\n\n"},
  {"ResetIdMap", PyvtkPVCatalystSessionCore_ResetIdMap, METH_VARARGS,
   "V.ResetIdMap()\nC++: void ResetIdMap()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVCatalystSessionCore_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerImplementationCorePython.vtkPVCatalystSessionCore", // tp_name
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
  PyvtkPVCatalystSessionCore_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVCatalystSessionCore_StaticNew()
{
  return vtkPVCatalystSessionCore::New();
}

PyObject *PyvtkPVCatalystSessionCore_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVCatalystSessionCore_Type, PyvtkPVCatalystSessionCore_Methods,
    "vtkPVCatalystSessionCore",
 &PyvtkPVCatalystSessionCore_StaticNew);

  PyTypeObject *pytype = &PyvtkPVCatalystSessionCore_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVSessionCore_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVCatalystSessionCore(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVCatalystSessionCore_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVCatalystSessionCore", o) != 0)
  {
    Py_DECREF(o);
  }

}

