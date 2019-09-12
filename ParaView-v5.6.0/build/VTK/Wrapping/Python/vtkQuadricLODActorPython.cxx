// python wrapper for vtkQuadricLODActor
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
#include "vtkQuadricLODActor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkQuadricLODActor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkQuadricLODActor_ClassNew(); }

#ifndef DECLARED_PyvtkActor_ClassNew
extern "C" { PyObject *PyvtkActor_ClassNew(); }
#define DECLARED_PyvtkActor_ClassNew
#endif

static const char *PyvtkQuadricLODActor_Doc =
  "vtkQuadricLODActor - a specific level-of-detail strategy using the\nquadric clustering decimation algorithm\n\n"
  "Superclass: vtkActor\n\n"
  "vtkQuadricLODActor implements a specific strategy for level-of-detail\n"
  "using the vtkQuadricClustering decimation algorithm. It supports only\n"
  "two levels of detail: full resolution and a decimated version. The\n"
  "decimated LOD is generated using a tuned strategy to produce output\n"
  "consistent with the requested interactive frame rate (i.e., the\n"
  "vtkRenderWindowInteractor's DesiredUpdateRate). It also makes use of\n"
  "display lists for performance, and adjusts the vtkQuadricClustering\n"
  "algorithm to take into account the dimensionality of the data (e.g.,\n"
  "2D, x-y surfaces may be binned into n x n x 1 to reduce extra\n"
  "polygons in the z-direction). Finally, the filter may optionally be\n"
  "set in \"Static\" mode (this works with the vtkMapper::SetStatic()\n"
  "method). `Enabling Static results in a one time execution of the\n"
  "Mapper's pipeline. After that, the pipeline no longer updated (unless\n"
  "manually forced to do so).\n\n"
  "@warning\n"
  "By default the algorithm is set up to pre-compute the LODs. That is,\n"
  "on the first render (whether a full resolution render or interactive\n"
  "render) the LOD is computed. This behavior can be changed so that the\n"
  "LOD construction is deferred until the first interactive render.\n"
  "Either way, when the LOD is constructed, the user may notice a short\n"
  "pause.\n\n"
  "@warning\n"
  "This class can be used as a direct replacement for vtkActor. It may\n"
  "also be used as a replacement for vtkFollower's (the ability to track\n"
  "a camera is provided).\n\n"
  "@sa\n"
  "vtkLODActor vtkQuadricClustering\n\n";

static PyTypeObject PyvtkQuadricLODActor_DataConfigurationEnum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingLODPython.vtkQuadricLODActor.DataConfigurationEnum", // tp_name
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

PyObject *PyvtkQuadricLODActor_DataConfigurationEnum_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkQuadricLODActor_DataConfigurationEnum_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkQuadricLODActor_DataConfigurationEnum_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkQuadricLODActor_PropTypeEnum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingLODPython.vtkQuadricLODActor.PropTypeEnum", // tp_name
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

PyObject *PyvtkQuadricLODActor_PropTypeEnum_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkQuadricLODActor_PropTypeEnum_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkQuadricLODActor_PropTypeEnum_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkQuadricLODActor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkQuadricLODActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuadricLODActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkQuadricLODActor *tempr = vtkQuadricLODActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuadricLODActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuadricLODActor::NewInstance());

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
PyvtkQuadricLODActor_SetDeferLODConstruction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeferLODConstruction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeferLODConstruction(temp0);
    }
    else
    {
      op->vtkQuadricLODActor::SetDeferLODConstruction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetDeferLODConstruction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeferLODConstruction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDeferLODConstruction() :
      op->vtkQuadricLODActor::GetDeferLODConstruction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_DeferLODConstructionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeferLODConstructionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeferLODConstructionOn();
    }
    else
    {
      op->vtkQuadricLODActor::DeferLODConstructionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_DeferLODConstructionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeferLODConstructionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeferLODConstructionOff();
    }
    else
    {
      op->vtkQuadricLODActor::DeferLODConstructionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetStatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStatic(temp0);
    }
    else
    {
      op->vtkQuadricLODActor::SetStatic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetStatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStatic() :
      op->vtkQuadricLODActor::GetStatic());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_StaticOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StaticOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StaticOn();
    }
    else
    {
      op->vtkQuadricLODActor::StaticOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_StaticOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StaticOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StaticOff();
    }
    else
    {
      op->vtkQuadricLODActor::StaticOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetDataConfiguration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataConfiguration(temp0);
    }
    else
    {
      op->vtkQuadricLODActor::SetDataConfiguration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetDataConfigurationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataConfigurationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataConfigurationMinValue() :
      op->vtkQuadricLODActor::GetDataConfigurationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetDataConfigurationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataConfigurationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataConfigurationMaxValue() :
      op->vtkQuadricLODActor::GetDataConfigurationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetDataConfiguration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataConfiguration() :
      op->vtkQuadricLODActor::GetDataConfiguration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetDataConfigurationToUnknown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataConfigurationToUnknown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataConfigurationToUnknown();
    }
    else
    {
      op->vtkQuadricLODActor::SetDataConfigurationToUnknown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetDataConfigurationToXLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataConfigurationToXLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataConfigurationToXLine();
    }
    else
    {
      op->vtkQuadricLODActor::SetDataConfigurationToXLine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetDataConfigurationToYLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataConfigurationToYLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataConfigurationToYLine();
    }
    else
    {
      op->vtkQuadricLODActor::SetDataConfigurationToYLine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetDataConfigurationToZLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataConfigurationToZLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataConfigurationToZLine();
    }
    else
    {
      op->vtkQuadricLODActor::SetDataConfigurationToZLine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetDataConfigurationToXYPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataConfigurationToXYPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataConfigurationToXYPlane();
    }
    else
    {
      op->vtkQuadricLODActor::SetDataConfigurationToXYPlane();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetDataConfigurationToYZPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataConfigurationToYZPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataConfigurationToYZPlane();
    }
    else
    {
      op->vtkQuadricLODActor::SetDataConfigurationToYZPlane();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetDataConfigurationToXZPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataConfigurationToXZPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataConfigurationToXZPlane();
    }
    else
    {
      op->vtkQuadricLODActor::SetDataConfigurationToXZPlane();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetDataConfigurationToXYZVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataConfigurationToXYZVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataConfigurationToXYZVolume();
    }
    else
    {
      op->vtkQuadricLODActor::SetDataConfigurationToXYZVolume();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetCollapseDimensionRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCollapseDimensionRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCollapseDimensionRatio(temp0);
    }
    else
    {
      op->vtkQuadricLODActor::SetCollapseDimensionRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetCollapseDimensionRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollapseDimensionRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCollapseDimensionRatioMinValue() :
      op->vtkQuadricLODActor::GetCollapseDimensionRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetCollapseDimensionRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollapseDimensionRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCollapseDimensionRatioMaxValue() :
      op->vtkQuadricLODActor::GetCollapseDimensionRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetCollapseDimensionRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollapseDimensionRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCollapseDimensionRatio() :
      op->vtkQuadricLODActor::GetCollapseDimensionRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetLODFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  vtkQuadricClustering *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkQuadricClustering"))
  {
    if (ap.IsBound())
    {
      op->SetLODFilter(temp0);
    }
    else
    {
      op->vtkQuadricLODActor::SetLODFilter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetLODFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuadricClustering *tempr = (ap.IsBound() ?
      op->GetLODFilter() :
      op->vtkQuadricLODActor::GetLODFilter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetPropType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPropType(temp0);
    }
    else
    {
      op->vtkQuadricLODActor::SetPropType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetPropTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPropTypeMinValue() :
      op->vtkQuadricLODActor::GetPropTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetPropTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPropTypeMaxValue() :
      op->vtkQuadricLODActor::GetPropTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetPropType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPropType() :
      op->vtkQuadricLODActor::GetPropType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetPropTypeToFollower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropTypeToFollower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPropTypeToFollower();
    }
    else
    {
      op->vtkQuadricLODActor::SetPropTypeToFollower();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetPropTypeToActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropTypeToActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPropTypeToActor();
    }
    else
    {
      op->vtkQuadricLODActor::SetPropTypeToActor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  vtkCamera *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
  {
    if (ap.IsBound())
    {
      op->SetCamera(temp0);
    }
    else
    {
      op->vtkQuadricLODActor::SetCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkQuadricLODActor::GetCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkMapper *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkMapper"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkQuadricLODActor::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkQuadricLODActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkQuadricLODActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkQuadricLODActor::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkQuadricLODActor_Methods[] = {
  {"IsTypeOf", PyvtkQuadricLODActor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard class methods.\n"},
  {"IsA", PyvtkQuadricLODActor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard class methods.\n"},
  {"SafeDownCast", PyvtkQuadricLODActor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkQuadricLODActor\nC++: static vtkQuadricLODActor *SafeDownCast(vtkObjectBase *o)\n\nStandard class methods.\n"},
  {"NewInstance", PyvtkQuadricLODActor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkQuadricLODActor\nC++: vtkQuadricLODActor *NewInstance()\n\nStandard class methods.\n"},
  {"SetDeferLODConstruction", PyvtkQuadricLODActor_SetDeferLODConstruction, METH_VARARGS,
   "V.SetDeferLODConstruction(int)\nC++: virtual void SetDeferLODConstruction(vtkTypeBool _arg)\n\nSpecify whether to build the LOD immediately (i.e., on the first\nrender) or to wait until the LOD is requested in a subsequent\nrender. By default, LOD construction is not deferred\n(DeferLODConstruction is false).\n"},
  {"GetDeferLODConstruction", PyvtkQuadricLODActor_GetDeferLODConstruction, METH_VARARGS,
   "V.GetDeferLODConstruction() -> int\nC++: virtual vtkTypeBool GetDeferLODConstruction()\n\nSpecify whether to build the LOD immediately (i.e., on the first\nrender) or to wait until the LOD is requested in a subsequent\nrender. By default, LOD construction is not deferred\n(DeferLODConstruction is false).\n"},
  {"DeferLODConstructionOn", PyvtkQuadricLODActor_DeferLODConstructionOn, METH_VARARGS,
   "V.DeferLODConstructionOn()\nC++: virtual void DeferLODConstructionOn()\n\nSpecify whether to build the LOD immediately (i.e., on the first\nrender) or to wait until the LOD is requested in a subsequent\nrender. By default, LOD construction is not deferred\n(DeferLODConstruction is false).\n"},
  {"DeferLODConstructionOff", PyvtkQuadricLODActor_DeferLODConstructionOff, METH_VARARGS,
   "V.DeferLODConstructionOff()\nC++: virtual void DeferLODConstructionOff()\n\nSpecify whether to build the LOD immediately (i.e., on the first\nrender) or to wait until the LOD is requested in a subsequent\nrender. By default, LOD construction is not deferred\n(DeferLODConstruction is false).\n"},
  {"SetStatic", PyvtkQuadricLODActor_SetStatic, METH_VARARGS,
   "V.SetStatic(int)\nC++: virtual void SetStatic(vtkTypeBool _arg)\n\nTurn on/off a flag to control whether the underlying pipeline is\nstatic. If static, this means that the data pipeline executes\nonce and then not again until the user manually modifies this\nclass. By default, Static is off because trying to debug this is\ntricky, and you should only use it when you know what you are\ndoing.\n"},
  {"GetStatic", PyvtkQuadricLODActor_GetStatic, METH_VARARGS,
   "V.GetStatic() -> int\nC++: virtual vtkTypeBool GetStatic()\n\nTurn on/off a flag to control whether the underlying pipeline is\nstatic. If static, this means that the data pipeline executes\nonce and then not again until the user manually modifies this\nclass. By default, Static is off because trying to debug this is\ntricky, and you should only use it when you know what you are\ndoing.\n"},
  {"StaticOn", PyvtkQuadricLODActor_StaticOn, METH_VARARGS,
   "V.StaticOn()\nC++: virtual void StaticOn()\n\nTurn on/off a flag to control whether the underlying pipeline is\nstatic. If static, this means that the data pipeline executes\nonce and then not again until the user manually modifies this\nclass. By default, Static is off because trying to debug this is\ntricky, and you should only use it when you know what you are\ndoing.\n"},
  {"StaticOff", PyvtkQuadricLODActor_StaticOff, METH_VARARGS,
   "V.StaticOff()\nC++: virtual void StaticOff()\n\nTurn on/off a flag to control whether the underlying pipeline is\nstatic. If static, this means that the data pipeline executes\nonce and then not again until the user manually modifies this\nclass. By default, Static is off because trying to debug this is\ntricky, and you should only use it when you know what you are\ndoing.\n"},
  {"SetDataConfiguration", PyvtkQuadricLODActor_SetDataConfiguration, METH_VARARGS,
   "V.SetDataConfiguration(int)\nC++: virtual void SetDataConfiguration(int _arg)\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {"GetDataConfigurationMinValue", PyvtkQuadricLODActor_GetDataConfigurationMinValue, METH_VARARGS,
   "V.GetDataConfigurationMinValue() -> int\nC++: virtual int GetDataConfigurationMinValue()\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {"GetDataConfigurationMaxValue", PyvtkQuadricLODActor_GetDataConfigurationMaxValue, METH_VARARGS,
   "V.GetDataConfigurationMaxValue() -> int\nC++: virtual int GetDataConfigurationMaxValue()\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {"GetDataConfiguration", PyvtkQuadricLODActor_GetDataConfiguration, METH_VARARGS,
   "V.GetDataConfiguration() -> int\nC++: virtual int GetDataConfiguration()\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {"SetDataConfigurationToUnknown", PyvtkQuadricLODActor_SetDataConfigurationToUnknown, METH_VARARGS,
   "V.SetDataConfigurationToUnknown()\nC++: void SetDataConfigurationToUnknown()\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {"SetDataConfigurationToXLine", PyvtkQuadricLODActor_SetDataConfigurationToXLine, METH_VARARGS,
   "V.SetDataConfigurationToXLine()\nC++: void SetDataConfigurationToXLine()\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {"SetDataConfigurationToYLine", PyvtkQuadricLODActor_SetDataConfigurationToYLine, METH_VARARGS,
   "V.SetDataConfigurationToYLine()\nC++: void SetDataConfigurationToYLine()\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {"SetDataConfigurationToZLine", PyvtkQuadricLODActor_SetDataConfigurationToZLine, METH_VARARGS,
   "V.SetDataConfigurationToZLine()\nC++: void SetDataConfigurationToZLine()\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {"SetDataConfigurationToXYPlane", PyvtkQuadricLODActor_SetDataConfigurationToXYPlane, METH_VARARGS,
   "V.SetDataConfigurationToXYPlane()\nC++: void SetDataConfigurationToXYPlane()\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {"SetDataConfigurationToYZPlane", PyvtkQuadricLODActor_SetDataConfigurationToYZPlane, METH_VARARGS,
   "V.SetDataConfigurationToYZPlane()\nC++: void SetDataConfigurationToYZPlane()\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {"SetDataConfigurationToXZPlane", PyvtkQuadricLODActor_SetDataConfigurationToXZPlane, METH_VARARGS,
   "V.SetDataConfigurationToXZPlane()\nC++: void SetDataConfigurationToXZPlane()\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {"SetDataConfigurationToXYZVolume", PyvtkQuadricLODActor_SetDataConfigurationToXYZVolume, METH_VARARGS,
   "V.SetDataConfigurationToXYZVolume()\nC++: void SetDataConfigurationToXYZVolume()\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {"SetCollapseDimensionRatio", PyvtkQuadricLODActor_SetCollapseDimensionRatio, METH_VARARGS,
   "V.SetCollapseDimensionRatio(float)\nC++: virtual void SetCollapseDimensionRatio(double _arg)\n\nIf the data configuration is set to UNKNOWN, this class attempts\nto figure out the dimensionality of the data using\nCollapseDimensionRatio. This ivar is the ratio of short edge of\nthe input bounding box to its long edge, which is then used to\ncollapse the data dimension (and set the quadric bin size in that\ndirection to one). By default, this value is 0.05.\n"},
  {"GetCollapseDimensionRatioMinValue", PyvtkQuadricLODActor_GetCollapseDimensionRatioMinValue, METH_VARARGS,
   "V.GetCollapseDimensionRatioMinValue() -> float\nC++: virtual double GetCollapseDimensionRatioMinValue()\n\nIf the data configuration is set to UNKNOWN, this class attempts\nto figure out the dimensionality of the data using\nCollapseDimensionRatio. This ivar is the ratio of short edge of\nthe input bounding box to its long edge, which is then used to\ncollapse the data dimension (and set the quadric bin size in that\ndirection to one). By default, this value is 0.05.\n"},
  {"GetCollapseDimensionRatioMaxValue", PyvtkQuadricLODActor_GetCollapseDimensionRatioMaxValue, METH_VARARGS,
   "V.GetCollapseDimensionRatioMaxValue() -> float\nC++: virtual double GetCollapseDimensionRatioMaxValue()\n\nIf the data configuration is set to UNKNOWN, this class attempts\nto figure out the dimensionality of the data using\nCollapseDimensionRatio. This ivar is the ratio of short edge of\nthe input bounding box to its long edge, which is then used to\ncollapse the data dimension (and set the quadric bin size in that\ndirection to one). By default, this value is 0.05.\n"},
  {"GetCollapseDimensionRatio", PyvtkQuadricLODActor_GetCollapseDimensionRatio, METH_VARARGS,
   "V.GetCollapseDimensionRatio() -> float\nC++: virtual double GetCollapseDimensionRatio()\n\nIf the data configuration is set to UNKNOWN, this class attempts\nto figure out the dimensionality of the data using\nCollapseDimensionRatio. This ivar is the ratio of short edge of\nthe input bounding box to its long edge, which is then used to\ncollapse the data dimension (and set the quadric bin size in that\ndirection to one). By default, this value is 0.05.\n"},
  {"SetLODFilter", PyvtkQuadricLODActor_SetLODFilter, METH_VARARGS,
   "V.SetLODFilter(vtkQuadricClustering)\nC++: void SetLODFilter(vtkQuadricClustering *lodFilter)\n\nThis class will create a vtkQuadricClustering algorithm\nautomatically. However, if you would like to specify the filter\nto use, or to access it and configure it, these method provide\naccess to the filter.\n"},
  {"GetLODFilter", PyvtkQuadricLODActor_GetLODFilter, METH_VARARGS,
   "V.GetLODFilter() -> vtkQuadricClustering\nC++: virtual vtkQuadricClustering *GetLODFilter()\n\nThis class will create a vtkQuadricClustering algorithm\nautomatically. However, if you would like to specify the filter\nto use, or to access it and configure it, these method provide\naccess to the filter.\n"},
  {"SetPropType", PyvtkQuadricLODActor_SetPropType, METH_VARARGS,
   "V.SetPropType(int)\nC++: virtual void SetPropType(int _arg)\n\nIndicate that this actor is actually a follower. By default, the\nprop type is a vtkActor.\n"},
  {"GetPropTypeMinValue", PyvtkQuadricLODActor_GetPropTypeMinValue, METH_VARARGS,
   "V.GetPropTypeMinValue() -> int\nC++: virtual int GetPropTypeMinValue()\n\nIndicate that this actor is actually a follower. By default, the\nprop type is a vtkActor.\n"},
  {"GetPropTypeMaxValue", PyvtkQuadricLODActor_GetPropTypeMaxValue, METH_VARARGS,
   "V.GetPropTypeMaxValue() -> int\nC++: virtual int GetPropTypeMaxValue()\n\nIndicate that this actor is actually a follower. By default, the\nprop type is a vtkActor.\n"},
  {"GetPropType", PyvtkQuadricLODActor_GetPropType, METH_VARARGS,
   "V.GetPropType() -> int\nC++: virtual int GetPropType()\n\nIndicate that this actor is actually a follower. By default, the\nprop type is a vtkActor.\n"},
  {"SetPropTypeToFollower", PyvtkQuadricLODActor_SetPropTypeToFollower, METH_VARARGS,
   "V.SetPropTypeToFollower()\nC++: void SetPropTypeToFollower()\n\nIndicate that this actor is actually a follower. By default, the\nprop type is a vtkActor.\n"},
  {"SetPropTypeToActor", PyvtkQuadricLODActor_SetPropTypeToActor, METH_VARARGS,
   "V.SetPropTypeToActor()\nC++: void SetPropTypeToActor()\n\nIndicate that this actor is actually a follower. By default, the\nprop type is a vtkActor.\n"},
  {"SetCamera", PyvtkQuadricLODActor_SetCamera, METH_VARARGS,
   "V.SetCamera(vtkCamera)\nC++: void SetCamera(vtkCamera *)\n\nSet/Get the camera to follow. This method is only applicable when\nthe prop type is set to a vtkFollower.\n"},
  {"GetCamera", PyvtkQuadricLODActor_GetCamera, METH_VARARGS,
   "V.GetCamera() -> vtkCamera\nC++: virtual vtkCamera *GetCamera()\n\nSet/Get the camera to follow. This method is only applicable when\nthe prop type is set to a vtkFollower.\n"},
  {"Render", PyvtkQuadricLODActor_Render, METH_VARARGS,
   "V.Render(vtkRenderer, vtkMapper)\nC++: void Render(vtkRenderer *, vtkMapper *) override;\n\nThis causes the actor to be rendered. Depending on the frame rate\nrequest, it will use either a full resolution render or an\ninteractive render (i.e., it will use the decimated geometry).\n"},
  {"RenderOpaqueGeometry", PyvtkQuadricLODActor_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nThis method is used internally by the rendering process. We\noverride the superclass method to properly set the estimated\nrender time.\n"},
  {"ReleaseGraphicsResources", PyvtkQuadricLODActor_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"ShallowCopy", PyvtkQuadricLODActor_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of an LOD actor. Overloads the virtual vtkProp\nmethod.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkQuadricLODActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingLODPython.vtkQuadricLODActor", // tp_name
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
  PyvtkQuadricLODActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkQuadricLODActor_StaticNew()
{
  return vtkQuadricLODActor::New();
}

PyObject *PyvtkQuadricLODActor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkQuadricLODActor_Type, PyvtkQuadricLODActor_Methods,
    "vtkQuadricLODActor",
 &PyvtkQuadricLODActor_StaticNew);

  PyTypeObject *pytype = &PyvtkQuadricLODActor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkActor_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkQuadricLODActor_DataConfigurationEnum_Type);
  PyvtkQuadricLODActor_DataConfigurationEnum_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkQuadricLODActor_DataConfigurationEnum_Type);

  o = (PyObject *)&PyvtkQuadricLODActor_DataConfigurationEnum_Type;
  if (PyDict_SetItemString(d, "DataConfigurationEnum", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkQuadricLODActor_PropTypeEnum_Type);
  PyvtkQuadricLODActor_PropTypeEnum_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkQuadricLODActor_PropTypeEnum_Type);

  o = (PyObject *)&PyvtkQuadricLODActor_PropTypeEnum_Type;
  if (PyDict_SetItemString(d, "PropTypeEnum", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 8; c++)
  {
    typedef vtkQuadricLODActor::DataConfigurationEnum cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[8] = {
        { "UNKNOWN", vtkQuadricLODActor::UNKNOWN },
        { "XLINE", vtkQuadricLODActor::XLINE },
        { "YLINE", vtkQuadricLODActor::YLINE },
        { "ZLINE", vtkQuadricLODActor::ZLINE },
        { "XYPLANE", vtkQuadricLODActor::XYPLANE },
        { "XZPLANE", vtkQuadricLODActor::XZPLANE },
        { "YZPLANE", vtkQuadricLODActor::YZPLANE },
        { "XYZVOLUME", vtkQuadricLODActor::XYZVOLUME },
      };

    o = PyvtkQuadricLODActor_DataConfigurationEnum_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkQuadricLODActor::PropTypeEnum cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "FOLLOWER", vtkQuadricLODActor::FOLLOWER },
        { "ACTOR", vtkQuadricLODActor::ACTOR },
      };

    o = PyvtkQuadricLODActor_PropTypeEnum_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkQuadricLODActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkQuadricLODActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkQuadricLODActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

