// python wrapper for vtkStructuredGridWriter
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
#include "vtkStructuredGridWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStructuredGridWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStructuredGridWriter_ClassNew(); }

#ifndef DECLARED_PyvtkDataWriter_ClassNew
extern "C" { PyObject *PyvtkDataWriter_ClassNew(); }
#define DECLARED_PyvtkDataWriter_ClassNew
#endif

static const char *PyvtkStructuredGridWriter_Doc =
  "vtkStructuredGridWriter - write vtk structured grid data file\n\n"
  "Superclass: vtkDataWriter\n\n"
  "vtkStructuredGridWriter is a source object that writes ASCII or\n"
  "binary structured grid data files in vtk format. See text for format\n"
  "details.\n\n"
  "@warning\n"
  "Binary files written on one system may not be readable on other\n"
  "systems.\n\n";


static PyObject *
PyvtkStructuredGridWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStructuredGridWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridWriter *op = static_cast<vtkStructuredGridWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredGridWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStructuredGridWriter *tempr = vtkStructuredGridWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridWriter *op = static_cast<vtkStructuredGridWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredGridWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredGridWriter::NewInstance());

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
PyvtkStructuredGridWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridWriter *op = static_cast<vtkStructuredGridWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredGrid *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkStructuredGridWriter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredGridWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridWriter *op = static_cast<vtkStructuredGridWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStructuredGrid *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkStructuredGridWriter::GetInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredGridWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkStructuredGridWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkStructuredGridWriter_GetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return nullptr;
}



static PyObject *
PyvtkStructuredGridWriter_SetWriteExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridWriter *op = static_cast<vtkStructuredGridWriter *>(vp);

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
      op->vtkStructuredGridWriter::SetWriteExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridWriter_GetWriteExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridWriter *op = static_cast<vtkStructuredGridWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetWriteExtent() :
      op->vtkStructuredGridWriter::GetWriteExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridWriter_WriteExtentOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteExtentOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridWriter *op = static_cast<vtkStructuredGridWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteExtentOn();
    }
    else
    {
      op->vtkStructuredGridWriter::WriteExtentOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridWriter_WriteExtentOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteExtentOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridWriter *op = static_cast<vtkStructuredGridWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteExtentOff();
    }
    else
    {
      op->vtkStructuredGridWriter::WriteExtentOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkStructuredGridWriter_Methods[] = {
  {"IsTypeOf", PyvtkStructuredGridWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStructuredGridWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStructuredGridWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkStructuredGridWriter\nC++: static vtkStructuredGridWriter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStructuredGridWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStructuredGridWriter\nC++: vtkStructuredGridWriter *NewInstance()\n\n"},
  {"GetInput", PyvtkStructuredGridWriter_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetInput()\nV.GetInput(int) -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetInput(int port)\n\nGet the input to this writer.\n"},
  {"SetWriteExtent", PyvtkStructuredGridWriter_SetWriteExtent, METH_VARARGS,
   "V.SetWriteExtent(bool)\nC++: virtual void SetWriteExtent(bool _arg)\n\nWhen WriteExtent is on, vtkStructuredPointsWriter writes data\nextent in the output file. Otherwise, it writes dimensions. The\nonly time this option is useful is when the extents do not start\nat (0, 0, 0). This is an options to support writing of older\nformats while still using a newer VTK.\n"},
  {"GetWriteExtent", PyvtkStructuredGridWriter_GetWriteExtent, METH_VARARGS,
   "V.GetWriteExtent() -> bool\nC++: virtual bool GetWriteExtent()\n\nWhen WriteExtent is on, vtkStructuredPointsWriter writes data\nextent in the output file. Otherwise, it writes dimensions. The\nonly time this option is useful is when the extents do not start\nat (0, 0, 0). This is an options to support writing of older\nformats while still using a newer VTK.\n"},
  {"WriteExtentOn", PyvtkStructuredGridWriter_WriteExtentOn, METH_VARARGS,
   "V.WriteExtentOn()\nC++: virtual void WriteExtentOn()\n\nWhen WriteExtent is on, vtkStructuredPointsWriter writes data\nextent in the output file. Otherwise, it writes dimensions. The\nonly time this option is useful is when the extents do not start\nat (0, 0, 0). This is an options to support writing of older\nformats while still using a newer VTK.\n"},
  {"WriteExtentOff", PyvtkStructuredGridWriter_WriteExtentOff, METH_VARARGS,
   "V.WriteExtentOff()\nC++: virtual void WriteExtentOff()\n\nWhen WriteExtent is on, vtkStructuredPointsWriter writes data\nextent in the output file. Otherwise, it writes dimensions. The\nonly time this option is useful is when the extents do not start\nat (0, 0, 0). This is an options to support writing of older\nformats while still using a newer VTK.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStructuredGridWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOLegacyPython.vtkStructuredGridWriter", // tp_name
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
  PyvtkStructuredGridWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStructuredGridWriter_StaticNew()
{
  return vtkStructuredGridWriter::New();
}

PyObject *PyvtkStructuredGridWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStructuredGridWriter_Type, PyvtkStructuredGridWriter_Methods,
    "vtkStructuredGridWriter",
 &PyvtkStructuredGridWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkStructuredGridWriter_Type;

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

void PyVTKAddFile_vtkStructuredGridWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStructuredGridWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStructuredGridWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

