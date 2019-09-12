// python wrapper for vtkExtractPointCloudPiece
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
#include "vtkExtractPointCloudPiece.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractPointCloudPiece(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractPointCloudPiece_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkExtractPointCloudPiece_Doc =
  "vtkExtractPointCloudPiece - Return a piece of a point cloud\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "This filter takes the output of a vtkHierarchicalBinningFilter and\n"
  "allows the pipeline to stream it. Pieces are determined from an\n"
  "offset integral array associated with the field data of the input.\n\n";


static PyObject *
PyvtkExtractPointCloudPiece_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractPointCloudPiece::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPointCloudPiece_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPointCloudPiece *op = static_cast<vtkExtractPointCloudPiece *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractPointCloudPiece::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPointCloudPiece_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractPointCloudPiece *tempr = vtkExtractPointCloudPiece::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPointCloudPiece_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPointCloudPiece *op = static_cast<vtkExtractPointCloudPiece *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractPointCloudPiece *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractPointCloudPiece::NewInstance());

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
PyvtkExtractPointCloudPiece_SetModuloOrdering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModuloOrdering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPointCloudPiece *op = static_cast<vtkExtractPointCloudPiece *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetModuloOrdering(temp0);
    }
    else
    {
      op->vtkExtractPointCloudPiece::SetModuloOrdering(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPointCloudPiece_GetModuloOrdering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModuloOrdering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPointCloudPiece *op = static_cast<vtkExtractPointCloudPiece *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetModuloOrdering() :
      op->vtkExtractPointCloudPiece::GetModuloOrdering());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPointCloudPiece_ModuloOrderingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ModuloOrderingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPointCloudPiece *op = static_cast<vtkExtractPointCloudPiece *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ModuloOrderingOn();
    }
    else
    {
      op->vtkExtractPointCloudPiece::ModuloOrderingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPointCloudPiece_ModuloOrderingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ModuloOrderingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPointCloudPiece *op = static_cast<vtkExtractPointCloudPiece *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ModuloOrderingOff();
    }
    else
    {
      op->vtkExtractPointCloudPiece::ModuloOrderingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractPointCloudPiece_Methods[] = {
  {"IsTypeOf", PyvtkExtractPointCloudPiece_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiation, printing, and type\ninformation.\n"},
  {"IsA", PyvtkExtractPointCloudPiece_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiation, printing, and type\ninformation.\n"},
  {"SafeDownCast", PyvtkExtractPointCloudPiece_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractPointCloudPiece\nC++: static vtkExtractPointCloudPiece *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instantiation, printing, and type\ninformation.\n"},
  {"NewInstance", PyvtkExtractPointCloudPiece_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractPointCloudPiece\nC++: vtkExtractPointCloudPiece *NewInstance()\n\nStandard methods for instantiation, printing, and type\ninformation.\n"},
  {"SetModuloOrdering", PyvtkExtractPointCloudPiece_SetModuloOrdering, METH_VARARGS,
   "V.SetModuloOrdering(bool)\nC++: virtual void SetModuloOrdering(bool _arg)\n\nTurn on or off modulo sampling of the points. By default this is\non and the points in a given piece will be reordered in an\nattempt to reduce spatial coherency.\n"},
  {"GetModuloOrdering", PyvtkExtractPointCloudPiece_GetModuloOrdering, METH_VARARGS,
   "V.GetModuloOrdering() -> bool\nC++: virtual bool GetModuloOrdering()\n\nTurn on or off modulo sampling of the points. By default this is\non and the points in a given piece will be reordered in an\nattempt to reduce spatial coherency.\n"},
  {"ModuloOrderingOn", PyvtkExtractPointCloudPiece_ModuloOrderingOn, METH_VARARGS,
   "V.ModuloOrderingOn()\nC++: virtual void ModuloOrderingOn()\n\nTurn on or off modulo sampling of the points. By default this is\non and the points in a given piece will be reordered in an\nattempt to reduce spatial coherency.\n"},
  {"ModuloOrderingOff", PyvtkExtractPointCloudPiece_ModuloOrderingOff, METH_VARARGS,
   "V.ModuloOrderingOff()\nC++: virtual void ModuloOrderingOff()\n\nTurn on or off modulo sampling of the points. By default this is\non and the points in a given piece will be reordered in an\nattempt to reduce spatial coherency.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractPointCloudPiece_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkExtractPointCloudPiece", // tp_name
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
  PyvtkExtractPointCloudPiece_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractPointCloudPiece_StaticNew()
{
  return vtkExtractPointCloudPiece::New();
}

PyObject *PyvtkExtractPointCloudPiece_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractPointCloudPiece_Type, PyvtkExtractPointCloudPiece_Methods,
    "vtkExtractPointCloudPiece",
 &PyvtkExtractPointCloudPiece_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractPointCloudPiece_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractPointCloudPiece(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractPointCloudPiece_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractPointCloudPiece", o) != 0)
  {
    Py_DECREF(o);
  }

}

