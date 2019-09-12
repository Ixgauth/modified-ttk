// python wrapper for vtkMaterialInterfaceProcessLoading
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkMaterialInterfaceProcessLoading.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMaterialInterfaceProcessLoading(PyObject *); }

static const char *PyvtkMaterialInterfaceProcessLoading_Doc =
  "vtkMaterialInterfaceProcessLoading - Data type to represent a node in\na multiprocess job and its current loading state.\n\n"

  "vtkMaterialInterfaceProcessLoading()\n"
  "vtkMaterialInterfaceProcessLoading(\n    const &vtkMaterialInterfaceProcessLoading)\n";


static PyObject *
PyvtkMaterialInterfaceProcessLoading_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceProcessLoading *op = static_cast<vtkMaterialInterfaceProcessLoading *>(vp);

  int temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->Initialize(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceProcessLoading_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceProcessLoading *op = static_cast<vtkMaterialInterfaceProcessLoading *>(vp);

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
PyvtkMaterialInterfaceProcessLoading_GetLoadFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoadFactor");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceProcessLoading *op = static_cast<vtkMaterialInterfaceProcessLoading *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetLoadFactor();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceProcessLoading_UpdateLoadFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateLoadFactor");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceProcessLoading *op = static_cast<vtkMaterialInterfaceProcessLoading *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = op->UpdateLoadFactor(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMaterialInterfaceProcessLoading_Methods[] = {
  {"Initialize", PyvtkMaterialInterfaceProcessLoading_Initialize, METH_VARARGS,
   "V.Initialize(int, int)\nC++: void Initialize(int id, vtkIdType loadFactor)\n\nSet the id and load factor.\n"},
  {"GetId", PyvtkMaterialInterfaceProcessLoading_GetId, METH_VARARGS,
   "V.GetId() -> int\nC++: vtkIdType GetId()\n\nReturn the process id.\n"},
  {"GetLoadFactor", PyvtkMaterialInterfaceProcessLoading_GetLoadFactor, METH_VARARGS,
   "V.GetLoadFactor() -> int\nC++: vtkIdType GetLoadFactor()\n\nReturn the load factor.\n"},
  {"UpdateLoadFactor", PyvtkMaterialInterfaceProcessLoading_UpdateLoadFactor, METH_VARARGS,
   "V.UpdateLoadFactor(int) -> int\nC++: vtkIdType UpdateLoadFactor(vtkIdType loadFactor)\n\nAdd to the load factor.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkMaterialInterfaceProcessLoading_vtkMaterialInterfaceProcessLoading_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMaterialInterfaceProcessLoading");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMaterialInterfaceProcessLoading *op = new vtkMaterialInterfaceProcessLoading();

    result = PyVTKSpecialObject_New("vtkMaterialInterfaceProcessLoading", op);
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceProcessLoading_vtkMaterialInterfaceProcessLoading_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMaterialInterfaceProcessLoading");

  vtkMaterialInterfaceProcessLoading *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkMaterialInterfaceProcessLoading"))
  {
    vtkMaterialInterfaceProcessLoading *op = new vtkMaterialInterfaceProcessLoading(*temp0);

    result = PyVTKSpecialObject_New("vtkMaterialInterfaceProcessLoading", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMaterialInterfaceProcessLoading_vtkMaterialInterfaceProcessLoading_Methods[] = {
  {nullptr, PyvtkMaterialInterfaceProcessLoading_vtkMaterialInterfaceProcessLoading_s2, METH_VARARGS,
   "@W vtkMaterialInterfaceProcessLoading"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMaterialInterfaceProcessLoading_vtkMaterialInterfaceProcessLoading(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMaterialInterfaceProcessLoading_vtkMaterialInterfaceProcessLoading_s1(self, args);
    case 1:
      return PyvtkMaterialInterfaceProcessLoading_vtkMaterialInterfaceProcessLoading_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkMaterialInterfaceProcessLoading");
  return nullptr;
}


static PyObject *
PyvtkMaterialInterfaceProcessLoading_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkMaterialInterfaceProcessLoading_vtkMaterialInterfaceProcessLoading(nullptr, args);
}

static void PyvtkMaterialInterfaceProcessLoading_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkMaterialInterfaceProcessLoading *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static PyObject *PyvtkMaterialInterfaceProcessLoading_String(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  std::ostringstream os;
  if (obj->vtk_ptr)
  {
    os << *static_cast<const vtkMaterialInterfaceProcessLoading *>(obj->vtk_ptr);
  }
  const std::string &s = os.str();
  return PyString_FromStringAndSize(s.data(), s.size());
}

static int PyvtkMaterialInterfaceProcessLoading_CheckExact(PyObject *ob);

static PyObject *PyvtkMaterialInterfaceProcessLoading_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkMaterialInterfaceProcessLoading *so1 = nullptr;
  const vtkMaterialInterfaceProcessLoading *so2 = nullptr;
  int result = -1;

  if (PyvtkMaterialInterfaceProcessLoading_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkMaterialInterfaceProcessLoading *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkMaterialInterfaceProcessLoading *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkMaterialInterfaceProcessLoading", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkMaterialInterfaceProcessLoading_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkMaterialInterfaceProcessLoading *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkMaterialInterfaceProcessLoading *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkMaterialInterfaceProcessLoading", &n2));
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
      result = ((*so1) <= (*so2));
      break;
    case Py_EQ:
      result = ((*so1) == (*so2));
      break;
    case Py_NE:
      break;
    case Py_GT:
      result = ((*so1) > (*so2));
      break;
    case Py_GE:
      result = ((*so1) >= (*so2));
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

static Py_hash_t PyvtkMaterialInterfaceProcessLoading_Hash(PyObject *self)
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

static PyTypeObject PyvtkMaterialInterfaceProcessLoading_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkMaterialInterfaceProcessLoading", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkMaterialInterfaceProcessLoading_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkMaterialInterfaceProcessLoading_Hash, // tp_hash
  nullptr, // tp_call
  PyvtkMaterialInterfaceProcessLoading_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkMaterialInterfaceProcessLoading_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkMaterialInterfaceProcessLoading_RichCompare, // tp_richcompare
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
  PyvtkMaterialInterfaceProcessLoading_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkMaterialInterfaceProcessLoading_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkMaterialInterfaceProcessLoading_Type);
}

static void *PyvtkMaterialInterfaceProcessLoading_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkMaterialInterfaceProcessLoading(*static_cast<const vtkMaterialInterfaceProcessLoading*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMaterialInterfaceProcessLoading_TypeNew(); }

PyObject *PyvtkMaterialInterfaceProcessLoading_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkMaterialInterfaceProcessLoading_Type,
    PyvtkMaterialInterfaceProcessLoading_Methods,
    PyvtkMaterialInterfaceProcessLoading_vtkMaterialInterfaceProcessLoading_Methods,
    &PyvtkMaterialInterfaceProcessLoading_CCopy);

  PyTypeObject *pytype = &PyvtkMaterialInterfaceProcessLoading_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "ID", vtkMaterialInterfaceProcessLoading::ID },
        { "LOADING", vtkMaterialInterfaceProcessLoading::LOADING },
        { "SIZE", vtkMaterialInterfaceProcessLoading::SIZE },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMaterialInterfaceProcessLoading(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMaterialInterfaceProcessLoading_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkMaterialInterfaceProcessLoading", o) != 0)
  {
    Py_DECREF(o);
  }

}

