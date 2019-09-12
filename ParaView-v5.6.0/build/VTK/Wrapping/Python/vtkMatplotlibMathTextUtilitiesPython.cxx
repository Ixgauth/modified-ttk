// python wrapper for vtkMatplotlibMathTextUtilities
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
#include "vtkMatplotlibMathTextUtilities.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMatplotlibMathTextUtilities(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMatplotlibMathTextUtilities_ClassNew(); }

#ifndef DECLARED_PyvtkMathTextUtilities_ClassNew
extern "C" { PyObject *PyvtkMathTextUtilities_ClassNew(); }
#define DECLARED_PyvtkMathTextUtilities_ClassNew
#endif

static const char *PyvtkMatplotlibMathTextUtilities_Doc =
  "vtkMatplotlibMathTextUtilities - Access to MatPlotLib MathText\nrendering\n\n"
  "Superclass: vtkMathTextUtilities\n\n"
  "vtkMatplotlibMathTextUtilities provides access to the MatPlotLib\n"
  "MathText implementation.\n\n"
  "This class is aware of a number of environment variables that can be\n"
  "used to configure and debug python initialization (all are optional):\n"
  "- VTK_MATPLOTLIB_DEBUG: Enable verbose debugging output during\n"
  "  initialization of the python environment.\n\n";


static PyObject *
PyvtkMatplotlibMathTextUtilities_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMatplotlibMathTextUtilities::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatplotlibMathTextUtilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatplotlibMathTextUtilities *op = static_cast<vtkMatplotlibMathTextUtilities *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMatplotlibMathTextUtilities::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatplotlibMathTextUtilities_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMatplotlibMathTextUtilities *tempr = vtkMatplotlibMathTextUtilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatplotlibMathTextUtilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatplotlibMathTextUtilities *op = static_cast<vtkMatplotlibMathTextUtilities *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatplotlibMathTextUtilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMatplotlibMathTextUtilities::NewInstance());

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
PyvtkMatplotlibMathTextUtilities_IsAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatplotlibMathTextUtilities *op = static_cast<vtkMatplotlibMathTextUtilities *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsAvailable() :
      op->vtkMatplotlibMathTextUtilities::IsAvailable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatplotlibMathTextUtilities_GetBoundingBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatplotlibMathTextUtilities *op = static_cast<vtkMatplotlibMathTextUtilities *>(vp);

  vtkTextProperty *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  const size_t size3 = 4;
  int temp3[4];
  int save3[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    bool tempr = (ap.IsBound() ?
      op->GetBoundingBox(temp0, temp1, temp2, temp3) :
      op->vtkMatplotlibMathTextUtilities::GetBoundingBox(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatplotlibMathTextUtilities_RenderString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatplotlibMathTextUtilities *op = static_cast<vtkMatplotlibMathTextUtilities *>(vp);

  const char *temp0 = nullptr;
  vtkImageData *temp1 = nullptr;
  vtkTextProperty *temp2 = nullptr;
  int temp3;
  size_t size4 = 0;
  int store4[2*2];
  int *temp4 = nullptr;
  int *save4 = nullptr;
  if (ap.GetArgSize(4) > 0)
  {
    size4 = 2;
    temp4 = store4;
    save4 = store4 + 2;
  }
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetVTKObject(temp2, "vtkTextProperty") &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetArray(temp4, size4)))
  {
    ap.Save(temp4, save4, size4);

    bool tempr = (ap.IsBound() ?
      op->RenderString(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMatplotlibMathTextUtilities::RenderString(temp0, temp1, temp2, temp3, temp4));

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


static PyObject *
PyvtkMatplotlibMathTextUtilities_StringToPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StringToPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatplotlibMathTextUtilities *op = static_cast<vtkMatplotlibMathTextUtilities *>(vp);

  const char *temp0 = nullptr;
  vtkPath *temp1 = nullptr;
  vtkTextProperty *temp2 = nullptr;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPath") &&
      ap.GetVTKObject(temp2, "vtkTextProperty") &&
      ap.GetValue(temp3))
  {
    bool tempr = (ap.IsBound() ?
      op->StringToPath(temp0, temp1, temp2, temp3) :
      op->vtkMatplotlibMathTextUtilities::StringToPath(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatplotlibMathTextUtilities_SetScaleToPowerOfTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToPowerOfTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatplotlibMathTextUtilities *op = static_cast<vtkMatplotlibMathTextUtilities *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleToPowerOfTwo(temp0);
    }
    else
    {
      op->vtkMatplotlibMathTextUtilities::SetScaleToPowerOfTwo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMatplotlibMathTextUtilities_GetScaleToPowerOfTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleToPowerOfTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatplotlibMathTextUtilities *op = static_cast<vtkMatplotlibMathTextUtilities *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScaleToPowerOfTwo() :
      op->vtkMatplotlibMathTextUtilities::GetScaleToPowerOfTwo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMatplotlibMathTextUtilities_Methods[] = {
  {"IsTypeOf", PyvtkMatplotlibMathTextUtilities_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMatplotlibMathTextUtilities_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMatplotlibMathTextUtilities_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMatplotlibMathTextUtilities\nC++: static vtkMatplotlibMathTextUtilities *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMatplotlibMathTextUtilities_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMatplotlibMathTextUtilities\nC++: vtkMatplotlibMathTextUtilities *NewInstance()\n\n"},
  {"IsAvailable", PyvtkMatplotlibMathTextUtilities_IsAvailable, METH_VARARGS,
   "V.IsAvailable() -> bool\nC++: bool IsAvailable() override;\n\nReturns true if mathtext rendering is available.\n"},
  {"GetBoundingBox", PyvtkMatplotlibMathTextUtilities_GetBoundingBox, METH_VARARGS,
   "V.GetBoundingBox(vtkTextProperty, string, int, [int, int, int,\n    int]) -> bool\nC++: bool GetBoundingBox(vtkTextProperty *tprop, const char *str,\n    int dpi, int bbox[4]) override;\n\nGiven a text property and a string, get the bounding box {xmin,\nxmax, ymin, ymax} of the rendered string in pixels. The origin of\nthe bounding box is the anchor point described by the horizontal\nand vertical justification text property variables. Returns true\non success, false otherwise.\n"},
  {"RenderString", PyvtkMatplotlibMathTextUtilities_RenderString, METH_VARARGS,
   "V.RenderString(string, vtkImageData, vtkTextProperty, int, [int,\n    int]) -> bool\nC++: bool RenderString(const char *str, vtkImageData *data,\n    vtkTextProperty *tprop, int dpi, int textDims[2]=NULL)\n    override;\n\nRender the given string str into the vtkImageData data with a\nresolution of dpi. The image is resized automatically. textDims\nwill be overwritten by the pixel width and height of the rendered\nstring. This is useful when ScaleToPowerOfTwo is true, and the\nimage dimensions may not match the dimensions of the rendered\ntext. The origin of the image's extents is aligned with the\nanchor point described by the text property's vertical and\nhorizontal justification options.\n"},
  {"StringToPath", PyvtkMatplotlibMathTextUtilities_StringToPath, METH_VARARGS,
   "V.StringToPath(string, vtkPath, vtkTextProperty, int) -> bool\nC++: bool StringToPath(const char *str, vtkPath *path,\n    vtkTextProperty *tprop, int dpi) override;\n\nParse the MathText expression in str and fill path with a contour\nof the glyphs. The origin of the path coordinates is aligned with\nthe anchor point described by the text property's horizontal and\nvertical justification options.\n"},
  {"SetScaleToPowerOfTwo", PyvtkMatplotlibMathTextUtilities_SetScaleToPowerOfTwo, METH_VARARGS,
   "V.SetScaleToPowerOfTwo(bool)\nC++: void SetScaleToPowerOfTwo(bool val) override;\n\nSet to true if the graphics implementation requires texture image\ndimensions to be a power of two. Default is true, but this member\nwill be set appropriately when GL is inited.\n"},
  {"GetScaleToPowerOfTwo", PyvtkMatplotlibMathTextUtilities_GetScaleToPowerOfTwo, METH_VARARGS,
   "V.GetScaleToPowerOfTwo() -> bool\nC++: bool GetScaleToPowerOfTwo() override;\n\nSet to true if the graphics implementation requires texture image\ndimensions to be a power of two. Default is true, but this member\nwill be set appropriately when GL is inited.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMatplotlibMathTextUtilities_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingMatplotlibPython.vtkMatplotlibMathTextUtilities", // tp_name
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
  PyvtkMatplotlibMathTextUtilities_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMatplotlibMathTextUtilities_StaticNew()
{
  return vtkMatplotlibMathTextUtilities::New();
}

PyObject *PyvtkMatplotlibMathTextUtilities_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMatplotlibMathTextUtilities_Type, PyvtkMatplotlibMathTextUtilities_Methods,
    "vtkMatplotlibMathTextUtilities",
 &PyvtkMatplotlibMathTextUtilities_StaticNew);

  PyTypeObject *pytype = &PyvtkMatplotlibMathTextUtilities_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMathTextUtilities_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMatplotlibMathTextUtilities(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMatplotlibMathTextUtilities_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMatplotlibMathTextUtilities", o) != 0)
  {
    Py_DECREF(o);
  }

}

