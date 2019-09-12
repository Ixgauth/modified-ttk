// python wrapper for vtkXMLGenericDataObjectReader
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
#include "vtkXMLGenericDataObjectReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLGenericDataObjectReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLGenericDataObjectReader_ClassNew(); }

#ifndef DECLARED_PyvtkXMLDataReader_ClassNew
extern "C" { PyObject *PyvtkXMLDataReader_ClassNew(); }
#define DECLARED_PyvtkXMLDataReader_ClassNew
#endif

static const char *PyvtkXMLGenericDataObjectReader_Doc =
  "vtkXMLGenericDataObjectReader - Read any type of vtk data object\n\n"
  "Superclass: vtkXMLDataReader\n\n"
  "vtkXMLGenericDataObjectReader reads any type of vtk data object\n"
  "encoded in XML format.\n\n"
  "@sa\n"
  "vtkGenericDataObjectReader\n\n";


static PyObject *
PyvtkXMLGenericDataObjectReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLGenericDataObjectReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLGenericDataObjectReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLGenericDataObjectReader *tempr = vtkXMLGenericDataObjectReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLGenericDataObjectReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLGenericDataObjectReader::NewInstance());

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
PyvtkXMLGenericDataObjectReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkXMLGenericDataObjectReader::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLGenericDataObjectReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkXMLGenericDataObjectReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLGenericDataObjectReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkXMLGenericDataObjectReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLGenericDataObjectReader_GetOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return nullptr;
}



static PyObject *
PyvtkXMLGenericDataObjectReader_GetHierarchicalBoxDataSetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchicalBoxDataSetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHierarchicalBoxDataSet *tempr = (ap.IsBound() ?
      op->GetHierarchicalBoxDataSetOutput() :
      op->vtkXMLGenericDataObjectReader::GetHierarchicalBoxDataSetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetImageDataOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDataOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetImageDataOutput() :
      op->vtkXMLGenericDataObjectReader::GetImageDataOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetMultiBlockDataSetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultiBlockDataSetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiBlockDataSet *tempr = (ap.IsBound() ?
      op->GetMultiBlockDataSetOutput() :
      op->vtkXMLGenericDataObjectReader::GetMultiBlockDataSetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetPolyDataOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetPolyDataOutput() :
      op->vtkXMLGenericDataObjectReader::GetPolyDataOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetRectilinearGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRectilinearGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectilinearGrid *tempr = (ap.IsBound() ?
      op->GetRectilinearGridOutput() :
      op->vtkXMLGenericDataObjectReader::GetRectilinearGridOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetStructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredGrid *tempr = (ap.IsBound() ?
      op->GetStructuredGridOutput() :
      op->vtkXMLGenericDataObjectReader::GetStructuredGridOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetUnstructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetUnstructuredGridOutput() :
      op->vtkXMLGenericDataObjectReader::GetUnstructuredGridOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkXMLGenericDataObjectReader::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkXMLGenericDataObjectReader::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_SetupEmptyOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupEmptyOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetupEmptyOutput();
    }
    else
    {
      op->vtkXMLGenericDataObjectReader::SetupEmptyOutput();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_ReadOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  const char *temp0 = nullptr;
  bool temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ReadOutputType(temp0, temp1) :
      op->vtkXMLGenericDataObjectReader::ReadOutputType(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLGenericDataObjectReader_Methods[] = {
  {"IsTypeOf", PyvtkXMLGenericDataObjectReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLGenericDataObjectReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLGenericDataObjectReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLGenericDataObjectReader\nC++: static vtkXMLGenericDataObjectReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLGenericDataObjectReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLGenericDataObjectReader\nC++: vtkXMLGenericDataObjectReader *NewInstance()\n\n"},
  {"GetOutput", PyvtkXMLGenericDataObjectReader_GetOutput, METH_VARARGS,
   "V.GetOutput() -> vtkDataObject\nC++: vtkDataObject *GetOutput()\nV.GetOutput(int) -> vtkDataObject\nC++: vtkDataObject *GetOutput(int idx)\n\nGet the reader's output.\n"},
  {"GetHierarchicalBoxDataSetOutput", PyvtkXMLGenericDataObjectReader_GetHierarchicalBoxDataSetOutput, METH_VARARGS,
   "V.GetHierarchicalBoxDataSetOutput() -> vtkHierarchicalBoxDataSet\nC++: vtkHierarchicalBoxDataSet *GetHierarchicalBoxDataSetOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used nullptr is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {"GetImageDataOutput", PyvtkXMLGenericDataObjectReader_GetImageDataOutput, METH_VARARGS,
   "V.GetImageDataOutput() -> vtkImageData\nC++: vtkImageData *GetImageDataOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used nullptr is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {"GetMultiBlockDataSetOutput", PyvtkXMLGenericDataObjectReader_GetMultiBlockDataSetOutput, METH_VARARGS,
   "V.GetMultiBlockDataSetOutput() -> vtkMultiBlockDataSet\nC++: vtkMultiBlockDataSet *GetMultiBlockDataSetOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used nullptr is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {"GetPolyDataOutput", PyvtkXMLGenericDataObjectReader_GetPolyDataOutput, METH_VARARGS,
   "V.GetPolyDataOutput() -> vtkPolyData\nC++: vtkPolyData *GetPolyDataOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used nullptr is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {"GetRectilinearGridOutput", PyvtkXMLGenericDataObjectReader_GetRectilinearGridOutput, METH_VARARGS,
   "V.GetRectilinearGridOutput() -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetRectilinearGridOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used nullptr is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {"GetStructuredGridOutput", PyvtkXMLGenericDataObjectReader_GetStructuredGridOutput, METH_VARARGS,
   "V.GetStructuredGridOutput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetStructuredGridOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used nullptr is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {"GetUnstructuredGridOutput", PyvtkXMLGenericDataObjectReader_GetUnstructuredGridOutput, METH_VARARGS,
   "V.GetUnstructuredGridOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetUnstructuredGridOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used nullptr is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {"GetNumberOfPoints", PyvtkXMLGenericDataObjectReader_GetNumberOfPoints, METH_VARARGS,
   "V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints() override;\n\nOverridden method.\n"},
  {"GetNumberOfCells", PyvtkXMLGenericDataObjectReader_GetNumberOfCells, METH_VARARGS,
   "V.GetNumberOfCells() -> int\nC++: vtkIdType GetNumberOfCells() override;\n\nOverridden method.\n"},
  {"SetupEmptyOutput", PyvtkXMLGenericDataObjectReader_SetupEmptyOutput, METH_VARARGS,
   "V.SetupEmptyOutput()\nC++: void SetupEmptyOutput() override;\n\nOverridden method. Not Used. Delegated.\n"},
  {"ReadOutputType", PyvtkXMLGenericDataObjectReader_ReadOutputType, METH_VARARGS,
   "V.ReadOutputType(string, bool) -> int\nC++: virtual int ReadOutputType(const char *name, bool &parallel)\n\nThis method can be used to find out the type of output expected\nwithout needing to read the whole file.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLGenericDataObjectReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXMLPython.vtkXMLGenericDataObjectReader", // tp_name
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
  PyvtkXMLGenericDataObjectReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLGenericDataObjectReader_StaticNew()
{
  return vtkXMLGenericDataObjectReader::New();
}

PyObject *PyvtkXMLGenericDataObjectReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLGenericDataObjectReader_Type, PyvtkXMLGenericDataObjectReader_Methods,
    "vtkXMLGenericDataObjectReader",
 &PyvtkXMLGenericDataObjectReader_StaticNew);

  PyTypeObject *pytype = &PyvtkXMLGenericDataObjectReader_Type;

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

void PyVTKAddFile_vtkXMLGenericDataObjectReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLGenericDataObjectReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLGenericDataObjectReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

