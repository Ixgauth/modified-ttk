// python wrapper for vtkXMLPMultiBlockDataWriter
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
#include "vtkXMLPMultiBlockDataWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLPMultiBlockDataWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLPMultiBlockDataWriter_ClassNew(); }

#ifndef DECLARED_PyvtkXMLMultiBlockDataWriter_ClassNew
extern "C" { PyObject *PyvtkXMLMultiBlockDataWriter_ClassNew(); }
#define DECLARED_PyvtkXMLMultiBlockDataWriter_ClassNew
#endif

static const char *PyvtkXMLPMultiBlockDataWriter_Doc =
  "vtkXMLPMultiBlockDataWriter - parallel writer for\nvtkHierarchicalBoxDataSet.\n\n"
  "Superclass: vtkXMLMultiBlockDataWriter\n\n"
  "vtkXMLPCompositeDataWriter writes (in parallel or serially) the VTK\n"
  "XML multi-group, multi-block hierarchical and hierarchical box files.\n"
  "XML multi-group data files are meta-files that point to a list of\n"
  "serial VTK XML files.\n\n";


static PyObject *
PyvtkXMLPMultiBlockDataWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLPMultiBlockDataWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPMultiBlockDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPMultiBlockDataWriter *op = static_cast<vtkXMLPMultiBlockDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLPMultiBlockDataWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPMultiBlockDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLPMultiBlockDataWriter *tempr = vtkXMLPMultiBlockDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPMultiBlockDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPMultiBlockDataWriter *op = static_cast<vtkXMLPMultiBlockDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLPMultiBlockDataWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLPMultiBlockDataWriter::NewInstance());

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
PyvtkXMLPMultiBlockDataWriter_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPMultiBlockDataWriter *op = static_cast<vtkXMLPMultiBlockDataWriter *>(vp);

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
      op->vtkXMLPMultiBlockDataWriter::SetNumberOfPieces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPMultiBlockDataWriter_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPMultiBlockDataWriter *op = static_cast<vtkXMLPMultiBlockDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkXMLPMultiBlockDataWriter::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPMultiBlockDataWriter_SetStartPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPMultiBlockDataWriter *op = static_cast<vtkXMLPMultiBlockDataWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartPiece(temp0);
    }
    else
    {
      op->vtkXMLPMultiBlockDataWriter::SetStartPiece(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPMultiBlockDataWriter_GetStartPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPMultiBlockDataWriter *op = static_cast<vtkXMLPMultiBlockDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStartPiece() :
      op->vtkXMLPMultiBlockDataWriter::GetStartPiece());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPMultiBlockDataWriter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPMultiBlockDataWriter *op = static_cast<vtkXMLPMultiBlockDataWriter *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkXMLPMultiBlockDataWriter::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPMultiBlockDataWriter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPMultiBlockDataWriter *op = static_cast<vtkXMLPMultiBlockDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkXMLPMultiBlockDataWriter::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPMultiBlockDataWriter_SetWriteMetaFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteMetaFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPMultiBlockDataWriter *op = static_cast<vtkXMLPMultiBlockDataWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteMetaFile(temp0);
    }
    else
    {
      op->vtkXMLPMultiBlockDataWriter::SetWriteMetaFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLPMultiBlockDataWriter_Methods[] = {
  {"IsTypeOf", PyvtkXMLPMultiBlockDataWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLPMultiBlockDataWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLPMultiBlockDataWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLPMultiBlockDataWriter\nC++: static vtkXMLPMultiBlockDataWriter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLPMultiBlockDataWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLPMultiBlockDataWriter\nC++: vtkXMLPMultiBlockDataWriter *NewInstance()\n\n"},
  {"SetNumberOfPieces", PyvtkXMLPMultiBlockDataWriter_SetNumberOfPieces, METH_VARARGS,
   "V.SetNumberOfPieces(int)\nC++: virtual void SetNumberOfPieces(int _arg)\n\nGet/Set the number of pieces that are being written in parallel.\n"},
  {"GetNumberOfPieces", PyvtkXMLPMultiBlockDataWriter_GetNumberOfPieces, METH_VARARGS,
   "V.GetNumberOfPieces() -> int\nC++: virtual int GetNumberOfPieces()\n\nGet/Set the number of pieces that are being written in parallel.\n"},
  {"SetStartPiece", PyvtkXMLPMultiBlockDataWriter_SetStartPiece, METH_VARARGS,
   "V.SetStartPiece(int)\nC++: virtual void SetStartPiece(int _arg)\n\nGet/Set the range of pieces assigned to this writer.\n"},
  {"GetStartPiece", PyvtkXMLPMultiBlockDataWriter_GetStartPiece, METH_VARARGS,
   "V.GetStartPiece() -> int\nC++: virtual int GetStartPiece()\n\nGet/Set the range of pieces assigned to this writer.\n"},
  {"SetController", PyvtkXMLPMultiBlockDataWriter_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nController used to communicate data type of blocks. By default,\nthe global controller is used. If you want another controller to\nbe used, set it with this. If no controller is set, only the\nlocal blocks will be written to the meta-file.\n"},
  {"GetController", PyvtkXMLPMultiBlockDataWriter_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nController used to communicate data type of blocks. By default,\nthe global controller is used. If you want another controller to\nbe used, set it with this. If no controller is set, only the\nlocal blocks will be written to the meta-file.\n"},
  {"SetWriteMetaFile", PyvtkXMLPMultiBlockDataWriter_SetWriteMetaFile, METH_VARARGS,
   "V.SetWriteMetaFile(int)\nC++: void SetWriteMetaFile(int flag) override;\n\nSet whether this instance will write the meta-file. WriteMetaFile\nis set to flag only on process 0 and all other processes have\nWriteMetaFile set to 0 by default.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLPMultiBlockDataWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOParallelXMLPython.vtkXMLPMultiBlockDataWriter", // tp_name
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
  PyvtkXMLPMultiBlockDataWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLPMultiBlockDataWriter_StaticNew()
{
  return vtkXMLPMultiBlockDataWriter::New();
}

PyObject *PyvtkXMLPMultiBlockDataWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLPMultiBlockDataWriter_Type, PyvtkXMLPMultiBlockDataWriter_Methods,
    "vtkXMLPMultiBlockDataWriter",
 &PyvtkXMLPMultiBlockDataWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkXMLPMultiBlockDataWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkXMLMultiBlockDataWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLPMultiBlockDataWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLPMultiBlockDataWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLPMultiBlockDataWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

