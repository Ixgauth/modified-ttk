// python wrapper for vtkTextureIO
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkStdString.h"
#include "vtkPixelExtent.h"
#include "vtkTextureIO.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTextureIO(PyObject *); }

static const char *PyvtkTextureIO_Doc =
  "vtkTextureIO - A small collection of I/O routines that write\nvtkTextureObject to disk for debugging.\n\n"

  "vtkTextureIO()\n"
  "vtkTextureIO(const &vtkTextureIO)\n";


static PyObject *
PyvtkTextureIO_Write_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Write");

  std::string temp0;
  vtkTextureObject *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned int> store2(size2);
  unsigned int *temp2 = store2.Data();
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(size3);
  double *temp3 = store3.Data();
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextureObject") &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp3, size3)))
  {
    vtkTextureIO::Write(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureIO_Write_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Write");

  std::string temp0;
  vtkTextureObject *temp1 = nullptr;
  vtkPixelExtent *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(size3);
  double *temp3 = store3.Data();
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextureObject") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkPixelExtent") &&
      (ap.NoArgsLeft() || ap.GetArray(temp3, size3)))
  {
    vtkTextureIO::Write(temp0, temp1, *temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj2);

  return result;
}

static PyMethodDef PyvtkTextureIO_Write_Methods[] = {
  {nullptr, PyvtkTextureIO_Write_s1, METH_VARARGS | METH_STATIC,
   "sV|PP *vtkTextureObject *I *d"},
  {nullptr, PyvtkTextureIO_Write_s2, METH_VARARGS | METH_STATIC,
   "sVW|P *vtkTextureObject vtkPixelExtent *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTextureIO_Write(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTextureIO_Write_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkTextureIO_Write_s1(self, args);
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Write");
  return nullptr;
}


static PyMethodDef PyvtkTextureIO_Methods[] = {
  {"Write", PyvtkTextureIO_Write, METH_VARARGS,
   "V.Write(string, vtkTextureObject, (int, ...), (float, ...))\nC++: static void Write(std::string filename,\n    vtkTextureObject *texture, const unsigned int *subset=nullptr,\n     const double *origin=nullptr)\nV.Write(string, vtkTextureObject, vtkPixelExtent, (float, ...))\nC++: static void Write(std::string filename,\n    vtkTextureObject *texture, const vtkPixelExtent &subset,\n    const double *origin=nullptr)\n\nWrite to disk as image data with subset(optional) at dataset\norigin(optional)\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkTextureIO_vtkTextureIO_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTextureIO");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTextureIO *op = new vtkTextureIO();

    result = PyVTKSpecialObject_New("vtkTextureIO", op);
  }

  return result;
}

static PyObject *
PyvtkTextureIO_vtkTextureIO_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTextureIO");

  vtkTextureIO *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTextureIO"))
  {
    vtkTextureIO *op = new vtkTextureIO(*temp0);

    result = PyVTKSpecialObject_New("vtkTextureIO", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTextureIO_vtkTextureIO_Methods[] = {
  {nullptr, PyvtkTextureIO_vtkTextureIO_s2, METH_VARARGS,
   "@W vtkTextureIO"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTextureIO_vtkTextureIO(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkTextureIO_vtkTextureIO_s1(self, args);
    case 1:
      return PyvtkTextureIO_vtkTextureIO_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkTextureIO");
  return nullptr;
}


static PyObject *
PyvtkTextureIO_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkTextureIO_vtkTextureIO(nullptr, args);
}

static void PyvtkTextureIO_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkTextureIO *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkTextureIO_Hash(PyObject *self)
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

static PyTypeObject PyvtkTextureIO_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingLICOpenGL2Python.vtkTextureIO", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTextureIO_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkTextureIO_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTextureIO_Doc, // tp_doc
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
  PyvtkTextureIO_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkTextureIO_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkTextureIO(*static_cast<const vtkTextureIO*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTextureIO_TypeNew(); }

PyObject *PyvtkTextureIO_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkTextureIO_Type,
    PyvtkTextureIO_Methods,
    PyvtkTextureIO_vtkTextureIO_Methods,
    &PyvtkTextureIO_CCopy);

  PyTypeObject *pytype = &PyvtkTextureIO_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTextureIO(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTextureIO_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkTextureIO", o) != 0)
  {
    Py_DECREF(o);
  }

}

