// python wrapper for vtkImageMapToWindowLevelColors
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
#include "vtkImageMapToWindowLevelColors.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageMapToWindowLevelColors(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageMapToWindowLevelColors_ClassNew(); }

#ifndef DECLARED_PyvtkImageMapToColors_ClassNew
extern "C" { PyObject *PyvtkImageMapToColors_ClassNew(); }
#define DECLARED_PyvtkImageMapToColors_ClassNew
#endif

static const char *PyvtkImageMapToWindowLevelColors_Doc =
  "vtkImageMapToWindowLevelColors - Map an image through a lookup table\nand/or a window/level.\n\n"
  "Superclass: vtkImageMapToColors\n\n"
  "The vtkImageMapToWindowLevelColors filter can be used to perform the\n"
  "following operations depending on its settings:\n"
  "-# If no lookup table is provided, and if the input data has a single\n"
  "   component (any numerical scalar type is allowed), then the data is\n"
  "   mapped through the specified Window/Level.  The type of the output\n"
  "   scalars will be \"unsigned char\" with a range of (0,255).\n"
  "-# If no lookup table is provided, and if the input data is already\n"
  "   unsigned char, and if the Window/Level is set to 255.0/127.5, then\n"
  "   the input data will be passed directly to the output.\n"
  "-# If a lookup table is provided, then the first component of the\n"
  "   input data is mapped through the lookup table (using the Range of\n"
  "   the lookup table), and the resulting color is modulated according\n"
  "   to the Window/Level.  For example, if the input value is 500 and\n"
  "   the Window/Level are 2000/1000, the output value will be RGB*0.25\n"
  "   where RGB is the color assigned by the lookup table and 0.25 is\n"
  "   the modulation factor. See SetWindow() and SetLevel() for the\n"
  "   equations used for modulation. To map scalars through a lookup\n"
  "   table without modulating the resulting color, use\n"
  "   vtkImageMapToColors instead of this filter.\n"
  "@sa\n"
  "vtkLookupTable vtkScalarsToColors\n\n";


static PyObject *
PyvtkImageMapToWindowLevelColors_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageMapToWindowLevelColors::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageMapToWindowLevelColors::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageMapToWindowLevelColors *tempr = vtkImageMapToWindowLevelColors::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageMapToWindowLevelColors *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageMapToWindowLevelColors::NewInstance());

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
PyvtkImageMapToWindowLevelColors_SetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWindow(temp0);
    }
    else
    {
      op->vtkImageMapToWindowLevelColors::SetWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_GetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWindow() :
      op->vtkImageMapToWindowLevelColors::GetWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_SetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLevel(temp0);
    }
    else
    {
      op->vtkImageMapToWindowLevelColors::SetLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkImageMapToWindowLevelColors::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageMapToWindowLevelColors_Methods[] = {
  {"IsTypeOf", PyvtkImageMapToWindowLevelColors_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageMapToWindowLevelColors_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageMapToWindowLevelColors_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageMapToWindowLevelColors\nC++: static vtkImageMapToWindowLevelColors *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageMapToWindowLevelColors_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageMapToWindowLevelColors\nC++: vtkImageMapToWindowLevelColors *NewInstance()\n\n"},
  {"SetWindow", PyvtkImageMapToWindowLevelColors_SetWindow, METH_VARARGS,
   "V.SetWindow(float)\nC++: virtual void SetWindow(double _arg)\n\nSet / Get the Window to use -> modulation will be performed on\nthe color based on (S - (L - W/2))/W where S is the scalar value,\nL is the level and W is the window.\n"},
  {"GetWindow", PyvtkImageMapToWindowLevelColors_GetWindow, METH_VARARGS,
   "V.GetWindow() -> float\nC++: virtual double GetWindow()\n\nSet / Get the Window to use -> modulation will be performed on\nthe color based on (S - (L - W/2))/W where S is the scalar value,\nL is the level and W is the window.\n"},
  {"SetLevel", PyvtkImageMapToWindowLevelColors_SetLevel, METH_VARARGS,
   "V.SetLevel(float)\nC++: virtual void SetLevel(double _arg)\n\nSet / Get the Level to use -> modulation will be performed on the\ncolor based on (S - (L - W/2))/W where S is the scalar value, L\nis the level and W is the window.\n"},
  {"GetLevel", PyvtkImageMapToWindowLevelColors_GetLevel, METH_VARARGS,
   "V.GetLevel() -> float\nC++: virtual double GetLevel()\n\nSet / Get the Level to use -> modulation will be performed on the\ncolor based on (S - (L - W/2))/W where S is the scalar value, L\nis the level and W is the window.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageMapToWindowLevelColors_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingColorPython.vtkImageMapToWindowLevelColors", // tp_name
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
  PyvtkImageMapToWindowLevelColors_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageMapToWindowLevelColors_StaticNew()
{
  return vtkImageMapToWindowLevelColors::New();
}

PyObject *PyvtkImageMapToWindowLevelColors_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageMapToWindowLevelColors_Type, PyvtkImageMapToWindowLevelColors_Methods,
    "vtkImageMapToWindowLevelColors",
 &PyvtkImageMapToWindowLevelColors_StaticNew);

  PyTypeObject *pytype = &PyvtkImageMapToWindowLevelColors_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageMapToColors_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageMapToWindowLevelColors(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageMapToWindowLevelColors_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageMapToWindowLevelColors", o) != 0)
  {
    Py_DECREF(o);
  }

}

