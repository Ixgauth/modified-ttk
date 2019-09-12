// python wrapper for vtkAtom
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
#include "vtkVector.h"
#include "vtkAtom.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAtom(PyObject *); }

static const char *PyvtkAtom_Doc =
  "vtkAtom - convenience proxy for vtkMolecule\n\n"

  "vtkAtom(const &vtkAtom)\n";


static PyObject *
PyvtkAtom_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAtom *op = static_cast<vtkAtom *>(vp);

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
PyvtkAtom_GetMolecule(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMolecule");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAtom *op = static_cast<vtkAtom *>(vp);

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
PyvtkAtom_GetAtomicNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomicNumber");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAtom *op = static_cast<vtkAtom *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned short tempr = op->GetAtomicNumber();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAtom_SetAtomicNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomicNumber");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAtom *op = static_cast<vtkAtom *>(vp);

  unsigned short temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetAtomicNumber(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAtom_GetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAtom *op = static_cast<vtkAtom *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetPosition(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAtom_GetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAtom *op = static_cast<vtkAtom *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector3f tempr = op->GetPosition();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3f");
    }
  }

  return result;
}

static PyObject *
PyvtkAtom_GetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkAtom_GetPosition_s1(self, args);
    case 0:
      return PyvtkAtom_GetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPosition");
  return nullptr;
}



static PyObject *
PyvtkAtom_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAtom *op = static_cast<vtkAtom *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    op->SetPosition(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAtom_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAtom *op = static_cast<vtkAtom *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetPosition(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAtom_SetPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAtom *op = static_cast<vtkAtom *>(vp);

  vtkVector3f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3f"))
  {
    op->SetPosition(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkAtom_SetPosition_Methods[] = {
  {nullptr, PyvtkAtom_SetPosition_s1, METH_VARARGS,
   "@P *f"},
  {nullptr, PyvtkAtom_SetPosition_s3, METH_VARARGS,
   "@W vtkVector3f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAtom_SetPosition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAtom_SetPosition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkAtom_SetPosition_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}


static PyMethodDef PyvtkAtom_Methods[] = {
  {"GetId", PyvtkAtom_GetId, METH_VARARGS,
   "V.GetId() -> int\nC++: vtkIdType GetId()\n\nReturn the Id used to identify this atom in the parent molecule.\n"},
  {"GetMolecule", PyvtkAtom_GetMolecule, METH_VARARGS,
   "V.GetMolecule() -> vtkMolecule\nC++: vtkMolecule *GetMolecule()\n\nReturn the parent molecule of this atom.\n"},
  {"GetAtomicNumber", PyvtkAtom_GetAtomicNumber, METH_VARARGS,
   "V.GetAtomicNumber() -> int\nC++: unsigned short GetAtomicNumber()\n\nGet/Set the atomic number of this atom\n"},
  {"SetAtomicNumber", PyvtkAtom_SetAtomicNumber, METH_VARARGS,
   "V.SetAtomicNumber(int)\nC++: void SetAtomicNumber(unsigned short atomicNum)\n\nGet/Set the atomic number of this atom\n"},
  {"GetPosition", PyvtkAtom_GetPosition, METH_VARARGS,
   "V.GetPosition([float, float, float])\nC++: void GetPosition(double pos[3])\nV.GetPosition() -> vtkVector3f\nC++: vtkVector3f GetPosition()\n\nGet/Set the position of this atom\n"},
  {"SetPosition", PyvtkAtom_SetPosition, METH_VARARGS,
   "V.SetPosition((float, float, float))\nC++: void SetPosition(const float pos[3])\nV.SetPosition(float, float, float)\nC++: void SetPosition(float x, float y, float z)\nV.SetPosition(vtkVector3f)\nC++: void SetPosition(const vtkVector3f &pos)\n\nGet/Set the position of this atom\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkAtom_vtkAtom(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkAtom");

  vtkAtom *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkAtom"))
  {
    vtkAtom *op = new vtkAtom(*temp0);

    result = PyVTKSpecialObject_New("vtkAtom", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkAtom_vtkAtom_Methods[] = {
  {nullptr, PyvtkAtom_vtkAtom, METH_VARARGS,
   "@W vtkAtom"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAtom_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkAtom_vtkAtom(nullptr, args);
}

static void PyvtkAtom_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkAtom *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkAtom_Hash(PyObject *self)
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

static PyTypeObject PyvtkAtom_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkAtom", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkAtom_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkAtom_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkAtom_Doc, // tp_doc
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
  PyvtkAtom_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkAtom_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkAtom(*static_cast<const vtkAtom*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAtom_TypeNew(); }

PyObject *PyvtkAtom_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkAtom_Type,
    PyvtkAtom_Methods,
    PyvtkAtom_vtkAtom_Methods,
    &PyvtkAtom_CCopy);

  PyTypeObject *pytype = &PyvtkAtom_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAtom(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAtom_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkAtom", o) != 0)
  {
    Py_DECREF(o);
  }

}

