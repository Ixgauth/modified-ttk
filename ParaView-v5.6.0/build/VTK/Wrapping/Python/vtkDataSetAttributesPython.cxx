// python wrapper for vtkDataSetAttributes
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
#include "vtkDataSetAttributesFieldList.h"
#include "vtkDataSetAttributes.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataSetAttributes(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDataSetAttributes_ClassNew(); }

#ifndef DECLARED_PyvtkFieldData_ClassNew
extern "C" { PyObject *PyvtkFieldData_ClassNew(); }
#define DECLARED_PyvtkFieldData_ClassNew
#endif

static const char *PyvtkDataSetAttributes_Doc =
  "vtkDataSetAttributes - represent and manipulate attribute data in a\ndataset\n\n"
  "Superclass: vtkFieldData\n\n"
  "vtkDataSetAttributes is a class that is used to represent and\n"
  "manipulate attribute data (e.g., scalars, vectors, normals, texture\n"
  "coordinates, tensors, global ids, pedigree ids, and field data).\n\n"
  "This adds to vtkFieldData the ability to pick one of the arrays from\n"
  "the field as the currently active array for each attribute type. In\n"
  "other words, you pick one array to be called \"THE\" Scalars, and then\n"
  "filters down the pipeline will treat that array specially. For\n"
  "example vtkContourFilter will contour \"THE\" Scalar array unless a\n"
  "different array is asked for.\n\n"
  "Additionally vtkDataSetAttributes provides methods that filters call\n"
  "to pass data through, copy data into, and interpolate from Fields.\n"
  "PassData passes entire arrays from the source to the destination.\n"
  "Copy passes through some subset of the tuples from the source to the\n"
  "destination. Interpolate interpolates from the chosen tuple(s) in the\n"
  "source data, using the provided weights, to produce new tuples in the\n"
  "destination. Each attribute type has pass, copy and interpolate\n"
  "\"copy\" flags that can be set in the destination to choose which\n"
  "attribute arrays will be transferred from the source to the\n"
  "destination.\n\n"
  "Finally this class provides a mechanism to determine which attributes\n"
  "a group of sources have in common, and to copy tuples from a source\n"
  "into the destination, for only those attributes that are held by all.\n\n";

static PyTypeObject PyvtkDataSetAttributes_AttributeTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkDataSetAttributes.AttributeTypes", // tp_name
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

PyObject *PyvtkDataSetAttributes_AttributeTypes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkDataSetAttributes_AttributeTypes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkDataSetAttributes_AttributeTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkDataSetAttributes_AttributeLimitTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkDataSetAttributes.AttributeLimitTypes", // tp_name
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

PyObject *PyvtkDataSetAttributes_AttributeLimitTypes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkDataSetAttributes_AttributeLimitTypes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkDataSetAttributes_AttributeLimitTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkDataSetAttributes_CellGhostTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkDataSetAttributes.CellGhostTypes", // tp_name
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

PyObject *PyvtkDataSetAttributes_CellGhostTypes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkDataSetAttributes_CellGhostTypes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkDataSetAttributes_CellGhostTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkDataSetAttributes_PointGhostTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkDataSetAttributes.PointGhostTypes", // tp_name
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

PyObject *PyvtkDataSetAttributes_PointGhostTypes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkDataSetAttributes_PointGhostTypes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkDataSetAttributes_PointGhostTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkDataSetAttributes_AttributeCopyOperations_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkDataSetAttributes.AttributeCopyOperations", // tp_name
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

PyObject *PyvtkDataSetAttributes_AttributeCopyOperations_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkDataSetAttributes_AttributeCopyOperations_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkDataSetAttributes_AttributeCopyOperations_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkDataSetAttributes_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataSetAttributes::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataSetAttributes::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataSetAttributes *tempr = vtkDataSetAttributes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataSetAttributes::NewInstance());

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
PyvtkDataSetAttributes_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkDataSetAttributes::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkDataSetAttributes::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkFieldData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkDataSetAttributes::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkFieldData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkDataSetAttributes::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GhostArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GhostArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkDataSetAttributes::GhostArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->SetScalars(temp0) :
      op->vtkDataSetAttributes::SetScalars(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActiveScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetActiveScalars(temp0) :
      op->vtkDataSetAttributes::SetActiveScalars(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetScalars_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetScalars() :
      op->vtkDataSetAttributes::GetScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetScalars_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetScalars(temp0) :
      op->vtkDataSetAttributes::GetScalars(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetScalars(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataSetAttributes_GetScalars_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetScalars_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalars");
  return nullptr;
}



static PyObject *
PyvtkDataSetAttributes_SetVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->SetVectors(temp0) :
      op->vtkDataSetAttributes::SetVectors(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActiveVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetActiveVectors(temp0) :
      op->vtkDataSetAttributes::SetActiveVectors(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetVectors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetVectors() :
      op->vtkDataSetAttributes::GetVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetVectors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetVectors(temp0) :
      op->vtkDataSetAttributes::GetVectors(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetVectors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataSetAttributes_GetVectors_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetVectors_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVectors");
  return nullptr;
}



static PyObject *
PyvtkDataSetAttributes_SetNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->SetNormals(temp0) :
      op->vtkDataSetAttributes::SetNormals(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActiveNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetActiveNormals(temp0) :
      op->vtkDataSetAttributes::SetActiveNormals(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetNormals_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetNormals() :
      op->vtkDataSetAttributes::GetNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetNormals_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetNormals(temp0) :
      op->vtkDataSetAttributes::GetNormals(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetNormals(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataSetAttributes_GetNormals_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetNormals_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNormals");
  return nullptr;
}



static PyObject *
PyvtkDataSetAttributes_SetTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->SetTCoords(temp0) :
      op->vtkDataSetAttributes::SetTCoords(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActiveTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetActiveTCoords(temp0) :
      op->vtkDataSetAttributes::SetActiveTCoords(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetTCoords_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetTCoords() :
      op->vtkDataSetAttributes::GetTCoords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetTCoords_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetTCoords(temp0) :
      op->vtkDataSetAttributes::GetTCoords(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetTCoords(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataSetAttributes_GetTCoords_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetTCoords_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTCoords");
  return nullptr;
}



static PyObject *
PyvtkDataSetAttributes_SetTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->SetTensors(temp0) :
      op->vtkDataSetAttributes::SetTensors(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActiveTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetActiveTensors(temp0) :
      op->vtkDataSetAttributes::SetActiveTensors(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetTensors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetTensors() :
      op->vtkDataSetAttributes::GetTensors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetTensors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetTensors(temp0) :
      op->vtkDataSetAttributes::GetTensors(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetTensors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataSetAttributes_GetTensors_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetTensors_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTensors");
  return nullptr;
}



static PyObject *
PyvtkDataSetAttributes_SetGlobalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->SetGlobalIds(temp0) :
      op->vtkDataSetAttributes::SetGlobalIds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActiveGlobalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetActiveGlobalIds(temp0) :
      op->vtkDataSetAttributes::SetActiveGlobalIds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetGlobalIds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetGlobalIds() :
      op->vtkDataSetAttributes::GetGlobalIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetGlobalIds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetGlobalIds(temp0) :
      op->vtkDataSetAttributes::GetGlobalIds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetGlobalIds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataSetAttributes_GetGlobalIds_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetGlobalIds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGlobalIds");
  return nullptr;
}



static PyObject *
PyvtkDataSetAttributes_SetPedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    int tempr = (ap.IsBound() ?
      op->SetPedigreeIds(temp0) :
      op->vtkDataSetAttributes::SetPedigreeIds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActivePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetActivePedigreeIds(temp0) :
      op->vtkDataSetAttributes::SetActivePedigreeIds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetPedigreeIds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetPedigreeIds() :
      op->vtkDataSetAttributes::GetPedigreeIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetPedigreeIds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetPedigreeIds(temp0) :
      op->vtkDataSetAttributes::GetPedigreeIds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetPedigreeIds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataSetAttributes_GetPedigreeIds_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetPedigreeIds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPedigreeIds");
  return nullptr;
}



static PyObject *
PyvtkDataSetAttributes_SetActiveAttribute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetActiveAttribute(temp0, temp1) :
      op->vtkDataSetAttributes::SetActiveAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_SetActiveAttribute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetActiveAttribute(temp0, temp1) :
      op->vtkDataSetAttributes::SetActiveAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetAttributes_SetActiveAttribute_Methods[] = {
  {nullptr, PyvtkDataSetAttributes_SetActiveAttribute_s1, METH_VARARGS,
   "@zi"},
  {nullptr, PyvtkDataSetAttributes_SetActiveAttribute_s2, METH_VARARGS,
   "@ii"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataSetAttributes_SetActiveAttribute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataSetAttributes_SetActiveAttribute_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetActiveAttribute");
  return nullptr;
}



static PyObject *
PyvtkDataSetAttributes_GetAttributeIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetAttributeIndices(temp0);
    }
    else
    {
      op->vtkDataSetAttributes::GetAttributeIndices(temp0);
    }

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
PyvtkDataSetAttributes_IsArrayAnAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsArrayAnAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsArrayAnAttribute(temp0) :
      op->vtkDataSetAttributes::IsArrayAnAttribute(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetAttribute(temp0, temp1) :
      op->vtkDataSetAttributes::SetAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetAttribute(temp0) :
      op->vtkDataSetAttributes::GetAttribute(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetAbstractAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbstractAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetAbstractAttribute(temp0) :
      op->vtkDataSetAttributes::GetAbstractAttribute(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_RemoveArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveArray(temp0);
    }
    else
    {
      op->vtkDataSetAttributes::RemoveArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_RemoveArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveArray(temp0);
    }
    else
    {
      op->vtkDataSetAttributes::RemoveArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetAttributes_RemoveArray_Methods[] = {
  {nullptr, PyvtkDataSetAttributes_RemoveArray_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkDataSetAttributes_RemoveArray_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataSetAttributes_RemoveArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataSetAttributes_RemoveArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveArray");
  return nullptr;
}



static PyObject *
PyvtkDataSetAttributes_GetAttributeTypeAsString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAttributeTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkDataSetAttributes::GetAttributeTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetLongAttributeTypeAsString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLongAttributeTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkDataSetAttributes::GetLongAttributeTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1;
  int temp2 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->SetCopyAttribute(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataSetAttributes::SetCopyAttribute(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyAttribute(temp0, temp1) :
      op->vtkDataSetAttributes::GetCopyAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetCopyScalars(temp0, temp1);
    }
    else
    {
      op->vtkDataSetAttributes::SetCopyScalars(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyScalars(temp0) :
      op->vtkDataSetAttributes::GetCopyScalars(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyScalarsOn();
    }
    else
    {
      op->vtkDataSetAttributes::CopyScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyScalarsOff();
    }
    else
    {
      op->vtkDataSetAttributes::CopyScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetCopyVectors(temp0, temp1);
    }
    else
    {
      op->vtkDataSetAttributes::SetCopyVectors(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyVectors(temp0) :
      op->vtkDataSetAttributes::GetCopyVectors(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyVectorsOn();
    }
    else
    {
      op->vtkDataSetAttributes::CopyVectorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyVectorsOff();
    }
    else
    {
      op->vtkDataSetAttributes::CopyVectorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetCopyNormals(temp0, temp1);
    }
    else
    {
      op->vtkDataSetAttributes::SetCopyNormals(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyNormals(temp0) :
      op->vtkDataSetAttributes::GetCopyNormals(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyNormalsOn();
    }
    else
    {
      op->vtkDataSetAttributes::CopyNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyNormalsOff();
    }
    else
    {
      op->vtkDataSetAttributes::CopyNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetCopyTCoords(temp0, temp1);
    }
    else
    {
      op->vtkDataSetAttributes::SetCopyTCoords(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyTCoords(temp0) :
      op->vtkDataSetAttributes::GetCopyTCoords(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyTCoordsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTCoordsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyTCoordsOn();
    }
    else
    {
      op->vtkDataSetAttributes::CopyTCoordsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyTCoordsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTCoordsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyTCoordsOff();
    }
    else
    {
      op->vtkDataSetAttributes::CopyTCoordsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetCopyTensors(temp0, temp1);
    }
    else
    {
      op->vtkDataSetAttributes::SetCopyTensors(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyTensors(temp0) :
      op->vtkDataSetAttributes::GetCopyTensors(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyTensorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTensorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyTensorsOn();
    }
    else
    {
      op->vtkDataSetAttributes::CopyTensorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyTensorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTensorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyTensorsOff();
    }
    else
    {
      op->vtkDataSetAttributes::CopyTensorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyGlobalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetCopyGlobalIds(temp0, temp1);
    }
    else
    {
      op->vtkDataSetAttributes::SetCopyGlobalIds(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyGlobalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyGlobalIds(temp0) :
      op->vtkDataSetAttributes::GetCopyGlobalIds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyGlobalIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyGlobalIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyGlobalIdsOn();
    }
    else
    {
      op->vtkDataSetAttributes::CopyGlobalIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyGlobalIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyGlobalIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyGlobalIdsOff();
    }
    else
    {
      op->vtkDataSetAttributes::CopyGlobalIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyPedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetCopyPedigreeIds(temp0, temp1);
    }
    else
    {
      op->vtkDataSetAttributes::SetCopyPedigreeIds(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyPedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyPedigreeIds(temp0) :
      op->vtkDataSetAttributes::GetCopyPedigreeIds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyPedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyPedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyPedigreeIdsOn();
    }
    else
    {
      op->vtkDataSetAttributes::CopyPedigreeIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyPedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyPedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyPedigreeIdsOff();
    }
    else
    {
      op->vtkDataSetAttributes::CopyPedigreeIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyAllOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->CopyAllOn(temp0);
    }
    else
    {
      op->vtkDataSetAttributes::CopyAllOn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyAllOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->CopyAllOff(temp0);
    }
    else
    {
      op->vtkDataSetAttributes::CopyAllOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_PassData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkFieldData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->PassData(temp0);
    }
    else
    {
      op->vtkDataSetAttributes::PassData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyAllocate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  vtkIdType temp1 = 0;
  vtkIdType temp2 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyAllocate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataSetAttributes::CopyAllocate(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_CopyAllocate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  vtkIdType temp1;
  vtkIdType temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->CopyAllocate(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataSetAttributes::CopyAllocate(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_CopyAllocate_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributesFieldList *temp0 = nullptr;
  vtkIdType temp1 = 0;
  vtkIdType temp2 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetSpecialObject(temp0, "vtkDataSetAttributesFieldList") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyAllocate(*temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataSetAttributes::CopyAllocate(*temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetAttributes_CopyAllocate_Methods[] = {
  {nullptr, PyvtkDataSetAttributes_CopyAllocate_s1, METH_VARARGS,
   "@V|kk *vtkDataSetAttributes"},
  {nullptr, PyvtkDataSetAttributes_CopyAllocate_s3, METH_VARARGS,
   "@W|kk &vtkDataSetAttributesFieldList"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataSetAttributes_CopyAllocate(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataSetAttributes_CopyAllocate_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkDataSetAttributes_CopyAllocate_s2(self, args);
    case 1:
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyAllocate");
  return nullptr;
}



static PyObject *
PyvtkDataSetAttributes_SetupForCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupForCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes"))
  {
    if (ap.IsBound())
    {
      op->SetupForCopy(temp0);
    }
    else
    {
      op->vtkDataSetAttributes::SetupForCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyStructuredData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructuredData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(size1);
  int *temp1 = store1.Data();
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(size2);
  int *temp2 = store2.Data();
  bool temp3 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->CopyStructuredData(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataSetAttributes::CopyStructuredData(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->CopyData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataSetAttributes::CopyData(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_CopyData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  vtkIdList *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->CopyData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataSetAttributes::CopyData(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_CopyData_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkIdType temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->CopyData(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataSetAttributes::CopyData(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_CopyData_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributesFieldList *temp0 = nullptr;
  vtkDataSetAttributes *temp1 = nullptr;
  int temp2;
  vtkIdType temp3;
  vtkIdType temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetSpecialObject(temp0, "vtkDataSetAttributesFieldList") &&
      ap.GetVTKObject(temp1, "vtkDataSetAttributes") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->CopyData(*temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkDataSetAttributes::CopyData(*temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_CopyData_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributesFieldList *temp0 = nullptr;
  vtkDataSetAttributes *temp1 = nullptr;
  int temp2;
  vtkIdType temp3;
  vtkIdType temp4;
  vtkIdType temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetSpecialObject(temp0, "vtkDataSetAttributesFieldList") &&
      ap.GetVTKObject(temp1, "vtkDataSetAttributes") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->CopyData(*temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkDataSetAttributes::CopyData(*temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetAttributes_CopyData_Methods[] = {
  {nullptr, PyvtkDataSetAttributes_CopyData_s1, METH_VARARGS,
   "@Vkk *vtkDataSetAttributes"},
  {nullptr, PyvtkDataSetAttributes_CopyData_s2, METH_VARARGS,
   "@VVV *vtkDataSetAttributes *vtkIdList *vtkIdList"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataSetAttributes_CopyData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataSetAttributes_CopyData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkDataSetAttributes_CopyData_s3(self, args);
    case 5:
      return PyvtkDataSetAttributes_CopyData_s4(self, args);
    case 6:
      return PyvtkDataSetAttributes_CopyData_s5(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyData");
  return nullptr;
}



static PyObject *
PyvtkDataSetAttributes_CopyTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  vtkAbstractArray *temp1 = nullptr;
  vtkIdType temp2;
  vtkIdType temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetVTKObject(temp1, "vtkAbstractArray") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->CopyTuple(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataSetAttributes::CopyTuple(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  vtkAbstractArray *temp1 = nullptr;
  vtkIdList *temp2 = nullptr;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetVTKObject(temp1, "vtkAbstractArray") &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetVTKObject(temp3, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->CopyTuples(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataSetAttributes::CopyTuples(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_CopyTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  vtkAbstractArray *temp1 = nullptr;
  vtkIdType temp2;
  vtkIdType temp3;
  vtkIdType temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetVTKObject(temp1, "vtkAbstractArray") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->CopyTuples(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkDataSetAttributes::CopyTuples(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_CopyTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkDataSetAttributes_CopyTuples_s1(self, args);
    case 5:
      return PyvtkDataSetAttributes_CopyTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyTuples");
  return nullptr;
}



static PyObject *
PyvtkDataSetAttributes_InterpolateAllocate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAllocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  vtkIdType temp1 = 0;
  vtkIdType temp2 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->InterpolateAllocate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataSetAttributes::InterpolateAllocate(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_InterpolateAllocate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAllocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  vtkIdType temp1;
  vtkIdType temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->InterpolateAllocate(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataSetAttributes::InterpolateAllocate(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_InterpolateAllocate_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAllocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributesFieldList *temp0 = nullptr;
  vtkIdType temp1 = 0;
  vtkIdType temp2 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetSpecialObject(temp0, "vtkDataSetAttributesFieldList") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->InterpolateAllocate(*temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataSetAttributes::InterpolateAllocate(*temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetAttributes_InterpolateAllocate_Methods[] = {
  {nullptr, PyvtkDataSetAttributes_InterpolateAllocate_s1, METH_VARARGS,
   "@V|kk *vtkDataSetAttributes"},
  {nullptr, PyvtkDataSetAttributes_InterpolateAllocate_s3, METH_VARARGS,
   "@W|kk &vtkDataSetAttributesFieldList"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataSetAttributes_InterpolateAllocate(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataSetAttributes_InterpolateAllocate_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkDataSetAttributes_InterpolateAllocate_s2(self, args);
    case 1:
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InterpolateAllocate");
  return nullptr;
}



static PyObject *
PyvtkDataSetAttributes_InterpolatePoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolatePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  vtkIdType temp1;
  vtkIdList *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->InterpolatePoint(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataSetAttributes::InterpolatePoint(temp0, temp1, temp2, temp3);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_InterpolatePoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolatePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributesFieldList *temp0 = nullptr;
  vtkDataSetAttributes *temp1 = nullptr;
  int temp2;
  vtkIdType temp3;
  vtkIdList *temp4 = nullptr;
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetSpecialObject(temp0, "vtkDataSetAttributesFieldList") &&
      ap.GetVTKObject(temp1, "vtkDataSetAttributes") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkIdList") &&
      ap.GetArray(temp5, size5))
  {
    ap.Save(temp5, save5, size5);

    if (ap.IsBound())
    {
      op->InterpolatePoint(*temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkDataSetAttributes::InterpolatePoint(*temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_InterpolatePoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkDataSetAttributes_InterpolatePoint_s1(self, args);
    case 6:
      return PyvtkDataSetAttributes_InterpolatePoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InterpolatePoint");
  return nullptr;
}



static PyObject *
PyvtkDataSetAttributes_InterpolateEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkIdType temp3;
  double temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->InterpolateEdge(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkDataSetAttributes::InterpolateEdge(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_InterpolateTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  vtkDataSetAttributes *temp1 = nullptr;
  vtkIdType temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetVTKObject(temp1, "vtkDataSetAttributes") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->InterpolateTime(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataSetAttributes::InterpolateTime(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetAttributes_Methods[] = {
  {"IsTypeOf", PyvtkDataSetAttributes_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataSetAttributes_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataSetAttributes_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDataSetAttributes\nC++: static vtkDataSetAttributes *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataSetAttributes_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDataSetAttributes\nC++: vtkDataSetAttributes *NewInstance()\n\n"},
  {"Initialize", PyvtkDataSetAttributes_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nInitialize all of the object's data to nullptr Also, clear the\ncopy flags.\n"},
  {"Update", PyvtkDataSetAttributes_Update, METH_VARARGS,
   "V.Update()\nC++: virtual void Update()\n\nAttributes have a chance to bring themselves up to date; right\nnow this is ignored.\n"},
  {"DeepCopy", PyvtkDataSetAttributes_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkFieldData)\nC++: void DeepCopy(vtkFieldData *pd) override;\n\nDeep copy of data (i.e., create new data arrays and copy from\ninput data). Ignores the copy flags but preserves them in the\noutput.\n"},
  {"ShallowCopy", PyvtkDataSetAttributes_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkFieldData)\nC++: void ShallowCopy(vtkFieldData *pd) override;\n\nShallow copy of data (i.e., use reference counting). Ignores the\ncopy flags but preserves them in the output.\n"},
  {"GhostArrayName", PyvtkDataSetAttributes_GhostArrayName, METH_VARARGS,
   "V.GhostArrayName() -> string\nC++: static const char *GhostArrayName()\n\n"},
  {"SetScalars", PyvtkDataSetAttributes_SetScalars, METH_VARARGS,
   "V.SetScalars(vtkDataArray) -> int\nC++: int SetScalars(vtkDataArray *da)\n\nSet/Get the scalar data.\n"},
  {"SetActiveScalars", PyvtkDataSetAttributes_SetActiveScalars, METH_VARARGS,
   "V.SetActiveScalars(string) -> int\nC++: int SetActiveScalars(const char *name)\n\nSet/Get the scalar data.\n"},
  {"GetScalars", PyvtkDataSetAttributes_GetScalars, METH_VARARGS,
   "V.GetScalars() -> vtkDataArray\nC++: vtkDataArray *GetScalars()\nV.GetScalars(string) -> vtkDataArray\nC++: vtkDataArray *GetScalars(const char *name)\n\nSet/Get the scalar data.\n"},
  {"SetVectors", PyvtkDataSetAttributes_SetVectors, METH_VARARGS,
   "V.SetVectors(vtkDataArray) -> int\nC++: int SetVectors(vtkDataArray *da)\n\nSet/Get the vector data.\n"},
  {"SetActiveVectors", PyvtkDataSetAttributes_SetActiveVectors, METH_VARARGS,
   "V.SetActiveVectors(string) -> int\nC++: int SetActiveVectors(const char *name)\n\nSet/Get the vector data.\n"},
  {"GetVectors", PyvtkDataSetAttributes_GetVectors, METH_VARARGS,
   "V.GetVectors() -> vtkDataArray\nC++: vtkDataArray *GetVectors()\nV.GetVectors(string) -> vtkDataArray\nC++: vtkDataArray *GetVectors(const char *name)\n\nSet/Get the vector data.\n"},
  {"SetNormals", PyvtkDataSetAttributes_SetNormals, METH_VARARGS,
   "V.SetNormals(vtkDataArray) -> int\nC++: int SetNormals(vtkDataArray *da)\n\nSet/get the normal data.\n"},
  {"SetActiveNormals", PyvtkDataSetAttributes_SetActiveNormals, METH_VARARGS,
   "V.SetActiveNormals(string) -> int\nC++: int SetActiveNormals(const char *name)\n\nSet/get the normal data.\n"},
  {"GetNormals", PyvtkDataSetAttributes_GetNormals, METH_VARARGS,
   "V.GetNormals() -> vtkDataArray\nC++: vtkDataArray *GetNormals()\nV.GetNormals(string) -> vtkDataArray\nC++: vtkDataArray *GetNormals(const char *name)\n\nSet/get the normal data.\n"},
  {"SetTCoords", PyvtkDataSetAttributes_SetTCoords, METH_VARARGS,
   "V.SetTCoords(vtkDataArray) -> int\nC++: int SetTCoords(vtkDataArray *da)\n\nSet/Get the texture coordinate data.\n"},
  {"SetActiveTCoords", PyvtkDataSetAttributes_SetActiveTCoords, METH_VARARGS,
   "V.SetActiveTCoords(string) -> int\nC++: int SetActiveTCoords(const char *name)\n\nSet/Get the texture coordinate data.\n"},
  {"GetTCoords", PyvtkDataSetAttributes_GetTCoords, METH_VARARGS,
   "V.GetTCoords() -> vtkDataArray\nC++: vtkDataArray *GetTCoords()\nV.GetTCoords(string) -> vtkDataArray\nC++: vtkDataArray *GetTCoords(const char *name)\n\nSet/Get the texture coordinate data.\n"},
  {"SetTensors", PyvtkDataSetAttributes_SetTensors, METH_VARARGS,
   "V.SetTensors(vtkDataArray) -> int\nC++: int SetTensors(vtkDataArray *da)\n\nSet/Get the tensor data.\n"},
  {"SetActiveTensors", PyvtkDataSetAttributes_SetActiveTensors, METH_VARARGS,
   "V.SetActiveTensors(string) -> int\nC++: int SetActiveTensors(const char *name)\n\nSet/Get the tensor data.\n"},
  {"GetTensors", PyvtkDataSetAttributes_GetTensors, METH_VARARGS,
   "V.GetTensors() -> vtkDataArray\nC++: vtkDataArray *GetTensors()\nV.GetTensors(string) -> vtkDataArray\nC++: vtkDataArray *GetTensors(const char *name)\n\nSet/Get the tensor data.\n"},
  {"SetGlobalIds", PyvtkDataSetAttributes_SetGlobalIds, METH_VARARGS,
   "V.SetGlobalIds(vtkDataArray) -> int\nC++: int SetGlobalIds(vtkDataArray *da)\n\nSet/Get the global id data.\n"},
  {"SetActiveGlobalIds", PyvtkDataSetAttributes_SetActiveGlobalIds, METH_VARARGS,
   "V.SetActiveGlobalIds(string) -> int\nC++: int SetActiveGlobalIds(const char *name)\n\nSet/Get the global id data.\n"},
  {"GetGlobalIds", PyvtkDataSetAttributes_GetGlobalIds, METH_VARARGS,
   "V.GetGlobalIds() -> vtkDataArray\nC++: vtkDataArray *GetGlobalIds()\nV.GetGlobalIds(string) -> vtkDataArray\nC++: vtkDataArray *GetGlobalIds(const char *name)\n\nSet/Get the global id data.\n"},
  {"SetPedigreeIds", PyvtkDataSetAttributes_SetPedigreeIds, METH_VARARGS,
   "V.SetPedigreeIds(vtkAbstractArray) -> int\nC++: int SetPedigreeIds(vtkAbstractArray *da)\n\nSet/Get the pedigree id data.\n"},
  {"SetActivePedigreeIds", PyvtkDataSetAttributes_SetActivePedigreeIds, METH_VARARGS,
   "V.SetActivePedigreeIds(string) -> int\nC++: int SetActivePedigreeIds(const char *name)\n\nSet/Get the pedigree id data.\n"},
  {"GetPedigreeIds", PyvtkDataSetAttributes_GetPedigreeIds, METH_VARARGS,
   "V.GetPedigreeIds() -> vtkAbstractArray\nC++: vtkAbstractArray *GetPedigreeIds()\nV.GetPedigreeIds(string) -> vtkAbstractArray\nC++: vtkAbstractArray *GetPedigreeIds(const char *name)\n\nSet/Get the pedigree id data.\n"},
  {"SetActiveAttribute", PyvtkDataSetAttributes_SetActiveAttribute, METH_VARARGS,
   "V.SetActiveAttribute(string, int) -> int\nC++: int SetActiveAttribute(const char *name, int attributeType)\nV.SetActiveAttribute(int, int) -> int\nC++: int SetActiveAttribute(int index, int attributeType)\n\nMake the array with the given name the active attribute.\nAttribute types are: vtkDataSetAttributes::SCALARS = 0\nvtkDataSetAttributes::VECTORS = 1 vtkDataSetAttributes::NORMALS =\n2 vtkDataSetAttributes::TCOORDS = 3 vtkDataSetAttributes::TENSORS\n= 4 vtkDataSetAttributes::GLOBALIDS = 5\nvtkDataSetAttributes::PEDIGREEIDS = 6\nvtkDataSetAttributes::EDGEFLAG = 7 Returns the index of the array\nif successful, -1 if the array is not in the list of arrays.\n"},
  {"GetAttributeIndices", PyvtkDataSetAttributes_GetAttributeIndices, METH_VARARGS,
   "V.GetAttributeIndices([int, ...])\nC++: void GetAttributeIndices(int *indexArray)\n\nGet the field data array indices corresponding to scalars,\nvectors, tensors, etc.\n"},
  {"IsArrayAnAttribute", PyvtkDataSetAttributes_IsArrayAnAttribute, METH_VARARGS,
   "V.IsArrayAnAttribute(int) -> int\nC++: int IsArrayAnAttribute(int idx)\n\nDetermine whether a data array of index idx is considered a data\nset attribute (i.e., scalar, vector, tensor, etc). Return\nless-than zero if it is, otherwise an index 0<=idx<NUM_ATTRIBUTES\nto indicate which attribute.\n"},
  {"SetAttribute", PyvtkDataSetAttributes_SetAttribute, METH_VARARGS,
   "V.SetAttribute(vtkAbstractArray, int) -> int\nC++: int SetAttribute(vtkAbstractArray *aa, int attributeType)\n\nSet an array to use as the given attribute type (i.e.,\nvtkDataSetAttributes::SCALAR, vtkDataSetAttributes::VECTOR,\nvtkDataSetAttributes::TENSOR, etc.). If this attribute was\npreviously set to another array, that array is removed from the\nvtkDataSetAttributes object and the array aa is used as the\nattribute.\n\n* Returns the index of aa within the vtkDataSetAttributes object\n* (i.e., the index to pass to the method GetArray(int) to obtain\n* aa) if the attribute was set to aa successfully. If aa was\n* already set as the given attributeType, returns the index of\n* aa.\n\n* Returns -1 in the following cases:\n\n* - aa is nullptr (used to unset an attribute; not an error\n  indicator)\n* - aa is not a subclass of vtkDataArray, unless the\n  attributeType\n* is vtkDataSetAttributes::PEDIGREEIDS (error indicator)\n* - aa has a number of components incompatible with the attribute\ntype\n* (error indicator)\n"},
  {"GetAttribute", PyvtkDataSetAttributes_GetAttribute, METH_VARARGS,
   "V.GetAttribute(int) -> vtkDataArray\nC++: vtkDataArray *GetAttribute(int attributeType)\n\nReturn an attribute given the attribute type (see\nvtkDataSetAttributes::AttributeTypes). Some attributes (such as\nPEDIGREEIDS) may not be vtkDataArray subclass, so in that case\nuse GetAbstractAttribute().\n"},
  {"GetAbstractAttribute", PyvtkDataSetAttributes_GetAbstractAttribute, METH_VARARGS,
   "V.GetAbstractAttribute(int) -> vtkAbstractArray\nC++: vtkAbstractArray *GetAbstractAttribute(int attributeType)\n\nReturn an attribute given the attribute type (see\nvtkDataSetAttributes::AttributeTypes). This is the same as\nGetAttribute(), except that the returned array is a\nvtkAbstractArray instead of vtkDataArray. Some attributes (such\nas PEDIGREEIDS) may not be vtkDataArray subclass.\n"},
  {"RemoveArray", PyvtkDataSetAttributes_RemoveArray, METH_VARARGS,
   "V.RemoveArray(int)\nC++: void RemoveArray(int index) override;\nV.RemoveArray(string)\nC++: virtual void RemoveArray(const char *name)\n\nRemove an array (with the given name) from the list of arrays.\n"},
  {"GetAttributeTypeAsString", PyvtkDataSetAttributes_GetAttributeTypeAsString, METH_VARARGS,
   "V.GetAttributeTypeAsString(int) -> string\nC++: static const char *GetAttributeTypeAsString(\n    int attributeType)\n\nGiven an integer attribute type, this static method returns a\nstring type for the attribute (i.e. type = 0: returns \"Scalars\").\n"},
  {"GetLongAttributeTypeAsString", PyvtkDataSetAttributes_GetLongAttributeTypeAsString, METH_VARARGS,
   "V.GetLongAttributeTypeAsString(int) -> string\nC++: static const char *GetLongAttributeTypeAsString(\n    int attributeType)\n\nGiven an integer attribute type, this static method returns a\nstring type for the attribute (i.e. type = 0: returns \"Scalars\").\n"},
  {"SetCopyAttribute", PyvtkDataSetAttributes_SetCopyAttribute, METH_VARARGS,
   "V.SetCopyAttribute(int, int, int)\nC++: void SetCopyAttribute(int index, int value,\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\nTurn on/off the copying of attribute data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\n* During copying, interpolation and passdata, the following rules\nare\n* followed for each array:\n* 1. If the copy/interpolate/pass flag for an attribute is set\n  (on or off),\n* it is applied. This overrides rules 2 and 3.\n* 2. If the copy flag for an array is set (on or off), it is\n  applied\n* This overrides rule 3.\n* 3. If CopyAllOn is set, copy the array.\n* If CopyAllOff is set, do not copy the array\n\n* For interpolation, the flag values can be as follows:\n* 0: Do not interpolate.\n* 1: Weighted interpolation.\n* 2: Nearest neighbor interpolation.\n"},
  {"GetCopyAttribute", PyvtkDataSetAttributes_GetCopyAttribute, METH_VARARGS,
   "V.GetCopyAttribute(int, int) -> int\nC++: int GetCopyAttribute(int index, int ctype)\n\nGet the attribute copy flag for copy operation of attribute .\n"},
  {"SetCopyScalars", PyvtkDataSetAttributes_SetCopyScalars, METH_VARARGS,
   "V.SetCopyScalars(int, int)\nC++: void SetCopyScalars(vtkTypeBool i,\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\n@copydoc vtkDataSetAttributes::SetCopyAttribute()\n"},
  {"GetCopyScalars", PyvtkDataSetAttributes_GetCopyScalars, METH_VARARGS,
   "V.GetCopyScalars(int) -> int\nC++: vtkTypeBool GetCopyScalars(\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\n"},
  {"CopyScalarsOn", PyvtkDataSetAttributes_CopyScalarsOn, METH_VARARGS,
   "V.CopyScalarsOn()\nC++: virtual void CopyScalarsOn()\n\n"},
  {"CopyScalarsOff", PyvtkDataSetAttributes_CopyScalarsOff, METH_VARARGS,
   "V.CopyScalarsOff()\nC++: virtual void CopyScalarsOff()\n\n"},
  {"SetCopyVectors", PyvtkDataSetAttributes_SetCopyVectors, METH_VARARGS,
   "V.SetCopyVectors(int, int)\nC++: void SetCopyVectors(vtkTypeBool i,\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\n@copydoc vtkDataSetAttributes::SetCopyAttribute()\n"},
  {"GetCopyVectors", PyvtkDataSetAttributes_GetCopyVectors, METH_VARARGS,
   "V.GetCopyVectors(int) -> int\nC++: vtkTypeBool GetCopyVectors(\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\n"},
  {"CopyVectorsOn", PyvtkDataSetAttributes_CopyVectorsOn, METH_VARARGS,
   "V.CopyVectorsOn()\nC++: virtual void CopyVectorsOn()\n\n"},
  {"CopyVectorsOff", PyvtkDataSetAttributes_CopyVectorsOff, METH_VARARGS,
   "V.CopyVectorsOff()\nC++: virtual void CopyVectorsOff()\n\n"},
  {"SetCopyNormals", PyvtkDataSetAttributes_SetCopyNormals, METH_VARARGS,
   "V.SetCopyNormals(int, int)\nC++: void SetCopyNormals(vtkTypeBool i,\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\n@copydoc vtkDataSetAttributes::SetCopyAttribute()\n"},
  {"GetCopyNormals", PyvtkDataSetAttributes_GetCopyNormals, METH_VARARGS,
   "V.GetCopyNormals(int) -> int\nC++: vtkTypeBool GetCopyNormals(\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\n"},
  {"CopyNormalsOn", PyvtkDataSetAttributes_CopyNormalsOn, METH_VARARGS,
   "V.CopyNormalsOn()\nC++: virtual void CopyNormalsOn()\n\n"},
  {"CopyNormalsOff", PyvtkDataSetAttributes_CopyNormalsOff, METH_VARARGS,
   "V.CopyNormalsOff()\nC++: virtual void CopyNormalsOff()\n\n"},
  {"SetCopyTCoords", PyvtkDataSetAttributes_SetCopyTCoords, METH_VARARGS,
   "V.SetCopyTCoords(int, int)\nC++: void SetCopyTCoords(vtkTypeBool i,\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\n@copydoc vtkDataSetAttributes::SetCopyAttribute()\n"},
  {"GetCopyTCoords", PyvtkDataSetAttributes_GetCopyTCoords, METH_VARARGS,
   "V.GetCopyTCoords(int) -> int\nC++: vtkTypeBool GetCopyTCoords(\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\n"},
  {"CopyTCoordsOn", PyvtkDataSetAttributes_CopyTCoordsOn, METH_VARARGS,
   "V.CopyTCoordsOn()\nC++: virtual void CopyTCoordsOn()\n\n"},
  {"CopyTCoordsOff", PyvtkDataSetAttributes_CopyTCoordsOff, METH_VARARGS,
   "V.CopyTCoordsOff()\nC++: virtual void CopyTCoordsOff()\n\n"},
  {"SetCopyTensors", PyvtkDataSetAttributes_SetCopyTensors, METH_VARARGS,
   "V.SetCopyTensors(int, int)\nC++: void SetCopyTensors(vtkTypeBool i,\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\n@copydoc vtkDataSetAttributes::SetCopyAttribute()\n"},
  {"GetCopyTensors", PyvtkDataSetAttributes_GetCopyTensors, METH_VARARGS,
   "V.GetCopyTensors(int) -> int\nC++: vtkTypeBool GetCopyTensors(\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\n"},
  {"CopyTensorsOn", PyvtkDataSetAttributes_CopyTensorsOn, METH_VARARGS,
   "V.CopyTensorsOn()\nC++: virtual void CopyTensorsOn()\n\n"},
  {"CopyTensorsOff", PyvtkDataSetAttributes_CopyTensorsOff, METH_VARARGS,
   "V.CopyTensorsOff()\nC++: virtual void CopyTensorsOff()\n\n"},
  {"SetCopyGlobalIds", PyvtkDataSetAttributes_SetCopyGlobalIds, METH_VARARGS,
   "V.SetCopyGlobalIds(int, int)\nC++: void SetCopyGlobalIds(vtkTypeBool i,\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\n@copydoc vtkDataSetAttributes::SetCopyAttribute()\n"},
  {"GetCopyGlobalIds", PyvtkDataSetAttributes_GetCopyGlobalIds, METH_VARARGS,
   "V.GetCopyGlobalIds(int) -> int\nC++: vtkTypeBool GetCopyGlobalIds(\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\n"},
  {"CopyGlobalIdsOn", PyvtkDataSetAttributes_CopyGlobalIdsOn, METH_VARARGS,
   "V.CopyGlobalIdsOn()\nC++: virtual void CopyGlobalIdsOn()\n\n"},
  {"CopyGlobalIdsOff", PyvtkDataSetAttributes_CopyGlobalIdsOff, METH_VARARGS,
   "V.CopyGlobalIdsOff()\nC++: virtual void CopyGlobalIdsOff()\n\n"},
  {"SetCopyPedigreeIds", PyvtkDataSetAttributes_SetCopyPedigreeIds, METH_VARARGS,
   "V.SetCopyPedigreeIds(int, int)\nC++: void SetCopyPedigreeIds(vtkTypeBool i,\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\n@copydoc vtkDataSetAttributes::SetCopyAttribute()\n"},
  {"GetCopyPedigreeIds", PyvtkDataSetAttributes_GetCopyPedigreeIds, METH_VARARGS,
   "V.GetCopyPedigreeIds(int) -> int\nC++: vtkTypeBool GetCopyPedigreeIds(\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\n"},
  {"CopyPedigreeIdsOn", PyvtkDataSetAttributes_CopyPedigreeIdsOn, METH_VARARGS,
   "V.CopyPedigreeIdsOn()\nC++: virtual void CopyPedigreeIdsOn()\n\n"},
  {"CopyPedigreeIdsOff", PyvtkDataSetAttributes_CopyPedigreeIdsOff, METH_VARARGS,
   "V.CopyPedigreeIdsOff()\nC++: virtual void CopyPedigreeIdsOff()\n\n"},
  {"CopyAllOn", PyvtkDataSetAttributes_CopyAllOn, METH_VARARGS,
   "V.CopyAllOn(int)\nC++: void CopyAllOn(int ctype=vtkDataSetAttributes::ALLCOPY)\n    override;\n\n@copydoc vtkDataSetAttributes::SetCopyAttribute()\n"},
  {"CopyAllOff", PyvtkDataSetAttributes_CopyAllOff, METH_VARARGS,
   "V.CopyAllOff(int)\nC++: void CopyAllOff(int ctype=vtkDataSetAttributes::ALLCOPY)\n    override;\n\n@copydoc vtkDataSetAttributes::SetCopyAttribute()\n"},
  {"PassData", PyvtkDataSetAttributes_PassData, METH_VARARGS,
   "V.PassData(vtkFieldData)\nC++: void PassData(vtkFieldData *fd) override;\n\nPass entire arrays of input data through to output. Obey the\n\"copy\" flags. When passing a field,  the following copying rules\nare followed: 1) Check if a field is an attribute, if yes and if\nthere is a PASSDATA copy flag for that attribute (on or off),\nobey the flag for that attribute, ignore (2) and (3), 2) if there\nis a copy field for that field (on or off), obey the flag, ignore\n(3) 3) obey CopyAllOn/Off\n"},
  {"CopyAllocate", PyvtkDataSetAttributes_CopyAllocate, METH_VARARGS,
   "V.CopyAllocate(vtkDataSetAttributes, int, int)\nC++: void CopyAllocate(vtkDataSetAttributes *pd, vtkIdType sze=0,\n    vtkIdType ext=1000)\nV.CopyAllocate(vtkDataSetAttributes, int, int, int)\nC++: void CopyAllocate(vtkDataSetAttributes *pd, vtkIdType sze,\n    vtkIdType ext, int shallowCopyArrays)\nV.CopyAllocate(vtkDataSetAttributesFieldList, int, int)\nC++: void CopyAllocate(vtkDataSetAttributes::FieldList &list,\n    vtkIdType sze=0, vtkIdType ext=1000)\n\nAllocates point data for point-by-point (or cell-by-cell) copy\noperation. If sze=0, then use the input DataSetAttributes to\ncreate (i.e., find initial size of) new objects; otherwise use\nthe sze variable. Note that pd HAS to be the vtkDataSetAttributes\nobject which will later be used with CopyData. If this is not the\ncase, consider using the alternative forms of CopyAllocate and\nCopyData. ext is no longer used. If shallowCopyArrays is true,\ninput arrays are copied to the output instead of new ones being\nallocated.\n"},
  {"SetupForCopy", PyvtkDataSetAttributes_SetupForCopy, METH_VARARGS,
   "V.SetupForCopy(vtkDataSetAttributes)\nC++: void SetupForCopy(vtkDataSetAttributes *pd)\n\nCreate a mapping between the input attributes and this object so\nthat methods like CopyData() and CopyStructuredData() can be\ncalled. This method assumes that this object has the same arrays\nas the input and that they are ordered the same way (same array\nindices).\n"},
  {"CopyStructuredData", PyvtkDataSetAttributes_CopyStructuredData, METH_VARARGS,
   "V.CopyStructuredData(vtkDataSetAttributes, (int, ...), (int, ...),\n     bool)\nC++: void CopyStructuredData(vtkDataSetAttributes *inDsa,\n    const int *inExt, const int *outExt, bool setSize=true)\n\nThis method is used to copy data arrays in images. You should\ncall CopyAllocate or SetupForCopy before calling this method. If\nsetSize is true, this method will set the size of the output\narrays according to the output extent. This is required when\nCopyAllocate() was used to setup output arrays.\n"},
  {"CopyData", PyvtkDataSetAttributes_CopyData, METH_VARARGS,
   "V.CopyData(vtkDataSetAttributes, int, int)\nC++: void CopyData(vtkDataSetAttributes *fromPd, vtkIdType fromId,\n     vtkIdType toId)\nV.CopyData(vtkDataSetAttributes, vtkIdList, vtkIdList)\nC++: void CopyData(vtkDataSetAttributes *fromPd,\n    vtkIdList *fromIds, vtkIdList *toIds)\nV.CopyData(vtkDataSetAttributes, int, int, int)\nC++: void CopyData(vtkDataSetAttributes *fromPd,\n    vtkIdType dstStart, vtkIdType n, vtkIdType srcStart)\nV.CopyData(vtkDataSetAttributesFieldList, vtkDataSetAttributes,\n    int, int, int)\nC++: void CopyData(vtkDataSetAttributes::FieldList &list,\n    vtkDataSetAttributes *dsa, int idx, vtkIdType fromId,\n    vtkIdType toId)\nV.CopyData(vtkDataSetAttributesFieldList, vtkDataSetAttributes,\n    int, int, int, int)\nC++: void CopyData(vtkDataSetAttributes::FieldList &list,\n    vtkDataSetAttributes *dsa, int idx, vtkIdType dstStart,\n    vtkIdType n, vtkIdType srcStart)\n\nCopy the attribute data from one id to another. Make sure\nCopyAllocate() has been invoked before using this method. When\ncopying a field, the following copying rules are followed: 1)\nCheck if a field is an attribute, if yes and if there is a\nCOPYTUPLE copy flag for that attribute (on or off), obey the flag\nfor that attribute, ignore (2) and (3), 2) if there is a copy\nfield for that field (on or off), obey the flag, ignore (3) 3)\nobey CopyAllOn/Off\n"},
  {"CopyTuple", PyvtkDataSetAttributes_CopyTuple, METH_VARARGS,
   "V.CopyTuple(vtkAbstractArray, vtkAbstractArray, int, int)\nC++: void CopyTuple(vtkAbstractArray *fromData,\n    vtkAbstractArray *toData, vtkIdType fromId, vtkIdType toId)\n\nCopy a tuple (or set of tuples) of data from one data array to\nanother. This method assumes that the fromData and toData objects\nare of the same type, and have the same number of components.\nThis is true if you invoke CopyAllocate() or\nInterpolateAllocate().\n"},
  {"CopyTuples", PyvtkDataSetAttributes_CopyTuples, METH_VARARGS,
   "V.CopyTuples(vtkAbstractArray, vtkAbstractArray, vtkIdList,\n    vtkIdList)\nC++: void CopyTuples(vtkAbstractArray *fromData,\n    vtkAbstractArray *toData, vtkIdList *fromIds,\n    vtkIdList *toIds)\nV.CopyTuples(vtkAbstractArray, vtkAbstractArray, int, int, int)\nC++: void CopyTuples(vtkAbstractArray *fromData,\n    vtkAbstractArray *toData, vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart)\n\nCopy a tuple (or set of tuples) of data from one data array to\nanother. This method assumes that the fromData and toData objects\nare of the same type, and have the same number of components.\nThis is true if you invoke CopyAllocate() or\nInterpolateAllocate().\n"},
  {"InterpolateAllocate", PyvtkDataSetAttributes_InterpolateAllocate, METH_VARARGS,
   "V.InterpolateAllocate(vtkDataSetAttributes, int, int)\nC++: void InterpolateAllocate(vtkDataSetAttributes *pd,\n    vtkIdType sze=0, vtkIdType ext=1000)\nV.InterpolateAllocate(vtkDataSetAttributes, int, int, int)\nC++: void InterpolateAllocate(vtkDataSetAttributes *pd,\n    vtkIdType sze, vtkIdType ext, int shallowCopyArrays)\nV.InterpolateAllocate(vtkDataSetAttributesFieldList, int, int)\nC++: void InterpolateAllocate(\n    vtkDataSetAttributes::FieldList &list, vtkIdType sze=0,\n    vtkIdType ext=1000)\n\nInitialize point interpolation method. Note that pd HAS to be the\nvtkDataSetAttributes object which will later be used with\nInterpolatePoint or InterpolateEdge. ext is no longer used. If\nshallowCopyArrays is true, input arrays are copied to the output\ninstead of new ones being allocated.\n"},
  {"InterpolatePoint", PyvtkDataSetAttributes_InterpolatePoint, METH_VARARGS,
   "V.InterpolatePoint(vtkDataSetAttributes, int, vtkIdList, [float,\n    ...])\nC++: void InterpolatePoint(vtkDataSetAttributes *fromPd,\n    vtkIdType toId, vtkIdList *ids, double *weights)\nV.InterpolatePoint(vtkDataSetAttributesFieldList,\n    vtkDataSetAttributes, int, int, vtkIdList, [float, ...])\nC++: void InterpolatePoint(vtkDataSetAttributes::FieldList &list,\n    vtkDataSetAttributes *fromPd, int idx, vtkIdType toId,\n    vtkIdList *ids, double *weights)\n\nInterpolate data set attributes from other data set attributes\ngiven cell or point ids and associated interpolation weights. If\nthe INTERPOLATION copy flag is set to 0 for an array,\ninterpolation is prevented. If the flag is set to 1, weighted\ninterpolation occurs. If the flag is set to 2, nearest neighbor\ninterpolation is used.\n"},
  {"InterpolateEdge", PyvtkDataSetAttributes_InterpolateEdge, METH_VARARGS,
   "V.InterpolateEdge(vtkDataSetAttributes, int, int, int, float)\nC++: void InterpolateEdge(vtkDataSetAttributes *fromPd,\n    vtkIdType toId, vtkIdType p1, vtkIdType p2, double t)\n\nInterpolate data from the two points p1,p2 (forming an edge) and\nan interpolation factor, t, along the edge. The weight ranges\nfrom (0,1), with t=0 located at p1. Make sure that the method\nInterpolateAllocate() has been invoked before using this method.\nIf the INTERPOLATION copy flag is set to 0 for an array,\ninterpolation is prevented. If the flag is set to 1, weighted\ninterpolation occurs. If the flag is set to 2, nearest neighbor\ninterpolation is used.\n"},
  {"InterpolateTime", PyvtkDataSetAttributes_InterpolateTime, METH_VARARGS,
   "V.InterpolateTime(vtkDataSetAttributes, vtkDataSetAttributes, int,\n     float)\nC++: void InterpolateTime(vtkDataSetAttributes *from1,\n    vtkDataSetAttributes *from2, vtkIdType id, double t)\n\nInterpolate data from the same id (point or cell) at different\npoints in time (parameter t). Two input data set attributes\nobjects are input. The parameter t lies between (0<=t<=1).\nIMPORTANT: it is assumed that the number of attributes and number\nof components is the same for both from1 and from2, and the type\nof data for from1 and from2 are the same. Make sure that the\nmethod InterpolateAllocate() has been invoked before using this\nmethod. If the INTERPOLATION copy flag is set to 0 for an array,\ninterpolation is prevented. If the flag is set to 1, weighted\ninterpolation occurs. If the flag is set to 2, nearest neighbor\ninterpolation is used.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDataSetAttributes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkDataSetAttributes", // tp_name
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
  PyvtkDataSetAttributes_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataSetAttributes_StaticNew()
{
  return vtkDataSetAttributes::New();
}

PyObject *PyvtkDataSetAttributes_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDataSetAttributes_Type, PyvtkDataSetAttributes_Methods,
    "vtkDataSetAttributes",
 &PyvtkDataSetAttributes_StaticNew);

  PyTypeObject *pytype = &PyvtkDataSetAttributes_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkFieldData_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkDataSetAttributes_AttributeTypes_Type);
  PyvtkDataSetAttributes_AttributeTypes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkDataSetAttributes_AttributeTypes_Type);

  o = (PyObject *)&PyvtkDataSetAttributes_AttributeTypes_Type;
  if (PyDict_SetItemString(d, "AttributeTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkDataSetAttributes_AttributeLimitTypes_Type);
  PyvtkDataSetAttributes_AttributeLimitTypes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkDataSetAttributes_AttributeLimitTypes_Type);

  o = (PyObject *)&PyvtkDataSetAttributes_AttributeLimitTypes_Type;
  if (PyDict_SetItemString(d, "AttributeLimitTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkDataSetAttributes_CellGhostTypes_Type);
  PyvtkDataSetAttributes_CellGhostTypes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkDataSetAttributes_CellGhostTypes_Type);

  o = (PyObject *)&PyvtkDataSetAttributes_CellGhostTypes_Type;
  if (PyDict_SetItemString(d, "CellGhostTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkDataSetAttributes_PointGhostTypes_Type);
  PyvtkDataSetAttributes_PointGhostTypes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkDataSetAttributes_PointGhostTypes_Type);

  o = (PyObject *)&PyvtkDataSetAttributes_PointGhostTypes_Type;
  if (PyDict_SetItemString(d, "PointGhostTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkDataSetAttributes_AttributeCopyOperations_Type);
  PyvtkDataSetAttributes_AttributeCopyOperations_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkDataSetAttributes_AttributeCopyOperations_Type);

  o = (PyObject *)&PyvtkDataSetAttributes_AttributeCopyOperations_Type;
  if (PyDict_SetItemString(d, "AttributeCopyOperations", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 9; c++)
  {
    typedef vtkDataSetAttributes::AttributeTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[9] = {
        { "SCALARS", vtkDataSetAttributes::SCALARS },
        { "VECTORS", vtkDataSetAttributes::VECTORS },
        { "NORMALS", vtkDataSetAttributes::NORMALS },
        { "TCOORDS", vtkDataSetAttributes::TCOORDS },
        { "TENSORS", vtkDataSetAttributes::TENSORS },
        { "GLOBALIDS", vtkDataSetAttributes::GLOBALIDS },
        { "PEDIGREEIDS", vtkDataSetAttributes::PEDIGREEIDS },
        { "EDGEFLAG", vtkDataSetAttributes::EDGEFLAG },
        { "NUM_ATTRIBUTES", vtkDataSetAttributes::NUM_ATTRIBUTES },
      };

    o = PyvtkDataSetAttributes_AttributeTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkDataSetAttributes::AttributeLimitTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "MAX", vtkDataSetAttributes::MAX },
        { "EXACT", vtkDataSetAttributes::EXACT },
        { "NOLIMIT", vtkDataSetAttributes::NOLIMIT },
      };

    o = PyvtkDataSetAttributes_AttributeLimitTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkDataSetAttributes::CellGhostTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "DUPLICATECELL", vtkDataSetAttributes::DUPLICATECELL },
        { "HIGHCONNECTIVITYCELL", vtkDataSetAttributes::HIGHCONNECTIVITYCELL },
        { "LOWCONNECTIVITYCELL", vtkDataSetAttributes::LOWCONNECTIVITYCELL },
        { "REFINEDCELL", vtkDataSetAttributes::REFINEDCELL },
        { "EXTERIORCELL", vtkDataSetAttributes::EXTERIORCELL },
        { "HIDDENCELL", vtkDataSetAttributes::HIDDENCELL },
      };

    o = PyvtkDataSetAttributes_CellGhostTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkDataSetAttributes::PointGhostTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "DUPLICATEPOINT", vtkDataSetAttributes::DUPLICATEPOINT },
        { "HIDDENPOINT", vtkDataSetAttributes::HIDDENPOINT },
      };

    o = PyvtkDataSetAttributes_PointGhostTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkDataSetAttributes::AttributeCopyOperations cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "COPYTUPLE", vtkDataSetAttributes::COPYTUPLE },
        { "INTERPOLATE", vtkDataSetAttributes::INTERPOLATE },
        { "PASSDATA", vtkDataSetAttributes::PASSDATA },
        { "ALLCOPY", vtkDataSetAttributes::ALLCOPY },
      };

    o = PyvtkDataSetAttributes_AttributeCopyOperations_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataSetAttributes(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataSetAttributes_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataSetAttributes", o) != 0)
  {
    Py_DECREF(o);
  }

}

