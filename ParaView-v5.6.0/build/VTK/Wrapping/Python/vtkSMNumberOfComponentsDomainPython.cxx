// python wrapper for vtkSMNumberOfComponentsDomain
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
#include "vtkSMNumberOfComponentsDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMNumberOfComponentsDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMNumberOfComponentsDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMEnumerationDomain_ClassNew
extern "C" { PyObject *PyvtkSMEnumerationDomain_ClassNew(); }
#define DECLARED_PyvtkSMEnumerationDomain_ClassNew
#endif

static const char *PyvtkSMNumberOfComponentsDomain_Doc =
  "vtkSMNumberOfComponentsDomain - int range domain based on the number\nof components available in a particular data array.\n\n"
  "Superclass: vtkSMEnumerationDomain\n\n"
  "vtkSMNumberOfComponentsDomain is used for properties that allow the\n"
  "user to choose the component number (or associated name) to process\n"
  "for the chosen array. It needs two required properties with following\n"
  "functions:\n"
  "* Input -- input property for the filter.\n"
  "* ArraySelection -- string vector property used to select the array.\n"
  "  This domain will not work if either of the required properties is\n"
  "  missing.\n\n";


static PyObject *
PyvtkSMNumberOfComponentsDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMNumberOfComponentsDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMNumberOfComponentsDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNumberOfComponentsDomain *op = static_cast<vtkSMNumberOfComponentsDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMNumberOfComponentsDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMNumberOfComponentsDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMNumberOfComponentsDomain *tempr = vtkSMNumberOfComponentsDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMNumberOfComponentsDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNumberOfComponentsDomain *op = static_cast<vtkSMNumberOfComponentsDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMNumberOfComponentsDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMNumberOfComponentsDomain::NewInstance());

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
PyvtkSMNumberOfComponentsDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNumberOfComponentsDomain *op = static_cast<vtkSMNumberOfComponentsDomain *>(vp);

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
      op->vtkSMNumberOfComponentsDomain::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMNumberOfComponentsDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMNumberOfComponentsDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMNumberOfComponentsDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMNumberOfComponentsDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMNumberOfComponentsDomain\nC++: static vtkSMNumberOfComponentsDomain *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMNumberOfComponentsDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMNumberOfComponentsDomain\nC++: vtkSMNumberOfComponentsDomain *NewInstance()\n\n"},
  {"Update", PyvtkSMNumberOfComponentsDomain_Update, METH_VARARGS,
   "V.Update(vtkSMProperty)\nC++: void Update(vtkSMProperty *prop) override;\n\nUpdates the range based on the scalar range of the currently\nselected array. This requires Input (vtkSMProxyProperty) and\nArraySelection (vtkSMStringVectorProperty) properties. Currently,\nthis uses only the first component of the array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMNumberOfComponentsDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMNumberOfComponentsDomain", // tp_name
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
  PyvtkSMNumberOfComponentsDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMNumberOfComponentsDomain_StaticNew()
{
  return vtkSMNumberOfComponentsDomain::New();
}

PyObject *PyvtkSMNumberOfComponentsDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMNumberOfComponentsDomain_Type, PyvtkSMNumberOfComponentsDomain_Methods,
    "vtkSMNumberOfComponentsDomain",
 &PyvtkSMNumberOfComponentsDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMNumberOfComponentsDomain_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMEnumerationDomain_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMNumberOfComponentsDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMNumberOfComponentsDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMNumberOfComponentsDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

