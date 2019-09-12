// python wrapper for vtkSMFieldDataDomain
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
#include "vtkSMFieldDataDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMFieldDataDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMFieldDataDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMEnumerationDomain_ClassNew
extern "C" { PyObject *PyvtkSMEnumerationDomain_ClassNew(); }
#define DECLARED_PyvtkSMEnumerationDomain_ClassNew
#endif

static const char *PyvtkSMFieldDataDomain_Doc =
  "vtkSMFieldDataDomain - enumeration with point and cell data entries\n\n"
  "Superclass: vtkSMEnumerationDomain\n\n"
  "vtkSMFieldDataDomain is a sub-class vtkSMEnumerationDomain that looks\n"
  "at the input in Update() and populates the entry list based on\n"
  "whether there are valid arrays in point/cell/vertex/edge/row data. At\n"
  "most it consists of two entries: (\"Point Data\",\n"
  "vtkDataObject::FIELD_ASSOCIATION_POINTS) and (\"Cell Data\", \n"
  "vtkDataObject::FIELD_ASSOCIATION_CELLS) in case of vtkDataSet\n"
  "subclasses OR (\"Vertex Data\",\n"
  "vtkDataObject::FIELD_ASSOCIATION_VERTICES) and (\"Edge Data\",\n"
  "vtkDataObject::FIELD_ASSOCIATION_EDGES) in case of vtkGraph and\n"
  "subclasses OR (\"Row Data\", vtkDataObject::FIELD_ASSOCIATION_ROWS) in\n"
  "case of vtkTable and subclasses. It requires Input\n"
  "(vtkSMProxyProperty) property. If attribute\n"
  "\"disable_update_domain_entries\" is set to true (false by default),\n"
  "then the domain values will not changed based on input field\n"
  "availability. Only the default value setting will be affected by\n"
  "that.\n"
  "@sa\n"
  "vtkSMEnumerationDomain vtkSMProxyProperty\n\n";


static PyObject *
PyvtkSMFieldDataDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMFieldDataDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMFieldDataDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFieldDataDomain *op = static_cast<vtkSMFieldDataDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMFieldDataDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMFieldDataDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMFieldDataDomain *tempr = vtkSMFieldDataDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMFieldDataDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFieldDataDomain *op = static_cast<vtkSMFieldDataDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMFieldDataDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMFieldDataDomain::NewInstance());

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
PyvtkSMFieldDataDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFieldDataDomain *op = static_cast<vtkSMFieldDataDomain *>(vp);

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
      op->vtkSMFieldDataDomain::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMFieldDataDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFieldDataDomain *op = static_cast<vtkSMFieldDataDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMFieldDataDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMFieldDataDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMFieldDataDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMFieldDataDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMFieldDataDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMFieldDataDomain\nC++: static vtkSMFieldDataDomain *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMFieldDataDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMFieldDataDomain\nC++: vtkSMFieldDataDomain *NewInstance()\n\n"},
  {"Update", PyvtkSMFieldDataDomain_Update, METH_VARARGS,
   "V.Update(vtkSMProperty)\nC++: void Update(vtkSMProperty *prop) override;\n\nCheck the input and appropriate fields (point data or cell data)\nto the enumeration. This uses the Input property with a\nvtkSMInputArrayDomain.\n"},
  {"SetDefaultValues", PyvtkSMFieldDataDomain_SetDefaultValues, METH_VARARGS,
   "V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values) override;\n\nOverridden to ensure that the property's default value is valid\nfor the enumeration, if not it will be set to the first\nenumeration value.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMFieldDataDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMFieldDataDomain", // tp_name
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
  PyvtkSMFieldDataDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMFieldDataDomain_StaticNew()
{
  return vtkSMFieldDataDomain::New();
}

PyObject *PyvtkSMFieldDataDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMFieldDataDomain_Type, PyvtkSMFieldDataDomain_Methods,
    "vtkSMFieldDataDomain",
 &PyvtkSMFieldDataDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMFieldDataDomain_Type;

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

void PyVTKAddFile_vtkSMFieldDataDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMFieldDataDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMFieldDataDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

