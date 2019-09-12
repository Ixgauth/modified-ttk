// python wrapper for vtkSpyPlotHistoryReader
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
#include "vtkSpyPlotHistoryReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSpyPlotHistoryReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSpyPlotHistoryReader_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkSpyPlotHistoryReader_Doc =
  "vtkSpyPlotHistoryReader - Read SPCTH Spy Plot history file format\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "vtkSpyPlotHistoryReader is a reader that reads SPCTH Spy Plot history\n"
  "file format files. Each row in the history files represents a time\n"
  "step and columns represent points and properties for the points\n\n";


static PyObject *
PyvtkSpyPlotHistoryReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSpyPlotHistoryReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotHistoryReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotHistoryReader *op = static_cast<vtkSpyPlotHistoryReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpyPlotHistoryReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotHistoryReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSpyPlotHistoryReader *tempr = vtkSpyPlotHistoryReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotHistoryReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotHistoryReader *op = static_cast<vtkSpyPlotHistoryReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpyPlotHistoryReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpyPlotHistoryReader::NewInstance());

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
PyvtkSpyPlotHistoryReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotHistoryReader *op = static_cast<vtkSpyPlotHistoryReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkSpyPlotHistoryReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotHistoryReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotHistoryReader *op = static_cast<vtkSpyPlotHistoryReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkSpyPlotHistoryReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotHistoryReader_SetCommentCharacter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCommentCharacter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotHistoryReader *op = static_cast<vtkSpyPlotHistoryReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCommentCharacter(temp0);
    }
    else
    {
      op->vtkSpyPlotHistoryReader::SetCommentCharacter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotHistoryReader_GetCommentCharacter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCommentCharacter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotHistoryReader *op = static_cast<vtkSpyPlotHistoryReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCommentCharacter() :
      op->vtkSpyPlotHistoryReader::GetCommentCharacter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotHistoryReader_SetDelimeter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDelimeter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotHistoryReader *op = static_cast<vtkSpyPlotHistoryReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDelimeter(temp0);
    }
    else
    {
      op->vtkSpyPlotHistoryReader::SetDelimeter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotHistoryReader_GetDelimeter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDelimeter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotHistoryReader *op = static_cast<vtkSpyPlotHistoryReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDelimeter() :
      op->vtkSpyPlotHistoryReader::GetDelimeter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSpyPlotHistoryReader_Methods[] = {
  {"IsTypeOf", PyvtkSpyPlotHistoryReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSpyPlotHistoryReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSpyPlotHistoryReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSpyPlotHistoryReader\nC++: static vtkSpyPlotHistoryReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSpyPlotHistoryReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSpyPlotHistoryReader\nC++: vtkSpyPlotHistoryReader *NewInstance()\n\n"},
  {"SetFileName", PyvtkSpyPlotHistoryReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nGet and set the file name. It is either the name of the case file\nor the name of the single binary file.\n"},
  {"GetFileName", PyvtkSpyPlotHistoryReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nGet and set the file name. It is either the name of the case file\nor the name of the single binary file.\n"},
  {"SetCommentCharacter", PyvtkSpyPlotHistoryReader_SetCommentCharacter, METH_VARARGS,
   "V.SetCommentCharacter(string)\nC++: virtual void SetCommentCharacter(const char *_arg)\n\nGet and set the comment character for the file\n"},
  {"GetCommentCharacter", PyvtkSpyPlotHistoryReader_GetCommentCharacter, METH_VARARGS,
   "V.GetCommentCharacter() -> string\nC++: virtual char *GetCommentCharacter()\n\nGet and set the comment character for the file\n"},
  {"SetDelimeter", PyvtkSpyPlotHistoryReader_SetDelimeter, METH_VARARGS,
   "V.SetDelimeter(string)\nC++: virtual void SetDelimeter(const char *_arg)\n\nGet and set the delimeter character for the file\n"},
  {"GetDelimeter", PyvtkSpyPlotHistoryReader_GetDelimeter, METH_VARARGS,
   "V.GetDelimeter() -> string\nC++: virtual char *GetDelimeter()\n\nGet and set the delimeter character for the file\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSpyPlotHistoryReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkSpyPlotHistoryReader", // tp_name
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
  PyvtkSpyPlotHistoryReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSpyPlotHistoryReader_StaticNew()
{
  return vtkSpyPlotHistoryReader::New();
}

PyObject *PyvtkSpyPlotHistoryReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSpyPlotHistoryReader_Type, PyvtkSpyPlotHistoryReader_Methods,
    "vtkSpyPlotHistoryReader",
 &PyvtkSpyPlotHistoryReader_StaticNew);

  PyTypeObject *pytype = &PyvtkSpyPlotHistoryReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTableAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSpyPlotHistoryReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSpyPlotHistoryReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSpyPlotHistoryReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

