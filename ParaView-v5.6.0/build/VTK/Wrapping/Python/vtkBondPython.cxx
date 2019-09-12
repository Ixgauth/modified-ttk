// python wrapper for vtkBond
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
#include "vtkAtom.h"
#include "vtkBond.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBond(PyObject *); }

static const char *PyvtkBond_Doc =
  "vtkBond - convenience proxy for vtkMolecule\n\n"

  "vtkBond(const &vtkBond)\n";


static PyObject *
PyvtkBond_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBond *op = static_cast<vtkBond *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetId();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBond_GetMolecule(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMolecule");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBond *op = static_cast<vtkBond *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMolecule *tempr = op->GetMolecule();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBond_GetBeginAtomId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBeginAtomId");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBond *op = static_cast<vtkBond *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetBeginAtomId();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBond_GetEndAtomId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndAtomId");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBond *op = static_cast<vtkBond *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetEndAtomId();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBond_GetBeginAtom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBeginAtom");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBond *op = static_cast<vtkBond *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAtom tempr = op->GetBeginAtom();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkAtom");
    }
  }

  return result;
}


static PyObject *
PyvtkBond_GetEndAtom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndAtom");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBond *op = static_cast<vtkBond *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAtom tempr = op->GetEndAtom();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkAtom");
    }
  }

  return result;
}


static PyObject *
PyvtkBond_GetOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrder");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBond *op = static_cast<vtkBond *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned short tempr = op->GetOrder();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBond_GetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBond *op = static_cast<vtkBond *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->GetLength();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBond_Methods[] = {
  {"GetId", PyvtkBond_GetId, METH_VARARGS,
   "V.GetId() -> int\nC++: vtkIdType GetId()\n\nReturn the Id used to identify this bond in the parent molecule.\n"},
  {"GetMolecule", PyvtkBond_GetMolecule, METH_VARARGS,
   "V.GetMolecule() -> vtkMolecule\nC++: vtkMolecule *GetMolecule()\n\nReturn the parent molecule of this bond.\n"},
  {"GetBeginAtomId", PyvtkBond_GetBeginAtomId, METH_VARARGS,
   "V.GetBeginAtomId() -> int\nC++: vtkIdType GetBeginAtomId()\n\nGet the starting / ending atom ids for this bond.\n"},
  {"GetEndAtomId", PyvtkBond_GetEndAtomId, METH_VARARGS,
   "V.GetEndAtomId() -> int\nC++: vtkIdType GetEndAtomId()\n\nGet the starting / ending atom ids for this bond.\n"},
  {"GetBeginAtom", PyvtkBond_GetBeginAtom, METH_VARARGS,
   "V.GetBeginAtom() -> vtkAtom\nC++: vtkAtom GetBeginAtom()\n\nGet a vtkAtom object that refers to the starting / ending atom\nfor this bond.\n"},
  {"GetEndAtom", PyvtkBond_GetEndAtom, METH_VARARGS,
   "V.GetEndAtom() -> vtkAtom\nC++: vtkAtom GetEndAtom()\n\nGet a vtkAtom object that refers to the starting / ending atom\nfor this bond.\n"},
  {"GetOrder", PyvtkBond_GetOrder, METH_VARARGS,
   "V.GetOrder() -> int\nC++: unsigned short GetOrder()\n\nGet the bond order for this bond.\n"},
  {"GetLength", PyvtkBond_GetLength, METH_VARARGS,
   "V.GetLength() -> float\nC++: double GetLength()\n\nGet the distance between the bonded atoms.\n\n*\n\note This function is faster than vtkMolecule::GetBondLength and\n* should be used when possible.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkBond_vtkBond(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkBond");

  vtkBond *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkBond"))
  {
    vtkBond *op = new vtkBond(*temp0);

    result = PyVTKSpecialObject_New("vtkBond", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkBond_vtkBond_Methods[] = {
  {nullptr, PyvtkBond_vtkBond, METH_VARARGS,
   "@W vtkBond"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkBond_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkBond_vtkBond(nullptr, args);
}

static void PyvtkBond_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkBond *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkBond_Hash(PyObject *self)
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

static PyTypeObject PyvtkBond_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkBond", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkBond_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkBond_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkBond_Doc, // tp_doc
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
  PyvtkBond_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkBond_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkBond(*static_cast<const vtkBond*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBond_TypeNew(); }

PyObject *PyvtkBond_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkBond_Type,
    PyvtkBond_Methods,
    PyvtkBond_vtkBond_Methods,
    &PyvtkBond_CCopy);

  PyTypeObject *pytype = &PyvtkBond_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBond(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBond_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkBond", o) != 0)
  {
    Py_DECREF(o);
  }

}

