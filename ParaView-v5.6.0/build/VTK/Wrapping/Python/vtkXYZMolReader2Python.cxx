// python wrapper for vtkXYZMolReader2
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
#include "vtkXYZMolReader2.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXYZMolReader2(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXYZMolReader2_ClassNew(); }

#ifndef DECLARED_PyvtkMoleculeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMoleculeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMoleculeAlgorithm_ClassNew
#endif

static const char *PyvtkXYZMolReader2_Doc =
  "vtkXYZMolReader2 - read Molecular Data files\n\n"
  "Superclass: vtkMoleculeAlgorithm\n\n"
  "vtkXYZMolReader2 is a source object that reads Molecule files The\n"
  "reader will detect multiple timesteps in an XYZ molecule file.\n\n"
  "@par Thanks: Dr. Jean M. Favre who developed and contributed this\n"
  "class\n\n";


static PyObject *
PyvtkXYZMolReader2_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXYZMolReader2::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYZMolReader2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYZMolReader2 *op = static_cast<vtkXYZMolReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXYZMolReader2::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYZMolReader2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXYZMolReader2 *tempr = vtkXYZMolReader2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYZMolReader2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYZMolReader2 *op = static_cast<vtkXYZMolReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXYZMolReader2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXYZMolReader2::NewInstance());

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
PyvtkXYZMolReader2_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYZMolReader2 *op = static_cast<vtkXYZMolReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMolecule *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkXYZMolReader2::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYZMolReader2_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYZMolReader2 *op = static_cast<vtkXYZMolReader2 *>(vp);

  vtkMolecule *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMolecule"))
  {
    if (ap.IsBound())
    {
      op->SetOutput(temp0);
    }
    else
    {
      op->vtkXYZMolReader2::SetOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYZMolReader2_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYZMolReader2 *op = static_cast<vtkXYZMolReader2 *>(vp);

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
      op->vtkXYZMolReader2::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYZMolReader2_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYZMolReader2 *op = static_cast<vtkXYZMolReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkXYZMolReader2::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXYZMolReader2_Methods[] = {
  {"IsTypeOf", PyvtkXYZMolReader2_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXYZMolReader2_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXYZMolReader2_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXYZMolReader2\nC++: static vtkXYZMolReader2 *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXYZMolReader2_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXYZMolReader2\nC++: vtkXYZMolReader2 *NewInstance()\n\n"},
  {"GetOutput", PyvtkXYZMolReader2_GetOutput, METH_VARARGS,
   "V.GetOutput() -> vtkMolecule\nC++: vtkMolecule *GetOutput()\n\nGet/Set the output (vtkMolecule) that the reader will fill\n"},
  {"SetOutput", PyvtkXYZMolReader2_SetOutput, METH_VARARGS,
   "V.SetOutput(vtkMolecule)\nC++: void SetOutput(vtkMolecule *) override;\n\nGet/Set the output (vtkMolecule) that the reader will fill\n"},
  {"SetFileName", PyvtkXYZMolReader2_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nGet/Set the name of the XYZ Molecule file\n"},
  {"GetFileName", PyvtkXYZMolReader2_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nGet/Set the name of the XYZ Molecule file\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXYZMolReader2_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkDomainsChemistryPython.vtkXYZMolReader2", // tp_name
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
  PyvtkXYZMolReader2_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXYZMolReader2_StaticNew()
{
  return vtkXYZMolReader2::New();
}

PyObject *PyvtkXYZMolReader2_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXYZMolReader2_Type, PyvtkXYZMolReader2_Methods,
    "vtkXYZMolReader2",
 &PyvtkXYZMolReader2_StaticNew);

  PyTypeObject *pytype = &PyvtkXYZMolReader2_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMoleculeAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXYZMolReader2(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXYZMolReader2_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXYZMolReader2", o) != 0)
  {
    Py_DECREF(o);
  }

}

