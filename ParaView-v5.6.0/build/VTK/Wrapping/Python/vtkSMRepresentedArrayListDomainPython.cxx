// python wrapper for vtkSMRepresentedArrayListDomain
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
#include "vtkSMRepresentedArrayListDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMRepresentedArrayListDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMRepresentedArrayListDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMArrayListDomain_ClassNew
extern "C" { PyObject *PyvtkSMArrayListDomain_ClassNew(); }
#define DECLARED_PyvtkSMArrayListDomain_ClassNew
#endif

static const char *PyvtkSMRepresentedArrayListDomain_Doc =
  "vtkSMRepresentedArrayListDomain - extends vtkSMArrayListDomain to add\nsupport for arrays from represented data information.\n\n"
  "Superclass: vtkSMArrayListDomain\n\n"
  "Representations often add new arrays on top of the ones provided by\n"
  "the inputs to the representations. In that case, the domains for\n"
  "properties that allow users to pick one of those newly added arrays\n"
  "need to show those arrays e.g. \"ColorArrayName\" property of geometry\n"
  "representations. This domain extends vtkSMArrayListDomain to add\n"
  "arrays from represented data for representations.\n\n";


static PyObject *
PyvtkSMRepresentedArrayListDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMRepresentedArrayListDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRepresentedArrayListDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentedArrayListDomain *op = static_cast<vtkSMRepresentedArrayListDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMRepresentedArrayListDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRepresentedArrayListDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMRepresentedArrayListDomain *tempr = vtkSMRepresentedArrayListDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRepresentedArrayListDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentedArrayListDomain *op = static_cast<vtkSMRepresentedArrayListDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMRepresentedArrayListDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMRepresentedArrayListDomain::NewInstance());

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
PyvtkSMRepresentedArrayListDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentedArrayListDomain *op = static_cast<vtkSMRepresentedArrayListDomain *>(vp);

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
      op->vtkSMRepresentedArrayListDomain::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMRepresentedArrayListDomain_GetUseTrueParentForRepresentatedDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseTrueParentForRepresentatedDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentedArrayListDomain *op = static_cast<vtkSMRepresentedArrayListDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseTrueParentForRepresentatedDataInformation() :
      op->vtkSMRepresentedArrayListDomain::GetUseTrueParentForRepresentatedDataInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMRepresentedArrayListDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMRepresentedArrayListDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMRepresentedArrayListDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMRepresentedArrayListDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMRepresentedArrayListDomain\nC++: static vtkSMRepresentedArrayListDomain *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMRepresentedArrayListDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMRepresentedArrayListDomain\nC++: vtkSMRepresentedArrayListDomain *NewInstance()\n\n"},
  {"Update", PyvtkSMRepresentedArrayListDomain_Update, METH_VARARGS,
   "V.Update(vtkSMProperty)\nC++: void Update(vtkSMProperty *) override;\n\nUpdate the domain.\n"},
  {"GetUseTrueParentForRepresentatedDataInformation", PyvtkSMRepresentedArrayListDomain_GetUseTrueParentForRepresentatedDataInformation, METH_VARARGS,
   "V.GetUseTrueParentForRepresentatedDataInformation() -> bool\nC++: virtual bool GetUseTrueParentForRepresentatedDataInformation(\n    )\n\nSet this to true (default) to let this domain use the\nrepresented-data-information from the outer  most representation\nproxy. This ensures that for composite representations where user\nis provided with a selection between multiple representations,\nthe represented array list domain fills its values up based on\nthe currently active representation type, rather than the\nrepresentation subproxy from which the property was exposed. In\nXML, use 'use_true_parent' attribute on the domain element to set\nthis value.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMRepresentedArrayListDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMRepresentedArrayListDomain", // tp_name
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
  PyvtkSMRepresentedArrayListDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMRepresentedArrayListDomain_StaticNew()
{
  return vtkSMRepresentedArrayListDomain::New();
}

PyObject *PyvtkSMRepresentedArrayListDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMRepresentedArrayListDomain_Type, PyvtkSMRepresentedArrayListDomain_Methods,
    "vtkSMRepresentedArrayListDomain",
 &PyvtkSMRepresentedArrayListDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMRepresentedArrayListDomain_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMArrayListDomain_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMRepresentedArrayListDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMRepresentedArrayListDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMRepresentedArrayListDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

