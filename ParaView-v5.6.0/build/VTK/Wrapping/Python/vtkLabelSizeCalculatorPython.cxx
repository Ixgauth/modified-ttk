// python wrapper for vtkLabelSizeCalculator
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
#include "vtkLabelSizeCalculator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLabelSizeCalculator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLabelSizeCalculator_ClassNew(); }

#ifndef DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPassInputTypeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
#endif

static const char *PyvtkLabelSizeCalculator_Doc =
  "vtkLabelSizeCalculator - This filter takes an input dataset, an array\nto process (which must be a string array), and a text property.\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "It creates a new output array (named \"LabelSize\" by default) with 4\n"
  "components per tuple that contain the width, height, horizontal\n"
  "offset, and descender height (in that order) of each string in the\n"
  "array.\n\n"
  "Use the inherited SelectInputArrayToProcess to indicate a string\n"
  "array. In no input array is specified, the first of the following\n"
  "that is a string array is used: point scalars, cell scalars, field\n"
  "scalars.\n\n"
  "The second input array to process is an array specifying the type of\n"
  "each label. Different label types may have different font properties.\n"
  "This array must be a vtkIntArray. Any type that does not map to a\n"
  "font property that was set will be set to the type 0's type property.\n\n";


static PyObject *
PyvtkLabelSizeCalculator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLabelSizeCalculator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLabelSizeCalculator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLabelSizeCalculator *tempr = vtkLabelSizeCalculator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLabelSizeCalculator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLabelSizeCalculator::NewInstance());

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
PyvtkLabelSizeCalculator_SetFontProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  vtkTextProperty *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetFontProperty(temp0, temp1);
    }
    else
    {
      op->vtkLabelSizeCalculator::SetFontProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_GetFontProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetFontProperty(temp0) :
      op->vtkLabelSizeCalculator::GetFontProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_SetLabelSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelSizeArrayName(temp0);
    }
    else
    {
      op->vtkLabelSizeCalculator::SetLabelSizeArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_GetLabelSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelSizeArrayName() :
      op->vtkLabelSizeCalculator::GetLabelSizeArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_SetDPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDPI(temp0);
    }
    else
    {
      op->vtkLabelSizeCalculator::SetDPI(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_GetDPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDPI() :
      op->vtkLabelSizeCalculator::GetDPI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLabelSizeCalculator_Methods[] = {
  {"IsTypeOf", PyvtkLabelSizeCalculator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLabelSizeCalculator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLabelSizeCalculator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLabelSizeCalculator\nC++: static vtkLabelSizeCalculator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLabelSizeCalculator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLabelSizeCalculator\nC++: vtkLabelSizeCalculator *NewInstance()\n\n"},
  {"SetFontProperty", PyvtkLabelSizeCalculator_SetFontProperty, METH_VARARGS,
   "V.SetFontProperty(vtkTextProperty, int)\nC++: virtual void SetFontProperty(vtkTextProperty *fontProp,\n    int type=0)\n\nGet/Set the font used compute label sizes. This defaults to\n\"Arial\" at 12 points. If type is provided, it refers to the type\nof the text label provided in the optional label type array. The\ndefault type is type 0.\n"},
  {"GetFontProperty", PyvtkLabelSizeCalculator_GetFontProperty, METH_VARARGS,
   "V.GetFontProperty(int) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetFontProperty(int type=0)\n\nGet/Set the font used compute label sizes. This defaults to\n\"Arial\" at 12 points. If type is provided, it refers to the type\nof the text label provided in the optional label type array. The\ndefault type is type 0.\n"},
  {"SetLabelSizeArrayName", PyvtkLabelSizeCalculator_SetLabelSizeArrayName, METH_VARARGS,
   "V.SetLabelSizeArrayName(string)\nC++: virtual void SetLabelSizeArrayName(const char *_arg)\n\nThe name of the output array containing text label sizes This\ndefaults to \"LabelSize\"\n"},
  {"GetLabelSizeArrayName", PyvtkLabelSizeCalculator_GetLabelSizeArrayName, METH_VARARGS,
   "V.GetLabelSizeArrayName() -> string\nC++: virtual char *GetLabelSizeArrayName()\n\nThe name of the output array containing text label sizes This\ndefaults to \"LabelSize\"\n"},
  {"SetDPI", PyvtkLabelSizeCalculator_SetDPI, METH_VARARGS,
   "V.SetDPI(int)\nC++: virtual void SetDPI(int _arg)\n\nGet/Set the DPI at which the labels are to be rendered. Defaults\nto 72.\n@sa vtkWindow::GetDPI()\n"},
  {"GetDPI", PyvtkLabelSizeCalculator_GetDPI, METH_VARARGS,
   "V.GetDPI() -> int\nC++: virtual int GetDPI()\n\nGet/Set the DPI at which the labels are to be rendered. Defaults\nto 72.\n@sa vtkWindow::GetDPI()\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLabelSizeCalculator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingLabelPython.vtkLabelSizeCalculator", // tp_name
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
  PyvtkLabelSizeCalculator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLabelSizeCalculator_StaticNew()
{
  return vtkLabelSizeCalculator::New();
}

PyObject *PyvtkLabelSizeCalculator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLabelSizeCalculator_Type, PyvtkLabelSizeCalculator_Methods,
    "vtkLabelSizeCalculator",
 &PyvtkLabelSizeCalculator_StaticNew);

  PyTypeObject *pytype = &PyvtkLabelSizeCalculator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPassInputTypeAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLabelSizeCalculator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLabelSizeCalculator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLabelSizeCalculator", o) != 0)
  {
    Py_DECREF(o);
  }

}

