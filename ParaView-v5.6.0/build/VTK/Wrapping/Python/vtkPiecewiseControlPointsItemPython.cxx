// python wrapper for vtkPiecewiseControlPointsItem
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
#include "vtkPiecewiseControlPointsItem.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPiecewiseControlPointsItem(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPiecewiseControlPointsItem_ClassNew(); }

#ifndef DECLARED_PyvtkControlPointsItem_ClassNew
extern "C" { PyObject *PyvtkControlPointsItem_ClassNew(); }
#define DECLARED_PyvtkControlPointsItem_ClassNew
#endif

static const char *PyvtkPiecewiseControlPointsItem_Doc =
  "vtkPiecewiseControlPointsItem - Control points for\nvtkPiecewiseFunction.\n\n"
  "Superclass: vtkControlPointsItem\n\n"
  "vtkPiecewiseControlPointsItem draws the control points of a\n"
  "vtkPiecewiseFunction.\n"
  "@sa\n"
  "vtkControlPointsItem vtkPiecewiseFunctionItem\n"
  "vtkCompositeTransferFunctionItem\n\n";


static PyObject *
PyvtkPiecewiseControlPointsItem_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPiecewiseControlPointsItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseControlPointsItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseControlPointsItem *op = static_cast<vtkPiecewiseControlPointsItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPiecewiseControlPointsItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseControlPointsItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPiecewiseControlPointsItem *tempr = vtkPiecewiseControlPointsItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseControlPointsItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseControlPointsItem *op = static_cast<vtkPiecewiseControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPiecewiseControlPointsItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPiecewiseControlPointsItem::NewInstance());

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
PyvtkPiecewiseControlPointsItem_SetPiecewiseFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiecewiseFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseControlPointsItem *op = static_cast<vtkPiecewiseControlPointsItem *>(vp);

  vtkPiecewiseFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetPiecewiseFunction(temp0);
    }
    else
    {
      op->vtkPiecewiseControlPointsItem::SetPiecewiseFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseControlPointsItem_GetPiecewiseFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiecewiseFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseControlPointsItem *op = static_cast<vtkPiecewiseControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetPiecewiseFunction() :
      op->vtkPiecewiseControlPointsItem::GetPiecewiseFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseControlPointsItem_AddPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseControlPointsItem *op = static_cast<vtkPiecewiseControlPointsItem *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->AddPoint(temp0) :
      op->vtkPiecewiseControlPointsItem::AddPoint(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseControlPointsItem_RemovePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseControlPointsItem *op = static_cast<vtkPiecewiseControlPointsItem *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->RemovePoint(temp0) :
      op->vtkPiecewiseControlPointsItem::RemovePoint(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseControlPointsItem_SetStrokeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStrokeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseControlPointsItem *op = static_cast<vtkPiecewiseControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStrokeMode(temp0);
    }
    else
    {
      op->vtkPiecewiseControlPointsItem::SetStrokeMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPiecewiseControlPointsItem_Methods[] = {
  {"IsTypeOf", PyvtkPiecewiseControlPointsItem_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPiecewiseControlPointsItem_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPiecewiseControlPointsItem_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPiecewiseControlPointsItem\nC++: static vtkPiecewiseControlPointsItem *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPiecewiseControlPointsItem_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPiecewiseControlPointsItem\nC++: vtkPiecewiseControlPointsItem *NewInstance()\n\n"},
  {"SetPiecewiseFunction", PyvtkPiecewiseControlPointsItem_SetPiecewiseFunction, METH_VARARGS,
   "V.SetPiecewiseFunction(vtkPiecewiseFunction)\nC++: virtual void SetPiecewiseFunction(\n    vtkPiecewiseFunction *function)\n\nSet the piecewise function to draw its points\n"},
  {"GetPiecewiseFunction", PyvtkPiecewiseControlPointsItem_GetPiecewiseFunction, METH_VARARGS,
   "V.GetPiecewiseFunction() -> vtkPiecewiseFunction\nC++: virtual vtkPiecewiseFunction *GetPiecewiseFunction()\n\nGet the piecewise function\n"},
  {"AddPoint", PyvtkPiecewiseControlPointsItem_AddPoint, METH_VARARGS,
   "V.AddPoint([float, ...]) -> int\nC++: vtkIdType AddPoint(double *newPos) override;\n\nAdd a point to the function. Returns the index of the point (0\nbased), or -1 on error. Subclasses should reimplement this\nfunction to do the actual work.\n"},
  {"RemovePoint", PyvtkPiecewiseControlPointsItem_RemovePoint, METH_VARARGS,
   "V.RemovePoint([float, ...]) -> int\nC++: vtkIdType RemovePoint(double *pos) override;\n\nRemove a point of the function. Returns the index of the point (0\nbased), or -1 on error. Subclasses should reimplement this\nfunction to do the actual work.\n"},
  {"SetStrokeMode", PyvtkPiecewiseControlPointsItem_SetStrokeMode, METH_VARARGS,
   "V.SetStrokeMode(bool)\nC++: virtual void SetStrokeMode(bool _arg)\n\nControls whether or not control points are drawn (true) or\nclicked and moved (false). False by default.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPiecewiseControlPointsItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkPiecewiseControlPointsItem", // tp_name
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
  PyvtkPiecewiseControlPointsItem_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPiecewiseControlPointsItem_StaticNew()
{
  return vtkPiecewiseControlPointsItem::New();
}

PyObject *PyvtkPiecewiseControlPointsItem_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPiecewiseControlPointsItem_Type, PyvtkPiecewiseControlPointsItem_Methods,
    "vtkPiecewiseControlPointsItem",
 &PyvtkPiecewiseControlPointsItem_StaticNew);

  PyTypeObject *pytype = &PyvtkPiecewiseControlPointsItem_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkControlPointsItem_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPiecewiseControlPointsItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPiecewiseControlPointsItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPiecewiseControlPointsItem", o) != 0)
  {
    Py_DECREF(o);
  }

}

