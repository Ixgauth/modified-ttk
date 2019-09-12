// python wrapper for vtkBlockSelector
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
#include "vtkBlockSelector.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBlockSelector(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBlockSelector_ClassNew(); }

#ifndef DECLARED_PyvtkSelector_ClassNew
extern "C" { PyObject *PyvtkSelector_ClassNew(); }
#define DECLARED_PyvtkSelector_ClassNew
#endif

static const char *PyvtkBlockSelector_Doc =
  "vtkBlockSelector - Selects cells or points contained in a block as\ndefined in the vtkSelectionNode used to initialize this operator.\n\n"
  "Superclass: vtkSelector\n\n"
;


static PyObject *
PyvtkBlockSelector_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBlockSelector::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockSelector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockSelector *op = static_cast<vtkBlockSelector *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBlockSelector::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockSelector_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBlockSelector *tempr = vtkBlockSelector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockSelector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockSelector *op = static_cast<vtkBlockSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBlockSelector *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBlockSelector::NewInstance());

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
PyvtkBlockSelector_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockSelector *op = static_cast<vtkBlockSelector *>(vp);

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
      op->vtkBlockSelector::Initialize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBlockSelector_Methods[] = {
  {"IsTypeOf", PyvtkBlockSelector_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBlockSelector_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBlockSelector_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBlockSelector\nC++: static vtkBlockSelector *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBlockSelector_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBlockSelector\nC++: vtkBlockSelector *NewInstance()\n\n"},
  {"Initialize", PyvtkBlockSelector_Initialize, METH_VARARGS,
   "V.Initialize(vtkSelectionNode, string)\nC++: void Initialize(vtkSelectionNode *node,\n    const std::string &insidednessArrayName) override;\n\nSets the vtkSelectionNode used by this selection operator and\ninitializes the data structures in the selection operator based\non the selection.\n\n(for example in the vtkFrustumSelector this creates the vtkPlanes\nimplicit function to represent the frustum).\n\n@param node The selection node that determines the behavior of\n    this operator.\n@param insidednessArrayName The name of the insidedness array to\n    add to the output\n       from this operator.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBlockSelector_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersExtractionPython.vtkBlockSelector", // tp_name
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
  PyvtkBlockSelector_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBlockSelector_StaticNew()
{
  return vtkBlockSelector::New();
}

PyObject *PyvtkBlockSelector_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBlockSelector_Type, PyvtkBlockSelector_Methods,
    "vtkBlockSelector",
 &PyvtkBlockSelector_StaticNew);

  PyTypeObject *pytype = &PyvtkBlockSelector_Type;

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

void PyVTKAddFile_vtkBlockSelector(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBlockSelector_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBlockSelector", o) != 0)
  {
    Py_DECREF(o);
  }

}

