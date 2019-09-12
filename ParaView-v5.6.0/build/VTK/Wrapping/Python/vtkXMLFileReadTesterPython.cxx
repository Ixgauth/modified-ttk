// python wrapper for vtkXMLFileReadTester
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
#include "vtkXMLFileReadTester.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLFileReadTester(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLFileReadTester_ClassNew(); }

#ifndef DECLARED_PyvtkXMLParser_ClassNew
extern "C" { PyObject *PyvtkXMLParser_ClassNew(); }
#define DECLARED_PyvtkXMLParser_ClassNew
#endif

static const char *PyvtkXMLFileReadTester_Doc =
  "vtkXMLFileReadTester - Utility class for vtkXMLReader and subclasses.\n\n"
  "Superclass: vtkXMLParser\n\n"
  "vtkXMLFileReadTester reads the smallest part of a file necessary to\n"
  "determine whether it is a VTK XML file.  If so, it extracts the file\n"
  "type and version number.\n\n";


static PyObject *
PyvtkXMLFileReadTester_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLFileReadTester::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLFileReadTester_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileReadTester *op = static_cast<vtkXMLFileReadTester *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLFileReadTester::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLFileReadTester_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLFileReadTester *tempr = vtkXMLFileReadTester::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLFileReadTester_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileReadTester *op = static_cast<vtkXMLFileReadTester *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLFileReadTester *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLFileReadTester::NewInstance());

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
PyvtkXMLFileReadTester_TestReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TestReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileReadTester *op = static_cast<vtkXMLFileReadTester *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->TestReadFile() :
      op->vtkXMLFileReadTester::TestReadFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLFileReadTester_GetFileDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileReadTester *op = static_cast<vtkXMLFileReadTester *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileDataType() :
      op->vtkXMLFileReadTester::GetFileDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLFileReadTester_GetFileVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileReadTester *op = static_cast<vtkXMLFileReadTester *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileVersion() :
      op->vtkXMLFileReadTester::GetFileVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLFileReadTester_Methods[] = {
  {"IsTypeOf", PyvtkXMLFileReadTester_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLFileReadTester_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLFileReadTester_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLFileReadTester\nC++: static vtkXMLFileReadTester *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLFileReadTester_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLFileReadTester\nC++: vtkXMLFileReadTester *NewInstance()\n\n"},
  {"TestReadFile", PyvtkXMLFileReadTester_TestReadFile, METH_VARARGS,
   "V.TestReadFile() -> int\nC++: int TestReadFile()\n\nTry to read the file given by FileName.  Returns 1 if the file is\na VTK XML file, and 0 otherwise.\n"},
  {"GetFileDataType", PyvtkXMLFileReadTester_GetFileDataType, METH_VARARGS,
   "V.GetFileDataType() -> string\nC++: virtual char *GetFileDataType()\n\nGet the data type of the XML file tested.  If the file could not\nbe read, returns nullptr.\n"},
  {"GetFileVersion", PyvtkXMLFileReadTester_GetFileVersion, METH_VARARGS,
   "V.GetFileVersion() -> string\nC++: virtual char *GetFileVersion()\n\nGet the file version of the XML file tested.  If the file could\nnot be read, returns nullptr.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLFileReadTester_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXMLPython.vtkXMLFileReadTester", // tp_name
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
  PyvtkXMLFileReadTester_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLFileReadTester_StaticNew()
{
  return vtkXMLFileReadTester::New();
}

PyObject *PyvtkXMLFileReadTester_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLFileReadTester_Type, PyvtkXMLFileReadTester_Methods,
    "vtkXMLFileReadTester",
 &PyvtkXMLFileReadTester_StaticNew);

  PyTypeObject *pytype = &PyvtkXMLFileReadTester_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkXMLParser_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLFileReadTester(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLFileReadTester_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLFileReadTester", o) != 0)
  {
    Py_DECREF(o);
  }

}

