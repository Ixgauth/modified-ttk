// python wrapper for vtkPOutlineFilterInternals
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkInformationVector.h"
#include "vtkPOutlineFilterInternals.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPOutlineFilterInternals(PyObject *); }

static const char *PyvtkPOutlineFilterInternals_Doc =
  "vtkPOutlineFilterInternals - create wireframe outline (or corners)\nfor arbitrary data set\n\n"
  "vtkPOutlineFilterInternals has common code for vtkOutlineFilter and\n"
  "vtkOutlineCornerFilter. It assumes the filter is operated in a data\n"
  "parallel pipeline.\n\n"
  "vtkPOutlineFilterInternals()\n";


static PyObject *
PyvtkPOutlineFilterInternals_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPOutlineFilterInternals *op = static_cast<vtkPOutlineFilterInternals *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    op->SetController(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPOutlineFilterInternals_SetCornerFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerFactor");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPOutlineFilterInternals *op = static_cast<vtkPOutlineFilterInternals *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetCornerFactor(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPOutlineFilterInternals_SetIsCornerSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsCornerSource");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPOutlineFilterInternals *op = static_cast<vtkPOutlineFilterInternals *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetIsCornerSource(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPOutlineFilterInternals_Methods[] = {
  {"SetController", PyvtkPOutlineFilterInternals_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *)\n\n"},
  {"SetCornerFactor", PyvtkPOutlineFilterInternals_SetCornerFactor, METH_VARARGS,
   "V.SetCornerFactor(float)\nC++: void SetCornerFactor(double cornerFactor)\n\n"},
  {"SetIsCornerSource", PyvtkPOutlineFilterInternals_SetIsCornerSource, METH_VARARGS,
   "V.SetIsCornerSource(bool)\nC++: void SetIsCornerSource(bool value)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkPOutlineFilterInternals_vtkPOutlineFilterInternals(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPOutlineFilterInternals");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkPOutlineFilterInternals *op = new vtkPOutlineFilterInternals();

    result = PyVTKSpecialObject_New("vtkPOutlineFilterInternals", op);
  }

  return result;
}

static PyMethodDef PyvtkPOutlineFilterInternals_vtkPOutlineFilterInternals_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPOutlineFilterInternals_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkPOutlineFilterInternals_vtkPOutlineFilterInternals(nullptr, args);
}

static void PyvtkPOutlineFilterInternals_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkPOutlineFilterInternals *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkPOutlineFilterInternals_Hash(PyObject *self)
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

static PyTypeObject PyvtkPOutlineFilterInternals_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelPython.vtkPOutlineFilterInternals", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkPOutlineFilterInternals_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkPOutlineFilterInternals_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkPOutlineFilterInternals_Doc, // tp_doc
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
  PyvtkPOutlineFilterInternals_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPOutlineFilterInternals_TypeNew(); }

PyObject *PyvtkPOutlineFilterInternals_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkPOutlineFilterInternals_Type,
    PyvtkPOutlineFilterInternals_Methods,
    PyvtkPOutlineFilterInternals_vtkPOutlineFilterInternals_Methods,
    nullptr);

  PyTypeObject *pytype = &PyvtkPOutlineFilterInternals_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPOutlineFilterInternals(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPOutlineFilterInternals_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkPOutlineFilterInternals", o) != 0)
  {
    Py_DECREF(o);
  }

}

