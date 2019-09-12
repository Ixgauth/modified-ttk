// python wrapper for vtkXMLUnstructuredDataReader
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
#include "vtkXMLUnstructuredDataReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLUnstructuredDataReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLUnstructuredDataReader_ClassNew(); }

#ifndef DECLARED_PyvtkXMLDataReader_ClassNew
extern "C" { PyObject *PyvtkXMLDataReader_ClassNew(); }
#define DECLARED_PyvtkXMLDataReader_ClassNew
#endif

static const char *PyvtkXMLUnstructuredDataReader_Doc =
  "vtkXMLUnstructuredDataReader - Superclass for unstructured data XML\nreaders.\n\n"
  "Superclass: vtkXMLDataReader\n\n"
  "vtkXMLUnstructuredDataReader provides functionality common to all\n"
  "unstructured data format readers.\n\n"
  "@sa\n"
  "vtkXMLPolyDataReader vtkXMLUnstructuredGridReader\n\n";


static PyObject *
PyvtkXMLUnstructuredDataReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLUnstructuredDataReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataReader *op = static_cast<vtkXMLUnstructuredDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLUnstructuredDataReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLUnstructuredDataReader *tempr = vtkXMLUnstructuredDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataReader *op = static_cast<vtkXMLUnstructuredDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLUnstructuredDataReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLUnstructuredDataReader::NewInstance());

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
PyvtkXMLUnstructuredDataReader_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataReader *op = static_cast<vtkXMLUnstructuredDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkXMLUnstructuredDataReader::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataReader_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataReader *op = static_cast<vtkXMLUnstructuredDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkXMLUnstructuredDataReader::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataReader_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataReader *op = static_cast<vtkXMLUnstructuredDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkXMLUnstructuredDataReader::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataReader_SetupUpdateExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataReader *op = static_cast<vtkXMLUnstructuredDataReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetupUpdateExtent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkXMLUnstructuredDataReader::SetupUpdateExtent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataReader_CopyOutputInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataReader *op = static_cast<vtkXMLUnstructuredDataReader *>(vp);

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
      op->vtkXMLUnstructuredDataReader::CopyOutputInformation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLUnstructuredDataReader_Methods[] = {
  {"IsTypeOf", PyvtkXMLUnstructuredDataReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLUnstructuredDataReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLUnstructuredDataReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLUnstructuredDataReader\nC++: static vtkXMLUnstructuredDataReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLUnstructuredDataReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLUnstructuredDataReader\nC++: vtkXMLUnstructuredDataReader *NewInstance()\n\n"},
  {"GetNumberOfPoints", PyvtkXMLUnstructuredDataReader_GetNumberOfPoints, METH_VARARGS,
   "V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints() override;\n\nGet the number of points in the output.\n"},
  {"GetNumberOfCells", PyvtkXMLUnstructuredDataReader_GetNumberOfCells, METH_VARARGS,
   "V.GetNumberOfCells() -> int\nC++: vtkIdType GetNumberOfCells() override;\n\nGet the number of cells in the output.\n"},
  {"GetNumberOfPieces", PyvtkXMLUnstructuredDataReader_GetNumberOfPieces, METH_VARARGS,
   "V.GetNumberOfPieces() -> int\nC++: virtual vtkIdType GetNumberOfPieces()\n\nGet the number of pieces in the file\n"},
  {"SetupUpdateExtent", PyvtkXMLUnstructuredDataReader_SetupUpdateExtent, METH_VARARGS,
   "V.SetupUpdateExtent(int, int, int)\nC++: void SetupUpdateExtent(int piece, int numberOfPieces,\n    int ghostLevel)\n\nSetup the reader as if the given update extent were requested by\nits output.  This can be used after an UpdateInformation to\nvalidate GetNumberOfPoints() and GetNumberOfCells() without\nactually reading data.\n"},
  {"CopyOutputInformation", PyvtkXMLUnstructuredDataReader_CopyOutputInformation, METH_VARARGS,
   "V.CopyOutputInformation(vtkInformation, int)\nC++: void CopyOutputInformation(vtkInformation *outInfo, int port)\n     override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLUnstructuredDataReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXMLPython.vtkXMLUnstructuredDataReader", // tp_name
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
  PyvtkXMLUnstructuredDataReader_Doc, // tp_doc
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

PyObject *PyvtkXMLUnstructuredDataReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLUnstructuredDataReader_Type, PyvtkXMLUnstructuredDataReader_Methods,
    "vtkXMLUnstructuredDataReader",
 nullptr);

  PyTypeObject *pytype = &PyvtkXMLUnstructuredDataReader_Type;

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

void PyVTKAddFile_vtkXMLUnstructuredDataReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLUnstructuredDataReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLUnstructuredDataReader", o) != 0)
  {
    Py_DECREF(o);
  }

}
