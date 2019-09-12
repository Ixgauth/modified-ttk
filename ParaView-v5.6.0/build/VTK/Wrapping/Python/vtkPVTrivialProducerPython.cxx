// python wrapper for vtkPVTrivialProducer
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
#include "vtkInformationVector.h"
#include "vtkPVTrivialProducer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVTrivialProducer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVTrivialProducer_ClassNew(); }

#ifndef DECLARED_PyvtkTrivialProducer_ClassNew
extern "C" { PyObject *PyvtkTrivialProducer_ClassNew(); }
#define DECLARED_PyvtkTrivialProducer_ClassNew
#endif

static const char *PyvtkPVTrivialProducer_Doc =
  "vtkPVTrivialProducer - specialized subclass of vtkTrivialProducer\nthat preserves the information about the whole extent of the data\nobject.\n\n"
  "Superclass: vtkTrivialProducer\n\n"
  "vtkPVTrivialProducer is specialized subclass of vtkTrivialProducer\n"
  "that can manage time requests.\n\n";


static PyObject *
PyvtkPVTrivialProducer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVTrivialProducer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTrivialProducer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrivialProducer *op = static_cast<vtkPVTrivialProducer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVTrivialProducer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTrivialProducer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVTrivialProducer *tempr = vtkPVTrivialProducer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTrivialProducer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrivialProducer *op = static_cast<vtkPVTrivialProducer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVTrivialProducer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVTrivialProducer::NewInstance());

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
PyvtkPVTrivialProducer_SetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrivialProducer *op = static_cast<vtkPVTrivialProducer *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetOutput(temp0);
    }
    else
    {
      op->vtkPVTrivialProducer::SetOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVTrivialProducer_SetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrivialProducer *op = static_cast<vtkPVTrivialProducer *>(vp);

  vtkDataObject *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOutput(temp0, temp1);
    }
    else
    {
      op->vtkPVTrivialProducer::SetOutput(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVTrivialProducer_SetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPVTrivialProducer_SetOutput_s1(self, args);
    case 2:
      return PyvtkPVTrivialProducer_SetOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutput");
  return nullptr;
}


static PyMethodDef PyvtkPVTrivialProducer_Methods[] = {
  {"IsTypeOf", PyvtkPVTrivialProducer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVTrivialProducer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVTrivialProducer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVTrivialProducer\nC++: static vtkPVTrivialProducer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVTrivialProducer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVTrivialProducer\nC++: vtkPVTrivialProducer *NewInstance()\n\n"},
  {"SetOutput", PyvtkPVTrivialProducer_SetOutput, METH_VARARGS,
   "V.SetOutput(vtkDataObject)\nC++: void SetOutput(vtkDataObject *output) override;\nV.SetOutput(vtkDataObject, float)\nC++: virtual void SetOutput(vtkDataObject *output, double time)\n\nSet the data object that is \"produced\" by this producer.  It is\nnever really modified.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVTrivialProducer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkPVTrivialProducer", // tp_name
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
  PyvtkPVTrivialProducer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVTrivialProducer_StaticNew()
{
  return vtkPVTrivialProducer::New();
}

PyObject *PyvtkPVTrivialProducer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVTrivialProducer_Type, PyvtkPVTrivialProducer_Methods,
    "vtkPVTrivialProducer",
 &PyvtkPVTrivialProducer_StaticNew);

  PyTypeObject *pytype = &PyvtkPVTrivialProducer_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTrivialProducer_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVTrivialProducer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVTrivialProducer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVTrivialProducer", o) != 0)
  {
    Py_DECREF(o);
  }

}

