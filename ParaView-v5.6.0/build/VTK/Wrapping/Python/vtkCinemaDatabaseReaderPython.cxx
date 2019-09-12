// python wrapper for vtkCinemaDatabaseReader
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
#include "vtkCinemaDatabaseReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCinemaDatabaseReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCinemaDatabaseReader_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkCinemaDatabaseReader_Doc =
  "vtkCinemaDatabaseReader - reader for a Cinema database.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkCinemaDatabaseReader readers Cinema database files. It produces an\n"
  "output polydata, which is only has relevant metadata used by\n"
  "vtkCinemaLayerRepresentation and vtkCinemaLayerMapper to render\n"
  "cinema layers in a Render View.\n\n";


static PyObject *
PyvtkCinemaDatabaseReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCinemaDatabaseReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaDatabaseReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaDatabaseReader *op = static_cast<vtkCinemaDatabaseReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCinemaDatabaseReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaDatabaseReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCinemaDatabaseReader *tempr = vtkCinemaDatabaseReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaDatabaseReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaDatabaseReader *op = static_cast<vtkCinemaDatabaseReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCinemaDatabaseReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCinemaDatabaseReader::NewInstance());

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
PyvtkCinemaDatabaseReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaDatabaseReader *op = static_cast<vtkCinemaDatabaseReader *>(vp);

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
      op->vtkCinemaDatabaseReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaDatabaseReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaDatabaseReader *op = static_cast<vtkCinemaDatabaseReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkCinemaDatabaseReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaDatabaseReader_SetPipelineObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPipelineObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaDatabaseReader *op = static_cast<vtkCinemaDatabaseReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPipelineObject(temp0);
    }
    else
    {
      op->vtkCinemaDatabaseReader::SetPipelineObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaDatabaseReader_GetPipelineObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPipelineObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaDatabaseReader *op = static_cast<vtkCinemaDatabaseReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPipelineObject() :
      op->vtkCinemaDatabaseReader::GetPipelineObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaDatabaseReader_ClearControlParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearControlParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaDatabaseReader *op = static_cast<vtkCinemaDatabaseReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ClearControlParameter(temp0);
    }
    else
    {
      op->vtkCinemaDatabaseReader::ClearControlParameter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaDatabaseReader_EnableControlParameterValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableControlParameterValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaDatabaseReader *op = static_cast<vtkCinemaDatabaseReader *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->EnableControlParameterValue(temp0, temp1);
    }
    else
    {
      op->vtkCinemaDatabaseReader::EnableControlParameterValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCinemaDatabaseReader_EnableControlParameterValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableControlParameterValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaDatabaseReader *op = static_cast<vtkCinemaDatabaseReader *>(vp);

  const char *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->EnableControlParameterValue(temp0, temp1);
    }
    else
    {
      op->vtkCinemaDatabaseReader::EnableControlParameterValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCinemaDatabaseReader_EnableControlParameterValue_Methods[] = {
  {nullptr, PyvtkCinemaDatabaseReader_EnableControlParameterValue_s1, METH_VARARGS,
   "@zz"},
  {nullptr, PyvtkCinemaDatabaseReader_EnableControlParameterValue_s2, METH_VARARGS,
   "@zd"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCinemaDatabaseReader_EnableControlParameterValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCinemaDatabaseReader_EnableControlParameterValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EnableControlParameterValue");
  return nullptr;
}


static PyMethodDef PyvtkCinemaDatabaseReader_Methods[] = {
  {"IsTypeOf", PyvtkCinemaDatabaseReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCinemaDatabaseReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCinemaDatabaseReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCinemaDatabaseReader\nC++: static vtkCinemaDatabaseReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCinemaDatabaseReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCinemaDatabaseReader\nC++: vtkCinemaDatabaseReader *NewInstance()\n\n"},
  {"SetFileName", PyvtkCinemaDatabaseReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSet the filename for the index file for the database (typically\nthe info.json).\n"},
  {"GetFileName", PyvtkCinemaDatabaseReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSet the filename for the index file for the database (typically\nthe info.json).\n"},
  {"SetPipelineObject", PyvtkCinemaDatabaseReader_SetPipelineObject, METH_VARARGS,
   "V.SetPipelineObject(string)\nC++: virtual void SetPipelineObject(const char *_arg)\n\nSelect which pipeline object from the cinema database does this\nreader read.\n"},
  {"GetPipelineObject", PyvtkCinemaDatabaseReader_GetPipelineObject, METH_VARARGS,
   "V.GetPipelineObject() -> string\nC++: virtual char *GetPipelineObject()\n\nSelect which pipeline object from the cinema database does this\nreader read.\n"},
  {"ClearControlParameter", PyvtkCinemaDatabaseReader_ClearControlParameter, METH_VARARGS,
   "V.ClearControlParameter(string)\nC++: void ClearControlParameter(const char *pname)\n\nAPI to select values for control parameter that form the query\nused to obtain layer produced by this reader.\n"},
  {"EnableControlParameterValue", PyvtkCinemaDatabaseReader_EnableControlParameterValue, METH_VARARGS,
   "V.EnableControlParameterValue(string, string)\nC++: void EnableControlParameterValue(const char *pname,\n    const char *value)\nV.EnableControlParameterValue(string, float)\nC++: void EnableControlParameterValue(const char *pname,\n    double value)\n\nAPI to select values for control parameter that form the query\nused to obtain layer produced by this reader.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCinemaDatabaseReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVCinemaReaderPython.vtkCinemaDatabaseReader", // tp_name
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
  PyvtkCinemaDatabaseReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCinemaDatabaseReader_StaticNew()
{
  return vtkCinemaDatabaseReader::New();
}

PyObject *PyvtkCinemaDatabaseReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCinemaDatabaseReader_Type, PyvtkCinemaDatabaseReader_Methods,
    "vtkCinemaDatabaseReader",
 &PyvtkCinemaDatabaseReader_StaticNew);

  PyTypeObject *pytype = &PyvtkCinemaDatabaseReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCinemaDatabaseReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCinemaDatabaseReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCinemaDatabaseReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

