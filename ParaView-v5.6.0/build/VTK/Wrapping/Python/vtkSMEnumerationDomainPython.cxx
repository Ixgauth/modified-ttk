// python wrapper for vtkSMEnumerationDomain
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
#include "vtkSMEnumerationDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMEnumerationDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMEnumerationDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMDomain_ClassNew
extern "C" { PyObject *PyvtkSMDomain_ClassNew(); }
#define DECLARED_PyvtkSMDomain_ClassNew
#endif

static const char *PyvtkSMEnumerationDomain_Doc =
  "vtkSMEnumerationDomain - list of integers with associated strings\n\n"
  "Superclass: vtkSMDomain\n\n"
  "vtkSMEnumerationDomain represents an enumeration of integer values\n"
  "with associated descriptive strings.\n\n"
  "A typical enumeration domain is described as follows in the\n"
  "servermanager configuration xmls.\n\n"
  "{xml}\n\n\n"
  " <IntVectorProperty ...>\n"
  "   <EnumerationDomain name=\"enum\">\n"
  "     <Entry text=\"PNG\" value=\"0\"/>\n"
  "     <Entry text=\"JPEG\" value=\"1\"/>\n"
  "     ...\n"
  "   \n"
  " \n\n"
  "Where, `value` is the integral value to use to set the element on the\n"
  "property and `text` is the descriptive text used in UI and Python\n"
  "script.\n\n"
  "Starting with ParaView 5.5, the `info` attribute is supported on an\n"
  "`Entry` The value is an additional qualifier for the entry that used\n"
  "in UI to explain the item e.g.\n\n"
  "{xml}\n\n\n"
  " <IntVectorProperty name=\"Quality\">\n"
  "   <EnumerationDomain name=\"enum\">\n"
  "     <Entry text=\"one\" value=\"0\" info=\"no compression\" />\n"
  "     ...\n"
  "     <Entry text=\"ten\" value=\"10\" info=\"max compression\" />\n"
  "     ...\n"
  "   \n"
  " *\n\n"
  "If `info` is specified and non-empty, then the UI will show that text\n"
  "in the combo-box rendered in addition to the `text`. `info` has no\n"
  "effect on  the Python API i.e.\n\n"
  "{python}\n\n"
  "# either of the following is acceptable, note how `info` has no\n"
  "  effect. writer.Quality = \"ten\"\n"
  "# or writer.Quality = 10\n\n";


static PyObject *
PyvtkSMEnumerationDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMEnumerationDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMEnumerationDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMEnumerationDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMEnumerationDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMEnumerationDomain *tempr = vtkSMEnumerationDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMEnumerationDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMEnumerationDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMEnumerationDomain::NewInstance());

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
PyvtkSMEnumerationDomain_IsInDomain_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0) :
      op->vtkSMEnumerationDomain::IsInDomain(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMEnumerationDomain_IsInDomain_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0, temp1) :
      op->vtkSMEnumerationDomain::IsInDomain(temp0, temp1));

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
PyvtkSMEnumerationDomain_IsInDomain(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMEnumerationDomain_IsInDomain_s1(self, args);
    case 2:
      return PyvtkSMEnumerationDomain_IsInDomain_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsInDomain");
  return nullptr;
}



static PyObject *
PyvtkSMEnumerationDomain_GetNumberOfEntries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEntries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfEntries() :
      op->vtkSMEnumerationDomain::GetNumberOfEntries());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMEnumerationDomain_GetEntryValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEntryValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEntryValue(temp0) :
      op->vtkSMEnumerationDomain::GetEntryValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMEnumerationDomain_GetEntryValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEntryValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetEntryValue(temp0, temp1) :
      op->vtkSMEnumerationDomain::GetEntryValue(temp0, temp1));

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
PyvtkSMEnumerationDomain_GetEntryValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMEnumerationDomain_GetEntryValue_s1(self, args);
    case 2:
      return PyvtkSMEnumerationDomain_GetEntryValue_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetEntryValue");
  return nullptr;
}



static PyObject *
PyvtkSMEnumerationDomain_GetEntryText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEntryText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEntryText(temp0) :
      op->vtkSMEnumerationDomain::GetEntryText(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMEnumerationDomain_GetEntryTextForValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEntryTextForValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEntryTextForValue(temp0) :
      op->vtkSMEnumerationDomain::GetEntryTextForValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMEnumerationDomain_HasEntryText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasEntryText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->HasEntryText(temp0) :
      op->vtkSMEnumerationDomain::HasEntryText(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMEnumerationDomain_GetEntryValueForText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEntryValueForText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEntryValueForText(temp0) :
      op->vtkSMEnumerationDomain::GetEntryValueForText(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMEnumerationDomain_GetInfoText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInfoText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetInfoText(temp0) :
      op->vtkSMEnumerationDomain::GetInfoText(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMEnumerationDomain_AddEntry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->AddEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMEnumerationDomain::AddEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMEnumerationDomain_RemoveAllEntries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllEntries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllEntries();
    }
    else
    {
      op->vtkSMEnumerationDomain::RemoveAllEntries();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMEnumerationDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    if (ap.IsBound())
    {
      op->Update(temp0);
    }
    else
    {
      op->vtkSMEnumerationDomain::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMEnumerationDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMEnumerationDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMEnumerationDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMEnumerationDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMEnumerationDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMEnumerationDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMEnumerationDomain\nC++: static vtkSMEnumerationDomain *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMEnumerationDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMEnumerationDomain\nC++: vtkSMEnumerationDomain *NewInstance()\n\n"},
  {"IsInDomain", PyvtkSMEnumerationDomain_IsInDomain, METH_VARARGS,
   "V.IsInDomain(vtkSMProperty) -> int\nC++: int IsInDomain(vtkSMProperty *property) override;\nV.IsInDomain(int, int) -> int\nC++: int IsInDomain(int val, unsigned int &idx)\n\nReturns true if the value of the property is in the domain. The\nproperty has to be a vtkSMIntVectorProperty. If all vector values\nare in the domain, it returns 1. It returns 0 otherwise.\n"},
  {"GetNumberOfEntries", PyvtkSMEnumerationDomain_GetNumberOfEntries, METH_VARARGS,
   "V.GetNumberOfEntries() -> int\nC++: unsigned int GetNumberOfEntries()\n\nReturns the number of entries in the enumeration.\n"},
  {"GetEntryValue", PyvtkSMEnumerationDomain_GetEntryValue, METH_VARARGS,
   "V.GetEntryValue(int) -> int\nC++: int GetEntryValue(unsigned int idx)\nV.GetEntryValue(string, int) -> int\nC++: int GetEntryValue(const char *text, int &valid)\n\nReturns the integer value of an enumeration entry.\n"},
  {"GetEntryText", PyvtkSMEnumerationDomain_GetEntryText, METH_VARARGS,
   "V.GetEntryText(int) -> string\nC++: const char *GetEntryText(unsigned int idx)\n\nReturns the descriptive string of an enumeration entry.\n"},
  {"GetEntryTextForValue", PyvtkSMEnumerationDomain_GetEntryTextForValue, METH_VARARGS,
   "V.GetEntryTextForValue(int) -> string\nC++: const char *GetEntryTextForValue(int value)\n\nReturns the text for an enumeration value.\n"},
  {"HasEntryText", PyvtkSMEnumerationDomain_HasEntryText, METH_VARARGS,
   "V.HasEntryText(string) -> int\nC++: int HasEntryText(const char *text)\n\nReturn 1 is the text is present in the enumeration, otherwise 0.\n"},
  {"GetEntryValueForText", PyvtkSMEnumerationDomain_GetEntryValueForText, METH_VARARGS,
   "V.GetEntryValueForText(string) -> int\nC++: int GetEntryValueForText(const char *text)\n\nGet the value for an enumeration text. The return value is valid\nonly is HasEntryText() returns 1.\n"},
  {"GetInfoText", PyvtkSMEnumerationDomain_GetInfoText, METH_VARARGS,
   "V.GetInfoText(int) -> string\nC++: const char *GetInfoText(unsigned int idx)\n\nReturns the `info` text for an enumeration entry.\n\n@param[in] idx - index for the entry (not to confused with\n    `value`).\n@returns info-text, if non-empty else `nullptr`.\n"},
  {"AddEntry", PyvtkSMEnumerationDomain_AddEntry, METH_VARARGS,
   "V.AddEntry(string, int, string)\nC++: void AddEntry(const char *text, int value,\n    const char *info=nullptr)\n\nAdd a new enumeration entry. text cannot be null.\n"},
  {"RemoveAllEntries", PyvtkSMEnumerationDomain_RemoveAllEntries, METH_VARARGS,
   "V.RemoveAllEntries()\nC++: void RemoveAllEntries()\n\nClear all entries.\n"},
  {"Update", PyvtkSMEnumerationDomain_Update, METH_VARARGS,
   "V.Update(vtkSMProperty)\nC++: void Update(vtkSMProperty *property) override;\n\nUpdate self based on the \"unchecked\" values of all required\nproperties. Overwritten by sub-classes.\n"},
  {"SetDefaultValues", PyvtkSMEnumerationDomain_SetDefaultValues, METH_VARARGS,
   "V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values) override;\n\nOverridden to ensure that the property's default value is valid\nfor the enumeration, if not it will be set to the first\nenumeration value.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMEnumerationDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMEnumerationDomain", // tp_name
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
  PyvtkSMEnumerationDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMEnumerationDomain_StaticNew()
{
  return vtkSMEnumerationDomain::New();
}

PyObject *PyvtkSMEnumerationDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMEnumerationDomain_Type, PyvtkSMEnumerationDomain_Methods,
    "vtkSMEnumerationDomain",
 &PyvtkSMEnumerationDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMEnumerationDomain_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMDomain_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMEnumerationDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMEnumerationDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMEnumerationDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

