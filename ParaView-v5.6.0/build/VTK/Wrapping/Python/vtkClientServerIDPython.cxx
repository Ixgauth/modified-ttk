// python wrapper for vtkClientServerID
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkClientServerID.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkClientServerID(PyObject *); }

static const char *PyvtkClientServerID_Doc =
  "vtkClientServerID - Identifier for a ClientServer object.\n\n"
  "vtkClientServerID identifies an object managed by a\n"
  "vtkClientServerInterpreter.  Although the identifier is simply an\n"
  "integer, this class allows vtkClientServerStream to identify the\n"
  "integer as an object identifier.\n\n"
  "vtkClientServerID()\n"
  "explicit vtkClientServerID(vtkTypeUInt32 id)\n"
  "vtkClientServerID(const &vtkClientServerID)\n";


static PyObject *
PyvtkClientServerID_IsNull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsNull");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkClientServerID *op = static_cast<vtkClientServerID *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsNull();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerID_SetToNull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetToNull");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkClientServerID *op = static_cast<vtkClientServerID *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->SetToNull();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkClientServerID_Methods[] = {
  {"IsNull", PyvtkClientServerID_IsNull, METH_VARARGS,
   "V.IsNull() -> bool\nC++: bool IsNull()\n\n"},
  {"SetToNull", PyvtkClientServerID_SetToNull, METH_VARARGS,
   "V.SetToNull()\nC++: void SetToNull()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkClientServerID_vtkClientServerID_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkClientServerID");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkClientServerID *op = new vtkClientServerID();

    result = PyVTKSpecialObject_New("vtkClientServerID", op);
  }

  return result;
}

static PyObject *
PyvtkClientServerID_vtkClientServerID_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkClientServerID");

  unsigned int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkClientServerID *op = new vtkClientServerID(temp0);

    result = PyVTKSpecialObject_New("vtkClientServerID", op);
  }

  return result;
}

static PyObject *
PyvtkClientServerID_vtkClientServerID_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkClientServerID");

  vtkClientServerID *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkClientServerID"))
  {
    vtkClientServerID *op = new vtkClientServerID(*temp0);

    result = PyVTKSpecialObject_New("vtkClientServerID", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkClientServerID_vtkClientServerID_Methods[] = {
  {nullptr, PyvtkClientServerID_vtkClientServerID_s2, METH_VARARGS,
   "-@I"},
  {nullptr, PyvtkClientServerID_vtkClientServerID_s3, METH_VARARGS,
   "@W vtkClientServerID"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkClientServerID_vtkClientServerID(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkClientServerID_vtkClientServerID_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkClientServerID_vtkClientServerID_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkClientServerID");
  return nullptr;
}


static PyObject *
PyvtkClientServerID_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkClientServerID_vtkClientServerID(nullptr, args);
}

static void PyvtkClientServerID_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkClientServerID *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static PyObject *PyvtkClientServerID_String(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  std::ostringstream os;
  if (obj->vtk_ptr)
  {
    os << *static_cast<const vtkClientServerID *>(obj->vtk_ptr);
  }
  const std::string &s = os.str();
  return PyString_FromStringAndSize(s.data(), s.size());
}

static int PyvtkClientServerID_CheckExact(PyObject *ob);

static PyObject *PyvtkClientServerID_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkClientServerID *so1 = nullptr;
  const vtkClientServerID *so2 = nullptr;
  int result = -1;

  if (PyvtkClientServerID_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkClientServerID *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkClientServerID *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkClientServerID", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkClientServerID_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkClientServerID *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkClientServerID *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkClientServerID", &n2));
    if (so2 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  switch (opid)
  {
    case Py_LT:
      result = ((*so1) < (*so2));
      break;
    case Py_LE:
      break;
    case Py_EQ:
      result = ((*so1) == (*so2));
      break;
    case Py_NE:
      result = ((*so1) != (*so2));
      break;
    case Py_GT:
      break;
    case Py_GE:
      break;
  }

  if (n1)
  {
    Py_DECREF(n1);
  }
  else if (n2)
  {
    Py_DECREF(n2);
  }

  if (result == -1)
  {
    PyErr_SetString(PyExc_TypeError, "operation not available");
    return nullptr;
  }

  // avoids aliasing issues with Py_INCREF(Py_False)
  return PyBool_FromLong((long)result);
}

static Py_hash_t PyvtkClientServerID_Hash(PyObject *self)
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

static PyTypeObject PyvtkClientServerID_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkClientServerPython.vtkClientServerID", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkClientServerID_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkClientServerID_Hash, // tp_hash
  nullptr, // tp_call
  PyvtkClientServerID_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkClientServerID_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkClientServerID_RichCompare, // tp_richcompare
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
  PyvtkClientServerID_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkClientServerID_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkClientServerID_Type);
}

static void *PyvtkClientServerID_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkClientServerID(*static_cast<const vtkClientServerID*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkClientServerID_TypeNew(); }

PyObject *PyvtkClientServerID_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkClientServerID_Type,
    PyvtkClientServerID_Methods,
    PyvtkClientServerID_vtkClientServerID_Methods,
    &PyvtkClientServerID_CCopy);

  PyTypeObject *pytype = &PyvtkClientServerID_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkClientServerID(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkClientServerID_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkClientServerID", o) != 0)
  {
    Py_DECREF(o);
  }

}

