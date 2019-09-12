// python wrapper for vtkTimeToTextConvertor
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
#include "vtkTimeToTextConvertor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTimeToTextConvertor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTimeToTextConvertor_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkTimeToTextConvertor_Doc =
  "vtkTimeToTextConvertor - This filter can be attached to any\nfilter/source/reader that supports time.\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "vtkTimeToTextConvertor will generate a 1x1 vtkTable with the string\n"
  "for the data time using the format specified. The input to this\n"
  "filter is optional. If no input is specified, it will show produce\n"
  "request time in the output.\n\n";


static PyObject *
PyvtkTimeToTextConvertor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTimeToTextConvertor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimeToTextConvertor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeToTextConvertor *op = static_cast<vtkTimeToTextConvertor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTimeToTextConvertor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimeToTextConvertor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTimeToTextConvertor *tempr = vtkTimeToTextConvertor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimeToTextConvertor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeToTextConvertor *op = static_cast<vtkTimeToTextConvertor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTimeToTextConvertor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTimeToTextConvertor::NewInstance());

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
PyvtkTimeToTextConvertor_SetFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeToTextConvertor *op = static_cast<vtkTimeToTextConvertor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFormat(temp0);
    }
    else
    {
      op->vtkTimeToTextConvertor::SetFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimeToTextConvertor_GetFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeToTextConvertor *op = static_cast<vtkTimeToTextConvertor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFormat() :
      op->vtkTimeToTextConvertor::GetFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimeToTextConvertor_SetShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeToTextConvertor *op = static_cast<vtkTimeToTextConvertor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShift(temp0);
    }
    else
    {
      op->vtkTimeToTextConvertor::SetShift(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimeToTextConvertor_GetShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeToTextConvertor *op = static_cast<vtkTimeToTextConvertor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetShift() :
      op->vtkTimeToTextConvertor::GetShift());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimeToTextConvertor_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeToTextConvertor *op = static_cast<vtkTimeToTextConvertor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkTimeToTextConvertor::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimeToTextConvertor_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeToTextConvertor *op = static_cast<vtkTimeToTextConvertor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkTimeToTextConvertor::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTimeToTextConvertor_Methods[] = {
  {"IsTypeOf", PyvtkTimeToTextConvertor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTimeToTextConvertor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTimeToTextConvertor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTimeToTextConvertor\nC++: static vtkTimeToTextConvertor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTimeToTextConvertor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTimeToTextConvertor\nC++: vtkTimeToTextConvertor *NewInstance()\n\n"},
  {"SetFormat", PyvtkTimeToTextConvertor_SetFormat, METH_VARARGS,
   "V.SetFormat(string)\nC++: virtual void SetFormat(const char *_arg)\n\nGet/Set the format in which the to display the input update time.\nUse printf formatting. Default is \"Time: %f\".\n"},
  {"GetFormat", PyvtkTimeToTextConvertor_GetFormat, METH_VARARGS,
   "V.GetFormat() -> string\nC++: virtual char *GetFormat()\n\nGet/Set the format in which the to display the input update time.\nUse printf formatting. Default is \"Time: %f\".\n"},
  {"SetShift", PyvtkTimeToTextConvertor_SetShift, METH_VARARGS,
   "V.SetShift(float)\nC++: virtual void SetShift(double _arg)\n\nApply a translation to the time\n"},
  {"GetShift", PyvtkTimeToTextConvertor_GetShift, METH_VARARGS,
   "V.GetShift() -> float\nC++: virtual double GetShift()\n\nApply a translation to the time\n"},
  {"SetScale", PyvtkTimeToTextConvertor_SetScale, METH_VARARGS,
   "V.SetScale(float)\nC++: virtual void SetScale(double _arg)\n\nApply a scale to the time.\n"},
  {"GetScale", PyvtkTimeToTextConvertor_GetScale, METH_VARARGS,
   "V.GetScale() -> float\nC++: virtual double GetScale()\n\nApply a scale to the time.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTimeToTextConvertor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkTimeToTextConvertor", // tp_name
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
  PyvtkTimeToTextConvertor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTimeToTextConvertor_StaticNew()
{
  return vtkTimeToTextConvertor::New();
}

PyObject *PyvtkTimeToTextConvertor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTimeToTextConvertor_Type, PyvtkTimeToTextConvertor_Methods,
    "vtkTimeToTextConvertor",
 &PyvtkTimeToTextConvertor_StaticNew);

  PyTypeObject *pytype = &PyvtkTimeToTextConvertor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTableAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTimeToTextConvertor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTimeToTextConvertor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTimeToTextConvertor", o) != 0)
  {
    Py_DECREF(o);
  }

}

