// python wrapper for vtkXMLStructuredDataWriter
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
#include "vtkXMLStructuredDataWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLStructuredDataWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLStructuredDataWriter_ClassNew(); }

#ifndef DECLARED_PyvtkXMLWriter_ClassNew
extern "C" { PyObject *PyvtkXMLWriter_ClassNew(); }
#define DECLARED_PyvtkXMLWriter_ClassNew
#endif

static const char *PyvtkXMLStructuredDataWriter_Doc =
  "vtkXMLStructuredDataWriter - Superclass for VTK XML structured data\nwriters.\n\n"
  "Superclass: vtkXMLWriter\n\n"
  "vtkXMLStructuredDataWriter provides VTK XML writing functionality\n"
  "that is common among all the structured data formats.\n\n";


static PyObject *
PyvtkXMLStructuredDataWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLStructuredDataWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataWriter *op = static_cast<vtkXMLStructuredDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLStructuredDataWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLStructuredDataWriter *tempr = vtkXMLStructuredDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataWriter *op = static_cast<vtkXMLStructuredDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLStructuredDataWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLStructuredDataWriter::NewInstance());

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
PyvtkXMLStructuredDataWriter_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataWriter *op = static_cast<vtkXMLStructuredDataWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPieces(temp0);
    }
    else
    {
      op->vtkXMLStructuredDataWriter::SetNumberOfPieces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataWriter_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataWriter *op = static_cast<vtkXMLStructuredDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkXMLStructuredDataWriter::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataWriter_SetWritePiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWritePiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataWriter *op = static_cast<vtkXMLStructuredDataWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWritePiece(temp0);
    }
    else
    {
      op->vtkXMLStructuredDataWriter::SetWritePiece(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataWriter_GetWritePiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWritePiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataWriter *op = static_cast<vtkXMLStructuredDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWritePiece() :
      op->vtkXMLStructuredDataWriter::GetWritePiece());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataWriter_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataWriter *op = static_cast<vtkXMLStructuredDataWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGhostLevel(temp0);
    }
    else
    {
      op->vtkXMLStructuredDataWriter::SetGhostLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataWriter_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataWriter *op = static_cast<vtkXMLStructuredDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkXMLStructuredDataWriter::GetGhostLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataWriter_SetWriteExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataWriter *op = static_cast<vtkXMLStructuredDataWriter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetWriteExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkXMLStructuredDataWriter::SetWriteExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXMLStructuredDataWriter_SetWriteExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataWriter *op = static_cast<vtkXMLStructuredDataWriter *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetWriteExtent(temp0);
    }
    else
    {
      op->vtkXMLStructuredDataWriter::SetWriteExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXMLStructuredDataWriter_SetWriteExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkXMLStructuredDataWriter_SetWriteExtent_s1(self, args);
    case 1:
      return PyvtkXMLStructuredDataWriter_SetWriteExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetWriteExtent");
  return nullptr;
}



static PyObject *
PyvtkXMLStructuredDataWriter_GetWriteExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataWriter *op = static_cast<vtkXMLStructuredDataWriter *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetWriteExtent() :
      op->vtkXMLStructuredDataWriter::GetWriteExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLStructuredDataWriter_Methods[] = {
  {"IsTypeOf", PyvtkXMLStructuredDataWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLStructuredDataWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLStructuredDataWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLStructuredDataWriter\nC++: static vtkXMLStructuredDataWriter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLStructuredDataWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLStructuredDataWriter\nC++: vtkXMLStructuredDataWriter *NewInstance()\n\n"},
  {"SetNumberOfPieces", PyvtkXMLStructuredDataWriter_SetNumberOfPieces, METH_VARARGS,
   "V.SetNumberOfPieces(int)\nC++: virtual void SetNumberOfPieces(int _arg)\n\nGet/Set the number of pieces used to stream the image through the\npipeline while writing to the file.\n"},
  {"GetNumberOfPieces", PyvtkXMLStructuredDataWriter_GetNumberOfPieces, METH_VARARGS,
   "V.GetNumberOfPieces() -> int\nC++: virtual int GetNumberOfPieces()\n\nGet/Set the number of pieces used to stream the image through the\npipeline while writing to the file.\n"},
  {"SetWritePiece", PyvtkXMLStructuredDataWriter_SetWritePiece, METH_VARARGS,
   "V.SetWritePiece(int)\nC++: virtual void SetWritePiece(int _arg)\n\nGet/Set the piece to write to the file.  If this is negative, all\npieces will be written.\n"},
  {"GetWritePiece", PyvtkXMLStructuredDataWriter_GetWritePiece, METH_VARARGS,
   "V.GetWritePiece() -> int\nC++: virtual int GetWritePiece()\n\nGet/Set the piece to write to the file.  If this is negative, all\npieces will be written.\n"},
  {"SetGhostLevel", PyvtkXMLStructuredDataWriter_SetGhostLevel, METH_VARARGS,
   "V.SetGhostLevel(int)\nC++: virtual void SetGhostLevel(int _arg)\n\nGet/Set the ghost level used to pad each piece.\n"},
  {"GetGhostLevel", PyvtkXMLStructuredDataWriter_GetGhostLevel, METH_VARARGS,
   "V.GetGhostLevel() -> int\nC++: virtual int GetGhostLevel()\n\nGet/Set the ghost level used to pad each piece.\n"},
  {"SetWriteExtent", PyvtkXMLStructuredDataWriter_SetWriteExtent, METH_VARARGS,
   "V.SetWriteExtent(int, int, int, int, int, int)\nC++: void SetWriteExtent(int, int, int, int, int, int)\nV.SetWriteExtent((int, int, int, int, int, int))\nC++: void SetWriteExtent(int a[6])\n\n"},
  {"GetWriteExtent", PyvtkXMLStructuredDataWriter_GetWriteExtent, METH_VARARGS,
   "V.GetWriteExtent() -> (int, int, int, int, int, int)\nC++: int *GetWriteExtent()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLStructuredDataWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXMLPython.vtkXMLStructuredDataWriter", // tp_name
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
  PyvtkXMLStructuredDataWriter_Doc, // tp_doc
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

PyObject *PyvtkXMLStructuredDataWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLStructuredDataWriter_Type, PyvtkXMLStructuredDataWriter_Methods,
    "vtkXMLStructuredDataWriter",
 nullptr);

  PyTypeObject *pytype = &PyvtkXMLStructuredDataWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkXMLWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLStructuredDataWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLStructuredDataWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLStructuredDataWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

