// python wrapper for vtkXYZMolReader
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
#include "vtkXYZMolReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXYZMolReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXYZMolReader_ClassNew(); }

#ifndef DECLARED_PyvtkMoleculeReaderBase_ClassNew
extern "C" { PyObject *PyvtkMoleculeReaderBase_ClassNew(); }
#define DECLARED_PyvtkMoleculeReaderBase_ClassNew
#endif

static const char *PyvtkXYZMolReader_Doc =
  "vtkXYZMolReader - read Molecular Data files\n\n"
  "Superclass: vtkMoleculeReaderBase\n\n"
  "vtkXYZMolReader is a source object that reads Molecule files The\n"
  "FileName must be specified\n\n"
  "@par Thanks: Dr. Jean M. Favre who developed and contributed this\n"
  "class\n\n";


static PyObject *
PyvtkXYZMolReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXYZMolReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYZMolReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYZMolReader *op = static_cast<vtkXYZMolReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXYZMolReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYZMolReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXYZMolReader *tempr = vtkXYZMolReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYZMolReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYZMolReader *op = static_cast<vtkXYZMolReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXYZMolReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXYZMolReader::NewInstance());

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
PyvtkXYZMolReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYZMolReader *op = static_cast<vtkXYZMolReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkXYZMolReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYZMolReader_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYZMolReader *op = static_cast<vtkXYZMolReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeStep(temp0);
    }
    else
    {
      op->vtkXYZMolReader::SetTimeStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYZMolReader_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYZMolReader *op = static_cast<vtkXYZMolReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkXYZMolReader::GetTimeStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYZMolReader_GetMaxTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYZMolReader *op = static_cast<vtkXYZMolReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxTimeStep() :
      op->vtkXYZMolReader::GetMaxTimeStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXYZMolReader_Methods[] = {
  {"IsTypeOf", PyvtkXYZMolReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXYZMolReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXYZMolReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXYZMolReader\nC++: static vtkXYZMolReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXYZMolReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXYZMolReader\nC++: vtkXYZMolReader *NewInstance()\n\n"},
  {"CanReadFile", PyvtkXYZMolReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *name)\n\nTest whether the file with the given name can be read by this\nreader.\n"},
  {"SetTimeStep", PyvtkXYZMolReader_SetTimeStep, METH_VARARGS,
   "V.SetTimeStep(int)\nC++: virtual void SetTimeStep(int _arg)\n\nSet the current time step. It should be greater than 0 and\nsmaller than MaxTimeStep.\n"},
  {"GetTimeStep", PyvtkXYZMolReader_GetTimeStep, METH_VARARGS,
   "V.GetTimeStep() -> int\nC++: virtual int GetTimeStep()\n\nSet the current time step. It should be greater than 0 and\nsmaller than MaxTimeStep.\n"},
  {"GetMaxTimeStep", PyvtkXYZMolReader_GetMaxTimeStep, METH_VARARGS,
   "V.GetMaxTimeStep() -> int\nC++: virtual int GetMaxTimeStep()\n\nGet the maximum time step.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXYZMolReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOGeometryPython.vtkXYZMolReader", // tp_name
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
  PyvtkXYZMolReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXYZMolReader_StaticNew()
{
  return vtkXYZMolReader::New();
}

PyObject *PyvtkXYZMolReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXYZMolReader_Type, PyvtkXYZMolReader_Methods,
    "vtkXYZMolReader",
 &PyvtkXYZMolReader_StaticNew);

  PyTypeObject *pytype = &PyvtkXYZMolReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMoleculeReaderBase_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXYZMolReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXYZMolReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXYZMolReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

