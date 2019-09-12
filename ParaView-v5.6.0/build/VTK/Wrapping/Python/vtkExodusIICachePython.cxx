// python wrapper for vtkExodusIICache
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkExodusIICache.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExodusIICache(PyObject *); }

static const char *PyvtkExodusIICacheKey_Doc =
  "vtkExodusIICacheKey - no description provided.\n\n"

  "vtkExodusIICacheKey()\n"
  "vtkExodusIICacheKey(int time, int objType, int objId, int arrId)\n"
  "vtkExodusIICacheKey(const vtkExodusIICacheKey &src)\n";


static PyObject *
PyvtkExodusIICacheKey_match(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "match");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkExodusIICacheKey *op = static_cast<vtkExodusIICacheKey *>(vp);

  vtkExodusIICacheKey *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkExodusIICacheKey *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkExodusIICacheKey") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkExodusIICacheKey"))
  {
    bool tempr = op->match(*temp0, *temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkExodusIICacheKey_Methods[] = {
  {"match", PyvtkExodusIICacheKey_match, METH_VARARGS,
   "V.match(vtkExodusIICacheKey, vtkExodusIICacheKey) -> bool\nC++: bool match(const vtkExodusIICacheKey &other,\n    const vtkExodusIICacheKey &pattern)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkExodusIICacheKey_vtkExodusIICacheKey_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkExodusIICacheKey");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkExodusIICacheKey *op = new vtkExodusIICacheKey();

    result = PyVTKSpecialObject_New("vtkExodusIICacheKey", op);
  }

  return result;
}

static PyObject *
PyvtkExodusIICacheKey_vtkExodusIICacheKey_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkExodusIICacheKey");

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
    vtkExodusIICacheKey *op = new vtkExodusIICacheKey(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkExodusIICacheKey", op);
  }

  return result;
}

static PyObject *
PyvtkExodusIICacheKey_vtkExodusIICacheKey_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkExodusIICacheKey");

  vtkExodusIICacheKey *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkExodusIICacheKey"))
  {
    vtkExodusIICacheKey *op = new vtkExodusIICacheKey(*temp0);

    result = PyVTKSpecialObject_New("vtkExodusIICacheKey", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkExodusIICacheKey_vtkExodusIICacheKey_Methods[] = {
  {nullptr, PyvtkExodusIICacheKey_vtkExodusIICacheKey_s3, METH_VARARGS,
   "@W vtkExodusIICacheKey"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExodusIICacheKey_vtkExodusIICacheKey(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkExodusIICacheKey_vtkExodusIICacheKey_s1(self, args);
    case 4:
      return PyvtkExodusIICacheKey_vtkExodusIICacheKey_s2(self, args);
    case 1:
      return PyvtkExodusIICacheKey_vtkExodusIICacheKey_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkExodusIICacheKey");
  return nullptr;
}


static PyObject *
PyvtkExodusIICacheKey_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkExodusIICacheKey_vtkExodusIICacheKey(nullptr, args);
}

static void PyvtkExodusIICacheKey_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkExodusIICacheKey *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static int PyvtkExodusIICacheKey_CheckExact(PyObject *ob);

static PyObject *PyvtkExodusIICacheKey_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkExodusIICacheKey *so1 = nullptr;
  const vtkExodusIICacheKey *so2 = nullptr;
  int result = -1;

  if (PyvtkExodusIICacheKey_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkExodusIICacheKey *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkExodusIICacheKey *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkExodusIICacheKey", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkExodusIICacheKey_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkExodusIICacheKey *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkExodusIICacheKey *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkExodusIICacheKey", &n2));
    if (so2 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  switch (opid)
  {
    case Py_LT:
      result = ((*so1) < (*so2));
      break;
    case Py_LE:
      break;
    case Py_EQ:
      break;
    case Py_NE:
      break;
    case Py_GT:
      break;
    case Py_GE:
      break;
  }

  if (n1)
  {
    Py_DECREF(n1);
  }
  else if (n2)
  {
    Py_DECREF(n2);
  }

  if (result == -1)
  {
    PyErr_SetString(PyExc_TypeError, "operation not available");
    return nullptr;
  }

  // avoids aliasing issues with Py_INCREF(Py_False)
  return PyBool_FromLong((long)result);
}

static Py_hash_t PyvtkExodusIICacheKey_Hash(PyObject *self)
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

static PyTypeObject PyvtkExodusIICacheKey_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOExodusPython.vtkExodusIICacheKey", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkExodusIICacheKey_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkExodusIICacheKey_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkExodusIICacheKey_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkExodusIICacheKey_RichCompare, // tp_richcompare
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
  PyvtkExodusIICacheKey_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkExodusIICacheKey_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkExodusIICacheKey_Type);
}

static void *PyvtkExodusIICacheKey_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkExodusIICacheKey(*static_cast<const vtkExodusIICacheKey*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExodusIICacheKey_TypeNew(); }

PyObject *PyvtkExodusIICacheKey_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkExodusIICacheKey_Type,
    PyvtkExodusIICacheKey_Methods,
    PyvtkExodusIICacheKey_vtkExodusIICacheKey_Methods,
    &PyvtkExodusIICacheKey_CCopy);

  PyTypeObject *pytype = &PyvtkExodusIICacheKey_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkExodusIICacheEntry_Doc =
  "vtkExodusIICacheEntry - no description provided.\n\n"

  "vtkExodusIICacheEntry()\n"
  "vtkExodusIICacheEntry(vtkDataArray *arr)\n"
  "vtkExodusIICacheEntry(const vtkExodusIICacheEntry &other)\n";


static PyObject *
PyvtkExodusIICacheEntry_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkExodusIICacheEntry *op = static_cast<vtkExodusIICacheEntry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = op->GetValue();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExodusIICacheEntry_Methods[] = {
  {"GetValue", PyvtkExodusIICacheEntry_GetValue, METH_VARARGS,
   "V.GetValue() -> vtkDataArray\nC++: vtkDataArray *GetValue()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkExodusIICacheEntry");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkExodusIICacheEntry *op = new vtkExodusIICacheEntry();

    result = PyVTKSpecialObject_New("vtkExodusIICacheEntry", op);
  }

  return result;
}

static PyObject *
PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkExodusIICacheEntry");

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    vtkExodusIICacheEntry *op = new vtkExodusIICacheEntry(temp0);

    result = PyVTKSpecialObject_New("vtkExodusIICacheEntry", op);
  }

  return result;
}

static PyObject *
PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkExodusIICacheEntry");

  vtkExodusIICacheEntry *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkExodusIICacheEntry"))
  {
    vtkExodusIICacheEntry *op = new vtkExodusIICacheEntry(*temp0);

    result = PyVTKSpecialObject_New("vtkExodusIICacheEntry", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_Methods[] = {
  {nullptr, PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_s2, METH_VARARGS,
   "@V *vtkDataArray"},
  {nullptr, PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_s3, METH_VARARGS,
   "@W vtkExodusIICacheEntry"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExodusIICacheEntry_vtkExodusIICacheEntry(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkExodusIICacheEntry");
  return nullptr;
}


static PyObject *
PyvtkExodusIICacheEntry_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkExodusIICacheEntry_vtkExodusIICacheEntry(nullptr, args);
}

static void PyvtkExodusIICacheEntry_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkExodusIICacheEntry *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkExodusIICacheEntry_Hash(PyObject *self)
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

static PyTypeObject PyvtkExodusIICacheEntry_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOExodusPython.vtkExodusIICacheEntry", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkExodusIICacheEntry_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkExodusIICacheEntry_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkExodusIICacheEntry_Doc, // tp_doc
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
  PyvtkExodusIICacheEntry_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkExodusIICacheEntry_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkExodusIICacheEntry(*static_cast<const vtkExodusIICacheEntry*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExodusIICacheEntry_TypeNew(); }

PyObject *PyvtkExodusIICacheEntry_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkExodusIICacheEntry_Type,
    PyvtkExodusIICacheEntry_Methods,
    PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_Methods,
    &PyvtkExodusIICacheEntry_CCopy);

  PyTypeObject *pytype = &PyvtkExodusIICacheEntry_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExodusIICache_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkExodusIICache_Doc =
  "vtkExodusIICache - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;


static PyObject *
PyvtkExodusIICache_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExodusIICache::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIICache_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExodusIICache::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIICache_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExodusIICache *tempr = vtkExodusIICache::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIICache_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExodusIICache *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExodusIICache::NewInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
      {
        PyVTKObject_GetObject(result)->UnRegister(0);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
      }
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIICache_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkExodusIICache::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIICache_SetCacheCapacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheCapacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCacheCapacity(temp0);
    }
    else
    {
      op->vtkExodusIICache::SetCacheCapacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIICache_GetSpaceLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpaceLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpaceLeft() :
      op->vtkExodusIICache::GetSpaceLeft());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIICache_ReduceToSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceToSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->ReduceToSize(temp0) :
      op->vtkExodusIICache::ReduceToSize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIICache_Insert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Insert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  vtkExodusIICacheKey *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, "vtkExodusIICacheKey") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->Insert(*temp0, temp1);
    }
    else
    {
      op->vtkExodusIICache::Insert(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIICache_Invalidate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Invalidate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  vtkExodusIICacheKey *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkExodusIICacheKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Invalidate(*temp0) :
      op->vtkExodusIICache::Invalidate(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkExodusIICache_Invalidate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Invalidate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  vtkExodusIICacheKey *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkExodusIICacheKey *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkExodusIICacheKey") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkExodusIICacheKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Invalidate(*temp0, *temp1) :
      op->vtkExodusIICache::Invalidate(*temp0, *temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkExodusIICache_Invalidate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkExodusIICache_Invalidate_s1(self, args);
    case 2:
      return PyvtkExodusIICache_Invalidate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Invalidate");
  return nullptr;
}


static PyMethodDef PyvtkExodusIICache_Methods[] = {
  {"IsTypeOf", PyvtkExodusIICache_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExodusIICache_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExodusIICache_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExodusIICache\nC++: static vtkExodusIICache *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExodusIICache_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExodusIICache\nC++: vtkExodusIICache *NewInstance()\n\n"},
  {"Clear", PyvtkExodusIICache_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nEmpty the cache\n"},
  {"SetCacheCapacity", PyvtkExodusIICache_SetCacheCapacity, METH_VARARGS,
   "V.SetCacheCapacity(float)\nC++: void SetCacheCapacity(double sizeInMiB)\n\nSet the maximum allowable cache size. This will remove cache\nentries if the capacity is reduced below the current size.\n"},
  {"GetSpaceLeft", PyvtkExodusIICache_GetSpaceLeft, METH_VARARGS,
   "V.GetSpaceLeft() -> float\nC++: double GetSpaceLeft()\n\nSee how much cache space is left. This is the difference between\nthe capacity and the size of the cache. The result is in MiB.\n"},
  {"ReduceToSize", PyvtkExodusIICache_ReduceToSize, METH_VARARGS,
   "V.ReduceToSize(float) -> int\nC++: int ReduceToSize(double newSize)\n\nRemove cache entries until the size of the cache is at or below\nthe given size. Returns a nonzero value if deletions were\nrequired.\n"},
  {"Insert", PyvtkExodusIICache_Insert, METH_VARARGS,
   "V.Insert(vtkExodusIICacheKey, vtkDataArray)\nC++: void Insert(vtkExodusIICacheKey &key, vtkDataArray *value)\n\nInsert an entry into the cache (this can remove other cache\nentries to make space).\n"},
  {"Invalidate", PyvtkExodusIICache_Invalidate, METH_VARARGS,
   "V.Invalidate(vtkExodusIICacheKey) -> int\nC++: int Invalidate(const vtkExodusIICacheKey &key)\nV.Invalidate(vtkExodusIICacheKey, vtkExodusIICacheKey) -> int\nC++: int Invalidate(const vtkExodusIICacheKey &key,\n    const vtkExodusIICacheKey &pattern)\n\nInvalidate a cache entry (drop it from the cache) if the key\nexists. This does nothing if the cache entry does not exist.\nReturns 1 if the cache entry existed prior to this call and 0\notherwise.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExodusIICache_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOExodusPython.vtkExodusIICache", // tp_name
  sizeof(PyVTKObject), // tp_basicsize
  0, // tp_itemsize
  PyVTKObject_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  PyVTKObject_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  PyObject_GenericSetAttr, // tp_setattro
  &PyVTKObject_AsBuffer, // tp_as_buffer
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_BASETYPE, // tp_flags
  PyvtkExodusIICache_Doc, // tp_doc
  PyVTKObject_Traverse, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  offsetof(PyVTKObject, vtk_weakreflist), // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  PyVTKObject_GetSet, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  offsetof(PyVTKObject, vtk_dict), // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyVTKObject_New, // tp_new
  PyObject_GC_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static vtkObjectBase *PyvtkExodusIICache_StaticNew()
{
  return vtkExodusIICache::New();
}

PyObject *PyvtkExodusIICache_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExodusIICache_Type, PyvtkExodusIICache_Methods,
    "vtkExodusIICache",
 &PyvtkExodusIICache_StaticNew);

  PyTypeObject *pytype = &PyvtkExodusIICache_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExodusIICache(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExodusIICacheKey_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkExodusIICacheKey", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkExodusIICacheEntry_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkExodusIICacheEntry", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkExodusIICache_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExodusIICache", o) != 0)
  {
    Py_DECREF(o);
  }

}

