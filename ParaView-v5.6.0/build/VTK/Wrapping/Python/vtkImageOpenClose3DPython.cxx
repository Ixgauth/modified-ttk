// python wrapper for vtkImageOpenClose3D
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
#include "vtkInformationVector.h"
#include "vtkImageOpenClose3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageOpenClose3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageOpenClose3D_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageOpenClose3D_Doc =
  "vtkImageOpenClose3D - Will perform opening or closing.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageOpenClose3D performs opening or closing by having two\n"
  "vtkImageErodeDilates in series.  The size of operation is determined\n"
  "by the method SetKernelSize, and the operator is an ellipse.\n"
  "OpenValue and CloseValue determine how the filter behaves.  For\n"
  "binary images Opening and closing behaves as expected. Close value is\n"
  "first dilated, and then eroded. Open value is first eroded, and then\n"
  "dilated. Degenerate two dimensional opening/closing can be achieved\n"
  "by setting the one axis the 3D KernelSize to 1. Values other than\n"
  "open value and close value are not touched. This enables the filter\n"
  "to processes segmented images containing more than two tags.\n\n";


static PyObject *
PyvtkImageOpenClose3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageOpenClose3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageOpenClose3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageOpenClose3D *tempr = vtkImageOpenClose3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageOpenClose3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageOpenClose3D::NewInstance());

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
PyvtkImageOpenClose3D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageOpenClose3D::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_DebugOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DebugOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DebugOn();
    }
    else
    {
      op->vtkImageOpenClose3D::DebugOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_DebugOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DebugOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DebugOff();
    }
    else
    {
      op->vtkImageOpenClose3D::DebugOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Modified();
    }
    else
    {
      op->vtkImageOpenClose3D::Modified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_SetKernelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetKernelSize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageOpenClose3D::SetKernelSize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_SetOpenValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpenValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpenValue(temp0);
    }
    else
    {
      op->vtkImageOpenClose3D::SetOpenValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_GetOpenValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpenValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpenValue() :
      op->vtkImageOpenClose3D::GetOpenValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_SetCloseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCloseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCloseValue(temp0);
    }
    else
    {
      op->vtkImageOpenClose3D::SetCloseValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_GetCloseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCloseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCloseValue() :
      op->vtkImageOpenClose3D::GetCloseValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_GetFilter0(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilter0");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageDilateErode3D *tempr = (ap.IsBound() ?
      op->GetFilter0() :
      op->vtkImageOpenClose3D::GetFilter0());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_GetFilter1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilter1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageDilateErode3D *tempr = (ap.IsBound() ?
      op->GetFilter1() :
      op->vtkImageOpenClose3D::GetFilter1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageOpenClose3D_Methods[] = {
  {"IsTypeOf", PyvtkImageOpenClose3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nDefault open value is 0, and default close value is 255.\n"},
  {"IsA", PyvtkImageOpenClose3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nDefault open value is 0, and default close value is 255.\n"},
  {"SafeDownCast", PyvtkImageOpenClose3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageOpenClose3D\nC++: static vtkImageOpenClose3D *SafeDownCast(vtkObjectBase *o)\n\nDefault open value is 0, and default close value is 255.\n"},
  {"NewInstance", PyvtkImageOpenClose3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageOpenClose3D\nC++: vtkImageOpenClose3D *NewInstance()\n\nDefault open value is 0, and default close value is 255.\n"},
  {"GetMTime", PyvtkImageOpenClose3D_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nThis method considers the sub filters MTimes when computing this\nobjects modified time.\n"},
  {"DebugOn", PyvtkImageOpenClose3D_DebugOn, METH_VARARGS,
   "V.DebugOn()\nC++: void DebugOn() override;\n\nTurn debugging output on. (in sub filters also)\n"},
  {"DebugOff", PyvtkImageOpenClose3D_DebugOff, METH_VARARGS,
   "V.DebugOff()\nC++: void DebugOff() override;\n\nTurn debugging output on. (in sub filters also)\n"},
  {"Modified", PyvtkImageOpenClose3D_Modified, METH_VARARGS,
   "V.Modified()\nC++: void Modified() override;\n\nPass modified message to sub filters.\n"},
  {"SetKernelSize", PyvtkImageOpenClose3D_SetKernelSize, METH_VARARGS,
   "V.SetKernelSize(int, int, int)\nC++: void SetKernelSize(int size0, int size1, int size2)\n\nSelects the size of gaps or objects removed.\n"},
  {"SetOpenValue", PyvtkImageOpenClose3D_SetOpenValue, METH_VARARGS,
   "V.SetOpenValue(float)\nC++: void SetOpenValue(double value)\n\nDetermines the value that will opened. Open value is first\neroded, and then dilated.\n"},
  {"GetOpenValue", PyvtkImageOpenClose3D_GetOpenValue, METH_VARARGS,
   "V.GetOpenValue() -> float\nC++: double GetOpenValue()\n\nDetermines the value that will opened. Open value is first\neroded, and then dilated.\n"},
  {"SetCloseValue", PyvtkImageOpenClose3D_SetCloseValue, METH_VARARGS,
   "V.SetCloseValue(float)\nC++: void SetCloseValue(double value)\n\nDetermines the value that will closed. Close value is first\ndilated, and then eroded\n"},
  {"GetCloseValue", PyvtkImageOpenClose3D_GetCloseValue, METH_VARARGS,
   "V.GetCloseValue() -> float\nC++: double GetCloseValue()\n\nDetermines the value that will closed. Close value is first\ndilated, and then eroded\n"},
  {"GetFilter0", PyvtkImageOpenClose3D_GetFilter0, METH_VARARGS,
   "V.GetFilter0() -> vtkImageDilateErode3D\nC++: virtual vtkImageDilateErode3D *GetFilter0()\n\nNeeded for Progress functions\n"},
  {"GetFilter1", PyvtkImageOpenClose3D_GetFilter1, METH_VARARGS,
   "V.GetFilter1() -> vtkImageDilateErode3D\nC++: virtual vtkImageDilateErode3D *GetFilter1()\n\nNeeded for Progress functions\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageOpenClose3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingMorphologicalPython.vtkImageOpenClose3D", // tp_name
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
  PyvtkImageOpenClose3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageOpenClose3D_StaticNew()
{
  return vtkImageOpenClose3D::New();
}

PyObject *PyvtkImageOpenClose3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageOpenClose3D_Type, PyvtkImageOpenClose3D_Methods,
    "vtkImageOpenClose3D",
 &PyvtkImageOpenClose3D_StaticNew);

  PyTypeObject *pytype = &PyvtkImageOpenClose3D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageOpenClose3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageOpenClose3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageOpenClose3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

