// python wrapper for vtkMaterialInterfaceProcessRing
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkMaterialInterfaceProcessRing.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMaterialInterfaceProcessRing(PyObject *); }

static const char *PyvtkMaterialInterfaceProcessRing_Doc =
  "vtkMaterialInterfaceProcessRing - Data structure used to distribute\nwork amongst available processes.\n\n"
  "The buffer can be initialized from a process priority queue such that\n"
  "only those processes with loading less than a specified tolerance are\n"
  "included.\n\n"
  "vtkMaterialInterfaceProcessRing()\n"
  "vtkMaterialInterfaceProcessRing(\n    const &vtkMaterialInterfaceProcessRing)\n";


static PyObject *
PyvtkMaterialInterfaceProcessRing_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceProcessRing *op = static_cast<vtkMaterialInterfaceProcessRing *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Clear();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceProcessRing_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceProcessRing *op = static_cast<vtkMaterialInterfaceProcessRing *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->Initialize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceProcessRing_GetNextId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextId");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceProcessRing *op = static_cast<vtkMaterialInterfaceProcessRing *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetNextId();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceProcessRing_Print(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Print");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceProcessRing *op = static_cast<vtkMaterialInterfaceProcessRing *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Print();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMaterialInterfaceProcessRing_Methods[] = {
  {"Clear", PyvtkMaterialInterfaceProcessRing_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nReturn the object to an empty state.\n"},
  {"Initialize", PyvtkMaterialInterfaceProcessRing_Initialize, METH_VARARGS,
   "V.Initialize(int)\nC++: void Initialize(int nProcs)\n\nSize buffer and point to first element.\n"},
  {"GetNextId", PyvtkMaterialInterfaceProcessRing_GetNextId, METH_VARARGS,
   "V.GetNextId() -> int\nC++: vtkIdType GetNextId()\n\nGet the next process id from the ring.\n"},
  {"Print", PyvtkMaterialInterfaceProcessRing_Print, METH_VARARGS,
   "V.Print()\nC++: void Print()\n\nPrint the state of the ring.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkMaterialInterfaceProcessRing_vtkMaterialInterfaceProcessRing_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMaterialInterfaceProcessRing");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMaterialInterfaceProcessRing *op = new vtkMaterialInterfaceProcessRing();

    result = PyVTKSpecialObject_New("vtkMaterialInterfaceProcessRing", op);
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceProcessRing_vtkMaterialInterfaceProcessRing_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMaterialInterfaceProcessRing");

  vtkMaterialInterfaceProcessRing *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkMaterialInterfaceProcessRing"))
  {
    vtkMaterialInterfaceProcessRing *op = new vtkMaterialInterfaceProcessRing(*temp0);

    result = PyVTKSpecialObject_New("vtkMaterialInterfaceProcessRing", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMaterialInterfaceProcessRing_vtkMaterialInterfaceProcessRing_Methods[] = {
  {nullptr, PyvtkMaterialInterfaceProcessRing_vtkMaterialInterfaceProcessRing_s2, METH_VARARGS,
   "@W vtkMaterialInterfaceProcessRing"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMaterialInterfaceProcessRing_vtkMaterialInterfaceProcessRing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMaterialInterfaceProcessRing_vtkMaterialInterfaceProcessRing_s1(self, args);
    case 1:
      return PyvtkMaterialInterfaceProcessRing_vtkMaterialInterfaceProcessRing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkMaterialInterfaceProcessRing");
  return nullptr;
}


static PyObject *
PyvtkMaterialInterfaceProcessRing_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkMaterialInterfaceProcessRing_vtkMaterialInterfaceProcessRing(nullptr, args);
}

static void PyvtkMaterialInterfaceProcessRing_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkMaterialInterfaceProcessRing *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkMaterialInterfaceProcessRing_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkMaterialInterfaceProcessRing_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkMaterialInterfaceProcessRing", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkMaterialInterfaceProcessRing_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkMaterialInterfaceProcessRing_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkMaterialInterfaceProcessRing_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkMaterialInterfaceProcessRing_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkMaterialInterfaceProcessRing_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkMaterialInterfaceProcessRing(*static_cast<const vtkMaterialInterfaceProcessRing*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMaterialInterfaceProcessRing_TypeNew(); }

PyObject *PyvtkMaterialInterfaceProcessRing_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkMaterialInterfaceProcessRing_Type,
    PyvtkMaterialInterfaceProcessRing_Methods,
    PyvtkMaterialInterfaceProcessRing_vtkMaterialInterfaceProcessRing_Methods,
    &PyvtkMaterialInterfaceProcessRing_CCopy);

  PyTypeObject *pytype = &PyvtkMaterialInterfaceProcessRing_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMaterialInterfaceProcessRing(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMaterialInterfaceProcessRing_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkMaterialInterfaceProcessRing", o) != 0)
  {
    Py_DECREF(o);
  }

}

