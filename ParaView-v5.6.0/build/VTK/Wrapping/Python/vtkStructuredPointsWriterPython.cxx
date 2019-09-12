// python wrapper for vtkStructuredPointsWriter
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
#include "vtkStructuredPointsWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStructuredPointsWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStructuredPointsWriter_ClassNew(); }

#ifndef DECLARED_PyvtkDataWriter_ClassNew
extern "C" { PyObject *PyvtkDataWriter_ClassNew(); }
#define DECLARED_PyvtkDataWriter_ClassNew
#endif

static const char *PyvtkStructuredPointsWriter_Doc =
  "vtkStructuredPointsWriter - write vtk structured points data file\n\n"
  "Superclass: vtkDataWriter\n\n"
  "vtkStructuredPointsWriter is a source object that writes ASCII or\n"
  "binary structured points data in vtk file format. See text for format\n"
  "details.\n"
  "@warning\n"
  "Binary files written on one system may not be readable on other\n"
  "systems.\n\n";


static PyObject *
PyvtkStructuredPointsWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStructuredPointsWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredPointsWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsWriter *op = static_cast<vtkStructuredPointsWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredPointsWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredPointsWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStructuredPointsWriter *tempr = vtkStructuredPointsWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredPointsWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsWriter *op = static_cast<vtkStructuredPointsWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredPointsWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredPointsWriter::NewInstance());

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
PyvtkStructuredPointsWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsWriter *op = static_cast<vtkStructuredPointsWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkStructuredPointsWriter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredPointsWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsWriter *op = static_cast<vtkStructuredPointsWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkStructuredPointsWriter::GetInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredPointsWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkStructuredPointsWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkStructuredPointsWriter_GetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return nullptr;
}



static PyObject *
PyvtkStructuredPointsWriter_SetWriteExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsWriter *op = static_cast<vtkStructuredPointsWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteExtent(temp0);
    }
    else
    {
      op->vtkStructuredPointsWriter::SetWriteExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredPointsWriter_GetWriteExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsWriter *op = static_cast<vtkStructuredPointsWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetWriteExtent() :
      op->vtkStructuredPointsWriter::GetWriteExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredPointsWriter_WriteExtentOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteExtentOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsWriter *op = static_cast<vtkStructuredPointsWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteExtentOn();
    }
    else
    {
      op->vtkStructuredPointsWriter::WriteExtentOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredPointsWriter_WriteExtentOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteExtentOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsWriter *op = static_cast<vtkStructuredPointsWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteExtentOff();
    }
    else
    {
      op->vtkStructuredPointsWriter::WriteExtentOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkStructuredPointsWriter_Methods[] = {
  {"IsTypeOf", PyvtkStructuredPointsWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStructuredPointsWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStructuredPointsWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkStructuredPointsWriter\nC++: static vtkStructuredPointsWriter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStructuredPointsWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStructuredPointsWriter\nC++: vtkStructuredPointsWriter *NewInstance()\n\n"},
  {"GetInput", PyvtkStructuredPointsWriter_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput()\nV.GetInput(int) -> vtkImageData\nC++: vtkImageData *GetInput(int port)\n\nGet the input to this writer.\n"},
  {"SetWriteExtent", PyvtkStructuredPointsWriter_SetWriteExtent, METH_VARARGS,
   "V.SetWriteExtent(bool)\nC++: virtual void SetWriteExtent(bool _arg)\n\nWhen WriteExtent is on, vtkStructuredPointsWriter writes data\nextent in the output file. Otherwise, it writes dimensions. The\nonly time this option is useful is when the extents do not start\nat (0, 0, 0). This is an options to support writing of older\nformats while still using a newer VTK.\n"},
  {"GetWriteExtent", PyvtkStructuredPointsWriter_GetWriteExtent, METH_VARARGS,
   "V.GetWriteExtent() -> bool\nC++: virtual bool GetWriteExtent()\n\nWhen WriteExtent is on, vtkStructuredPointsWriter writes data\nextent in the output file. Otherwise, it writes dimensions. The\nonly time this option is useful is when the extents do not start\nat (0, 0, 0). This is an options to support writing of older\nformats while still using a newer VTK.\n"},
  {"WriteExtentOn", PyvtkStructuredPointsWriter_WriteExtentOn, METH_VARARGS,
   "V.WriteExtentOn()\nC++: virtual void WriteExtentOn()\n\nWhen WriteExtent is on, vtkStructuredPointsWriter writes data\nextent in the output file. Otherwise, it writes dimensions. The\nonly time this option is useful is when the extents do not start\nat (0, 0, 0). This is an options to support writing of older\nformats while still using a newer VTK.\n"},
  {"WriteExtentOff", PyvtkStructuredPointsWriter_WriteExtentOff, METH_VARARGS,
   "V.WriteExtentOff()\nC++: virtual void WriteExtentOff()\n\nWhen WriteExtent is on, vtkStructuredPointsWriter writes data\nextent in the output file. Otherwise, it writes dimensions. The\nonly time this option is useful is when the extents do not start\nat (0, 0, 0). This is an options to support writing of older\nformats while still using a newer VTK.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStructuredPointsWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOLegacyPython.vtkStructuredPointsWriter", // tp_name
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
  PyvtkStructuredPointsWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStructuredPointsWriter_StaticNew()
{
  return vtkStructuredPointsWriter::New();
}

PyObject *PyvtkStructuredPointsWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStructuredPointsWriter_Type, PyvtkStructuredPointsWriter_Methods,
    "vtkStructuredPointsWriter",
 &PyvtkStructuredPointsWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkStructuredPointsWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStructuredPointsWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStructuredPointsWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStructuredPointsWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

