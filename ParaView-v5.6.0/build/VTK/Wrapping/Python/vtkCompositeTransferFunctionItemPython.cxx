// python wrapper for vtkCompositeTransferFunctionItem
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
#include "vtkCompositeTransferFunctionItem.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositeTransferFunctionItem(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCompositeTransferFunctionItem_ClassNew(); }

#ifndef DECLARED_PyvtkColorTransferFunctionItem_ClassNew
extern "C" { PyObject *PyvtkColorTransferFunctionItem_ClassNew(); }
#define DECLARED_PyvtkColorTransferFunctionItem_ClassNew
#endif

static const char *PyvtkCompositeTransferFunctionItem_Doc =
  "vtkCompositeTransferFunctionItem - vtkPlot::Color and vtkPlot::Brush\nhave no effect here.\n\n"
  "Superclass: vtkColorTransferFunctionItem\n\n"
;


static PyObject *
PyvtkCompositeTransferFunctionItem_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositeTransferFunctionItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeTransferFunctionItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeTransferFunctionItem *op = static_cast<vtkCompositeTransferFunctionItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeTransferFunctionItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeTransferFunctionItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositeTransferFunctionItem *tempr = vtkCompositeTransferFunctionItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeTransferFunctionItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeTransferFunctionItem *op = static_cast<vtkCompositeTransferFunctionItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeTransferFunctionItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeTransferFunctionItem::NewInstance());

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
PyvtkCompositeTransferFunctionItem_SetOpacityFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacityFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeTransferFunctionItem *op = static_cast<vtkCompositeTransferFunctionItem *>(vp);

  vtkPiecewiseFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetOpacityFunction(temp0);
    }
    else
    {
      op->vtkCompositeTransferFunctionItem::SetOpacityFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeTransferFunctionItem_GetOpacityFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeTransferFunctionItem *op = static_cast<vtkCompositeTransferFunctionItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetOpacityFunction() :
      op->vtkCompositeTransferFunctionItem::GetOpacityFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeTransferFunctionItem_Methods[] = {
  {"IsTypeOf", PyvtkCompositeTransferFunctionItem_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositeTransferFunctionItem_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositeTransferFunctionItem_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCompositeTransferFunctionItem\nC++: static vtkCompositeTransferFunctionItem *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositeTransferFunctionItem_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCompositeTransferFunctionItem\nC++: vtkCompositeTransferFunctionItem *NewInstance()\n\n"},
  {"SetOpacityFunction", PyvtkCompositeTransferFunctionItem_SetOpacityFunction, METH_VARARGS,
   "V.SetOpacityFunction(vtkPiecewiseFunction)\nC++: void SetOpacityFunction(vtkPiecewiseFunction *opacity)\n\n"},
  {"GetOpacityFunction", PyvtkCompositeTransferFunctionItem_GetOpacityFunction, METH_VARARGS,
   "V.GetOpacityFunction() -> vtkPiecewiseFunction\nC++: virtual vtkPiecewiseFunction *GetOpacityFunction()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCompositeTransferFunctionItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkCompositeTransferFunctionItem", // tp_name
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
  PyvtkCompositeTransferFunctionItem_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositeTransferFunctionItem_StaticNew()
{
  return vtkCompositeTransferFunctionItem::New();
}

PyObject *PyvtkCompositeTransferFunctionItem_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCompositeTransferFunctionItem_Type, PyvtkCompositeTransferFunctionItem_Methods,
    "vtkCompositeTransferFunctionItem",
 &PyvtkCompositeTransferFunctionItem_StaticNew);

  PyTypeObject *pytype = &PyvtkCompositeTransferFunctionItem_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkColorTransferFunctionItem_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompositeTransferFunctionItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositeTransferFunctionItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeTransferFunctionItem", o) != 0)
  {
    Py_DECREF(o);
  }

}

