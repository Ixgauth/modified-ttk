// python wrapper for vtkDiagonalMatrixSource
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
#include "vtkDiagonalMatrixSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDiagonalMatrixSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDiagonalMatrixSource_ClassNew(); }

#ifndef DECLARED_PyvtkArrayDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkArrayDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkArrayDataAlgorithm_ClassNew
#endif

static const char *PyvtkDiagonalMatrixSource_Doc =
  "vtkDiagonalMatrixSource - generates a sparse or dense square matrix\nwith user-specified values for the diagonal, superdiagonal, and\nsubdiagonal.\n\n"
  "Superclass: vtkArrayDataAlgorithm\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";

static PyTypeObject PyvtkDiagonalMatrixSource_StorageType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkDiagonalMatrixSource.StorageType", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkDiagonalMatrixSource_StorageType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkDiagonalMatrixSource_StorageType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkDiagonalMatrixSource_StorageType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkDiagonalMatrixSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDiagonalMatrixSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDiagonalMatrixSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDiagonalMatrixSource *tempr = vtkDiagonalMatrixSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDiagonalMatrixSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDiagonalMatrixSource::NewInstance());

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
PyvtkDiagonalMatrixSource_GetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayType() :
      op->vtkDiagonalMatrixSource::GetArrayType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_SetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayType(temp0);
    }
    else
    {
      op->vtkDiagonalMatrixSource::SetArrayType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetExtents() :
      op->vtkDiagonalMatrixSource::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtents(temp0);
    }
    else
    {
      op->vtkDiagonalMatrixSource::SetExtents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_GetDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDiagonal() :
      op->vtkDiagonalMatrixSource::GetDiagonal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_SetDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDiagonal(temp0);
    }
    else
    {
      op->vtkDiagonalMatrixSource::SetDiagonal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_GetSuperDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSuperDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSuperDiagonal() :
      op->vtkDiagonalMatrixSource::GetSuperDiagonal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_SetSuperDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSuperDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSuperDiagonal(temp0);
    }
    else
    {
      op->vtkDiagonalMatrixSource::SetSuperDiagonal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_GetSubDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSubDiagonal() :
      op->vtkDiagonalMatrixSource::GetSubDiagonal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_SetSubDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSubDiagonal(temp0);
    }
    else
    {
      op->vtkDiagonalMatrixSource::SetSubDiagonal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_GetRowLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRowLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetRowLabel() :
      op->vtkDiagonalMatrixSource::GetRowLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_SetRowLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRowLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRowLabel(temp0);
    }
    else
    {
      op->vtkDiagonalMatrixSource::SetRowLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_GetColumnLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetColumnLabel() :
      op->vtkDiagonalMatrixSource::GetColumnLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_SetColumnLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColumnLabel(temp0);
    }
    else
    {
      op->vtkDiagonalMatrixSource::SetColumnLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDiagonalMatrixSource_Methods[] = {
  {"IsTypeOf", PyvtkDiagonalMatrixSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDiagonalMatrixSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDiagonalMatrixSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDiagonalMatrixSource\nC++: static vtkDiagonalMatrixSource *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDiagonalMatrixSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDiagonalMatrixSource\nC++: vtkDiagonalMatrixSource *NewInstance()\n\n"},
  {"GetArrayType", PyvtkDiagonalMatrixSource_GetArrayType, METH_VARARGS,
   "V.GetArrayType() -> int\nC++: virtual int GetArrayType()\n\n"},
  {"SetArrayType", PyvtkDiagonalMatrixSource_SetArrayType, METH_VARARGS,
   "V.SetArrayType(int)\nC++: virtual void SetArrayType(int _arg)\n\n"},
  {"GetExtents", PyvtkDiagonalMatrixSource_GetExtents, METH_VARARGS,
   "V.GetExtents() -> int\nC++: virtual vtkIdType GetExtents()\n\nStores the extents of the output matrix (which is square)\n"},
  {"SetExtents", PyvtkDiagonalMatrixSource_SetExtents, METH_VARARGS,
   "V.SetExtents(int)\nC++: virtual void SetExtents(vtkIdType _arg)\n\nStores the extents of the output matrix (which is square)\n"},
  {"GetDiagonal", PyvtkDiagonalMatrixSource_GetDiagonal, METH_VARARGS,
   "V.GetDiagonal() -> float\nC++: virtual double GetDiagonal()\n\nStores the value that will be assigned to diagonal elements\n(default: 1)\n"},
  {"SetDiagonal", PyvtkDiagonalMatrixSource_SetDiagonal, METH_VARARGS,
   "V.SetDiagonal(float)\nC++: virtual void SetDiagonal(double _arg)\n\nStores the value that will be assigned to diagonal elements\n(default: 1)\n"},
  {"GetSuperDiagonal", PyvtkDiagonalMatrixSource_GetSuperDiagonal, METH_VARARGS,
   "V.GetSuperDiagonal() -> float\nC++: virtual double GetSuperDiagonal()\n\nStores the value that will be assigned to superdiagonal elements\n(default: 0)\n"},
  {"SetSuperDiagonal", PyvtkDiagonalMatrixSource_SetSuperDiagonal, METH_VARARGS,
   "V.SetSuperDiagonal(float)\nC++: virtual void SetSuperDiagonal(double _arg)\n\nStores the value that will be assigned to superdiagonal elements\n(default: 0)\n"},
  {"GetSubDiagonal", PyvtkDiagonalMatrixSource_GetSubDiagonal, METH_VARARGS,
   "V.GetSubDiagonal() -> float\nC++: virtual double GetSubDiagonal()\n\nStores the value that will be assigned to subdiagonal elements\n(default: 0)\n"},
  {"SetSubDiagonal", PyvtkDiagonalMatrixSource_SetSubDiagonal, METH_VARARGS,
   "V.SetSubDiagonal(float)\nC++: virtual void SetSubDiagonal(double _arg)\n\nStores the value that will be assigned to subdiagonal elements\n(default: 0)\n"},
  {"GetRowLabel", PyvtkDiagonalMatrixSource_GetRowLabel, METH_VARARGS,
   "V.GetRowLabel() -> string\nC++: virtual char *GetRowLabel()\n\nControls the output matrix row dimension label. Default: \"rows\"\n"},
  {"SetRowLabel", PyvtkDiagonalMatrixSource_SetRowLabel, METH_VARARGS,
   "V.SetRowLabel(string)\nC++: virtual void SetRowLabel(const char *_arg)\n\nControls the output matrix row dimension label. Default: \"rows\"\n"},
  {"GetColumnLabel", PyvtkDiagonalMatrixSource_GetColumnLabel, METH_VARARGS,
   "V.GetColumnLabel() -> string\nC++: virtual char *GetColumnLabel()\n\nControls the output matrix column dimension label. Default:\n\"columns\"\n"},
  {"SetColumnLabel", PyvtkDiagonalMatrixSource_SetColumnLabel, METH_VARARGS,
   "V.SetColumnLabel(string)\nC++: virtual void SetColumnLabel(const char *_arg)\n\nControls the output matrix column dimension label. Default:\n\"columns\"\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDiagonalMatrixSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkDiagonalMatrixSource", // tp_name
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
  PyvtkDiagonalMatrixSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDiagonalMatrixSource_StaticNew()
{
  return vtkDiagonalMatrixSource::New();
}

PyObject *PyvtkDiagonalMatrixSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDiagonalMatrixSource_Type, PyvtkDiagonalMatrixSource_Methods,
    "vtkDiagonalMatrixSource",
 &PyvtkDiagonalMatrixSource_StaticNew);

  PyTypeObject *pytype = &PyvtkDiagonalMatrixSource_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArrayDataAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkDiagonalMatrixSource_StorageType_Type);
  PyvtkDiagonalMatrixSource_StorageType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkDiagonalMatrixSource_StorageType_Type);

  o = (PyObject *)&PyvtkDiagonalMatrixSource_StorageType_Type;
  if (PyDict_SetItemString(d, "StorageType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkDiagonalMatrixSource::StorageType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "DENSE", vtkDiagonalMatrixSource::DENSE },
        { "SPARSE", vtkDiagonalMatrixSource::SPARSE },
      };

    o = PyvtkDiagonalMatrixSource_StorageType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDiagonalMatrixSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDiagonalMatrixSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDiagonalMatrixSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

