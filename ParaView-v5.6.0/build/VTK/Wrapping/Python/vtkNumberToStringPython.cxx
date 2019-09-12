// python wrapper for vtkNumberToString
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkNumberToString.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkNumberToString(PyObject *); }

static const char *PyvtkNumberToString_Doc =
  "vtkNumberToString - Convert floating and fixed point numbers to\nstrings\n\n"
  "This class uses the double-conversion library to convert floating\n"
  "point and fixed point numbers to ASCII versions that are represented\n"
  "without numerical precision errors.\n\n"
  "Typical use:\n\n"
  "{cpp}\n"
  "#include \"vtkNumberToString.h\"\n"
  " vtkNumberToString convert;\n"
  " float a = 1.0f/3.0f;\n"
  " std::cout << convert(a) << std::endl;\n\n"
  "vtkNumberToString()\n"
  "vtkNumberToString(const &vtkNumberToString)\n";

static PyMethodDef PyvtkNumberToString_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkNumberToString_vtkNumberToString_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkNumberToString");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkNumberToString *op = new vtkNumberToString();

    result = PyVTKSpecialObject_New("vtkNumberToString", op);
  }

  return result;
}

static PyObject *
PyvtkNumberToString_vtkNumberToString_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkNumberToString");

  vtkNumberToString *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkNumberToString"))
  {
    vtkNumberToString *op = new vtkNumberToString(*temp0);

    result = PyVTKSpecialObject_New("vtkNumberToString", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkNumberToString_vtkNumberToString_Methods[] = {
  {nullptr, PyvtkNumberToString_vtkNumberToString_s2, METH_VARARGS,
   "@W vtkNumberToString"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkNumberToString_vtkNumberToString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkNumberToString_vtkNumberToString_s1(self, args);
    case 1:
      return PyvtkNumberToString_vtkNumberToString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkNumberToString");
  return nullptr;
}


static PyObject *
PyvtkNumberToString_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkNumberToString_vtkNumberToString(nullptr, args);
}

static void PyvtkNumberToString_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkNumberToString *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkNumberToString_Hash(PyObject *self)
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

static PyTypeObject PyvtkNumberToString_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOCorePython.vtkNumberToString", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkNumberToString_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkNumberToString_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkNumberToString_Doc, // tp_doc
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
  PyvtkNumberToString_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkNumberToString_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkNumberToString(*static_cast<const vtkNumberToString*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkNumberToString_TypeNew(); }

PyObject *PyvtkNumberToString_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkNumberToString_Type,
    PyvtkNumberToString_Methods,
    PyvtkNumberToString_vtkNumberToString_Methods,
    &PyvtkNumberToString_CCopy);

  PyTypeObject *pytype = &PyvtkNumberToString_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkNumberToString(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkNumberToString_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkNumberToString", o) != 0)
  {
    Py_DECREF(o);
  }

}

