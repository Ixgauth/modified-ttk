// python wrapper for vtkErrorCode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkErrorCode.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkErrorCode(PyObject *); }

static const char *PyvtkErrorCode_Doc =
  "vtkErrorCode - superclass for error codes\n\n"
  "vtkErrorCode is an mechanism for (currently) reader object to return\n"
  "errors during reading file.\n\n"
  "vtkErrorCode()\n"
  "vtkErrorCode(const &vtkErrorCode)\n";

static PyTypeObject PyvtkErrorCode_ErrorIds_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMiscPython.vtkErrorCode.ErrorIds", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkErrorCode_ErrorIds_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkErrorCode_ErrorIds_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkErrorCode_ErrorIds_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkErrorCode_GetStringFromErrorCode(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringFromErrorCode");

  unsigned long temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkErrorCode::GetStringFromErrorCode(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkErrorCode_GetErrorCodeFromString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetErrorCodeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned long tempr = vtkErrorCode::GetErrorCodeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkErrorCode_GetLastSystemError(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLastSystemError");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    unsigned long tempr = vtkErrorCode::GetLastSystemError();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkErrorCode_Methods[] = {
  {"GetStringFromErrorCode", PyvtkErrorCode_GetStringFromErrorCode, METH_VARARGS,
   "V.GetStringFromErrorCode(int) -> string\nC++: static const char *GetStringFromErrorCode(\n    unsigned long event)\n\n"},
  {"GetErrorCodeFromString", PyvtkErrorCode_GetErrorCodeFromString, METH_VARARGS,
   "V.GetErrorCodeFromString(string) -> int\nC++: static unsigned long GetErrorCodeFromString(\n    const char *event)\n\n"},
  {"GetLastSystemError", PyvtkErrorCode_GetLastSystemError, METH_VARARGS,
   "V.GetLastSystemError() -> int\nC++: static unsigned long GetLastSystemError()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkErrorCode_vtkErrorCode_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkErrorCode");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkErrorCode *op = new vtkErrorCode();

    result = PyVTKSpecialObject_New("vtkErrorCode", op);
  }

  return result;
}

static PyObject *
PyvtkErrorCode_vtkErrorCode_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkErrorCode");

  vtkErrorCode *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkErrorCode"))
  {
    vtkErrorCode *op = new vtkErrorCode(*temp0);

    result = PyVTKSpecialObject_New("vtkErrorCode", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkErrorCode_vtkErrorCode_Methods[] = {
  {nullptr, PyvtkErrorCode_vtkErrorCode_s2, METH_VARARGS,
   "@W vtkErrorCode"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkErrorCode_vtkErrorCode(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkErrorCode_vtkErrorCode_s1(self, args);
    case 1:
      return PyvtkErrorCode_vtkErrorCode_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkErrorCode");
  return nullptr;
}


static PyObject *
PyvtkErrorCode_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkErrorCode_vtkErrorCode(nullptr, args);
}

static void PyvtkErrorCode_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkErrorCode *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkErrorCode_Hash(PyObject *self)
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

static PyTypeObject PyvtkErrorCode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMiscPython.vtkErrorCode", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkErrorCode_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkErrorCode_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkErrorCode_Doc, // tp_doc
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
  PyvtkErrorCode_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkErrorCode_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkErrorCode(*static_cast<const vtkErrorCode*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkErrorCode_TypeNew(); }

PyObject *PyvtkErrorCode_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkErrorCode_Type,
    PyvtkErrorCode_Methods,
    PyvtkErrorCode_vtkErrorCode_Methods,
    &PyvtkErrorCode_CCopy);

  PyTypeObject *pytype = &PyvtkErrorCode_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkErrorCode_ErrorIds_Type);
  PyvtkErrorCode_ErrorIds_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkErrorCode_ErrorIds_Type);

  o = (PyObject *)&PyvtkErrorCode_ErrorIds_Type;
  if (PyDict_SetItemString(d, "ErrorIds", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 11; c++)
  {
    typedef vtkErrorCode::ErrorIds cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[11] = {
        { "NoError", vtkErrorCode::NoError },
        { "FirstVTKErrorCode", vtkErrorCode::FirstVTKErrorCode },
        { "FileNotFoundError", vtkErrorCode::FileNotFoundError },
        { "CannotOpenFileError", vtkErrorCode::CannotOpenFileError },
        { "UnrecognizedFileTypeError", vtkErrorCode::UnrecognizedFileTypeError },
        { "PrematureEndOfFileError", vtkErrorCode::PrematureEndOfFileError },
        { "FileFormatError", vtkErrorCode::FileFormatError },
        { "NoFileNameError", vtkErrorCode::NoFileNameError },
        { "OutOfDiskSpaceError", vtkErrorCode::OutOfDiskSpaceError },
        { "UnknownError", vtkErrorCode::UnknownError },
        { "UserError", vtkErrorCode::UserError },
      };

    o = PyvtkErrorCode_ErrorIds_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkErrorCode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkErrorCode_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkErrorCode", o) != 0)
  {
    Py_DECREF(o);
  }

}

