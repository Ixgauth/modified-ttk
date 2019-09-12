// python wrapper for vtkSMAMRLevelsDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkSMAMRLevelsDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMAMRLevelsDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMAMRLevelsDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMIntRangeDomain_ClassNew
extern "C" { PyObject *PyvtkSMIntRangeDomain_ClassNew(); }
#define DECLARED_PyvtkSMIntRangeDomain_ClassNew
#endif

static const char *PyvtkSMAMRLevelsDomain_Doc =
  "vtkSMAMRLevelsDomain - int range domain based on the levels in AMR\ndata.\n\n"
  "Superclass: vtkSMIntRangeDomain\n\n"
  "vtkSMAMRLevelsDomain is a subclass of vtkSMIntRangeDomain. It relies\n"
  "on one required property: \"Input\". \"Input\" is vtkSMInputProperty\n"
  "which provides the information about the data.\n\n"
  "Supported Required-Property functions:\n"
  "\\li Input : points to a property that provides the data producer.\n\n";


static PyObject *
PyvtkSMAMRLevelsDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMAMRLevelsDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAMRLevelsDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAMRLevelsDomain *op = static_cast<vtkSMAMRLevelsDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMAMRLevelsDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAMRLevelsDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMAMRLevelsDomain *tempr = vtkSMAMRLevelsDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAMRLevelsDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAMRLevelsDomain *op = static_cast<vtkSMAMRLevelsDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMAMRLevelsDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMAMRLevelsDomain::NewInstance());

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
PyvtkSMAMRLevelsDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAMRLevelsDomain *op = static_cast<vtkSMAMRLevelsDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    if (ap.IsBound())
    {
      op->Update(temp0);
    }
    else
    {
      op->vtkSMAMRLevelsDomain::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMAMRLevelsDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMAMRLevelsDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMAMRLevelsDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMAMRLevelsDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMAMRLevelsDomain\nC++: static vtkSMAMRLevelsDomain *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMAMRLevelsDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMAMRLevelsDomain\nC++: vtkSMAMRLevelsDomain *NewInstance()\n\n"},
  {"Update", PyvtkSMAMRLevelsDomain_Update, METH_VARARGS,
   "V.Update(vtkSMProperty)\nC++: void Update(vtkSMProperty *) override;\n\nUpdate the domain using the \"unchecked\" values (if available) for\nall required properties.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMAMRLevelsDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMAMRLevelsDomain", // tp_name
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
  PyvtkSMAMRLevelsDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMAMRLevelsDomain_StaticNew()
{
  return vtkSMAMRLevelsDomain::New();
}

PyObject *PyvtkSMAMRLevelsDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMAMRLevelsDomain_Type, PyvtkSMAMRLevelsDomain_Methods,
    "vtkSMAMRLevelsDomain",
 &PyvtkSMAMRLevelsDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMAMRLevelsDomain_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMIntRangeDomain_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMAMRLevelsDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMAMRLevelsDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMAMRLevelsDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

