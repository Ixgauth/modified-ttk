// python wrapper for vtkFileSequenceParser
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
#include "vtkFileSequenceParser.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFileSequenceParser(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFileSequenceParser_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkFileSequenceParser_Doc =
  "vtkFileSequenceParser - Parses out the base file name of a file\nsequence and also the specific index of the given file.\n\n"
  "Superclass: vtkObject\n\n"
  "Given a file name (without path). I will extract the base portion of\n"
  "the file name that is common to all the files in the sequence. It\n"
  "will also provide the current sequence index of the provided file\n"
  "name. by several vtkPVUpdateSuppressor objects.\n\n";


static PyObject *
PyvtkFileSequenceParser_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFileSequenceParser::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSequenceParser_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSequenceParser *op = static_cast<vtkFileSequenceParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFileSequenceParser::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSequenceParser_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFileSequenceParser *tempr = vtkFileSequenceParser::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSequenceParser_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSequenceParser *op = static_cast<vtkFileSequenceParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFileSequenceParser *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFileSequenceParser::NewInstance());

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
PyvtkFileSequenceParser_ParseFileSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParseFileSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSequenceParser *op = static_cast<vtkFileSequenceParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->ParseFileSequence(temp0) :
      op->vtkFileSequenceParser::ParseFileSequence(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSequenceParser_GetSequenceName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSequenceName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSequenceParser *op = static_cast<vtkFileSequenceParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSequenceName() :
      op->vtkFileSequenceParser::GetSequenceName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSequenceParser_GetSequenceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSequenceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSequenceParser *op = static_cast<vtkFileSequenceParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSequenceIndex() :
      op->vtkFileSequenceParser::GetSequenceIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFileSequenceParser_Methods[] = {
  {"IsTypeOf", PyvtkFileSequenceParser_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFileSequenceParser_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFileSequenceParser_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkFileSequenceParser\nC++: static vtkFileSequenceParser *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFileSequenceParser_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFileSequenceParser\nC++: vtkFileSequenceParser *NewInstance()\n\n"},
  {"ParseFileSequence", PyvtkFileSequenceParser_ParseFileSequence, METH_VARARGS,
   "V.ParseFileSequence(string) -> bool\nC++: bool ParseFileSequence(const char *file)\n\nExtract base file name sequence from the file. Returns true if a\nsequence is detected and sets SequenceName and SequenceIndex.\n"},
  {"GetSequenceName", PyvtkFileSequenceParser_GetSequenceName, METH_VARARGS,
   "V.GetSequenceName() -> string\nC++: virtual char *GetSequenceName()\n\n"},
  {"GetSequenceIndex", PyvtkFileSequenceParser_GetSequenceIndex, METH_VARARGS,
   "V.GetSequenceIndex() -> int\nC++: virtual int GetSequenceIndex()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFileSequenceParser_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkFileSequenceParser", // tp_name
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
  PyvtkFileSequenceParser_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFileSequenceParser_StaticNew()
{
  return vtkFileSequenceParser::New();
}

PyObject *PyvtkFileSequenceParser_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFileSequenceParser_Type, PyvtkFileSequenceParser_Methods,
    "vtkFileSequenceParser",
 &PyvtkFileSequenceParser_StaticNew);

  PyTypeObject *pytype = &PyvtkFileSequenceParser_Type;

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

void PyVTKAddFile_vtkFileSequenceParser(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFileSequenceParser_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFileSequenceParser", o) != 0)
  {
    Py_DECREF(o);
  }

}

