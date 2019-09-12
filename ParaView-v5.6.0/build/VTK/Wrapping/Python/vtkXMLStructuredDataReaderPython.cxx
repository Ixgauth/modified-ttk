// python wrapper for vtkXMLStructuredDataReader
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
#include "vtkXMLStructuredDataReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLStructuredDataReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLStructuredDataReader_ClassNew(); }

#ifndef DECLARED_PyvtkXMLDataReader_ClassNew
extern "C" { PyObject *PyvtkXMLDataReader_ClassNew(); }
#define DECLARED_PyvtkXMLDataReader_ClassNew
#endif

static const char *PyvtkXMLStructuredDataReader_Doc =
  "vtkXMLStructuredDataReader - Superclass for structured data XML\nreaders.\n\n"
  "Superclass: vtkXMLDataReader\n\n"
  "vtkXMLStructuredDataReader provides functionality common to all\n"
  "structured data format readers.\n\n"
  "@sa\n"
  "vtkXMLImageDataReader vtkXMLStructuredGridReader\n"
  "vtkXMLRectilinearGridReader\n\n";


static PyObject *
PyvtkXMLStructuredDataReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLStructuredDataReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataReader *op = static_cast<vtkXMLStructuredDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLStructuredDataReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLStructuredDataReader *tempr = vtkXMLStructuredDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataReader *op = static_cast<vtkXMLStructuredDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLStructuredDataReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLStructuredDataReader::NewInstance());

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
PyvtkXMLStructuredDataReader_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataReader *op = static_cast<vtkXMLStructuredDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkXMLStructuredDataReader::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataReader_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataReader *op = static_cast<vtkXMLStructuredDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkXMLStructuredDataReader::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataReader_SetWholeSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataReader *op = static_cast<vtkXMLStructuredDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWholeSlices(temp0);
    }
    else
    {
      op->vtkXMLStructuredDataReader::SetWholeSlices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataReader_GetWholeSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataReader *op = static_cast<vtkXMLStructuredDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWholeSlices() :
      op->vtkXMLStructuredDataReader::GetWholeSlices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataReader_WholeSlicesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WholeSlicesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataReader *op = static_cast<vtkXMLStructuredDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WholeSlicesOn();
    }
    else
    {
      op->vtkXMLStructuredDataReader::WholeSlicesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataReader_WholeSlicesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WholeSlicesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataReader *op = static_cast<vtkXMLStructuredDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WholeSlicesOff();
    }
    else
    {
      op->vtkXMLStructuredDataReader::WholeSlicesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataReader_CopyOutputInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataReader *op = static_cast<vtkXMLStructuredDataReader *>(vp);

  vtkInformation *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->CopyOutputInformation(temp0, temp1);
    }
    else
    {
      op->vtkXMLStructuredDataReader::CopyOutputInformation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLStructuredDataReader_Methods[] = {
  {"IsTypeOf", PyvtkXMLStructuredDataReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLStructuredDataReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLStructuredDataReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLStructuredDataReader\nC++: static vtkXMLStructuredDataReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLStructuredDataReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLStructuredDataReader\nC++: vtkXMLStructuredDataReader *NewInstance()\n\n"},
  {"GetNumberOfPoints", PyvtkXMLStructuredDataReader_GetNumberOfPoints, METH_VARARGS,
   "V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints() override;\n\nGet the number of points in the output.\n"},
  {"GetNumberOfCells", PyvtkXMLStructuredDataReader_GetNumberOfCells, METH_VARARGS,
   "V.GetNumberOfCells() -> int\nC++: vtkIdType GetNumberOfCells() override;\n\nGet the number of cells in the output.\n"},
  {"SetWholeSlices", PyvtkXMLStructuredDataReader_SetWholeSlices, METH_VARARGS,
   "V.SetWholeSlices(int)\nC++: virtual void SetWholeSlices(vtkTypeBool _arg)\n\nGet/Set whether the reader gets a whole slice from disk when only\na rectangle inside it is needed.  This mode reads more data than\nnecessary, but prevents many short reads from interacting poorly\nwith the compression and encoding schemes.\n"},
  {"GetWholeSlices", PyvtkXMLStructuredDataReader_GetWholeSlices, METH_VARARGS,
   "V.GetWholeSlices() -> int\nC++: virtual vtkTypeBool GetWholeSlices()\n\nGet/Set whether the reader gets a whole slice from disk when only\na rectangle inside it is needed.  This mode reads more data than\nnecessary, but prevents many short reads from interacting poorly\nwith the compression and encoding schemes.\n"},
  {"WholeSlicesOn", PyvtkXMLStructuredDataReader_WholeSlicesOn, METH_VARARGS,
   "V.WholeSlicesOn()\nC++: virtual void WholeSlicesOn()\n\nGet/Set whether the reader gets a whole slice from disk when only\na rectangle inside it is needed.  This mode reads more data than\nnecessary, but prevents many short reads from interacting poorly\nwith the compression and encoding schemes.\n"},
  {"WholeSlicesOff", PyvtkXMLStructuredDataReader_WholeSlicesOff, METH_VARARGS,
   "V.WholeSlicesOff()\nC++: virtual void WholeSlicesOff()\n\nGet/Set whether the reader gets a whole slice from disk when only\na rectangle inside it is needed.  This mode reads more data than\nnecessary, but prevents many short reads from interacting poorly\nwith the compression and encoding schemes.\n"},
  {"CopyOutputInformation", PyvtkXMLStructuredDataReader_CopyOutputInformation, METH_VARARGS,
   "V.CopyOutputInformation(vtkInformation, int)\nC++: void CopyOutputInformation(vtkInformation *outInfo, int port)\n     override;\n\nFor the specified port, copy the information this reader sets up\nin SetupOutputInformation to outInfo\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLStructuredDataReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXMLPython.vtkXMLStructuredDataReader", // tp_name
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
  PyvtkXMLStructuredDataReader_Doc, // tp_doc
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

PyObject *PyvtkXMLStructuredDataReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLStructuredDataReader_Type, PyvtkXMLStructuredDataReader_Methods,
    "vtkXMLStructuredDataReader",
 nullptr);

  PyTypeObject *pytype = &PyvtkXMLStructuredDataReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkXMLDataReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLStructuredDataReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLStructuredDataReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLStructuredDataReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

