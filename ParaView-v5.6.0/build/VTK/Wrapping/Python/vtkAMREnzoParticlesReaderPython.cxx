// python wrapper for vtkAMREnzoParticlesReader
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
#include "vtkAMREnzoParticlesReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMREnzoParticlesReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMREnzoParticlesReader_ClassNew(); }

#ifndef DECLARED_PyvtkAMRBaseParticlesReader_ClassNew
extern "C" { PyObject *PyvtkAMRBaseParticlesReader_ClassNew(); }
#define DECLARED_PyvtkAMRBaseParticlesReader_ClassNew
#endif

static const char *PyvtkAMREnzoParticlesReader_Doc =
  "vtkAMREnzoParticlesReader -  A concrete instance of the\nvtkAMRBaseParticlesReader which provides\n functionality for loading ENZO AMR particle datasets from ENZO.\n\n"
  "Superclass: vtkAMRBaseParticlesReader\n\n"
  "@sa\n"
  " vtkAMRBaseParticlesReader\n\n";


static PyObject *
PyvtkAMREnzoParticlesReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMREnzoParticlesReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoParticlesReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoParticlesReader *op = static_cast<vtkAMREnzoParticlesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMREnzoParticlesReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoParticlesReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMREnzoParticlesReader *tempr = vtkAMREnzoParticlesReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoParticlesReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoParticlesReader *op = static_cast<vtkAMREnzoParticlesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMREnzoParticlesReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMREnzoParticlesReader::NewInstance());

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
PyvtkAMREnzoParticlesReader_SetParticleType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoParticlesReader *op = static_cast<vtkAMREnzoParticlesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParticleType(temp0);
    }
    else
    {
      op->vtkAMREnzoParticlesReader::SetParticleType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoParticlesReader_GetParticleType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoParticlesReader *op = static_cast<vtkAMREnzoParticlesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetParticleType() :
      op->vtkAMREnzoParticlesReader::GetParticleType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoParticlesReader_GetTotalNumberOfParticles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfParticles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoParticlesReader *op = static_cast<vtkAMREnzoParticlesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTotalNumberOfParticles() :
      op->vtkAMREnzoParticlesReader::GetTotalNumberOfParticles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAMREnzoParticlesReader_Methods[] = {
  {"IsTypeOf", PyvtkAMREnzoParticlesReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMREnzoParticlesReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMREnzoParticlesReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAMREnzoParticlesReader\nC++: static vtkAMREnzoParticlesReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMREnzoParticlesReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAMREnzoParticlesReader\nC++: vtkAMREnzoParticlesReader *NewInstance()\n\n"},
  {"SetParticleType", PyvtkAMREnzoParticlesReader_SetParticleType, METH_VARARGS,
   "V.SetParticleType(int)\nC++: virtual void SetParticleType(int _arg)\n\nReturns the requested particle type.\n"},
  {"GetParticleType", PyvtkAMREnzoParticlesReader_GetParticleType, METH_VARARGS,
   "V.GetParticleType() -> int\nC++: virtual int GetParticleType()\n\nReturns the requested particle type.\n"},
  {"GetTotalNumberOfParticles", PyvtkAMREnzoParticlesReader_GetTotalNumberOfParticles, METH_VARARGS,
   "V.GetTotalNumberOfParticles() -> int\nC++: int GetTotalNumberOfParticles() override;\n\nSee vtkAMRBaseParticlesReader::GetTotalNumberOfParticles.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAMREnzoParticlesReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOAMRPython.vtkAMREnzoParticlesReader", // tp_name
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
  PyvtkAMREnzoParticlesReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMREnzoParticlesReader_StaticNew()
{
  return vtkAMREnzoParticlesReader::New();
}

PyObject *PyvtkAMREnzoParticlesReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAMREnzoParticlesReader_Type, PyvtkAMREnzoParticlesReader_Methods,
    "vtkAMREnzoParticlesReader",
 &PyvtkAMREnzoParticlesReader_StaticNew);

  PyTypeObject *pytype = &PyvtkAMREnzoParticlesReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAMRBaseParticlesReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMREnzoParticlesReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMREnzoParticlesReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMREnzoParticlesReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

