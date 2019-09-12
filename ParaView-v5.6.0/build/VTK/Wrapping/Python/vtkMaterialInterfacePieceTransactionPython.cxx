// python wrapper for vtkMaterialInterfacePieceTransaction
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkMaterialInterfacePieceTransaction.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMaterialInterfacePieceTransaction(PyObject *); }

static const char *PyvtkMaterialInterfacePieceTransaction_Doc =
  "vtkMaterialInterfacePieceTransaction - Helper to the transaction\nmatrix.\n\n"
  "Data structure that describes a single transaction that needs to be\n"
  "executed in the process of moving a fragment piece around.\n\n"
  "The fragment to be transacted and the executing process are\n"
  "determined implicitly by where the transaction is stored.\n\n"
  "vtkMaterialInterfacePieceTransaction()\n"
  "vtkMaterialInterfacePieceTransaction(char type, int remoteProc)\n"
  "vtkMaterialInterfacePieceTransaction(\n    const &vtkMaterialInterfacePieceTransaction)\n";


static PyObject *
PyvtkMaterialInterfacePieceTransaction_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfacePieceTransaction *op = static_cast<vtkMaterialInterfacePieceTransaction *>(vp);

  char temp0;
  int temp1;
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
PyvtkMaterialInterfacePieceTransaction_Empty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Empty");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfacePieceTransaction *op = static_cast<vtkMaterialInterfacePieceTransaction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->Empty();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfacePieceTransaction_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfacePieceTransaction *op = static_cast<vtkMaterialInterfacePieceTransaction *>(vp);

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
PyvtkMaterialInterfacePieceTransaction_Pack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pack");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfacePieceTransaction *op = static_cast<vtkMaterialInterfacePieceTransaction *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
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
PyvtkMaterialInterfacePieceTransaction_UnPack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnPack");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfacePieceTransaction *op = static_cast<vtkMaterialInterfacePieceTransaction *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
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
PyvtkMaterialInterfacePieceTransaction_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetType");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfacePieceTransaction *op = static_cast<vtkMaterialInterfacePieceTransaction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = op->GetType();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfacePieceTransaction_GetRemoteProc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoteProc");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfacePieceTransaction *op = static_cast<vtkMaterialInterfacePieceTransaction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetRemoteProc();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfacePieceTransaction_GetFlatSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlatSize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfacePieceTransaction *op = static_cast<vtkMaterialInterfacePieceTransaction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetFlatSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMaterialInterfacePieceTransaction_Methods[] = {
  {"Initialize", PyvtkMaterialInterfacePieceTransaction_Initialize, METH_VARARGS,
   "V.Initialize(char, int)\nC++: void Initialize(char type, int remoteProc)\n\n"},
  {"Empty", PyvtkMaterialInterfacePieceTransaction_Empty, METH_VARARGS,
   "V.Empty() -> bool\nC++: bool Empty()\n\n"},
  {"Clear", PyvtkMaterialInterfacePieceTransaction_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\n"},
  {"Pack", PyvtkMaterialInterfacePieceTransaction_Pack, METH_VARARGS,
   "V.Pack([int, ...])\nC++: void Pack(int *buf)\n\n"},
  {"UnPack", PyvtkMaterialInterfacePieceTransaction_UnPack, METH_VARARGS,
   "V.UnPack([int, ...])\nC++: void UnPack(int *buf)\n\n"},
  {"GetType", PyvtkMaterialInterfacePieceTransaction_GetType, METH_VARARGS,
   "V.GetType() -> char\nC++: char GetType()\n\n"},
  {"GetRemoteProc", PyvtkMaterialInterfacePieceTransaction_GetRemoteProc, METH_VARARGS,
   "V.GetRemoteProc() -> int\nC++: int GetRemoteProc()\n\n"},
  {"GetFlatSize", PyvtkMaterialInterfacePieceTransaction_GetFlatSize, METH_VARARGS,
   "V.GetFlatSize() -> int\nC++: int GetFlatSize()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkMaterialInterfacePieceTransaction_vtkMaterialInterfacePieceTransaction_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMaterialInterfacePieceTransaction");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMaterialInterfacePieceTransaction *op = new vtkMaterialInterfacePieceTransaction();

    result = PyVTKSpecialObject_New("vtkMaterialInterfacePieceTransaction", op);
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfacePieceTransaction_vtkMaterialInterfacePieceTransaction_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMaterialInterfacePieceTransaction");

  char temp0;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkMaterialInterfacePieceTransaction *op = new vtkMaterialInterfacePieceTransaction(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkMaterialInterfacePieceTransaction", op);
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfacePieceTransaction_vtkMaterialInterfacePieceTransaction_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMaterialInterfacePieceTransaction");

  vtkMaterialInterfacePieceTransaction *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkMaterialInterfacePieceTransaction"))
  {
    vtkMaterialInterfacePieceTransaction *op = new vtkMaterialInterfacePieceTransaction(*temp0);

    result = PyVTKSpecialObject_New("vtkMaterialInterfacePieceTransaction", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMaterialInterfacePieceTransaction_vtkMaterialInterfacePieceTransaction_Methods[] = {
  {nullptr, PyvtkMaterialInterfacePieceTransaction_vtkMaterialInterfacePieceTransaction_s3, METH_VARARGS,
   "@W vtkMaterialInterfacePieceTransaction"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMaterialInterfacePieceTransaction_vtkMaterialInterfacePieceTransaction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMaterialInterfacePieceTransaction_vtkMaterialInterfacePieceTransaction_s1(self, args);
    case 2:
      return PyvtkMaterialInterfacePieceTransaction_vtkMaterialInterfacePieceTransaction_s2(self, args);
    case 1:
      return PyvtkMaterialInterfacePieceTransaction_vtkMaterialInterfacePieceTransaction_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkMaterialInterfacePieceTransaction");
  return nullptr;
}


static PyObject *
PyvtkMaterialInterfacePieceTransaction_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkMaterialInterfacePieceTransaction_vtkMaterialInterfacePieceTransaction(nullptr, args);
}

static void PyvtkMaterialInterfacePieceTransaction_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkMaterialInterfacePieceTransaction *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static PyObject *PyvtkMaterialInterfacePieceTransaction_String(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  std::ostringstream os;
  if (obj->vtk_ptr)
  {
    os << *static_cast<const vtkMaterialInterfacePieceTransaction *>(obj->vtk_ptr);
  }
  const std::string &s = os.str();
  return PyString_FromStringAndSize(s.data(), s.size());
}

static Py_hash_t PyvtkMaterialInterfacePieceTransaction_Hash(PyObject *self)
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

static PyTypeObject PyvtkMaterialInterfacePieceTransaction_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkMaterialInterfacePieceTransaction", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkMaterialInterfacePieceTransaction_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkMaterialInterfacePieceTransaction_Hash, // tp_hash
  nullptr, // tp_call
  PyvtkMaterialInterfacePieceTransaction_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkMaterialInterfacePieceTransaction_Doc, // tp_doc
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
  PyvtkMaterialInterfacePieceTransaction_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkMaterialInterfacePieceTransaction_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkMaterialInterfacePieceTransaction(*static_cast<const vtkMaterialInterfacePieceTransaction*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMaterialInterfacePieceTransaction_TypeNew(); }

PyObject *PyvtkMaterialInterfacePieceTransaction_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkMaterialInterfacePieceTransaction_Type,
    PyvtkMaterialInterfacePieceTransaction_Methods,
    PyvtkMaterialInterfacePieceTransaction_vtkMaterialInterfacePieceTransaction_Methods,
    &PyvtkMaterialInterfacePieceTransaction_CCopy);

  PyTypeObject *pytype = &PyvtkMaterialInterfacePieceTransaction_Type;

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
        { "TYPE", vtkMaterialInterfacePieceTransaction::TYPE },
        { "REMOTE_PROC", vtkMaterialInterfacePieceTransaction::REMOTE_PROC },
        { "SIZE", vtkMaterialInterfacePieceTransaction::SIZE },
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

void PyVTKAddFile_vtkMaterialInterfacePieceTransaction(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMaterialInterfacePieceTransaction_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkMaterialInterfacePieceTransaction", o) != 0)
  {
    Py_DECREF(o);
  }

}

