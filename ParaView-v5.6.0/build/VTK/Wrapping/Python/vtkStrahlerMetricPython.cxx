// python wrapper for vtkStrahlerMetric
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
#include "vtkStrahlerMetric.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStrahlerMetric(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStrahlerMetric_ClassNew(); }

#ifndef DECLARED_PyvtkTreeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTreeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTreeAlgorithm_ClassNew
#endif

static const char *PyvtkStrahlerMetric_Doc =
  "vtkStrahlerMetric - compute Strahler metric for a tree\n\n"
  "Superclass: vtkTreeAlgorithm\n\n"
  "The Strahler metric is a value assigned to each vertex of a tree that\n"
  "characterizes the structural complexity of the sub-tree rooted at\n"
  "that node.  The metric originated in the study of river systems, but\n"
  "has been applied to other tree- structured systes,  Details of the\n"
  "metric and the rationale for using it in infovis can be found in:\n\n"
  "Tree Visualization and Navigation Clues for Information\n"
  "Visualization, I. Herman, M. Delest, and G. Melancon, Computer\n"
  "Graphics Forum, Vol 17(2), Blackwell, 1998.\n\n"
  "The input tree is copied to the output, but with a new array added to\n"
  "the output vertex data.\n\n"
  "@par Thanks: Thanks to David Duke from the University of Leeds for\n"
  "providing this implementation.\n\n";


static PyObject *
PyvtkStrahlerMetric_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStrahlerMetric::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStrahlerMetric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStrahlerMetric *op = static_cast<vtkStrahlerMetric *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStrahlerMetric::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStrahlerMetric_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStrahlerMetric *tempr = vtkStrahlerMetric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStrahlerMetric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStrahlerMetric *op = static_cast<vtkStrahlerMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStrahlerMetric *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStrahlerMetric::NewInstance());

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
PyvtkStrahlerMetric_SetMetricArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMetricArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStrahlerMetric *op = static_cast<vtkStrahlerMetric *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMetricArrayName(temp0);
    }
    else
    {
      op->vtkStrahlerMetric::SetMetricArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStrahlerMetric_SetNormalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStrahlerMetric *op = static_cast<vtkStrahlerMetric *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalize(temp0);
    }
    else
    {
      op->vtkStrahlerMetric::SetNormalize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStrahlerMetric_GetNormalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStrahlerMetric *op = static_cast<vtkStrahlerMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalize() :
      op->vtkStrahlerMetric::GetNormalize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStrahlerMetric_NormalizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStrahlerMetric *op = static_cast<vtkStrahlerMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeOn();
    }
    else
    {
      op->vtkStrahlerMetric::NormalizeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStrahlerMetric_NormalizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStrahlerMetric *op = static_cast<vtkStrahlerMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeOff();
    }
    else
    {
      op->vtkStrahlerMetric::NormalizeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStrahlerMetric_GetMaxStrahler(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxStrahler");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStrahlerMetric *op = static_cast<vtkStrahlerMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaxStrahler() :
      op->vtkStrahlerMetric::GetMaxStrahler());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkStrahlerMetric_Methods[] = {
  {"IsTypeOf", PyvtkStrahlerMetric_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStrahlerMetric_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStrahlerMetric_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkStrahlerMetric\nC++: static vtkStrahlerMetric *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStrahlerMetric_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStrahlerMetric\nC++: vtkStrahlerMetric *NewInstance()\n\n"},
  {"SetMetricArrayName", PyvtkStrahlerMetric_SetMetricArrayName, METH_VARARGS,
   "V.SetMetricArrayName(string)\nC++: virtual void SetMetricArrayName(const char *_arg)\n\nSet the name of the array in which the Strahler values will be\nstored within the output vertex data. Default is \"Strahler\"\n"},
  {"SetNormalize", PyvtkStrahlerMetric_SetNormalize, METH_VARARGS,
   "V.SetNormalize(int)\nC++: virtual void SetNormalize(vtkTypeBool _arg)\n\nSet/get setting of normalize flag.  If this is set, the Strahler\nvalues are scaled into the range [0..1]. Default is for\nnormalization to be OFF.\n"},
  {"GetNormalize", PyvtkStrahlerMetric_GetNormalize, METH_VARARGS,
   "V.GetNormalize() -> int\nC++: virtual vtkTypeBool GetNormalize()\n\nSet/get setting of normalize flag.  If this is set, the Strahler\nvalues are scaled into the range [0..1]. Default is for\nnormalization to be OFF.\n"},
  {"NormalizeOn", PyvtkStrahlerMetric_NormalizeOn, METH_VARARGS,
   "V.NormalizeOn()\nC++: virtual void NormalizeOn()\n\nSet/get setting of normalize flag.  If this is set, the Strahler\nvalues are scaled into the range [0..1]. Default is for\nnormalization to be OFF.\n"},
  {"NormalizeOff", PyvtkStrahlerMetric_NormalizeOff, METH_VARARGS,
   "V.NormalizeOff()\nC++: virtual void NormalizeOff()\n\nSet/get setting of normalize flag.  If this is set, the Strahler\nvalues are scaled into the range [0..1]. Default is for\nnormalization to be OFF.\n"},
  {"GetMaxStrahler", PyvtkStrahlerMetric_GetMaxStrahler, METH_VARARGS,
   "V.GetMaxStrahler() -> float\nC++: virtual float GetMaxStrahler()\n\nGet the maximum strahler value for the tree.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStrahlerMetric_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersStatisticsPython.vtkStrahlerMetric", // tp_name
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
  PyvtkStrahlerMetric_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStrahlerMetric_StaticNew()
{
  return vtkStrahlerMetric::New();
}

PyObject *PyvtkStrahlerMetric_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStrahlerMetric_Type, PyvtkStrahlerMetric_Methods,
    "vtkStrahlerMetric",
 &PyvtkStrahlerMetric_StaticNew);

  PyTypeObject *pytype = &PyvtkStrahlerMetric_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTreeAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStrahlerMetric(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStrahlerMetric_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStrahlerMetric", o) != 0)
  {
    Py_DECREF(o);
  }

}

