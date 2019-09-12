// python wrapper for vtkMotionFXCFGReader
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
#include "vtkMotionFXCFGReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMotionFXCFGReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMotionFXCFGReader_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkMotionFXCFGReader_Doc =
  "vtkMotionFXCFGReader - reader for MotionFX motion definitions cfg\nfiles.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "MotionFX files comprise of `motion`s for a collection of STL files.\n"
  "The motions define the transformations to apply to STL geometry to\n"
  "emulate motion like translation, rotation, planetary motion, etc.\n\n"
  "This reader reads such a CFG file and produces a temporal output for\n"
  "the time range defined in the file. The resolution of time can be\n"
  "controlled using the `SetTimeResolution` method. The output is a\n"
  "multiblock dataset with blocks for each of bodies, identified by an\n"
  "STL file, in the cfg file.\n\n"
  "The reader uses PEGTL (https://github.com/taocpp/PEGTL) to define and\n"
  "parse the grammar for the CFG file.\n\n";


static PyObject *
PyvtkMotionFXCFGReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMotionFXCFGReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMotionFXCFGReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMotionFXCFGReader *op = static_cast<vtkMotionFXCFGReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMotionFXCFGReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMotionFXCFGReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMotionFXCFGReader *tempr = vtkMotionFXCFGReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMotionFXCFGReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMotionFXCFGReader *op = static_cast<vtkMotionFXCFGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMotionFXCFGReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMotionFXCFGReader::NewInstance());

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
PyvtkMotionFXCFGReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMotionFXCFGReader *op = static_cast<vtkMotionFXCFGReader *>(vp);

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
      op->vtkMotionFXCFGReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMotionFXCFGReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMotionFXCFGReader *op = static_cast<vtkMotionFXCFGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkMotionFXCFGReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMotionFXCFGReader_SetTimeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMotionFXCFGReader *op = static_cast<vtkMotionFXCFGReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeResolution(temp0);
    }
    else
    {
      op->vtkMotionFXCFGReader::SetTimeResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMotionFXCFGReader_GetTimeResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMotionFXCFGReader *op = static_cast<vtkMotionFXCFGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeResolutionMinValue() :
      op->vtkMotionFXCFGReader::GetTimeResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMotionFXCFGReader_GetTimeResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMotionFXCFGReader *op = static_cast<vtkMotionFXCFGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeResolutionMaxValue() :
      op->vtkMotionFXCFGReader::GetTimeResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMotionFXCFGReader_GetTimeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMotionFXCFGReader *op = static_cast<vtkMotionFXCFGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeResolution() :
      op->vtkMotionFXCFGReader::GetTimeResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMotionFXCFGReader_Methods[] = {
  {"IsTypeOf", PyvtkMotionFXCFGReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMotionFXCFGReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMotionFXCFGReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMotionFXCFGReader\nC++: static vtkMotionFXCFGReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMotionFXCFGReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMotionFXCFGReader\nC++: vtkMotionFXCFGReader *NewInstance()\n\n"},
  {"SetFileName", PyvtkMotionFXCFGReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: void SetFileName(const char *fname)\n\nGet/Set the filename.\n"},
  {"GetFileName", PyvtkMotionFXCFGReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: const char *GetFileName()\n\nGet/Set the filename.\n"},
  {"SetTimeResolution", PyvtkMotionFXCFGReader_SetTimeResolution, METH_VARARGS,
   "V.SetTimeResolution(int)\nC++: virtual void SetTimeResolution(int _arg)\n\nGet/Set the time resolution for timesteps produced by the reader.\n"},
  {"GetTimeResolutionMinValue", PyvtkMotionFXCFGReader_GetTimeResolutionMinValue, METH_VARARGS,
   "V.GetTimeResolutionMinValue() -> int\nC++: virtual int GetTimeResolutionMinValue()\n\nGet/Set the time resolution for timesteps produced by the reader.\n"},
  {"GetTimeResolutionMaxValue", PyvtkMotionFXCFGReader_GetTimeResolutionMaxValue, METH_VARARGS,
   "V.GetTimeResolutionMaxValue() -> int\nC++: virtual int GetTimeResolutionMaxValue()\n\nGet/Set the time resolution for timesteps produced by the reader.\n"},
  {"GetTimeResolution", PyvtkMotionFXCFGReader_GetTimeResolution, METH_VARARGS,
   "V.GetTimeResolution() -> int\nC++: virtual int GetTimeResolution()\n\nGet/Set the time resolution for timesteps produced by the reader.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMotionFXCFGReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOMotionFXPython.vtkMotionFXCFGReader", // tp_name
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
  PyvtkMotionFXCFGReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMotionFXCFGReader_StaticNew()
{
  return vtkMotionFXCFGReader::New();
}

PyObject *PyvtkMotionFXCFGReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMotionFXCFGReader_Type, PyvtkMotionFXCFGReader_Methods,
    "vtkMotionFXCFGReader",
 &PyvtkMotionFXCFGReader_StaticNew);

  PyTypeObject *pytype = &PyvtkMotionFXCFGReader_Type;

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

void PyVTKAddFile_vtkMotionFXCFGReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMotionFXCFGReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMotionFXCFGReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

