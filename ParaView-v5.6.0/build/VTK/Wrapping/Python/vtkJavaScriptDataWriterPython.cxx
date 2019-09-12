// python wrapper for vtkJavaScriptDataWriter
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
#include "vtkJavaScriptDataWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkJavaScriptDataWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkJavaScriptDataWriter_ClassNew(); }

#ifndef DECLARED_PyvtkWriter_ClassNew
extern "C" { PyObject *PyvtkWriter_ClassNew(); }
#define DECLARED_PyvtkWriter_ClassNew
#endif

static const char *PyvtkJavaScriptDataWriter_Doc =
  "vtkJavaScriptDataWriter - A Javascript data writer for vtkTable\n\n"
  "Superclass: vtkWriter\n\n"
  "Writes a vtkTable into a Javascript data format.\n\n";


static PyObject *
PyvtkJavaScriptDataWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkJavaScriptDataWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkJavaScriptDataWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkJavaScriptDataWriter *tempr = vtkJavaScriptDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkJavaScriptDataWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkJavaScriptDataWriter::NewInstance());

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
PyvtkJavaScriptDataWriter_SetVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVariableName(temp0);
    }
    else
    {
      op->vtkJavaScriptDataWriter::SetVariableName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_GetVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVariableName() :
      op->vtkJavaScriptDataWriter::GetVariableName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

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
      op->vtkJavaScriptDataWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkJavaScriptDataWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_SetIncludeFieldNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeFieldNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIncludeFieldNames(temp0);
    }
    else
    {
      op->vtkJavaScriptDataWriter::SetIncludeFieldNames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_GetIncludeFieldNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeFieldNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIncludeFieldNames() :
      op->vtkJavaScriptDataWriter::GetIncludeFieldNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkJavaScriptDataWriter_Methods[] = {
  {"IsTypeOf", PyvtkJavaScriptDataWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkJavaScriptDataWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkJavaScriptDataWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkJavaScriptDataWriter\nC++: static vtkJavaScriptDataWriter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkJavaScriptDataWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkJavaScriptDataWriter\nC++: vtkJavaScriptDataWriter *NewInstance()\n\n"},
  {"SetVariableName", PyvtkJavaScriptDataWriter_SetVariableName, METH_VARARGS,
   "V.SetVariableName(string)\nC++: virtual void SetVariableName(const char *_arg)\n\nGet/set the name of the Javascript variable that the dataset will\nbe assigned to. The default value is \"data\", so the javascript\ncode generated by the filter will look like this: \"var data = [ ...\n];\". If VariableName is set to nullptr, then no assignment\nstatement will be generated (i.e., only \"[ ... ];\" will be\ngenerated).\n"},
  {"GetVariableName", PyvtkJavaScriptDataWriter_GetVariableName, METH_VARARGS,
   "V.GetVariableName() -> string\nC++: virtual char *GetVariableName()\n\nGet/set the name of the Javascript variable that the dataset will\nbe assigned to. The default value is \"data\", so the javascript\ncode generated by the filter will look like this: \"var data = [ ...\n];\". If VariableName is set to nullptr, then no assignment\nstatement will be generated (i.e., only \"[ ... ];\" will be\ngenerated).\n"},
  {"SetFileName", PyvtkJavaScriptDataWriter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nGet/Set the filename for the file.\n"},
  {"GetFileName", PyvtkJavaScriptDataWriter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nGet/Set the filename for the file.\n"},
  {"SetIncludeFieldNames", PyvtkJavaScriptDataWriter_SetIncludeFieldNames, METH_VARARGS,
   "V.SetIncludeFieldNames(bool)\nC++: virtual void SetIncludeFieldNames(bool _arg)\n\nGet/Set the whether or not to include field names When field\nnames are on you will get data output that looks like this: var\ndata=[ {foo:3,time:\"2009-11-04 16:09:42\",bar:1 }, {foo:5,time:\"2009-11-04\n16:11:22\",bar:0 }, without field names the data will be an array\nof arrays like this: var data=[ [3,\"2009-11-04 16:09:42\",1], [5,\"2009-11-04\n16:11:22\",0],\n\n* Default is ON (true)\n"},
  {"GetIncludeFieldNames", PyvtkJavaScriptDataWriter_GetIncludeFieldNames, METH_VARARGS,
   "V.GetIncludeFieldNames() -> bool\nC++: virtual bool GetIncludeFieldNames()\n\nGet/Set the whether or not to include field names When field\nnames are on you will get data output that looks like this: var\ndata=[ {foo:3,time:\"2009-11-04 16:09:42\",bar:1 }, {foo:5,time:\"2009-11-04\n16:11:22\",bar:0 }, without field names the data will be an array\nof arrays like this: var data=[ [3,\"2009-11-04 16:09:42\",1], [5,\"2009-11-04\n16:11:22\",0],\n\n* Default is ON (true)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkJavaScriptDataWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOCorePython.vtkJavaScriptDataWriter", // tp_name
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
  PyvtkJavaScriptDataWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkJavaScriptDataWriter_StaticNew()
{
  return vtkJavaScriptDataWriter::New();
}

PyObject *PyvtkJavaScriptDataWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkJavaScriptDataWriter_Type, PyvtkJavaScriptDataWriter_Methods,
    "vtkJavaScriptDataWriter",
 &PyvtkJavaScriptDataWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkJavaScriptDataWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkJavaScriptDataWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkJavaScriptDataWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkJavaScriptDataWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

