// python wrapper for vtkSMDimensionsDomain
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
#include "vtkSMDimensionsDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMDimensionsDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMDimensionsDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMIntRangeDomain_ClassNew
extern "C" { PyObject *PyvtkSMIntRangeDomain_ClassNew(); }
#define DECLARED_PyvtkSMIntRangeDomain_ClassNew
#endif

static const char *PyvtkSMDimensionsDomain_Doc =
  "vtkSMDimensionsDomain - int range domain based on the data dimensions.\n\n"
  "Superclass: vtkSMIntRangeDomain\n\n"
  "vtkSMDimensionsDomain is a subclass of vtkSMIntRangeDomain. It relies\n"
  "on two required properties: \"Input\", \"Direction\". \"Input\" is\n"
  "generally an vtkSMInputProperty which provides the information about\n"
  "the data extents. \"Direction\" is an option required property which\n"
  "helps determine the direction (VTK_XY_PLANE, VTK_YZ_PLANE or\n"
  "VTK_XZ_PLANE). If \"Direction\" is not provided then the property must\n"
  "be a 3 element property while when Direction is provided the property\n"
  "must be a 1 element property.\n\n"
  "Supported Required-Property functions:\n"
  "\\li Input : points to a property that provides the data producer.\n"
  "\\li Direction: points to a property that provides the value for the\n"
  "                  selected direction.\n\n";


static PyObject *
PyvtkSMDimensionsDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMDimensionsDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDimensionsDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDimensionsDomain *op = static_cast<vtkSMDimensionsDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDimensionsDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDimensionsDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMDimensionsDomain *tempr = vtkSMDimensionsDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDimensionsDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDimensionsDomain *op = static_cast<vtkSMDimensionsDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMDimensionsDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDimensionsDomain::NewInstance());

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
PyvtkSMDimensionsDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDimensionsDomain *op = static_cast<vtkSMDimensionsDomain *>(vp);

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
      op->vtkSMDimensionsDomain::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMDimensionsDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMDimensionsDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMDimensionsDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMDimensionsDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMDimensionsDomain\nC++: static vtkSMDimensionsDomain *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMDimensionsDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMDimensionsDomain\nC++: vtkSMDimensionsDomain *NewInstance()\n\n"},
  {"Update", PyvtkSMDimensionsDomain_Update, METH_VARARGS,
   "V.Update(vtkSMProperty)\nC++: void Update(vtkSMProperty *) override;\n\nUpdate the domain using the \"unchecked\" values (if available) for\nall required properties.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMDimensionsDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMDimensionsDomain", // tp_name
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
  PyvtkSMDimensionsDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMDimensionsDomain_StaticNew()
{
  return vtkSMDimensionsDomain::New();
}

PyObject *PyvtkSMDimensionsDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMDimensionsDomain_Type, PyvtkSMDimensionsDomain_Methods,
    "vtkSMDimensionsDomain",
 &PyvtkSMDimensionsDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMDimensionsDomain_Type;

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

void PyVTKAddFile_vtkSMDimensionsDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMDimensionsDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMDimensionsDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

