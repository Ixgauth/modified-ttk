// python wrapper for vtkRect
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
#include "vtkVector.h"
#include "vtkRect.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRect(PyObject *); }

static const char *PyvtkRect_IdE_Doc =
  "vtkRect- templated base type for storage of 2D rectangles.\n\n"
  "Superclass: vtkVector[float64,4]\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "rectangles. The memory layout is a contiguous array of the specified\n"
  "type, such that a float[4] can be cast to a vtkRectf and manipulated.\n"
  "Also a float[12] could be cast and used as a vtkRectf[3].\n\n"
  "vtkRect()\n"
  "vtkRect(const double &x, const double &y, const double &width,\n    const double &height)\n"
  "explicit vtkRect(const double *init)\n"
  "vtkRect(const &vtkRect<double>)\n";


static PyObject *
PyvtkRect_IdE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  double temp0;
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
    op->Set(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IdE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IdE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetX();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IdE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IdE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetY();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IdE_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetWidth(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IdE_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetWidth();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IdE_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeight");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetHeight(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IdE_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetHeight();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IdE_GetLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeft");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetLeft();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IdE_GetRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRight");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->GetRight();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IdE_GetTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTop");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->GetTop();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IdE_GetBottom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottom");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetBottom();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IdE_GetBottomLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomLeft");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2<double> tempr = op->GetBottomLeft();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2_IdE");
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IdE_GetTopLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopLeft");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector<double, 2> tempr = op->GetTopLeft();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector_IdLi2EE");
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IdE_GetBottomRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomRight");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector<double, 2> tempr = op->GetBottomRight();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector_IdLi2EE");
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IdE_GetTopRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopRight");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector<double, 2> tempr = op->GetTopRight();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector_IdLi2EE");
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IdE_AddPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    op->AddPoint(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRect_IdE_AddPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  double temp0;
  double temp1;
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
PyvtkRect_IdE_AddPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkRect_IdE_AddPoint_s1(self, args);
    case 2:
      return PyvtkRect_IdE_AddPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddPoint");
  return nullptr;
}



static PyObject *
PyvtkRect_IdE_AddRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRect");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  vtkRect<double> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRect_IdE"))
  {
    op->AddRect(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkRect_IdE_IntersectsWith(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsWith");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  vtkRect<double> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRect_IdE"))
  {
    bool tempr = op->IntersectsWith(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkRect_IdE_Methods[] = {
  {"Set", PyvtkRect_IdE_Set, METH_VARARGS,
   "V.Set(float, float, float, float)\nC++: void Set(const double &x, const double &y,\n    const double &width, const double &height)\n\nSet the x, y components of the rectangle, and the width/height.\n"},
  {"SetX", PyvtkRect_IdE_SetX, METH_VARARGS,
   "V.SetX(float)\nC++: void SetX(const double &x)\n\nSet the x component of the rectangle bottom corner, i.e. element\n0.\n"},
  {"GetX", PyvtkRect_IdE_GetX, METH_VARARGS,
   "V.GetX() -> float\nC++: const double &GetX()\n\nGet the x component of the rectangle bottom corner, i.e. element\n0.\n"},
  {"SetY", PyvtkRect_IdE_SetY, METH_VARARGS,
   "V.SetY(float)\nC++: void SetY(const double &y)\n\nSet the y component of the rectangle bottom corner, i.e. element\n1.\n"},
  {"GetY", PyvtkRect_IdE_GetY, METH_VARARGS,
   "V.GetY() -> float\nC++: const double &GetY()\n\nGet the y component of the rectangle bottom corner, i.e. element\n1.\n"},
  {"SetWidth", PyvtkRect_IdE_SetWidth, METH_VARARGS,
   "V.SetWidth(float)\nC++: void SetWidth(const double &width)\n\nSet the width of the rectanle, i.e. element 2.\n"},
  {"GetWidth", PyvtkRect_IdE_GetWidth, METH_VARARGS,
   "V.GetWidth() -> float\nC++: const double &GetWidth()\n\nGet the width of the rectangle, i.e. element 2.\n"},
  {"SetHeight", PyvtkRect_IdE_SetHeight, METH_VARARGS,
   "V.SetHeight(float)\nC++: void SetHeight(const double &height)\n\nSet the height of the rectangle, i.e. element 3.\n"},
  {"GetHeight", PyvtkRect_IdE_GetHeight, METH_VARARGS,
   "V.GetHeight() -> float\nC++: const double &GetHeight()\n\nGet the height of the rectangle, i.e. element 3.\n"},
  {"GetLeft", PyvtkRect_IdE_GetLeft, METH_VARARGS,
   "V.GetLeft() -> float\nC++: const double &GetLeft()\n\nGet the left boundary of the rectangle along the X direction.\n"},
  {"GetRight", PyvtkRect_IdE_GetRight, METH_VARARGS,
   "V.GetRight() -> float\nC++: double GetRight()\n\nGet the right boundary of the rectangle along the X direction.\n"},
  {"GetTop", PyvtkRect_IdE_GetTop, METH_VARARGS,
   "V.GetTop() -> float\nC++: double GetTop()\n\nGet the top boundary of the rectangle along the Y direction.\n"},
  {"GetBottom", PyvtkRect_IdE_GetBottom, METH_VARARGS,
   "V.GetBottom() -> float\nC++: const double &GetBottom()\n\nGet the bottom boundary of the rectangle along the Y direction.\n"},
  {"GetBottomLeft", PyvtkRect_IdE_GetBottomLeft, METH_VARARGS,
   "V.GetBottomLeft() -> vtkVector2_IdE\nC++: vtkVector2<double> GetBottomLeft()\n\nGet the bottom left corner of the rect as a vtkVector.\n"},
  {"GetTopLeft", PyvtkRect_IdE_GetTopLeft, METH_VARARGS,
   "V.GetTopLeft() -> vtkVector_IdLi2EE\nC++: vtkVector<double, 2> GetTopLeft()\n\nGet the top left corner of the rect as a vtkVector.\n"},
  {"GetBottomRight", PyvtkRect_IdE_GetBottomRight, METH_VARARGS,
   "V.GetBottomRight() -> vtkVector_IdLi2EE\nC++: vtkVector<double, 2> GetBottomRight()\n\nGet the bottom right corner of the rect as a vtkVector.\n"},
  {"GetTopRight", PyvtkRect_IdE_GetTopRight, METH_VARARGS,
   "V.GetTopRight() -> vtkVector_IdLi2EE\nC++: vtkVector<double, 2> GetTopRight()\n\nGet the bottom left corner of the rect as a vtkVector.\n"},
  {"AddPoint", PyvtkRect_IdE_AddPoint, METH_VARARGS,
   "V.AddPoint((float, float))\nC++: void AddPoint(const double point[2])\nV.AddPoint(float, float)\nC++: void AddPoint(double x, double y)\n\nExpand this rect to contain the point passed in.\n"},
  {"AddRect", PyvtkRect_IdE_AddRect, METH_VARARGS,
   "V.AddRect(vtkRect_IdE)\nC++: void AddRect(const vtkRect<double> &rect)\n\nExpand this rect to contain the rect passed in.\n"},
  {"IntersectsWith", PyvtkRect_IdE_IntersectsWith, METH_VARARGS,
   "V.IntersectsWith(vtkRect_IdE) -> bool\nC++: bool IntersectsWith(const vtkRect<double> &rect)\n\nReturns true if the rect argument overlaps this rect. If the\nupper bound of one rect is equal to the lower bound of the other\nrect, then this will return false (in that case, the rects would\nbe considered to be adjacent but not overlapping).\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkRect_IdE_vtkRect_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkRect<double> *op = new vtkRect<double>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkRect_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkRect_IdE_vtkRect_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkRect<double> *op = new vtkRect<double>(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkRect_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkRect_IdE_vtkRect_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkRect<double> *op = new vtkRect<double>(temp0);

    result = PyVTKSpecialObject_New("vtkRect_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkRect_IdE_vtkRect_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

  vtkRect<double> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRect_IdE"))
  {
    vtkRect<double> *op = new vtkRect<double>(*temp0);

    result = PyVTKSpecialObject_New("vtkRect_IdE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkRect_IdE_vtkRect_Methods[] = {
  {nullptr, PyvtkRect_IdE_vtkRect_s3, METH_VARARGS,
   "-@P *d"},
  {nullptr, PyvtkRect_IdE_vtkRect_s4, METH_VARARGS,
   "@W vtkRect_IdE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRect_IdE_vtkRect(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRect_IdE_vtkRect_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkRect_IdE_vtkRect_s1(self, args);
    case 4:
      return PyvtkRect_IdE_vtkRect_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkRect");
  return nullptr;
}


static PyObject *
PyvtkRect_IdE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkRect_IdE_vtkRect(nullptr, args);
}

static void PyvtkRect_IdE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkRect<double> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkRect_IdE_Hash(PyObject *self)
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

static PyTypeObject PyvtkRect_IdE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkRect_IdE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkRect_IdE_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkRect_IdE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkRect_IdE_Doc, // tp_doc
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
  PyvtkRect_IdE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkRect_IdE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkRect<double>(*static_cast<const vtkRect<double>*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRect_IdE_TypeNew(); }

#ifndef DECLARED_PyvtkVector_IdLi4EE_TypeNew
extern "C" { PyObject *PyvtkVector_IdLi4EE_TypeNew(); }
#define DECLARED_PyvtkVector_IdLi4EE_TypeNew
#endif
PyObject *PyvtkRect_IdE_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkRect_IdE_Type,
    PyvtkRect_IdE_Methods,
    PyvtkRect_IdE_vtkRect_Methods,
    &PyvtkRect_IdE_CCopy);

  PyTypeObject *pytype = &PyvtkRect_IdE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkVector_IdLi4EE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkRect_IfE_Doc =
  "vtkRect- templated base type for storage of 2D rectangles.\n\n"
  "Superclass: vtkVector[float32,4]\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "rectangles. The memory layout is a contiguous array of the specified\n"
  "type, such that a float[4] can be cast to a vtkRectf and manipulated.\n"
  "Also a float[12] could be cast and used as a vtkRectf[3].\n\n"
  "vtkRect()\n"
  "vtkRect(const float &x, const float &y, const float &width,\n    const float &height)\n"
  "explicit vtkRect(const float *init)\n"
  "vtkRect(const &vtkRect<float>)\n";


static PyObject *
PyvtkRect_IfE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->Set(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IfE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IfE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const float *tempr = &op->GetX();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IfE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IfE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const float *tempr = &op->GetY();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IfE_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetWidth(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IfE_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const float *tempr = &op->GetWidth();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IfE_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeight");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetHeight(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IfE_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const float *tempr = &op->GetHeight();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IfE_GetLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeft");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const float *tempr = &op->GetLeft();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IfE_GetRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRight");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = op->GetRight();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IfE_GetTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTop");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = op->GetTop();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IfE_GetBottom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottom");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const float *tempr = &op->GetBottom();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IfE_GetBottomLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomLeft");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2<float> tempr = op->GetBottomLeft();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2_IfE");
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IfE_GetTopLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopLeft");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector<float, 2> tempr = op->GetTopLeft();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector_IfLi2EE");
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IfE_GetBottomRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomRight");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector<float, 2> tempr = op->GetBottomRight();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector_IfLi2EE");
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IfE_GetTopRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopRight");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector<float, 2> tempr = op->GetTopRight();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector_IfLi2EE");
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IfE_AddPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  const size_t size0 = 2;
  float temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    op->AddPoint(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRect_IfE_AddPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

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
PyvtkRect_IfE_AddPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkRect_IfE_AddPoint_s1(self, args);
    case 2:
      return PyvtkRect_IfE_AddPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddPoint");
  return nullptr;
}



static PyObject *
PyvtkRect_IfE_AddRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRect");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  vtkRect<float> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRect_IfE"))
  {
    op->AddRect(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkRect_IfE_IntersectsWith(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsWith");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  vtkRect<float> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRect_IfE"))
  {
    bool tempr = op->IntersectsWith(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkRect_IfE_Methods[] = {
  {"Set", PyvtkRect_IfE_Set, METH_VARARGS,
   "V.Set(float, float, float, float)\nC++: void Set(const float &x, const float &y, const float &width,\n    const float &height)\n\nSet the x, y components of the rectangle, and the width/height.\n"},
  {"SetX", PyvtkRect_IfE_SetX, METH_VARARGS,
   "V.SetX(float)\nC++: void SetX(const float &x)\n\nSet the x component of the rectangle bottom corner, i.e. element\n0.\n"},
  {"GetX", PyvtkRect_IfE_GetX, METH_VARARGS,
   "V.GetX() -> float\nC++: const float &GetX()\n\nGet the x component of the rectangle bottom corner, i.e. element\n0.\n"},
  {"SetY", PyvtkRect_IfE_SetY, METH_VARARGS,
   "V.SetY(float)\nC++: void SetY(const float &y)\n\nSet the y component of the rectangle bottom corner, i.e. element\n1.\n"},
  {"GetY", PyvtkRect_IfE_GetY, METH_VARARGS,
   "V.GetY() -> float\nC++: const float &GetY()\n\nGet the y component of the rectangle bottom corner, i.e. element\n1.\n"},
  {"SetWidth", PyvtkRect_IfE_SetWidth, METH_VARARGS,
   "V.SetWidth(float)\nC++: void SetWidth(const float &width)\n\nSet the width of the rectanle, i.e. element 2.\n"},
  {"GetWidth", PyvtkRect_IfE_GetWidth, METH_VARARGS,
   "V.GetWidth() -> float\nC++: const float &GetWidth()\n\nGet the width of the rectangle, i.e. element 2.\n"},
  {"SetHeight", PyvtkRect_IfE_SetHeight, METH_VARARGS,
   "V.SetHeight(float)\nC++: void SetHeight(const float &height)\n\nSet the height of the rectangle, i.e. element 3.\n"},
  {"GetHeight", PyvtkRect_IfE_GetHeight, METH_VARARGS,
   "V.GetHeight() -> float\nC++: const float &GetHeight()\n\nGet the height of the rectangle, i.e. element 3.\n"},
  {"GetLeft", PyvtkRect_IfE_GetLeft, METH_VARARGS,
   "V.GetLeft() -> float\nC++: const float &GetLeft()\n\nGet the left boundary of the rectangle along the X direction.\n"},
  {"GetRight", PyvtkRect_IfE_GetRight, METH_VARARGS,
   "V.GetRight() -> float\nC++: float GetRight()\n\nGet the right boundary of the rectangle along the X direction.\n"},
  {"GetTop", PyvtkRect_IfE_GetTop, METH_VARARGS,
   "V.GetTop() -> float\nC++: float GetTop()\n\nGet the top boundary of the rectangle along the Y direction.\n"},
  {"GetBottom", PyvtkRect_IfE_GetBottom, METH_VARARGS,
   "V.GetBottom() -> float\nC++: const float &GetBottom()\n\nGet the bottom boundary of the rectangle along the Y direction.\n"},
  {"GetBottomLeft", PyvtkRect_IfE_GetBottomLeft, METH_VARARGS,
   "V.GetBottomLeft() -> vtkVector2_IfE\nC++: vtkVector2<float> GetBottomLeft()\n\nGet the bottom left corner of the rect as a vtkVector.\n"},
  {"GetTopLeft", PyvtkRect_IfE_GetTopLeft, METH_VARARGS,
   "V.GetTopLeft() -> vtkVector_IfLi2EE\nC++: vtkVector<float, 2> GetTopLeft()\n\nGet the top left corner of the rect as a vtkVector.\n"},
  {"GetBottomRight", PyvtkRect_IfE_GetBottomRight, METH_VARARGS,
   "V.GetBottomRight() -> vtkVector_IfLi2EE\nC++: vtkVector<float, 2> GetBottomRight()\n\nGet the bottom right corner of the rect as a vtkVector.\n"},
  {"GetTopRight", PyvtkRect_IfE_GetTopRight, METH_VARARGS,
   "V.GetTopRight() -> vtkVector_IfLi2EE\nC++: vtkVector<float, 2> GetTopRight()\n\nGet the bottom left corner of the rect as a vtkVector.\n"},
  {"AddPoint", PyvtkRect_IfE_AddPoint, METH_VARARGS,
   "V.AddPoint((float, float))\nC++: void AddPoint(const float point[2])\nV.AddPoint(float, float)\nC++: void AddPoint(float x, float y)\n\nExpand this rect to contain the point passed in.\n"},
  {"AddRect", PyvtkRect_IfE_AddRect, METH_VARARGS,
   "V.AddRect(vtkRect_IfE)\nC++: void AddRect(const vtkRect<float> &rect)\n\nExpand this rect to contain the rect passed in.\n"},
  {"IntersectsWith", PyvtkRect_IfE_IntersectsWith, METH_VARARGS,
   "V.IntersectsWith(vtkRect_IfE) -> bool\nC++: bool IntersectsWith(const vtkRect<float> &rect)\n\nReturns true if the rect argument overlaps this rect. If the\nupper bound of one rect is equal to the lower bound of the other\nrect, then this will return false (in that case, the rects would\nbe considered to be adjacent but not overlapping).\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkRect_IfE_vtkRect_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkRect<float> *op = new vtkRect<float>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkRect_IfE", op);
  }

  return result;
}

static PyObject *
PyvtkRect_IfE_vtkRect_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkRect<float> *op = new vtkRect<float>(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkRect_IfE", op);
  }

  return result;
}

static PyObject *
PyvtkRect_IfE_vtkRect_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

  const size_t size0 = 4;
  float temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkRect<float> *op = new vtkRect<float>(temp0);

    result = PyVTKSpecialObject_New("vtkRect_IfE", op);
  }

  return result;
}

static PyObject *
PyvtkRect_IfE_vtkRect_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

  vtkRect<float> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRect_IfE"))
  {
    vtkRect<float> *op = new vtkRect<float>(*temp0);

    result = PyVTKSpecialObject_New("vtkRect_IfE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkRect_IfE_vtkRect_Methods[] = {
  {nullptr, PyvtkRect_IfE_vtkRect_s3, METH_VARARGS,
   "-@P *f"},
  {nullptr, PyvtkRect_IfE_vtkRect_s4, METH_VARARGS,
   "@W vtkRect_IfE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRect_IfE_vtkRect(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRect_IfE_vtkRect_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkRect_IfE_vtkRect_s1(self, args);
    case 4:
      return PyvtkRect_IfE_vtkRect_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkRect");
  return nullptr;
}


static PyObject *
PyvtkRect_IfE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkRect_IfE_vtkRect(nullptr, args);
}

static void PyvtkRect_IfE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkRect<float> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkRect_IfE_Hash(PyObject *self)
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

static PyTypeObject PyvtkRect_IfE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkRect_IfE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkRect_IfE_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkRect_IfE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkRect_IfE_Doc, // tp_doc
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
  PyvtkRect_IfE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkRect_IfE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkRect<float>(*static_cast<const vtkRect<float>*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRect_IfE_TypeNew(); }

#ifndef DECLARED_PyvtkVector_IfLi4EE_TypeNew
extern "C" { PyObject *PyvtkVector_IfLi4EE_TypeNew(); }
#define DECLARED_PyvtkVector_IfLi4EE_TypeNew
#endif
PyObject *PyvtkRect_IfE_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkRect_IfE_Type,
    PyvtkRect_IfE_Methods,
    PyvtkRect_IfE_vtkRect_Methods,
    &PyvtkRect_IfE_CCopy);

  PyTypeObject *pytype = &PyvtkRect_IfE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkVector_IfLi4EE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkRect_IiE_Doc =
  "vtkRect- templated base type for storage of 2D rectangles.\n\n"
  "Superclass: vtkVector[int32,4]\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "rectangles. The memory layout is a contiguous array of the specified\n"
  "type, such that a float[4] can be cast to a vtkRectf and manipulated.\n"
  "Also a float[12] could be cast and used as a vtkRectf[3].\n\n"
  "vtkRect()\n"
  "vtkRect(const int &x, const int &y, const int &width,\n    const int &height)\n"
  "explicit vtkRect(const int *init)\n"
  "vtkRect(const &vtkRect<int>)\n";


static PyObject *
PyvtkRect_IiE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->Set(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IiE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IiE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = &op->GetX();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IiE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IiE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = &op->GetY();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IiE_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetWidth(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IiE_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = &op->GetWidth();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IiE_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeight");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetHeight(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IiE_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = &op->GetHeight();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IiE_GetLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeft");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = &op->GetLeft();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IiE_GetRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRight");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetRight();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IiE_GetTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTop");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetTop();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IiE_GetBottom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottom");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = &op->GetBottom();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IiE_GetBottomLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomLeft");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2<int> tempr = op->GetBottomLeft();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2_IiE");
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IiE_GetTopLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopLeft");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector<int, 2> tempr = op->GetTopLeft();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector_IiLi2EE");
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IiE_GetBottomRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomRight");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector<int, 2> tempr = op->GetBottomRight();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector_IiLi2EE");
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IiE_GetTopRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopRight");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector<int, 2> tempr = op->GetTopRight();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector_IiLi2EE");
    }
  }

  return result;
}


static PyObject *
PyvtkRect_IiE_AddPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    op->AddPoint(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRect_IiE_AddPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  int temp0;
  int temp1;
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
PyvtkRect_IiE_AddPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkRect_IiE_AddPoint_s1(self, args);
    case 2:
      return PyvtkRect_IiE_AddPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddPoint");
  return nullptr;
}



static PyObject *
PyvtkRect_IiE_AddRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRect");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  vtkRect<int> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRect_IiE"))
  {
    op->AddRect(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkRect_IiE_IntersectsWith(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsWith");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  vtkRect<int> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRect_IiE"))
  {
    bool tempr = op->IntersectsWith(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkRect_IiE_Methods[] = {
  {"Set", PyvtkRect_IiE_Set, METH_VARARGS,
   "V.Set(int, int, int, int)\nC++: void Set(const int &x, const int &y, const int &width,\n    const int &height)\n\nSet the x, y components of the rectangle, and the width/height.\n"},
  {"SetX", PyvtkRect_IiE_SetX, METH_VARARGS,
   "V.SetX(int)\nC++: void SetX(const int &x)\n\nSet the x component of the rectangle bottom corner, i.e. element\n0.\n"},
  {"GetX", PyvtkRect_IiE_GetX, METH_VARARGS,
   "V.GetX() -> int\nC++: const int &GetX()\n\nGet the x component of the rectangle bottom corner, i.e. element\n0.\n"},
  {"SetY", PyvtkRect_IiE_SetY, METH_VARARGS,
   "V.SetY(int)\nC++: void SetY(const int &y)\n\nSet the y component of the rectangle bottom corner, i.e. element\n1.\n"},
  {"GetY", PyvtkRect_IiE_GetY, METH_VARARGS,
   "V.GetY() -> int\nC++: const int &GetY()\n\nGet the y component of the rectangle bottom corner, i.e. element\n1.\n"},
  {"SetWidth", PyvtkRect_IiE_SetWidth, METH_VARARGS,
   "V.SetWidth(int)\nC++: void SetWidth(const int &width)\n\nSet the width of the rectanle, i.e. element 2.\n"},
  {"GetWidth", PyvtkRect_IiE_GetWidth, METH_VARARGS,
   "V.GetWidth() -> int\nC++: const int &GetWidth()\n\nGet the width of the rectangle, i.e. element 2.\n"},
  {"SetHeight", PyvtkRect_IiE_SetHeight, METH_VARARGS,
   "V.SetHeight(int)\nC++: void SetHeight(const int &height)\n\nSet the height of the rectangle, i.e. element 3.\n"},
  {"GetHeight", PyvtkRect_IiE_GetHeight, METH_VARARGS,
   "V.GetHeight() -> int\nC++: const int &GetHeight()\n\nGet the height of the rectangle, i.e. element 3.\n"},
  {"GetLeft", PyvtkRect_IiE_GetLeft, METH_VARARGS,
   "V.GetLeft() -> int\nC++: const int &GetLeft()\n\nGet the left boundary of the rectangle along the X direction.\n"},
  {"GetRight", PyvtkRect_IiE_GetRight, METH_VARARGS,
   "V.GetRight() -> int\nC++: int GetRight()\n\nGet the right boundary of the rectangle along the X direction.\n"},
  {"GetTop", PyvtkRect_IiE_GetTop, METH_VARARGS,
   "V.GetTop() -> int\nC++: int GetTop()\n\nGet the top boundary of the rectangle along the Y direction.\n"},
  {"GetBottom", PyvtkRect_IiE_GetBottom, METH_VARARGS,
   "V.GetBottom() -> int\nC++: const int &GetBottom()\n\nGet the bottom boundary of the rectangle along the Y direction.\n"},
  {"GetBottomLeft", PyvtkRect_IiE_GetBottomLeft, METH_VARARGS,
   "V.GetBottomLeft() -> vtkVector2_IiE\nC++: vtkVector2<int> GetBottomLeft()\n\nGet the bottom left corner of the rect as a vtkVector.\n"},
  {"GetTopLeft", PyvtkRect_IiE_GetTopLeft, METH_VARARGS,
   "V.GetTopLeft() -> vtkVector_IiLi2EE\nC++: vtkVector<int, 2> GetTopLeft()\n\nGet the top left corner of the rect as a vtkVector.\n"},
  {"GetBottomRight", PyvtkRect_IiE_GetBottomRight, METH_VARARGS,
   "V.GetBottomRight() -> vtkVector_IiLi2EE\nC++: vtkVector<int, 2> GetBottomRight()\n\nGet the bottom right corner of the rect as a vtkVector.\n"},
  {"GetTopRight", PyvtkRect_IiE_GetTopRight, METH_VARARGS,
   "V.GetTopRight() -> vtkVector_IiLi2EE\nC++: vtkVector<int, 2> GetTopRight()\n\nGet the bottom left corner of the rect as a vtkVector.\n"},
  {"AddPoint", PyvtkRect_IiE_AddPoint, METH_VARARGS,
   "V.AddPoint((int, int))\nC++: void AddPoint(const int point[2])\nV.AddPoint(int, int)\nC++: void AddPoint(int x, int y)\n\nExpand this rect to contain the point passed in.\n"},
  {"AddRect", PyvtkRect_IiE_AddRect, METH_VARARGS,
   "V.AddRect(vtkRect_IiE)\nC++: void AddRect(const vtkRect<int> &rect)\n\nExpand this rect to contain the rect passed in.\n"},
  {"IntersectsWith", PyvtkRect_IiE_IntersectsWith, METH_VARARGS,
   "V.IntersectsWith(vtkRect_IiE) -> bool\nC++: bool IntersectsWith(const vtkRect<int> &rect)\n\nReturns true if the rect argument overlaps this rect. If the\nupper bound of one rect is equal to the lower bound of the other\nrect, then this will return false (in that case, the rects would\nbe considered to be adjacent but not overlapping).\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkRect_IiE_vtkRect_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkRect<int> *op = new vtkRect<int>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkRect_IiE", op);
  }

  return result;
}

static PyObject *
PyvtkRect_IiE_vtkRect_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkRect<int> *op = new vtkRect<int>(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkRect_IiE", op);
  }

  return result;
}

static PyObject *
PyvtkRect_IiE_vtkRect_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

  const size_t size0 = 4;
  int temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkRect<int> *op = new vtkRect<int>(temp0);

    result = PyVTKSpecialObject_New("vtkRect_IiE", op);
  }

  return result;
}

static PyObject *
PyvtkRect_IiE_vtkRect_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

  vtkRect<int> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRect_IiE"))
  {
    vtkRect<int> *op = new vtkRect<int>(*temp0);

    result = PyVTKSpecialObject_New("vtkRect_IiE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkRect_IiE_vtkRect_Methods[] = {
  {nullptr, PyvtkRect_IiE_vtkRect_s3, METH_VARARGS,
   "-@P *i"},
  {nullptr, PyvtkRect_IiE_vtkRect_s4, METH_VARARGS,
   "@W vtkRect_IiE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRect_IiE_vtkRect(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRect_IiE_vtkRect_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkRect_IiE_vtkRect_s1(self, args);
    case 4:
      return PyvtkRect_IiE_vtkRect_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkRect");
  return nullptr;
}


static PyObject *
PyvtkRect_IiE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkRect_IiE_vtkRect(nullptr, args);
}

static void PyvtkRect_IiE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkRect<int> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkRect_IiE_Hash(PyObject *self)
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

static PyTypeObject PyvtkRect_IiE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkRect_IiE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkRect_IiE_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkRect_IiE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkRect_IiE_Doc, // tp_doc
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
  PyvtkRect_IiE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkRect_IiE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkRect<int>(*static_cast<const vtkRect<int>*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRect_IiE_TypeNew(); }

#ifndef DECLARED_PyvtkVector_IiLi4EE_TypeNew
extern "C" { PyObject *PyvtkVector_IiLi4EE_TypeNew(); }
#define DECLARED_PyvtkVector_IiLi4EE_TypeNew
#endif
PyObject *PyvtkRect_IiE_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkRect_IiE_Type,
    PyvtkRect_IiE_Methods,
    PyvtkRect_IiE_vtkRect_Methods,
    &PyvtkRect_IiE_CCopy);

  PyTypeObject *pytype = &PyvtkRect_IiE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkVector_IiLi4EE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static const char *PyvtkRect_Doc =
  "vtkRect - templated base type for storage of 2D rectangles.\n\n"
  "Superclass: vtkVector[T,4]\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "rectangles. The memory layout is a contiguous array of the specified\n"
  "type, such that a float[4] can be cast to a vtkRectf and manipulated.\n"
  "Also a float[12] could be cast and used as a vtkRectf[3].\n\n"
  "\nProvided Types:\n\n"
  "  vtkRect[float64] => vtkRect<double>\n"

  "  vtkRect[float32] => vtkRect<float>\n"

  "  vtkRect[int32] => vtkRect<int>\n"
;

PyObject *PyvtkRect_TemplateNew()
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkCommonDataModelPython.vtkRect",
                                     PyvtkRect_Doc);

  o = PyvtkRect_IdE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkRect_IfE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkRect_IiE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  return temp;
}


static const char *PyvtkRecti_Doc =
  "vtkRecti - no description provided.\n\n"
  "Superclass: vtkRect[int32]\n\n"

  "vtkRecti()\n"
  "vtkRecti(int x, int y, int width, int height)\n"
  "explicit vtkRecti(const int *init)\n"
  "vtkRecti(const &vtkRecti)\n";

static PyMethodDef PyvtkRecti_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkRecti_vtkRecti_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRecti");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkRecti *op = new vtkRecti();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkRecti", op);
  }

  return result;
}

static PyObject *
PyvtkRecti_vtkRecti_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRecti");

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkRecti *op = new vtkRecti(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkRecti", op);
  }

  return result;
}

static PyObject *
PyvtkRecti_vtkRecti_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRecti");

  const size_t size0 = 4;
  int temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkRecti *op = new vtkRecti(temp0);

    result = PyVTKSpecialObject_New("vtkRecti", op);
  }

  return result;
}

static PyObject *
PyvtkRecti_vtkRecti_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRecti");

  vtkRecti *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRecti"))
  {
    vtkRecti *op = new vtkRecti(*temp0);

    result = PyVTKSpecialObject_New("vtkRecti", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkRecti_vtkRecti_Methods[] = {
  {nullptr, PyvtkRecti_vtkRecti_s3, METH_VARARGS,
   "-@P *i"},
  {nullptr, PyvtkRecti_vtkRecti_s4, METH_VARARGS,
   "@W vtkRecti"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRecti_vtkRecti(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRecti_vtkRecti_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkRecti_vtkRecti_s1(self, args);
    case 4:
      return PyvtkRecti_vtkRecti_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkRecti");
  return nullptr;
}


static PyObject *
PyvtkRecti_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkRecti_vtkRecti(nullptr, args);
}

static void PyvtkRecti_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkRecti *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkRecti_Hash(PyObject *self)
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

static PyTypeObject PyvtkRecti_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkRecti", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkRecti_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkRecti_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkRecti_Doc, // tp_doc
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
  PyvtkRecti_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkRecti_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkRecti(*static_cast<const vtkRecti*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRecti_TypeNew(); }

#ifndef DECLARED_PyvtkRect_IiE_TypeNew
extern "C" { PyObject *PyvtkRect_IiE_TypeNew(); }
#define DECLARED_PyvtkRect_IiE_TypeNew
#endif
PyObject *PyvtkRecti_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkRecti_Type,
    PyvtkRecti_Methods,
    PyvtkRecti_vtkRecti_Methods,
    &PyvtkRecti_CCopy);

  PyTypeObject *pytype = &PyvtkRecti_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkRect_IiE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkRectf_Doc =
  "vtkRectf - no description provided.\n\n"
  "Superclass: vtkRect[float32]\n\n"

  "vtkRectf()\n"
  "vtkRectf(float x, float y, float width, float height)\n"
  "explicit vtkRectf(const float *init)\n"
  "vtkRectf(const &vtkRectf)\n";

static PyMethodDef PyvtkRectf_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkRectf_vtkRectf_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRectf");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkRectf *op = new vtkRectf();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkRectf", op);
  }

  return result;
}

static PyObject *
PyvtkRectf_vtkRectf_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRectf");

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkRectf *op = new vtkRectf(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkRectf", op);
  }

  return result;
}

static PyObject *
PyvtkRectf_vtkRectf_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRectf");

  const size_t size0 = 4;
  float temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkRectf *op = new vtkRectf(temp0);

    result = PyVTKSpecialObject_New("vtkRectf", op);
  }

  return result;
}

static PyObject *
PyvtkRectf_vtkRectf_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRectf");

  vtkRectf *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectf"))
  {
    vtkRectf *op = new vtkRectf(*temp0);

    result = PyVTKSpecialObject_New("vtkRectf", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkRectf_vtkRectf_Methods[] = {
  {nullptr, PyvtkRectf_vtkRectf_s3, METH_VARARGS,
   "-@P *f"},
  {nullptr, PyvtkRectf_vtkRectf_s4, METH_VARARGS,
   "@W vtkRectf"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRectf_vtkRectf(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRectf_vtkRectf_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkRectf_vtkRectf_s1(self, args);
    case 4:
      return PyvtkRectf_vtkRectf_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkRectf");
  return nullptr;
}


static PyObject *
PyvtkRectf_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkRectf_vtkRectf(nullptr, args);
}

static void PyvtkRectf_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkRectf *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkRectf_Hash(PyObject *self)
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

static PyTypeObject PyvtkRectf_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkRectf", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkRectf_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkRectf_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkRectf_Doc, // tp_doc
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
  PyvtkRectf_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkRectf_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkRectf(*static_cast<const vtkRectf*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRectf_TypeNew(); }

#ifndef DECLARED_PyvtkRect_IfE_TypeNew
extern "C" { PyObject *PyvtkRect_IfE_TypeNew(); }
#define DECLARED_PyvtkRect_IfE_TypeNew
#endif
PyObject *PyvtkRectf_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkRectf_Type,
    PyvtkRectf_Methods,
    PyvtkRectf_vtkRectf_Methods,
    &PyvtkRectf_CCopy);

  PyTypeObject *pytype = &PyvtkRectf_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkRect_IfE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkRectd_Doc =
  "vtkRectd - no description provided.\n\n"
  "Superclass: vtkRect[float64]\n\n"

  "vtkRectd()\n"
  "vtkRectd(double x, double y, double width, double height)\n"
  "explicit vtkRectd(const double *init)\n"
  "vtkRectd(const &vtkRectd)\n";

static PyMethodDef PyvtkRectd_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkRectd_vtkRectd_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRectd");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkRectd *op = new vtkRectd();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkRectd", op);
  }

  return result;
}

static PyObject *
PyvtkRectd_vtkRectd_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRectd");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkRectd *op = new vtkRectd(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkRectd", op);
  }

  return result;
}

static PyObject *
PyvtkRectd_vtkRectd_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRectd");

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkRectd *op = new vtkRectd(temp0);

    result = PyVTKSpecialObject_New("vtkRectd", op);
  }

  return result;
}

static PyObject *
PyvtkRectd_vtkRectd_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRectd");

  vtkRectd *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectd"))
  {
    vtkRectd *op = new vtkRectd(*temp0);

    result = PyVTKSpecialObject_New("vtkRectd", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkRectd_vtkRectd_Methods[] = {
  {nullptr, PyvtkRectd_vtkRectd_s3, METH_VARARGS,
   "-@P *d"},
  {nullptr, PyvtkRectd_vtkRectd_s4, METH_VARARGS,
   "@W vtkRectd"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRectd_vtkRectd(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRectd_vtkRectd_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkRectd_vtkRectd_s1(self, args);
    case 4:
      return PyvtkRectd_vtkRectd_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkRectd");
  return nullptr;
}


static PyObject *
PyvtkRectd_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkRectd_vtkRectd(nullptr, args);
}

static void PyvtkRectd_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkRectd *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkRectd_Hash(PyObject *self)
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

static PyTypeObject PyvtkRectd_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkRectd", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkRectd_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkRectd_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkRectd_Doc, // tp_doc
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
  PyvtkRectd_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkRectd_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkRectd(*static_cast<const vtkRectd*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRectd_TypeNew(); }

#ifndef DECLARED_PyvtkRect_IdE_TypeNew
extern "C" { PyObject *PyvtkRect_IdE_TypeNew(); }
#define DECLARED_PyvtkRect_IdE_TypeNew
#endif
PyObject *PyvtkRectd_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkRectd_Type,
    PyvtkRectd_Methods,
    PyvtkRectd_vtkRectd_Methods,
    &PyvtkRectd_CCopy);

  PyTypeObject *pytype = &PyvtkRectd_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkRect_IdE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRect(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRect_TemplateNew();

  if (o)
  {
#if PY_VERSION_HEX >= 0x03040000
    const char *methodname = "values";
#else
    char methodname[] = "values";
#endif
    PyObject *l = PyObject_CallMethod(o, methodname, nullptr);
    Py_ssize_t n = PyList_GET_SIZE(l);
    for (Py_ssize_t i = 0; i < n; i++)
    {
      PyObject *ot = PyList_GET_ITEM(l, i);
      const char *nt = nullptr;
      if (PyType_Check(ot))
      {
        nt = ((PyTypeObject *)ot)->tp_name;
      }
      else if (PyCFunction_Check(ot))
      {
        nt = ((PyCFunctionObject *)ot)->m_ml->ml_name;
      }
      if (nt)
      {
        PyDict_SetItemString(dict, nt, ot);
      }
    }
    Py_DECREF(l);
  }

  if (o && PyDict_SetItemString(dict, "vtkRect", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkRecti_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkRecti", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkRectf_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkRectf", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkRectd_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkRectd", o) != 0)
  {
    Py_DECREF(o);
  }

}

