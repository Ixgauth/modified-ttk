// python wrapper for vtkImageCursor3D
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
#include "vtkImageCursor3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageCursor3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageCursor3D_ClassNew(); }

#ifndef DECLARED_PyvtkImageInPlaceFilter_ClassNew
extern "C" { PyObject *PyvtkImageInPlaceFilter_ClassNew(); }
#define DECLARED_PyvtkImageInPlaceFilter_ClassNew
#endif

static const char *PyvtkImageCursor3D_Doc =
  "vtkImageCursor3D - Paints a cursor on top of an image or volume.\n\n"
  "Superclass: vtkImageInPlaceFilter\n\n"
  "vtkImageCursor3D will draw a cursor on a 2d image or 3d volume.\n\n";


static PyObject *
PyvtkImageCursor3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageCursor3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCursor3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageCursor3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCursor3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageCursor3D *tempr = vtkImageCursor3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCursor3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageCursor3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageCursor3D::NewInstance());

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
PyvtkImageCursor3D_SetCursorPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetCursorPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageCursor3D::SetCursorPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCursor3D_SetCursorPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCursorPosition(temp0);
    }
    else
    {
      op->vtkImageCursor3D::SetCursorPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCursor3D_SetCursorPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageCursor3D_SetCursorPosition_s1(self, args);
    case 1:
      return PyvtkImageCursor3D_SetCursorPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCursorPosition");
  return nullptr;
}



static PyObject *
PyvtkImageCursor3D_GetCursorPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCursorPosition() :
      op->vtkImageCursor3D::GetCursorPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCursor3D_SetCursorValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCursorValue(temp0);
    }
    else
    {
      op->vtkImageCursor3D::SetCursorValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCursor3D_GetCursorValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCursorValue() :
      op->vtkImageCursor3D::GetCursorValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCursor3D_SetCursorRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCursorRadius(temp0);
    }
    else
    {
      op->vtkImageCursor3D::SetCursorRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCursor3D_GetCursorRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCursorRadius() :
      op->vtkImageCursor3D::GetCursorRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageCursor3D_Methods[] = {
  {"IsTypeOf", PyvtkImageCursor3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageCursor3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageCursor3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageCursor3D\nC++: static vtkImageCursor3D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageCursor3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageCursor3D\nC++: vtkImageCursor3D *NewInstance()\n\n"},
  {"SetCursorPosition", PyvtkImageCursor3D_SetCursorPosition, METH_VARARGS,
   "V.SetCursorPosition(float, float, float)\nC++: void SetCursorPosition(double, double, double)\nV.SetCursorPosition((float, float, float))\nC++: void SetCursorPosition(double a[3])\n\n"},
  {"GetCursorPosition", PyvtkImageCursor3D_GetCursorPosition, METH_VARARGS,
   "V.GetCursorPosition() -> (float, float, float)\nC++: double *GetCursorPosition()\n\n"},
  {"SetCursorValue", PyvtkImageCursor3D_SetCursorValue, METH_VARARGS,
   "V.SetCursorValue(float)\nC++: virtual void SetCursorValue(double _arg)\n\nSets/Gets what pixel value to draw the cursor in.\n"},
  {"GetCursorValue", PyvtkImageCursor3D_GetCursorValue, METH_VARARGS,
   "V.GetCursorValue() -> float\nC++: virtual double GetCursorValue()\n\nSets/Gets what pixel value to draw the cursor in.\n"},
  {"SetCursorRadius", PyvtkImageCursor3D_SetCursorRadius, METH_VARARGS,
   "V.SetCursorRadius(int)\nC++: virtual void SetCursorRadius(int _arg)\n\nSets/Gets the radius of the cursor. The radius determines how far\nthe axis lines project out from the cursors center.\n"},
  {"GetCursorRadius", PyvtkImageCursor3D_GetCursorRadius, METH_VARARGS,
   "V.GetCursorRadius() -> int\nC++: virtual int GetCursorRadius()\n\nSets/Gets the radius of the cursor. The radius determines how far\nthe axis lines project out from the cursors center.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageCursor3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingHybridPython.vtkImageCursor3D", // tp_name
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
  PyvtkImageCursor3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageCursor3D_StaticNew()
{
  return vtkImageCursor3D::New();
}

PyObject *PyvtkImageCursor3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageCursor3D_Type, PyvtkImageCursor3D_Methods,
    "vtkImageCursor3D",
 &PyvtkImageCursor3D_StaticNew);

  PyTypeObject *pytype = &PyvtkImageCursor3D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageInPlaceFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageCursor3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageCursor3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageCursor3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

