// python wrapper for vtkGridAxesPlane2DActor
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
#include "vtkGridAxesPlane2DActor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGridAxesPlane2DActor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGridAxesPlane2DActor_ClassNew(); }

#ifndef DECLARED_PyvtkProp3D_ClassNew
extern "C" { PyObject *PyvtkProp3D_ClassNew(); }
#define DECLARED_PyvtkProp3D_ClassNew
#endif

static const char *PyvtkGridAxesPlane2DActor_Doc =
  "vtkGridAxesPlane2DActor - renders a 2D grid for vtkGridAxes2DActor.\n\n"
  "Superclass: vtkProp3D\n\n"
  "vtkGridAxesPlane2DActor is designed for use by vtkGridAxes2DActor to\n"
  "render the wireframe for the grid plane. It can also be used directly\n"
  "to render such a wireframe in a renderer.\n\n";

static PyTypeObject PyvtkGridAxesPlane2DActor_Faces_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkGridAxesPlane2DActor.Faces", // tp_name
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

PyObject *PyvtkGridAxesPlane2DActor_Faces_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkGridAxesPlane2DActor_Faces_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGridAxesPlane2DActor_Faces_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkGridAxesPlane2DActor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGridAxesPlane2DActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGridAxesPlane2DActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGridAxesPlane2DActor *tempr = vtkGridAxesPlane2DActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGridAxesPlane2DActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGridAxesPlane2DActor::NewInstance());

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
PyvtkGridAxesPlane2DActor_SetGridBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetGridBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkGridAxesPlane2DActor::SetGridBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGridAxesPlane2DActor_SetGridBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGridBounds(temp0);
    }
    else
    {
      op->vtkGridAxesPlane2DActor::SetGridBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGridAxesPlane2DActor_SetGridBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkGridAxesPlane2DActor_SetGridBounds_s1(self, args);
    case 1:
      return PyvtkGridAxesPlane2DActor_SetGridBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridBounds");
  return nullptr;
}



static PyObject *
PyvtkGridAxesPlane2DActor_GetGridBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetGridBounds() :
      op->vtkGridAxesPlane2DActor::GetGridBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_SetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFace(temp0);
    }
    else
    {
      op->vtkGridAxesPlane2DActor::SetFace(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_GetFaceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFaceMinValue() :
      op->vtkGridAxesPlane2DActor::GetFaceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_GetFaceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFaceMaxValue() :
      op->vtkGridAxesPlane2DActor::GetFaceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFace() :
      op->vtkGridAxesPlane2DActor::GetFace());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_SetGenerateGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateGrid(temp0);
    }
    else
    {
      op->vtkGridAxesPlane2DActor::SetGenerateGrid(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_GetGenerateGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateGrid() :
      op->vtkGridAxesPlane2DActor::GetGenerateGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_GenerateGridOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGridOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateGridOn();
    }
    else
    {
      op->vtkGridAxesPlane2DActor::GenerateGridOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_GenerateGridOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGridOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateGridOff();
    }
    else
    {
      op->vtkGridAxesPlane2DActor::GenerateGridOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_SetGenerateEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateEdges(temp0);
    }
    else
    {
      op->vtkGridAxesPlane2DActor::SetGenerateEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_GetGenerateEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateEdges() :
      op->vtkGridAxesPlane2DActor::GetGenerateEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_GenerateEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateEdgesOn();
    }
    else
    {
      op->vtkGridAxesPlane2DActor::GenerateEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_GenerateEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateEdgesOff();
    }
    else
    {
      op->vtkGridAxesPlane2DActor::GenerateEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_SetGenerateTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTicks(temp0);
    }
    else
    {
      op->vtkGridAxesPlane2DActor::SetGenerateTicks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_GetGenerateTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateTicks() :
      op->vtkGridAxesPlane2DActor::GetGenerateTicks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_GenerateTicksOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTicksOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTicksOn();
    }
    else
    {
      op->vtkGridAxesPlane2DActor::GenerateTicksOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_GenerateTicksOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTicksOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTicksOff();
    }
    else
    {
      op->vtkGridAxesPlane2DActor::GenerateTicksOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_SetTickDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTickDirection(temp0);
    }
    else
    {
      op->vtkGridAxesPlane2DActor::SetTickDirection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_GetTickDirectionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickDirectionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetTickDirectionMinValue() :
      op->vtkGridAxesPlane2DActor::GetTickDirectionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_GetTickDirectionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickDirectionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetTickDirectionMaxValue() :
      op->vtkGridAxesPlane2DActor::GetTickDirectionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_GetTickDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetTickDirection() :
      op->vtkGridAxesPlane2DActor::GetTickDirection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_SetTickPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  int temp0;
  vtkDoubleArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->SetTickPositions(temp0, temp1);
    }
    else
    {
      op->vtkGridAxesPlane2DActor::SetTickPositions(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetProperty(temp0);
    }
    else
    {
      op->vtkGridAxesPlane2DActor::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkGridAxesPlane2DActor::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkGridAxesPlane2DActor::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkGridAxesPlane2DActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkGridAxesPlane2DActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkGridAxesPlane2DActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkGridAxesPlane2DActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlane2DActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlane2DActor *op = static_cast<vtkGridAxesPlane2DActor *>(vp);

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
      op->vtkGridAxesPlane2DActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGridAxesPlane2DActor_Methods[] = {
  {"IsTypeOf", PyvtkGridAxesPlane2DActor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGridAxesPlane2DActor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGridAxesPlane2DActor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGridAxesPlane2DActor\nC++: static vtkGridAxesPlane2DActor *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGridAxesPlane2DActor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGridAxesPlane2DActor\nC++: vtkGridAxesPlane2DActor *NewInstance()\n\n"},
  {"SetGridBounds", PyvtkGridAxesPlane2DActor_SetGridBounds, METH_VARARGS,
   "V.SetGridBounds(float, float, float, float, float, float)\nC++: void SetGridBounds(double, double, double, double, double,\n    double)\nV.SetGridBounds((float, float, float, float, float, float))\nC++: void SetGridBounds(double a[6])\n\n"},
  {"GetGridBounds", PyvtkGridAxesPlane2DActor_GetGridBounds, METH_VARARGS,
   "V.GetGridBounds() -> (float, float, float, float, float, float)\nC++: double *GetGridBounds()\n\n"},
  {"SetFace", PyvtkGridAxesPlane2DActor_SetFace, METH_VARARGS,
   "V.SetFace(int)\nC++: virtual void SetFace(int _arg)\n\nIndicate which face of the specified bounds is this class\noperating with. Note: this is only needed/used when the\nvtkGridAxesHelper is not provided when calling New(), otherwise\nthe vtkGridAxesHelper is assumed to be initialized externally.\n"},
  {"GetFaceMinValue", PyvtkGridAxesPlane2DActor_GetFaceMinValue, METH_VARARGS,
   "V.GetFaceMinValue() -> int\nC++: virtual int GetFaceMinValue()\n\nIndicate which face of the specified bounds is this class\noperating with. Note: this is only needed/used when the\nvtkGridAxesHelper is not provided when calling New(), otherwise\nthe vtkGridAxesHelper is assumed to be initialized externally.\n"},
  {"GetFaceMaxValue", PyvtkGridAxesPlane2DActor_GetFaceMaxValue, METH_VARARGS,
   "V.GetFaceMaxValue() -> int\nC++: virtual int GetFaceMaxValue()\n\nIndicate which face of the specified bounds is this class\noperating with. Note: this is only needed/used when the\nvtkGridAxesHelper is not provided when calling New(), otherwise\nthe vtkGridAxesHelper is assumed to be initialized externally.\n"},
  {"GetFace", PyvtkGridAxesPlane2DActor_GetFace, METH_VARARGS,
   "V.GetFace() -> int\nC++: virtual int GetFace()\n\nIndicate which face of the specified bounds is this class\noperating with. Note: this is only needed/used when the\nvtkGridAxesHelper is not provided when calling New(), otherwise\nthe vtkGridAxesHelper is assumed to be initialized externally.\n"},
  {"SetGenerateGrid", PyvtkGridAxesPlane2DActor_SetGenerateGrid, METH_VARARGS,
   "V.SetGenerateGrid(bool)\nC++: virtual void SetGenerateGrid(bool _arg)\n\nGet/Set whether to generate lines for the plane's grid. Default\nis true.\n"},
  {"GetGenerateGrid", PyvtkGridAxesPlane2DActor_GetGenerateGrid, METH_VARARGS,
   "V.GetGenerateGrid() -> bool\nC++: virtual bool GetGenerateGrid()\n\nGet/Set whether to generate lines for the plane's grid. Default\nis true.\n"},
  {"GenerateGridOn", PyvtkGridAxesPlane2DActor_GenerateGridOn, METH_VARARGS,
   "V.GenerateGridOn()\nC++: virtual void GenerateGridOn()\n\nGet/Set whether to generate lines for the plane's grid. Default\nis true.\n"},
  {"GenerateGridOff", PyvtkGridAxesPlane2DActor_GenerateGridOff, METH_VARARGS,
   "V.GenerateGridOff()\nC++: virtual void GenerateGridOff()\n\nGet/Set whether to generate lines for the plane's grid. Default\nis true.\n"},
  {"SetGenerateEdges", PyvtkGridAxesPlane2DActor_SetGenerateEdges, METH_VARARGS,
   "V.SetGenerateEdges(bool)\nC++: virtual void SetGenerateEdges(bool _arg)\n\nGet/Set whether to generate the polydata for the plane's edges.\nDefault is true.\n"},
  {"GetGenerateEdges", PyvtkGridAxesPlane2DActor_GetGenerateEdges, METH_VARARGS,
   "V.GetGenerateEdges() -> bool\nC++: virtual bool GetGenerateEdges()\n\nGet/Set whether to generate the polydata for the plane's edges.\nDefault is true.\n"},
  {"GenerateEdgesOn", PyvtkGridAxesPlane2DActor_GenerateEdgesOn, METH_VARARGS,
   "V.GenerateEdgesOn()\nC++: virtual void GenerateEdgesOn()\n\nGet/Set whether to generate the polydata for the plane's edges.\nDefault is true.\n"},
  {"GenerateEdgesOff", PyvtkGridAxesPlane2DActor_GenerateEdgesOff, METH_VARARGS,
   "V.GenerateEdgesOff()\nC++: virtual void GenerateEdgesOff()\n\nGet/Set whether to generate the polydata for the plane's edges.\nDefault is true.\n"},
  {"SetGenerateTicks", PyvtkGridAxesPlane2DActor_SetGenerateTicks, METH_VARARGS,
   "V.SetGenerateTicks(bool)\nC++: virtual void SetGenerateTicks(bool _arg)\n\nGet/Set whether to generate tick markers for the tick positions.\nDefault is true.\n"},
  {"GetGenerateTicks", PyvtkGridAxesPlane2DActor_GetGenerateTicks, METH_VARARGS,
   "V.GetGenerateTicks() -> bool\nC++: virtual bool GetGenerateTicks()\n\nGet/Set whether to generate tick markers for the tick positions.\nDefault is true.\n"},
  {"GenerateTicksOn", PyvtkGridAxesPlane2DActor_GenerateTicksOn, METH_VARARGS,
   "V.GenerateTicksOn()\nC++: virtual void GenerateTicksOn()\n\nGet/Set whether to generate tick markers for the tick positions.\nDefault is true.\n"},
  {"GenerateTicksOff", PyvtkGridAxesPlane2DActor_GenerateTicksOff, METH_VARARGS,
   "V.GenerateTicksOff()\nC++: virtual void GenerateTicksOff()\n\nGet/Set whether to generate tick markers for the tick positions.\nDefault is true.\n"},
  {"SetTickDirection", PyvtkGridAxesPlane2DActor_SetTickDirection, METH_VARARGS,
   "V.SetTickDirection(int)\nC++: virtual void SetTickDirection(unsigned int _arg)\n\nGet/Set the tick direction.\n"},
  {"GetTickDirectionMinValue", PyvtkGridAxesPlane2DActor_GetTickDirectionMinValue, METH_VARARGS,
   "V.GetTickDirectionMinValue() -> int\nC++: virtual unsigned int GetTickDirectionMinValue()\n\nGet/Set the tick direction.\n"},
  {"GetTickDirectionMaxValue", PyvtkGridAxesPlane2DActor_GetTickDirectionMaxValue, METH_VARARGS,
   "V.GetTickDirectionMaxValue() -> int\nC++: virtual unsigned int GetTickDirectionMaxValue()\n\nGet/Set the tick direction.\n"},
  {"GetTickDirection", PyvtkGridAxesPlane2DActor_GetTickDirection, METH_VARARGS,
   "V.GetTickDirection() -> int\nC++: virtual unsigned int GetTickDirection()\n\nGet/Set the tick direction.\n"},
  {"SetTickPositions", PyvtkGridAxesPlane2DActor_SetTickPositions, METH_VARARGS,
   "V.SetTickPositions(int, vtkDoubleArray)\nC++: void SetTickPositions(int axis, vtkDoubleArray *data)\n\nSet the tick positions for each of the coordinate axis. Which\ntick positions get used depended on the face being rendered e.g.\nif Face is MIN_XY, then the tick positions for Z-axis i.e. axis=2\nwill not be used and hence need not be specified. Pass NULL for\ndata will clear the ticks positions for that axis. Note: This\ncreates a deep-copy of the values in data and stores that.\n"},
  {"SetProperty", PyvtkGridAxesPlane2DActor_SetProperty, METH_VARARGS,
   "V.SetProperty(vtkProperty)\nC++: void SetProperty(vtkProperty *)\n\nGet/Set the property used to control the appearance of the\nrendered grid.\n"},
  {"GetProperty", PyvtkGridAxesPlane2DActor_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkProperty\nC++: vtkProperty *GetProperty()\n\nGet/Set the property used to control the appearance of the\nrendered grid.\n"},
  {"GetBounds", PyvtkGridAxesPlane2DActor_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nReturns the prop bounds.\n"},
  {"RenderOpaqueGeometry", PyvtkGridAxesPlane2DActor_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkGridAxesPlane2DActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\n"},
  {"RenderOverlay", PyvtkGridAxesPlane2DActor_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkGridAxesPlane2DActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"ReleaseGraphicsResources", PyvtkGridAxesPlane2DActor_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGridAxesPlane2DActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkGridAxesPlane2DActor", // tp_name
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
  PyvtkGridAxesPlane2DActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGridAxesPlane2DActor_StaticNew()
{
  return vtkGridAxesPlane2DActor::New();
}

PyObject *PyvtkGridAxesPlane2DActor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGridAxesPlane2DActor_Type, PyvtkGridAxesPlane2DActor_Methods,
    "vtkGridAxesPlane2DActor",
 &PyvtkGridAxesPlane2DActor_StaticNew);

  PyTypeObject *pytype = &PyvtkGridAxesPlane2DActor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkProp3D_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkGridAxesPlane2DActor_Faces_Type);
  PyvtkGridAxesPlane2DActor_Faces_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkGridAxesPlane2DActor_Faces_Type);

  o = (PyObject *)&PyvtkGridAxesPlane2DActor_Faces_Type;
  if (PyDict_SetItemString(d, "Faces", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkGridAxesPlane2DActor::Faces cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "MIN_YZ", vtkGridAxesPlane2DActor::MIN_YZ },
        { "MIN_ZX", vtkGridAxesPlane2DActor::MIN_ZX },
        { "MIN_XY", vtkGridAxesPlane2DActor::MIN_XY },
        { "MAX_YZ", vtkGridAxesPlane2DActor::MAX_YZ },
        { "MAX_ZX", vtkGridAxesPlane2DActor::MAX_ZX },
        { "MAX_XY", vtkGridAxesPlane2DActor::MAX_XY },
      };

    o = PyvtkGridAxesPlane2DActor_Faces_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "TICK_DIRECTION_INWARDS", vtkGridAxesPlane2DActor::TICK_DIRECTION_INWARDS },
        { "TICK_DIRECTION_OUTWARDS", vtkGridAxesPlane2DActor::TICK_DIRECTION_OUTWARDS },
        { "TICK_DIRECTION_BOTH", vtkGridAxesPlane2DActor::TICK_DIRECTION_BOTH },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGridAxesPlane2DActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGridAxesPlane2DActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGridAxesPlane2DActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

