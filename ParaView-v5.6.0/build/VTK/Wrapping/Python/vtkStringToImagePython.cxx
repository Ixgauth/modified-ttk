// python wrapper for vtkStringToImage
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
#include "vtkVector.h"
#include "vtkUnicodeString.h"
#include "vtkStdString.h"
#include "vtkStringToImage.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStringToImage(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStringToImage_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkStringToImage_Doc =
  "vtkStringToImage - base class for classes that render supplied text\nto an image.\n\n"
  "Superclass: vtkObject\n\n"
;


static PyObject *
PyvtkStringToImage_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStringToImage::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToImage_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStringToImage::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToImage_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStringToImage *tempr = vtkStringToImage::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToImage_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringToImage *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStringToImage::NewInstance());

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
PyvtkStringToImage_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkUnicodeString temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVector2i tempr = op->GetBounds(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}

static PyObject *
PyvtkStringToImage_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkStdString temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVector2i tempr = op->GetBounds(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}

static PyMethodDef PyvtkStringToImage_GetBounds_Methods[] = {
  {nullptr, PyvtkStringToImage_GetBounds_s1, METH_VARARGS,
   "@Vui *vtkTextProperty"},
  {nullptr, PyvtkStringToImage_GetBounds_s2, METH_VARARGS,
   "@Vsi *vtkTextProperty"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkStringToImage_GetBounds(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStringToImage_GetBounds_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkStringToImage_RenderString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkUnicodeString temp1;
  int temp2;
  vtkImageData *temp3 = nullptr;
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

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkImageData") &&
      (ap.NoArgsLeft() || ap.GetArray(temp4, size4)))
  {
    ap.Save(temp4, save4, size4);

    int tempr = op->RenderString(temp0, temp1, temp2, temp3, temp4);

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
PyvtkStringToImage_RenderString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkStdString temp1;
  int temp2;
  vtkImageData *temp3 = nullptr;
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

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkImageData") &&
      (ap.NoArgsLeft() || ap.GetArray(temp4, size4)))
  {
    ap.Save(temp4, save4, size4);

    int tempr = op->RenderString(temp0, temp1, temp2, temp3, temp4);

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

static PyMethodDef PyvtkStringToImage_RenderString_Methods[] = {
  {nullptr, PyvtkStringToImage_RenderString_s1, METH_VARARGS,
   "@VuiV|P *vtkTextProperty *vtkImageData *i"},
  {nullptr, PyvtkStringToImage_RenderString_s2, METH_VARARGS,
   "@VsiV|P *vtkTextProperty *vtkImageData *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkStringToImage_RenderString(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStringToImage_RenderString_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RenderString");
  return nullptr;
}



static PyObject *
PyvtkStringToImage_SetScaleToPowerOfTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToPowerOfTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

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
      op->vtkStringToImage::SetScaleToPowerOfTwo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToImage_GetScaleToPowerOfTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleToPowerOfTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScaleToPowerOfTwo() :
      op->vtkStringToImage::GetScaleToPowerOfTwo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkStringToImage_Methods[] = {
  {"IsTypeOf", PyvtkStringToImage_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStringToImage_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStringToImage_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkStringToImage\nC++: static vtkStringToImage *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStringToImage_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStringToImage\nC++: vtkStringToImage *NewInstance()\n\n"},
  {"GetBounds", PyvtkStringToImage_GetBounds, METH_VARARGS,
   "V.GetBounds(vtkTextProperty, unicode, int) -> vtkVector2i\nC++: virtual vtkVector2i GetBounds(vtkTextProperty *property,\n    const vtkUnicodeString &string, int dpi)\nV.GetBounds(vtkTextProperty, string, int) -> vtkVector2i\nC++: virtual vtkVector2i GetBounds(vtkTextProperty *property,\n    const vtkStdString &string, int dpi)\n\nGiven a text property and a string, get the bounding box [xmin,\nxmax] x [ymin, ymax]. Note that this is the bounding box of the\narea where actual pixels will be written, given a\ntext/pen/baseline location of (0,0). For example, if the string\nstarts with a 'space', or depending on the orientation, you can\nend up with a [-20, -10] x [5, 10] bbox (the math to get the real\nbbox is straightforward). Return 1 on success, 0 otherwise. You\ncan use IsBoundingBoxValid() to test if the computed bbox is\nvalid (it may not if GetBoundingBox() failed or if the string was\nempty).\n"},
  {"RenderString", PyvtkStringToImage_RenderString, METH_VARARGS,
   "V.RenderString(vtkTextProperty, unicode, int, vtkImageData, [int,\n    int]) -> int\nC++: virtual int RenderString(vtkTextProperty *property,\n    const vtkUnicodeString &string, int dpi, vtkImageData *data,\n    int textDims[2]=nullptr)\nV.RenderString(vtkTextProperty, string, int, vtkImageData, [int,\n    int]) -> int\nC++: virtual int RenderString(vtkTextProperty *property,\n    const vtkStdString &string, int dpi, vtkImageData *data,\n    int text_dims[2]=nullptr)\n\nGiven a text property and a string, this function initializes the\nvtkImageData *data and renders it in a vtkImageData. textDims, if\nprovided, will be overwritten by the pixel width and height of\nthe rendered string. This is useful when ScaleToPowerOfTwo is\ntrue, and the image dimensions may not match the dimensions of\nthe rendered text.\n"},
  {"SetScaleToPowerOfTwo", PyvtkStringToImage_SetScaleToPowerOfTwo, METH_VARARGS,
   "V.SetScaleToPowerOfTwo(bool)\nC++: virtual void SetScaleToPowerOfTwo(bool scale)\n\nShould we produce images at powers of 2, makes rendering on old\nOpenGL hardware easier. Default is false.\n"},
  {"GetScaleToPowerOfTwo", PyvtkStringToImage_GetScaleToPowerOfTwo, METH_VARARGS,
   "V.GetScaleToPowerOfTwo() -> bool\nC++: virtual bool GetScaleToPowerOfTwo()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStringToImage_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkStringToImage", // tp_name
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
  PyvtkStringToImage_Doc, // tp_doc
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

PyObject *PyvtkStringToImage_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStringToImage_Type, PyvtkStringToImage_Methods,
    "vtkStringToImage",
 nullptr);

  PyTypeObject *pytype = &PyvtkStringToImage_Type;

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

void PyVTKAddFile_vtkStringToImage(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStringToImage_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStringToImage", o) != 0)
  {
    Py_DECREF(o);
  }

}

