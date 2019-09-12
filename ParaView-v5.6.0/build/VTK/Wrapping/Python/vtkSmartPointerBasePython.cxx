// python wrapper for vtkSmartPointerBase
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkSmartPointerBase.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSmartPointerBase(PyObject *); }

static const char *PyvtkSmartPointerBase_Doc =
  "vtkSmartPointerBase - Non-templated superclass for vtkSmartPointer.\n\n"
  "vtkSmartPointerBase holds a pointer to a vtkObjectBase or subclass\n"
  "instance and performs one Register/UnRegister pair.  This is useful\n"
  "for storing VTK objects in STL containers.  This class is not\n"
  "intended to be used directly.  Instead, use the vtkSmartPointer class\n"
  "template to automatically perform proper cast operations.\n\n"
  "vtkSmartPointerBase()\n"
  "vtkSmartPointerBase(vtkObjectBase *r)\n"
  "vtkSmartPointerBase(const vtkSmartPointerBase &r)\n";


static PyObject *
PyvtkSmartPointerBase_GetPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointer");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSmartPointerBase *op = static_cast<vtkSmartPointerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObjectBase *tempr = op->GetPointer();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartPointerBase_Report(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Report");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSmartPointerBase *op = static_cast<vtkSmartPointerBase *>(vp);

  vtkGarbageCollector *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGarbageCollector") &&
      ap.GetValue(temp1))
  {
    op->Report(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSmartPointerBase_Methods[] = {
  {"GetPointer", PyvtkSmartPointerBase_GetPointer, METH_VARARGS,
   "V.GetPointer() -> vtkObjectBase\nC++: vtkObjectBase *GetPointer()\n\nGet the contained pointer.\n"},
  {"Report", PyvtkSmartPointerBase_Report, METH_VARARGS,
   "V.Report(vtkGarbageCollector, string)\nC++: void Report(vtkGarbageCollector *collector, const char *desc)\n\nReport the reference held by the smart pointer to a collector.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkSmartPointerBase_vtkSmartPointerBase_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSmartPointerBase");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkSmartPointerBase *op = new vtkSmartPointerBase();

    result = PyVTKSpecialObject_New("vtkSmartPointerBase", op);
  }

  return result;
}

static PyObject *
PyvtkSmartPointerBase_vtkSmartPointerBase_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSmartPointerBase");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSmartPointerBase *op = new vtkSmartPointerBase(temp0);

    result = PyVTKSpecialObject_New("vtkSmartPointerBase", op);
  }

  return result;
}

static PyObject *
PyvtkSmartPointerBase_vtkSmartPointerBase_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSmartPointerBase");

  vtkSmartPointerBase *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkSmartPointerBase"))
  {
    vtkSmartPointerBase *op = new vtkSmartPointerBase(*temp0);

    result = PyVTKSpecialObject_New("vtkSmartPointerBase", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSmartPointerBase_vtkSmartPointerBase_Methods[] = {
  {nullptr, PyvtkSmartPointerBase_vtkSmartPointerBase_s2, METH_VARARGS,
   "@V *vtkObjectBase"},
  {nullptr, PyvtkSmartPointerBase_vtkSmartPointerBase_s3, METH_VARARGS,
   "@W vtkSmartPointerBase"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSmartPointerBase_vtkSmartPointerBase(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSmartPointerBase_vtkSmartPointerBase_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkSmartPointerBase_vtkSmartPointerBase_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkSmartPointerBase");
  return nullptr;
}


static PyObject *
PyvtkSmartPointerBase_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkSmartPointerBase_vtkSmartPointerBase(nullptr, args);
}

static void PyvtkSmartPointerBase_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkSmartPointerBase *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static PyObject *PyvtkSmartPointerBase_String(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  std::ostringstream os;
  if (obj->vtk_ptr)
  {
    os << *static_cast<const vtkSmartPointerBase *>(obj->vtk_ptr);
  }
  const std::string &s = os.str();
  return PyString_FromStringAndSize(s.data(), s.size());
}

static int PyvtkSmartPointerBase_CheckExact(PyObject *ob);

static PyObject *PyvtkSmartPointerBase_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkSmartPointerBase *so1 = nullptr;
  const vtkSmartPointerBase *so2 = nullptr;
  int result = -1;

  if (PyvtkSmartPointerBase_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkSmartPointerBase *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkSmartPointerBase *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkSmartPointerBase", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkSmartPointerBase_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkSmartPointerBase *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkSmartPointerBase *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkSmartPointerBase", &n2));
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
      result = ((*so1) != (*so2));
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

static Py_hash_t PyvtkSmartPointerBase_Hash(PyObject *self)
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

static PyTypeObject PyvtkSmartPointerBase_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSmartPointerBase", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkSmartPointerBase_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkSmartPointerBase_Hash, // tp_hash
  nullptr, // tp_call
  PyvtkSmartPointerBase_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkSmartPointerBase_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkSmartPointerBase_RichCompare, // tp_richcompare
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
  PyvtkSmartPointerBase_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkSmartPointerBase_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkSmartPointerBase_Type);
}

static void *PyvtkSmartPointerBase_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkSmartPointerBase(*static_cast<const vtkSmartPointerBase*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSmartPointerBase_TypeNew(); }

PyObject *PyvtkSmartPointerBase_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkSmartPointerBase_Type,
    PyvtkSmartPointerBase_Methods,
    PyvtkSmartPointerBase_vtkSmartPointerBase_Methods,
    &PyvtkSmartPointerBase_CCopy);

  PyTypeObject *pytype = &PyvtkSmartPointerBase_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSmartPointerBase(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSmartPointerBase_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkSmartPointerBase", o) != 0)
  {
    Py_DECREF(o);
  }

}

