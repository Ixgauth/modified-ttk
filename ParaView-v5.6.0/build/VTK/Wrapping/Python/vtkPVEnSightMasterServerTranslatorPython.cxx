// python wrapper for vtkPVEnSightMasterServerTranslator
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
#include "vtkPVEnSightMasterServerTranslator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVEnSightMasterServerTranslator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVEnSightMasterServerTranslator_ClassNew(); }

#ifndef DECLARED_PyvtkExtentTranslator_ClassNew
extern "C" { PyObject *PyvtkExtentTranslator_ClassNew(); }
#define DECLARED_PyvtkExtentTranslator_ClassNew
#endif

static const char *PyvtkPVEnSightMasterServerTranslator_Doc =
  "vtkPVEnSightMasterServerTranslator - \n\n"
  "Superclass: vtkExtentTranslator\n\n"
;


static PyObject *
PyvtkPVEnSightMasterServerTranslator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVEnSightMasterServerTranslator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerTranslator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerTranslator *op = static_cast<vtkPVEnSightMasterServerTranslator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVEnSightMasterServerTranslator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerTranslator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVEnSightMasterServerTranslator *tempr = vtkPVEnSightMasterServerTranslator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerTranslator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerTranslator *op = static_cast<vtkPVEnSightMasterServerTranslator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVEnSightMasterServerTranslator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVEnSightMasterServerTranslator::NewInstance());

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
PyvtkPVEnSightMasterServerTranslator_GetProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerTranslator *op = static_cast<vtkPVEnSightMasterServerTranslator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessId() :
      op->vtkPVEnSightMasterServerTranslator::GetProcessId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerTranslator_SetProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerTranslator *op = static_cast<vtkPVEnSightMasterServerTranslator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessId(temp0);
    }
    else
    {
      op->vtkPVEnSightMasterServerTranslator::SetProcessId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerTranslator_PieceToExtentThreadSafe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceToExtentThreadSafe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerTranslator *op = static_cast<vtkPVEnSightMasterServerTranslator *>(vp);

  int temp0;
  int temp1;
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(2*size3);
  int *temp3 = store3.Data();
  int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<int> store4(2*size4);
  int *temp4 = store4.Data();
  int *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->PieceToExtentThreadSafe(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkPVEnSightMasterServerTranslator::PieceToExtentThreadSafe(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVEnSightMasterServerTranslator_Methods[] = {
  {"IsTypeOf", PyvtkPVEnSightMasterServerTranslator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVEnSightMasterServerTranslator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVEnSightMasterServerTranslator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkPVEnSightMasterServerTranslator\nC++: static vtkPVEnSightMasterServerTranslator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVEnSightMasterServerTranslator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVEnSightMasterServerTranslator\nC++: vtkPVEnSightMasterServerTranslator *NewInstance()\n\n"},
  {"GetProcessId", PyvtkPVEnSightMasterServerTranslator_GetProcessId, METH_VARARGS,
   "V.GetProcessId() -> int\nC++: virtual int GetProcessId()\n\nGet/Set the piece that should provide the data.  All other pieces\nshould provide empty data.\n"},
  {"SetProcessId", PyvtkPVEnSightMasterServerTranslator_SetProcessId, METH_VARARGS,
   "V.SetProcessId(int)\nC++: virtual void SetProcessId(int _arg)\n\nGet/Set the piece that should provide the data.  All other pieces\nshould provide empty data.\n"},
  {"PieceToExtentThreadSafe", PyvtkPVEnSightMasterServerTranslator_PieceToExtentThreadSafe, METH_VARARGS,
   "V.PieceToExtentThreadSafe(int, int, int, [int, ...], [int, ...],\n    int, int) -> int\nC++: int PieceToExtentThreadSafe(int piece, int numPieces,\n    int ghostLevel, int *wholeExtent, int *resultExtent,\n    int splitMode, int byPoints) override;\n\nTranslates the piece matching ProcessId to the whole extent, and\nall other pieces to empty.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVEnSightMasterServerTranslator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPVEnSightMasterServerTranslator", // tp_name
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
  PyvtkPVEnSightMasterServerTranslator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVEnSightMasterServerTranslator_StaticNew()
{
  return vtkPVEnSightMasterServerTranslator::New();
}

PyObject *PyvtkPVEnSightMasterServerTranslator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVEnSightMasterServerTranslator_Type, PyvtkPVEnSightMasterServerTranslator_Methods,
    "vtkPVEnSightMasterServerTranslator",
 &PyvtkPVEnSightMasterServerTranslator_StaticNew);

  PyTypeObject *pytype = &PyvtkPVEnSightMasterServerTranslator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkExtentTranslator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVEnSightMasterServerTranslator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVEnSightMasterServerTranslator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVEnSightMasterServerTranslator", o) != 0)
  {
    Py_DECREF(o);
  }

}

