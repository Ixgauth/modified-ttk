// python wrapper for vtkMaterialInterfacePieceLoading
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkMaterialInterfacePieceLoading.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMaterialInterfacePieceLoading(PyObject *); }

static const char *PyvtkMaterialInterfacePieceLoading_Doc =
  "vtkMaterialInterfacePieceLoading - Data structure that describes a\nfragment's loading.\n\n"
  "Holds its id and its loading factor.\n\n"
  "vtkMaterialInterfacePieceLoading()\n"
  "vtkMaterialInterfacePieceLoading(\n    const &vtkMaterialInterfacePieceLoading)\n";


static PyObject *
PyvtkMaterialInterfacePieceLoading_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfacePieceLoading *op = static_cast<vtkMaterialInterfacePieceLoading *>(vp);

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
PyvtkMaterialInterfacePieceLoading_Pack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pack");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfacePieceLoading *op = static_cast<vtkMaterialInterfacePieceLoading *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<vtkIdType> store0(2*size0);
  vtkIdType *temp0 = store0.Data();
  vtkIdType *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->Pack(temp0);

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
PyvtkMaterialInterfacePieceLoading_UnPack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnPack");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfacePieceLoading *op = static_cast<vtkMaterialInterfacePieceLoading *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<vtkIdType> store0(2*size0);
  vtkIdType *temp0 = store0.Data();
  vtkIdType *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->UnPack(temp0);

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
PyvtkMaterialInterfacePieceLoading_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfacePieceLoading *op = static_cast<vtkMaterialInterfacePieceLoading *>(vp);

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
PyvtkMaterialInterfacePieceLoading_GetLoading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoading");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfacePieceLoading *op = static_cast<vtkMaterialInterfacePieceLoading *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetLoading();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfacePieceLoading_SetLoading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoading");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfacePieceLoading *op = static_cast<vtkMaterialInterfacePieceLoading *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetLoading(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfacePieceLoading_UpdateLoading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateLoading");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfacePieceLoading *op = static_cast<vtkMaterialInterfacePieceLoading *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = op->UpdateLoading(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMaterialInterfacePieceLoading_Methods[] = {
  {"Initialize", PyvtkMaterialInterfacePieceLoading_Initialize, METH_VARARGS,
   "V.Initialize(int, int)\nC++: void Initialize(int id, vtkIdType loading)\n\n"},
  {"Pack", PyvtkMaterialInterfacePieceLoading_Pack, METH_VARARGS,
   "V.Pack([int, ...])\nC++: void Pack(vtkIdType *buf)\n\nPlace into a buffer (id, loading)\n"},
  {"UnPack", PyvtkMaterialInterfacePieceLoading_UnPack, METH_VARARGS,
   "V.UnPack([int, ...])\nC++: void UnPack(vtkIdType *buf)\n\nInitialize from a buffer (id, loading)\n"},
  {"GetId", PyvtkMaterialInterfacePieceLoading_GetId, METH_VARARGS,
   "V.GetId() -> int\nC++: vtkIdType GetId()\n\nSet/Get\n"},
  {"GetLoading", PyvtkMaterialInterfacePieceLoading_GetLoading, METH_VARARGS,
   "V.GetLoading() -> int\nC++: vtkIdType GetLoading()\n\n"},
  {"SetLoading", PyvtkMaterialInterfacePieceLoading_SetLoading, METH_VARARGS,
   "V.SetLoading(int)\nC++: void SetLoading(vtkIdType loading)\n\n"},
  {"UpdateLoading", PyvtkMaterialInterfacePieceLoading_UpdateLoading, METH_VARARGS,
   "V.UpdateLoading(int) -> int\nC++: vtkIdType UpdateLoading(vtkIdType update)\n\nAdds to loading and returns the updated loading.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkMaterialInterfacePieceLoading_vtkMaterialInterfacePieceLoading_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMaterialInterfacePieceLoading");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMaterialInterfacePieceLoading *op = new vtkMaterialInterfacePieceLoading();

    result = PyVTKSpecialObject_New("vtkMaterialInterfacePieceLoading", op);
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfacePieceLoading_vtkMaterialInterfacePieceLoading_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMaterialInterfacePieceLoading");

  vtkMaterialInterfacePieceLoading *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkMaterialInterfacePieceLoading"))
  {
    vtkMaterialInterfacePieceLoading *op = new vtkMaterialInterfacePieceLoading(*temp0);

    result = PyVTKSpecialObject_New("vtkMaterialInterfacePieceLoading", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMaterialInterfacePieceLoading_vtkMaterialInterfacePieceLoading_Methods[] = {
  {nullptr, PyvtkMaterialInterfacePieceLoading_vtkMaterialInterfacePieceLoading_s2, METH_VARARGS,
   "@W vtkMaterialInterfacePieceLoading"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMaterialInterfacePieceLoading_vtkMaterialInterfacePieceLoading(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMaterialInterfacePieceLoading_vtkMaterialInterfacePieceLoading_s1(self, args);
    case 1:
      return PyvtkMaterialInterfacePieceLoading_vtkMaterialInterfacePieceLoading_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkMaterialInterfacePieceLoading");
  return nullptr;
}


static PyObject *
PyvtkMaterialInterfacePieceLoading_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkMaterialInterfacePieceLoading_vtkMaterialInterfacePieceLoading(nullptr, args);
}

static void PyvtkMaterialInterfacePieceLoading_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkMaterialInterfacePieceLoading *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static PyObject *PyvtkMaterialInterfacePieceLoading_String(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  std::ostringstream os;
  if (obj->vtk_ptr)
  {
    os << *static_cast<const vtkMaterialInterfacePieceLoading *>(obj->vtk_ptr);
  }
  const std::string &s = os.str();
  return PyString_FromStringAndSize(s.data(), s.size());
}

static int PyvtkMaterialInterfacePieceLoading_CheckExact(PyObject *ob);

static PyObject *PyvtkMaterialInterfacePieceLoading_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkMaterialInterfacePieceLoading *so1 = nullptr;
  const vtkMaterialInterfacePieceLoading *so2 = nullptr;
  int result = -1;

  if (PyvtkMaterialInterfacePieceLoading_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkMaterialInterfacePieceLoading *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkMaterialInterfacePieceLoading *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkMaterialInterfacePieceLoading", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkMaterialInterfacePieceLoading_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkMaterialInterfacePieceLoading *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkMaterialInterfacePieceLoading *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkMaterialInterfacePieceLoading", &n2));
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

static Py_hash_t PyvtkMaterialInterfacePieceLoading_Hash(PyObject *self)
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

static PyTypeObject PyvtkMaterialInterfacePieceLoading_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkMaterialInterfacePieceLoading", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkMaterialInterfacePieceLoading_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkMaterialInterfacePieceLoading_Hash, // tp_hash
  nullptr, // tp_call
  PyvtkMaterialInterfacePieceLoading_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkMaterialInterfacePieceLoading_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkMaterialInterfacePieceLoading_RichCompare, // tp_richcompare
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
  PyvtkMaterialInterfacePieceLoading_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkMaterialInterfacePieceLoading_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkMaterialInterfacePieceLoading_Type);
}

static void *PyvtkMaterialInterfacePieceLoading_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkMaterialInterfacePieceLoading(*static_cast<const vtkMaterialInterfacePieceLoading*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMaterialInterfacePieceLoading_TypeNew(); }

PyObject *PyvtkMaterialInterfacePieceLoading_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkMaterialInterfacePieceLoading_Type,
    PyvtkMaterialInterfacePieceLoading_Methods,
    PyvtkMaterialInterfacePieceLoading_vtkMaterialInterfacePieceLoading_Methods,
    &PyvtkMaterialInterfacePieceLoading_CCopy);

  PyTypeObject *pytype = &PyvtkMaterialInterfacePieceLoading_Type;

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
        { "ID", vtkMaterialInterfacePieceLoading::ID },
        { "LOADING", vtkMaterialInterfacePieceLoading::LOADING },
        { "SIZE", vtkMaterialInterfacePieceLoading::SIZE },
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

void PyVTKAddFile_vtkMaterialInterfacePieceLoading(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMaterialInterfacePieceLoading_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkMaterialInterfacePieceLoading", o) != 0)
  {
    Py_DECREF(o);
  }

}

