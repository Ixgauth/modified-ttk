// python wrapper for vtkMaterialInterfaceIdList
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkMaterialInterfaceIdList.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMaterialInterfaceIdList(PyObject *); }

static const char *PyvtkMaterialInterfaceIdList_Doc =
  "vtkMaterialInterfaceIdList - Class that facilitates efficient\noperation on lists fragment ids.\n\n"
  "This class is introduced to deal with the fact that local to global\n"
  "id search is a constant time operation, while its inverse glooabl to\n"
  "local id search is not.\n\n"
  "vtkMaterialInterfaceIdList()\n"
  "vtkMaterialInterfaceIdList(const &vtkMaterialInterfaceIdList)\n";


static PyObject *
PyvtkMaterialInterfaceIdList_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceIdList *op = static_cast<vtkMaterialInterfaceIdList *>(vp);

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
PyvtkMaterialInterfaceIdList_GetLocalId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalId");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceIdList *op = static_cast<vtkMaterialInterfaceIdList *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = op->GetLocalId(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMaterialInterfaceIdList_Methods[] = {
  {"Clear", PyvtkMaterialInterfaceIdList_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nReturn the container to an empty state.\n"},
  {"GetLocalId", PyvtkMaterialInterfaceIdList_GetLocalId, METH_VARARGS,
   "V.GetLocalId(int) -> int\nC++: int GetLocalId(int globalId)\n\nGiven a global id, get the local id, or -1 if the global id is\nnot in the list.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkMaterialInterfaceIdList_vtkMaterialInterfaceIdList_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMaterialInterfaceIdList");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMaterialInterfaceIdList *op = new vtkMaterialInterfaceIdList();

    result = PyVTKSpecialObject_New("vtkMaterialInterfaceIdList", op);
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceIdList_vtkMaterialInterfaceIdList_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMaterialInterfaceIdList");

  vtkMaterialInterfaceIdList *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkMaterialInterfaceIdList"))
  {
    vtkMaterialInterfaceIdList *op = new vtkMaterialInterfaceIdList(*temp0);

    result = PyVTKSpecialObject_New("vtkMaterialInterfaceIdList", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMaterialInterfaceIdList_vtkMaterialInterfaceIdList_Methods[] = {
  {nullptr, PyvtkMaterialInterfaceIdList_vtkMaterialInterfaceIdList_s2, METH_VARARGS,
   "@W vtkMaterialInterfaceIdList"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMaterialInterfaceIdList_vtkMaterialInterfaceIdList(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMaterialInterfaceIdList_vtkMaterialInterfaceIdList_s1(self, args);
    case 1:
      return PyvtkMaterialInterfaceIdList_vtkMaterialInterfaceIdList_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkMaterialInterfaceIdList");
  return nullptr;
}


static PyObject *
PyvtkMaterialInterfaceIdList_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkMaterialInterfaceIdList_vtkMaterialInterfaceIdList(nullptr, args);
}

static void PyvtkMaterialInterfaceIdList_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkMaterialInterfaceIdList *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkMaterialInterfaceIdList_Hash(PyObject *self)
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

static PyTypeObject PyvtkMaterialInterfaceIdList_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkMaterialInterfaceIdList", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkMaterialInterfaceIdList_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkMaterialInterfaceIdList_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkMaterialInterfaceIdList_Doc, // tp_doc
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
  PyvtkMaterialInterfaceIdList_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkMaterialInterfaceIdList_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkMaterialInterfaceIdList(*static_cast<const vtkMaterialInterfaceIdList*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMaterialInterfaceIdList_TypeNew(); }

PyObject *PyvtkMaterialInterfaceIdList_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkMaterialInterfaceIdList_Type,
    PyvtkMaterialInterfaceIdList_Methods,
    PyvtkMaterialInterfaceIdList_vtkMaterialInterfaceIdList_Methods,
    &PyvtkMaterialInterfaceIdList_CCopy);

  PyTypeObject *pytype = &PyvtkMaterialInterfaceIdList_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMaterialInterfaceIdList(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMaterialInterfaceIdList_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkMaterialInterfaceIdList", o) != 0)
  {
    Py_DECREF(o);
  }

}

