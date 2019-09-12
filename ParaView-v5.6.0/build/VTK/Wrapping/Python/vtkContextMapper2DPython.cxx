// python wrapper for vtkContextMapper2D
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
#include "vtkContextMapper2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContextMapper2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkContextMapper2D_ClassNew(); }

#ifndef DECLARED_PyvtkAlgorithm_ClassNew
extern "C" { PyObject *PyvtkAlgorithm_ClassNew(); }
#define DECLARED_PyvtkAlgorithm_ClassNew
#endif

static const char *PyvtkContextMapper2D_Doc =
  "vtkContextMapper2D - Abstract class for 2D context mappers.\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "This class provides an abstract base for 2D context mappers. They\n"
  "currently only accept vtkTable objects as input.\n\n";


static PyObject *
PyvtkContextMapper2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkContextMapper2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextMapper2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextMapper2D *op = static_cast<vtkContextMapper2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContextMapper2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextMapper2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkContextMapper2D *tempr = vtkContextMapper2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextMapper2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextMapper2D *op = static_cast<vtkContextMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContextMapper2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContextMapper2D::NewInstance());

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
PyvtkContextMapper2D_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextMapper2D *op = static_cast<vtkContextMapper2D *>(vp);

  vtkTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkContextMapper2D::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextMapper2D_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextMapper2D *op = static_cast<vtkContextMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkContextMapper2D::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextMapper2D_GetInputArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextMapper2D *op = static_cast<vtkContextMapper2D *>(vp);

  int temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetInputArrayToProcess(temp0, temp1) :
      op->vtkContextMapper2D::GetInputArrayToProcess(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextMapper2D_GetInputAbstractArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputAbstractArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextMapper2D *op = static_cast<vtkContextMapper2D *>(vp);

  int temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetInputAbstractArrayToProcess(temp0, temp1) :
      op->vtkContextMapper2D::GetInputAbstractArrayToProcess(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkContextMapper2D_Methods[] = {
  {"IsTypeOf", PyvtkContextMapper2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkContextMapper2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkContextMapper2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkContextMapper2D\nC++: static vtkContextMapper2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkContextMapper2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkContextMapper2D\nC++: vtkContextMapper2D *NewInstance()\n\n"},
  {"SetInputData", PyvtkContextMapper2D_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkTable)\nC++: virtual void SetInputData(vtkTable *input)\n\nSet/Get the input for this object - only accepts vtkTable as\ninput.\n"},
  {"GetInput", PyvtkContextMapper2D_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkTable\nC++: virtual vtkTable *GetInput()\n\nSet/Get the input for this object - only accepts vtkTable as\ninput.\n"},
  {"GetInputArrayToProcess", PyvtkContextMapper2D_GetInputArrayToProcess, METH_VARARGS,
   "V.GetInputArrayToProcess(int, vtkDataObject) -> vtkDataArray\nC++: vtkDataArray *GetInputArrayToProcess(int idx,\n    vtkDataObject *input)\n\nMake the arrays accessible to the plot objects.\n"},
  {"GetInputAbstractArrayToProcess", PyvtkContextMapper2D_GetInputAbstractArrayToProcess, METH_VARARGS,
   "V.GetInputAbstractArrayToProcess(int, vtkDataObject)\n    -> vtkAbstractArray\nC++: vtkAbstractArray *GetInputAbstractArrayToProcess(int idx,\n    vtkDataObject *input)\n\nFilters that have multiple connections on one port can use this\nsignature. This will override the connection id that the user set\nin SetInputArrayToProcess() with the connection id passed. This\nway, the user specifies one array to process and that information\nis used to obtain arrays for all the connection on the port with\nthe appropriate connection id substituted.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkContextMapper2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingContext2DPython.vtkContextMapper2D", // tp_name
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
  PyvtkContextMapper2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkContextMapper2D_StaticNew()
{
  return vtkContextMapper2D::New();
}

PyObject *PyvtkContextMapper2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkContextMapper2D_Type, PyvtkContextMapper2D_Methods,
    "vtkContextMapper2D",
 &PyvtkContextMapper2D_StaticNew);

  PyTypeObject *pytype = &PyvtkContextMapper2D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkContextMapper2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContextMapper2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkContextMapper2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

