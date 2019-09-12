// python wrapper for vtkCommunicationErrorCatcher
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
#include "vtkCommunicationErrorCatcher.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCommunicationErrorCatcher(PyObject *); }

static const char *PyvtkCommunicationErrorCatcher_Doc =
  "vtkCommunicationErrorCatcher - helper class to catch errors from\nvtkMultiProcessController and vtkCommunicator.\n\n"
  "vtkCommunicationErrorCatcher is helper class designed to catch errors\n"
  "from vtkCommunicator and vtkCommunicator. This is not a vtkObject and\n"
  "hence is designed to be created on the stack directly for watching\n"
  "error during a set of calls and not over the lifetime of the\n"
  "controller/communicator. For that, simply add your own observers for\n"
  "vtkCommand::ErrorEvent and intercept those. Note that is\n"
  "vtkObject::GlobalWarningDisplay is off, this class will not receive\n"
  "any ErrorEvents and hence will not report any errors that were\n"
  "raised.\n\n"
  "vtkCommunicationErrorCatcher(vtkMultiProcessController *)\n"
  "vtkCommunicationErrorCatcher(vtkCommunicator *)\n";


static PyObject *
PyvtkCommunicationErrorCatcher_GetErrorsRaised(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorsRaised");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkCommunicationErrorCatcher *op = static_cast<vtkCommunicationErrorCatcher *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->GetErrorsRaised();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicationErrorCatcher_GetErrorMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorMessages");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkCommunicationErrorCatcher *op = static_cast<vtkCommunicationErrorCatcher *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::string *tempr = &op->GetErrorMessages();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCommunicationErrorCatcher_Methods[] = {
  {"GetErrorsRaised", PyvtkCommunicationErrorCatcher_GetErrorsRaised, METH_VARARGS,
   "V.GetErrorsRaised() -> bool\nC++: bool GetErrorsRaised()\n\nGet the status of errors.\n"},
  {"GetErrorMessages", PyvtkCommunicationErrorCatcher_GetErrorMessages, METH_VARARGS,
   "V.GetErrorMessages() -> string\nC++: const std::string &GetErrorMessages()\n\nGet the combined error messages.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkCommunicationErrorCatcher_vtkCommunicationErrorCatcher_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkCommunicationErrorCatcher");

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    vtkCommunicationErrorCatcher *op = new vtkCommunicationErrorCatcher(temp0);

    result = PyVTKSpecialObject_New("vtkCommunicationErrorCatcher", op);
  }

  return result;
}

static PyObject *
PyvtkCommunicationErrorCatcher_vtkCommunicationErrorCatcher_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkCommunicationErrorCatcher");

  vtkCommunicator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCommunicator"))
  {
    vtkCommunicationErrorCatcher *op = new vtkCommunicationErrorCatcher(temp0);

    result = PyVTKSpecialObject_New("vtkCommunicationErrorCatcher", op);
  }

  return result;
}

static PyMethodDef PyvtkCommunicationErrorCatcher_vtkCommunicationErrorCatcher_Methods[] = {
  {nullptr, PyvtkCommunicationErrorCatcher_vtkCommunicationErrorCatcher_s1, METH_VARARGS,
   "@V *vtkMultiProcessController"},
  {nullptr, PyvtkCommunicationErrorCatcher_vtkCommunicationErrorCatcher_s2, METH_VARARGS,
   "@V *vtkCommunicator"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommunicationErrorCatcher_vtkCommunicationErrorCatcher(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicationErrorCatcher_vtkCommunicationErrorCatcher_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkCommunicationErrorCatcher");
  return nullptr;
}


static PyObject *
PyvtkCommunicationErrorCatcher_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkCommunicationErrorCatcher_vtkCommunicationErrorCatcher(nullptr, args);
}

static void PyvtkCommunicationErrorCatcher_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkCommunicationErrorCatcher *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkCommunicationErrorCatcher_Hash(PyObject *self)
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

static PyTypeObject PyvtkCommunicationErrorCatcher_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkCommunicationErrorCatcher", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkCommunicationErrorCatcher_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkCommunicationErrorCatcher_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkCommunicationErrorCatcher_Doc, // tp_doc
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
  PyvtkCommunicationErrorCatcher_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCommunicationErrorCatcher_TypeNew(); }

PyObject *PyvtkCommunicationErrorCatcher_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkCommunicationErrorCatcher_Type,
    PyvtkCommunicationErrorCatcher_Methods,
    PyvtkCommunicationErrorCatcher_vtkCommunicationErrorCatcher_Methods,
    nullptr);

  PyTypeObject *pytype = &PyvtkCommunicationErrorCatcher_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCommunicationErrorCatcher(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCommunicationErrorCatcher_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkCommunicationErrorCatcher", o) != 0)
  {
    Py_DECREF(o);
  }

}

