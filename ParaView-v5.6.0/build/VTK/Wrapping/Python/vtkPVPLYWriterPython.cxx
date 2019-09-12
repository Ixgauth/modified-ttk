// python wrapper for vtkPVPLYWriter
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
#include "vtkPVPLYWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVPLYWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVPLYWriter_ClassNew(); }

#ifndef DECLARED_PyvtkWriter_ClassNew
extern "C" { PyObject *PyvtkWriter_ClassNew(); }
#define DECLARED_PyvtkWriter_ClassNew
#endif

static const char *PyvtkPVPLYWriter_Doc =
  "vtkPVPLYWriter - provides a ParaView friendly API for vtkPLYWriter.\n\n"
  "Superclass: vtkWriter\n\n"
  "This is a facade for vtkPLYWriter that provides an API more amiable\n"
  "to the GUI shown in the ParaView application.\n\n";


static PyObject *
PyvtkPVPLYWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVPLYWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPLYWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPLYWriter *op = static_cast<vtkPVPLYWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVPLYWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPLYWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVPLYWriter *tempr = vtkPVPLYWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPLYWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPLYWriter *op = static_cast<vtkPVPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVPLYWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVPLYWriter::NewInstance());

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
PyvtkPVPLYWriter_SetEnableColoring(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableColoring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPLYWriter *op = static_cast<vtkPVPLYWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableColoring(temp0);
    }
    else
    {
      op->vtkPVPLYWriter::SetEnableColoring(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPLYWriter_GetEnableColoring(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableColoring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPLYWriter *op = static_cast<vtkPVPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnableColoring() :
      op->vtkPVPLYWriter::GetEnableColoring());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPLYWriter_SetEnableAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPLYWriter *op = static_cast<vtkPVPLYWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableAlpha(temp0);
    }
    else
    {
      op->vtkPVPLYWriter::SetEnableAlpha(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPLYWriter_GetEnableAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPLYWriter *op = static_cast<vtkPVPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnableAlpha() :
      op->vtkPVPLYWriter::GetEnableAlpha());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPLYWriter_SetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPLYWriter *op = static_cast<vtkPVPLYWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataByteOrder(temp0);
    }
    else
    {
      op->vtkPVPLYWriter::SetDataByteOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPLYWriter_SetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPLYWriter *op = static_cast<vtkPVPLYWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileType(temp0);
    }
    else
    {
      op->vtkPVPLYWriter::SetFileType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPLYWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPLYWriter *op = static_cast<vtkPVPLYWriter *>(vp);

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
      op->vtkPVPLYWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPLYWriter_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPLYWriter *op = static_cast<vtkPVPLYWriter *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkPVPLYWriter::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVPLYWriter_Methods[] = {
  {"IsTypeOf", PyvtkPVPLYWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVPLYWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVPLYWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVPLYWriter\nC++: static vtkPVPLYWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVPLYWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVPLYWriter\nC++: vtkPVPLYWriter *NewInstance()\n\n"},
  {"SetEnableColoring", PyvtkPVPLYWriter_SetEnableColoring, METH_VARARGS,
   "V.SetEnableColoring(bool)\nC++: virtual void SetEnableColoring(bool _arg)\n\nEnable coloring.\n"},
  {"GetEnableColoring", PyvtkPVPLYWriter_GetEnableColoring, METH_VARARGS,
   "V.GetEnableColoring() -> bool\nC++: virtual bool GetEnableColoring()\n\nEnable coloring.\n"},
  {"SetEnableAlpha", PyvtkPVPLYWriter_SetEnableAlpha, METH_VARARGS,
   "V.SetEnableAlpha(bool)\nC++: virtual void SetEnableAlpha(bool _arg)\n\nEnable alpha channel if coloring is enabled.\n"},
  {"GetEnableAlpha", PyvtkPVPLYWriter_GetEnableAlpha, METH_VARARGS,
   "V.GetEnableAlpha() -> bool\nC++: virtual bool GetEnableAlpha()\n\nEnable alpha channel if coloring is enabled.\n"},
  {"SetDataByteOrder", PyvtkPVPLYWriter_SetDataByteOrder, METH_VARARGS,
   "V.SetDataByteOrder(int)\nC++: void SetDataByteOrder(int dbo)\n\nIf the file type is binary, then the user can specify which byte\norder to use (little versus big endian).\n"},
  {"SetFileType", PyvtkPVPLYWriter_SetFileType, METH_VARARGS,
   "V.SetFileType(int)\nC++: void SetFileType(int ftype)\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {"SetFileName", PyvtkPVPLYWriter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: void SetFileName(const char *fname)\n\nSpecify file name of vtk polygon data file to write.\n"},
  {"SetLookupTable", PyvtkPVPLYWriter_SetLookupTable, METH_VARARGS,
   "V.SetLookupTable(vtkScalarsToColors)\nC++: void SetLookupTable(vtkScalarsToColors *lut)\n\nA lookup table can be specified in order to convert data arrays\nto RGBA colors.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVPLYWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPVPLYWriter", // tp_name
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
  PyvtkPVPLYWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVPLYWriter_StaticNew()
{
  return vtkPVPLYWriter::New();
}

PyObject *PyvtkPVPLYWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVPLYWriter_Type, PyvtkPVPLYWriter_Methods,
    "vtkPVPLYWriter",
 &PyvtkPVPLYWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkPVPLYWriter_Type;

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

void PyVTKAddFile_vtkPVPLYWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVPLYWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVPLYWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

