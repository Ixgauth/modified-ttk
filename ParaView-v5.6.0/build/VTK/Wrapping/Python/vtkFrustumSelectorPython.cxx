// python wrapper for vtkFrustumSelector
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
#include "vtkStdString.h"
#include "vtkFrustumSelector.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFrustumSelector(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFrustumSelector_ClassNew(); }

#ifndef DECLARED_PyvtkSelector_ClassNew
extern "C" { PyObject *PyvtkSelector_ClassNew(); }
#define DECLARED_PyvtkSelector_ClassNew
#endif

static const char *PyvtkFrustumSelector_Doc =
  "vtkFrustumSelector - vtkFrustumSelector is a vtkSelector that selects\nelements based on whether they are inside or intersect a frustum of\ninterest.\n\n"
  "Superclass: vtkSelector\n\n"
  "This handles the vtkSelectionNode::FRUSTUM selection type.\n\n";


static PyObject *
PyvtkFrustumSelector_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFrustumSelector::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumSelector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSelector *op = static_cast<vtkFrustumSelector *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFrustumSelector::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumSelector_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFrustumSelector *tempr = vtkFrustumSelector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumSelector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSelector *op = static_cast<vtkFrustumSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFrustumSelector *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFrustumSelector::NewInstance());

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
PyvtkFrustumSelector_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSelector *op = static_cast<vtkFrustumSelector *>(vp);

  vtkSelectionNode *temp0 = nullptr;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1);
    }
    else
    {
      op->vtkFrustumSelector::Initialize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumSelector_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSelector *op = static_cast<vtkFrustumSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkFrustumSelector::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumSelector_SetFrustum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSelector *op = static_cast<vtkFrustumSelector *>(vp);

  vtkPlanes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
  {
    if (ap.IsBound())
    {
      op->SetFrustum(temp0);
    }
    else
    {
      op->vtkFrustumSelector::SetFrustum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumSelector_GetFrustum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSelector *op = static_cast<vtkFrustumSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlanes *tempr = (ap.IsBound() ?
      op->GetFrustum() :
      op->vtkFrustumSelector::GetFrustum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFrustumSelector_Methods[] = {
  {"IsTypeOf", PyvtkFrustumSelector_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFrustumSelector_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFrustumSelector_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkFrustumSelector\nC++: static vtkFrustumSelector *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFrustumSelector_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFrustumSelector\nC++: vtkFrustumSelector *NewInstance()\n\n"},
  {"Initialize", PyvtkFrustumSelector_Initialize, METH_VARARGS,
   "V.Initialize(vtkSelectionNode, string)\nC++: void Initialize(vtkSelectionNode *node,\n    const std::string &insidednessArrayName) override;\n\nSets the vtkSelectionNode used by this selection operator and\ninitializes the data structures in the selection operator based\non the selection.\n\n(for example in the vtkFrustumSelector this creates the vtkPlanes\nimplicit function to represent the frustum).\n\n@param node The selection node that determines the behavior of\n    this operator.\n@param insidednessArrayName The name of the insidedness array to\n    add to the output\n       from this operator.\n"},
  {"GetMTime", PyvtkFrustumSelector_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime taking into account changes to the Frustum\n"},
  {"SetFrustum", PyvtkFrustumSelector_SetFrustum, METH_VARARGS,
   "V.SetFrustum(vtkPlanes)\nC++: void SetFrustum(vtkPlanes *)\n\nSet the selection frustum. The planes object must contain six\nplanes.\n"},
  {"GetFrustum", PyvtkFrustumSelector_GetFrustum, METH_VARARGS,
   "V.GetFrustum() -> vtkPlanes\nC++: vtkPlanes *GetFrustum()\n\nSet the selection frustum. The planes object must contain six\nplanes.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFrustumSelector_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersExtractionPython.vtkFrustumSelector", // tp_name
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
  PyvtkFrustumSelector_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFrustumSelector_StaticNew()
{
  return vtkFrustumSelector::New();
}

PyObject *PyvtkFrustumSelector_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFrustumSelector_Type, PyvtkFrustumSelector_Methods,
    "vtkFrustumSelector",
 &PyvtkFrustumSelector_StaticNew);

  PyTypeObject *pytype = &PyvtkFrustumSelector_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSelector_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFrustumSelector(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFrustumSelector_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFrustumSelector", o) != 0)
  {
    Py_DECREF(o);
  }

}

