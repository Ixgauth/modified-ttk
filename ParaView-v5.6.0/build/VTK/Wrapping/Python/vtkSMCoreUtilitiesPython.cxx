// python wrapper for vtkSMCoreUtilities
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
#include "vtkStdString.h"
#include "vtkSMCoreUtilities.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMCoreUtilities(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMCoreUtilities_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSMCoreUtilities_Doc =
  "vtkSMCoreUtilities - collection of utilities.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkSMCoreUtilities provides miscellaneous utility functions.\n\n";


static PyObject *
PyvtkSMCoreUtilities_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMCoreUtilities::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCoreUtilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCoreUtilities *op = static_cast<vtkSMCoreUtilities *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMCoreUtilities::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCoreUtilities_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMCoreUtilities *tempr = vtkSMCoreUtilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCoreUtilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCoreUtilities *op = static_cast<vtkSMCoreUtilities *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMCoreUtilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMCoreUtilities::NewInstance());

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
PyvtkSMCoreUtilities_GetFileNameProperty(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFileNameProperty");

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    const char *tempr = vtkSMCoreUtilities::GetFileNameProperty(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCoreUtilities_SanitizeName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SanitizeName");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString tempr = vtkSMCoreUtilities::SanitizeName(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCoreUtilities_AdjustRangeForLog_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "AdjustRangeForLog");

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    bool tempr = vtkSMCoreUtilities::AdjustRangeForLog(temp0);

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
PyvtkSMCoreUtilities_AdjustRangeForLog_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "AdjustRangeForLog");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = vtkSMCoreUtilities::AdjustRangeForLog(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMCoreUtilities_AdjustRangeForLog(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMCoreUtilities_AdjustRangeForLog_s1(self, args);
    case 2:
      return PyvtkSMCoreUtilities_AdjustRangeForLog_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AdjustRangeForLog");
  return nullptr;
}



static PyObject *
PyvtkSMCoreUtilities_AdjustRange_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "AdjustRange");

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    bool tempr = vtkSMCoreUtilities::AdjustRange(temp0);

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
PyvtkSMCoreUtilities_AdjustRange_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "AdjustRange");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = vtkSMCoreUtilities::AdjustRange(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMCoreUtilities_AdjustRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMCoreUtilities_AdjustRange_s1(self, args);
    case 2:
      return PyvtkSMCoreUtilities_AdjustRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AdjustRange");
  return nullptr;
}



static PyObject *
PyvtkSMCoreUtilities_AlmostEqual_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "AlmostEqual");

  const size_t size0 = 2;
  double temp0[2];
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    bool tempr = vtkSMCoreUtilities::AlmostEqual(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMCoreUtilities_AlmostEqual_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "AlmostEqual");

  double temp0;
  double temp1;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    bool tempr = vtkSMCoreUtilities::AlmostEqual(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMCoreUtilities_AlmostEqual(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMCoreUtilities_AlmostEqual_s1(self, args);
    case 3:
      return PyvtkSMCoreUtilities_AlmostEqual_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AlmostEqual");
  return nullptr;
}



static PyObject *
PyvtkSMCoreUtilities_GetInputPropertyName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInputPropertyName");

  vtkSMProxy *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    const char *tempr = vtkSMCoreUtilities::GetInputPropertyName(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCoreUtilities_GetStringForCellType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringForCellType");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkSMCoreUtilities::GetStringForCellType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMCoreUtilities_Methods[] = {
  {"IsTypeOf", PyvtkSMCoreUtilities_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMCoreUtilities_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMCoreUtilities_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMCoreUtilities\nC++: static vtkSMCoreUtilities *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMCoreUtilities_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMCoreUtilities\nC++: vtkSMCoreUtilities *NewInstance()\n\n"},
  {"GetFileNameProperty", PyvtkSMCoreUtilities_GetFileNameProperty, METH_VARARGS,
   "V.GetFileNameProperty(vtkSMProxy) -> string\nC++: static const char *GetFileNameProperty(vtkSMProxy *)\n\nGiven a proxy (or proxy prototype), returns the name of the\nproperty that ParaView application will be use as the default\nFileName property. Returns the name of the property or NULL when\nno such property is found.\n"},
  {"SanitizeName", PyvtkSMCoreUtilities_SanitizeName, METH_VARARGS,
   "V.SanitizeName(string) -> string\nC++: static vtkStdString SanitizeName(const char *)\n\nSanitize a label/name to be remove spaces, delimiters etc.\n"},
  {"AdjustRangeForLog", PyvtkSMCoreUtilities_AdjustRangeForLog, METH_VARARGS,
   "V.AdjustRangeForLog([float, float]) -> bool\nC++: static bool AdjustRangeForLog(double range[2])\nV.AdjustRangeForLog(float, float) -> bool\nC++: static bool AdjustRangeForLog(double &rmin, double &rmax)\n\nGiven a range, converts it to be a valid range to switch to log\nspace. If the range is changed, returns true, otherwise returns\nfalse.\n"},
  {"AdjustRange", PyvtkSMCoreUtilities_AdjustRange, METH_VARARGS,
   "V.AdjustRange([float, float]) -> bool\nC++: static bool AdjustRange(double range[2])\nV.AdjustRange(float, float) -> bool\nC++: static bool AdjustRange(double &rmin, double &rmax)\n\nAdjust the given range to make it suitable for use with color\nmaps. The current logic (which may change in future) does the\nfollowing:\n1. If the range is invalid i.e range[1] < range[0], simply\n   returns `false` and keeps the range unchanged.\n2. If the range[0] == range[1] (using logic to handle nearly\n   similar floating points numbers), then the range[1] is\n   adjusted to be such that range[1] > range[0p].\n3. If range[0] < range[1] (beyond the margin of error checked for\nin (2), then range is left unchanged.\n\n@returns `true` if the range was changed, `false` is the range\n    was left\nunchanged.\n"},
  {"AlmostEqual", PyvtkSMCoreUtilities_AlmostEqual, METH_VARARGS,
   "V.AlmostEqual((float, float), int) -> bool\nC++: static bool AlmostEqual(const double range[2], int ulpsDiff)\nV.AlmostEqual(float, float, int) -> bool\nC++: static bool AlmostEqual(double rmin, double rmax,\n    int ulpsDiff)\n\nCompares val1 and val2 and returns true is the two numbers are\nwithinulpsDiff ULPs (units in last place) from each other.\n"},
  {"GetInputPropertyName", PyvtkSMCoreUtilities_GetInputPropertyName, METH_VARARGS,
   "V.GetInputPropertyName(vtkSMProxy, int) -> string\nC++: static const char *GetInputPropertyName(vtkSMProxy *proxy,\n    int port=0)\n\nGiven a proxy and a port number get the name of the input.\n"},
  {"GetStringForCellType", PyvtkSMCoreUtilities_GetStringForCellType, METH_VARARGS,
   "V.GetStringForCellType(int) -> string\nC++: static const char *GetStringForCellType(int cellType)\n\nGiven a VTK cell type value from the enum in vtkCellTypes.h,\nreturns a string describing that cell type for use if ParaView's\nGUI. For example it pasesd VTK_TRIANGLE it will return\n\"Triangle\". If an unknown cell type is passed to this it returns\nthe string \"Unknown\".\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMCoreUtilities_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMCoreUtilities", // tp_name
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
  PyvtkSMCoreUtilities_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMCoreUtilities_StaticNew()
{
  return vtkSMCoreUtilities::New();
}

PyObject *PyvtkSMCoreUtilities_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMCoreUtilities_Type, PyvtkSMCoreUtilities_Methods,
    "vtkSMCoreUtilities",
 &PyvtkSMCoreUtilities_StaticNew);

  PyTypeObject *pytype = &PyvtkSMCoreUtilities_Type;

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

void PyVTKAddFile_vtkSMCoreUtilities(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMCoreUtilities_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMCoreUtilities", o) != 0)
  {
    Py_DECREF(o);
  }

}

