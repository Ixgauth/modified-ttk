// python wrapper for vtkPixelTransfer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkPixelExtent.h"
#include "vtkPixelTransfer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPixelTransfer(PyObject *); }

static const char *PyvtkPixelTransfer_Doc =
  "vtkPixelTransfer - pixel extents\n\n"
  "Class to handle non-contiguous data transfers of data described by\n"
  "pixel extents within a process. For transferring data between\n"
  "processes see vtkPPixelTransfer.\n\n"
  "@sa\n"
  "vtkPixelExtent vtkPPixelTransfer\n\n"
  "vtkPixelTransfer()\n"
  "vtkPixelTransfer(const &vtkPixelTransfer)\n";


static PyObject *
PyvtkPixelTransfer_Blit_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Blit");

  vtkPixelExtent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  int temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = VTK_PYBUFFER_INITIALIZER;
  int temp4;
  void  *temp5 = nullptr;
  Py_buffer pbuf5 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPixelExtent") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3) &&
      ap.GetValue(temp4) &&
      ap.GetBuffer(temp5, &pbuf5))
  {
    int tempr = vtkPixelTransfer::Blit(*temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);
#if PY_VERSION_HEX >= 0x02060000
  if (pbuf3.obj != 0)
  {
    PyBuffer_Release(&pbuf3);
  }
#endif
#if PY_VERSION_HEX >= 0x02060000
  if (pbuf5.obj != 0)
  {
    PyBuffer_Release(&pbuf5);
  }
#endif

  return result;
}

static PyObject *
PyvtkPixelTransfer_Blit_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Blit");

  vtkPixelExtent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkPixelExtent *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkPixelExtent *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  vtkPixelExtent *temp3 = nullptr;
  PyObject *pobj3 = nullptr;
  int temp4;
  int temp5;
  void  *temp6 = nullptr;
  Py_buffer pbuf6 = VTK_PYBUFFER_INITIALIZER;
  int temp7;
  int temp8;
  void  *temp9 = nullptr;
  Py_buffer pbuf9 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(10) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPixelExtent") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkPixelExtent") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkPixelExtent") &&
      ap.GetSpecialObject(temp3, pobj3, "vtkPixelExtent") &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetBuffer(temp6, &pbuf6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetBuffer(temp9, &pbuf9))
  {
    int tempr = vtkPixelTransfer::Blit(*temp0, *temp1, *temp2, *temp3, temp4, temp5, temp6, temp7, temp8, temp9);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);
  Py_XDECREF(pobj3);
#if PY_VERSION_HEX >= 0x02060000
  if (pbuf6.obj != 0)
  {
    PyBuffer_Release(&pbuf6);
  }
#endif
#if PY_VERSION_HEX >= 0x02060000
  if (pbuf9.obj != 0)
  {
    PyBuffer_Release(&pbuf9);
  }
#endif

  return result;
}

static PyObject *
PyvtkPixelTransfer_Blit(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 6:
      return PyvtkPixelTransfer_Blit_s1(self, args);
    case 10:
      return PyvtkPixelTransfer_Blit_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Blit");
  return nullptr;
}


static PyMethodDef PyvtkPixelTransfer_Methods[] = {
  {"Blit", PyvtkPixelTransfer_Blit, METH_VARARGS,
   "V.Blit(vtkPixelExtent, int, int, void, int, void) -> int\nC++: static int Blit(const vtkPixelExtent &ext, int nComps,\n    int srcType, void *srcData, int destType, void *destData)\nV.Blit(vtkPixelExtent, vtkPixelExtent, vtkPixelExtent,\n    vtkPixelExtent, int, int, void, int, int, void) -> int\nC++: static int Blit(const vtkPixelExtent &srcWhole,\n    const vtkPixelExtent &srcSubset,\n    const vtkPixelExtent &destWhole,\n    const vtkPixelExtent &destSubset, int nSrcComps, int srcType,\n    void *srcData, int nDestComps, int destType, void *destData)\n\nfor memory to memory transfers. Convenience api for working with\nvtk type enum rather than c-data types and simple extents.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkPixelTransfer_vtkPixelTransfer_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPixelTransfer");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkPixelTransfer *op = new vtkPixelTransfer();

    result = PyVTKSpecialObject_New("vtkPixelTransfer", op);
  }

  return result;
}

static PyObject *
PyvtkPixelTransfer_vtkPixelTransfer_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPixelTransfer");

  vtkPixelTransfer *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPixelTransfer"))
  {
    vtkPixelTransfer *op = new vtkPixelTransfer(*temp0);

    result = PyVTKSpecialObject_New("vtkPixelTransfer", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkPixelTransfer_vtkPixelTransfer_Methods[] = {
  {nullptr, PyvtkPixelTransfer_vtkPixelTransfer_s2, METH_VARARGS,
   "@W vtkPixelTransfer"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPixelTransfer_vtkPixelTransfer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkPixelTransfer_vtkPixelTransfer_s1(self, args);
    case 1:
      return PyvtkPixelTransfer_vtkPixelTransfer_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkPixelTransfer");
  return nullptr;
}


static PyObject *
PyvtkPixelTransfer_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkPixelTransfer_vtkPixelTransfer(nullptr, args);
}

static void PyvtkPixelTransfer_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkPixelTransfer *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkPixelTransfer_Hash(PyObject *self)
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

static PyTypeObject PyvtkPixelTransfer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkPixelTransfer", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkPixelTransfer_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkPixelTransfer_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkPixelTransfer_Doc, // tp_doc
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
  PyvtkPixelTransfer_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkPixelTransfer_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkPixelTransfer(*static_cast<const vtkPixelTransfer*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPixelTransfer_TypeNew(); }

PyObject *PyvtkPixelTransfer_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkPixelTransfer_Type,
    PyvtkPixelTransfer_Methods,
    PyvtkPixelTransfer_vtkPixelTransfer_Methods,
    &PyvtkPixelTransfer_CCopy);

  PyTypeObject *pytype = &PyvtkPixelTransfer_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPixelTransfer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPixelTransfer_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkPixelTransfer", o) != 0)
  {
    Py_DECREF(o);
  }

}

