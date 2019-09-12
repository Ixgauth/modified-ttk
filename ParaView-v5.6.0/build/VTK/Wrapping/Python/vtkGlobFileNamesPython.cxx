// python wrapper for vtkGlobFileNames
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
#include "vtkGlobFileNames.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGlobFileNames(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGlobFileNames_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkGlobFileNames_Doc =
  "vtkGlobFileNames - find files that match a wildcard pattern\n\n"
  "Superclass: vtkObject\n\n"
  "vtkGlobFileNames is a utility for finding files and directories that\n"
  "match a given wildcard pattern.  Allowed wildcards are\n"
  "*, ?, [...], [!...]. The \"*\" wildcard matches any substring, the \"?\"\n"
  "   matches any single character, the [...] matches any one of the\n"
  "   enclosed characters, e.g. [abc] will match one of a, b, or c,\n"
  "   while [0-9] will match any digit, and [!...] will match any single\n"
  "   character except for the ones within the brackets.  Special\n"
  "   treatment is given to \"/\" (or \"\\\" on Windows) because these are\n"
  "   path separators.  These are never matched by a wildcard, they are\n"
  "   only matched with another file separator.\n"
  "@warning\n"
  "This function performs case-sensitive matches on UNIX and\n"
  "case-insensitive matches on Windows.\n"
  "@sa\n"
  "vtkDirectory\n\n";


static PyObject *
PyvtkGlobFileNames_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGlobFileNames::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGlobFileNames::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGlobFileNames *tempr = vtkGlobFileNames::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGlobFileNames *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGlobFileNames::NewInstance());

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
PyvtkGlobFileNames_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkGlobFileNames::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_SetDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDirectory(temp0);
    }
    else
    {
      op->vtkGlobFileNames::SetDirectory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_GetDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDirectory() :
      op->vtkGlobFileNames::GetDirectory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_AddFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->AddFileNames(temp0) :
      op->vtkGlobFileNames::AddFileNames(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_SetRecurse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRecurse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRecurse(temp0);
    }
    else
    {
      op->vtkGlobFileNames::SetRecurse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_RecurseOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecurseOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RecurseOn();
    }
    else
    {
      op->vtkGlobFileNames::RecurseOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_RecurseOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecurseOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RecurseOff();
    }
    else
    {
      op->vtkGlobFileNames::RecurseOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_GetRecurse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecurse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRecurse() :
      op->vtkGlobFileNames::GetRecurse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_GetNumberOfFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFileNames() :
      op->vtkGlobFileNames::GetNumberOfFileNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_GetNthFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNthFileName(temp0) :
      op->vtkGlobFileNames::GetNthFileName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_GetFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetFileNames() :
      op->vtkGlobFileNames::GetFileNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGlobFileNames_Methods[] = {
  {"IsTypeOf", PyvtkGlobFileNames_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn the class name as a string.\n"},
  {"IsA", PyvtkGlobFileNames_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn the class name as a string.\n"},
  {"SafeDownCast", PyvtkGlobFileNames_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGlobFileNames\nC++: static vtkGlobFileNames *SafeDownCast(vtkObjectBase *o)\n\nReturn the class name as a string.\n"},
  {"NewInstance", PyvtkGlobFileNames_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGlobFileNames\nC++: vtkGlobFileNames *NewInstance()\n\nReturn the class name as a string.\n"},
  {"Reset", PyvtkGlobFileNames_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nReset the glob by clearing the list of output filenames.\n"},
  {"SetDirectory", PyvtkGlobFileNames_SetDirectory, METH_VARARGS,
   "V.SetDirectory(string)\nC++: virtual void SetDirectory(const char *_arg)\n\nSet the directory in which to perform the glob.  If this is not\nset, then the current directory will be used.  Also, if you use a\nglob pattern that contains absolute path (one that starts with\n\"/\" or a drive letter) then that absolute path will be used and\nDirectory will be ignored.\n"},
  {"GetDirectory", PyvtkGlobFileNames_GetDirectory, METH_VARARGS,
   "V.GetDirectory() -> string\nC++: virtual char *GetDirectory()\n\nSet the directory in which to perform the glob.  If this is not\nset, then the current directory will be used.  Also, if you use a\nglob pattern that contains absolute path (one that starts with\n\"/\" or a drive letter) then that absolute path will be used and\nDirectory will be ignored.\n"},
  {"AddFileNames", PyvtkGlobFileNames_AddFileNames, METH_VARARGS,
   "V.AddFileNames(string) -> int\nC++: int AddFileNames(const char *pattern)\n\nSearch for all files that match the given expression, sort them,\nand add them to the output.  This method can be called repeatedly\nto add files matching additional patterns. Returns 1 if\nsuccessful, otherwise returns zero.\n"},
  {"SetRecurse", PyvtkGlobFileNames_SetRecurse, METH_VARARGS,
   "V.SetRecurse(int)\nC++: virtual void SetRecurse(vtkTypeBool _arg)\n\nRecurse into subdirectories.\n"},
  {"RecurseOn", PyvtkGlobFileNames_RecurseOn, METH_VARARGS,
   "V.RecurseOn()\nC++: virtual void RecurseOn()\n\nRecurse into subdirectories.\n"},
  {"RecurseOff", PyvtkGlobFileNames_RecurseOff, METH_VARARGS,
   "V.RecurseOff()\nC++: virtual void RecurseOff()\n\nRecurse into subdirectories.\n"},
  {"GetRecurse", PyvtkGlobFileNames_GetRecurse, METH_VARARGS,
   "V.GetRecurse() -> int\nC++: virtual vtkTypeBool GetRecurse()\n\nRecurse into subdirectories.\n"},
  {"GetNumberOfFileNames", PyvtkGlobFileNames_GetNumberOfFileNames, METH_VARARGS,
   "V.GetNumberOfFileNames() -> int\nC++: int GetNumberOfFileNames()\n\nReturn the number of files found.\n"},
  {"GetNthFileName", PyvtkGlobFileNames_GetNthFileName, METH_VARARGS,
   "V.GetNthFileName(int) -> string\nC++: const char *GetNthFileName(int index)\n\nReturn the file at the given index, the indexing is 0 based.\n"},
  {"GetFileNames", PyvtkGlobFileNames_GetFileNames, METH_VARARGS,
   "V.GetFileNames() -> vtkStringArray\nC++: virtual vtkStringArray *GetFileNames()\n\nGet an array that contains all the file names.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGlobFileNames_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOCorePython.vtkGlobFileNames", // tp_name
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
  PyvtkGlobFileNames_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGlobFileNames_StaticNew()
{
  return vtkGlobFileNames::New();
}

PyObject *PyvtkGlobFileNames_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGlobFileNames_Type, PyvtkGlobFileNames_Methods,
    "vtkGlobFileNames",
 &PyvtkGlobFileNames_StaticNew);

  PyTypeObject *pytype = &PyvtkGlobFileNames_Type;

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

void PyVTKAddFile_vtkGlobFileNames(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGlobFileNames_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGlobFileNames", o) != 0)
  {
    Py_DECREF(o);
  }

}

