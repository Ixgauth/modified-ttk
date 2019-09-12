// python wrapper for vtkMoleculeReaderBase
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
#include "vtkMoleculeReaderBase.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMoleculeReaderBase(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMoleculeReaderBase_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkMoleculeReaderBase_Doc =
  "vtkMoleculeReaderBase - read Molecular Data files\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkMoleculeReaderBase is a source object that reads Molecule files\n"
  "The FileName must be specified\n\n"
  "@par Thanks: Dr. Jean M. Favre who developed and contributed this\n"
  "class\n\n";


static PyObject *
PyvtkMoleculeReaderBase_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMoleculeReaderBase::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMoleculeReaderBase::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMoleculeReaderBase *tempr = vtkMoleculeReaderBase::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMoleculeReaderBase *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMoleculeReaderBase::NewInstance());

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
PyvtkMoleculeReaderBase_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

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
      op->vtkMoleculeReaderBase::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkMoleculeReaderBase::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_SetBScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBScale(temp0);
    }
    else
    {
      op->vtkMoleculeReaderBase::SetBScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_GetBScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBScale() :
      op->vtkMoleculeReaderBase::GetBScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_SetHBScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHBScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHBScale(temp0);
    }
    else
    {
      op->vtkMoleculeReaderBase::SetHBScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_GetHBScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHBScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHBScale() :
      op->vtkMoleculeReaderBase::GetHBScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_GetNumberOfAtoms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAtoms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAtoms() :
      op->vtkMoleculeReaderBase::GetNumberOfAtoms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMoleculeReaderBase_Methods[] = {
  {"IsTypeOf", PyvtkMoleculeReaderBase_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMoleculeReaderBase_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMoleculeReaderBase_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMoleculeReaderBase\nC++: static vtkMoleculeReaderBase *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMoleculeReaderBase_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMoleculeReaderBase\nC++: vtkMoleculeReaderBase *NewInstance()\n\n"},
  {"SetFileName", PyvtkMoleculeReaderBase_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\n"},
  {"GetFileName", PyvtkMoleculeReaderBase_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\n"},
  {"SetBScale", PyvtkMoleculeReaderBase_SetBScale, METH_VARARGS,
   "V.SetBScale(float)\nC++: virtual void SetBScale(double _arg)\n\nA scaling factor to compute bonds between non-hydrogen atoms\n"},
  {"GetBScale", PyvtkMoleculeReaderBase_GetBScale, METH_VARARGS,
   "V.GetBScale() -> float\nC++: virtual double GetBScale()\n\nA scaling factor to compute bonds between non-hydrogen atoms\n"},
  {"SetHBScale", PyvtkMoleculeReaderBase_SetHBScale, METH_VARARGS,
   "V.SetHBScale(float)\nC++: virtual void SetHBScale(double _arg)\n\nA scaling factor to compute bonds with hydrogen atoms.\n"},
  {"GetHBScale", PyvtkMoleculeReaderBase_GetHBScale, METH_VARARGS,
   "V.GetHBScale() -> float\nC++: virtual double GetHBScale()\n\nA scaling factor to compute bonds with hydrogen atoms.\n"},
  {"GetNumberOfAtoms", PyvtkMoleculeReaderBase_GetNumberOfAtoms, METH_VARARGS,
   "V.GetNumberOfAtoms() -> int\nC++: virtual int GetNumberOfAtoms()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMoleculeReaderBase_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOGeometryPython.vtkMoleculeReaderBase", // tp_name
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
  PyvtkMoleculeReaderBase_Doc, // tp_doc
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

PyObject *PyvtkMoleculeReaderBase_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMoleculeReaderBase_Type, PyvtkMoleculeReaderBase_Methods,
    "vtkMoleculeReaderBase",
 nullptr);

  PyTypeObject *pytype = &PyvtkMoleculeReaderBase_Type;

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

void PyVTKAddFile_vtkMoleculeReaderBase(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMoleculeReaderBase_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMoleculeReaderBase", o) != 0)
  {
    Py_DECREF(o);
  }

}

