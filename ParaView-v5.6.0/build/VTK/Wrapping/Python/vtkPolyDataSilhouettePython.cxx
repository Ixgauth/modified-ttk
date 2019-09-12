// python wrapper for vtkPolyDataSilhouette
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
#include "vtkPolyDataSilhouette.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolyDataSilhouette(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPolyDataSilhouette_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkPolyDataSilhouette_Doc =
  "vtkPolyDataSilhouette - sort polydata along camera view direction\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPolyDataSilhouette extracts a subset of a polygonal mesh edges to\n"
  "generate an outline (silhouette) of the corresponding 3D object. In\n"
  "addition, this filter can also extracts sharp edges (aka feature\n"
  "angles). In order to use this filter you must specify the a point of\n"
  "view (origin) or a direction (vector).  given this direction or\n"
  "origin, a silhouette is generated wherever the surface's normal is\n"
  "orthogonal to the view direction.\n\n"
  "@warning\n"
  "when the active camera is used, almost everything is recomputed for\n"
  "each frame, keep this in mind when dealing with extremely large\n"
  "surface data sets.\n\n"
  "@par Thanks: Contribution by Thierry Carrard\n\n"
  "CEA/DIF - Commissariat a l'Energie Atomique, Centre DAM Ile-De-France\n\n"
  "BP12, F-91297 Arpajon, France.\n\n";

static PyTypeObject PyvtkPolyDataSilhouette_Directions_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHybridPython.vtkPolyDataSilhouette.Directions", // tp_name
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

PyObject *PyvtkPolyDataSilhouette_Directions_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkPolyDataSilhouette_Directions_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPolyDataSilhouette_Directions_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkPolyDataSilhouette_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolyDataSilhouette::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyDataSilhouette::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolyDataSilhouette *tempr = vtkPolyDataSilhouette::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataSilhouette *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyDataSilhouette::NewInstance());

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
PyvtkPolyDataSilhouette_SetEnableFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableFeatureAngle(temp0);
    }
    else
    {
      op->vtkPolyDataSilhouette::SetEnableFeatureAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetEnableFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableFeatureAngle() :
      op->vtkPolyDataSilhouette::GetEnableFeatureAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFeatureAngle(temp0);
    }
    else
    {
      op->vtkPolyDataSilhouette::SetFeatureAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngle() :
      op->vtkPolyDataSilhouette::GetFeatureAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetBorderEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorderEdges(temp0);
    }
    else
    {
      op->vtkPolyDataSilhouette::SetBorderEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetBorderEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBorderEdges() :
      op->vtkPolyDataSilhouette::GetBorderEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_BorderEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BorderEdgesOn();
    }
    else
    {
      op->vtkPolyDataSilhouette::BorderEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_BorderEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BorderEdgesOff();
    }
    else
    {
      op->vtkPolyDataSilhouette::BorderEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPieceInvariant(temp0);
    }
    else
    {
      op->vtkPolyDataSilhouette::SetPieceInvariant(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPieceInvariant() :
      op->vtkPolyDataSilhouette::GetPieceInvariant());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_PieceInvariantOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PieceInvariantOn();
    }
    else
    {
      op->vtkPolyDataSilhouette::PieceInvariantOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_PieceInvariantOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PieceInvariantOff();
    }
    else
    {
      op->vtkPolyDataSilhouette::PieceInvariantOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDirection(temp0);
    }
    else
    {
      op->vtkPolyDataSilhouette::SetDirection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDirection() :
      op->vtkPolyDataSilhouette::GetDirection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetDirectionToSpecifiedVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToSpecifiedVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDirectionToSpecifiedVector();
    }
    else
    {
      op->vtkPolyDataSilhouette::SetDirectionToSpecifiedVector();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetDirectionToSpecifiedOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToSpecifiedOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDirectionToSpecifiedOrigin();
    }
    else
    {
      op->vtkPolyDataSilhouette::SetDirectionToSpecifiedOrigin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetDirectionToCameraVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToCameraVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDirectionToCameraVector();
    }
    else
    {
      op->vtkPolyDataSilhouette::SetDirectionToCameraVector();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetDirectionToCameraOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToCameraOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDirectionToCameraOrigin();
    }
    else
    {
      op->vtkPolyDataSilhouette::SetDirectionToCameraOrigin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

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
      op->vtkPolyDataSilhouette::SetCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkPolyDataSilhouette::GetCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  vtkProp3D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp3D"))
  {
    if (ap.IsBound())
    {
      op->SetProp3D(temp0);
    }
    else
    {
      op->vtkPolyDataSilhouette::SetProp3D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp3D *tempr = (ap.IsBound() ?
      op->GetProp3D() :
      op->vtkPolyDataSilhouette::GetProp3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolyDataSilhouette::SetVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataSilhouette_SetVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetVector(temp0);
    }
    else
    {
      op->vtkPolyDataSilhouette::SetVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataSilhouette_SetVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPolyDataSilhouette_SetVector_s1(self, args);
    case 1:
      return PyvtkPolyDataSilhouette_SetVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVector");
  return nullptr;
}



static PyObject *
PyvtkPolyDataSilhouette_GetVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetVector() :
      op->vtkPolyDataSilhouette::GetVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolyDataSilhouette::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataSilhouette_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkPolyDataSilhouette::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataSilhouette_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPolyDataSilhouette_SetOrigin_s1(self, args);
    case 1:
      return PyvtkPolyDataSilhouette_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}



static PyObject *
PyvtkPolyDataSilhouette_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkPolyDataSilhouette::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkPolyDataSilhouette::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyDataSilhouette_Methods[] = {
  {"IsTypeOf", PyvtkPolyDataSilhouette_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolyDataSilhouette_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolyDataSilhouette_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPolyDataSilhouette\nC++: static vtkPolyDataSilhouette *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolyDataSilhouette_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPolyDataSilhouette\nC++: vtkPolyDataSilhouette *NewInstance()\n\n"},
  {"SetEnableFeatureAngle", PyvtkPolyDataSilhouette_SetEnableFeatureAngle, METH_VARARGS,
   "V.SetEnableFeatureAngle(int)\nC++: virtual void SetEnableFeatureAngle(int _arg)\n\nEnables or Disables generation of silhouette edges along sharp\nedges\n"},
  {"GetEnableFeatureAngle", PyvtkPolyDataSilhouette_GetEnableFeatureAngle, METH_VARARGS,
   "V.GetEnableFeatureAngle() -> int\nC++: virtual int GetEnableFeatureAngle()\n\nEnables or Disables generation of silhouette edges along sharp\nedges\n"},
  {"SetFeatureAngle", PyvtkPolyDataSilhouette_SetFeatureAngle, METH_VARARGS,
   "V.SetFeatureAngle(float)\nC++: virtual void SetFeatureAngle(double _arg)\n\nSets/Gets minimal angle for sharp edges detection. Default is 60\n"},
  {"GetFeatureAngle", PyvtkPolyDataSilhouette_GetFeatureAngle, METH_VARARGS,
   "V.GetFeatureAngle() -> float\nC++: virtual double GetFeatureAngle()\n\nSets/Gets minimal angle for sharp edges detection. Default is 60\n"},
  {"SetBorderEdges", PyvtkPolyDataSilhouette_SetBorderEdges, METH_VARARGS,
   "V.SetBorderEdges(int)\nC++: virtual void SetBorderEdges(vtkTypeBool _arg)\n\nEnables or Disables generation of border edges. Note: borders\nexist only in case of non closed surface\n"},
  {"GetBorderEdges", PyvtkPolyDataSilhouette_GetBorderEdges, METH_VARARGS,
   "V.GetBorderEdges() -> int\nC++: virtual vtkTypeBool GetBorderEdges()\n\nEnables or Disables generation of border edges. Note: borders\nexist only in case of non closed surface\n"},
  {"BorderEdgesOn", PyvtkPolyDataSilhouette_BorderEdgesOn, METH_VARARGS,
   "V.BorderEdgesOn()\nC++: virtual void BorderEdgesOn()\n\nEnables or Disables generation of border edges. Note: borders\nexist only in case of non closed surface\n"},
  {"BorderEdgesOff", PyvtkPolyDataSilhouette_BorderEdgesOff, METH_VARARGS,
   "V.BorderEdgesOff()\nC++: virtual void BorderEdgesOff()\n\nEnables or Disables generation of border edges. Note: borders\nexist only in case of non closed surface\n"},
  {"SetPieceInvariant", PyvtkPolyDataSilhouette_SetPieceInvariant, METH_VARARGS,
   "V.SetPieceInvariant(int)\nC++: virtual void SetPieceInvariant(vtkTypeBool _arg)\n\nEnables or Disables piece invariance. This is useful when dealing\nwith multi-block data sets. Note: requires one level of ghost\ncells\n"},
  {"GetPieceInvariant", PyvtkPolyDataSilhouette_GetPieceInvariant, METH_VARARGS,
   "V.GetPieceInvariant() -> int\nC++: virtual vtkTypeBool GetPieceInvariant()\n\nEnables or Disables piece invariance. This is useful when dealing\nwith multi-block data sets. Note: requires one level of ghost\ncells\n"},
  {"PieceInvariantOn", PyvtkPolyDataSilhouette_PieceInvariantOn, METH_VARARGS,
   "V.PieceInvariantOn()\nC++: virtual void PieceInvariantOn()\n\nEnables or Disables piece invariance. This is useful when dealing\nwith multi-block data sets. Note: requires one level of ghost\ncells\n"},
  {"PieceInvariantOff", PyvtkPolyDataSilhouette_PieceInvariantOff, METH_VARARGS,
   "V.PieceInvariantOff()\nC++: virtual void PieceInvariantOff()\n\nEnables or Disables piece invariance. This is useful when dealing\nwith multi-block data sets. Note: requires one level of ghost\ncells\n"},
  {"SetDirection", PyvtkPolyDataSilhouette_SetDirection, METH_VARARGS,
   "V.SetDirection(int)\nC++: virtual void SetDirection(int _arg)\n\nSpecify how view direction is computed. By default, the camera\norigin (eye) is used.\n"},
  {"GetDirection", PyvtkPolyDataSilhouette_GetDirection, METH_VARARGS,
   "V.GetDirection() -> int\nC++: virtual int GetDirection()\n\nSpecify how view direction is computed. By default, the camera\norigin (eye) is used.\n"},
  {"SetDirectionToSpecifiedVector", PyvtkPolyDataSilhouette_SetDirectionToSpecifiedVector, METH_VARARGS,
   "V.SetDirectionToSpecifiedVector()\nC++: void SetDirectionToSpecifiedVector()\n\nSpecify how view direction is computed. By default, the camera\norigin (eye) is used.\n"},
  {"SetDirectionToSpecifiedOrigin", PyvtkPolyDataSilhouette_SetDirectionToSpecifiedOrigin, METH_VARARGS,
   "V.SetDirectionToSpecifiedOrigin()\nC++: void SetDirectionToSpecifiedOrigin()\n\nSpecify how view direction is computed. By default, the camera\norigin (eye) is used.\n"},
  {"SetDirectionToCameraVector", PyvtkPolyDataSilhouette_SetDirectionToCameraVector, METH_VARARGS,
   "V.SetDirectionToCameraVector()\nC++: void SetDirectionToCameraVector()\n\nSpecify how view direction is computed. By default, the camera\norigin (eye) is used.\n"},
  {"SetDirectionToCameraOrigin", PyvtkPolyDataSilhouette_SetDirectionToCameraOrigin, METH_VARARGS,
   "V.SetDirectionToCameraOrigin()\nC++: void SetDirectionToCameraOrigin()\n\nSpecify how view direction is computed. By default, the camera\norigin (eye) is used.\n"},
  {"SetCamera", PyvtkPolyDataSilhouette_SetCamera, METH_VARARGS,
   "V.SetCamera(vtkCamera)\nC++: virtual void SetCamera(vtkCamera *)\n\nSpecify a camera that is used to define the view direction.  This\nivar only has effect if the direction is set to\nVTK_DIRECTION_CAMERA_ORIGIN or VTK_DIRECTION_CAMERA_VECTOR, and a\ncamera is specified.\n"},
  {"GetCamera", PyvtkPolyDataSilhouette_GetCamera, METH_VARARGS,
   "V.GetCamera() -> vtkCamera\nC++: virtual vtkCamera *GetCamera()\n\nSpecify a camera that is used to define the view direction.  This\nivar only has effect if the direction is set to\nVTK_DIRECTION_CAMERA_ORIGIN or VTK_DIRECTION_CAMERA_VECTOR, and a\ncamera is specified.\n"},
  {"SetProp3D", PyvtkPolyDataSilhouette_SetProp3D, METH_VARARGS,
   "V.SetProp3D(vtkProp3D)\nC++: void SetProp3D(vtkProp3D *)\n\nSpecify a transformation matrix (via the vtkProp3D::GetMatrix()\nmethod) that is used to include the effects of transformation.\nThis ivar only has effect if the direction is set to\nVTK_DIRECTION_CAMERA_ORIGIN or VTK_DIRECTION_CAMERA_VECTOR, and a\ncamera is specified. Specifying the vtkProp3D is optional.\n"},
  {"GetProp3D", PyvtkPolyDataSilhouette_GetProp3D, METH_VARARGS,
   "V.GetProp3D() -> vtkProp3D\nC++: vtkProp3D *GetProp3D()\n\nSpecify a transformation matrix (via the vtkProp3D::GetMatrix()\nmethod) that is used to include the effects of transformation.\nThis ivar only has effect if the direction is set to\nVTK_DIRECTION_CAMERA_ORIGIN or VTK_DIRECTION_CAMERA_VECTOR, and a\ncamera is specified. Specifying the vtkProp3D is optional.\n"},
  {"SetVector", PyvtkPolyDataSilhouette_SetVector, METH_VARARGS,
   "V.SetVector(float, float, float)\nC++: void SetVector(double, double, double)\nV.SetVector((float, float, float))\nC++: void SetVector(double a[3])\n\n"},
  {"GetVector", PyvtkPolyDataSilhouette_GetVector, METH_VARARGS,
   "V.GetVector() -> (float, float, float)\nC++: double *GetVector()\n\nSet/Get the sort direction. This ivar only has effect if the sort\ndirection is set to SetDirectionToSpecifiedVector(). The edge\ndetection occurs in the direction of the vector.\n"},
  {"SetOrigin", PyvtkPolyDataSilhouette_SetOrigin, METH_VARARGS,
   "V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {"GetOrigin", PyvtkPolyDataSilhouette_GetOrigin, METH_VARARGS,
   "V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\nSet/Get the sort origin. This ivar only has effect if the sort\ndirection is set to SetDirectionToSpecifiedOrigin(). The edge\ndetection occurs in the direction of the origin to each edge's\ncenter.\n"},
  {"GetMTime", PyvtkPolyDataSilhouette_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn MTime also considering the dependent objects: the camera\nand/or the prop3D.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPolyDataSilhouette_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHybridPython.vtkPolyDataSilhouette", // tp_name
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
  PyvtkPolyDataSilhouette_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolyDataSilhouette_StaticNew()
{
  return vtkPolyDataSilhouette::New();
}

PyObject *PyvtkPolyDataSilhouette_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPolyDataSilhouette_Type, PyvtkPolyDataSilhouette_Methods,
    "vtkPolyDataSilhouette",
 &PyvtkPolyDataSilhouette_StaticNew);

  PyTypeObject *pytype = &PyvtkPolyDataSilhouette_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPolyDataSilhouette_Directions_Type);
  PyvtkPolyDataSilhouette_Directions_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkPolyDataSilhouette_Directions_Type);

  o = (PyObject *)&PyvtkPolyDataSilhouette_Directions_Type;
  if (PyDict_SetItemString(d, "Directions", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkPolyDataSilhouette::Directions cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VTK_DIRECTION_SPECIFIED_VECTOR", vtkPolyDataSilhouette::VTK_DIRECTION_SPECIFIED_VECTOR },
        { "VTK_DIRECTION_SPECIFIED_ORIGIN", vtkPolyDataSilhouette::VTK_DIRECTION_SPECIFIED_ORIGIN },
        { "VTK_DIRECTION_CAMERA_ORIGIN", vtkPolyDataSilhouette::VTK_DIRECTION_CAMERA_ORIGIN },
        { "VTK_DIRECTION_CAMERA_VECTOR", vtkPolyDataSilhouette::VTK_DIRECTION_CAMERA_VECTOR },
      };

    o = PyvtkPolyDataSilhouette_Directions_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolyDataSilhouette(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyDataSilhouette_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyDataSilhouette", o) != 0)
  {
    Py_DECREF(o);
  }

}

