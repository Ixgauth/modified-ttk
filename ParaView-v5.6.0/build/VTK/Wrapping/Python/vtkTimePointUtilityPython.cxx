// python wrapper for vtkTimePointUtility
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
#include "vtkTimePointUtility.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTimePointUtility(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTimePointUtility_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkTimePointUtility_Doc =
  "vtkTimePointUtility - performs common time operations\n\n"
  "Superclass: vtkObject\n\n"
  "vtkTimePointUtility is provides methods to perform common time\n"
  "operations.\n\n";


static PyObject *
PyvtkTimePointUtility_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTimePointUtility::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimePointUtility_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimePointUtility *op = static_cast<vtkTimePointUtility *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTimePointUtility::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimePointUtility_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTimePointUtility *tempr = vtkTimePointUtility::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimePointUtility_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimePointUtility *op = static_cast<vtkTimePointUtility *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTimePointUtility *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTimePointUtility::NewInstance());

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
PyvtkTimePointUtility_DateToTimePoint(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DateToTimePoint");

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    unsigned long long tempr = vtkTimePointUtility::DateToTimePoint(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimePointUtility_TimeToTimePoint(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TimeToTimePoint");

  int temp0;
  int temp1;
  int temp2;
  int temp3 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    unsigned long long tempr = vtkTimePointUtility::TimeToTimePoint(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimePointUtility_DateTimeToTimePoint(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DateTimeToTimePoint");

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    unsigned long long tempr = vtkTimePointUtility::DateTimeToTimePoint(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetDate(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDate");

  unsigned long long temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkTimePointUtility::GetDate(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetTime(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTime");

  unsigned long long temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    vtkTimePointUtility::GetTime(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetDateTime(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDateTime");

  unsigned long long temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  int temp7;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    vtkTimePointUtility::GetDateTime(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(6, temp6);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(7, temp7);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetYear(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetYear");

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTimePointUtility::GetYear(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetMonth(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMonth");

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTimePointUtility::GetMonth(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetDay(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDay");

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTimePointUtility::GetDay(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetHour(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetHour");

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTimePointUtility::GetHour(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetMinute(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMinute");

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTimePointUtility::GetMinute(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetSecond(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSecond");

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTimePointUtility::GetSecond(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetMillisecond(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMillisecond");

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTimePointUtility::GetMillisecond(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimePointUtility_ISO8601ToTimePoint(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ISO8601ToTimePoint");

  const char *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<bool> store1(2*size1);
  bool *temp1 = store1.Data();
  bool *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetArray(temp1, size1)))
  {
    ap.Save(temp1, save1, size1);

    unsigned long long tempr = vtkTimePointUtility::ISO8601ToTimePoint(temp0, temp1);

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimePointUtility_TimePointToISO8601(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TimePointToISO8601");

  unsigned long long temp0;
  int temp1 = vtkTimePointUtility::ISO8601_DATETIME_MILLIS;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    const char *tempr = vtkTimePointUtility::TimePointToISO8601(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTimePointUtility_Methods[] = {
  {"IsTypeOf", PyvtkTimePointUtility_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTimePointUtility_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTimePointUtility_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTimePointUtility\nC++: static vtkTimePointUtility *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTimePointUtility_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTimePointUtility\nC++: vtkTimePointUtility *NewInstance()\n\n"},
  {"DateToTimePoint", PyvtkTimePointUtility_DateToTimePoint, METH_VARARGS,
   "V.DateToTimePoint(int, int, int) -> int\nC++: static vtkTypeUInt64 DateToTimePoint(int year, int month,\n    int day)\n\nReturn the time point for 12:00am on a specified day.\n"},
  {"TimeToTimePoint", PyvtkTimePointUtility_TimeToTimePoint, METH_VARARGS,
   "V.TimeToTimePoint(int, int, int, int) -> int\nC++: static vtkTypeUInt64 TimeToTimePoint(int hour, int minute,\n    int second, int millis=0)\n\nReturn the time point for a time of day (the number of\nmilliseconds from 12:00am. The hour should be from 0-23.\n"},
  {"DateTimeToTimePoint", PyvtkTimePointUtility_DateTimeToTimePoint, METH_VARARGS,
   "V.DateTimeToTimePoint(int, int, int, int, int, int, int) -> int\nC++: static vtkTypeUInt64 DateTimeToTimePoint(int year, int month,\n     int day, int hour, int minute, int sec, int millis=0)\n\nReturn the time point for a date and time.\n"},
  {"GetDate", PyvtkTimePointUtility_GetDate, METH_VARARGS,
   "V.GetDate(int, int, int, int)\nC++: static void GetDate(vtkTypeUInt64 time, int &year,\n    int &month, int &day)\n\nRetrieve the year, month, and day of a time point. Everything but\nthe first argument are output parameters.\n"},
  {"GetTime", PyvtkTimePointUtility_GetTime, METH_VARARGS,
   "V.GetTime(int, int, int, int, int)\nC++: static void GetTime(vtkTypeUInt64 time, int &hour,\n    int &minute, int &second, int &millis)\n\nRetrieve the hour, minute, second, and milliseconds of a time\npoint. Everything but the first argument are output parameters.\n"},
  {"GetDateTime", PyvtkTimePointUtility_GetDateTime, METH_VARARGS,
   "V.GetDateTime(int, int, int, int, int, int, int, int)\nC++: static void GetDateTime(vtkTypeUInt64 time, int &year,\n    int &month, int &day, int &hour, int &minute, int &second,\n    int &millis)\n\nRetrieve the date and time of a time point. Everything but the\nfirst argument are output parameters.\n"},
  {"GetYear", PyvtkTimePointUtility_GetYear, METH_VARARGS,
   "V.GetYear(int) -> int\nC++: static int GetYear(vtkTypeUInt64 time)\n\nRetrieve the year from a time point.\n"},
  {"GetMonth", PyvtkTimePointUtility_GetMonth, METH_VARARGS,
   "V.GetMonth(int) -> int\nC++: static int GetMonth(vtkTypeUInt64 time)\n\nRetrieve the month from a time point.\n"},
  {"GetDay", PyvtkTimePointUtility_GetDay, METH_VARARGS,
   "V.GetDay(int) -> int\nC++: static int GetDay(vtkTypeUInt64 time)\n\nRetrieve the day of the month from a time point.\n"},
  {"GetHour", PyvtkTimePointUtility_GetHour, METH_VARARGS,
   "V.GetHour(int) -> int\nC++: static int GetHour(vtkTypeUInt64 time)\n\nRetrieve the hour of the day from the time point.\n"},
  {"GetMinute", PyvtkTimePointUtility_GetMinute, METH_VARARGS,
   "V.GetMinute(int) -> int\nC++: static int GetMinute(vtkTypeUInt64 time)\n\nRetrieve the number of minutes from the start of the last hour.\n"},
  {"GetSecond", PyvtkTimePointUtility_GetSecond, METH_VARARGS,
   "V.GetSecond(int) -> int\nC++: static int GetSecond(vtkTypeUInt64 time)\n\nRetrieve the number of seconds from the start of the last minute.\n"},
  {"GetMillisecond", PyvtkTimePointUtility_GetMillisecond, METH_VARARGS,
   "V.GetMillisecond(int) -> int\nC++: static int GetMillisecond(vtkTypeUInt64 time)\n\nRetrieve the milliseconds from the start of the last second.\n"},
  {"ISO8601ToTimePoint", PyvtkTimePointUtility_ISO8601ToTimePoint, METH_VARARGS,
   "V.ISO8601ToTimePoint(string, [bool, ...]) -> int\nC++: static vtkTypeUInt64 ISO8601ToTimePoint(const char *str,\n    bool *ok=nullptr)\n\nConverts a ISO8601 string into a VTK timepoint. The string must\nfollow one of the ISO8601 formats described in ToISO8601.  To\ncheck for a valid format, pass a bool* as the second argument. \nThe value will be set to true if the string was parsed\nsuccessfully, false otherwise.\n"},
  {"TimePointToISO8601", PyvtkTimePointUtility_TimePointToISO8601, METH_VARARGS,
   "V.TimePointToISO8601(int, int) -> string\nC++: static const char *TimePointToISO8601(vtkTypeUInt64,\n    int format=vtkTimePointUtility::ISO8601_DATETIME_MILLIS)\n\nConverts a VTK timepoint into one of the following ISO8601\nformats.  The default format is ISO8601_DATETIME_MILLIS.\n\n*\n\n* Type                      Format / Example\n* 0 ISO8601_DATETIME_MILLIS [YYYY]-[MM]-[DD]T[hh]:[mm]:[ss].[SSS]\n* 2006-01-02T03:04:05.678\n* 1 ISO8601_DATETIME        [YYYY]-[MM]-[DD]T[hh]:[mm]:[ss]\n* 2006-01-02T03:04:05\n* 2 ISO8601_DATE            [YYYY]-[MM]-[DD]\n* 2006-01-02\n* 3 ISO8601_TIME_MILLIS     [hh]:[mm]:[ss].[SSS]\n* 03:04:05.678\n* 4 ISO8601_TIME            [hh]:[mm]:[ss]\n* 03:04:05\n* \n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTimePointUtility_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkTimePointUtility", // tp_name
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
  PyvtkTimePointUtility_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTimePointUtility_StaticNew()
{
  return vtkTimePointUtility::New();
}

PyObject *PyvtkTimePointUtility_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTimePointUtility_Type, PyvtkTimePointUtility_Methods,
    "vtkTimePointUtility",
 &PyvtkTimePointUtility_StaticNew);

  PyTypeObject *pytype = &PyvtkTimePointUtility_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "ISO8601_DATETIME_MILLIS", vtkTimePointUtility::ISO8601_DATETIME_MILLIS },
        { "ISO8601_DATETIME", vtkTimePointUtility::ISO8601_DATETIME },
        { "ISO8601_DATE", vtkTimePointUtility::ISO8601_DATE },
        { "ISO8601_TIME_MILLIS", vtkTimePointUtility::ISO8601_TIME_MILLIS },
        { "ISO8601_TIME", vtkTimePointUtility::ISO8601_TIME },
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

void PyVTKAddFile_vtkTimePointUtility(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTimePointUtility_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTimePointUtility", o) != 0)
  {
    Py_DECREF(o);
  }

}

