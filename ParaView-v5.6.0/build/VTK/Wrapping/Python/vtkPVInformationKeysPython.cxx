// python wrapper for vtkPVInformationKeys
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkPVInformationKeys.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVInformationKeys(PyObject *); }

static const char *PyvtkPVInformationKeys_Doc =
  "vtkPVInformationKeys - \n\n"

  "vtkPVInformationKeys()\n"
  "vtkPVInformationKeys(const &vtkPVInformationKeys)\n";


static PyObject *
PyvtkPVInformationKeys_TIME_LABEL_ANNOTATION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TIME_LABEL_ANNOTATION");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationStringKey *tempr = vtkPVInformationKeys::TIME_LABEL_ANNOTATION();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVInformationKeys_WHOLE_BOUNDING_BOX(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "WHOLE_BOUNDING_BOX");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleVectorKey *tempr = vtkPVInformationKeys::WHOLE_BOUNDING_BOX();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVInformationKeys_Methods[] = {
  {"TIME_LABEL_ANNOTATION", PyvtkPVInformationKeys_TIME_LABEL_ANNOTATION, METH_VARARGS,
   "V.TIME_LABEL_ANNOTATION() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *TIME_LABEL_ANNOTATION()\n\nKey to store the label that should be used for labeling the time\nin the UI\n"},
  {"WHOLE_BOUNDING_BOX", PyvtkPVInformationKeys_WHOLE_BOUNDING_BOX, METH_VARARGS,
   "V.WHOLE_BOUNDING_BOX() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *WHOLE_BOUNDING_BOX()\n\nKey to store the bounding box of the entire data set in pipeline\ninformation.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkPVInformationKeys_vtkPVInformationKeys_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPVInformationKeys");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkPVInformationKeys *op = new vtkPVInformationKeys();

    result = PyVTKSpecialObject_New("vtkPVInformationKeys", op);
  }

  return result;
}

static PyObject *
PyvtkPVInformationKeys_vtkPVInformationKeys_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPVInformationKeys");

  vtkPVInformationKeys *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPVInformationKeys"))
  {
    vtkPVInformationKeys *op = new vtkPVInformationKeys(*temp0);

    result = PyVTKSpecialObject_New("vtkPVInformationKeys", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkPVInformationKeys_vtkPVInformationKeys_Methods[] = {
  {nullptr, PyvtkPVInformationKeys_vtkPVInformationKeys_s2, METH_VARARGS,
   "@W vtkPVInformationKeys"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVInformationKeys_vtkPVInformationKeys(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkPVInformationKeys_vtkPVInformationKeys_s1(self, args);
    case 1:
      return PyvtkPVInformationKeys_vtkPVInformationKeys_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkPVInformationKeys");
  return nullptr;
}


static PyObject *
PyvtkPVInformationKeys_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkPVInformationKeys_vtkPVInformationKeys(nullptr, args);
}

static void PyvtkPVInformationKeys_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkPVInformationKeys *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkPVInformationKeys_Hash(PyObject *self)
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

static PyTypeObject PyvtkPVInformationKeys_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkPVInformationKeys", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkPVInformationKeys_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkPVInformationKeys_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkPVInformationKeys_Doc, // tp_doc
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
  PyvtkPVInformationKeys_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkPVInformationKeys_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkPVInformationKeys(*static_cast<const vtkPVInformationKeys*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVInformationKeys_TypeNew(); }

PyObject *PyvtkPVInformationKeys_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkPVInformationKeys_Type,
    PyvtkPVInformationKeys_Methods,
    PyvtkPVInformationKeys_vtkPVInformationKeys_Methods,
    &PyvtkPVInformationKeys_CCopy);

  PyTypeObject *pytype = &PyvtkPVInformationKeys_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVInformationKeys(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVInformationKeys_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkPVInformationKeys", o) != 0)
  {
    Py_DECREF(o);
  }

}

