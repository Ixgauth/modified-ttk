// python wrapper for vtkSplitColumnComponents
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
#include "vtkSplitColumnComponents.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSplitColumnComponents(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSplitColumnComponents_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkSplitColumnComponents_Doc =
  "vtkSplitColumnComponents - split multicomponent table columns\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "Splits any columns in a table that have more than one component into\n"
  "individual columns. Single component columns are passed through\n"
  "without any data duplication. NamingMode can be used to control how\n"
  "columns with multiple components are labelled in the output, e.g., if\n"
  "column names \"Points\" had three components this column would be split\n"
  "into \"Points (0)\", \"Points (1)\", and Points (2)\" when NamingMode is\n"
  "NUMBERS_WITH_PARENS, into Points_0, Points_1, and Points_2 when\n"
  "NamingMode is NUMBERS_WITH_UNDERSCORES, into \"Points (X)\", \"Points\n"
  "(Y)\", and \"Points (Z)\" when NamingMode is NAMES_WITH_PARENS, and into\n"
  "Points_X, Points_Y, and Points_Z when NamingMode is\n"
  "NAMES_WITH_UNDERSCORES.\n\n";


static PyObject *
PyvtkSplitColumnComponents_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSplitColumnComponents::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSplitColumnComponents::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSplitColumnComponents *tempr = vtkSplitColumnComponents::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSplitColumnComponents *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSplitColumnComponents::NewInstance());

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
PyvtkSplitColumnComponents_SetCalculateMagnitudes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCalculateMagnitudes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCalculateMagnitudes(temp0);
    }
    else
    {
      op->vtkSplitColumnComponents::SetCalculateMagnitudes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_GetCalculateMagnitudes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCalculateMagnitudes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCalculateMagnitudes() :
      op->vtkSplitColumnComponents::GetCalculateMagnitudes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_SetNamingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNamingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNamingMode(temp0);
    }
    else
    {
      op->vtkSplitColumnComponents::SetNamingMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_GetNamingModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNamingModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNamingModeMinValue() :
      op->vtkSplitColumnComponents::GetNamingModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_GetNamingModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNamingModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNamingModeMaxValue() :
      op->vtkSplitColumnComponents::GetNamingModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_SetNamingModeToNumberWithParens(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNamingModeToNumberWithParens");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNamingModeToNumberWithParens();
    }
    else
    {
      op->vtkSplitColumnComponents::SetNamingModeToNumberWithParens();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_SetNamingModeToNumberWithUnderscores(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNamingModeToNumberWithUnderscores");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNamingModeToNumberWithUnderscores();
    }
    else
    {
      op->vtkSplitColumnComponents::SetNamingModeToNumberWithUnderscores();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_SetNamingModeToNamesWithParens(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNamingModeToNamesWithParens");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNamingModeToNamesWithParens();
    }
    else
    {
      op->vtkSplitColumnComponents::SetNamingModeToNamesWithParens();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_SetNamingModeToNamesWithUnderscores(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNamingModeToNamesWithUnderscores");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNamingModeToNamesWithUnderscores();
    }
    else
    {
      op->vtkSplitColumnComponents::SetNamingModeToNamesWithUnderscores();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_GetNamingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNamingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNamingMode() :
      op->vtkSplitColumnComponents::GetNamingMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSplitColumnComponents_Methods[] = {
  {"IsTypeOf", PyvtkSplitColumnComponents_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSplitColumnComponents_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSplitColumnComponents_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSplitColumnComponents\nC++: static vtkSplitColumnComponents *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSplitColumnComponents_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSplitColumnComponents\nC++: vtkSplitColumnComponents *NewInstance()\n\n"},
  {"SetCalculateMagnitudes", PyvtkSplitColumnComponents_SetCalculateMagnitudes, METH_VARARGS,
   "V.SetCalculateMagnitudes(bool)\nC++: virtual void SetCalculateMagnitudes(bool _arg)\n\nIf on this filter will calculate an additional magnitude column\nfor all columns it splits with two or more components. Default is\non.\n"},
  {"GetCalculateMagnitudes", PyvtkSplitColumnComponents_GetCalculateMagnitudes, METH_VARARGS,
   "V.GetCalculateMagnitudes() -> bool\nC++: virtual bool GetCalculateMagnitudes()\n\nIf on this filter will calculate an additional magnitude column\nfor all columns it splits with two or more components. Default is\non.\n"},
  {"SetNamingMode", PyvtkSplitColumnComponents_SetNamingMode, METH_VARARGS,
   "V.SetNamingMode(int)\nC++: virtual void SetNamingMode(int _arg)\n\nGet/Set the array naming mode. Description is\nNUMBERS_WITH_PARENS.\n"},
  {"GetNamingModeMinValue", PyvtkSplitColumnComponents_GetNamingModeMinValue, METH_VARARGS,
   "V.GetNamingModeMinValue() -> int\nC++: virtual int GetNamingModeMinValue()\n\nGet/Set the array naming mode. Description is\nNUMBERS_WITH_PARENS.\n"},
  {"GetNamingModeMaxValue", PyvtkSplitColumnComponents_GetNamingModeMaxValue, METH_VARARGS,
   "V.GetNamingModeMaxValue() -> int\nC++: virtual int GetNamingModeMaxValue()\n\nGet/Set the array naming mode. Description is\nNUMBERS_WITH_PARENS.\n"},
  {"SetNamingModeToNumberWithParens", PyvtkSplitColumnComponents_SetNamingModeToNumberWithParens, METH_VARARGS,
   "V.SetNamingModeToNumberWithParens()\nC++: void SetNamingModeToNumberWithParens()\n\nGet/Set the array naming mode. Description is\nNUMBERS_WITH_PARENS.\n"},
  {"SetNamingModeToNumberWithUnderscores", PyvtkSplitColumnComponents_SetNamingModeToNumberWithUnderscores, METH_VARARGS,
   "V.SetNamingModeToNumberWithUnderscores()\nC++: void SetNamingModeToNumberWithUnderscores()\n\nGet/Set the array naming mode. Description is\nNUMBERS_WITH_PARENS.\n"},
  {"SetNamingModeToNamesWithParens", PyvtkSplitColumnComponents_SetNamingModeToNamesWithParens, METH_VARARGS,
   "V.SetNamingModeToNamesWithParens()\nC++: void SetNamingModeToNamesWithParens()\n\nGet/Set the array naming mode. Description is\nNUMBERS_WITH_PARENS.\n"},
  {"SetNamingModeToNamesWithUnderscores", PyvtkSplitColumnComponents_SetNamingModeToNamesWithUnderscores, METH_VARARGS,
   "V.SetNamingModeToNamesWithUnderscores()\nC++: void SetNamingModeToNamesWithUnderscores()\n\nGet/Set the array naming mode. Description is\nNUMBERS_WITH_PARENS.\n"},
  {"GetNamingMode", PyvtkSplitColumnComponents_GetNamingMode, METH_VARARGS,
   "V.GetNamingMode() -> int\nC++: virtual int GetNamingMode()\n\nGet/Set the array naming mode. Description is\nNUMBERS_WITH_PARENS.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSplitColumnComponents_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkSplitColumnComponents", // tp_name
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
  PyvtkSplitColumnComponents_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSplitColumnComponents_StaticNew()
{
  return vtkSplitColumnComponents::New();
}

PyObject *PyvtkSplitColumnComponents_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSplitColumnComponents_Type, PyvtkSplitColumnComponents_Methods,
    "vtkSplitColumnComponents",
 &PyvtkSplitColumnComponents_StaticNew);

  PyTypeObject *pytype = &PyvtkSplitColumnComponents_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTableAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "NUMBERS_WITH_PARENS", vtkSplitColumnComponents::NUMBERS_WITH_PARENS },
        { "NAMES_WITH_PARENS", vtkSplitColumnComponents::NAMES_WITH_PARENS },
        { "NUMBERS_WITH_UNDERSCORES", vtkSplitColumnComponents::NUMBERS_WITH_UNDERSCORES },
        { "NAMES_WITH_UNDERSCORES", vtkSplitColumnComponents::NAMES_WITH_UNDERSCORES },
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

void PyVTKAddFile_vtkSplitColumnComponents(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSplitColumnComponents_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSplitColumnComponents", o) != 0)
  {
    Py_DECREF(o);
  }

}

