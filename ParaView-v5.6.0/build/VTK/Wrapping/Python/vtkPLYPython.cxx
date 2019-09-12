// python wrapper for vtkPLY
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkPLY.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPLY(PyObject *); }

static const char *PyvtkPLY_Doc =
  "vtkPLY - a modified version of the PLY 1.1 library\n\n"
  "vtkPLY is a modified version of the PLY 1.1 library. The library has\n"
  "been modified by wrapping in a class (to minimize global symbols); to\n"
  "take advantage of functionality generally not available through the\n"
  "PLY library API; and to correct problems with the PLY library.\n\n"
  "The original distribution was taken from the Stanford University PLY\n"
  "file format release 1.1 (see\n"
  "http://graphics.stanford.edu/data/3Dscanrep/).\n\n"
  "@sa\n"
  "vtkPLYWriter vtkPLYReader\n\n"
  "vtkPLY()\n"
  "vtkPLY(const &vtkPLY)\n";


static PyObject *
PyvtkPLY_equal_strings(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "equal_strings");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = vtkPLY::equal_strings(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLY_store_item(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "store_item");

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  int temp1;
  int temp2;
  unsigned int temp3;
  double temp4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    ap.Save(temp0, save0, size0);

    vtkPLY::store_item(temp0, temp1, temp2, temp3, temp4);

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
PyvtkPLY_get_stored_item(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "get_stored_item");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<unsigned int> store3(2*size3);
  unsigned int *temp3 = store3.Data();
  unsigned int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    vtkPLY::get_stored_item(temp0, temp1, temp2, temp3, temp4);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkPLY_get_item_value(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "get_item_value");

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = vtkPLY::get_item_value(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLY_get_ascii_item(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "get_ascii_item");

  const char *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<unsigned int> store3(2*size3);
  unsigned int *temp3 = store3.Data();
  unsigned int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    vtkPLY::get_ascii_item(temp0, temp1, temp2, temp3, temp4);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLY_my_alloc(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "my_alloc");

  size_t temp0;
  int temp1;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    void  *tempr = vtkPLY::my_alloc(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLY_get_prop_type(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "get_prop_type");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPLY::get_prop_type(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPLY_Methods[] = {
  {"equal_strings", PyvtkPLY_equal_strings, METH_VARARGS,
   "V.equal_strings(string, string) -> bool\nC++: static bool equal_strings(const char *, const char *)\n\n"},
  {"store_item", PyvtkPLY_store_item, METH_VARARGS,
   "V.store_item(string, int, int, int, float)\nC++: static void store_item(char *, int, int, unsigned int,\n    double)\n\n"},
  {"get_stored_item", PyvtkPLY_get_stored_item, METH_VARARGS,
   "V.get_stored_item(void, int, [int, ...], [int, ...], [float, ...])\nC++: static void get_stored_item(const void *, int, int *,\n    unsigned int *, double *)\n\n"},
  {"get_item_value", PyvtkPLY_get_item_value, METH_VARARGS,
   "V.get_item_value(string, int) -> float\nC++: static double get_item_value(const char *, int)\n\n"},
  {"get_ascii_item", PyvtkPLY_get_ascii_item, METH_VARARGS,
   "V.get_ascii_item(string, int, [int, ...], [int, ...], [float,\n    ...])\nC++: static void get_ascii_item(const char *, int, int *,\n    unsigned int *, double *)\n\n"},
  {"my_alloc", PyvtkPLY_my_alloc, METH_VARARGS,
   "V.my_alloc(int, int, string) -> void\nC++: static void *my_alloc(size_t, int, const char *)\n\n"},
  {"get_prop_type", PyvtkPLY_get_prop_type, METH_VARARGS,
   "V.get_prop_type(string) -> int\nC++: static int get_prop_type(const char *)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkPLY_vtkPLY_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPLY");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkPLY *op = new vtkPLY();

    result = PyVTKSpecialObject_New("vtkPLY", op);
  }

  return result;
}

static PyObject *
PyvtkPLY_vtkPLY_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPLY");

  vtkPLY *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPLY"))
  {
    vtkPLY *op = new vtkPLY(*temp0);

    result = PyVTKSpecialObject_New("vtkPLY", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkPLY_vtkPLY_Methods[] = {
  {nullptr, PyvtkPLY_vtkPLY_s2, METH_VARARGS,
   "@W vtkPLY"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPLY_vtkPLY(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkPLY_vtkPLY_s1(self, args);
    case 1:
      return PyvtkPLY_vtkPLY_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkPLY");
  return nullptr;
}


static PyObject *
PyvtkPLY_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkPLY_vtkPLY(nullptr, args);
}

static void PyvtkPLY_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkPLY *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkPLY_Hash(PyObject *self)
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

static PyTypeObject PyvtkPLY_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOPLYPython.vtkPLY", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkPLY_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkPLY_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkPLY_Doc, // tp_doc
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
  PyvtkPLY_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkPLY_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkPLY(*static_cast<const vtkPLY*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPLY_TypeNew(); }

PyObject *PyvtkPLY_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkPLY_Type,
    PyvtkPLY_Methods,
    PyvtkPLY_vtkPLY_Methods,
    &PyvtkPLY_CCopy);

  PyTypeObject *pytype = &PyvtkPLY_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPLY(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPLY_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkPLY", o) != 0)
  {
    Py_DECREF(o);
  }

}

