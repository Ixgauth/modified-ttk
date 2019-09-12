// python wrapper for vtkHyperTreeGridAxisClip
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
#include "vtkHyperTreeGridAxisClip.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridAxisClip(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkHyperTreeGridAxisClip_ClassNew(); }

#ifndef DECLARED_PyvtkHyperTreeGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkHyperTreeGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkHyperTreeGridAlgorithm_ClassNew
#endif

static const char *PyvtkHyperTreeGridAxisClip_Doc =
  "vtkHyperTreeGridAxisClip - Axis aligned hyper tree grid clip\n\n"
  "Superclass: vtkHyperTreeGridAlgorithm\n\n"
  "Clip a hyper tree grid along an axis aligned plane or box and output\n"
  "a hyper tree grid with same dimensionality. This filter also allows\n"
  "for reversal of the direction of what is inside versus what is\n"
  "outside by setting the InsideOut instance variable.\n\n"
  "@sa\n"
  "vtkHyperTreeGrid vtkHyperTreeGridAlgorithm\n\n"
  "@par Thanks: This class was written by Philippe Pebay on a idea of\n"
  "Gu\303\251nol\303\251 Harel and Jacques-Bernard Lekien, 2016 This work was\n"
  "supported by Commissariat a l'Energie Atomique (CEA/DIF)\n\n";

static PyTypeObject PyvtkHyperTreeGridAxisClip_ClipType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHyperTreePython.vtkHyperTreeGridAxisClip.ClipType", // tp_name
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

PyObject *PyvtkHyperTreeGridAxisClip_ClipType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkHyperTreeGridAxisClip_ClipType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkHyperTreeGridAxisClip_ClipType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkHyperTreeGridAxisClip_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridAxisClip::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridAxisClip::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridAxisClip *tempr = vtkHyperTreeGridAxisClip::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridAxisClip *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridAxisClip::NewInstance());

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
PyvtkHyperTreeGridAxisClip_SetClipType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClipType(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetClipType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_GetClipTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClipTypeMinValue() :
      op->vtkHyperTreeGridAxisClip::GetClipTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_GetClipTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClipTypeMaxValue() :
      op->vtkHyperTreeGridAxisClip::GetClipTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_GetClipType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClipType() :
      op->vtkHyperTreeGridAxisClip::GetClipType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_SetClipTypeToPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipTypeToPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetClipTypeToPlane();
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetClipTypeToPlane();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_SetClipTypeToBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipTypeToBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetClipTypeToBox();
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetClipTypeToBox();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_SetClipTypeToQuadric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipTypeToQuadric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetClipTypeToQuadric();
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetClipTypeToQuadric();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_SetPlaneNormalAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneNormalAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneNormalAxis(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetPlaneNormalAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_GetPlaneNormalAxisMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneNormalAxisMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneNormalAxisMinValue() :
      op->vtkHyperTreeGridAxisClip::GetPlaneNormalAxisMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_GetPlaneNormalAxisMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneNormalAxisMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneNormalAxisMaxValue() :
      op->vtkHyperTreeGridAxisClip::GetPlaneNormalAxisMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_GetPlaneNormalAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneNormalAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneNormalAxis() :
      op->vtkHyperTreeGridAxisClip::GetPlaneNormalAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_SetPlanePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlanePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlanePosition(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetPlanePosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_GetPlanePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlanePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPlanePosition() :
      op->vtkHyperTreeGridAxisClip::GetPlanePosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

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
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridAxisClip_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridAxisClip_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkHyperTreeGridAxisClip_SetBounds_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridAxisClip_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}



static PyObject *
PyvtkHyperTreeGridAxisClip_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkHyperTreeGridAxisClip::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_SetMinimumBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

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
      op->SetMinimumBounds(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetMinimumBounds(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridAxisClip_SetMinimumBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetMinimumBounds(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetMinimumBounds(temp0);
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
PyvtkHyperTreeGridAxisClip_SetMinimumBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkHyperTreeGridAxisClip_SetMinimumBounds_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridAxisClip_SetMinimumBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMinimumBounds");
  return nullptr;
}



static PyObject *
PyvtkHyperTreeGridAxisClip_SetMaximumBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

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
      op->SetMaximumBounds(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetMaximumBounds(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridAxisClip_SetMaximumBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetMaximumBounds(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetMaximumBounds(temp0);
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
PyvtkHyperTreeGridAxisClip_SetMaximumBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkHyperTreeGridAxisClip_SetMaximumBounds_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridAxisClip_SetMaximumBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaximumBounds");
  return nullptr;
}



static PyObject *
PyvtkHyperTreeGridAxisClip_GetMinimumBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetMinimumBounds(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::GetMinimumBounds(temp0);
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
PyvtkHyperTreeGridAxisClip_GetMaximumBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetMaximumBounds(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::GetMaximumBounds(temp0);
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
PyvtkHyperTreeGridAxisClip_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInsideOut(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetInsideOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkHyperTreeGridAxisClip::GetInsideOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOn();
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::InsideOutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOff();
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::InsideOutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_SetQuadric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  vtkQuadric *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkQuadric"))
  {
    if (ap.IsBound())
    {
      op->SetQuadric(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetQuadric(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_GetQuadric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuadric *tempr = (ap.IsBound() ?
      op->GetQuadric() :
      op->vtkHyperTreeGridAxisClip::GetQuadric());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_SetQuadricCoefficients_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadricCoefficients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  double temp9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(10) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9))
  {
    if (ap.IsBound())
    {
      op->SetQuadricCoefficients(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetQuadricCoefficients(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridAxisClip_SetQuadricCoefficients_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadricCoefficients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  const size_t size0 = 10;
  double temp0[10];
  double save0[10];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetQuadricCoefficients(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetQuadricCoefficients(temp0);
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
PyvtkHyperTreeGridAxisClip_SetQuadricCoefficients(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 10:
      return PyvtkHyperTreeGridAxisClip_SetQuadricCoefficients_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridAxisClip_SetQuadricCoefficients_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetQuadricCoefficients");
  return nullptr;
}



static PyObject *
PyvtkHyperTreeGridAxisClip_GetQuadricCoefficients_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadricCoefficients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  const size_t size0 = 10;
  double temp0[10];
  double save0[10];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetQuadricCoefficients(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::GetQuadricCoefficients(temp0);
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
PyvtkHyperTreeGridAxisClip_GetQuadricCoefficients_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadricCoefficients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetQuadricCoefficients() :
      op->vtkHyperTreeGridAxisClip::GetQuadricCoefficients());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridAxisClip_GetQuadricCoefficients(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHyperTreeGridAxisClip_GetQuadricCoefficients_s1(self, args);
    case 0:
      return PyvtkHyperTreeGridAxisClip_GetQuadricCoefficients_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetQuadricCoefficients");
  return nullptr;
}



static PyObject *
PyvtkHyperTreeGridAxisClip_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkHyperTreeGridAxisClip::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridAxisClip_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridAxisClip_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridAxisClip_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridAxisClip_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkHyperTreeGridAxisClip\nC++: static vtkHyperTreeGridAxisClip *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridAxisClip_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkHyperTreeGridAxisClip\nC++: vtkHyperTreeGridAxisClip *NewInstance()\n\n"},
  {"SetClipType", PyvtkHyperTreeGridAxisClip_SetClipType, METH_VARARGS,
   "V.SetClipType(int)\nC++: virtual void SetClipType(int _arg)\n\nSet/get type of clip. Default value is 0 (plane clip).\n"},
  {"GetClipTypeMinValue", PyvtkHyperTreeGridAxisClip_GetClipTypeMinValue, METH_VARARGS,
   "V.GetClipTypeMinValue() -> int\nC++: virtual int GetClipTypeMinValue()\n\nSet/get type of clip. Default value is 0 (plane clip).\n"},
  {"GetClipTypeMaxValue", PyvtkHyperTreeGridAxisClip_GetClipTypeMaxValue, METH_VARARGS,
   "V.GetClipTypeMaxValue() -> int\nC++: virtual int GetClipTypeMaxValue()\n\nSet/get type of clip. Default value is 0 (plane clip).\n"},
  {"GetClipType", PyvtkHyperTreeGridAxisClip_GetClipType, METH_VARARGS,
   "V.GetClipType() -> int\nC++: virtual int GetClipType()\n\nSet/get type of clip. Default value is 0 (plane clip).\n"},
  {"SetClipTypeToPlane", PyvtkHyperTreeGridAxisClip_SetClipTypeToPlane, METH_VARARGS,
   "V.SetClipTypeToPlane()\nC++: void SetClipTypeToPlane()\n\nSet/get type of clip. Default value is 0 (plane clip).\n"},
  {"SetClipTypeToBox", PyvtkHyperTreeGridAxisClip_SetClipTypeToBox, METH_VARARGS,
   "V.SetClipTypeToBox()\nC++: void SetClipTypeToBox()\n\nSet/get type of clip. Default value is 0 (plane clip).\n"},
  {"SetClipTypeToQuadric", PyvtkHyperTreeGridAxisClip_SetClipTypeToQuadric, METH_VARARGS,
   "V.SetClipTypeToQuadric()\nC++: void SetClipTypeToQuadric()\n\nSet/get type of clip. Default value is 0 (plane clip).\n"},
  {"SetPlaneNormalAxis", PyvtkHyperTreeGridAxisClip_SetPlaneNormalAxis, METH_VARARGS,
   "V.SetPlaneNormalAxis(int)\nC++: virtual void SetPlaneNormalAxis(int _arg)\n\nSet/get normal axis of clipping plane: 0=X, 1=Y, 2=Z. Default\nvalue is 0 (X-axis normal).\n"},
  {"GetPlaneNormalAxisMinValue", PyvtkHyperTreeGridAxisClip_GetPlaneNormalAxisMinValue, METH_VARARGS,
   "V.GetPlaneNormalAxisMinValue() -> int\nC++: virtual int GetPlaneNormalAxisMinValue()\n\nSet/get normal axis of clipping plane: 0=X, 1=Y, 2=Z. Default\nvalue is 0 (X-axis normal).\n"},
  {"GetPlaneNormalAxisMaxValue", PyvtkHyperTreeGridAxisClip_GetPlaneNormalAxisMaxValue, METH_VARARGS,
   "V.GetPlaneNormalAxisMaxValue() -> int\nC++: virtual int GetPlaneNormalAxisMaxValue()\n\nSet/get normal axis of clipping plane: 0=X, 1=Y, 2=Z. Default\nvalue is 0 (X-axis normal).\n"},
  {"GetPlaneNormalAxis", PyvtkHyperTreeGridAxisClip_GetPlaneNormalAxis, METH_VARARGS,
   "V.GetPlaneNormalAxis() -> int\nC++: virtual int GetPlaneNormalAxis()\n\nSet/get normal axis of clipping plane: 0=X, 1=Y, 2=Z. Default\nvalue is 0 (X-axis normal).\n"},
  {"SetPlanePosition", PyvtkHyperTreeGridAxisClip_SetPlanePosition, METH_VARARGS,
   "V.SetPlanePosition(float)\nC++: virtual void SetPlanePosition(double _arg)\n\nSet/get position of clipping plane: intercept along normal axis.\nDefault value is 0.0.\n"},
  {"GetPlanePosition", PyvtkHyperTreeGridAxisClip_GetPlanePosition, METH_VARARGS,
   "V.GetPlanePosition() -> float\nC++: virtual double GetPlanePosition()\n\nSet/get position of clipping plane: intercept along normal axis.\nDefault value is 0.0.\n"},
  {"SetBounds", PyvtkHyperTreeGridAxisClip_SetBounds, METH_VARARGS,
   "V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double, double, double, double, double,\n    double)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(double a[6])\n\n"},
  {"GetBounds", PyvtkHyperTreeGridAxisClip_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\nSet/get bounds of clipping box.\n"},
  {"SetMinimumBounds", PyvtkHyperTreeGridAxisClip_SetMinimumBounds, METH_VARARGS,
   "V.SetMinimumBounds(float, float, float)\nC++: void SetMinimumBounds(double x, double y, double z)\nV.SetMinimumBounds([float, float, float])\nC++: void SetMinimumBounds(double[3])\n\nSet/get bounds of clipping box.\n"},
  {"SetMaximumBounds", PyvtkHyperTreeGridAxisClip_SetMaximumBounds, METH_VARARGS,
   "V.SetMaximumBounds(float, float, float)\nC++: void SetMaximumBounds(double x, double y, double z)\nV.SetMaximumBounds([float, float, float])\nC++: void SetMaximumBounds(double[3])\n\nSet/get bounds of clipping box.\n"},
  {"GetMinimumBounds", PyvtkHyperTreeGridAxisClip_GetMinimumBounds, METH_VARARGS,
   "V.GetMinimumBounds([float, float, float])\nC++: void GetMinimumBounds(double[3])\n\nSet/get bounds of clipping box.\n"},
  {"GetMaximumBounds", PyvtkHyperTreeGridAxisClip_GetMaximumBounds, METH_VARARGS,
   "V.GetMaximumBounds([float, float, float])\nC++: void GetMaximumBounds(double[3])\n\nSet/get bounds of clipping box.\n"},
  {"SetInsideOut", PyvtkHyperTreeGridAxisClip_SetInsideOut, METH_VARARGS,
   "V.SetInsideOut(int)\nC++: virtual void SetInsideOut(int _arg)\n\nSet/Get the InsideOut flag, in the case of clip by hyperplane.\nWhen off, a cell is clipped out when its origin is above said\nplane intercept along the considered direction, inside otherwise.\nWhen on, a cell is clipped out when its origin + size is below\nsaid said plane intercept along the considered direction.\n"},
  {"GetInsideOut", PyvtkHyperTreeGridAxisClip_GetInsideOut, METH_VARARGS,
   "V.GetInsideOut() -> int\nC++: virtual int GetInsideOut()\n\nSet/Get the InsideOut flag, in the case of clip by hyperplane.\nWhen off, a cell is clipped out when its origin is above said\nplane intercept along the considered direction, inside otherwise.\nWhen on, a cell is clipped out when its origin + size is below\nsaid said plane intercept along the considered direction.\n"},
  {"InsideOutOn", PyvtkHyperTreeGridAxisClip_InsideOutOn, METH_VARARGS,
   "V.InsideOutOn()\nC++: virtual void InsideOutOn()\n\nSet/Get the InsideOut flag, in the case of clip by hyperplane.\nWhen off, a cell is clipped out when its origin is above said\nplane intercept along the considered direction, inside otherwise.\nWhen on, a cell is clipped out when its origin + size is below\nsaid said plane intercept along the considered direction.\n"},
  {"InsideOutOff", PyvtkHyperTreeGridAxisClip_InsideOutOff, METH_VARARGS,
   "V.InsideOutOff()\nC++: virtual void InsideOutOff()\n\nSet/Get the InsideOut flag, in the case of clip by hyperplane.\nWhen off, a cell is clipped out when its origin is above said\nplane intercept along the considered direction, inside otherwise.\nWhen on, a cell is clipped out when its origin + size is below\nsaid said plane intercept along the considered direction.\n"},
  {"SetQuadric", PyvtkHyperTreeGridAxisClip_SetQuadric, METH_VARARGS,
   "V.SetQuadric(vtkQuadric)\nC++: virtual void SetQuadric(vtkQuadric *)\n\nSet/Get the clipping quadric function.\n"},
  {"GetQuadric", PyvtkHyperTreeGridAxisClip_GetQuadric, METH_VARARGS,
   "V.GetQuadric() -> vtkQuadric\nC++: virtual vtkQuadric *GetQuadric()\n\nSet/Get the clipping quadric function.\n"},
  {"SetQuadricCoefficients", PyvtkHyperTreeGridAxisClip_SetQuadricCoefficients, METH_VARARGS,
   "V.SetQuadricCoefficients(float, float, float, float, float, float,\n     float, float, float, float)\nC++: void SetQuadricCoefficients(double a0, double a1, double a2,\n    double a3, double a4, double a5, double a6, double a7,\n    double a8, double a9)\nV.SetQuadricCoefficients([float, float, float, float, float,\n    float, float, float, float, float])\nC++: void SetQuadricCoefficients(double[10])\n\nHelpers to set/get the 10 coefficients of the quadric function\n"},
  {"GetQuadricCoefficients", PyvtkHyperTreeGridAxisClip_GetQuadricCoefficients, METH_VARARGS,
   "V.GetQuadricCoefficients([float, float, float, float, float,\n    float, float, float, float, float])\nC++: void GetQuadricCoefficients(double[10])\nV.GetQuadricCoefficients() -> (float, ...)\nC++: double *GetQuadricCoefficients()\n\nHelpers to set/get the 10 coefficients of the quadric function\n"},
  {"GetMTime", PyvtkHyperTreeGridAxisClip_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride GetMTime because we delegate to a vtkQuadric.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkHyperTreeGridAxisClip_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHyperTreePython.vtkHyperTreeGridAxisClip", // tp_name
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
  PyvtkHyperTreeGridAxisClip_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridAxisClip_StaticNew()
{
  return vtkHyperTreeGridAxisClip::New();
}

PyObject *PyvtkHyperTreeGridAxisClip_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkHyperTreeGridAxisClip_Type, PyvtkHyperTreeGridAxisClip_Methods,
    "vtkHyperTreeGridAxisClip",
 &PyvtkHyperTreeGridAxisClip_StaticNew);

  PyTypeObject *pytype = &PyvtkHyperTreeGridAxisClip_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkHyperTreeGridAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkHyperTreeGridAxisClip_ClipType_Type);
  PyvtkHyperTreeGridAxisClip_ClipType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkHyperTreeGridAxisClip_ClipType_Type);

  o = (PyObject *)&PyvtkHyperTreeGridAxisClip_ClipType_Type;
  if (PyDict_SetItemString(d, "ClipType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "PLANE", vtkHyperTreeGridAxisClip::PLANE },
        { "BOX", vtkHyperTreeGridAxisClip::BOX },
        { "QUADRIC", vtkHyperTreeGridAxisClip::QUADRIC },
      };

    o = PyvtkHyperTreeGridAxisClip_ClipType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridAxisClip(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridAxisClip_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridAxisClip", o) != 0)
  {
    Py_DECREF(o);
  }

}

