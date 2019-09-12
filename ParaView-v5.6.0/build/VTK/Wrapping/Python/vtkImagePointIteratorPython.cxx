// python wrapper for vtkImagePointIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkImagePointIterator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImagePointIterator(PyObject *); }

static const char *PyvtkImagePointIterator_Doc =
  "vtkImagePointIterator - iterate over all data points in an image.\n\n"
  "Superclass: vtkImagePointDataIterator\n\n"
  "This class will iterate over an image.  For each position, it\n"
  "provides the (x,y,z) position, the (I,J,K) index, and the point Id. \n"
  "If a stencil is provided, then it also reports, for each point,\n"
  "whether the point is inside the stencil.\n\n"
  "The iterator can go through the image point-by-point or span-by-span.\n"
  "The Next() method advances to the next point, while the NextSpan()\n"
  "method skips to the beginning of the next span, where a span is\n"
  "defined as a start position and point count within an image row.\n"
  "@sa\n"
  "vtkImageData vtkImageStencilData vtkImageProgressIterator\n\n"
  "vtkImagePointIterator()\n"
  "vtkImagePointIterator(vtkImageData *image,\n    const int extent[6]=nullptr, vtkImageStencilData *stencil=nullptr,\n     vtkAlgorithm *algorithm=nullptr, int threadId=0)\n"
  "vtkImagePointIterator(const &vtkImagePointIterator)\n";


static PyObject *
PyvtkImagePointIterator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImagePointIterator *op = static_cast<vtkImagePointIterator *>(vp);

  vtkImageData *temp0 = nullptr;
  size_t size1 = 0;
  int store1[6];
  int *temp1 = nullptr;
  if (ap.GetArgSize(1) > 0)
  {
    size1 = 6;
    temp1 = store1;
  }
  vtkImageStencilData *temp2 = nullptr;
  vtkAlgorithm *temp3 = nullptr;
  int temp4 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 5) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      (ap.NoArgsLeft() || ap.GetArray(temp1, size1)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkImageStencilData")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkAlgorithm")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    op->Initialize(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePointIterator_NextSpan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NextSpan");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImagePointIterator *op = static_cast<vtkImagePointIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->NextSpan();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePointIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImagePointIterator *op = static_cast<vtkImagePointIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Next();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePointIterator_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImagePointIterator *op = static_cast<vtkImagePointIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsAtEnd();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePointIterator_GetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImagePointIterator *op = static_cast<vtkImagePointIterator *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = op->GetPosition();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImagePointIterator_GetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImagePointIterator *op = static_cast<vtkImagePointIterator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetPosition(temp0);

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
PyvtkImagePointIterator_GetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkImagePointIterator_GetPosition_s1(self, args);
    case 1:
      return PyvtkImagePointIterator_GetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPosition");
  return nullptr;
}


static PyMethodDef PyvtkImagePointIterator_Methods[] = {
  {"Initialize", PyvtkImagePointIterator_Initialize, METH_VARARGS,
   "V.Initialize(vtkImageData, (int, int, int, int, int, int),\n    vtkImageStencilData, vtkAlgorithm, int)\nC++: void Initialize(vtkImageData *image,\n    const int extent[6]=nullptr,\n    vtkImageStencilData *stencil=nullptr,\n    vtkAlgorithm *algorithm=nullptr, int threadId=0)\n\nInitialize an iterator.  See constructor for more details.\n"},
  {"NextSpan", PyvtkImagePointIterator_NextSpan, METH_VARARGS,
   "V.NextSpan()\nC++: void NextSpan()\n\nMove the iterator to the beginning of the next span. A span is a\ncontiguous region of the image over which nothing but the point\nId and the X index changes.\n"},
  {"Next", PyvtkImagePointIterator_Next, METH_VARARGS,
   "V.Next()\nC++: void Next()\n\nMove to the next position (rather than directly to the next\nspan). This will automatically advance to the next span if the\nend of the current span is reached.\n"},
  {"IsAtEnd", PyvtkImagePointIterator_IsAtEnd, METH_VARARGS,
   "V.IsAtEnd() -> bool\nC++: bool IsAtEnd()\n\nTest if the iterator has completed iterating over the entire\nextent.\n"},
  {"GetPosition", PyvtkImagePointIterator_GetPosition, METH_VARARGS,
   "V.GetPosition() -> (float, float, float)\nC++: double *GetPosition()\nV.GetPosition([float, float, float])\nC++: void GetPosition(double x[3])\n\nGet the current position.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkImagePointIterator_vtkImagePointIterator_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkImagePointIterator");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkImagePointIterator *op = new vtkImagePointIterator();

    result = PyVTKSpecialObject_New("vtkImagePointIterator", op);
  }

  return result;
}

static PyObject *
PyvtkImagePointIterator_vtkImagePointIterator_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkImagePointIterator");

  vtkImageData *temp0 = nullptr;
  size_t size1 = 0;
  int store1[6];
  int *temp1 = nullptr;
  if (ap.GetArgSize(1) > 0)
  {
    size1 = 6;
    temp1 = store1;
  }
  vtkImageStencilData *temp2 = nullptr;
  vtkAlgorithm *temp3 = nullptr;
  int temp4 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 5) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      (ap.NoArgsLeft() || ap.GetArray(temp1, size1)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkImageStencilData")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkAlgorithm")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    vtkImagePointIterator *op = new vtkImagePointIterator(temp0, temp1, temp2, temp3, temp4);

    result = PyVTKSpecialObject_New("vtkImagePointIterator", op);
  }

  return result;
}

static PyObject *
PyvtkImagePointIterator_vtkImagePointIterator_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkImagePointIterator");

  vtkImagePointIterator *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkImagePointIterator"))
  {
    vtkImagePointIterator *op = new vtkImagePointIterator(*temp0);

    result = PyVTKSpecialObject_New("vtkImagePointIterator", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkImagePointIterator_vtkImagePointIterator_Methods[] = {
  {nullptr, PyvtkImagePointIterator_vtkImagePointIterator_s2, METH_VARARGS,
   "@V|PVVi *vtkImageData *i *vtkImageStencilData *vtkAlgorithm"},
  {nullptr, PyvtkImagePointIterator_vtkImagePointIterator_s3, METH_VARARGS,
   "@W vtkImagePointIterator"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImagePointIterator_vtkImagePointIterator(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImagePointIterator_vtkImagePointIterator_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkImagePointIterator_vtkImagePointIterator_s1(self, args);
    case 2:
    case 3:
    case 4:
    case 5:
      return PyvtkImagePointIterator_vtkImagePointIterator_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkImagePointIterator");
  return nullptr;
}


static PyObject *
PyvtkImagePointIterator_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkImagePointIterator_vtkImagePointIterator(nullptr, args);
}

static void PyvtkImagePointIterator_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkImagePointIterator *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkImagePointIterator_Hash(PyObject *self)
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

static PyTypeObject PyvtkImagePointIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImagePointIterator", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkImagePointIterator_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkImagePointIterator_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkImagePointIterator_Doc, // tp_doc
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
  PyvtkImagePointIterator_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkImagePointIterator_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkImagePointIterator(*static_cast<const vtkImagePointIterator*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImagePointIterator_TypeNew(); }

#ifndef DECLARED_PyvtkImagePointDataIterator_TypeNew
extern "C" { PyObject *PyvtkImagePointDataIterator_TypeNew(); }
#define DECLARED_PyvtkImagePointDataIterator_TypeNew
#endif
PyObject *PyvtkImagePointIterator_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkImagePointIterator_Type,
    PyvtkImagePointIterator_Methods,
    PyvtkImagePointIterator_vtkImagePointIterator_Methods,
    &PyvtkImagePointIterator_CCopy);

  PyTypeObject *pytype = &PyvtkImagePointIterator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImagePointDataIterator_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImagePointIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImagePointIterator_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkImagePointIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

