// python wrapper for vtkImageFileSeriesReader
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
#include "vtkInformationVector.h"
#include "vtkImageFileSeriesReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageFileSeriesReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageFileSeriesReader_ClassNew(); }

#ifndef DECLARED_PyvtkFileSeriesReader_ClassNew
extern "C" { PyObject *PyvtkFileSeriesReader_ClassNew(); }
#define DECLARED_PyvtkFileSeriesReader_ClassNew
#endif

static const char *PyvtkImageFileSeriesReader_Doc =
  "vtkImageFileSeriesReader - adds support for optionally reading image\nstacks.\n\n"
  "Superclass: vtkFileSeriesReader\n\n"
  "vtkImageFileSeriesReader is designed for vtkImageReader2 and\n"
  "subclasses. This adds API to optionally treat the file series as an\n"
  "image stack rather than a temporal dataset. When ReadAsImageStack is\n"
  "true, we simply by-pass the superclass and instead pass all filenames\n"
  "to the internal reader and then let it handle the pipeline requests.\n\n";


static PyObject *
PyvtkImageFileSeriesReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageFileSeriesReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageFileSeriesReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFileSeriesReader *op = static_cast<vtkImageFileSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageFileSeriesReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageFileSeriesReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageFileSeriesReader *tempr = vtkImageFileSeriesReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageFileSeriesReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFileSeriesReader *op = static_cast<vtkImageFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageFileSeriesReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageFileSeriesReader::NewInstance());

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
PyvtkImageFileSeriesReader_SetReadAsImageStack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAsImageStack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFileSeriesReader *op = static_cast<vtkImageFileSeriesReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadAsImageStack(temp0);
    }
    else
    {
      op->vtkImageFileSeriesReader::SetReadAsImageStack(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageFileSeriesReader_GetReadAsImageStack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAsImageStack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFileSeriesReader *op = static_cast<vtkImageFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReadAsImageStack() :
      op->vtkImageFileSeriesReader::GetReadAsImageStack());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageFileSeriesReader_ReadAsImageStackOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAsImageStackOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFileSeriesReader *op = static_cast<vtkImageFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAsImageStackOn();
    }
    else
    {
      op->vtkImageFileSeriesReader::ReadAsImageStackOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageFileSeriesReader_ReadAsImageStackOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAsImageStackOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFileSeriesReader *op = static_cast<vtkImageFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAsImageStackOff();
    }
    else
    {
      op->vtkImageFileSeriesReader::ReadAsImageStackOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageFileSeriesReader_Methods[] = {
  {"IsTypeOf", PyvtkImageFileSeriesReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageFileSeriesReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageFileSeriesReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageFileSeriesReader\nC++: static vtkImageFileSeriesReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageFileSeriesReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageFileSeriesReader\nC++: vtkImageFileSeriesReader *NewInstance()\n\n"},
  {"SetReadAsImageStack", PyvtkImageFileSeriesReader_SetReadAsImageStack, METH_VARARGS,
   "V.SetReadAsImageStack(bool)\nC++: virtual void SetReadAsImageStack(bool _arg)\n\n"},
  {"GetReadAsImageStack", PyvtkImageFileSeriesReader_GetReadAsImageStack, METH_VARARGS,
   "V.GetReadAsImageStack() -> bool\nC++: virtual bool GetReadAsImageStack()\n\n"},
  {"ReadAsImageStackOn", PyvtkImageFileSeriesReader_ReadAsImageStackOn, METH_VARARGS,
   "V.ReadAsImageStackOn()\nC++: virtual void ReadAsImageStackOn()\n\n"},
  {"ReadAsImageStackOff", PyvtkImageFileSeriesReader_ReadAsImageStackOff, METH_VARARGS,
   "V.ReadAsImageStackOff()\nC++: virtual void ReadAsImageStackOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageFileSeriesReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkImageFileSeriesReader", // tp_name
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
  PyvtkImageFileSeriesReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageFileSeriesReader_StaticNew()
{
  return vtkImageFileSeriesReader::New();
}

PyObject *PyvtkImageFileSeriesReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageFileSeriesReader_Type, PyvtkImageFileSeriesReader_Methods,
    "vtkImageFileSeriesReader",
 &PyvtkImageFileSeriesReader_StaticNew);

  PyTypeObject *pytype = &PyvtkImageFileSeriesReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkFileSeriesReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageFileSeriesReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageFileSeriesReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageFileSeriesReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

