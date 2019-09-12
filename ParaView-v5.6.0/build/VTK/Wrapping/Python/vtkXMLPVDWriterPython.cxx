// python wrapper for vtkXMLPVDWriter
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
#include "vtkXMLPVDWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLPVDWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLPVDWriter_ClassNew(); }

#ifndef DECLARED_PyvtkXMLWriter_ClassNew
extern "C" { PyObject *PyvtkXMLWriter_ClassNew(); }
#define DECLARED_PyvtkXMLWriter_ClassNew
#endif

static const char *PyvtkXMLPVDWriter_Doc =
  "vtkXMLPVDWriter - Data writer for ParaView\n\n"
  "Superclass: vtkXMLWriter\n\n"
  "vtkXMLPVDWriter is used to save all parts of a current source to a\n"
  "file with pieces spread across other server processes.\n\n";


static PyObject *
PyvtkXMLPVDWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLPVDWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPVDWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVDWriter *op = static_cast<vtkXMLPVDWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLPVDWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPVDWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLPVDWriter *tempr = vtkXMLPVDWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPVDWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVDWriter *op = static_cast<vtkXMLPVDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLPVDWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLPVDWriter::NewInstance());

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
PyvtkXMLPVDWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVDWriter *op = static_cast<vtkXMLPVDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultFileExtension() :
      op->vtkXMLPVDWriter::GetDefaultFileExtension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPVDWriter_GetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVDWriter *op = static_cast<vtkXMLPVDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPiece() :
      op->vtkXMLPVDWriter::GetPiece());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPVDWriter_SetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVDWriter *op = static_cast<vtkXMLPVDWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPiece(temp0);
    }
    else
    {
      op->vtkXMLPVDWriter::SetPiece(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPVDWriter_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVDWriter *op = static_cast<vtkXMLPVDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkXMLPVDWriter::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPVDWriter_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVDWriter *op = static_cast<vtkXMLPVDWriter *>(vp);

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
      op->vtkXMLPVDWriter::SetNumberOfPieces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPVDWriter_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVDWriter *op = static_cast<vtkXMLPVDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkXMLPVDWriter::GetGhostLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPVDWriter_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVDWriter *op = static_cast<vtkXMLPVDWriter *>(vp);

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
      op->vtkXMLPVDWriter::SetGhostLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPVDWriter_SetWriteAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVDWriter *op = static_cast<vtkXMLPVDWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteAllTimeSteps(temp0);
    }
    else
    {
      op->vtkXMLPVDWriter::SetWriteAllTimeSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPVDWriter_GetWriteAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVDWriter *op = static_cast<vtkXMLPVDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteAllTimeSteps() :
      op->vtkXMLPVDWriter::GetWriteAllTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPVDWriter_WriteAllTimeStepsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteAllTimeStepsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVDWriter *op = static_cast<vtkXMLPVDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteAllTimeStepsOn();
    }
    else
    {
      op->vtkXMLPVDWriter::WriteAllTimeStepsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPVDWriter_WriteAllTimeStepsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteAllTimeStepsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVDWriter *op = static_cast<vtkXMLPVDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteAllTimeStepsOff();
    }
    else
    {
      op->vtkXMLPVDWriter::WriteAllTimeStepsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPVDWriter_AddInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVDWriter *op = static_cast<vtkXMLPVDWriter *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->AddInputData(temp0);
    }
    else
    {
      op->vtkXMLPVDWriter::AddInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPVDWriter_GetWriteCollectionFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteCollectionFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVDWriter *op = static_cast<vtkXMLPVDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteCollectionFile() :
      op->vtkXMLPVDWriter::GetWriteCollectionFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPVDWriter_SetWriteCollectionFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteCollectionFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVDWriter *op = static_cast<vtkXMLPVDWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteCollectionFile(temp0);
    }
    else
    {
      op->vtkXMLPVDWriter::SetWriteCollectionFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLPVDWriter_Methods[] = {
  {"IsTypeOf", PyvtkXMLPVDWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLPVDWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLPVDWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLPVDWriter\nC++: static vtkXMLPVDWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLPVDWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLPVDWriter\nC++: vtkXMLPVDWriter *NewInstance()\n\n"},
  {"GetDefaultFileExtension", PyvtkXMLPVDWriter_GetDefaultFileExtension, METH_VARARGS,
   "V.GetDefaultFileExtension() -> string\nC++: const char *GetDefaultFileExtension() override;\n\nGet the default file extension for files written by this writer.\n"},
  {"GetPiece", PyvtkXMLPVDWriter_GetPiece, METH_VARARGS,
   "V.GetPiece() -> int\nC++: virtual int GetPiece()\n\nGet/Set the piece number to write.  The same piece number is used\nfor all inputs.\n"},
  {"SetPiece", PyvtkXMLPVDWriter_SetPiece, METH_VARARGS,
   "V.SetPiece(int)\nC++: virtual void SetPiece(int _arg)\n\nGet/Set the piece number to write.  The same piece number is used\nfor all inputs.\n"},
  {"GetNumberOfPieces", PyvtkXMLPVDWriter_GetNumberOfPieces, METH_VARARGS,
   "V.GetNumberOfPieces() -> int\nC++: virtual int GetNumberOfPieces()\n\nGet/Set the number of pieces into which the inputs are split.\n"},
  {"SetNumberOfPieces", PyvtkXMLPVDWriter_SetNumberOfPieces, METH_VARARGS,
   "V.SetNumberOfPieces(int)\nC++: virtual void SetNumberOfPieces(int _arg)\n\nGet/Set the number of pieces into which the inputs are split.\n"},
  {"GetGhostLevel", PyvtkXMLPVDWriter_GetGhostLevel, METH_VARARGS,
   "V.GetGhostLevel() -> int\nC++: virtual int GetGhostLevel()\n\nGet/Set the number of ghost levels to be written for unstructured\ndata.\n"},
  {"SetGhostLevel", PyvtkXMLPVDWriter_SetGhostLevel, METH_VARARGS,
   "V.SetGhostLevel(int)\nC++: virtual void SetGhostLevel(int _arg)\n\nGet/Set the number of ghost levels to be written for unstructured\ndata.\n"},
  {"SetWriteAllTimeSteps", PyvtkXMLPVDWriter_SetWriteAllTimeSteps, METH_VARARGS,
   "V.SetWriteAllTimeSteps(int)\nC++: virtual void SetWriteAllTimeSteps(int _arg)\n\nWhen WriteAllTimeSteps is turned ON, the writer is executed once\nfor each timestep available from its input. The default is OFF.\n"},
  {"GetWriteAllTimeSteps", PyvtkXMLPVDWriter_GetWriteAllTimeSteps, METH_VARARGS,
   "V.GetWriteAllTimeSteps() -> int\nC++: virtual int GetWriteAllTimeSteps()\n\nWhen WriteAllTimeSteps is turned ON, the writer is executed once\nfor each timestep available from its input. The default is OFF.\n"},
  {"WriteAllTimeStepsOn", PyvtkXMLPVDWriter_WriteAllTimeStepsOn, METH_VARARGS,
   "V.WriteAllTimeStepsOn()\nC++: virtual void WriteAllTimeStepsOn()\n\nWhen WriteAllTimeSteps is turned ON, the writer is executed once\nfor each timestep available from its input. The default is OFF.\n"},
  {"WriteAllTimeStepsOff", PyvtkXMLPVDWriter_WriteAllTimeStepsOff, METH_VARARGS,
   "V.WriteAllTimeStepsOff()\nC++: virtual void WriteAllTimeStepsOff()\n\nWhen WriteAllTimeSteps is turned ON, the writer is executed once\nfor each timestep available from its input. The default is OFF.\n"},
  {"AddInputData", PyvtkXMLPVDWriter_AddInputData, METH_VARARGS,
   "V.AddInputData(vtkDataObject)\nC++: void AddInputData(vtkDataObject *)\n\nAdd an input of this algorithm.\n"},
  {"GetWriteCollectionFile", PyvtkXMLPVDWriter_GetWriteCollectionFile, METH_VARARGS,
   "V.GetWriteCollectionFile() -> int\nC++: virtual int GetWriteCollectionFile()\n\nGet/Set whether this instance will write the main collection\nfile.\n"},
  {"SetWriteCollectionFile", PyvtkXMLPVDWriter_SetWriteCollectionFile, METH_VARARGS,
   "V.SetWriteCollectionFile(int)\nC++: virtual void SetWriteCollectionFile(int flag)\n\nGet/Set whether this instance will write the main collection\nfile.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLPVDWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkXMLPVDWriter", // tp_name
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
  PyvtkXMLPVDWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLPVDWriter_StaticNew()
{
  return vtkXMLPVDWriter::New();
}

PyObject *PyvtkXMLPVDWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLPVDWriter_Type, PyvtkXMLPVDWriter_Methods,
    "vtkXMLPVDWriter",
 &PyvtkXMLPVDWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkXMLPVDWriter_Type;

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

void PyVTKAddFile_vtkXMLPVDWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLPVDWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLPVDWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

