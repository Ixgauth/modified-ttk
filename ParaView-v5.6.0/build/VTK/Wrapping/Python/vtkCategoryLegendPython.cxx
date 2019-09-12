// python wrapper for vtkCategoryLegend
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkRect.h"
#include "vtkStdString.h"
#include "vtkCategoryLegend.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCategoryLegend(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCategoryLegend_ClassNew(); }

#ifndef DECLARED_PyvtkChartLegend_ClassNew
extern "C" { PyObject *PyvtkChartLegend_ClassNew(); }
#define DECLARED_PyvtkChartLegend_ClassNew
#endif

static const char *PyvtkCategoryLegend_Doc =
  "vtkCategoryLegend - Legend item to display categorical data.\n\n"
  "Superclass: vtkChartLegend\n\n"
  "vtkCategoryLegend will display a label and color patch for each value\n"
  "in a categorical data set.  To use this class, you must first\n"
  "populate a vtkScalarsToColors by using the SetAnnotation() method. \n"
  "The other input to this class is a vtkVariantArray.  This should\n"
  "contain the annotated values from the vtkScalarsToColors that you\n"
  "wish to include within the legend.\n\n";


static PyObject *
PyvtkCategoryLegend_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCategoryLegend::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCategoryLegend::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCategoryLegend *tempr = vtkCategoryLegend::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCategoryLegend *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCategoryLegend::NewInstance());

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
PyvtkCategoryLegend_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkCategoryLegend::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_GetBoundingRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    vtkRectf tempr = (ap.IsBound() ?
      op->GetBoundingRect(temp0) :
      op->vtkCategoryLegend::GetBoundingRect(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_SetScalarsToColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsToColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetScalarsToColors(temp0);
    }
    else
    {
      op->vtkCategoryLegend::SetScalarsToColors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_GetScalarsToColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsToColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetScalarsToColors() :
      op->vtkCategoryLegend::GetScalarsToColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_GetValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVariantArray *tempr = (ap.IsBound() ?
      op->GetValues() :
      op->vtkCategoryLegend::GetValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_SetValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  vtkVariantArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVariantArray"))
  {
    if (ap.IsBound())
    {
      op->SetValues(temp0);
    }
    else
    {
      op->vtkCategoryLegend::SetValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitle(temp0);
    }
    else
    {
      op->vtkCategoryLegend::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkCategoryLegend::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_GetOutlierLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlierLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetOutlierLabel() :
      op->vtkCategoryLegend::GetOutlierLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_SetOutlierLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlierLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutlierLabel(temp0);
    }
    else
    {
      op->vtkCategoryLegend::SetOutlierLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCategoryLegend_Methods[] = {
  {"IsTypeOf", PyvtkCategoryLegend_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCategoryLegend_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCategoryLegend_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCategoryLegend\nC++: static vtkCategoryLegend *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCategoryLegend_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCategoryLegend\nC++: vtkCategoryLegend *NewInstance()\n\n"},
  {"Paint", PyvtkCategoryLegend_Paint, METH_VARARGS,
   "V.Paint(vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint the legend into a rectangle defined by the bounds.\n"},
  {"GetBoundingRect", PyvtkCategoryLegend_GetBoundingRect, METH_VARARGS,
   "V.GetBoundingRect(vtkContext2D) -> vtkRectf\nC++: vtkRectf GetBoundingRect(vtkContext2D *painter) override;\n\nCompute and return the lower left corner of this legend, along\nwith its width and height.\n"},
  {"SetScalarsToColors", PyvtkCategoryLegend_SetScalarsToColors, METH_VARARGS,
   "V.SetScalarsToColors(vtkScalarsToColors)\nC++: virtual void SetScalarsToColors(vtkScalarsToColors *stc)\n\nGet/Set the vtkScalarsToColors used to draw this legend. Since\nthis legend represents categorical data, this vtkScalarsToColors\nmust have been populated using SetAnnotation().\n"},
  {"GetScalarsToColors", PyvtkCategoryLegend_GetScalarsToColors, METH_VARARGS,
   "V.GetScalarsToColors() -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetScalarsToColors()\n\nGet/Set the vtkScalarsToColors used to draw this legend. Since\nthis legend represents categorical data, this vtkScalarsToColors\nmust have been populated using SetAnnotation().\n"},
  {"GetValues", PyvtkCategoryLegend_GetValues, METH_VARARGS,
   "V.GetValues() -> vtkVariantArray\nC++: virtual vtkVariantArray *GetValues()\n\nGet/Set the array of values that will be represented by this\nlegend. This array must contain distinct annotated values from\nthe ScalarsToColors. Each value in this array will be drawn as a\nseparate entry within this legend.\n"},
  {"SetValues", PyvtkCategoryLegend_SetValues, METH_VARARGS,
   "V.SetValues(vtkVariantArray)\nC++: virtual void SetValues(vtkVariantArray *_arg)\n\nGet/Set the array of values that will be represented by this\nlegend. This array must contain distinct annotated values from\nthe ScalarsToColors. Each value in this array will be drawn as a\nseparate entry within this legend.\n"},
  {"SetTitle", PyvtkCategoryLegend_SetTitle, METH_VARARGS,
   "V.SetTitle(string)\nC++: virtual void SetTitle(const vtkStdString &title)\n\nGet/set the title text of the legend.\n"},
  {"GetTitle", PyvtkCategoryLegend_GetTitle, METH_VARARGS,
   "V.GetTitle() -> string\nC++: virtual vtkStdString GetTitle()\n\nGet/set the title text of the legend.\n"},
  {"GetOutlierLabel", PyvtkCategoryLegend_GetOutlierLabel, METH_VARARGS,
   "V.GetOutlierLabel() -> string\nC++: virtual vtkStdString GetOutlierLabel()\n\nGet/set the label to use for outlier data.\n"},
  {"SetOutlierLabel", PyvtkCategoryLegend_SetOutlierLabel, METH_VARARGS,
   "V.SetOutlierLabel(string)\nC++: virtual void SetOutlierLabel(vtkStdString _arg)\n\nGet/set the label to use for outlier data.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCategoryLegend_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkCategoryLegend", // tp_name
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
  PyvtkCategoryLegend_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCategoryLegend_StaticNew()
{
  return vtkCategoryLegend::New();
}

PyObject *PyvtkCategoryLegend_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCategoryLegend_Type, PyvtkCategoryLegend_Methods,
    "vtkCategoryLegend",
 &PyvtkCategoryLegend_StaticNew);

  PyTypeObject *pytype = &PyvtkCategoryLegend_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkChartLegend_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VERTICAL", vtkCategoryLegend::VERTICAL },
        { "HORIZONTAL", vtkCategoryLegend::HORIZONTAL },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCategoryLegend(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCategoryLegend_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCategoryLegend", o) != 0)
  {
    Py_DECREF(o);
  }

}

