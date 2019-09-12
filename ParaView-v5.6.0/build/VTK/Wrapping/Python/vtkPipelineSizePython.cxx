// python wrapper for vtkPipelineSize
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
#include "vtkPipelineSize.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPipelineSize(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPipelineSize_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPipelineSize_Doc =
  "vtkPipelineSize - compute the memory required by a pipeline\n\n"
  "Superclass: vtkObject\n\n"
;


static PyObject *
PyvtkPipelineSize_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPipelineSize::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPipelineSize_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPipelineSize *op = static_cast<vtkPipelineSize *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPipelineSize::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPipelineSize_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPipelineSize *tempr = vtkPipelineSize::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPipelineSize_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPipelineSize *op = static_cast<vtkPipelineSize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPipelineSize *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPipelineSize::NewInstance());

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
PyvtkPipelineSize_GetEstimatedSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEstimatedSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPipelineSize *op = static_cast<vtkPipelineSize *>(vp);

  vtkAlgorithm *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetEstimatedSize(temp0, temp1, temp2) :
      op->vtkPipelineSize::GetEstimatedSize(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPipelineSize_GetNumberOfSubPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPipelineSize *op = static_cast<vtkPipelineSize *>(vp);

  unsigned long temp0;
  vtkPolyDataMapper *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyDataMapper"))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetNumberOfSubPieces(temp0, temp1) :
      op->vtkPipelineSize::GetNumberOfSubPieces(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPipelineSize_Methods[] = {
  {"IsTypeOf", PyvtkPipelineSize_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPipelineSize_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPipelineSize_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPipelineSize\nC++: static vtkPipelineSize *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPipelineSize_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPipelineSize\nC++: vtkPipelineSize *NewInstance()\n\n"},
  {"GetEstimatedSize", PyvtkPipelineSize_GetEstimatedSize, METH_VARARGS,
   "V.GetEstimatedSize(vtkAlgorithm, int, int) -> int\nC++: unsigned long GetEstimatedSize(vtkAlgorithm *input,\n    int inputPort, int connection)\n\nCompute an estimate of how much memory a pipline will require in\nkibibytes (1024 bytes) This is only an estimate and the\ncalculations in here do not take into account the specifics of\nmany sources and filters.\n"},
  {"GetNumberOfSubPieces", PyvtkPipelineSize_GetNumberOfSubPieces, METH_VARARGS,
   "V.GetNumberOfSubPieces(int, vtkPolyDataMapper) -> int\nC++: unsigned long GetNumberOfSubPieces(unsigned long memoryLimit,\n     vtkPolyDataMapper *mapper)\n\nDetermine how many subpieces a mapper should use to fit a target\nmemory limit. This takes into account the mapper's Piece and\nNumberOfPieces.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPipelineSize_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelPython.vtkPipelineSize", // tp_name
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
  PyvtkPipelineSize_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPipelineSize_StaticNew()
{
  return vtkPipelineSize::New();
}

PyObject *PyvtkPipelineSize_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPipelineSize_Type, PyvtkPipelineSize_Methods,
    "vtkPipelineSize",
 &PyvtkPipelineSize_StaticNew);

  PyTypeObject *pytype = &PyvtkPipelineSize_Type;

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

void PyVTKAddFile_vtkPipelineSize(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPipelineSize_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPipelineSize", o) != 0)
  {
    Py_DECREF(o);
  }

}

