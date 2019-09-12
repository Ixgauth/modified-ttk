// python wrapper for vtkSMExtentDomain
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
#include "vtkSMExtentDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMExtentDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMExtentDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMIntRangeDomain_ClassNew
extern "C" { PyObject *PyvtkSMIntRangeDomain_ClassNew(); }
#define DECLARED_PyvtkSMIntRangeDomain_ClassNew
#endif

static const char *PyvtkSMExtentDomain_Doc =
  "vtkSMExtentDomain - int range domain based on data set extent\n\n"
  "Superclass: vtkSMIntRangeDomain\n\n"
  "vtkSMExtentDomain is a subclass of vtkSMIntRangeDomain. In its Update\n"
  "method, it determines the minimum and maximum extent in each\n"
  "dimension of the structured data set with which it is associated. It\n"
  "requires a vtkSMSourceProxy to do this.\n"
  "@sa\n"
  "vtkSMIntRangeDomain\n\n";


static PyObject *
PyvtkSMExtentDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMExtentDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMExtentDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExtentDomain *op = static_cast<vtkSMExtentDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMExtentDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMExtentDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMExtentDomain *tempr = vtkSMExtentDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMExtentDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExtentDomain *op = static_cast<vtkSMExtentDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMExtentDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMExtentDomain::NewInstance());

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
PyvtkSMExtentDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExtentDomain *op = static_cast<vtkSMExtentDomain *>(vp);

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
      op->vtkSMExtentDomain::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMExtentDomain_SetAnimationValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExtentDomain *op = static_cast<vtkSMExtentDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetAnimationValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMExtentDomain::SetAnimationValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMExtentDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExtentDomain *op = static_cast<vtkSMExtentDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMExtentDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMExtentDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMExtentDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMExtentDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMExtentDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMExtentDomain\nC++: static vtkSMExtentDomain *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMExtentDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMExtentDomain\nC++: vtkSMExtentDomain *NewInstance()\n\n"},
  {"Update", PyvtkSMExtentDomain_Update, METH_VARARGS,
   "V.Update(vtkSMProperty)\nC++: void Update(vtkSMProperty *) override;\n\nUpdate self checking the \"unchecked\" values of all required\nproperties. Overwritten by sub-classes.\n"},
  {"SetAnimationValue", PyvtkSMExtentDomain_SetAnimationValue, METH_VARARGS,
   "V.SetAnimationValue(vtkSMProperty, int, float)\nC++: void SetAnimationValue(vtkSMProperty *property, int idx,\n    double value) override;\n\nSet the value of an element of a property from the animation\neditor.\n"},
  {"SetDefaultValues", PyvtkSMExtentDomain_SetDefaultValues, METH_VARARGS,
   "V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values) override;\n\nA vtkSMProperty is often defined with a default value in the XML\nitself. However, many times, the default value must be determined\nat run time. To facilitate this, domains can override this method\nto compute and set the default value for the property. Note that\nunlike the compile-time default values, the application must\nexplicitly call this method to initialize the property.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMExtentDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMExtentDomain", // tp_name
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
  PyvtkSMExtentDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMExtentDomain_StaticNew()
{
  return vtkSMExtentDomain::New();
}

PyObject *PyvtkSMExtentDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMExtentDomain_Type, PyvtkSMExtentDomain_Methods,
    "vtkSMExtentDomain",
 &PyvtkSMExtentDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMExtentDomain_Type;

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

void PyVTKAddFile_vtkSMExtentDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMExtentDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMExtentDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

