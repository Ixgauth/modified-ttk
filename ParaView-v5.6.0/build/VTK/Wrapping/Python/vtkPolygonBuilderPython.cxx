// python wrapper for vtkPolygonBuilder
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkPolygonBuilder.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolygonBuilder(PyObject *); }

static const char *PyvtkPolygonBuilder_Doc =
  "vtkPolygonBuilder -  The polygon output is the boundary of the union\nof the triangles.\n\n"
  "It is assumed that the input triangles form a simple polygon. It is\n"
  " currently used to compute polygons for slicing.\n\n"
  "vtkPolygonBuilder()\n"
  "vtkPolygonBuilder(const &vtkPolygonBuilder)\n";


static PyObject *
PyvtkPolygonBuilder_InsertTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTriangle");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPolygonBuilder *op = static_cast<vtkPolygonBuilder *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<vtkIdType> store0(2*size0);
  vtkIdType *temp0 = store0.Data();
  vtkIdType *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->InsertTriangle(temp0);

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
PyvtkPolygonBuilder_GetPolygons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygons");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPolygonBuilder *op = static_cast<vtkPolygonBuilder *>(vp);

  vtkIdListCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdListCollection"))
  {
    op->GetPolygons(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonBuilder_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPolygonBuilder *op = static_cast<vtkPolygonBuilder *>(vp);

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

static PyMethodDef PyvtkPolygonBuilder_Methods[] = {
  {"InsertTriangle", PyvtkPolygonBuilder_InsertTriangle, METH_VARARGS,
   "V.InsertTriangle([int, ...])\nC++: void InsertTriangle(vtkIdType *abc)\n\nInsert a triangle as a triplet of point IDs.\n"},
  {"GetPolygons", PyvtkPolygonBuilder_GetPolygons, METH_VARARGS,
   "V.GetPolygons(vtkIdListCollection)\nC++: void GetPolygons(vtkIdListCollection *polys)\n\nPopulate polys with lists of polygons, defined as sequential\nexternal vertices. It is the responsibility of the user to delete\nthese generated lists in order to avoid memory leaks.\n"},
  {"Reset", PyvtkPolygonBuilder_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nPrepare the builder for a new set of inputs.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkPolygonBuilder_vtkPolygonBuilder_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPolygonBuilder");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkPolygonBuilder *op = new vtkPolygonBuilder();

    result = PyVTKSpecialObject_New("vtkPolygonBuilder", op);
  }

  return result;
}

static PyObject *
PyvtkPolygonBuilder_vtkPolygonBuilder_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPolygonBuilder");

  vtkPolygonBuilder *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPolygonBuilder"))
  {
    vtkPolygonBuilder *op = new vtkPolygonBuilder(*temp0);

    result = PyVTKSpecialObject_New("vtkPolygonBuilder", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkPolygonBuilder_vtkPolygonBuilder_Methods[] = {
  {nullptr, PyvtkPolygonBuilder_vtkPolygonBuilder_s2, METH_VARARGS,
   "@W vtkPolygonBuilder"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPolygonBuilder_vtkPolygonBuilder(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkPolygonBuilder_vtkPolygonBuilder_s1(self, args);
    case 1:
      return PyvtkPolygonBuilder_vtkPolygonBuilder_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkPolygonBuilder");
  return nullptr;
}


static PyObject *
PyvtkPolygonBuilder_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkPolygonBuilder_vtkPolygonBuilder(nullptr, args);
}

static void PyvtkPolygonBuilder_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkPolygonBuilder *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkPolygonBuilder_Hash(PyObject *self)
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

static PyTypeObject PyvtkPolygonBuilder_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMiscPython.vtkPolygonBuilder", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkPolygonBuilder_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkPolygonBuilder_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkPolygonBuilder_Doc, // tp_doc
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
  PyvtkPolygonBuilder_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkPolygonBuilder_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkPolygonBuilder(*static_cast<const vtkPolygonBuilder*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPolygonBuilder_TypeNew(); }

PyObject *PyvtkPolygonBuilder_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkPolygonBuilder_Type,
    PyvtkPolygonBuilder_Methods,
    PyvtkPolygonBuilder_vtkPolygonBuilder_Methods,
    &PyvtkPolygonBuilder_CCopy);

  PyTypeObject *pytype = &PyvtkPolygonBuilder_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolygonBuilder(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolygonBuilder_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkPolygonBuilder", o) != 0)
  {
    Py_DECREF(o);
  }

}

