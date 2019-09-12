// python wrapper for vtkPVRepresentedArrayListSettings
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
#include "vtkPVRepresentedArrayListSettings.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVRepresentedArrayListSettings(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVRepresentedArrayListSettings_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVRepresentedArrayListSettings_Doc =
  "vtkPVRepresentedArrayListSettings - singleton used to filter out\nundesired array names from color array list.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkPVRepresentedArrayListSettings is a singleton used to keep track\n"
  "of a list of regular expressions that filter out arrays in a\n"
  "RepresentedArrayList domain. All class to\n"
  "vtkPVRepresentedArrayListSettings::New() returns a reference to the\n"
  "singleton instance.\n\n";


static PyObject *
PyvtkPVRepresentedArrayListSettings_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVRepresentedArrayListSettings::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRepresentedArrayListSettings_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRepresentedArrayListSettings *op = static_cast<vtkPVRepresentedArrayListSettings *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVRepresentedArrayListSettings::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRepresentedArrayListSettings_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVRepresentedArrayListSettings *tempr = vtkPVRepresentedArrayListSettings::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRepresentedArrayListSettings_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRepresentedArrayListSettings *op = static_cast<vtkPVRepresentedArrayListSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVRepresentedArrayListSettings *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVRepresentedArrayListSettings::NewInstance());

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
PyvtkPVRepresentedArrayListSettings_GetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkPVRepresentedArrayListSettings *tempr = vtkPVRepresentedArrayListSettings::GetInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRepresentedArrayListSettings_SetNumberOfFilterExpressions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfFilterExpressions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRepresentedArrayListSettings *op = static_cast<vtkPVRepresentedArrayListSettings *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfFilterExpressions(temp0);
    }
    else
    {
      op->vtkPVRepresentedArrayListSettings::SetNumberOfFilterExpressions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRepresentedArrayListSettings_GetNumberOfFilterExpressions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFilterExpressions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRepresentedArrayListSettings *op = static_cast<vtkPVRepresentedArrayListSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFilterExpressions() :
      op->vtkPVRepresentedArrayListSettings::GetNumberOfFilterExpressions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRepresentedArrayListSettings_SetFilterExpression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilterExpression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRepresentedArrayListSettings *op = static_cast<vtkPVRepresentedArrayListSettings *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFilterExpression(temp0, temp1);
    }
    else
    {
      op->vtkPVRepresentedArrayListSettings::SetFilterExpression(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRepresentedArrayListSettings_GetFilterExpression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilterExpression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRepresentedArrayListSettings *op = static_cast<vtkPVRepresentedArrayListSettings *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFilterExpression(temp0) :
      op->vtkPVRepresentedArrayListSettings::GetFilterExpression(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVRepresentedArrayListSettings_Methods[] = {
  {"IsTypeOf", PyvtkPVRepresentedArrayListSettings_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVRepresentedArrayListSettings_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVRepresentedArrayListSettings_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVRepresentedArrayListSettings\nC++: static vtkPVRepresentedArrayListSettings *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVRepresentedArrayListSettings_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVRepresentedArrayListSettings\nC++: vtkPVRepresentedArrayListSettings *NewInstance()\n\n"},
  {"GetInstance", PyvtkPVRepresentedArrayListSettings_GetInstance, METH_VARARGS,
   "V.GetInstance() -> vtkPVRepresentedArrayListSettings\nC++: static vtkPVRepresentedArrayListSettings *GetInstance()\n\nAccess the singleton.\n"},
  {"SetNumberOfFilterExpressions", PyvtkPVRepresentedArrayListSettings_SetNumberOfFilterExpressions, METH_VARARGS,
   "V.SetNumberOfFilterExpressions(int)\nC++: virtual void SetNumberOfFilterExpressions(int n)\n\nSet/get the number of filter expressions.\n"},
  {"GetNumberOfFilterExpressions", PyvtkPVRepresentedArrayListSettings_GetNumberOfFilterExpressions, METH_VARARGS,
   "V.GetNumberOfFilterExpressions() -> int\nC++: virtual int GetNumberOfFilterExpressions()\n\nSet/get the number of filter expressions.\n"},
  {"SetFilterExpression", PyvtkPVRepresentedArrayListSettings_SetFilterExpression, METH_VARARGS,
   "V.SetFilterExpression(int, string)\nC++: virtual void SetFilterExpression(int i,\n    const char *expression)\n\nSet/get the filter expression at index i. If the index is outside\nthe valid range, this call is a noop.\n"},
  {"GetFilterExpression", PyvtkPVRepresentedArrayListSettings_GetFilterExpression, METH_VARARGS,
   "V.GetFilterExpression(int) -> string\nC++: virtual const char *GetFilterExpression(int i)\n\nSet/get the filter expression at index i. If the index is outside\nthe valid range, this call is a noop.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVRepresentedArrayListSettings_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkPVRepresentedArrayListSettings", // tp_name
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
  PyvtkPVRepresentedArrayListSettings_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVRepresentedArrayListSettings_StaticNew()
{
  return vtkPVRepresentedArrayListSettings::New();
}

PyObject *PyvtkPVRepresentedArrayListSettings_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVRepresentedArrayListSettings_Type, PyvtkPVRepresentedArrayListSettings_Methods,
    "vtkPVRepresentedArrayListSettings",
 &PyvtkPVRepresentedArrayListSettings_StaticNew);

  PyTypeObject *pytype = &PyvtkPVRepresentedArrayListSettings_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVRepresentedArrayListSettings(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVRepresentedArrayListSettings_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVRepresentedArrayListSettings", o) != 0)
  {
    Py_DECREF(o);
  }

}

