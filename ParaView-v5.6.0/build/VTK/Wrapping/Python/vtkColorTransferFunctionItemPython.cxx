// python wrapper for vtkColorTransferFunctionItem
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
#include "vtkColorTransferFunctionItem.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkColorTransferFunctionItem(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkColorTransferFunctionItem_ClassNew(); }

#ifndef DECLARED_PyvtkScalarsToColorsItem_ClassNew
extern "C" { PyObject *PyvtkScalarsToColorsItem_ClassNew(); }
#define DECLARED_PyvtkScalarsToColorsItem_ClassNew
#endif

static const char *PyvtkColorTransferFunctionItem_Doc =
  "vtkColorTransferFunctionItem - vtkPlot::Color, vtkPlot::Brush,\nvtkScalarsToColors::DrawPolyLine, vtkScalarsToColors::MaskAboveCurve\nhave no effect here.\n\n"
  "Superclass: vtkScalarsToColorsItem\n\n"
;


static PyObject *
PyvtkColorTransferFunctionItem_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkColorTransferFunctionItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunctionItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunctionItem *op = static_cast<vtkColorTransferFunctionItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkColorTransferFunctionItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunctionItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkColorTransferFunctionItem *tempr = vtkColorTransferFunctionItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunctionItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunctionItem *op = static_cast<vtkColorTransferFunctionItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkColorTransferFunctionItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkColorTransferFunctionItem::NewInstance());

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
PyvtkColorTransferFunctionItem_SetColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunctionItem *op = static_cast<vtkColorTransferFunctionItem *>(vp);

  vtkColorTransferFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction"))
  {
    if (ap.IsBound())
    {
      op->SetColorTransferFunction(temp0);
    }
    else
    {
      op->vtkColorTransferFunctionItem::SetColorTransferFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunctionItem_GetColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunctionItem *op = static_cast<vtkColorTransferFunctionItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkColorTransferFunction *tempr = (ap.IsBound() ?
      op->GetColorTransferFunction() :
      op->vtkColorTransferFunctionItem::GetColorTransferFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkColorTransferFunctionItem_Methods[] = {
  {"IsTypeOf", PyvtkColorTransferFunctionItem_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkColorTransferFunctionItem_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkColorTransferFunctionItem_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkColorTransferFunctionItem\nC++: static vtkColorTransferFunctionItem *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkColorTransferFunctionItem_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkColorTransferFunctionItem\nC++: vtkColorTransferFunctionItem *NewInstance()\n\n"},
  {"SetColorTransferFunction", PyvtkColorTransferFunctionItem_SetColorTransferFunction, METH_VARARGS,
   "V.SetColorTransferFunction(vtkColorTransferFunction)\nC++: void SetColorTransferFunction(vtkColorTransferFunction *t)\n\n"},
  {"GetColorTransferFunction", PyvtkColorTransferFunctionItem_GetColorTransferFunction, METH_VARARGS,
   "V.GetColorTransferFunction() -> vtkColorTransferFunction\nC++: virtual vtkColorTransferFunction *GetColorTransferFunction()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkColorTransferFunctionItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkColorTransferFunctionItem", // tp_name
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
  PyvtkColorTransferFunctionItem_Doc, // tp_doc
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

static vtkObjectBase *PyvtkColorTransferFunctionItem_StaticNew()
{
  return vtkColorTransferFunctionItem::New();
}

PyObject *PyvtkColorTransferFunctionItem_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkColorTransferFunctionItem_Type, PyvtkColorTransferFunctionItem_Methods,
    "vtkColorTransferFunctionItem",
 &PyvtkColorTransferFunctionItem_StaticNew);

  PyTypeObject *pytype = &PyvtkColorTransferFunctionItem_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkScalarsToColorsItem_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkColorTransferFunctionItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkColorTransferFunctionItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkColorTransferFunctionItem", o) != 0)
  {
    Py_DECREF(o);
  }

}

