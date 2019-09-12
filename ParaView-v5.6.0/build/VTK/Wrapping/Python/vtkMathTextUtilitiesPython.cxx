// python wrapper for vtkMathTextUtilities
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
#include "vtkMathTextUtilities.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMathTextUtilities(PyObject *); }

static const char *PyvtkMathTextUtilitiesCleanup_Doc =
  "vtkMathTextUtilitiesCleanup - no description provided.\n\n"

  "vtkMathTextUtilitiesCleanup()\n";

static PyMethodDef PyvtkMathTextUtilitiesCleanup_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkMathTextUtilitiesCleanup_vtkMathTextUtilitiesCleanup(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMathTextUtilitiesCleanup");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMathTextUtilitiesCleanup *op = new vtkMathTextUtilitiesCleanup();

    result = PyVTKSpecialObject_New("vtkMathTextUtilitiesCleanup", op);
  }

  return result;
}

static PyMethodDef PyvtkMathTextUtilitiesCleanup_vtkMathTextUtilitiesCleanup_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMathTextUtilitiesCleanup_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkMathTextUtilitiesCleanup_vtkMathTextUtilitiesCleanup(nullptr, args);
}

static void PyvtkMathTextUtilitiesCleanup_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkMathTextUtilitiesCleanup *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkMathTextUtilitiesCleanup_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkMathTextUtilitiesCleanup_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingFreeTypePython.vtkMathTextUtilitiesCleanup", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkMathTextUtilitiesCleanup_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkMathTextUtilitiesCleanup_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkMathTextUtilitiesCleanup_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkMathTextUtilitiesCleanup_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMathTextUtilitiesCleanup_TypeNew(); }

PyObject *PyvtkMathTextUtilitiesCleanup_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkMathTextUtilitiesCleanup_Type,
    PyvtkMathTextUtilitiesCleanup_Methods,
    PyvtkMathTextUtilitiesCleanup_vtkMathTextUtilitiesCleanup_Methods,
    nullptr);

  PyTypeObject *pytype = &PyvtkMathTextUtilitiesCleanup_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMathTextUtilities_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkMathTextUtilities_Doc =
  "vtkMathTextUtilities - Abstract interface to equation rendering.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkMathTextUtilities defines an interface for equation rendering.\n"
  "Intended for use with the python matplotlib.mathtext module\n"
  "(implemented in the vtkMatplotlib module).\n\n";


static PyObject *
PyvtkMathTextUtilities_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMathTextUtilities::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMathTextUtilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextUtilities *op = static_cast<vtkMathTextUtilities *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMathTextUtilities::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMathTextUtilities_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMathTextUtilities *tempr = vtkMathTextUtilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMathTextUtilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextUtilities *op = static_cast<vtkMathTextUtilities *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMathTextUtilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMathTextUtilities::NewInstance());

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
PyvtkMathTextUtilities_IsAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextUtilities *op = static_cast<vtkMathTextUtilities *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsAvailable() :
      op->vtkMathTextUtilities::IsAvailable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMathTextUtilities_GetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMathTextUtilities *tempr = vtkMathTextUtilities::GetInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMathTextUtilities_SetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetInstance");

  vtkMathTextUtilities *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMathTextUtilities"))
  {
    vtkMathTextUtilities::SetInstance(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMathTextUtilities_GetBoundingBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextUtilities *op = static_cast<vtkMathTextUtilities *>(vp);

  vtkTextProperty *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  const size_t size3 = 4;
  int temp3[4];
  int save3[4];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    bool tempr = op->GetBoundingBox(temp0, temp1, temp2, temp3);

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
PyvtkMathTextUtilities_RenderString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextUtilities *op = static_cast<vtkMathTextUtilities *>(vp);

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

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetVTKObject(temp2, "vtkTextProperty") &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetArray(temp4, size4)))
  {
    ap.Save(temp4, save4, size4);

    bool tempr = op->RenderString(temp0, temp1, temp2, temp3, temp4);

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
PyvtkMathTextUtilities_StringToPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StringToPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextUtilities *op = static_cast<vtkMathTextUtilities *>(vp);

  const char *temp0 = nullptr;
  vtkPath *temp1 = nullptr;
  vtkTextProperty *temp2 = nullptr;
  int temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPath") &&
      ap.GetVTKObject(temp2, "vtkTextProperty") &&
      ap.GetValue(temp3))
  {
    bool tempr = op->StringToPath(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMathTextUtilities_GetConstrainedFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstrainedFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextUtilities *op = static_cast<vtkMathTextUtilities *>(vp);

  const char *temp0 = nullptr;
  vtkTextProperty *temp1 = nullptr;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->GetConstrainedFontSize(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMathTextUtilities::GetConstrainedFontSize(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMathTextUtilities_GetScaleToPowerOfTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleToPowerOfTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextUtilities *op = static_cast<vtkMathTextUtilities *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    bool tempr = op->GetScaleToPowerOfTwo();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMathTextUtilities_SetScaleToPowerOfTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToPowerOfTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextUtilities *op = static_cast<vtkMathTextUtilities *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetScaleToPowerOfTwo(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMathTextUtilities_Methods[] = {
  {"IsTypeOf", PyvtkMathTextUtilities_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMathTextUtilities_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMathTextUtilities_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMathTextUtilities\nC++: static vtkMathTextUtilities *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMathTextUtilities_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMathTextUtilities\nC++: vtkMathTextUtilities *NewInstance()\n\n"},
  {"IsAvailable", PyvtkMathTextUtilities_IsAvailable, METH_VARARGS,
   "V.IsAvailable() -> bool\nC++: virtual bool IsAvailable()\n\nReturns true if mathtext rendering is available.\n"},
  {"GetInstance", PyvtkMathTextUtilities_GetInstance, METH_VARARGS,
   "V.GetInstance() -> vtkMathTextUtilities\nC++: static vtkMathTextUtilities *GetInstance()\n\nReturn the singleton instance with no reference counting.\n"},
  {"SetInstance", PyvtkMathTextUtilities_SetInstance, METH_VARARGS,
   "V.SetInstance(vtkMathTextUtilities)\nC++: static void SetInstance(vtkMathTextUtilities *instance)\n\nSupply a user defined instance. Call Delete() on the supplied\ninstance after setting it to fix the reference count.\n"},
  {"GetBoundingBox", PyvtkMathTextUtilities_GetBoundingBox, METH_VARARGS,
   "V.GetBoundingBox(vtkTextProperty, string, int, [int, int, int,\n    int]) -> bool\nC++: virtual bool GetBoundingBox(vtkTextProperty *tprop,\n    const char *str, int dpi, int bbox[4])\n\nDetermine the dimensions of the image that RenderString will\nproduce for a given str, tprop, and dpi\n"},
  {"RenderString", PyvtkMathTextUtilities_RenderString, METH_VARARGS,
   "V.RenderString(string, vtkImageData, vtkTextProperty, int, [int,\n    int]) -> bool\nC++: virtual bool RenderString(const char *str,\n    vtkImageData *data, vtkTextProperty *tprop, int dpi,\n    int textDims[2]=nullptr)\n\nRender the given string str into the vtkImageData data with a\nresolution of dpi. textDims, will be overwritten by the pixel\nwidth and height of the rendered string. This is useful when\nScaleToPowerOfTwo is set to true, and the image dimensions may\nnot match the dimensions of the rendered text.\n"},
  {"StringToPath", PyvtkMathTextUtilities_StringToPath, METH_VARARGS,
   "V.StringToPath(string, vtkPath, vtkTextProperty, int) -> bool\nC++: virtual bool StringToPath(const char *str, vtkPath *path,\n    vtkTextProperty *tprop, int dpi)\n\nParse the MathText expression in str and fill path with a contour\nof the glyphs.\n"},
  {"GetConstrainedFontSize", PyvtkMathTextUtilities_GetConstrainedFontSize, METH_VARARGS,
   "V.GetConstrainedFontSize(string, vtkTextProperty, int, int, int)\n    -> int\nC++: virtual int GetConstrainedFontSize(const char *str,\n    vtkTextProperty *tprop, int targetWidth, int targetHeight,\n    int dpi)\n\nThis function returns the font size (in points) required to fit\nthe string in the target rectangle. The font size of tprop is\nupdated to the computed value as well. If an error occurs (e.g.\nan improperly formatted MathText string), -1 is returned.\n"},
  {"GetScaleToPowerOfTwo", PyvtkMathTextUtilities_GetScaleToPowerOfTwo, METH_VARARGS,
   "V.GetScaleToPowerOfTwo() -> bool\nC++: virtual bool GetScaleToPowerOfTwo()\n\nSet to true if the graphics implementation requires texture image\ndimensions to be a power of two. Default is true, but this member\nwill be set appropriately when GL is inited.\n"},
  {"SetScaleToPowerOfTwo", PyvtkMathTextUtilities_SetScaleToPowerOfTwo, METH_VARARGS,
   "V.SetScaleToPowerOfTwo(bool)\nC++: virtual void SetScaleToPowerOfTwo(bool scale)\n\nSet to true if the graphics implementation requires texture image\ndimensions to be a power of two. Default is true, but this member\nwill be set appropriately when GL is inited.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMathTextUtilities_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingFreeTypePython.vtkMathTextUtilities", // tp_name
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
  PyvtkMathTextUtilities_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMathTextUtilities_StaticNew()
{
  return vtkMathTextUtilities::New();
}

PyObject *PyvtkMathTextUtilities_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMathTextUtilities_Type, PyvtkMathTextUtilities_Methods,
    "vtkMathTextUtilities",
 &PyvtkMathTextUtilities_StaticNew);

  PyTypeObject *pytype = &PyvtkMathTextUtilities_Type;

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

void PyVTKAddFile_vtkMathTextUtilities(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMathTextUtilitiesCleanup_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkMathTextUtilitiesCleanup", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkMathTextUtilities_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMathTextUtilities", o) != 0)
  {
    Py_DECREF(o);
  }

}

