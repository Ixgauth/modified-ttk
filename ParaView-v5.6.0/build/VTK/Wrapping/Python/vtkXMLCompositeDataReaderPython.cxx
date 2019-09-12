// python wrapper for vtkXMLCompositeDataReader
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
#include "vtkXMLCompositeDataReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLCompositeDataReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLCompositeDataReader_ClassNew(); }

#ifndef DECLARED_PyvtkXMLReader_ClassNew
extern "C" { PyObject *PyvtkXMLReader_ClassNew(); }
#define DECLARED_PyvtkXMLReader_ClassNew
#endif

static const char *PyvtkXMLCompositeDataReader_Doc =
  "vtkXMLCompositeDataReader - Reader for multi-group datasets\n\n"
  "Superclass: vtkXMLReader\n\n"
  "vtkXMLCompositeDataReader reads the VTK XML multi-group data file\n"
  "format. XML multi-group data files are meta-files that point to a\n"
  "list of serial VTK XML files. When reading in parallel, it will\n"
  "distribute sub-blocks among processor. If the number of sub-blocks is\n"
  "less than the number of processors, some processors will not have any\n"
  "sub-blocks for that group. If the number of sub-blocks is larger than\n"
  "the number of processors, each processor will possibly have more than\n"
  "1 sub-block.\n\n";


static PyObject *
PyvtkXMLCompositeDataReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLCompositeDataReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataReader *op = static_cast<vtkXMLCompositeDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLCompositeDataReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLCompositeDataReader *tempr = vtkXMLCompositeDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataReader *op = static_cast<vtkXMLCompositeDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLCompositeDataReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLCompositeDataReader::NewInstance());

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
PyvtkXMLCompositeDataReader_SetPieceDistribution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceDistribution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataReader *op = static_cast<vtkXMLCompositeDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPieceDistribution(temp0);
    }
    else
    {
      op->vtkXMLCompositeDataReader::SetPieceDistribution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataReader_GetPieceDistributionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceDistributionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataReader *op = static_cast<vtkXMLCompositeDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPieceDistributionMinValue() :
      op->vtkXMLCompositeDataReader::GetPieceDistributionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataReader_GetPieceDistributionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceDistributionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataReader *op = static_cast<vtkXMLCompositeDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPieceDistributionMaxValue() :
      op->vtkXMLCompositeDataReader::GetPieceDistributionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataReader_GetPieceDistribution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceDistribution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataReader *op = static_cast<vtkXMLCompositeDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPieceDistribution() :
      op->vtkXMLCompositeDataReader::GetPieceDistribution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataReader *op = static_cast<vtkXMLCompositeDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataSet *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkXMLCompositeDataReader::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLCompositeDataReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataReader *op = static_cast<vtkXMLCompositeDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCompositeDataSet *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkXMLCompositeDataReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLCompositeDataReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkXMLCompositeDataReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLCompositeDataReader_GetOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return nullptr;
}


static PyMethodDef PyvtkXMLCompositeDataReader_Methods[] = {
  {"IsTypeOf", PyvtkXMLCompositeDataReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLCompositeDataReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLCompositeDataReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLCompositeDataReader\nC++: static vtkXMLCompositeDataReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLCompositeDataReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLCompositeDataReader\nC++: vtkXMLCompositeDataReader *NewInstance()\n\n"},
  {"SetPieceDistribution", PyvtkXMLCompositeDataReader_SetPieceDistribution, METH_VARARGS,
   "V.SetPieceDistribution(int)\nC++: virtual void SetPieceDistribution(int _arg)\n\n"},
  {"GetPieceDistributionMinValue", PyvtkXMLCompositeDataReader_GetPieceDistributionMinValue, METH_VARARGS,
   "V.GetPieceDistributionMinValue() -> int\nC++: virtual int GetPieceDistributionMinValue()\n\n"},
  {"GetPieceDistributionMaxValue", PyvtkXMLCompositeDataReader_GetPieceDistributionMaxValue, METH_VARARGS,
   "V.GetPieceDistributionMaxValue() -> int\nC++: virtual int GetPieceDistributionMaxValue()\n\n"},
  {"GetPieceDistribution", PyvtkXMLCompositeDataReader_GetPieceDistribution, METH_VARARGS,
   "V.GetPieceDistribution() -> int\nC++: virtual int GetPieceDistribution()\n\n"},
  {"GetOutput", PyvtkXMLCompositeDataReader_GetOutput, METH_VARARGS,
   "V.GetOutput() -> vtkCompositeDataSet\nC++: vtkCompositeDataSet *GetOutput()\nV.GetOutput(int) -> vtkCompositeDataSet\nC++: vtkCompositeDataSet *GetOutput(int)\n\nGet the output data object for a port on this algorithm.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLCompositeDataReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXMLPython.vtkXMLCompositeDataReader", // tp_name
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
  PyvtkXMLCompositeDataReader_Doc, // tp_doc
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

PyObject *PyvtkXMLCompositeDataReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLCompositeDataReader_Type, PyvtkXMLCompositeDataReader_Methods,
    "vtkXMLCompositeDataReader",
 nullptr);

  PyTypeObject *pytype = &PyvtkXMLCompositeDataReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkXMLReader_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "Block", vtkXMLCompositeDataReader::Block },
        { "Interleave", vtkXMLCompositeDataReader::Interleave },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLCompositeDataReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLCompositeDataReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLCompositeDataReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

