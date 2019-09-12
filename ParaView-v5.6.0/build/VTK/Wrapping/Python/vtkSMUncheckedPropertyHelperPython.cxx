// python wrapper for vtkSMUncheckedPropertyHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkSMUncheckedPropertyHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMUncheckedPropertyHelper(PyObject *); }

static const char *PyvtkSMUncheckedPropertyHelper_Doc =
  "vtkSMUncheckedPropertyHelper - no description provided.\n\n"
  "Superclass: vtkSMPropertyHelper\n\n"

  "vtkSMUncheckedPropertyHelper(vtkSMProxy *proxy, const char *name,\n    bool quiet=false)\n"
  "vtkSMUncheckedPropertyHelper(vtkSMProperty *property,\n    bool quiet=false)\n";

static PyMethodDef PyvtkSMUncheckedPropertyHelper_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkSMUncheckedPropertyHelper_vtkSMUncheckedPropertyHelper_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSMUncheckedPropertyHelper");

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkSMUncheckedPropertyHelper *op = new vtkSMUncheckedPropertyHelper(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkSMUncheckedPropertyHelper", op);
  }

  return result;
}

static PyObject *
PyvtkSMUncheckedPropertyHelper_vtkSMUncheckedPropertyHelper_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSMUncheckedPropertyHelper");

  vtkSMProperty *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkSMUncheckedPropertyHelper *op = new vtkSMUncheckedPropertyHelper(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkSMUncheckedPropertyHelper", op);
  }

  return result;
}

static PyMethodDef PyvtkSMUncheckedPropertyHelper_vtkSMUncheckedPropertyHelper_Methods[] = {
  {nullptr, PyvtkSMUncheckedPropertyHelper_vtkSMUncheckedPropertyHelper_s1, METH_VARARGS,
   "@Vz|q *vtkSMProxy"},
  {nullptr, PyvtkSMUncheckedPropertyHelper_vtkSMUncheckedPropertyHelper_s2, METH_VARARGS,
   "@V|q *vtkSMProperty"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMUncheckedPropertyHelper_vtkSMUncheckedPropertyHelper(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMUncheckedPropertyHelper_vtkSMUncheckedPropertyHelper_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkSMUncheckedPropertyHelper_vtkSMUncheckedPropertyHelper_s1(self, args);
    case 1:
      return PyvtkSMUncheckedPropertyHelper_vtkSMUncheckedPropertyHelper_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkSMUncheckedPropertyHelper");
  return nullptr;
}


static PyObject *
PyvtkSMUncheckedPropertyHelper_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkSMUncheckedPropertyHelper_vtkSMUncheckedPropertyHelper(nullptr, args);
}

static void PyvtkSMUncheckedPropertyHelper_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkSMUncheckedPropertyHelper *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkSMUncheckedPropertyHelper_Hash(PyObject *self)
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

static PyTypeObject PyvtkSMUncheckedPropertyHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMUncheckedPropertyHelper", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkSMUncheckedPropertyHelper_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkSMUncheckedPropertyHelper_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkSMUncheckedPropertyHelper_Doc, // tp_doc
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
  PyvtkSMUncheckedPropertyHelper_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMUncheckedPropertyHelper_TypeNew(); }

#ifndef DECLARED_PyvtkSMPropertyHelper_TypeNew
extern "C" { PyObject *PyvtkSMPropertyHelper_TypeNew(); }
#define DECLARED_PyvtkSMPropertyHelper_TypeNew
#endif
PyObject *PyvtkSMUncheckedPropertyHelper_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkSMUncheckedPropertyHelper_Type,
    PyvtkSMUncheckedPropertyHelper_Methods,
    PyvtkSMUncheckedPropertyHelper_vtkSMUncheckedPropertyHelper_Methods,
    nullptr);

  PyTypeObject *pytype = &PyvtkSMUncheckedPropertyHelper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkSMPropertyHelper_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMUncheckedPropertyHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMUncheckedPropertyHelper_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkSMUncheckedPropertyHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

