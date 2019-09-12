// python wrapper for vtkGraph
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGraph.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGraph(PyObject *); }

static const char *PyvtkEdgeBase_Doc =
  "vtkEdgeBase - no description provided.\n\n"
;

static PyMethodDef PyvtkEdgeBase_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkEdgeBase_New(PyTypeObject *, PyObject *, PyObject *)
{
  PyErr_SetString(PyExc_TypeError,
                  "this class cannot be instantiated");

  return nullptr;
}

static void PyvtkEdgeBase_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkEdgeBase *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static PyObject *PyvtkEdgeBase_String(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  std::ostringstream os;
  if (obj->vtk_ptr)
  {
    os << *static_cast<const vtkEdgeBase *>(obj->vtk_ptr);
  }
  const std::string &s = os.str();
  return PyString_FromStringAndSize(s.data(), s.size());
}

static int PyvtkEdgeBase_CheckExact(PyObject *ob);

static PyObject *PyvtkEdgeBase_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkEdgeBase *so1 = nullptr;
  const vtkEdgeBase *so2 = nullptr;
  int result = -1;

  if (PyvtkEdgeBase_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkEdgeBase *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkEdgeBase *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkEdgeBase", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkEdgeBase_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkEdgeBase *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkEdgeBase *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkEdgeBase", &n2));
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

static Py_hash_t PyvtkEdgeBase_Hash(PyObject *self)
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

static PyTypeObject PyvtkEdgeBase_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkEdgeBase", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkEdgeBase_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkEdgeBase_Hash, // tp_hash
  nullptr, // tp_call
  PyvtkEdgeBase_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkEdgeBase_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkEdgeBase_RichCompare, // tp_richcompare
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
  PyvtkEdgeBase_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkEdgeBase_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkEdgeBase_Type);
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkEdgeBase_TypeNew(); }

PyObject *PyvtkEdgeBase_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkEdgeBase_Type,
    PyvtkEdgeBase_Methods,
    nullptr,
    nullptr);

  PyTypeObject *pytype = &PyvtkEdgeBase_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkOutEdgeType_Doc =
  "vtkOutEdgeType - no description provided.\n\n"
  "Superclass: vtkEdgeBase\n\n"

  "vtkOutEdgeType()\n"
  "vtkOutEdgeType(vtkIdType t, vtkIdType id)\n"
  "vtkOutEdgeType(const &vtkOutEdgeType)\n";

static PyMethodDef PyvtkOutEdgeType_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkOutEdgeType_vtkOutEdgeType_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkOutEdgeType");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkOutEdgeType *op = new vtkOutEdgeType();

    result = PyVTKSpecialObject_New("vtkOutEdgeType", op);
  }

  return result;
}

static PyObject *
PyvtkOutEdgeType_vtkOutEdgeType_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkOutEdgeType");

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkOutEdgeType *op = new vtkOutEdgeType(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkOutEdgeType", op);
  }

  return result;
}

static PyObject *
PyvtkOutEdgeType_vtkOutEdgeType_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkOutEdgeType");

  vtkOutEdgeType *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkOutEdgeType"))
  {
    vtkOutEdgeType *op = new vtkOutEdgeType(*temp0);

    result = PyVTKSpecialObject_New("vtkOutEdgeType", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkOutEdgeType_vtkOutEdgeType_Methods[] = {
  {nullptr, PyvtkOutEdgeType_vtkOutEdgeType_s3, METH_VARARGS,
   "@W vtkOutEdgeType"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOutEdgeType_vtkOutEdgeType(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkOutEdgeType_vtkOutEdgeType_s1(self, args);
    case 2:
      return PyvtkOutEdgeType_vtkOutEdgeType_s2(self, args);
    case 1:
      return PyvtkOutEdgeType_vtkOutEdgeType_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkOutEdgeType");
  return nullptr;
}


static PyObject *
PyvtkOutEdgeType_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkOutEdgeType_vtkOutEdgeType(nullptr, args);
}

static void PyvtkOutEdgeType_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkOutEdgeType *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkOutEdgeType_Hash(PyObject *self)
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

static PyTypeObject PyvtkOutEdgeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkOutEdgeType", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkOutEdgeType_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkOutEdgeType_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkOutEdgeType_Doc, // tp_doc
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
  PyvtkOutEdgeType_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkOutEdgeType_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkOutEdgeType(*static_cast<const vtkOutEdgeType*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOutEdgeType_TypeNew(); }

#ifndef DECLARED_PyvtkEdgeBase_TypeNew
extern "C" { PyObject *PyvtkEdgeBase_TypeNew(); }
#define DECLARED_PyvtkEdgeBase_TypeNew
#endif
PyObject *PyvtkOutEdgeType_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkOutEdgeType_Type,
    PyvtkOutEdgeType_Methods,
    PyvtkOutEdgeType_vtkOutEdgeType_Methods,
    &PyvtkOutEdgeType_CCopy);

  PyTypeObject *pytype = &PyvtkOutEdgeType_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkEdgeBase_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkInEdgeType_Doc =
  "vtkInEdgeType - no description provided.\n\n"
  "Superclass: vtkEdgeBase\n\n"

  "vtkInEdgeType()\n"
  "vtkInEdgeType(vtkIdType s, vtkIdType id)\n"
  "vtkInEdgeType(const &vtkInEdgeType)\n";

static PyMethodDef PyvtkInEdgeType_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkInEdgeType_vtkInEdgeType_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkInEdgeType");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInEdgeType *op = new vtkInEdgeType();

    result = PyVTKSpecialObject_New("vtkInEdgeType", op);
  }

  return result;
}

static PyObject *
PyvtkInEdgeType_vtkInEdgeType_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkInEdgeType");

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkInEdgeType *op = new vtkInEdgeType(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkInEdgeType", op);
  }

  return result;
}

static PyObject *
PyvtkInEdgeType_vtkInEdgeType_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkInEdgeType");

  vtkInEdgeType *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkInEdgeType"))
  {
    vtkInEdgeType *op = new vtkInEdgeType(*temp0);

    result = PyVTKSpecialObject_New("vtkInEdgeType", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkInEdgeType_vtkInEdgeType_Methods[] = {
  {nullptr, PyvtkInEdgeType_vtkInEdgeType_s3, METH_VARARGS,
   "@W vtkInEdgeType"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkInEdgeType_vtkInEdgeType(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkInEdgeType_vtkInEdgeType_s1(self, args);
    case 2:
      return PyvtkInEdgeType_vtkInEdgeType_s2(self, args);
    case 1:
      return PyvtkInEdgeType_vtkInEdgeType_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkInEdgeType");
  return nullptr;
}


static PyObject *
PyvtkInEdgeType_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkInEdgeType_vtkInEdgeType(nullptr, args);
}

static void PyvtkInEdgeType_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkInEdgeType *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkInEdgeType_Hash(PyObject *self)
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

static PyTypeObject PyvtkInEdgeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkInEdgeType", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkInEdgeType_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkInEdgeType_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkInEdgeType_Doc, // tp_doc
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
  PyvtkInEdgeType_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkInEdgeType_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkInEdgeType(*static_cast<const vtkInEdgeType*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInEdgeType_TypeNew(); }

#ifndef DECLARED_PyvtkEdgeBase_TypeNew
extern "C" { PyObject *PyvtkEdgeBase_TypeNew(); }
#define DECLARED_PyvtkEdgeBase_TypeNew
#endif
PyObject *PyvtkInEdgeType_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkInEdgeType_Type,
    PyvtkInEdgeType_Methods,
    PyvtkInEdgeType_vtkInEdgeType_Methods,
    &PyvtkInEdgeType_CCopy);

  PyTypeObject *pytype = &PyvtkInEdgeType_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkEdgeBase_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkEdgeType_Doc =
  "vtkEdgeType - no description provided.\n\n"
  "Superclass: vtkEdgeBase\n\n"

  "vtkEdgeType()\n"
  "vtkEdgeType(vtkIdType s, vtkIdType t, vtkIdType id)\n"
  "vtkEdgeType(const &vtkEdgeType)\n";

static PyMethodDef PyvtkEdgeType_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkEdgeType_vtkEdgeType_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkEdgeType");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkEdgeType *op = new vtkEdgeType();

    result = PyVTKSpecialObject_New("vtkEdgeType", op);
  }

  return result;
}

static PyObject *
PyvtkEdgeType_vtkEdgeType_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkEdgeType");

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkEdgeType *op = new vtkEdgeType(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkEdgeType", op);
  }

  return result;
}

static PyObject *
PyvtkEdgeType_vtkEdgeType_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkEdgeType");

  vtkEdgeType *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkEdgeType"))
  {
    vtkEdgeType *op = new vtkEdgeType(*temp0);

    result = PyVTKSpecialObject_New("vtkEdgeType", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkEdgeType_vtkEdgeType_Methods[] = {
  {nullptr, PyvtkEdgeType_vtkEdgeType_s3, METH_VARARGS,
   "@W vtkEdgeType"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkEdgeType_vtkEdgeType(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkEdgeType_vtkEdgeType_s1(self, args);
    case 3:
      return PyvtkEdgeType_vtkEdgeType_s2(self, args);
    case 1:
      return PyvtkEdgeType_vtkEdgeType_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkEdgeType");
  return nullptr;
}


static PyObject *
PyvtkEdgeType_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkEdgeType_vtkEdgeType(nullptr, args);
}

static void PyvtkEdgeType_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkEdgeType *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkEdgeType_Hash(PyObject *self)
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

static PyTypeObject PyvtkEdgeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkEdgeType", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkEdgeType_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkEdgeType_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkEdgeType_Doc, // tp_doc
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
  PyvtkEdgeType_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkEdgeType_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkEdgeType(*static_cast<const vtkEdgeType*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkEdgeType_TypeNew(); }

#ifndef DECLARED_PyvtkEdgeBase_TypeNew
extern "C" { PyObject *PyvtkEdgeBase_TypeNew(); }
#define DECLARED_PyvtkEdgeBase_TypeNew
#endif
PyObject *PyvtkEdgeType_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkEdgeType_Type,
    PyvtkEdgeType_Methods,
    PyvtkEdgeType_vtkEdgeType_Methods,
    &PyvtkEdgeType_CCopy);

  PyTypeObject *pytype = &PyvtkEdgeType_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkEdgeBase_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGraph_ClassNew(); }

#ifndef DECLARED_PyvtkDataObject_ClassNew
extern "C" { PyObject *PyvtkDataObject_ClassNew(); }
#define DECLARED_PyvtkDataObject_ClassNew
#endif

static const char *PyvtkGraph_Doc =
  "vtkGraph - Base class for graph data types.\n\n"
  "Superclass: vtkDataObject\n\n"
  "vtkGraph is the abstract base class that provides all read-only API\n"
  "for graph data types. A graph consists of a collection of vertices\n"
  "and a collection of edges connecting pairs of vertices. The\n"
  "vtkDirectedGraph subclass represents a graph whose edges have\n"
  "inherent order from source vertex to target vertex, while\n"
  "vtkUndirectedGraph is a graph whose edges have no inherent ordering.\n\n"
  "Graph vertices may be traversed in two ways. In the current\n"
  "implementation, all vertices are assigned consecutive ids starting at\n"
  "zero, so they may be traversed in a simple for loop from 0 to\n"
  "graph->GetNumberOfVertices() - 1. You may alternately create a\n"
  "vtkVertexListIterator and call graph->GetVertices(it). it->Next()\n"
  "will return the id of the next vertex, while it->HasNext() indicates\n"
  "whether there are more vertices in the graph. This is the preferred\n"
  "method, since in the future graphs may support filtering or\n"
  "subsetting where the vertex ids may not be contiguous.\n\n"
  "Graph edges must be traversed through iterators. To traverse all\n"
  "edges in a graph, create an instance of vtkEdgeListIterator and call\n"
  "graph->GetEdges(it). it->Next() returns lightweight vtkEdgeType\n"
  "structures, which contain the public fields Id, Source and Target. Id\n"
  "is the identifier for the edge, which may be used to look up values\n"
  "in assiciated edge data arrays. Source and Target store the ids of\n"
  "the source and target vertices of the edge. Note that the edge list\n"
  "iterator DOES NOT necessarily iterate over edges in order of\n"
  "ascending id. To traverse edges from wrapper code (Python, Java), use\n"
  "it->NextGraphEdge() instead of it->Next().  This will return a\n"
  "heavyweight, wrappable vtkGraphEdge object, which has the same fields\n"
  "as vtkEdgeType accessible through getter methods.\n\n"
  "To traverse all edges outgoing from a vertex, create a\n"
  "vtkOutEdgeIterator and call graph->GetOutEdges(v, it). it->Next()\n"
  "returns a lightweight vtkOutEdgeType containing the fields Id and\n"
  "Target. The source of the edge is always the vertex that was passed\n"
  "as an argument to GetOutEdges(). Incoming edges may be similarly\n"
  "traversed with vtkInEdgeIterator, which returns vtkInEdgeType\n"
  "structures with Id and Source fields. Both vtkOutEdgeIterator and\n"
  "vtkInEdgeIterator also provide the wrapper functions NextGraphEdge()\n"
  "which return vtkGraphEdge objects.\n\n"
  "An additional iterator, vtkAdjacentVertexIterator can traverse\n"
  "outgoing vertices directly, instead needing to parse through edges.\n"
  "Initialize the iterator by calling graph->GetAdjacentVertices(v, it).\n\n"
  "vtkGraph has two instances of vtkDataSetAttributes for associated\n"
  "vertex and edge data. It also has a vtkPoints instance which may\n"
  "store x,y,z locations for each vertex. This is populated by filters\n"
  "such as vtkGraphLayout and vtkAssignCoordinates.\n\n"
  "All graph types share the same implementation, so the structure of\n"
  "one may be shared among multiple graphs, even graphs of different\n"
  "types. Structures from vtkUndirectedGraph and\n"
  "vtkMutableUndirectedGraph may be shared directly.  Structures from\n"
  "vtkDirectedGraph, vtkMutableDirectedGraph, and vtkTree may be shared\n"
  "directly with the exception that setting a structure to a tree\n"
  "requires that a \"is a tree\" test passes.\n\n"
  "For graph types that are known to be compatible, calling\n"
  "ShallowCopy() or DeepCopy() will work as expected.  When the outcome\n"
  "of a conversion is unknown (i.e. setting a graph to a tree),\n"
  "CheckedShallowCopy() and CheckedDeepCopy() exist which are identical\n"
  "to ShallowCopy() and DeepCopy(), except that instead of emitting an\n"
  "error for an incompatible structure, the function returns false. \n"
  "This allows you to programmatically check structure compatibility\n"
  "without causing error messages.\n\n"
  "To construct a graph, use vtkMutableDirectedGraph or\n"
  "vtkMutableUndirectedGraph. You may then use CheckedShallowCopy to set\n"
  "the contents of a mutable graph type into one of the non-mutable\n"
  "types vtkDirectedGraph, vtkUndirectedGraph. To construct a tree, use\n"
  "vtkMutableDirectedGraph, with directed edges which point from the\n"
  "parent to the child, then use CheckedShallowCopy to set the structure\n"
  "to a vtkTree.\n\n"
  "@warning\n"
  "All copy operations implement copy-on-write. The structures are\n"
  "initially shared, but if one of the graphs is modified, the structure\n"
  "is copied so that to the user they function as if they were deep\n"
  "copied. This means that care must be taken if different threads are\n"
  "accessing different graph instances that share the same structure.\n"
  "Race conditions may develop if one thread is modifying the graph at\n"
  "the same time that another graph is copying the structure.\n\n"
  "@par Vertex pedigree IDs: The vertices in a vtkGraph can be\n"
  "associated with pedigree IDs through GetVertexData()->SetPedigreeIds.\n"
  "In this case, there is a 1-1 mapping between pedigree Ids and\n"
  "vertices. One can query the vertex ID based on the pedigree ID using\n"
  "FindVertex, add new vertices by pedigree ID with AddVertex, and add\n"
  "edges based on the pedigree IDs of the source and target vertices.\n"
  "For example, AddEdge(\"Here\", \"There\") will find (or add) vertices\n"
  "with pedigree ID \"Here\" and \"There\" and then introduce an edge from\n"
  "\"Here\" to \"There\".\n\n"
  "@par Vertex pedigree IDs: To configure the vtkGraph with a pedigree\n"
  "ID mapping, create a vtkDataArray that will store the pedigree IDs\n"
  "and set that array as the pedigree ID array for the vertices via\n"
  "GetVertexData()->SetPedigreeIds().\n\n"
  "@par Distributed graphs: vtkGraph instances can be distributed across\n"
  "multiple machines, to allow the construction and manipulation of\n"
  "graphs larger than a single machine could handle. A distributed graph\n"
  "will typically be distributed across many different nodes within a\n"
  "cluster, using the Message Passing Interface (MPI) to allow those\n"
  "cluster nodes to communicate.\n\n"
  "@par Distributed graphs: An empty vtkGraph can be made into a\n"
  "distributed graph by attaching an instance of a\n"
  "vtkDistributedGraphHelper via the SetDistributedGraphHelper() method.\n"
  "To determine whether a graph is distributed or not, call\n"
  "GetDistributedGraphHelper() and check whether the result is\n"
  "non-nullptr. For a distributed graph, the number of processors across\n"
  "which the graph is distributed can be retrieved by extracting the\n"
  "value for the DATA_NUMBER_OF_PIECES key in the vtkInformation object\n"
  "(retrieved by GetInformation()) associated with the graph. Similarly,\n"
  "the value corresponding to the DATA_PIECE_NUMBER key of the\n"
  "vtkInformation object describes which piece of the data this graph\n"
  "instance provides.\n\n"
  "@par Distributed graphs: Distributed graphs behave somewhat\n"
  "differently from non-distributed graphs, and will require special\n"
  "care. In a distributed graph, each of the processors will contain a\n"
  "subset of the vertices in the graph. That subset of vertices can be\n"
  "accessed via the vtkVertexListIterator produced by GetVertices().\n"
  "GetNumberOfVertices(), therefore, returns the number of vertices\n"
  "stored locally: it does not account for vertices stored on other\n"
  "processors. A vertex (or edge) is identified by both the rank of its\n"
  "owning processor and by its index within that processor, both of\n"
  "which are encoded within the vtkIdType value that describes that\n"
  "vertex (or edge). The owning processor is a value between 0 and P-1,\n"
  "where P is the number of processors across which the vtkGraph has\n"
  "been distributed. The local index will be a value between 0 and\n"
  "GetNumberOfVertices(), for vertices, or GetNumberOfEdges(), for\n"
  "edges, and can be used to access the local parts of distributed data\n"
  "arrays. When given a vtkIdType identifying a vertex, one can\n"
  "determine the owner of the vertex with\n"
  "vtkDistributedGraphHelper::GetVertexOwner() and the local index with\n"
  "vtkDistributedGraphHelper::GetVertexIndex(). With edges, the\n"
  "appropriate methods are vtkDistributedGraphHelper::GetEdgeOwner() and\n"
  "vtkDistributedGraphHelper::GetEdgeIndex(), respectively. To construct\n"
  "a vtkIdType representing either a vertex or edge given only its owner\n"
  "and local index, use vtkDistributedGraphHelper::MakeDistributedId().\n\n"
  "@par Distributed graphs: The edges in a distributed graph are always\n"
  "stored on the processors that own the vertices named by the edge. For\n"
  "example, given a directed edge (u, v), the edge will be stored in the\n"
  "out-edges list for vertex u on the processor that owns u, and in the\n"
  "in-edges list for vertex v on the processor that owns v. This\n"
  "\"row-wise\" decomposition of the graph means that, for any vertex that\n"
  "is local to a processor, that processor can look at all of the\n"
  "incoming and outgoing edges of the graph. Processors cannot, however,\n"
  "access the incoming or outgoing edge lists of vertex owned by other\n"
  "processors. Vertices owned by other processors will not be\n"
  "encountered when traversing the vertex list via GetVertices(), but\n"
  "may be encountered by traversing the in- and out-edge lists of local\n"
  "vertices or the edge list.\n\n"
  "@par Distributed graphs: Distributed graphs can have pedigree IDs for\n"
  "the vertices in the same way that non-distributed graphs can. In this\n"
  "case, the distribution of the vertices in the graph is based on\n"
  "pedigree ID. For example, a vertex with the pedigree ID \"Here\" might\n"
  "land on processor 0 while a vertex pedigree ID \"There\" would end up\n"
  "on processor 3. By default, the pedigree IDs themselves are hashed to\n"
  "give a random (and, hopefully, even) distribution of the vertices.\n"
  "However, one can provide a different vertex distribution function by\n"
  "calling vtkDistributedGraphHelper::SetVertexPedigreeIdDistribution. \n"
  "Once a distributed graph has pedigree IDs, the no-argument\n"
  "AddVertex() method can no longer be used. Additionally, once a vertex\n"
  "has a pedigree ID, that pedigree ID should not be changed unless the\n"
  "user can guarantee that the vertex distribution will still map that\n"
  "vertex to the same processor where it already resides.\n\n"
  "@sa\n"
  "vtkDirectedGraph vtkUndirectedGraph vtkMutableDirectedGraph\n"
  "vtkMutableUndirectedGraph vtkTree vtkDistributedGraphHelper\n\n"
  "@par Thanks: Thanks to Brian Wylie, Timothy Shead, Ken Moreland of\n"
  "Sandia National Laboratories and Douglas Gregor of Indiana University\n"
  "for designing these classes.\n\n";


static PyObject *
PyvtkGraph_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGraph::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraph::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGraph *tempr = vtkGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraph::NewInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
      {
        PyVTKObject_GetObject(result)->UnRegister(0);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
      }
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetVertexData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->GetVertexData() :
      op->vtkGraph::GetVertexData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetEdgeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->GetEdgeData() :
      op->vtkGraph::GetEdgeData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkGraph::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkGraph::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint(temp0) :
      op->vtkGraph::GetPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGraph_GetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetPoint(temp0, temp1);
    }
    else
    {
      op->vtkGraph::GetPoint(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGraph_GetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkGraph_GetPoint_s1(self, args);
    case 2:
      return PyvtkGraph_GetPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint");
  return nullptr;
}



static PyObject *
PyvtkGraph_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetPoints() :
      op->vtkGraph::GetPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_SetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetPoints(temp0);
    }
    else
    {
      op->vtkGraph::SetPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_ComputeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeBounds();
    }
    else
    {
      op->vtkGraph::ComputeBounds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkGraph::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGraph_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkGraph::GetBounds(temp0);
    }

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
PyvtkGraph_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkGraph_GetBounds_s1(self, args);
    case 1:
      return PyvtkGraph_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkGraph_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGraph::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetOutEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkOutEdgeIterator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkOutEdgeIterator"))
  {
    if (ap.IsBound())
    {
      op->GetOutEdges(temp0, temp1);
    }
    else
    {
      op->vtkGraph::GetOutEdges(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetDegree(temp0) :
      op->vtkGraph::GetDegree(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetOutDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetOutDegree(temp0) :
      op->vtkGraph::GetOutDegree(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetOutEdge_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkOutEdgeType tempr = (ap.IsBound() ?
      op->GetOutEdge(temp0, temp1) :
      op->vtkGraph::GetOutEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkOutEdgeType");
    }
  }

  return result;
}

static PyObject *
PyvtkGraph_GetOutEdge_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkGraphEdge *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkGraphEdge"))
  {
    if (ap.IsBound())
    {
      op->GetOutEdge(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGraph::GetOutEdge(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGraph_GetOutEdge(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkGraph_GetOutEdge_s1(self, args);
    case 3:
      return PyvtkGraph_GetOutEdge_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutEdge");
  return nullptr;
}



static PyObject *
PyvtkGraph_GetInEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkInEdgeIterator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInEdgeIterator"))
  {
    if (ap.IsBound())
    {
      op->GetInEdges(temp0, temp1);
    }
    else
    {
      op->vtkGraph::GetInEdges(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetInDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetInDegree(temp0) :
      op->vtkGraph::GetInDegree(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetInEdge_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkInEdgeType tempr = (ap.IsBound() ?
      op->GetInEdge(temp0, temp1) :
      op->vtkGraph::GetInEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkInEdgeType");
    }
  }

  return result;
}

static PyObject *
PyvtkGraph_GetInEdge_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkGraphEdge *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkGraphEdge"))
  {
    if (ap.IsBound())
    {
      op->GetInEdge(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGraph::GetInEdge(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGraph_GetInEdge(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkGraph_GetInEdge_s1(self, args);
    case 3:
      return PyvtkGraph_GetInEdge_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInEdge");
  return nullptr;
}



static PyObject *
PyvtkGraph_GetAdjacentVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjacentVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkAdjacentVertexIterator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAdjacentVertexIterator"))
  {
    if (ap.IsBound())
    {
      op->GetAdjacentVertices(temp0, temp1);
    }
    else
    {
      op->vtkGraph::GetAdjacentVertices(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkEdgeListIterator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEdgeListIterator"))
  {
    if (ap.IsBound())
    {
      op->GetEdges(temp0);
    }
    else
    {
      op->vtkGraph::GetEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfEdges() :
      op->vtkGraph::GetNumberOfEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkVertexListIterator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVertexListIterator"))
  {
    if (ap.IsBound())
    {
      op->GetVertices(temp0);
    }
    else
    {
      op->vtkGraph::GetVertices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetNumberOfVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfVertices() :
      op->vtkGraph::GetNumberOfVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_SetDistributedGraphHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistributedGraphHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkDistributedGraphHelper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDistributedGraphHelper"))
  {
    if (ap.IsBound())
    {
      op->SetDistributedGraphHelper(temp0);
    }
    else
    {
      op->vtkGraph::SetDistributedGraphHelper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetDistributedGraphHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistributedGraphHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDistributedGraphHelper *tempr = (ap.IsBound() ?
      op->GetDistributedGraphHelper() :
      op->vtkGraph::GetDistributedGraphHelper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_FindVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindVertex(*temp0) :
      op->vtkGraph::FindVertex(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkGraph_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkGraph::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkGraph::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
  {
    if (ap.IsBound())
    {
      op->CopyStructure(temp0);
    }
    else
    {
      op->vtkGraph::CopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_CheckedShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckedShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
  {
    bool tempr = (ap.IsBound() ?
      op->CheckedShallowCopy(temp0) :
      op->vtkGraph::CheckedShallowCopy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_CheckedDeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckedDeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
  {
    bool tempr = (ap.IsBound() ?
      op->CheckedDeepCopy(temp0) :
      op->vtkGraph::CheckedDeepCopy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkGraph::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkGraph *tempr = vtkGraph::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGraph_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkGraph *tempr = vtkGraph::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGraph_GetData_Methods[] = {
  {nullptr, PyvtkGraph_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, PyvtkGraph_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGraph_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGraph_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkGraph_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}



static PyObject *
PyvtkGraph_ReorderOutVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReorderOutVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkIdTypeArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->ReorderOutVertices(temp0, temp1);
    }
    else
    {
      op->vtkGraph::ReorderOutVertices(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_IsSameStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSameStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSameStructure(temp0) :
      op->vtkGraph::IsSameStructure(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetSourceVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSourceVertex(temp0) :
      op->vtkGraph::GetSourceVertex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetTargetVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTargetVertex(temp0) :
      op->vtkGraph::GetTargetVertex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_SetEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(size2);
  double *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.CheckSizeHint(2, size2, 3 * temp1))
  {
    if (ap.IsBound())
    {
      op->SetEdgePoints(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGraph::SetEdgePoints(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    if (ap.IsBound())
    {
      op->GetEdgePoints(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGraph::GetEdgePoints(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2, 3 * temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetNumberOfEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfEdgePoints(temp0) :
      op->vtkGraph::GetNumberOfEdgePoints(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetEdgePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double *tempr = (ap.IsBound() ?
      op->GetEdgePoint(temp0, temp1) :
      op->vtkGraph::GetEdgePoint(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_ClearEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ClearEdgePoints(temp0);
    }
    else
    {
      op->vtkGraph::ClearEdgePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_SetEdgePoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  const size_t size2 = 3;
  double temp2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    if (ap.IsBound())
    {
      op->SetEdgePoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGraph::SetEdgePoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGraph_SetEdgePoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  double temp2;
  double temp3;
  double temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetEdgePoint(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkGraph::SetEdgePoint(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGraph_SetEdgePoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkGraph_SetEdgePoint_s1(self, args);
    case 5:
      return PyvtkGraph_SetEdgePoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEdgePoint");
  return nullptr;
}



static PyObject *
PyvtkGraph_AddEdgePoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEdgePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->AddEdgePoint(temp0, temp1);
    }
    else
    {
      op->vtkGraph::AddEdgePoint(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGraph_AddEdgePoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEdgePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddEdgePoint(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkGraph::AddEdgePoint(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGraph_AddEdgePoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkGraph_AddEdgePoint_s1(self, args);
    case 4:
      return PyvtkGraph_AddEdgePoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddEdgePoint");
  return nullptr;
}



static PyObject *
PyvtkGraph_ShallowCopyEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopyEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopyEdgePoints(temp0);
    }
    else
    {
      op->vtkGraph::ShallowCopyEdgePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_DeepCopyEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopyEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
  {
    if (ap.IsBound())
    {
      op->DeepCopyEdgePoints(temp0);
    }
    else
    {
      op->vtkGraph::DeepCopyEdgePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetGraphInternals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphInternals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkGraphInternals *tempr = (ap.IsBound() ?
      op->GetGraphInternals(temp0) :
      op->vtkGraph::GetGraphInternals(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetInducedEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInducedEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdTypeArray *temp0 = nullptr;
  vtkIdTypeArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->GetInducedEdges(temp0, temp1);
    }
    else
    {
      op->vtkGraph::GetInducedEdges(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetAttributesAsFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributesAsFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkFieldData *tempr = (ap.IsBound() ?
      op->GetAttributesAsFieldData(temp0) :
      op->vtkGraph::GetAttributesAsFieldData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfElements(temp0) :
      op->vtkGraph::GetNumberOfElements(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_Dump(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dump");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Dump();
    }
    else
    {
      op->vtkGraph::Dump();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_GetEdgeId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetEdgeId(temp0, temp1) :
      op->vtkGraph::GetEdgeId(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_ToDirectedGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToDirectedGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkDirectedGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDirectedGraph"))
  {
    bool tempr = (ap.IsBound() ?
      op->ToDirectedGraph(temp0) :
      op->vtkGraph::ToDirectedGraph(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraph_ToUndirectedGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToUndirectedGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkUndirectedGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUndirectedGraph"))
  {
    bool tempr = (ap.IsBound() ?
      op->ToUndirectedGraph(temp0) :
      op->vtkGraph::ToUndirectedGraph(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGraph_Methods[] = {
  {"IsTypeOf", PyvtkGraph_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGraph_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGraph_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGraph\nC++: static vtkGraph *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGraph_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGraph\nC++: vtkGraph *NewInstance()\n\n"},
  {"GetVertexData", PyvtkGraph_GetVertexData, METH_VARARGS,
   "V.GetVertexData() -> vtkDataSetAttributes\nC++: virtual vtkDataSetAttributes *GetVertexData()\n\nGet the vertex or edge data.\n"},
  {"GetEdgeData", PyvtkGraph_GetEdgeData, METH_VARARGS,
   "V.GetEdgeData() -> vtkDataSetAttributes\nC++: virtual vtkDataSetAttributes *GetEdgeData()\n\nGet the vertex or edge data.\n"},
  {"GetDataObjectType", PyvtkGraph_GetDataObjectType, METH_VARARGS,
   "V.GetDataObjectType() -> int\nC++: int GetDataObjectType() override;\n\nReturn what type of dataset this is.\n"},
  {"Initialize", PyvtkGraph_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nInitialize to an empty graph.\n"},
  {"GetPoint", PyvtkGraph_GetPoint, METH_VARARGS,
   "V.GetPoint(int) -> (float, ...)\nC++: double *GetPoint(vtkIdType ptId)\nV.GetPoint(int, [float, float, float])\nC++: void GetPoint(vtkIdType ptId, double x[3])\n\nThese methods return the point (0,0,0) until the points structure\nis created, when it returns the actual point position. In a\ndistributed graph, only the points for local vertices can be\nretrieved.\n"},
  {"GetPoints", PyvtkGraph_GetPoints, METH_VARARGS,
   "V.GetPoints() -> vtkPoints\nC++: vtkPoints *GetPoints()\n\nReturns the points array for this graph. If points is not yet\nconstructed, generates and returns a new points array filled with\n(0,0,0) coordinates. In a distributed graph, only the points for\nlocal vertices can be retrieved or modified.\n"},
  {"SetPoints", PyvtkGraph_SetPoints, METH_VARARGS,
   "V.SetPoints(vtkPoints)\nC++: virtual void SetPoints(vtkPoints *points)\n\nReturns the points array for this graph. If points is not yet\nconstructed, generates and returns a new points array filled with\n(0,0,0) coordinates. In a distributed graph, only the points for\nlocal vertices can be retrieved or modified.\n"},
  {"ComputeBounds", PyvtkGraph_ComputeBounds, METH_VARARGS,
   "V.ComputeBounds()\nC++: void ComputeBounds()\n\nCompute the bounds of the graph. In a distributed graph, this\ncomputes the bounds around the local part of the graph.\n"},
  {"GetBounds", PyvtkGraph_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, ...)\nC++: double *GetBounds()\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nReturn a pointer to the geometry bounding box in the form\n(xmin,xmax, ymin,ymax, zmin,zmax). In a distributed graph, this\ncomputes the bounds around the local part of the graph.\n"},
  {"GetMTime", PyvtkGraph_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nThe modified time of the graph.\n"},
  {"GetOutEdges", PyvtkGraph_GetOutEdges, METH_VARARGS,
   "V.GetOutEdges(int, vtkOutEdgeIterator)\nC++: virtual void GetOutEdges(vtkIdType v, vtkOutEdgeIterator *it)\n\nInitializes the out edge iterator to iterate over all outgoing\nedges of vertex v.  For an undirected graph, returns all incident\nedges. In a distributed graph, the vertex v must be local to this\nprocessor.\n"},
  {"GetDegree", PyvtkGraph_GetDegree, METH_VARARGS,
   "V.GetDegree(int) -> int\nC++: virtual vtkIdType GetDegree(vtkIdType v)\n\nThe total of all incoming and outgoing vertices for vertex v. For\nundirected graphs, this is simply the number of edges incident to\nv. In a distributed graph, the vertex v must be local to this\nprocessor.\n"},
  {"GetOutDegree", PyvtkGraph_GetOutDegree, METH_VARARGS,
   "V.GetOutDegree(int) -> int\nC++: virtual vtkIdType GetOutDegree(vtkIdType v)\n\nThe number of outgoing edges from vertex v. For undirected\ngraphs, returns the same as GetDegree(). In a distributed graph,\nthe vertex v must be local to this processor.\n"},
  {"GetOutEdge", PyvtkGraph_GetOutEdge, METH_VARARGS,
   "V.GetOutEdge(int, int) -> vtkOutEdgeType\nC++: virtual vtkOutEdgeType GetOutEdge(vtkIdType v,\n    vtkIdType index)\nV.GetOutEdge(int, int, vtkGraphEdge)\nC++: virtual void GetOutEdge(vtkIdType v, vtkIdType index,\n    vtkGraphEdge *e)\n\nRandom-access method for retrieving outgoing edges from vertex v.\n"},
  {"GetInEdges", PyvtkGraph_GetInEdges, METH_VARARGS,
   "V.GetInEdges(int, vtkInEdgeIterator)\nC++: virtual void GetInEdges(vtkIdType v, vtkInEdgeIterator *it)\n\nInitializes the in edge iterator to iterate over all incoming\nedges to vertex v.  For an undirected graph, returns all incident\nedges. In a distributed graph, the vertex v must be local to this\nprocessor.\n"},
  {"GetInDegree", PyvtkGraph_GetInDegree, METH_VARARGS,
   "V.GetInDegree(int) -> int\nC++: virtual vtkIdType GetInDegree(vtkIdType v)\n\nThe number of incoming edges to vertex v. For undirected graphs,\nreturns the same as GetDegree(). In a distributed graph, the\nvertex v must be local to this processor.\n"},
  {"GetInEdge", PyvtkGraph_GetInEdge, METH_VARARGS,
   "V.GetInEdge(int, int) -> vtkInEdgeType\nC++: virtual vtkInEdgeType GetInEdge(vtkIdType v, vtkIdType index)\nV.GetInEdge(int, int, vtkGraphEdge)\nC++: virtual void GetInEdge(vtkIdType v, vtkIdType index,\n    vtkGraphEdge *e)\n\nRandom-access method for retrieving incoming edges to vertex v.\n"},
  {"GetAdjacentVertices", PyvtkGraph_GetAdjacentVertices, METH_VARARGS,
   "V.GetAdjacentVertices(int, vtkAdjacentVertexIterator)\nC++: virtual void GetAdjacentVertices(vtkIdType v,\n    vtkAdjacentVertexIterator *it)\n\nInitializes the adjacent vertex iterator to iterate over all\noutgoing vertices from vertex v.  For an undirected graph,\nreturns all adjacent vertices. In a distributed graph, the vertex\nv must be local to this processor.\n"},
  {"GetEdges", PyvtkGraph_GetEdges, METH_VARARGS,
   "V.GetEdges(vtkEdgeListIterator)\nC++: virtual void GetEdges(vtkEdgeListIterator *it)\n\nInitializes the edge list iterator to iterate over all edges in\nthe graph. Edges may not be traversed in order of increasing edge\nid. In a distributed graph, this returns edges that are stored\nlocally.\n"},
  {"GetNumberOfEdges", PyvtkGraph_GetNumberOfEdges, METH_VARARGS,
   "V.GetNumberOfEdges() -> int\nC++: virtual vtkIdType GetNumberOfEdges()\n\nThe number of edges in the graph. In a distributed graph, this\nreturns the number of edges stored locally.\n"},
  {"GetVertices", PyvtkGraph_GetVertices, METH_VARARGS,
   "V.GetVertices(vtkVertexListIterator)\nC++: virtual void GetVertices(vtkVertexListIterator *it)\n\nInitializes the vertex list iterator to iterate over all vertices\nin the graph. In a distributed graph, the iterator traverses all\nlocal vertices.\n"},
  {"GetNumberOfVertices", PyvtkGraph_GetNumberOfVertices, METH_VARARGS,
   "V.GetNumberOfVertices() -> int\nC++: virtual vtkIdType GetNumberOfVertices()\n\nThe number of vertices in the graph. In a distributed graph,\nreturns the number of local vertices in the graph.\n"},
  {"SetDistributedGraphHelper", PyvtkGraph_SetDistributedGraphHelper, METH_VARARGS,
   "V.SetDistributedGraphHelper(vtkDistributedGraphHelper)\nC++: void SetDistributedGraphHelper(\n    vtkDistributedGraphHelper *helper)\n\nSets the distributed graph helper of this graph, turning it into\na distributed graph. This operation can only be executed on an\nempty graph.\n"},
  {"GetDistributedGraphHelper", PyvtkGraph_GetDistributedGraphHelper, METH_VARARGS,
   "V.GetDistributedGraphHelper() -> vtkDistributedGraphHelper\nC++: vtkDistributedGraphHelper *GetDistributedGraphHelper()\n\nRetrieves the distributed graph helper for this graph\n"},
  {"FindVertex", PyvtkGraph_FindVertex, METH_VARARGS,
   "V.FindVertex(vtkVariant) -> int\nC++: vtkIdType FindVertex(const vtkVariant &pedigreeID)\n\nRetrieve the vertex with the given pedigree ID. If successful,\nreturns the ID of the vertex. Otherwise, either the vertex data\ndoes not have a pedigree ID array or there is no vertex with the\ngiven pedigree ID, so this function returns -1. If the graph is a\ndistributed graph, this method will return the Distributed-ID of\nthe vertex.\n"},
  {"ShallowCopy", PyvtkGraph_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataObject)\nC++: void ShallowCopy(vtkDataObject *obj) override;\n\nShallow copies the data object into this graph. If it is an\nincompatible graph, reports an error.\n"},
  {"DeepCopy", PyvtkGraph_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *obj) override;\n\nDeep copies the data object into this graph. If it is an\nincompatible graph, reports an error.\n"},
  {"CopyStructure", PyvtkGraph_CopyStructure, METH_VARARGS,
   "V.CopyStructure(vtkGraph)\nC++: virtual void CopyStructure(vtkGraph *g)\n\nDoes a shallow copy of the topological information, but not the\nassociated attributes.\n"},
  {"CheckedShallowCopy", PyvtkGraph_CheckedShallowCopy, METH_VARARGS,
   "V.CheckedShallowCopy(vtkGraph) -> bool\nC++: virtual bool CheckedShallowCopy(vtkGraph *g)\n\nPerforms the same operation as ShallowCopy(), but instead of\nreporting an error for an incompatible graph, returns false.\n"},
  {"CheckedDeepCopy", PyvtkGraph_CheckedDeepCopy, METH_VARARGS,
   "V.CheckedDeepCopy(vtkGraph) -> bool\nC++: virtual bool CheckedDeepCopy(vtkGraph *g)\n\nPerforms the same operation as DeepCopy(), but instead of\nreporting an error for an incompatible graph, returns false.\n"},
  {"Squeeze", PyvtkGraph_Squeeze, METH_VARARGS,
   "V.Squeeze()\nC++: virtual void Squeeze()\n\nReclaim unused memory.\n"},
  {"GetData", PyvtkGraph_GetData, METH_VARARGS,
   "V.GetData(vtkInformation) -> vtkGraph\nC++: static vtkGraph *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkGraph\nC++: static vtkGraph *GetData(vtkInformationVector *v, int i=0)\n\nRetrieve a graph from an information vector.\n"},
  {"ReorderOutVertices", PyvtkGraph_ReorderOutVertices, METH_VARARGS,
   "V.ReorderOutVertices(int, vtkIdTypeArray)\nC++: void ReorderOutVertices(vtkIdType v,\n    vtkIdTypeArray *vertices)\n\nReorder the outgoing vertices of a vertex. The vertex list must\nhave the same elements as the current out edge list, just in a\ndifferent order. This method does not change the topology of the\ngraph. In a distributed graph, the vertex v must be local.\n"},
  {"IsSameStructure", PyvtkGraph_IsSameStructure, METH_VARARGS,
   "V.IsSameStructure(vtkGraph) -> bool\nC++: bool IsSameStructure(vtkGraph *other)\n\nReturns true if both graphs point to the same adjacency\nstructure. Can be used to test the copy-on-write feature of the\ngraph.\n"},
  {"GetSourceVertex", PyvtkGraph_GetSourceVertex, METH_VARARGS,
   "V.GetSourceVertex(int) -> int\nC++: vtkIdType GetSourceVertex(vtkIdType e)\n\nRetrieve the source and target vertices for an edge id. NOTE: The\nfirst time this is called, the graph will build a mapping array\nfrom edge id to source/target that is the same size as the number\nof edges in the graph. If you have access to a vtkOutEdgeType,\nvtkInEdgeType, vtkEdgeType, or vtkGraphEdge, you should directly\nuse these structures to look up the source or target instead of\nthis method.\n"},
  {"GetTargetVertex", PyvtkGraph_GetTargetVertex, METH_VARARGS,
   "V.GetTargetVertex(int) -> int\nC++: vtkIdType GetTargetVertex(vtkIdType e)\n\nRetrieve the source and target vertices for an edge id. NOTE: The\nfirst time this is called, the graph will build a mapping array\nfrom edge id to source/target that is the same size as the number\nof edges in the graph. If you have access to a vtkOutEdgeType,\nvtkInEdgeType, vtkEdgeType, or vtkGraphEdge, you should directly\nuse these structures to look up the source or target instead of\nthis method.\n"},
  {"SetEdgePoints", PyvtkGraph_SetEdgePoints, METH_VARARGS,
   "V.SetEdgePoints(int, int, (float, ...))\nC++: void SetEdgePoints(vtkIdType e, vtkIdType npts,\n    const double pts[])\n\nGet/Set the internal edge control points associated with each\nedge. The size of the pts array is 3*npts, and holds the x,y,z\nlocation of each edge control point.\n"},
  {"GetEdgePoints", PyvtkGraph_GetEdgePoints, METH_VARARGS,
   "V.GetEdgePoints(int, int, [float, ...])\nC++: void GetEdgePoints(vtkIdType e, vtkIdType &npts,\n    double *&pts)\n\nGet/Set the internal edge control points associated with each\nedge. The size of the pts array is 3*npts, and holds the x,y,z\nlocation of each edge control point.\n"},
  {"GetNumberOfEdgePoints", PyvtkGraph_GetNumberOfEdgePoints, METH_VARARGS,
   "V.GetNumberOfEdgePoints(int) -> int\nC++: vtkIdType GetNumberOfEdgePoints(vtkIdType e)\n\nGet the number of edge points associated with an edge.\n"},
  {"GetEdgePoint", PyvtkGraph_GetEdgePoint, METH_VARARGS,
   "V.GetEdgePoint(int, int) -> (float, float, float)\nC++: double *GetEdgePoint(vtkIdType e, vtkIdType i)\n\nGet the x,y,z location of a point along edge e.\n"},
  {"ClearEdgePoints", PyvtkGraph_ClearEdgePoints, METH_VARARGS,
   "V.ClearEdgePoints(int)\nC++: void ClearEdgePoints(vtkIdType e)\n\nClear all points associated with an edge.\n"},
  {"SetEdgePoint", PyvtkGraph_SetEdgePoint, METH_VARARGS,
   "V.SetEdgePoint(int, int, (float, float, float))\nC++: void SetEdgePoint(vtkIdType e, vtkIdType i,\n    const double x[3])\nV.SetEdgePoint(int, int, float, float, float)\nC++: void SetEdgePoint(vtkIdType e, vtkIdType i, double x,\n    double y, double z)\n\nSet an x,y,z location of a point along an edge. This assumes\nthere is already a point at location i, and simply overwrites it.\n"},
  {"AddEdgePoint", PyvtkGraph_AddEdgePoint, METH_VARARGS,
   "V.AddEdgePoint(int, (float, float, float))\nC++: void AddEdgePoint(vtkIdType e, const double x[3])\nV.AddEdgePoint(int, float, float, float)\nC++: void AddEdgePoint(vtkIdType e, double x, double y, double z)\n\nAdds a point to the end of the list of edge points for a certain\nedge.\n"},
  {"ShallowCopyEdgePoints", PyvtkGraph_ShallowCopyEdgePoints, METH_VARARGS,
   "V.ShallowCopyEdgePoints(vtkGraph)\nC++: void ShallowCopyEdgePoints(vtkGraph *g)\n\nCopy the internal edge point data from another graph into this\ngraph. Both graphs must have the same number of edges.\n"},
  {"DeepCopyEdgePoints", PyvtkGraph_DeepCopyEdgePoints, METH_VARARGS,
   "V.DeepCopyEdgePoints(vtkGraph)\nC++: void DeepCopyEdgePoints(vtkGraph *g)\n\nCopy the internal edge point data from another graph into this\ngraph. Both graphs must have the same number of edges.\n"},
  {"GetGraphInternals", PyvtkGraph_GetGraphInternals, METH_VARARGS,
   "V.GetGraphInternals(bool) -> vtkGraphInternals\nC++: vtkGraphInternals *GetGraphInternals(bool modifying)\n\nReturns the internal representation of the graph. If modifying is\ntrue, then the returned vtkGraphInternals object will be unique\nto this vtkGraph object.\n"},
  {"GetInducedEdges", PyvtkGraph_GetInducedEdges, METH_VARARGS,
   "V.GetInducedEdges(vtkIdTypeArray, vtkIdTypeArray)\nC++: void GetInducedEdges(vtkIdTypeArray *verts,\n    vtkIdTypeArray *edges)\n\nFills a list of edge indices with the edges contained in the\ninduced subgraph formed by the vertices in the vertex list.\n"},
  {"GetAttributesAsFieldData", PyvtkGraph_GetAttributesAsFieldData, METH_VARARGS,
   "V.GetAttributesAsFieldData(int) -> vtkFieldData\nC++: vtkFieldData *GetAttributesAsFieldData(int type) override;\n\nReturns the attributes of the data object as a vtkFieldData. This\nreturns non-null values in all the same cases as GetAttributes,\nin addition to the case of FIELD, which will return the field\ndata for any vtkDataObject subclass.\n"},
  {"GetNumberOfElements", PyvtkGraph_GetNumberOfElements, METH_VARARGS,
   "V.GetNumberOfElements(int) -> int\nC++: vtkIdType GetNumberOfElements(int type) override;\n\nGet the number of elements for a specific attribute type (VERTEX,\nEDGE, etc.).\n"},
  {"Dump", PyvtkGraph_Dump, METH_VARARGS,
   "V.Dump()\nC++: void Dump()\n\nDump the contents of the graph to standard output.\n"},
  {"GetEdgeId", PyvtkGraph_GetEdgeId, METH_VARARGS,
   "V.GetEdgeId(int, int) -> int\nC++: vtkIdType GetEdgeId(vtkIdType a, vtkIdType b)\n\nReturns the Id of the edge between vertex a and vertex b. This is\nindependent of directionality of the edge, that is, if edge A->B\nexists or if edge B->A exists, this function will return its Id.\nIf multiple edges exist between a and b, here is no guarantee\nabout which one will be returned. Returns -1 if no edge exists\nbetween a and b.\n"},
  {"ToDirectedGraph", PyvtkGraph_ToDirectedGraph, METH_VARARGS,
   "V.ToDirectedGraph(vtkDirectedGraph) -> bool\nC++: bool ToDirectedGraph(vtkDirectedGraph *g)\n\nConvert the graph to a directed graph.\n"},
  {"ToUndirectedGraph", PyvtkGraph_ToUndirectedGraph, METH_VARARGS,
   "V.ToUndirectedGraph(vtkUndirectedGraph) -> bool\nC++: bool ToUndirectedGraph(vtkUndirectedGraph *g)\n\nConvert the graph to an undirected graph.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGraph_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkGraph", // tp_name
  sizeof(PyVTKObject), // tp_basicsize
  0, // tp_itemsize
  PyVTKObject_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  PyVTKObject_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  PyObject_GenericSetAttr, // tp_setattro
  &PyVTKObject_AsBuffer, // tp_as_buffer
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_BASETYPE, // tp_flags
  PyvtkGraph_Doc, // tp_doc
  PyVTKObject_Traverse, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  offsetof(PyVTKObject, vtk_weakreflist), // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  PyVTKObject_GetSet, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  offsetof(PyVTKObject, vtk_dict), // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyVTKObject_New, // tp_new
  PyObject_GC_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkGraph_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGraph_Type, PyvtkGraph_Methods,
    "vtkGraph",
 nullptr);

  PyTypeObject *pytype = &PyvtkGraph_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGraph(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEdgeBase_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkEdgeBase", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkOutEdgeType_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkOutEdgeType", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkInEdgeType_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkInEdgeType", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkEdgeType_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkEdgeType", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkGraph_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGraph", o) != 0)
  {
    Py_DECREF(o);
  }

}

