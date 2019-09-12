// python wrapper for vtkContextPolygon
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkVector.h"
#include "vtkContextPolygon.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContextPolygon(PyObject *); }

static const char *PyvtkContextPolygon_Doc =
  "vtkContextPolygon - no description provided.\n\n"

  "vtkContextPolygon()\n"
  "vtkContextPolygon(const vtkContextPolygon &polygon)\n";


static PyObject *
PyvtkContextPolygon_AddPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextPolygon *op = static_cast<vtkContextPolygon *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    op->AddPoint(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkContextPolygon_AddPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextPolygon *op = static_cast<vtkContextPolygon *>(vp);

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->AddPoint(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContextPolygon_AddPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkContextPolygon_AddPoint_s1(self, args);
    case 2:
      return PyvtkContextPolygon_AddPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddPoint");
  return nullptr;
}



static PyObject *
PyvtkContextPolygon_GetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextPolygon *op = static_cast<vtkContextPolygon *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector2f tempr = op->GetPoint(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
    }
  }

  return result;
}


static PyObject *
PyvtkContextPolygon_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextPolygon *op = static_cast<vtkContextPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetNumberOfPoints();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextPolygon_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextPolygon *op = static_cast<vtkContextPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Clear();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextPolygon_Contains(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contains");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextPolygon *op = static_cast<vtkContextPolygon *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    bool tempr = op->Contains(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkContextPolygon_Transformed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Transformed");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextPolygon *op = static_cast<vtkContextPolygon *>(vp);

  vtkTransform2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform2D"))
  {
    vtkContextPolygon tempr = op->Transformed(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkContextPolygon");
    }
  }

  return result;
}

static PyMethodDef PyvtkContextPolygon_Methods[] = {
  {"AddPoint", PyvtkContextPolygon_AddPoint, METH_VARARGS,
   "V.AddPoint(vtkVector2f)\nC++: void AddPoint(const vtkVector2f &point)\nV.AddPoint(float, float)\nC++: void AddPoint(float x, float y)\n\nAdds a point to the polygon.\n"},
  {"GetPoint", PyvtkContextPolygon_GetPoint, METH_VARARGS,
   "V.GetPoint(int) -> vtkVector2f\nC++: vtkVector2f GetPoint(vtkIdType index)\n\nReturns the point at index.\n"},
  {"GetNumberOfPoints", PyvtkContextPolygon_GetNumberOfPoints, METH_VARARGS,
   "V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints()\n\nReturns the number of points in the polygon.\n"},
  {"Clear", PyvtkContextPolygon_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nClears all the points from the polygon.\n"},
  {"Contains", PyvtkContextPolygon_Contains, METH_VARARGS,
   "V.Contains(vtkVector2f) -> bool\nC++: bool Contains(const vtkVector2f &point)\n\nReturns true if the polygon contains point.\n"},
  {"Transformed", PyvtkContextPolygon_Transformed, METH_VARARGS,
   "V.Transformed(vtkTransform2D) -> vtkContextPolygon\nC++: vtkContextPolygon Transformed(vtkTransform2D *transform)\n\nReturns a new polygon with each point transformed by transform.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkContextPolygon_vtkContextPolygon_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContextPolygon");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkContextPolygon *op = new vtkContextPolygon();

    result = PyVTKSpecialObject_New("vtkContextPolygon", op);
  }

  return result;
}

static PyObject *
PyvtkContextPolygon_vtkContextPolygon_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContextPolygon");

  vtkContextPolygon *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextPolygon"))
  {
    vtkContextPolygon *op = new vtkContextPolygon(*temp0);

    result = PyVTKSpecialObject_New("vtkContextPolygon", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkContextPolygon_vtkContextPolygon_Methods[] = {
  {nullptr, PyvtkContextPolygon_vtkContextPolygon_s2, METH_VARARGS,
   "@W vtkContextPolygon"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContextPolygon_vtkContextPolygon(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkContextPolygon_vtkContextPolygon_s1(self, args);
    case 1:
      return PyvtkContextPolygon_vtkContextPolygon_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkContextPolygon");
  return nullptr;
}


static PyObject *
PyvtkContextPolygon_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkContextPolygon_vtkContextPolygon(nullptr, args);
}

static void PyvtkContextPolygon_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkContextPolygon *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkContextPolygon_Hash(PyObject *self)
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

static PyTypeObject PyvtkContextPolygon_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkContextPolygon", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkContextPolygon_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkContextPolygon_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkContextPolygon_Doc, // tp_doc
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
  PyvtkContextPolygon_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkContextPolygon_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkContextPolygon(*static_cast<const vtkContextPolygon*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkContextPolygon_TypeNew(); }

PyObject *PyvtkContextPolygon_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkContextPolygon_Type,
    PyvtkContextPolygon_Methods,
    PyvtkContextPolygon_vtkContextPolygon_Methods,
    &PyvtkContextPolygon_CCopy);

  PyTypeObject *pytype = &PyvtkContextPolygon_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkContextPolygon(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContextPolygon_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkContextPolygon", o) != 0)
  {
    Py_DECREF(o);
  }

}

