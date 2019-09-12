// python wrapper for vtkTecplotReader
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
#include "vtkTecplotReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTecplotReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTecplotReader_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkTecplotReader_Doc =
  "vtkTecplotReader -\n**********************************************************************\n*****\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "Copyright (c) 2000 - 2009, Lawrence Livermore National Security, LLC\n"
  "Produced at the Lawrence Livermore National Laboratory\n"
  "LLNL-CODE-400124 All rights reserved.\n\n"
  "This file was adapted from the ASCII Tecplot reader of VisIt. For\n"
  "details, see https://visit.llnl.gov/.  The full copyright notice is\n"
  "contained in the file COPYRIGHT located at the root of the VisIt\n"
  "distribution or at http://www.llnl.gov/visit/copyright.html.\n\n"
  "**********************************************************************\n"
  "    *****\n\n"
  "A concrete class to read an ASCII Tecplot file.\n\n\n"
  " vtkTecplotReader parses an ASCII Tecplot file to get a\n"
  "vtkMultiBlockDataSet\n"
  " object made up of several vtkDataSet objects, of which each is of\n"
  "type\n"
  " either vtkStructuredGrid or vtkUnstructuredGrid. Each vtkDataSet\n"
  "object\n"
  " maintains the geometry, topology, and some associated attributes\n"
  "describing\n"
  " physical properties.\n\n\n"
  " Tecplot treats 3D coordinates (only one or two coordinates might be\n"
  " explicitly specified in a file) as variables too, whose names (e.g.,\n"
  " 'X' / 'x' / 'I', 'Y' / 'y' / 'J', 'Z' / 'z' / 'K') are provided in\n"
  "the\n"
  " variables list (the 'VARIABLES' section). These names are then\n"
  "followed\n"
  " in the list by those of other traditional variables or attributes\n"
  "(node-\n"
  " based and / or cell-based data with the mode specified via token\n"
  "'VAR\n"
  " LOCATION', to be extracted to create vtkPointData and / or\n"
  "vtkCellData).\n"
  " Each zone described afterwards (in the 'ZONE's section) provides the\n"
  " specific values of the aforementioned variables (including 3D\n"
  "coordinates),\n"
  " in the same order as indicated by the variable-names list, through\n"
  "either\n"
  " POINT-packing (i.e., tuple-based storage) or BLOCK-packing\n"
  "(component-based\n"
  " storage). In particular, the first / description line of each zone\n"
  "tells\n"
  " the type of all the constituent cells as the connectivity / topology\n"
  " information. In other words, the entire dataset is made up of\n"
  "multiple zones\n"
  " (blocks), of which each maintains a set of cells of the same type\n"
  "('BRICK',\n"
  " 'TRIANGLE', 'QUADRILATERAL', 'TETRAHEDRON', and 'POINT' in Tecplot\n"
  "terms).\n"
  " In addition, the description line of each zone specifies the zone\n"
  "name,\n"
  " dimensionality information (size of each dimension for a structured\n"
  "zone),\n"
  " number of nodes, and number of cells. Information about the file\n"
  "format is\n"
  " available at http://download.tecplot.com/360/dataformat.pdf.\n\n"
  "@warning\n"
  " vtkTecplotReader is currently a simplified ASCII Tecplot reader and\n"
  "some\n"
  " functionalities (e.g., extraction of sections 'GEOMETRY', 'TEXT',\n"
  "and 'DATA\n"
  " SETAUXDATA', access to multiple time steps, in addition to the\n"
  "construction\n"
  " of vtkRectilinearGrid and vtkImageData objects) are not supported.\n\n"
  "@par Thanks:\n"
  " This class is a VTK implementation of VisIt's ASCII Tecplot reader.\n\n"
  "@sa\n"
  " vtkPoints vtkStructuredGrid vtkUnstructuredGrid vtkPointData\n"
  "vtkCellData\n"
  " vtkDataSet vtkMultiBlockDataSet\n\n";


static PyObject *
PyvtkTecplotReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTecplotReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTecplotReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTecplotReader *tempr = vtkTecplotReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTecplotReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTecplotReader::NewInstance());

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
PyvtkTecplotReader_GetNumberOfVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVariables() :
      op->vtkTecplotReader::GetNumberOfVariables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

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
      op->vtkTecplotReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotReader_GetDataTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDataTitle() :
      op->vtkTecplotReader::GetDataTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotReader_GetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBlocks() :
      op->vtkTecplotReader::GetNumberOfBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotReader_GetBlockName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetBlockName(temp0) :
      op->vtkTecplotReader::GetBlockName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotReader_GetNumberOfDataAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDataAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDataAttributes() :
      op->vtkTecplotReader::GetNumberOfDataAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotReader_GetDataAttributeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataAttributeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDataAttributeName(temp0) :
      op->vtkTecplotReader::GetDataAttributeName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotReader_IsDataAttributeCellBased_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDataAttributeCellBased");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsDataAttributeCellBased(temp0) :
      op->vtkTecplotReader::IsDataAttributeCellBased(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTecplotReader_IsDataAttributeCellBased_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDataAttributeCellBased");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsDataAttributeCellBased(temp0) :
      op->vtkTecplotReader::IsDataAttributeCellBased(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTecplotReader_IsDataAttributeCellBased_Methods[] = {
  {nullptr, PyvtkTecplotReader_IsDataAttributeCellBased_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkTecplotReader_IsDataAttributeCellBased_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTecplotReader_IsDataAttributeCellBased(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTecplotReader_IsDataAttributeCellBased_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsDataAttributeCellBased");
  return nullptr;
}



static PyObject *
PyvtkTecplotReader_GetNumberOfDataArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDataArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDataArrays() :
      op->vtkTecplotReader::GetNumberOfDataArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotReader_GetDataArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDataArrayName(temp0) :
      op->vtkTecplotReader::GetDataArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotReader_GetDataArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataArrayStatus(temp0) :
      op->vtkTecplotReader::GetDataArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotReader_SetDataArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDataArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkTecplotReader::SetDataArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTecplotReader_Methods[] = {
  {"IsTypeOf", PyvtkTecplotReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTecplotReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTecplotReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTecplotReader\nC++: static vtkTecplotReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTecplotReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTecplotReader\nC++: vtkTecplotReader *NewInstance()\n\n"},
  {"GetNumberOfVariables", PyvtkTecplotReader_GetNumberOfVariables, METH_VARARGS,
   "V.GetNumberOfVariables() -> int\nC++: virtual int GetNumberOfVariables()\n\nGet the number of all variables (including 3D coordinates).\n"},
  {"SetFileName", PyvtkTecplotReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: void SetFileName(const char *fileName)\n\nSpecify a Tecplot ASCII file for data loading.\n"},
  {"GetDataTitle", PyvtkTecplotReader_GetDataTitle, METH_VARARGS,
   "V.GetDataTitle() -> string\nC++: const char *GetDataTitle()\n\nGet the Tecplot data title.\n"},
  {"GetNumberOfBlocks", PyvtkTecplotReader_GetNumberOfBlocks, METH_VARARGS,
   "V.GetNumberOfBlocks() -> int\nC++: int GetNumberOfBlocks()\n\nGet the number of blocks (i.e., zones in Tecplot terms).\n"},
  {"GetBlockName", PyvtkTecplotReader_GetBlockName, METH_VARARGS,
   "V.GetBlockName(int) -> string\nC++: const char *GetBlockName(int blockIdx)\n\nGet the name of a block specified by a zero-based index. nullptr\nis returned for an invalid block index.\n"},
  {"GetNumberOfDataAttributes", PyvtkTecplotReader_GetNumberOfDataAttributes, METH_VARARGS,
   "V.GetNumberOfDataAttributes() -> int\nC++: int GetNumberOfDataAttributes()\n\nGet the number of standard data attributes (node-based and\ncell-based), excluding 3D coordinates.\n"},
  {"GetDataAttributeName", PyvtkTecplotReader_GetDataAttributeName, METH_VARARGS,
   "V.GetDataAttributeName(int) -> string\nC++: const char *GetDataAttributeName(int attrIndx)\n\nGet the name of a zero-based data attribute (not 3D coordinates).\nnullptr is returned for an invalid attribute index.\n"},
  {"IsDataAttributeCellBased", PyvtkTecplotReader_IsDataAttributeCellBased, METH_VARARGS,
   "V.IsDataAttributeCellBased(string) -> int\nC++: int IsDataAttributeCellBased(const char *attrName)\nV.IsDataAttributeCellBased(int) -> int\nC++: int IsDataAttributeCellBased(int attrIndx)\n\nGet the type (0 for node-based and 1 for cell-based) of a\nspecified data attribute (not 3D coordinates). -1 is returned for\nan invalid attribute name.\n"},
  {"GetNumberOfDataArrays", PyvtkTecplotReader_GetNumberOfDataArrays, METH_VARARGS,
   "V.GetNumberOfDataArrays() -> int\nC++: int GetNumberOfDataArrays()\n\nGet the number of all data attributes (point data and cell data).\n"},
  {"GetDataArrayName", PyvtkTecplotReader_GetDataArrayName, METH_VARARGS,
   "V.GetDataArrayName(int) -> string\nC++: const char *GetDataArrayName(int arrayIdx)\n\nGet the name of a data array specified by the zero-based index\n(arrayIdx).\n"},
  {"GetDataArrayStatus", PyvtkTecplotReader_GetDataArrayStatus, METH_VARARGS,
   "V.GetDataArrayStatus(string) -> int\nC++: int GetDataArrayStatus(const char *arayName)\n\nGet the status of a specific data array (0: un-selected; 1:\nselected).\n"},
  {"SetDataArrayStatus", PyvtkTecplotReader_SetDataArrayStatus, METH_VARARGS,
   "V.SetDataArrayStatus(string, int)\nC++: void SetDataArrayStatus(const char *arayName, int bChecked)\n\nSet the status of a specific data array (0: de-select; 1: select)\nspecified by the name.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTecplotReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOGeometryPython.vtkTecplotReader", // tp_name
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
  PyvtkTecplotReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTecplotReader_StaticNew()
{
  return vtkTecplotReader::New();
}

PyObject *PyvtkTecplotReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTecplotReader_Type, PyvtkTecplotReader_Methods,
    "vtkTecplotReader",
 &PyvtkTecplotReader_StaticNew);

  PyTypeObject *pytype = &PyvtkTecplotReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiBlockDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTecplotReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTecplotReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTecplotReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

