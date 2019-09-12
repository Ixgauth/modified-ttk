// python wrapper for vtkXMLHierarchicalBoxDataFileConverter
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
#include "vtkXMLHierarchicalBoxDataFileConverter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLHierarchicalBoxDataFileConverter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLHierarchicalBoxDataFileConverter_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkXMLHierarchicalBoxDataFileConverter_Doc =
  "vtkXMLHierarchicalBoxDataFileConverter - converts older *.vth, *.vthb\nfiles to newer format.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkXMLHierarchicalBoxDataFileConverter is a utility class to convert\n"
  "v0.1 and v1.0 of the VTK XML hierarchical file format to the v1.1.\n"
  "Users can then use vtkXMLUniformGridAMRReader to read the dataset\n"
  "into VTK.\n\n";


static PyObject *
PyvtkXMLHierarchicalBoxDataFileConverter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLHierarchicalBoxDataFileConverter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataFileConverter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataFileConverter *op = static_cast<vtkXMLHierarchicalBoxDataFileConverter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLHierarchicalBoxDataFileConverter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataFileConverter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLHierarchicalBoxDataFileConverter *tempr = vtkXMLHierarchicalBoxDataFileConverter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataFileConverter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataFileConverter *op = static_cast<vtkXMLHierarchicalBoxDataFileConverter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLHierarchicalBoxDataFileConverter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLHierarchicalBoxDataFileConverter::NewInstance());

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
PyvtkXMLHierarchicalBoxDataFileConverter_SetInputFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataFileConverter *op = static_cast<vtkXMLHierarchicalBoxDataFileConverter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputFileName(temp0);
    }
    else
    {
      op->vtkXMLHierarchicalBoxDataFileConverter::SetInputFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataFileConverter_GetInputFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataFileConverter *op = static_cast<vtkXMLHierarchicalBoxDataFileConverter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInputFileName() :
      op->vtkXMLHierarchicalBoxDataFileConverter::GetInputFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataFileConverter_SetOutputFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataFileConverter *op = static_cast<vtkXMLHierarchicalBoxDataFileConverter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFileName(temp0);
    }
    else
    {
      op->vtkXMLHierarchicalBoxDataFileConverter::SetOutputFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataFileConverter_GetOutputFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataFileConverter *op = static_cast<vtkXMLHierarchicalBoxDataFileConverter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetOutputFileName() :
      op->vtkXMLHierarchicalBoxDataFileConverter::GetOutputFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataFileConverter_Convert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Convert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataFileConverter *op = static_cast<vtkXMLHierarchicalBoxDataFileConverter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Convert() :
      op->vtkXMLHierarchicalBoxDataFileConverter::Convert());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLHierarchicalBoxDataFileConverter_Methods[] = {
  {"IsTypeOf", PyvtkXMLHierarchicalBoxDataFileConverter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLHierarchicalBoxDataFileConverter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLHierarchicalBoxDataFileConverter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkXMLHierarchicalBoxDataFileConverter\nC++: static vtkXMLHierarchicalBoxDataFileConverter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLHierarchicalBoxDataFileConverter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLHierarchicalBoxDataFileConverter\nC++: vtkXMLHierarchicalBoxDataFileConverter *NewInstance()\n\n"},
  {"SetInputFileName", PyvtkXMLHierarchicalBoxDataFileConverter_SetInputFileName, METH_VARARGS,
   "V.SetInputFileName(string)\nC++: virtual void SetInputFileName(const char *_arg)\n\nSet the input filename.\n"},
  {"GetInputFileName", PyvtkXMLHierarchicalBoxDataFileConverter_GetInputFileName, METH_VARARGS,
   "V.GetInputFileName() -> string\nC++: virtual char *GetInputFileName()\n\nSet the input filename.\n"},
  {"SetOutputFileName", PyvtkXMLHierarchicalBoxDataFileConverter_SetOutputFileName, METH_VARARGS,
   "V.SetOutputFileName(string)\nC++: virtual void SetOutputFileName(const char *_arg)\n\nSet the output filename.\n"},
  {"GetOutputFileName", PyvtkXMLHierarchicalBoxDataFileConverter_GetOutputFileName, METH_VARARGS,
   "V.GetOutputFileName() -> string\nC++: virtual char *GetOutputFileName()\n\nSet the output filename.\n"},
  {"Convert", PyvtkXMLHierarchicalBoxDataFileConverter_Convert, METH_VARARGS,
   "V.Convert() -> bool\nC++: bool Convert()\n\nConverts the input file to new format and writes out the output\nfile.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLHierarchicalBoxDataFileConverter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXMLPython.vtkXMLHierarchicalBoxDataFileConverter", // tp_name
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
  PyvtkXMLHierarchicalBoxDataFileConverter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLHierarchicalBoxDataFileConverter_StaticNew()
{
  return vtkXMLHierarchicalBoxDataFileConverter::New();
}

PyObject *PyvtkXMLHierarchicalBoxDataFileConverter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLHierarchicalBoxDataFileConverter_Type, PyvtkXMLHierarchicalBoxDataFileConverter_Methods,
    "vtkXMLHierarchicalBoxDataFileConverter",
 &PyvtkXMLHierarchicalBoxDataFileConverter_StaticNew);

  PyTypeObject *pytype = &PyvtkXMLHierarchicalBoxDataFileConverter_Type;

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

void PyVTKAddFile_vtkXMLHierarchicalBoxDataFileConverter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLHierarchicalBoxDataFileConverter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLHierarchicalBoxDataFileConverter", o) != 0)
  {
    Py_DECREF(o);
  }

}

