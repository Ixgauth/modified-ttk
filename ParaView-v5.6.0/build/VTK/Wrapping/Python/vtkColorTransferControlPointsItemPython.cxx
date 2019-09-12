// python wrapper for vtkColorTransferControlPointsItem
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
#include "vtkColorTransferControlPointsItem.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkColorTransferControlPointsItem(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkColorTransferControlPointsItem_ClassNew(); }

#ifndef DECLARED_PyvtkControlPointsItem_ClassNew
extern "C" { PyObject *PyvtkControlPointsItem_ClassNew(); }
#define DECLARED_PyvtkControlPointsItem_ClassNew
#endif

static const char *PyvtkColorTransferControlPointsItem_Doc =
  "vtkColorTransferControlPointsItem - Control points for\nvtkColorTransferFunction.\n\n"
  "Superclass: vtkControlPointsItem\n\n"
  "vtkColorTransferControlPointsItem draws the control points of a\n"
  "vtkColorTransferFunction.\n"
  "@sa\n"
  "vtkControlPointsItem vtkColorTransferFunctionItem\n"
  "vtkCompositeTransferFunctionItem\n\n";


static PyObject *
PyvtkColorTransferControlPointsItem_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkColorTransferControlPointsItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkColorTransferControlPointsItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkColorTransferControlPointsItem *tempr = vtkColorTransferControlPointsItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkColorTransferControlPointsItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkColorTransferControlPointsItem::NewInstance());

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
PyvtkColorTransferControlPointsItem_SetColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

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
      op->vtkColorTransferControlPointsItem::SetColorTransferFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_GetColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkColorTransferFunction *tempr = (ap.IsBound() ?
      op->GetColorTransferFunction() :
      op->vtkColorTransferControlPointsItem::GetColorTransferFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkColorTransferControlPointsItem::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_GetControlPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetControlPoint(temp0, temp1);
    }
    else
    {
      op->vtkColorTransferControlPointsItem::GetControlPoint(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_SetControlPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetControlPoint(temp0, temp1);
    }
    else
    {
      op->vtkColorTransferControlPointsItem::SetControlPoint(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_AddPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

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
      op->vtkColorTransferControlPointsItem::AddPoint(temp0));

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
PyvtkColorTransferControlPointsItem_RemovePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

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
      op->vtkColorTransferControlPointsItem::RemovePoint(temp0));

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
PyvtkColorTransferControlPointsItem_SetColorFill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorFill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorFill(temp0);
    }
    else
    {
      op->vtkColorTransferControlPointsItem::SetColorFill(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_GetColorFill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorFill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorFill() :
      op->vtkColorTransferControlPointsItem::GetColorFill());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkColorTransferControlPointsItem_Methods[] = {
  {"IsTypeOf", PyvtkColorTransferControlPointsItem_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkColorTransferControlPointsItem_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkColorTransferControlPointsItem_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkColorTransferControlPointsItem\nC++: static vtkColorTransferControlPointsItem *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkColorTransferControlPointsItem_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkColorTransferControlPointsItem\nC++: vtkColorTransferControlPointsItem *NewInstance()\n\n"},
  {"SetColorTransferFunction", PyvtkColorTransferControlPointsItem_SetColorTransferFunction, METH_VARARGS,
   "V.SetColorTransferFunction(vtkColorTransferFunction)\nC++: void SetColorTransferFunction(\n    vtkColorTransferFunction *function)\n\nSet the piecewise function to draw its points\n"},
  {"GetColorTransferFunction", PyvtkColorTransferControlPointsItem_GetColorTransferFunction, METH_VARARGS,
   "V.GetColorTransferFunction() -> vtkColorTransferFunction\nC++: virtual vtkColorTransferFunction *GetColorTransferFunction()\n\nGet the piecewise function\n"},
  {"GetNumberOfPoints", PyvtkColorTransferControlPointsItem_GetNumberOfPoints, METH_VARARGS,
   "V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints() override;\n\nReturn the number of points in the color transfer function.\n"},
  {"GetControlPoint", PyvtkColorTransferControlPointsItem_GetControlPoint, METH_VARARGS,
   "V.GetControlPoint(int, [float, ...])\nC++: void GetControlPoint(vtkIdType index, double *point)\n    override;\n\nReturns the x and y coordinates as well as the midpoint and\nsharpness of the control point corresponding to the index. Note:\nThe y (point[1]) is always 0.5\n"},
  {"SetControlPoint", PyvtkColorTransferControlPointsItem_SetControlPoint, METH_VARARGS,
   "V.SetControlPoint(int, [float, ...])\nC++: void SetControlPoint(vtkIdType index, double *point)\n    override;\n\nSets the x and y coordinates as well as the midpoint and\nsharpness of the control point corresponding to the index.\nChanging the y has no effect, it will always be 0.5\n"},
  {"AddPoint", PyvtkColorTransferControlPointsItem_AddPoint, METH_VARARGS,
   "V.AddPoint([float, ...]) -> int\nC++: vtkIdType AddPoint(double *newPos) override;\n\nAdd a point to the function. Returns the index of the point (0\nbased), or -1 on error. Subclasses should reimplement this\nfunction to do the actual work.\n"},
  {"RemovePoint", PyvtkColorTransferControlPointsItem_RemovePoint, METH_VARARGS,
   "V.RemovePoint([float, ...]) -> int\nC++: vtkIdType RemovePoint(double *pos) override;\n\nRemove a point of the function. Returns the index of the point (0\nbased), or -1 on error. Subclasses should reimplement this\nfunction to do the actual work.\n"},
  {"SetColorFill", PyvtkColorTransferControlPointsItem_SetColorFill, METH_VARARGS,
   "V.SetColorFill(bool)\nC++: virtual void SetColorFill(bool _arg)\n\nIf ColorFill is true, the control point brush color is set with\nthe matching color in the color transfer function. False by\ndefault.\n"},
  {"GetColorFill", PyvtkColorTransferControlPointsItem_GetColorFill, METH_VARARGS,
   "V.GetColorFill() -> bool\nC++: virtual bool GetColorFill()\n\nIf ColorFill is true, the control point brush color is set with\nthe matching color in the color transfer function. False by\ndefault.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkColorTransferControlPointsItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkColorTransferControlPointsItem", // tp_name
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
  PyvtkColorTransferControlPointsItem_Doc, // tp_doc
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

static vtkObjectBase *PyvtkColorTransferControlPointsItem_StaticNew()
{
  return vtkColorTransferControlPointsItem::New();
}

PyObject *PyvtkColorTransferControlPointsItem_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkColorTransferControlPointsItem_Type, PyvtkColorTransferControlPointsItem_Methods,
    "vtkColorTransferControlPointsItem",
 &PyvtkColorTransferControlPointsItem_StaticNew);

  PyTypeObject *pytype = &PyvtkColorTransferControlPointsItem_Type;

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

void PyVTKAddFile_vtkColorTransferControlPointsItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkColorTransferControlPointsItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkColorTransferControlPointsItem", o) != 0)
  {
    Py_DECREF(o);
  }

}

