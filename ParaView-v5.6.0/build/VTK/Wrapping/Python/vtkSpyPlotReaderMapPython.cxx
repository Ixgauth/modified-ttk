// python wrapper for vtkSpyPlotReaderMap
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkMultiProcessStream.h"
#include "vtkSpyPlotReaderMap.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSpyPlotReaderMap(PyObject *); }

static const char *PyvtkSpyPlotReaderMap_Doc =
  "vtkSpyPlotReaderMap - Maps strings to vtkSpyPlotUniReaders\n\n"
  "Extracted from vtkSpyPlotReader\n"
  "----------------------------------------------------------------------\n"
  "    -------\n"
  "    ==================================================================\n"
  "    ===========\n\n"
  "vtkSpyPlotReaderMap()\n"
  "vtkSpyPlotReaderMap(const &vtkSpyPlotReaderMap)\n";


static PyObject *
PyvtkSpyPlotReaderMap_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotReaderMap *op = static_cast<vtkSpyPlotReaderMap *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = op->Initialize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReaderMap_Clean(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clean");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotReaderMap *op = static_cast<vtkSpyPlotReaderMap *>(vp);

  vtkSpyPlotUniReader *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpyPlotUniReader"))
  {
    op->Clean(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReaderMap_TellReadersToCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TellReadersToCheck");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotReaderMap *op = static_cast<vtkSpyPlotReaderMap *>(vp);

  vtkSpyPlotReader *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpyPlotReader"))
  {
    op->TellReadersToCheck(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReaderMap_Save(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Save");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotReaderMap *op = static_cast<vtkSpyPlotReaderMap *>(vp);

  vtkMultiProcessStream *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, "vtkMultiProcessStream"))
  {
    bool tempr = op->Save(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReaderMap_Load(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Load");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotReaderMap *op = static_cast<vtkSpyPlotReaderMap *>(vp);

  vtkMultiProcessStream *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, "vtkMultiProcessStream"))
  {
    bool tempr = op->Load(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSpyPlotReaderMap_Methods[] = {
  {"Initialize", PyvtkSpyPlotReaderMap_Initialize, METH_VARARGS,
   "V.Initialize(string) -> bool\nC++: bool Initialize(const char *filename)\n\n"},
  {"Clean", PyvtkSpyPlotReaderMap_Clean, METH_VARARGS,
   "V.Clean(vtkSpyPlotUniReader)\nC++: void Clean(vtkSpyPlotUniReader *save)\n\n"},
  {"TellReadersToCheck", PyvtkSpyPlotReaderMap_TellReadersToCheck, METH_VARARGS,
   "V.TellReadersToCheck(vtkSpyPlotReader)\nC++: void TellReadersToCheck(vtkSpyPlotReader *parent)\n\n"},
  {"Save", PyvtkSpyPlotReaderMap_Save, METH_VARARGS,
   "V.Save(vtkMultiProcessStream) -> bool\nC++: bool Save(vtkMultiProcessStream &stream)\n\n"},
  {"Load", PyvtkSpyPlotReaderMap_Load, METH_VARARGS,
   "V.Load(vtkMultiProcessStream) -> bool\nC++: bool Load(vtkMultiProcessStream &stream)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkSpyPlotReaderMap_vtkSpyPlotReaderMap_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSpyPlotReaderMap");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkSpyPlotReaderMap *op = new vtkSpyPlotReaderMap();

    result = PyVTKSpecialObject_New("vtkSpyPlotReaderMap", op);
  }

  return result;
}

static PyObject *
PyvtkSpyPlotReaderMap_vtkSpyPlotReaderMap_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSpyPlotReaderMap");

  vtkSpyPlotReaderMap *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkSpyPlotReaderMap"))
  {
    vtkSpyPlotReaderMap *op = new vtkSpyPlotReaderMap(*temp0);

    result = PyVTKSpecialObject_New("vtkSpyPlotReaderMap", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSpyPlotReaderMap_vtkSpyPlotReaderMap_Methods[] = {
  {nullptr, PyvtkSpyPlotReaderMap_vtkSpyPlotReaderMap_s2, METH_VARARGS,
   "@W vtkSpyPlotReaderMap"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSpyPlotReaderMap_vtkSpyPlotReaderMap(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkSpyPlotReaderMap_vtkSpyPlotReaderMap_s1(self, args);
    case 1:
      return PyvtkSpyPlotReaderMap_vtkSpyPlotReaderMap_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkSpyPlotReaderMap");
  return nullptr;
}


static PyObject *
PyvtkSpyPlotReaderMap_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkSpyPlotReaderMap_vtkSpyPlotReaderMap(nullptr, args);
}

static void PyvtkSpyPlotReaderMap_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkSpyPlotReaderMap *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkSpyPlotReaderMap_Hash(PyObject *self)
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

static PyTypeObject PyvtkSpyPlotReaderMap_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkSpyPlotReaderMap", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkSpyPlotReaderMap_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkSpyPlotReaderMap_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkSpyPlotReaderMap_Doc, // tp_doc
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
  PyvtkSpyPlotReaderMap_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkSpyPlotReaderMap_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkSpyPlotReaderMap(*static_cast<const vtkSpyPlotReaderMap*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSpyPlotReaderMap_TypeNew(); }

PyObject *PyvtkSpyPlotReaderMap_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkSpyPlotReaderMap_Type,
    PyvtkSpyPlotReaderMap_Methods,
    PyvtkSpyPlotReaderMap_vtkSpyPlotReaderMap_Methods,
    &PyvtkSpyPlotReaderMap_CCopy);

  PyTypeObject *pytype = &PyvtkSpyPlotReaderMap_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSpyPlotReaderMap(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSpyPlotReaderMap_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkSpyPlotReaderMap", o) != 0)
  {
    Py_DECREF(o);
  }

}

