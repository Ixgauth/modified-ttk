// python wrapper for vtkGaussianCubeReader
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
#include "vtkGaussianCubeReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGaussianCubeReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGaussianCubeReader_ClassNew(); }

#ifndef DECLARED_PyvtkMoleculeReaderBase_ClassNew
extern "C" { PyObject *PyvtkMoleculeReaderBase_ClassNew(); }
#define DECLARED_PyvtkMoleculeReaderBase_ClassNew
#endif

static const char *PyvtkGaussianCubeReader_Doc =
  "vtkGaussianCubeReader - read ASCII Gaussian Cube Data files\n\n"
  "Superclass: vtkMoleculeReaderBase\n\n"
  "vtkGaussianCubeReader is a source object that reads ASCII files\n"
  "following the description in http://www.gaussian.com/00000430.htm The\n"
  "FileName must be specified.\n\n"
  "@par Thanks: Dr. Jean M. Favre who developed and contributed this\n"
  "class.\n\n";


static PyObject *
PyvtkGaussianCubeReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGaussianCubeReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianCubeReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianCubeReader *op = static_cast<vtkGaussianCubeReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGaussianCubeReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianCubeReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGaussianCubeReader *tempr = vtkGaussianCubeReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianCubeReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianCubeReader *op = static_cast<vtkGaussianCubeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGaussianCubeReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGaussianCubeReader::NewInstance());

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
PyvtkGaussianCubeReader_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianCubeReader *op = static_cast<vtkGaussianCubeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkGaussianCubeReader::GetTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianCubeReader_GetGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianCubeReader *op = static_cast<vtkGaussianCubeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetGridOutput() :
      op->vtkGaussianCubeReader::GetGridOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGaussianCubeReader_Methods[] = {
  {"IsTypeOf", PyvtkGaussianCubeReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGaussianCubeReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGaussianCubeReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGaussianCubeReader\nC++: static vtkGaussianCubeReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGaussianCubeReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGaussianCubeReader\nC++: vtkGaussianCubeReader *NewInstance()\n\n"},
  {"GetTransform", PyvtkGaussianCubeReader_GetTransform, METH_VARARGS,
   "V.GetTransform() -> vtkTransform\nC++: virtual vtkTransform *GetTransform()\n\n"},
  {"GetGridOutput", PyvtkGaussianCubeReader_GetGridOutput, METH_VARARGS,
   "V.GetGridOutput() -> vtkImageData\nC++: vtkImageData *GetGridOutput()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGaussianCubeReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOGeometryPython.vtkGaussianCubeReader", // tp_name
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
  PyvtkGaussianCubeReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGaussianCubeReader_StaticNew()
{
  return vtkGaussianCubeReader::New();
}

PyObject *PyvtkGaussianCubeReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGaussianCubeReader_Type, PyvtkGaussianCubeReader_Methods,
    "vtkGaussianCubeReader",
 &PyvtkGaussianCubeReader_StaticNew);

  PyTypeObject *pytype = &PyvtkGaussianCubeReader_Type;

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

void PyVTKAddFile_vtkGaussianCubeReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGaussianCubeReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGaussianCubeReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

