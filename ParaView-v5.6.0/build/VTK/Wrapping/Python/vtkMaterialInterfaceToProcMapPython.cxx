// python wrapper for vtkMaterialInterfaceToProcMap
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkMaterialInterfaceToProcMap.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMaterialInterfaceToProcMap(PyObject *); }

static const char *PyvtkMaterialInterfaceToProcMap_Doc =
  "vtkMaterialInterfaceToProcMap - no description provided.\n\n"

  "vtkMaterialInterfaceToProcMap()\n"
  "vtkMaterialInterfaceToProcMap(int nFragments)\n"
  "vtkMaterialInterfaceToProcMap(int nProcs, int nFragments)\n"
  "vtkMaterialInterfaceToProcMap(\n    const vtkMaterialInterfaceToProcMap &other)\n";


static PyObject *
PyvtkMaterialInterfaceToProcMap_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceToProcMap *op = static_cast<vtkMaterialInterfaceToProcMap *>(vp);

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
PyvtkMaterialInterfaceToProcMap_Initialize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceToProcMap *op = static_cast<vtkMaterialInterfaceToProcMap *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->Initialize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceToProcMap_Initialize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceToProcMap *op = static_cast<vtkMaterialInterfaceToProcMap *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->Initialize(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceToProcMap_Initialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkMaterialInterfaceToProcMap_Initialize_s1(self, args);
    case 2:
      return PyvtkMaterialInterfaceToProcMap_Initialize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Initialize");
  return nullptr;
}



static PyObject *
PyvtkMaterialInterfaceToProcMap_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceToProcMap *op = static_cast<vtkMaterialInterfaceToProcMap *>(vp);

  vtkMaterialInterfaceToProcMap *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkMaterialInterfaceToProcMap"))
  {
    op->DeepCopy(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkMaterialInterfaceToProcMap_GetProcOwnsPiece_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcOwnsPiece");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceToProcMap *op = static_cast<vtkMaterialInterfaceToProcMap *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = op->GetProcOwnsPiece(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceToProcMap_GetProcOwnsPiece_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcOwnsPiece");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceToProcMap *op = static_cast<vtkMaterialInterfaceToProcMap *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = op->GetProcOwnsPiece(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceToProcMap_GetProcOwnsPiece(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkMaterialInterfaceToProcMap_GetProcOwnsPiece_s1(self, args);
    case 2:
      return PyvtkMaterialInterfaceToProcMap_GetProcOwnsPiece_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetProcOwnsPiece");
  return nullptr;
}



static PyObject *
PyvtkMaterialInterfaceToProcMap_SetProcOwnsPiece_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcOwnsPiece");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceToProcMap *op = static_cast<vtkMaterialInterfaceToProcMap *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetProcOwnsPiece(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceToProcMap_SetProcOwnsPiece_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcOwnsPiece");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceToProcMap *op = static_cast<vtkMaterialInterfaceToProcMap *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetProcOwnsPiece(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceToProcMap_SetProcOwnsPiece(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkMaterialInterfaceToProcMap_SetProcOwnsPiece_s1(self, args);
    case 1:
      return PyvtkMaterialInterfaceToProcMap_SetProcOwnsPiece_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetProcOwnsPiece");
  return nullptr;
}



static PyObject *
PyvtkMaterialInterfaceToProcMap_GetProcCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcCount");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceToProcMap *op = static_cast<vtkMaterialInterfaceToProcMap *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = op->GetProcCount(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMaterialInterfaceToProcMap_Methods[] = {
  {"Clear", PyvtkMaterialInterfaceToProcMap_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\n"},
  {"Initialize", PyvtkMaterialInterfaceToProcMap_Initialize, METH_VARARGS,
   "V.Initialize(int)\nC++: void Initialize(int nFragments)\nV.Initialize(int, int)\nC++: void Initialize(int nProcs, int nFragments)\n\n"},
  {"DeepCopy", PyvtkMaterialInterfaceToProcMap_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkMaterialInterfaceToProcMap)\nC++: void DeepCopy(const vtkMaterialInterfaceToProcMap &from)\n\n"},
  {"GetProcOwnsPiece", PyvtkMaterialInterfaceToProcMap_GetProcOwnsPiece, METH_VARARGS,
   "V.GetProcOwnsPiece(int) -> int\nC++: int GetProcOwnsPiece(int fragmentId)\nV.GetProcOwnsPiece(int, int) -> int\nC++: int GetProcOwnsPiece(int procId, int fragmentId)\n\n"},
  {"SetProcOwnsPiece", PyvtkMaterialInterfaceToProcMap_SetProcOwnsPiece, METH_VARARGS,
   "V.SetProcOwnsPiece(int, int)\nC++: void SetProcOwnsPiece(int procId, int fragmentId)\nV.SetProcOwnsPiece(int)\nC++: void SetProcOwnsPiece(int fragmentId)\n\n"},
  {"GetProcCount", PyvtkMaterialInterfaceToProcMap_GetProcCount, METH_VARARGS,
   "V.GetProcCount(int) -> int\nC++: int GetProcCount(int fragmentId)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkMaterialInterfaceToProcMap_vtkMaterialInterfaceToProcMap_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMaterialInterfaceToProcMap");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMaterialInterfaceToProcMap *op = new vtkMaterialInterfaceToProcMap();

    result = PyVTKSpecialObject_New("vtkMaterialInterfaceToProcMap", op);
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceToProcMap_vtkMaterialInterfaceToProcMap_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMaterialInterfaceToProcMap");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMaterialInterfaceToProcMap *op = new vtkMaterialInterfaceToProcMap(temp0);

    result = PyVTKSpecialObject_New("vtkMaterialInterfaceToProcMap", op);
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceToProcMap_vtkMaterialInterfaceToProcMap_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMaterialInterfaceToProcMap");

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkMaterialInterfaceToProcMap *op = new vtkMaterialInterfaceToProcMap(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkMaterialInterfaceToProcMap", op);
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceToProcMap_vtkMaterialInterfaceToProcMap_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMaterialInterfaceToProcMap");

  vtkMaterialInterfaceToProcMap *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkMaterialInterfaceToProcMap"))
  {
    vtkMaterialInterfaceToProcMap *op = new vtkMaterialInterfaceToProcMap(*temp0);

    result = PyVTKSpecialObject_New("vtkMaterialInterfaceToProcMap", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMaterialInterfaceToProcMap_vtkMaterialInterfaceToProcMap_Methods[] = {
  {nullptr, PyvtkMaterialInterfaceToProcMap_vtkMaterialInterfaceToProcMap_s2, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkMaterialInterfaceToProcMap_vtkMaterialInterfaceToProcMap_s4, METH_VARARGS,
   "@W vtkMaterialInterfaceToProcMap"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMaterialInterfaceToProcMap_vtkMaterialInterfaceToProcMap(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaterialInterfaceToProcMap_vtkMaterialInterfaceToProcMap_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMaterialInterfaceToProcMap_vtkMaterialInterfaceToProcMap_s1(self, args);
    case 2:
      return PyvtkMaterialInterfaceToProcMap_vtkMaterialInterfaceToProcMap_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkMaterialInterfaceToProcMap");
  return nullptr;
}


static PyObject *
PyvtkMaterialInterfaceToProcMap_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkMaterialInterfaceToProcMap_vtkMaterialInterfaceToProcMap(nullptr, args);
}

static void PyvtkMaterialInterfaceToProcMap_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkMaterialInterfaceToProcMap *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkMaterialInterfaceToProcMap_Hash(PyObject *self)
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

static PyTypeObject PyvtkMaterialInterfaceToProcMap_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkMaterialInterfaceToProcMap", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkMaterialInterfaceToProcMap_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkMaterialInterfaceToProcMap_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkMaterialInterfaceToProcMap_Doc, // tp_doc
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
  PyvtkMaterialInterfaceToProcMap_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkMaterialInterfaceToProcMap_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkMaterialInterfaceToProcMap(*static_cast<const vtkMaterialInterfaceToProcMap*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMaterialInterfaceToProcMap_TypeNew(); }

PyObject *PyvtkMaterialInterfaceToProcMap_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkMaterialInterfaceToProcMap_Type,
    PyvtkMaterialInterfaceToProcMap_Methods,
    PyvtkMaterialInterfaceToProcMap_vtkMaterialInterfaceToProcMap_Methods,
    &PyvtkMaterialInterfaceToProcMap_CCopy);

  PyTypeObject *pytype = &PyvtkMaterialInterfaceToProcMap_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMaterialInterfaceToProcMap(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMaterialInterfaceToProcMap_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkMaterialInterfaceToProcMap", o) != 0)
  {
    Py_DECREF(o);
  }

}

