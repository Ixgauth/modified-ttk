// python wrapper for vtkGAMBITReader
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
#include "vtkGAMBITReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGAMBITReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGAMBITReader_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkGAMBITReader_Doc =
  "vtkGAMBITReader - reads a dataset in Fluent GAMBIT neutral file format\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkGAMBITReader creates an unstructured grid dataset. It reads ASCII\n"
  "files stored in GAMBIT neutral format, with optional data stored at\n"
  "the nodes or at the cells of the model. A cell-based fielddata stores\n"
  "the material id.\n\n"
  "@par Thanks: Thanks to Jean M. Favre (CSCS, Swiss Center for\n"
  "Scientific Computing) who developed this class. Please address all\n"
  "comments to Jean Favre (jfavre at cscs.ch)\n\n"
  "@sa\n"
  "vtkAVSucdReader\n\n";


static PyObject *
PyvtkGAMBITReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGAMBITReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGAMBITReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGAMBITReader *op = static_cast<vtkGAMBITReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGAMBITReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGAMBITReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGAMBITReader *tempr = vtkGAMBITReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGAMBITReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGAMBITReader *op = static_cast<vtkGAMBITReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGAMBITReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGAMBITReader::NewInstance());

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
PyvtkGAMBITReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGAMBITReader *op = static_cast<vtkGAMBITReader *>(vp);

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
      op->vtkGAMBITReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGAMBITReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGAMBITReader *op = static_cast<vtkGAMBITReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkGAMBITReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGAMBITReader_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGAMBITReader *op = static_cast<vtkGAMBITReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkGAMBITReader::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGAMBITReader_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGAMBITReader *op = static_cast<vtkGAMBITReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodes() :
      op->vtkGAMBITReader::GetNumberOfNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGAMBITReader_GetNumberOfNodeFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGAMBITReader *op = static_cast<vtkGAMBITReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodeFields() :
      op->vtkGAMBITReader::GetNumberOfNodeFields());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGAMBITReader_GetNumberOfCellFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGAMBITReader *op = static_cast<vtkGAMBITReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellFields() :
      op->vtkGAMBITReader::GetNumberOfCellFields());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGAMBITReader_Methods[] = {
  {"IsTypeOf", PyvtkGAMBITReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGAMBITReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGAMBITReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGAMBITReader\nC++: static vtkGAMBITReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGAMBITReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGAMBITReader\nC++: vtkGAMBITReader *NewInstance()\n\n"},
  {"SetFileName", PyvtkGAMBITReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify the file name of the GAMBIT data file to read.\n"},
  {"GetFileName", PyvtkGAMBITReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSpecify the file name of the GAMBIT data file to read.\n"},
  {"GetNumberOfCells", PyvtkGAMBITReader_GetNumberOfCells, METH_VARARGS,
   "V.GetNumberOfCells() -> int\nC++: virtual int GetNumberOfCells()\n\nGet the total number of cells. The number of cells is only valid\nafter a successful read of the data file is performed.\n"},
  {"GetNumberOfNodes", PyvtkGAMBITReader_GetNumberOfNodes, METH_VARARGS,
   "V.GetNumberOfNodes() -> int\nC++: virtual int GetNumberOfNodes()\n\nGet the total number of nodes. The number of nodes is only valid\nafter a successful read of the data file is performed.\n"},
  {"GetNumberOfNodeFields", PyvtkGAMBITReader_GetNumberOfNodeFields, METH_VARARGS,
   "V.GetNumberOfNodeFields() -> int\nC++: virtual int GetNumberOfNodeFields()\n\nGet the number of data components at the nodes and cells.\n"},
  {"GetNumberOfCellFields", PyvtkGAMBITReader_GetNumberOfCellFields, METH_VARARGS,
   "V.GetNumberOfCellFields() -> int\nC++: virtual int GetNumberOfCellFields()\n\nGet the number of data components at the nodes and cells.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGAMBITReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOGeometryPython.vtkGAMBITReader", // tp_name
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
  PyvtkGAMBITReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGAMBITReader_StaticNew()
{
  return vtkGAMBITReader::New();
}

PyObject *PyvtkGAMBITReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGAMBITReader_Type, PyvtkGAMBITReader_Methods,
    "vtkGAMBITReader",
 &PyvtkGAMBITReader_StaticNew);

  PyTypeObject *pytype = &PyvtkGAMBITReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGAMBITReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGAMBITReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGAMBITReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

