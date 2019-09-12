// python wrapper for vtkWindowLevelLookupTable
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
#include "vtkWindowLevelLookupTable.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWindowLevelLookupTable(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkWindowLevelLookupTable_ClassNew(); }

#ifndef DECLARED_PyvtkLookupTable_ClassNew
extern "C" { PyObject *PyvtkLookupTable_ClassNew(); }
#define DECLARED_PyvtkLookupTable_ClassNew
#endif

static const char *PyvtkWindowLevelLookupTable_Doc =
  "vtkWindowLevelLookupTable - map scalar values into colors or colors\nto scalars; generate color table\n\n"
  "Superclass: vtkLookupTable\n\n"
  "vtkWindowLevelLookupTable is an object that is used by mapper objects\n"
  "to map scalar values into rgba (red-green-blue-alpha transparency)\n"
  "color specification, or rgba into scalar values. The color table can\n"
  "be created by direct insertion of color values, or by specifying a\n"
  "window and level. Window / Level is used in medical imaging to\n"
  "specify a linear greyscale ramp. The Level is the center of the ramp.\n"
  " The Window is the width of the ramp.\n\n"
  "@warning\n"
  "vtkWindowLevelLookupTable is a reference counted object. Therefore,\n"
  "you should always use operator \"new\" to construct new objects. This\n"
  "procedure will avoid memory problems (see text).\n\n"
  "@sa\n"
  "vtkLogLookupTable\n\n";


static PyObject *
PyvtkWindowLevelLookupTable_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWindowLevelLookupTable::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWindowLevelLookupTable::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWindowLevelLookupTable *tempr = vtkWindowLevelLookupTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWindowLevelLookupTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWindowLevelLookupTable::NewInstance());

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
PyvtkWindowLevelLookupTable_Build(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Build();
    }
    else
    {
      op->vtkWindowLevelLookupTable::Build();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_SetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

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
      op->vtkWindowLevelLookupTable::SetWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_GetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWindow() :
      op->vtkWindowLevelLookupTable::GetWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_SetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

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
      op->vtkWindowLevelLookupTable::SetLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkWindowLevelLookupTable::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_SetInverseVideo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInverseVideo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInverseVideo(temp0);
    }
    else
    {
      op->vtkWindowLevelLookupTable::SetInverseVideo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_GetInverseVideo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverseVideo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInverseVideo() :
      op->vtkWindowLevelLookupTable::GetInverseVideo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_InverseVideoOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InverseVideoOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InverseVideoOn();
    }
    else
    {
      op->vtkWindowLevelLookupTable::InverseVideoOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_InverseVideoOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InverseVideoOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InverseVideoOff();
    }
    else
    {
      op->vtkWindowLevelLookupTable::InverseVideoOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_SetMinimumTableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetMinimumTableValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkWindowLevelLookupTable::SetMinimumTableValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindowLevelLookupTable_SetMinimumTableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumTableValue(temp0);
    }
    else
    {
      op->vtkWindowLevelLookupTable::SetMinimumTableValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindowLevelLookupTable_SetMinimumTableValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkWindowLevelLookupTable_SetMinimumTableValue_s1(self, args);
    case 1:
      return PyvtkWindowLevelLookupTable_SetMinimumTableValue_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMinimumTableValue");
  return nullptr;
}



static PyObject *
PyvtkWindowLevelLookupTable_GetMinimumTableValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMinimumTableValue() :
      op->vtkWindowLevelLookupTable::GetMinimumTableValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_SetMaximumTableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetMaximumTableValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkWindowLevelLookupTable::SetMaximumTableValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindowLevelLookupTable_SetMaximumTableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumTableValue(temp0);
    }
    else
    {
      op->vtkWindowLevelLookupTable::SetMaximumTableValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindowLevelLookupTable_SetMaximumTableValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkWindowLevelLookupTable_SetMaximumTableValue_s1(self, args);
    case 1:
      return PyvtkWindowLevelLookupTable_SetMaximumTableValue_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaximumTableValue");
  return nullptr;
}



static PyObject *
PyvtkWindowLevelLookupTable_GetMaximumTableValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMaximumTableValue() :
      op->vtkWindowLevelLookupTable::GetMaximumTableValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkWindowLevelLookupTable_Methods[] = {
  {"IsTypeOf", PyvtkWindowLevelLookupTable_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWindowLevelLookupTable_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWindowLevelLookupTable_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkWindowLevelLookupTable\nC++: static vtkWindowLevelLookupTable *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWindowLevelLookupTable_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkWindowLevelLookupTable\nC++: vtkWindowLevelLookupTable *NewInstance()\n\n"},
  {"Build", PyvtkWindowLevelLookupTable_Build, METH_VARARGS,
   "V.Build()\nC++: void Build() override;\n\nGenerate lookup table as a linear ramp between MinimumTableValue\nand MaximumTableValue.\n"},
  {"SetWindow", PyvtkWindowLevelLookupTable_SetWindow, METH_VARARGS,
   "V.SetWindow(float)\nC++: void SetWindow(double window)\n\nSet the window for the lookup table.  The window is the\ndifference between TableRange[0] and TableRange[1].\n"},
  {"GetWindow", PyvtkWindowLevelLookupTable_GetWindow, METH_VARARGS,
   "V.GetWindow() -> float\nC++: virtual double GetWindow()\n\nSet the window for the lookup table.  The window is the\ndifference between TableRange[0] and TableRange[1].\n"},
  {"SetLevel", PyvtkWindowLevelLookupTable_SetLevel, METH_VARARGS,
   "V.SetLevel(float)\nC++: void SetLevel(double level)\n\nSet the Level for the lookup table.  The level is the average of\nTableRange[0] and TableRange[1].\n"},
  {"GetLevel", PyvtkWindowLevelLookupTable_GetLevel, METH_VARARGS,
   "V.GetLevel() -> float\nC++: virtual double GetLevel()\n\nSet the Level for the lookup table.  The level is the average of\nTableRange[0] and TableRange[1].\n"},
  {"SetInverseVideo", PyvtkWindowLevelLookupTable_SetInverseVideo, METH_VARARGS,
   "V.SetInverseVideo(int)\nC++: void SetInverseVideo(vtkTypeBool iv)\n\nSet inverse video on or off.  You can achieve the same effect by\nswitching the MinimumTableValue and the MaximumTableValue.\n"},
  {"GetInverseVideo", PyvtkWindowLevelLookupTable_GetInverseVideo, METH_VARARGS,
   "V.GetInverseVideo() -> int\nC++: virtual vtkTypeBool GetInverseVideo()\n\nSet inverse video on or off.  You can achieve the same effect by\nswitching the MinimumTableValue and the MaximumTableValue.\n"},
  {"InverseVideoOn", PyvtkWindowLevelLookupTable_InverseVideoOn, METH_VARARGS,
   "V.InverseVideoOn()\nC++: virtual void InverseVideoOn()\n\nSet inverse video on or off.  You can achieve the same effect by\nswitching the MinimumTableValue and the MaximumTableValue.\n"},
  {"InverseVideoOff", PyvtkWindowLevelLookupTable_InverseVideoOff, METH_VARARGS,
   "V.InverseVideoOff()\nC++: virtual void InverseVideoOff()\n\nSet inverse video on or off.  You can achieve the same effect by\nswitching the MinimumTableValue and the MaximumTableValue.\n"},
  {"SetMinimumTableValue", PyvtkWindowLevelLookupTable_SetMinimumTableValue, METH_VARARGS,
   "V.SetMinimumTableValue(float, float, float, float)\nC++: void SetMinimumTableValue(double, double, double, double)\nV.SetMinimumTableValue((float, float, float, float))\nC++: void SetMinimumTableValue(double a[4])\n\n"},
  {"GetMinimumTableValue", PyvtkWindowLevelLookupTable_GetMinimumTableValue, METH_VARARGS,
   "V.GetMinimumTableValue() -> (float, float, float, float)\nC++: double *GetMinimumTableValue()\n\n"},
  {"SetMaximumTableValue", PyvtkWindowLevelLookupTable_SetMaximumTableValue, METH_VARARGS,
   "V.SetMaximumTableValue(float, float, float, float)\nC++: void SetMaximumTableValue(double, double, double, double)\nV.SetMaximumTableValue((float, float, float, float))\nC++: void SetMaximumTableValue(double a[4])\n\n"},
  {"GetMaximumTableValue", PyvtkWindowLevelLookupTable_GetMaximumTableValue, METH_VARARGS,
   "V.GetMaximumTableValue() -> (float, float, float, float)\nC++: double *GetMaximumTableValue()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkWindowLevelLookupTable_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkWindowLevelLookupTable", // tp_name
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
  PyvtkWindowLevelLookupTable_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWindowLevelLookupTable_StaticNew()
{
  return vtkWindowLevelLookupTable::New();
}

PyObject *PyvtkWindowLevelLookupTable_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkWindowLevelLookupTable_Type, PyvtkWindowLevelLookupTable_Methods,
    "vtkWindowLevelLookupTable",
 &PyvtkWindowLevelLookupTable_StaticNew);

  PyTypeObject *pytype = &PyvtkWindowLevelLookupTable_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkLookupTable_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWindowLevelLookupTable(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWindowLevelLookupTable_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWindowLevelLookupTable", o) != 0)
  {
    Py_DECREF(o);
  }

}

