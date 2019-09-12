// python wrapper for vtkGlyph3DMapper
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
#include "vtkGlyph3DMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGlyph3DMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGlyph3DMapper_ClassNew(); }

#ifndef DECLARED_PyvtkMapper_ClassNew
extern "C" { PyObject *PyvtkMapper_ClassNew(); }
#define DECLARED_PyvtkMapper_ClassNew
#endif

static const char *PyvtkGlyph3DMapper_Doc =
  "vtkGlyph3DMapper - vtkGlyph3D on the GPU.\n\n"
  "Superclass: vtkMapper\n\n"
  "Do the same job than vtkGlyph3D but on the GPU. For this reason, it\n"
  "is a mapper not a vtkPolyDataAlgorithm. Also, some methods of\n"
  "vtkGlyph3D don't make sense in vtkGlyph3DMapper: GeneratePointIds,\n"
  "old-style SetSource, PointIdsName, IsPointVisible.\n\n"
  "@sa\n"
  "vtkGlyph3D\n\n";

static PyTypeObject PyvtkGlyph3DMapper_ArrayIndexes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkGlyph3DMapper.ArrayIndexes", // tp_name
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

PyObject *PyvtkGlyph3DMapper_ArrayIndexes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkGlyph3DMapper_ArrayIndexes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGlyph3DMapper_ArrayIndexes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkGlyph3DMapper_ScaleModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkGlyph3DMapper.ScaleModes", // tp_name
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

PyObject *PyvtkGlyph3DMapper_ScaleModes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkGlyph3DMapper_ScaleModes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGlyph3DMapper_ScaleModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkGlyph3DMapper_OrientationModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkGlyph3DMapper.OrientationModes", // tp_name
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

PyObject *PyvtkGlyph3DMapper_OrientationModes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkGlyph3DMapper_OrientationModes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGlyph3DMapper_OrientationModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkGlyph3DMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGlyph3DMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGlyph3DMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGlyph3DMapper *tempr = vtkGlyph3DMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGlyph3DMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGlyph3DMapper::NewInstance());

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
PyvtkGlyph3DMapper_SetSourceConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSourceConnection(temp0, temp1);
    }
    else
    {
      op->vtkGlyph3DMapper::SetSourceConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetSourceConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSourceConnection(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetSourceConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkGlyph3DMapper_SetSourceConnection_s1(self, args);
    case 1:
      return PyvtkGlyph3DMapper_SetSourceConnection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSourceConnection");
  return nullptr;
}



static PyObject *
PyvtkGlyph3DMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetSourceData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0, temp1);
    }
    else
    {
      op->vtkGlyph3DMapper::SetSourceData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetSourceData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetSourceData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkGlyph3DMapper_SetSourceData_s1(self, args);
    case 1:
      return PyvtkGlyph3DMapper_SetSourceData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSourceData");
  return nullptr;
}



static PyObject *
PyvtkGlyph3DMapper_SetSourceTableTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceTableTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  vtkDataObjectTree *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObjectTree"))
  {
    if (ap.IsBound())
    {
      op->SetSourceTableTree(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetSourceTableTree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSource(temp0) :
      op->vtkGlyph3DMapper::GetSource(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetSourceTableTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceTableTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObjectTree *tempr = (ap.IsBound() ?
      op->GetSourceTableTree() :
      op->vtkGlyph3DMapper::GetSourceTableTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaling(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetScaling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_ScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingOn();
    }
    else
    {
      op->vtkGlyph3DMapper::ScalingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_ScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingOff();
    }
    else
    {
      op->vtkGlyph3DMapper::ScalingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScaling() :
      op->vtkGlyph3DMapper::GetScaling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleMode(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetScaleMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScaleMode() :
      op->vtkGlyph3DMapper::GetScaleMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleFactor(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkGlyph3DMapper::GetScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetScaleModeToScaleByMagnitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToScaleByMagnitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScaleModeToScaleByMagnitude();
    }
    else
    {
      op->vtkGlyph3DMapper::SetScaleModeToScaleByMagnitude();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetScaleModeToScaleByVectorComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToScaleByVectorComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScaleModeToScaleByVectorComponents();
    }
    else
    {
      op->vtkGlyph3DMapper::SetScaleModeToScaleByVectorComponents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetScaleModeToNoDataScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToNoDataScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScaleModeToNoDataScaling();
    }
    else
    {
      op->vtkGlyph3DMapper::SetScaleModeToNoDataScaling();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetScaleModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScaleModeAsString() :
      op->vtkGlyph3DMapper::GetScaleModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRange(temp0, temp1);
    }
    else
    {
      op->vtkGlyph3DMapper::SetRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetRange(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkGlyph3DMapper_SetRange_s1(self, args);
    case 1:
      return PyvtkGlyph3DMapper_SetRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return nullptr;
}



static PyObject *
PyvtkGlyph3DMapper_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRange() :
      op->vtkGlyph3DMapper::GetRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetOrient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrient(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetOrient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetOrient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOrient() :
      op->vtkGlyph3DMapper::GetOrient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_OrientOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrientOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OrientOn();
    }
    else
    {
      op->vtkGlyph3DMapper::OrientOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_OrientOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrientOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OrientOff();
    }
    else
    {
      op->vtkGlyph3DMapper::OrientOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetOrientationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationMode(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetOrientationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetOrientationModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientationModeMinValue() :
      op->vtkGlyph3DMapper::GetOrientationModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetOrientationModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientationModeMaxValue() :
      op->vtkGlyph3DMapper::GetOrientationModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetOrientationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientationMode() :
      op->vtkGlyph3DMapper::GetOrientationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetOrientationModeToDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationModeToDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationModeToDirection();
    }
    else
    {
      op->vtkGlyph3DMapper::SetOrientationModeToDirection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetOrientationModeToRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationModeToRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationModeToRotation();
    }
    else
    {
      op->vtkGlyph3DMapper::SetOrientationModeToRotation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetOrientationModeToQuaternion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationModeToQuaternion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationModeToQuaternion();
    }
    else
    {
      op->vtkGlyph3DMapper::SetOrientationModeToQuaternion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetOrientationModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOrientationModeAsString() :
      op->vtkGlyph3DMapper::GetOrientationModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClamping(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetClamping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetClamping() :
      op->vtkGlyph3DMapper::GetClamping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_ClampingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampingOn();
    }
    else
    {
      op->vtkGlyph3DMapper::ClampingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_ClampingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampingOff();
    }
    else
    {
      op->vtkGlyph3DMapper::ClampingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetSourceIndexing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceIndexing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSourceIndexing(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetSourceIndexing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetSourceIndexing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceIndexing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSourceIndexing() :
      op->vtkGlyph3DMapper::GetSourceIndexing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SourceIndexingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SourceIndexingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SourceIndexingOn();
    }
    else
    {
      op->vtkGlyph3DMapper::SourceIndexingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SourceIndexingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SourceIndexingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SourceIndexingOff();
    }
    else
    {
      op->vtkGlyph3DMapper::SourceIndexingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetUseSourceTableTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseSourceTableTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseSourceTableTree(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetUseSourceTableTree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetUseSourceTableTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseSourceTableTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseSourceTableTree() :
      op->vtkGlyph3DMapper::GetUseSourceTableTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_UseSourceTableTreeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSourceTableTreeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseSourceTableTreeOn();
    }
    else
    {
      op->vtkGlyph3DMapper::UseSourceTableTreeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_UseSourceTableTreeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSourceTableTreeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseSourceTableTreeOff();
    }
    else
    {
      op->vtkGlyph3DMapper::UseSourceTableTreeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetUseSelectionIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseSelectionIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseSelectionIds(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetUseSelectionIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_UseSelectionIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSelectionIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseSelectionIdsOn();
    }
    else
    {
      op->vtkGlyph3DMapper::UseSelectionIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_UseSelectionIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSelectionIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseSelectionIdsOff();
    }
    else
    {
      op->vtkGlyph3DMapper::UseSelectionIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetUseSelectionIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseSelectionIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseSelectionIds() :
      op->vtkGlyph3DMapper::GetUseSelectionIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkGlyph3DMapper::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::GetBounds(temp0);
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
PyvtkGlyph3DMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkGlyph3DMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkGlyph3DMapper_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkGlyph3DMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkGlyph3DMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetMasking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMasking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMasking(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetMasking(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetMasking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMasking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMasking() :
      op->vtkGlyph3DMapper::GetMasking());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_MaskingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaskingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MaskingOn();
    }
    else
    {
      op->vtkGlyph3DMapper::MaskingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_MaskingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaskingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MaskingOff();
    }
    else
    {
      op->vtkGlyph3DMapper::MaskingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetMaskArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskArray(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetMaskArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetMaskArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskArray(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetMaskArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGlyph3DMapper_SetMaskArray_Methods[] = {
  {nullptr, PyvtkGlyph3DMapper_SetMaskArray_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkGlyph3DMapper_SetMaskArray_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGlyph3DMapper_SetMaskArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGlyph3DMapper_SetMaskArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaskArray");
  return nullptr;
}



static PyObject *
PyvtkGlyph3DMapper_SetOrientationArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationArray(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetOrientationArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetOrientationArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationArray(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetOrientationArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGlyph3DMapper_SetOrientationArray_Methods[] = {
  {nullptr, PyvtkGlyph3DMapper_SetOrientationArray_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkGlyph3DMapper_SetOrientationArray_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGlyph3DMapper_SetOrientationArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGlyph3DMapper_SetOrientationArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrientationArray");
  return nullptr;
}



static PyObject *
PyvtkGlyph3DMapper_SetScaleArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleArray(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetScaleArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetScaleArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleArray(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetScaleArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGlyph3DMapper_SetScaleArray_Methods[] = {
  {nullptr, PyvtkGlyph3DMapper_SetScaleArray_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkGlyph3DMapper_SetScaleArray_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGlyph3DMapper_SetScaleArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGlyph3DMapper_SetScaleArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScaleArray");
  return nullptr;
}



static PyObject *
PyvtkGlyph3DMapper_SetSourceIndexArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceIndexArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSourceIndexArray(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetSourceIndexArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetSourceIndexArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceIndexArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSourceIndexArray(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetSourceIndexArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGlyph3DMapper_SetSourceIndexArray_Methods[] = {
  {nullptr, PyvtkGlyph3DMapper_SetSourceIndexArray_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkGlyph3DMapper_SetSourceIndexArray_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGlyph3DMapper_SetSourceIndexArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGlyph3DMapper_SetSourceIndexArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSourceIndexArray");
  return nullptr;
}



static PyObject *
PyvtkGlyph3DMapper_SetSelectionIdArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionIdArray(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetSelectionIdArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetSelectionIdArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionIdArray(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetSelectionIdArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGlyph3DMapper_SetSelectionIdArray_Methods[] = {
  {nullptr, PyvtkGlyph3DMapper_SetSelectionIdArray_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkGlyph3DMapper_SetSelectionIdArray_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGlyph3DMapper_SetSelectionIdArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGlyph3DMapper_SetSelectionIdArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSelectionIdArray");
  return nullptr;
}



static PyObject *
PyvtkGlyph3DMapper_SetSelectionColorId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionColorId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionColorId(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetSelectionColorId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetSelectionColorId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionColorId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetSelectionColorId() :
      op->vtkGlyph3DMapper::GetSelectionColorId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetBlockAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  vtkCompositeDataDisplayAttributes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataDisplayAttributes"))
  {
    if (ap.IsBound())
    {
      op->SetBlockAttributes(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetBlockAttributes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetBlockAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataDisplayAttributes *tempr = (ap.IsBound() ?
      op->GetBlockAttributes() :
      op->vtkGlyph3DMapper::GetBlockAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetCullingAndLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCullingAndLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCullingAndLOD(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetCullingAndLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetCullingAndLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCullingAndLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCullingAndLOD() :
      op->vtkGlyph3DMapper::GetCullingAndLOD());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetMaxNumberOfLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaxNumberOfLOD() :
      op->vtkGlyph3DMapper::GetMaxNumberOfLOD());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetNumberOfLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLOD(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetNumberOfLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetLODDistanceAndTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODDistanceAndTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  vtkIdType temp0;
  float temp1;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetLODDistanceAndTargetReduction(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGlyph3DMapper::SetLODDistanceAndTargetReduction(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetLODColoring(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODColoring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLODColoring(temp0);
    }
    else
    {
      op->vtkGlyph3DMapper::SetLODColoring(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetLODColoring(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODColoring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLODColoring() :
      op->vtkGlyph3DMapper::GetLODColoring());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetSupportsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSupportsSelection() :
      op->vtkGlyph3DMapper::GetSupportsSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGlyph3DMapper_Methods[] = {
  {"IsTypeOf", PyvtkGlyph3DMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGlyph3DMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGlyph3DMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGlyph3DMapper\nC++: static vtkGlyph3DMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGlyph3DMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGlyph3DMapper\nC++: vtkGlyph3DMapper *NewInstance()\n\n"},
  {"SetSourceConnection", PyvtkGlyph3DMapper_SetSourceConnection, METH_VARARGS,
   "V.SetSourceConnection(int, vtkAlgorithmOutput)\nC++: void SetSourceConnection(int idx,\n    vtkAlgorithmOutput *algOutput)\nV.SetSourceConnection(vtkAlgorithmOutput)\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify a source object at a specified table location. New style.\nSource connection is stored in port 1. This method is equivalent\nto SetInputConnection(1, id, outputPort).\n"},
  {"SetInputData", PyvtkGlyph3DMapper_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkDataObject)\nC++: void SetInputData(vtkDataObject *)\n\nAssign a data object as input. Note that this method does not\nestablish a pipeline connection. Use SetInputConnection() to\nsetup a pipeline connection.\n"},
  {"SetSourceData", PyvtkGlyph3DMapper_SetSourceData, METH_VARARGS,
   "V.SetSourceData(int, vtkPolyData)\nC++: void SetSourceData(int idx, vtkPolyData *pd)\nV.SetSourceData(vtkPolyData)\nC++: void SetSourceData(vtkPolyData *pd)\n\nSpecify a source object at a specified table location.\n"},
  {"SetSourceTableTree", PyvtkGlyph3DMapper_SetSourceTableTree, METH_VARARGS,
   "V.SetSourceTableTree(vtkDataObjectTree)\nC++: void SetSourceTableTree(vtkDataObjectTree *tree)\n\nSpecify a data object tree that will be used for the source\ntable. Requires UseSourceTableTree to be true. The top-level\nnodes of the tree are mapped to the source data inputs.\n\nMust only contain vtkPolyData instances on the OpenGL backend.\nMay contain vtkCompositeDataSets with vtkPolyData leaves on\nOpenGL2.\n"},
  {"GetSource", PyvtkGlyph3DMapper_GetSource, METH_VARARGS,
   "V.GetSource(int) -> vtkPolyData\nC++: vtkPolyData *GetSource(int idx=0)\n\nGet a pointer to a source object at a specified table location.\n"},
  {"GetSourceTableTree", PyvtkGlyph3DMapper_GetSourceTableTree, METH_VARARGS,
   "V.GetSourceTableTree() -> vtkDataObjectTree\nC++: vtkDataObjectTree *GetSourceTableTree()\n\nConvenience method to get the source table tree, if it exists.\n"},
  {"SetScaling", PyvtkGlyph3DMapper_SetScaling, METH_VARARGS,
   "V.SetScaling(bool)\nC++: virtual void SetScaling(bool _arg)\n\nTurn on/off scaling of source geometry. When turned on,\nScaleFactor controls the scale applied. To scale with some data\narray, ScaleMode should be set accordingly.\n"},
  {"ScalingOn", PyvtkGlyph3DMapper_ScalingOn, METH_VARARGS,
   "V.ScalingOn()\nC++: virtual void ScalingOn()\n\nTurn on/off scaling of source geometry. When turned on,\nScaleFactor controls the scale applied. To scale with some data\narray, ScaleMode should be set accordingly.\n"},
  {"ScalingOff", PyvtkGlyph3DMapper_ScalingOff, METH_VARARGS,
   "V.ScalingOff()\nC++: virtual void ScalingOff()\n\nTurn on/off scaling of source geometry. When turned on,\nScaleFactor controls the scale applied. To scale with some data\narray, ScaleMode should be set accordingly.\n"},
  {"GetScaling", PyvtkGlyph3DMapper_GetScaling, METH_VARARGS,
   "V.GetScaling() -> bool\nC++: virtual bool GetScaling()\n\nTurn on/off scaling of source geometry. When turned on,\nScaleFactor controls the scale applied. To scale with some data\narray, ScaleMode should be set accordingly.\n"},
  {"SetScaleMode", PyvtkGlyph3DMapper_SetScaleMode, METH_VARARGS,
   "V.SetScaleMode(int)\nC++: virtual void SetScaleMode(int _arg)\n\nEither scale by individual components (SCALE_BY_COMPONENTS) or\nmagnitude (SCALE_BY_MAGNITUDE) of the chosen array to SCALE with\nor disable scaling using data array all together\n(NO_DATA_SCALING). Default is NO_DATA_SCALING.\n"},
  {"GetScaleMode", PyvtkGlyph3DMapper_GetScaleMode, METH_VARARGS,
   "V.GetScaleMode() -> int\nC++: virtual int GetScaleMode()\n\nEither scale by individual components (SCALE_BY_COMPONENTS) or\nmagnitude (SCALE_BY_MAGNITUDE) of the chosen array to SCALE with\nor disable scaling using data array all together\n(NO_DATA_SCALING). Default is NO_DATA_SCALING.\n"},
  {"SetScaleFactor", PyvtkGlyph3DMapper_SetScaleFactor, METH_VARARGS,
   "V.SetScaleFactor(float)\nC++: virtual void SetScaleFactor(double _arg)\n\nSpecify scale factor to scale object by. This is used only when\nScaling is On.\n"},
  {"GetScaleFactor", PyvtkGlyph3DMapper_GetScaleFactor, METH_VARARGS,
   "V.GetScaleFactor() -> float\nC++: virtual double GetScaleFactor()\n\nSpecify scale factor to scale object by. This is used only when\nScaling is On.\n"},
  {"SetScaleModeToScaleByMagnitude", PyvtkGlyph3DMapper_SetScaleModeToScaleByMagnitude, METH_VARARGS,
   "V.SetScaleModeToScaleByMagnitude()\nC++: void SetScaleModeToScaleByMagnitude()\n\n"},
  {"SetScaleModeToScaleByVectorComponents", PyvtkGlyph3DMapper_SetScaleModeToScaleByVectorComponents, METH_VARARGS,
   "V.SetScaleModeToScaleByVectorComponents()\nC++: void SetScaleModeToScaleByVectorComponents()\n\n"},
  {"SetScaleModeToNoDataScaling", PyvtkGlyph3DMapper_SetScaleModeToNoDataScaling, METH_VARARGS,
   "V.SetScaleModeToNoDataScaling()\nC++: void SetScaleModeToNoDataScaling()\n\n"},
  {"GetScaleModeAsString", PyvtkGlyph3DMapper_GetScaleModeAsString, METH_VARARGS,
   "V.GetScaleModeAsString() -> string\nC++: const char *GetScaleModeAsString()\n\n"},
  {"SetRange", PyvtkGlyph3DMapper_SetRange, METH_VARARGS,
   "V.SetRange(float, float)\nC++: void SetRange(double, double)\nV.SetRange((float, float))\nC++: void SetRange(double a[2])\n\n"},
  {"GetRange", PyvtkGlyph3DMapper_GetRange, METH_VARARGS,
   "V.GetRange() -> (float, float)\nC++: double *GetRange()\n\nSpecify range to map scalar values into.\n"},
  {"SetOrient", PyvtkGlyph3DMapper_SetOrient, METH_VARARGS,
   "V.SetOrient(bool)\nC++: virtual void SetOrient(bool _arg)\n\nTurn on/off orienting of input geometry. When turned on, the\norientation array specified using SetOrientationArray() will be\nused.\n"},
  {"GetOrient", PyvtkGlyph3DMapper_GetOrient, METH_VARARGS,
   "V.GetOrient() -> bool\nC++: virtual bool GetOrient()\n\nTurn on/off orienting of input geometry. When turned on, the\norientation array specified using SetOrientationArray() will be\nused.\n"},
  {"OrientOn", PyvtkGlyph3DMapper_OrientOn, METH_VARARGS,
   "V.OrientOn()\nC++: virtual void OrientOn()\n\nTurn on/off orienting of input geometry. When turned on, the\norientation array specified using SetOrientationArray() will be\nused.\n"},
  {"OrientOff", PyvtkGlyph3DMapper_OrientOff, METH_VARARGS,
   "V.OrientOff()\nC++: virtual void OrientOff()\n\nTurn on/off orienting of input geometry. When turned on, the\norientation array specified using SetOrientationArray() will be\nused.\n"},
  {"SetOrientationMode", PyvtkGlyph3DMapper_SetOrientationMode, METH_VARARGS,
   "V.SetOrientationMode(int)\nC++: virtual void SetOrientationMode(int _arg)\n\nOrientation mode indicates if the OrientationArray provides the\ndirection vector for the orientation or the rotations around each\naxes. Default is DIRECTION\n"},
  {"GetOrientationModeMinValue", PyvtkGlyph3DMapper_GetOrientationModeMinValue, METH_VARARGS,
   "V.GetOrientationModeMinValue() -> int\nC++: virtual int GetOrientationModeMinValue()\n\nOrientation mode indicates if the OrientationArray provides the\ndirection vector for the orientation or the rotations around each\naxes. Default is DIRECTION\n"},
  {"GetOrientationModeMaxValue", PyvtkGlyph3DMapper_GetOrientationModeMaxValue, METH_VARARGS,
   "V.GetOrientationModeMaxValue() -> int\nC++: virtual int GetOrientationModeMaxValue()\n\nOrientation mode indicates if the OrientationArray provides the\ndirection vector for the orientation or the rotations around each\naxes. Default is DIRECTION\n"},
  {"GetOrientationMode", PyvtkGlyph3DMapper_GetOrientationMode, METH_VARARGS,
   "V.GetOrientationMode() -> int\nC++: virtual int GetOrientationMode()\n\nOrientation mode indicates if the OrientationArray provides the\ndirection vector for the orientation or the rotations around each\naxes. Default is DIRECTION\n"},
  {"SetOrientationModeToDirection", PyvtkGlyph3DMapper_SetOrientationModeToDirection, METH_VARARGS,
   "V.SetOrientationModeToDirection()\nC++: void SetOrientationModeToDirection()\n\nOrientation mode indicates if the OrientationArray provides the\ndirection vector for the orientation or the rotations around each\naxes. Default is DIRECTION\n"},
  {"SetOrientationModeToRotation", PyvtkGlyph3DMapper_SetOrientationModeToRotation, METH_VARARGS,
   "V.SetOrientationModeToRotation()\nC++: void SetOrientationModeToRotation()\n\nOrientation mode indicates if the OrientationArray provides the\ndirection vector for the orientation or the rotations around each\naxes. Default is DIRECTION\n"},
  {"SetOrientationModeToQuaternion", PyvtkGlyph3DMapper_SetOrientationModeToQuaternion, METH_VARARGS,
   "V.SetOrientationModeToQuaternion()\nC++: void SetOrientationModeToQuaternion()\n\nOrientation mode indicates if the OrientationArray provides the\ndirection vector for the orientation or the rotations around each\naxes. Default is DIRECTION\n"},
  {"GetOrientationModeAsString", PyvtkGlyph3DMapper_GetOrientationModeAsString, METH_VARARGS,
   "V.GetOrientationModeAsString() -> string\nC++: const char *GetOrientationModeAsString()\n\nOrientation mode indicates if the OrientationArray provides the\ndirection vector for the orientation or the rotations around each\naxes. Default is DIRECTION\n"},
  {"SetClamping", PyvtkGlyph3DMapper_SetClamping, METH_VARARGS,
   "V.SetClamping(bool)\nC++: virtual void SetClamping(bool _arg)\n\nTurn on/off clamping of data values to scale with to the\nspecified range.\n"},
  {"GetClamping", PyvtkGlyph3DMapper_GetClamping, METH_VARARGS,
   "V.GetClamping() -> bool\nC++: virtual bool GetClamping()\n\nTurn on/off clamping of data values to scale with to the\nspecified range.\n"},
  {"ClampingOn", PyvtkGlyph3DMapper_ClampingOn, METH_VARARGS,
   "V.ClampingOn()\nC++: virtual void ClampingOn()\n\nTurn on/off clamping of data values to scale with to the\nspecified range.\n"},
  {"ClampingOff", PyvtkGlyph3DMapper_ClampingOff, METH_VARARGS,
   "V.ClampingOff()\nC++: virtual void ClampingOff()\n\nTurn on/off clamping of data values to scale with to the\nspecified range.\n"},
  {"SetSourceIndexing", PyvtkGlyph3DMapper_SetSourceIndexing, METH_VARARGS,
   "V.SetSourceIndexing(bool)\nC++: virtual void SetSourceIndexing(bool _arg)\n\nEnable/disable indexing into table of the glyph sources. When\ndisabled, only the 1st source input will be used to generate the\nglyph. Otherwise the source index array will be used to select\nthe glyph source. The source index array can be specified using\nSetSourceIndexArray().\n"},
  {"GetSourceIndexing", PyvtkGlyph3DMapper_GetSourceIndexing, METH_VARARGS,
   "V.GetSourceIndexing() -> bool\nC++: virtual bool GetSourceIndexing()\n\nEnable/disable indexing into table of the glyph sources. When\ndisabled, only the 1st source input will be used to generate the\nglyph. Otherwise the source index array will be used to select\nthe glyph source. The source index array can be specified using\nSetSourceIndexArray().\n"},
  {"SourceIndexingOn", PyvtkGlyph3DMapper_SourceIndexingOn, METH_VARARGS,
   "V.SourceIndexingOn()\nC++: virtual void SourceIndexingOn()\n\nEnable/disable indexing into table of the glyph sources. When\ndisabled, only the 1st source input will be used to generate the\nglyph. Otherwise the source index array will be used to select\nthe glyph source. The source index array can be specified using\nSetSourceIndexArray().\n"},
  {"SourceIndexingOff", PyvtkGlyph3DMapper_SourceIndexingOff, METH_VARARGS,
   "V.SourceIndexingOff()\nC++: virtual void SourceIndexingOff()\n\nEnable/disable indexing into table of the glyph sources. When\ndisabled, only the 1st source input will be used to generate the\nglyph. Otherwise the source index array will be used to select\nthe glyph source. The source index array can be specified using\nSetSourceIndexArray().\n"},
  {"SetUseSourceTableTree", PyvtkGlyph3DMapper_SetUseSourceTableTree, METH_VARARGS,
   "V.SetUseSourceTableTree(bool)\nC++: virtual void SetUseSourceTableTree(bool _arg)\n\nIf true, and the glyph source dataset is a subclass of\nvtkDataObjectTree, the top-level members of the tree will be\nmapped to the glyph source table used for SourceIndexing.\n"},
  {"GetUseSourceTableTree", PyvtkGlyph3DMapper_GetUseSourceTableTree, METH_VARARGS,
   "V.GetUseSourceTableTree() -> bool\nC++: virtual bool GetUseSourceTableTree()\n\nIf true, and the glyph source dataset is a subclass of\nvtkDataObjectTree, the top-level members of the tree will be\nmapped to the glyph source table used for SourceIndexing.\n"},
  {"UseSourceTableTreeOn", PyvtkGlyph3DMapper_UseSourceTableTreeOn, METH_VARARGS,
   "V.UseSourceTableTreeOn()\nC++: virtual void UseSourceTableTreeOn()\n\nIf true, and the glyph source dataset is a subclass of\nvtkDataObjectTree, the top-level members of the tree will be\nmapped to the glyph source table used for SourceIndexing.\n"},
  {"UseSourceTableTreeOff", PyvtkGlyph3DMapper_UseSourceTableTreeOff, METH_VARARGS,
   "V.UseSourceTableTreeOff()\nC++: virtual void UseSourceTableTreeOff()\n\nIf true, and the glyph source dataset is a subclass of\nvtkDataObjectTree, the top-level members of the tree will be\nmapped to the glyph source table used for SourceIndexing.\n"},
  {"SetUseSelectionIds", PyvtkGlyph3DMapper_SetUseSelectionIds, METH_VARARGS,
   "V.SetUseSelectionIds(bool)\nC++: virtual void SetUseSelectionIds(bool _arg)\n\nTurn on/off custom selection ids. If enabled, the id values set\nwith SetSelectionIdArray are returned from pick events.\n"},
  {"UseSelectionIdsOn", PyvtkGlyph3DMapper_UseSelectionIdsOn, METH_VARARGS,
   "V.UseSelectionIdsOn()\nC++: virtual void UseSelectionIdsOn()\n\nTurn on/off custom selection ids. If enabled, the id values set\nwith SetSelectionIdArray are returned from pick events.\n"},
  {"UseSelectionIdsOff", PyvtkGlyph3DMapper_UseSelectionIdsOff, METH_VARARGS,
   "V.UseSelectionIdsOff()\nC++: virtual void UseSelectionIdsOff()\n\nTurn on/off custom selection ids. If enabled, the id values set\nwith SetSelectionIdArray are returned from pick events.\n"},
  {"GetUseSelectionIds", PyvtkGlyph3DMapper_GetUseSelectionIds, METH_VARARGS,
   "V.GetUseSelectionIds() -> bool\nC++: virtual bool GetUseSelectionIds()\n\nTurn on/off custom selection ids. If enabled, the id values set\nwith SetSelectionIdArray are returned from pick events.\n"},
  {"GetBounds", PyvtkGlyph3DMapper_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6]) override;\n\nRedefined to take into account the bounds of the scaled glyphs.\n"},
  {"Render", PyvtkGlyph3DMapper_Render, METH_VARARGS,
   "V.Render(vtkRenderer, vtkActor)\nC++: void Render(vtkRenderer *ren, vtkActor *act) override;\n\nAll the work is done is derived classes.\n"},
  {"SetMasking", PyvtkGlyph3DMapper_SetMasking, METH_VARARGS,
   "V.SetMasking(bool)\nC++: virtual void SetMasking(bool _arg)\n\nTells the mapper to skip glyphing input points that haves false\nvalues in the mask array. If there is no mask array (id access\nmode is set and there is no such id, or array name access mode is\nset and the there is no such name), masking is silently ignored.\nA mask array is a vtkBitArray with only one component. Initial\nvalue is false.\n"},
  {"GetMasking", PyvtkGlyph3DMapper_GetMasking, METH_VARARGS,
   "V.GetMasking() -> bool\nC++: virtual bool GetMasking()\n\nTells the mapper to skip glyphing input points that haves false\nvalues in the mask array. If there is no mask array (id access\nmode is set and there is no such id, or array name access mode is\nset and the there is no such name), masking is silently ignored.\nA mask array is a vtkBitArray with only one component. Initial\nvalue is false.\n"},
  {"MaskingOn", PyvtkGlyph3DMapper_MaskingOn, METH_VARARGS,
   "V.MaskingOn()\nC++: virtual void MaskingOn()\n\nTells the mapper to skip glyphing input points that haves false\nvalues in the mask array. If there is no mask array (id access\nmode is set and there is no such id, or array name access mode is\nset and the there is no such name), masking is silently ignored.\nA mask array is a vtkBitArray with only one component. Initial\nvalue is false.\n"},
  {"MaskingOff", PyvtkGlyph3DMapper_MaskingOff, METH_VARARGS,
   "V.MaskingOff()\nC++: virtual void MaskingOff()\n\nTells the mapper to skip glyphing input points that haves false\nvalues in the mask array. If there is no mask array (id access\nmode is set and there is no such id, or array name access mode is\nset and the there is no such name), masking is silently ignored.\nA mask array is a vtkBitArray with only one component. Initial\nvalue is false.\n"},
  {"SetMaskArray", PyvtkGlyph3DMapper_SetMaskArray, METH_VARARGS,
   "V.SetMaskArray(string)\nC++: void SetMaskArray(const char *maskarrayname)\nV.SetMaskArray(int)\nC++: void SetMaskArray(int fieldAttributeType)\n\nSet the name of the point array to use as a mask for generating\nthe glyphs. This is a convenience method. The same effect can be\nachieved by using SetInputArrayToProcess(vtkGlyph3DMapper::MASK,\n0, 0, vtkDataObject::FIELD_ASSOCIATION_POINTS, maskarrayname)\n"},
  {"SetOrientationArray", PyvtkGlyph3DMapper_SetOrientationArray, METH_VARARGS,
   "V.SetOrientationArray(string)\nC++: void SetOrientationArray(const char *orientationarrayname)\nV.SetOrientationArray(int)\nC++: void SetOrientationArray(int fieldAttributeType)\n\nTells the mapper to use an orientation array if Orient is true.\nAn orientation array is a vtkDataArray with 3 components. The\nfirst component is the angle of rotation along the X axis. The\nsecond component is the angle of rotation along the Y axis. The\nthird component is the angle of rotation along the Z axis.\nOrientation is specified in X,Y,Z order but the rotations are\nperformed in Z,X an Y. This definition is compliant with\nSetOrientation method on vtkProp3D. By using vector or normal\nthere is a degree of freedom or rotation left (underconstrained).\nWith the orientation array, there is no degree of freedom left.\nThis is convenience method. The same effect can be achieved by\nusing SetInputArrayToProcess(vtkGlyph3DMapper::ORIENTATION, 0, 0,\nvtkDataObject::FIELD_ASSOCIATION_POINTS, orientationarrayname);\n"},
  {"SetScaleArray", PyvtkGlyph3DMapper_SetScaleArray, METH_VARARGS,
   "V.SetScaleArray(string)\nC++: void SetScaleArray(const char *scalarsarrayname)\nV.SetScaleArray(int)\nC++: void SetScaleArray(int fieldAttributeType)\n\nConvenience method to set the array to scale with. This is same\nas calling SetInputArrayToProcess(vtkGlyph3DMapper::SCALE, 0, 0,\nvtkDataObject::FIELD_ASSOCIATION_POINTS, scalarsarrayname).\n"},
  {"SetSourceIndexArray", PyvtkGlyph3DMapper_SetSourceIndexArray, METH_VARARGS,
   "V.SetSourceIndexArray(string)\nC++: void SetSourceIndexArray(const char *arrayname)\nV.SetSourceIndexArray(int)\nC++: void SetSourceIndexArray(int fieldAttributeType)\n\nConvenience method to set the array to use as index within the\nsources. This is same as calling\nSetInputArrayToProcess(vtkGlyph3DMapper::SOURCE_INDEX, 0, 0,\nvtkDataObject::FIELD_ASSOCIATION_POINTS, arrayname).\n"},
  {"SetSelectionIdArray", PyvtkGlyph3DMapper_SetSelectionIdArray, METH_VARARGS,
   "V.SetSelectionIdArray(string)\nC++: void SetSelectionIdArray(const char *selectionIdArrayName)\nV.SetSelectionIdArray(int)\nC++: void SetSelectionIdArray(int fieldAttributeType)\n\nConvenience method to set the array used for selection IDs. This\nis same as calling\nSetInputArrayToProcess(vtkGlyph3DMapper::SELECTIONID, 0, 0,\nvtkDataObject::FIELD_ASSOCIATION_POINTS, selectionidarrayname).\n\n* If no selection id array is specified, the index of the glyph\n  point is\n* used.\n"},
  {"SetSelectionColorId", PyvtkGlyph3DMapper_SetSelectionColorId, METH_VARARGS,
   "V.SetSelectionColorId(int)\nC++: virtual void SetSelectionColorId(unsigned int _arg)\n\nFor selection by color id mode (not for end-user, called by\nvtkGlyphSelectionRenderMode). 0 is reserved for miss. it has to\nstart at 1. Initial value is 1.\n"},
  {"GetSelectionColorId", PyvtkGlyph3DMapper_GetSelectionColorId, METH_VARARGS,
   "V.GetSelectionColorId() -> int\nC++: virtual unsigned int GetSelectionColorId()\n\nFor selection by color id mode (not for end-user, called by\nvtkGlyphSelectionRenderMode). 0 is reserved for miss. it has to\nstart at 1. Initial value is 1.\n"},
  {"SetBlockAttributes", PyvtkGlyph3DMapper_SetBlockAttributes, METH_VARARGS,
   "V.SetBlockAttributes(vtkCompositeDataDisplayAttributes)\nC++: virtual void SetBlockAttributes(\n    vtkCompositeDataDisplayAttributes *attr)\n\nWhen the input data object (not the source) is composite data, it\nis possible to control visibility and pickability on a per-block\nbasis by passing the mapper a vtkCompositeDataDisplayAttributes\ninstance. The color and opacity in the display-attributes\ninstance are ignored for now. By default, the mapper does not own\na display-attributes instance. The value of BlockAttributes has\nno effect when the input is a poly-data object.\n"},
  {"GetBlockAttributes", PyvtkGlyph3DMapper_GetBlockAttributes, METH_VARARGS,
   "V.GetBlockAttributes() -> vtkCompositeDataDisplayAttributes\nC++: virtual vtkCompositeDataDisplayAttributes *GetBlockAttributes(\n    )\n\nWhen the input data object (not the source) is composite data, it\nis possible to control visibility and pickability on a per-block\nbasis by passing the mapper a vtkCompositeDataDisplayAttributes\ninstance. The color and opacity in the display-attributes\ninstance are ignored for now. By default, the mapper does not own\na display-attributes instance. The value of BlockAttributes has\nno effect when the input is a poly-data object.\n"},
  {"SetCullingAndLOD", PyvtkGlyph3DMapper_SetCullingAndLOD, METH_VARARGS,
   "V.SetCullingAndLOD(bool)\nC++: virtual void SetCullingAndLOD(bool _arg)\n\nEnable or disable frustum culling and LOD of the instances. When\nenabled, an OpenGL driver supporting GL_ARB_gpu_shader5 extension\nis mandatory.\n"},
  {"GetCullingAndLOD", PyvtkGlyph3DMapper_GetCullingAndLOD, METH_VARARGS,
   "V.GetCullingAndLOD() -> bool\nC++: virtual bool GetCullingAndLOD()\n\nEnable or disable frustum culling and LOD of the instances. When\nenabled, an OpenGL driver supporting GL_ARB_gpu_shader5 extension\nis mandatory.\n"},
  {"GetMaxNumberOfLOD", PyvtkGlyph3DMapper_GetMaxNumberOfLOD, METH_VARARGS,
   "V.GetMaxNumberOfLOD() -> int\nC++: virtual vtkIdType GetMaxNumberOfLOD()\n\nGet the maximum number of LOD. OpenGL context must be bound. The\nmaximum number of LOD depends on GPU capabilities. This method is\nintended to be reimplemented in inherited classes, current\nimplementation always returns zero.\n"},
  {"SetNumberOfLOD", PyvtkGlyph3DMapper_SetNumberOfLOD, METH_VARARGS,
   "V.SetNumberOfLOD(int)\nC++: virtual void SetNumberOfLOD(vtkIdType nb)\n\nSet the number of LOD. This method is intended to be\nreimplemented in inherited classes, current implementation does\nnothing.\n"},
  {"SetLODDistanceAndTargetReduction", PyvtkGlyph3DMapper_SetLODDistanceAndTargetReduction, METH_VARARGS,
   "V.SetLODDistanceAndTargetReduction(int, float, float)\nC++: virtual void SetLODDistanceAndTargetReduction(\n    vtkIdType index, float distance, float targetReduction)\n\nConfigure LODs. Culling must be enabled. distance have to be a\npositive value, it is the distance to the camera scaled by the\ninstanced geometry bounding box. targetReduction have to be\nbetween 0 and 1, 0 disable decimation, 1 draw a point. This\nmethod is intended to be reimplemented in inherited classes,\ncurrent implementation does nothing.\n\n@sa vtkDecimatePro::SetTargetReduction\n"},
  {"SetLODColoring", PyvtkGlyph3DMapper_SetLODColoring, METH_VARARGS,
   "V.SetLODColoring(bool)\nC++: virtual void SetLODColoring(bool _arg)\n\nEnable LOD coloring. It can be useful to configure properly the\nLODs. Each LOD have a unique color, based on its index.\n"},
  {"GetLODColoring", PyvtkGlyph3DMapper_GetLODColoring, METH_VARARGS,
   "V.GetLODColoring() -> bool\nC++: virtual bool GetLODColoring()\n\nEnable LOD coloring. It can be useful to configure properly the\nLODs. Each LOD have a unique color, based on its index.\n"},
  {"GetSupportsSelection", PyvtkGlyph3DMapper_GetSupportsSelection, METH_VARARGS,
   "V.GetSupportsSelection() -> bool\nC++: bool GetSupportsSelection() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Used by\nvtkHardwareSelector to determine if the prop supports hardware\nselection.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGlyph3DMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkGlyph3DMapper", // tp_name
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
  PyvtkGlyph3DMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGlyph3DMapper_StaticNew()
{
  return vtkGlyph3DMapper::New();
}

PyObject *PyvtkGlyph3DMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGlyph3DMapper_Type, PyvtkGlyph3DMapper_Methods,
    "vtkGlyph3DMapper",
 &PyvtkGlyph3DMapper_StaticNew);

  PyTypeObject *pytype = &PyvtkGlyph3DMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMapper_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkGlyph3DMapper_ArrayIndexes_Type);
  PyvtkGlyph3DMapper_ArrayIndexes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkGlyph3DMapper_ArrayIndexes_Type);

  o = (PyObject *)&PyvtkGlyph3DMapper_ArrayIndexes_Type;
  if (PyDict_SetItemString(d, "ArrayIndexes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkGlyph3DMapper_ScaleModes_Type);
  PyvtkGlyph3DMapper_ScaleModes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkGlyph3DMapper_ScaleModes_Type);

  o = (PyObject *)&PyvtkGlyph3DMapper_ScaleModes_Type;
  if (PyDict_SetItemString(d, "ScaleModes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkGlyph3DMapper_OrientationModes_Type);
  PyvtkGlyph3DMapper_OrientationModes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkGlyph3DMapper_OrientationModes_Type);

  o = (PyObject *)&PyvtkGlyph3DMapper_OrientationModes_Type;
  if (PyDict_SetItemString(d, "OrientationModes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkGlyph3DMapper::ArrayIndexes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "SCALE", vtkGlyph3DMapper::SCALE },
        { "SOURCE_INDEX", vtkGlyph3DMapper::SOURCE_INDEX },
        { "MASK", vtkGlyph3DMapper::MASK },
        { "ORIENTATION", vtkGlyph3DMapper::ORIENTATION },
        { "SELECTIONID", vtkGlyph3DMapper::SELECTIONID },
      };

    o = PyvtkGlyph3DMapper_ArrayIndexes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkGlyph3DMapper::ScaleModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "NO_DATA_SCALING", vtkGlyph3DMapper::NO_DATA_SCALING },
        { "SCALE_BY_MAGNITUDE", vtkGlyph3DMapper::SCALE_BY_MAGNITUDE },
        { "SCALE_BY_COMPONENTS", vtkGlyph3DMapper::SCALE_BY_COMPONENTS },
      };

    o = PyvtkGlyph3DMapper_ScaleModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkGlyph3DMapper::OrientationModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "DIRECTION", vtkGlyph3DMapper::DIRECTION },
        { "ROTATION", vtkGlyph3DMapper::ROTATION },
        { "QUATERNION", vtkGlyph3DMapper::QUATERNION },
      };

    o = PyvtkGlyph3DMapper_OrientationModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGlyph3DMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGlyph3DMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGlyph3DMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

