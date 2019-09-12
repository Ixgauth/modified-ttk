// python wrapper for vtkTransmitUnstructuredGridPiece
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
#include "vtkTransmitUnstructuredGridPiece.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTransmitUnstructuredGridPiece(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTransmitUnstructuredGridPiece_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkTransmitUnstructuredGridPiece_Doc =
  "vtkTransmitUnstructuredGridPiece - no description provided.\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
;


static PyObject *
PyvtkTransmitUnstructuredGridPiece_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTransmitUnstructuredGridPiece::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransmitUnstructuredGridPiece_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitUnstructuredGridPiece *op = static_cast<vtkTransmitUnstructuredGridPiece *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTransmitUnstructuredGridPiece::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransmitUnstructuredGridPiece_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTransmitUnstructuredGridPiece *tempr = vtkTransmitUnstructuredGridPiece::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransmitUnstructuredGridPiece_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitUnstructuredGridPiece *op = static_cast<vtkTransmitUnstructuredGridPiece *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransmitUnstructuredGridPiece *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTransmitUnstructuredGridPiece::NewInstance());

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
PyvtkTransmitUnstructuredGridPiece_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitUnstructuredGridPiece *op = static_cast<vtkTransmitUnstructuredGridPiece *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkTransmitUnstructuredGridPiece::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransmitUnstructuredGridPiece_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitUnstructuredGridPiece *op = static_cast<vtkTransmitUnstructuredGridPiece *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkTransmitUnstructuredGridPiece::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransmitUnstructuredGridPiece_SetCreateGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCreateGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitUnstructuredGridPiece *op = static_cast<vtkTransmitUnstructuredGridPiece *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCreateGhostCells(temp0);
    }
    else
    {
      op->vtkTransmitUnstructuredGridPiece::SetCreateGhostCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransmitUnstructuredGridPiece_GetCreateGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCreateGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitUnstructuredGridPiece *op = static_cast<vtkTransmitUnstructuredGridPiece *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCreateGhostCells() :
      op->vtkTransmitUnstructuredGridPiece::GetCreateGhostCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransmitUnstructuredGridPiece_CreateGhostCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateGhostCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitUnstructuredGridPiece *op = static_cast<vtkTransmitUnstructuredGridPiece *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateGhostCellsOn();
    }
    else
    {
      op->vtkTransmitUnstructuredGridPiece::CreateGhostCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransmitUnstructuredGridPiece_CreateGhostCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateGhostCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitUnstructuredGridPiece *op = static_cast<vtkTransmitUnstructuredGridPiece *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateGhostCellsOff();
    }
    else
    {
      op->vtkTransmitUnstructuredGridPiece::CreateGhostCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTransmitUnstructuredGridPiece_Methods[] = {
  {"IsTypeOf", PyvtkTransmitUnstructuredGridPiece_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTransmitUnstructuredGridPiece_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTransmitUnstructuredGridPiece_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTransmitUnstructuredGridPiece\nC++: static vtkTransmitUnstructuredGridPiece *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTransmitUnstructuredGridPiece_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTransmitUnstructuredGridPiece\nC++: vtkTransmitUnstructuredGridPiece *NewInstance()\n\n"},
  {"SetController", PyvtkTransmitUnstructuredGridPiece_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nBy default this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {"GetController", PyvtkTransmitUnstructuredGridPiece_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nBy default this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {"SetCreateGhostCells", PyvtkTransmitUnstructuredGridPiece_SetCreateGhostCells, METH_VARARGS,
   "V.SetCreateGhostCells(int)\nC++: virtual void SetCreateGhostCells(vtkTypeBool _arg)\n\nTurn on/off creating ghost cells (on by default).\n"},
  {"GetCreateGhostCells", PyvtkTransmitUnstructuredGridPiece_GetCreateGhostCells, METH_VARARGS,
   "V.GetCreateGhostCells() -> int\nC++: virtual vtkTypeBool GetCreateGhostCells()\n\nTurn on/off creating ghost cells (on by default).\n"},
  {"CreateGhostCellsOn", PyvtkTransmitUnstructuredGridPiece_CreateGhostCellsOn, METH_VARARGS,
   "V.CreateGhostCellsOn()\nC++: virtual void CreateGhostCellsOn()\n\nTurn on/off creating ghost cells (on by default).\n"},
  {"CreateGhostCellsOff", PyvtkTransmitUnstructuredGridPiece_CreateGhostCellsOff, METH_VARARGS,
   "V.CreateGhostCellsOff()\nC++: virtual void CreateGhostCellsOff()\n\nTurn on/off creating ghost cells (on by default).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTransmitUnstructuredGridPiece_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelPython.vtkTransmitUnstructuredGridPiece", // tp_name
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
  PyvtkTransmitUnstructuredGridPiece_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTransmitUnstructuredGridPiece_StaticNew()
{
  return vtkTransmitUnstructuredGridPiece::New();
}

PyObject *PyvtkTransmitUnstructuredGridPiece_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTransmitUnstructuredGridPiece_Type, PyvtkTransmitUnstructuredGridPiece_Methods,
    "vtkTransmitUnstructuredGridPiece",
 &PyvtkTransmitUnstructuredGridPiece_StaticNew);

  PyTypeObject *pytype = &PyvtkTransmitUnstructuredGridPiece_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTransmitUnstructuredGridPiece(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTransmitUnstructuredGridPiece_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTransmitUnstructuredGridPiece", o) != 0)
  {
    Py_DECREF(o);
  }

}

