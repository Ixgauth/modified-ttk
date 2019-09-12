// python wrapper for vtkSMArrayRangeDomain
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
#include "vtkSMArrayRangeDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMArrayRangeDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMArrayRangeDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMDoubleRangeDomain_ClassNew
extern "C" { PyObject *PyvtkSMDoubleRangeDomain_ClassNew(); }
#define DECLARED_PyvtkSMDoubleRangeDomain_ClassNew
#endif

static const char *PyvtkSMArrayRangeDomain_Doc =
  "vtkSMArrayRangeDomain - double range domain based on array range\n\n"
  "Superclass: vtkSMDoubleRangeDomain\n\n"
  "vtkSMArrayRangeDomain is a sub-class of vtkSMDoubleRangeDomain. In\n"
  "it's Update(), it sets min/max values based on the range of an input\n"
  "array. It requires Input (vtkSMProxyProperty) and ArraySelection\n"
  "(vtkSMStringVectorProperty) properties.\n"
  "@sa\n"
  "vtkSMDoubleRangeDomain vtkSMProxyProperty vtkSMStringVectorProperty\n\n";


static PyObject *
PyvtkSMArrayRangeDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMArrayRangeDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMArrayRangeDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayRangeDomain *op = static_cast<vtkSMArrayRangeDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMArrayRangeDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMArrayRangeDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMArrayRangeDomain *tempr = vtkSMArrayRangeDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMArrayRangeDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayRangeDomain *op = static_cast<vtkSMArrayRangeDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMArrayRangeDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMArrayRangeDomain::NewInstance());

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
PyvtkSMArrayRangeDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayRangeDomain *op = static_cast<vtkSMArrayRangeDomain *>(vp);

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
      op->vtkSMArrayRangeDomain::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMArrayRangeDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMArrayRangeDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMArrayRangeDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMArrayRangeDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMArrayRangeDomain\nC++: static vtkSMArrayRangeDomain *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMArrayRangeDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMArrayRangeDomain\nC++: vtkSMArrayRangeDomain *NewInstance()\n\n"},
  {"Update", PyvtkSMArrayRangeDomain_Update, METH_VARARGS,
   "V.Update(vtkSMProperty)\nC++: void Update(vtkSMProperty *prop) override;\n\nUpdates the range based on the scalar range of the currently\nselected array. This requires Input (vtkSMProxyProperty) and\nArraySelection (vtkSMStringVectorProperty) properties. Currently,\nthis uses only the first component of the array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMArrayRangeDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMArrayRangeDomain", // tp_name
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
  PyvtkSMArrayRangeDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMArrayRangeDomain_StaticNew()
{
  return vtkSMArrayRangeDomain::New();
}

PyObject *PyvtkSMArrayRangeDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMArrayRangeDomain_Type, PyvtkSMArrayRangeDomain_Methods,
    "vtkSMArrayRangeDomain",
 &PyvtkSMArrayRangeDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMArrayRangeDomain_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMDoubleRangeDomain_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMArrayRangeDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMArrayRangeDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMArrayRangeDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

