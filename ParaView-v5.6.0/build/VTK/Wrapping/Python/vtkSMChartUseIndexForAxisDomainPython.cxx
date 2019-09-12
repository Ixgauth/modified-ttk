// python wrapper for vtkSMChartUseIndexForAxisDomain
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
#include "vtkSMChartUseIndexForAxisDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMChartUseIndexForAxisDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMChartUseIndexForAxisDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMBooleanDomain_ClassNew
extern "C" { PyObject *PyvtkSMBooleanDomain_ClassNew(); }
#define DECLARED_PyvtkSMBooleanDomain_ClassNew
#endif

static const char *PyvtkSMChartUseIndexForAxisDomain_Doc =
  "vtkSMChartUseIndexForAxisDomain - extends vtkSMBooleanDomain to pick\na good default for properties such as \"UseIndexForXAxis\" on chart\nrepresentations.\n\n"
  "Superclass: vtkSMBooleanDomain\n\n"
  "vtkSMChartUseIndexForAxisDomain extends vtkSMBooleanDomain to add\n"
  "logic to pick an appropriate default e.g. UseIndexForXAxis for bar\n"
  "and line charts needs to be set to 0 by default, if the XArrayName is\n"
  "one of the known arrays such as \"bin_extents\", \"arc_length\", and set\n"
  "to 1 otherwise. This class encapsulates that logic.\n\n"
  "Supported Required-Property functions:\n"
  "\\li ArraySelection : (required) refers to the property that dictates\n"
  "    the\n"
  "array selection.\n\n";


static PyObject *
PyvtkSMChartUseIndexForAxisDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMChartUseIndexForAxisDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMChartUseIndexForAxisDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartUseIndexForAxisDomain *op = static_cast<vtkSMChartUseIndexForAxisDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMChartUseIndexForAxisDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMChartUseIndexForAxisDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMChartUseIndexForAxisDomain *tempr = vtkSMChartUseIndexForAxisDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMChartUseIndexForAxisDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartUseIndexForAxisDomain *op = static_cast<vtkSMChartUseIndexForAxisDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMChartUseIndexForAxisDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMChartUseIndexForAxisDomain::NewInstance());

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
PyvtkSMChartUseIndexForAxisDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartUseIndexForAxisDomain *op = static_cast<vtkSMChartUseIndexForAxisDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMChartUseIndexForAxisDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMChartUseIndexForAxisDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartUseIndexForAxisDomain *op = static_cast<vtkSMChartUseIndexForAxisDomain *>(vp);

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
      op->vtkSMChartUseIndexForAxisDomain::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMChartUseIndexForAxisDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMChartUseIndexForAxisDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMChartUseIndexForAxisDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMChartUseIndexForAxisDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMChartUseIndexForAxisDomain\nC++: static vtkSMChartUseIndexForAxisDomain *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMChartUseIndexForAxisDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMChartUseIndexForAxisDomain\nC++: vtkSMChartUseIndexForAxisDomain *NewInstance()\n\n"},
  {"SetDefaultValues", PyvtkSMChartUseIndexForAxisDomain_SetDefaultValues, METH_VARARGS,
   "V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values) override;\n\nSet the default values for the property. Overridden to handle the\ndefault value for \"UseIndexForXAxis\" property, if any.\nUseIndexForXAxis needs to be OFF by default, if the required\nproperty e.g. XArrayName property has one of the known types of\narrays, otherwise it must be ON.\n"},
  {"Update", PyvtkSMChartUseIndexForAxisDomain_Update, METH_VARARGS,
   "V.Update(vtkSMProperty)\nC++: void Update(vtkSMProperty *requestingProperty) override;\n\nOverridden to fire DomainModified when the required property\nchanges. This ensures that SetDefaultValues() is called during\nproxy post-initialization after the required property has been\nreset to default.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMChartUseIndexForAxisDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMChartUseIndexForAxisDomain", // tp_name
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
  PyvtkSMChartUseIndexForAxisDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMChartUseIndexForAxisDomain_StaticNew()
{
  return vtkSMChartUseIndexForAxisDomain::New();
}

PyObject *PyvtkSMChartUseIndexForAxisDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMChartUseIndexForAxisDomain_Type, PyvtkSMChartUseIndexForAxisDomain_Methods,
    "vtkSMChartUseIndexForAxisDomain",
 &PyvtkSMChartUseIndexForAxisDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMChartUseIndexForAxisDomain_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMBooleanDomain_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMChartUseIndexForAxisDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMChartUseIndexForAxisDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMChartUseIndexForAxisDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

