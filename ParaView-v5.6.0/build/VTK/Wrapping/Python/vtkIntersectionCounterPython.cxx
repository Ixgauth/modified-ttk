// python wrapper for vtkIntersectionCounter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIntersectionCounter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIntersectionCounter(PyObject *); }

static const char *PyvtkIntersectionCounter_Doc =
  "vtkIntersectionCounter - Fast simple class for dealing with ray\nintersections\n\n"
  "vtkIntersectionCounter is used to intersect data and merge coincident\n"
  "points along the intersect ray. It is light-weight and many of the\n"
  "member functions are in-lined so its very fast. It is not derived\n"
  "from vtkObject so it can be allocated on the stack.\n\n"
  "This class makes the finite ray intersection process more robust. It\n"
  "merges intersections that are very close to one another (within a\n"
  "tolerance). Such situations are common when intersection rays pass\n"
  "through the edge or vertex of a mesh.\n\n"
  "@sa\n"
  "vtkBoundingBox\n\n"
  "vtkIntersectionCounter()\n"
  "vtkIntersectionCounter(double tol, double length)\n"
  "vtkIntersectionCounter(const &vtkIntersectionCounter)\n";


static PyObject *
PyvtkIntersectionCounter_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkIntersectionCounter *op = static_cast<vtkIntersectionCounter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetTolerance(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionCounter_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkIntersectionCounter *op = static_cast<vtkIntersectionCounter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->GetTolerance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionCounter_AddIntersection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIntersection");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkIntersectionCounter *op = static_cast<vtkIntersectionCounter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->AddIntersection(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionCounter_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkIntersectionCounter *op = static_cast<vtkIntersectionCounter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Reset();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionCounter_CountIntersections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CountIntersections");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkIntersectionCounter *op = static_cast<vtkIntersectionCounter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->CountIntersections();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkIntersectionCounter_Methods[] = {
  {"SetTolerance", PyvtkIntersectionCounter_SetTolerance, METH_VARARGS,
   "V.SetTolerance(float)\nC++: void SetTolerance(double tol)\n\nSet/Get the intersection tolerance.\n"},
  {"GetTolerance", PyvtkIntersectionCounter_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> float\nC++: double GetTolerance()\n\n"},
  {"AddIntersection", PyvtkIntersectionCounter_AddIntersection, METH_VARARGS,
   "V.AddIntersection(float)\nC++: void AddIntersection(double t)\n\nAdd an intersection given by parametric coordinate t.\n"},
  {"Reset", PyvtkIntersectionCounter_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nReset the intersection process.\n"},
  {"CountIntersections", PyvtkIntersectionCounter_CountIntersections, METH_VARARGS,
   "V.CountIntersections() -> int\nC++: int CountIntersections()\n\nReturns number of intersections (even number of intersections,\noutside or odd number of intersections, inside). This is done by\nconsidering close intersections (within Tolerance) as being the\nsame point.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkIntersectionCounter_vtkIntersectionCounter_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkIntersectionCounter");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkIntersectionCounter *op = new vtkIntersectionCounter();

    result = PyVTKSpecialObject_New("vtkIntersectionCounter", op);
  }

  return result;
}

static PyObject *
PyvtkIntersectionCounter_vtkIntersectionCounter_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkIntersectionCounter");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkIntersectionCounter *op = new vtkIntersectionCounter(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkIntersectionCounter", op);
  }

  return result;
}

static PyObject *
PyvtkIntersectionCounter_vtkIntersectionCounter_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkIntersectionCounter");

  vtkIntersectionCounter *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkIntersectionCounter"))
  {
    vtkIntersectionCounter *op = new vtkIntersectionCounter(*temp0);

    result = PyVTKSpecialObject_New("vtkIntersectionCounter", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkIntersectionCounter_vtkIntersectionCounter_Methods[] = {
  {nullptr, PyvtkIntersectionCounter_vtkIntersectionCounter_s3, METH_VARARGS,
   "@W vtkIntersectionCounter"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkIntersectionCounter_vtkIntersectionCounter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkIntersectionCounter_vtkIntersectionCounter_s1(self, args);
    case 2:
      return PyvtkIntersectionCounter_vtkIntersectionCounter_s2(self, args);
    case 1:
      return PyvtkIntersectionCounter_vtkIntersectionCounter_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkIntersectionCounter");
  return nullptr;
}


static PyObject *
PyvtkIntersectionCounter_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkIntersectionCounter_vtkIntersectionCounter(nullptr, args);
}

static void PyvtkIntersectionCounter_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkIntersectionCounter *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkIntersectionCounter_Hash(PyObject *self)
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

static PyTypeObject PyvtkIntersectionCounter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkIntersectionCounter", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkIntersectionCounter_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkIntersectionCounter_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkIntersectionCounter_Doc, // tp_doc
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
  PyvtkIntersectionCounter_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkIntersectionCounter_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkIntersectionCounter(*static_cast<const vtkIntersectionCounter*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkIntersectionCounter_TypeNew(); }

PyObject *PyvtkIntersectionCounter_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkIntersectionCounter_Type,
    PyvtkIntersectionCounter_Methods,
    PyvtkIntersectionCounter_vtkIntersectionCounter_Methods,
    &PyvtkIntersectionCounter_CCopy);

  PyTypeObject *pytype = &PyvtkIntersectionCounter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkIntersectionCounter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIntersectionCounter_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkIntersectionCounter", o) != 0)
  {
    Py_DECREF(o);
  }

}

