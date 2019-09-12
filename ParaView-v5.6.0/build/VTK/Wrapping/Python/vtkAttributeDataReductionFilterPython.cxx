// python wrapper for vtkAttributeDataReductionFilter
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
#include "vtkAttributeDataReductionFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAttributeDataReductionFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAttributeDataReductionFilter_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataObjectAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataObjectAlgorithm_ClassNew
#endif

static const char *PyvtkAttributeDataReductionFilter_Doc =
  "vtkAttributeDataReductionFilter - Reduces cell/point attribute data\nwith different modes to combine cell/point data.\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "Filter that takes data with same structure on multiple input\n"
  "connections to produce a reduced dataset with cell/point data\n"
  "summed/maxed/minned for all cells/points. Data arrays not available\n"
  "in all inputs are discarded. The attribute to reduce can be set to\n"
  "point or cell or field or all. Only selected attributes will be\n"
  "reduced according to the type chosen, all other attributes are those\n"
  "at the first input.\n\n";

static PyTypeObject PyvtkAttributeDataReductionFilter_ReductionTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkAttributeDataReductionFilter.ReductionTypes", // tp_name
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

PyObject *PyvtkAttributeDataReductionFilter_ReductionTypes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkAttributeDataReductionFilter_ReductionTypes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkAttributeDataReductionFilter_ReductionTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkAttributeDataReductionFilter_AttributeTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkAttributeDataReductionFilter.AttributeTypes", // tp_name
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

PyObject *PyvtkAttributeDataReductionFilter_AttributeTypes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkAttributeDataReductionFilter_AttributeTypes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkAttributeDataReductionFilter_AttributeTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkAttributeDataReductionFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAttributeDataReductionFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataReductionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataReductionFilter *op = static_cast<vtkAttributeDataReductionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAttributeDataReductionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataReductionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAttributeDataReductionFilter *tempr = vtkAttributeDataReductionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataReductionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataReductionFilter *op = static_cast<vtkAttributeDataReductionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAttributeDataReductionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAttributeDataReductionFilter::NewInstance());

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
PyvtkAttributeDataReductionFilter_SetAttributeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataReductionFilter *op = static_cast<vtkAttributeDataReductionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeType(temp0);
    }
    else
    {
      op->vtkAttributeDataReductionFilter::SetAttributeType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataReductionFilter_GetAttributeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataReductionFilter *op = static_cast<vtkAttributeDataReductionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeType() :
      op->vtkAttributeDataReductionFilter::GetAttributeType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataReductionFilter_SetReductionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReductionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataReductionFilter *op = static_cast<vtkAttributeDataReductionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReductionType(temp0);
    }
    else
    {
      op->vtkAttributeDataReductionFilter::SetReductionType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataReductionFilter_GetReductionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReductionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataReductionFilter *op = static_cast<vtkAttributeDataReductionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReductionType() :
      op->vtkAttributeDataReductionFilter::GetReductionType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataReductionFilter_GetReductionTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReductionTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataReductionFilter *op = static_cast<vtkAttributeDataReductionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetReductionTypeAsString() :
      op->vtkAttributeDataReductionFilter::GetReductionTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataReductionFilter_SetReductionTypeToAdd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReductionTypeToAdd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataReductionFilter *op = static_cast<vtkAttributeDataReductionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetReductionTypeToAdd();
    }
    else
    {
      op->vtkAttributeDataReductionFilter::SetReductionTypeToAdd();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataReductionFilter_SetReductionTypeToMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReductionTypeToMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataReductionFilter *op = static_cast<vtkAttributeDataReductionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetReductionTypeToMax();
    }
    else
    {
      op->vtkAttributeDataReductionFilter::SetReductionTypeToMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataReductionFilter_SetReductionTypeToMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReductionTypeToMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataReductionFilter *op = static_cast<vtkAttributeDataReductionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetReductionTypeToMin();
    }
    else
    {
      op->vtkAttributeDataReductionFilter::SetReductionTypeToMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAttributeDataReductionFilter_Methods[] = {
  {"IsTypeOf", PyvtkAttributeDataReductionFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAttributeDataReductionFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAttributeDataReductionFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAttributeDataReductionFilter\nC++: static vtkAttributeDataReductionFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAttributeDataReductionFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAttributeDataReductionFilter\nC++: vtkAttributeDataReductionFilter *NewInstance()\n\n"},
  {"SetAttributeType", PyvtkAttributeDataReductionFilter_SetAttributeType, METH_VARARGS,
   "V.SetAttributeType(int)\nC++: virtual void SetAttributeType(int _arg)\n\n"},
  {"GetAttributeType", PyvtkAttributeDataReductionFilter_GetAttributeType, METH_VARARGS,
   "V.GetAttributeType() -> int\nC++: virtual int GetAttributeType()\n\n"},
  {"SetReductionType", PyvtkAttributeDataReductionFilter_SetReductionType, METH_VARARGS,
   "V.SetReductionType(int)\nC++: virtual void SetReductionType(int _arg)\n\n"},
  {"GetReductionType", PyvtkAttributeDataReductionFilter_GetReductionType, METH_VARARGS,
   "V.GetReductionType() -> int\nC++: virtual int GetReductionType()\n\n"},
  {"GetReductionTypeAsString", PyvtkAttributeDataReductionFilter_GetReductionTypeAsString, METH_VARARGS,
   "V.GetReductionTypeAsString() -> string\nC++: const char *GetReductionTypeAsString()\n\n"},
  {"SetReductionTypeToAdd", PyvtkAttributeDataReductionFilter_SetReductionTypeToAdd, METH_VARARGS,
   "V.SetReductionTypeToAdd()\nC++: void SetReductionTypeToAdd()\n\n"},
  {"SetReductionTypeToMax", PyvtkAttributeDataReductionFilter_SetReductionTypeToMax, METH_VARARGS,
   "V.SetReductionTypeToMax()\nC++: void SetReductionTypeToMax()\n\n"},
  {"SetReductionTypeToMin", PyvtkAttributeDataReductionFilter_SetReductionTypeToMin, METH_VARARGS,
   "V.SetReductionTypeToMin()\nC++: void SetReductionTypeToMin()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAttributeDataReductionFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkAttributeDataReductionFilter", // tp_name
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
  PyvtkAttributeDataReductionFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAttributeDataReductionFilter_StaticNew()
{
  return vtkAttributeDataReductionFilter::New();
}

PyObject *PyvtkAttributeDataReductionFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAttributeDataReductionFilter_Type, PyvtkAttributeDataReductionFilter_Methods,
    "vtkAttributeDataReductionFilter",
 &PyvtkAttributeDataReductionFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkAttributeDataReductionFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObjectAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkAttributeDataReductionFilter_ReductionTypes_Type);
  PyvtkAttributeDataReductionFilter_ReductionTypes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkAttributeDataReductionFilter_ReductionTypes_Type);

  o = (PyObject *)&PyvtkAttributeDataReductionFilter_ReductionTypes_Type;
  if (PyDict_SetItemString(d, "ReductionTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkAttributeDataReductionFilter_AttributeTypes_Type);
  PyvtkAttributeDataReductionFilter_AttributeTypes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkAttributeDataReductionFilter_AttributeTypes_Type);

  o = (PyObject *)&PyvtkAttributeDataReductionFilter_AttributeTypes_Type;
  if (PyDict_SetItemString(d, "AttributeTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkAttributeDataReductionFilter::ReductionTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "ADD", vtkAttributeDataReductionFilter::ADD },
        { "MAX", vtkAttributeDataReductionFilter::MAX },
        { "MIN", vtkAttributeDataReductionFilter::MIN },
      };

    o = PyvtkAttributeDataReductionFilter_ReductionTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkAttributeDataReductionFilter::AttributeTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "POINT_DATA", vtkAttributeDataReductionFilter::POINT_DATA },
        { "CELL_DATA", vtkAttributeDataReductionFilter::CELL_DATA },
        { "FIELD_DATA", vtkAttributeDataReductionFilter::FIELD_DATA },
        { "ROW_DATA", vtkAttributeDataReductionFilter::ROW_DATA },
      };

    o = PyvtkAttributeDataReductionFilter_AttributeTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAttributeDataReductionFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAttributeDataReductionFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAttributeDataReductionFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

