// python wrapper for vtkGridAxes2DActor
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
#include "vtkStdString.h"
#include "vtkGridAxes2DActor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGridAxes2DActor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGridAxes2DActor_ClassNew(); }

#ifndef DECLARED_PyvtkProp3D_ClassNew
extern "C" { PyObject *PyvtkProp3D_ClassNew(); }
#define DECLARED_PyvtkProp3D_ClassNew
#endif

static const char *PyvtkGridAxes2DActor_Doc =
  "vtkGridAxes2DActor - actor for an axes plane in a 3D view.\n\n"
  "Superclass: vtkProp3D\n\n"
  "vtkGridAxes2DActor is a vtkProp3D that renders a single axes plane\n"
  "(or face). Despite the name, it renders a prop in 3D with ability to\n"
  "render lines for the axes bounds along with labels on them.\n\n"
  "To use this, one sets the `GridBounds` and then the `Face` which\n"
  "identifies the face of the cube defined by the `GridBounds` along\n"
  "which this prop will render the grid. Parameters available allow\n"
  "additional controls including labeling, grid rendering, edge\n"
  "rendering etc.\n\n"
  "@sa vtkGridAxes3DActor\n\n";

static PyTypeObject PyvtkGridAxes2DActor_Faces_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkGridAxes2DActor.Faces", // tp_name
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

PyObject *PyvtkGridAxes2DActor_Faces_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkGridAxes2DActor_Faces_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGridAxes2DActor_Faces_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkGridAxes2DActor_LabelMasks_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkGridAxes2DActor.LabelMasks", // tp_name
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

PyObject *PyvtkGridAxes2DActor_LabelMasks_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkGridAxes2DActor_LabelMasks_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGridAxes2DActor_LabelMasks_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkGridAxes2DActor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGridAxes2DActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGridAxes2DActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGridAxes2DActor *tempr = vtkGridAxes2DActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGridAxes2DActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGridAxes2DActor::NewInstance());

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
PyvtkGridAxes2DActor_SetGridBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

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
      op->vtkGridAxes2DActor::SetGridBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGridAxes2DActor_SetGridBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

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
      op->vtkGridAxes2DActor::SetGridBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGridAxes2DActor_SetGridBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkGridAxes2DActor_SetGridBounds_s1(self, args);
    case 1:
      return PyvtkGridAxes2DActor_SetGridBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridBounds");
  return nullptr;
}



static PyObject *
PyvtkGridAxes2DActor_GetGridBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetGridBounds() :
      op->vtkGridAxes2DActor::GetGridBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_SetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

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
      op->vtkGridAxes2DActor::SetFace(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_GetFaceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFaceMinValue() :
      op->vtkGridAxes2DActor::GetFaceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_GetFaceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFaceMaxValue() :
      op->vtkGridAxes2DActor::GetFaceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFace() :
      op->vtkGridAxes2DActor::GetFace());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_SetLabelMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelMask(temp0);
    }
    else
    {
      op->vtkGridAxes2DActor::SetLabelMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_GetLabelMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetLabelMask() :
      op->vtkGridAxes2DActor::GetLabelMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

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
      op->vtkGridAxes2DActor::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkGridAxes2DActor::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_SetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  int temp0;
  vtkTextProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTitleTextProperty(temp0, temp1);
    }
    else
    {
      op->vtkGridAxes2DActor::SetTitleTextProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleTextProperty(temp0) :
      op->vtkGridAxes2DActor::GetTitleTextProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  int temp0;
  vtkTextProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetLabelTextProperty(temp0, temp1);
    }
    else
    {
      op->vtkGridAxes2DActor::SetLabelTextProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty(temp0) :
      op->vtkGridAxes2DActor::GetLabelTextProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  int temp0;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTitle(temp0, temp1);
    }
    else
    {
      op->vtkGridAxes2DActor::SetTitle(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const vtkStdString *tempr = (ap.IsBound() ?
      &op->GetTitle(temp0) :
      &op->vtkGridAxes2DActor::GetTitle(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_SetNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNotation(temp0, temp1);
    }
    else
    {
      op->vtkGridAxes2DActor::SetNotation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_GetNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNotation(temp0) :
      op->vtkGridAxes2DActor::GetNotation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_SetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPrecision(temp0, temp1);
    }
    else
    {
      op->vtkGridAxes2DActor::SetPrecision(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_GetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPrecision(temp0) :
      op->vtkGridAxes2DActor::GetPrecision(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_SetCustomTickPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomTickPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  int temp0;
  vtkDoubleArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->SetCustomTickPositions(temp0, temp1);
    }
    else
    {
      op->vtkGridAxes2DActor::SetCustomTickPositions(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_SetGenerateGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

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
      op->vtkGridAxes2DActor::SetGenerateGrid(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_GetGenerateGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateGrid() :
      op->vtkGridAxes2DActor::GetGenerateGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_GenerateGridOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGridOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateGridOn();
    }
    else
    {
      op->vtkGridAxes2DActor::GenerateGridOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_GenerateGridOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGridOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateGridOff();
    }
    else
    {
      op->vtkGridAxes2DActor::GenerateGridOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_SetGenerateEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

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
      op->vtkGridAxes2DActor::SetGenerateEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_GetGenerateEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateEdges() :
      op->vtkGridAxes2DActor::GetGenerateEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_GenerateEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateEdgesOn();
    }
    else
    {
      op->vtkGridAxes2DActor::GenerateEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_GenerateEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateEdgesOff();
    }
    else
    {
      op->vtkGridAxes2DActor::GenerateEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_SetGenerateTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

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
      op->vtkGridAxes2DActor::SetGenerateTicks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_GetGenerateTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateTicks() :
      op->vtkGridAxes2DActor::GetGenerateTicks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_GenerateTicksOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTicksOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTicksOn();
    }
    else
    {
      op->vtkGridAxes2DActor::GenerateTicksOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_GenerateTicksOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTicksOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTicksOff();
    }
    else
    {
      op->vtkGridAxes2DActor::GenerateTicksOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkGridAxes2DActor::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_SetForceOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceOpaque(temp0);
    }
    else
    {
      op->vtkGridAxes2DActor::SetForceOpaque(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_GetForceOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceOpaque() :
      op->vtkGridAxes2DActor::GetForceOpaque());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_ForceOpaqueOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOpaqueOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceOpaqueOn();
    }
    else
    {
      op->vtkGridAxes2DActor::ForceOpaqueOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_ForceOpaqueOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOpaqueOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceOpaqueOff();
    }
    else
    {
      op->vtkGridAxes2DActor::ForceOpaqueOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkGridAxes2DActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkGridAxes2DActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkGridAxes2DActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkGridAxes2DActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

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
      op->vtkGridAxes2DActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes2DActor_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes2DActor *op = static_cast<vtkGridAxes2DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGridAxes2DActor::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGridAxes2DActor_Methods[] = {
  {"IsTypeOf", PyvtkGridAxes2DActor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGridAxes2DActor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGridAxes2DActor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGridAxes2DActor\nC++: static vtkGridAxes2DActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGridAxes2DActor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGridAxes2DActor\nC++: vtkGridAxes2DActor *NewInstance()\n\n"},
  {"SetGridBounds", PyvtkGridAxes2DActor_SetGridBounds, METH_VARARGS,
   "V.SetGridBounds(float, float, float, float, float, float)\nC++: void SetGridBounds(double, double, double, double, double,\n    double)\nV.SetGridBounds((float, float, float, float, float, float))\nC++: void SetGridBounds(double a[6])\n\n"},
  {"GetGridBounds", PyvtkGridAxes2DActor_GetGridBounds, METH_VARARGS,
   "V.GetGridBounds() -> (float, float, float, float, float, float)\nC++: double *GetGridBounds()\n\n"},
  {"SetFace", PyvtkGridAxes2DActor_SetFace, METH_VARARGS,
   "V.SetFace(int)\nC++: virtual void SetFace(int _arg)\n\nIndicate which face of the specified bounds is this class\noperating with.\n"},
  {"GetFaceMinValue", PyvtkGridAxes2DActor_GetFaceMinValue, METH_VARARGS,
   "V.GetFaceMinValue() -> int\nC++: virtual int GetFaceMinValue()\n\nIndicate which face of the specified bounds is this class\noperating with.\n"},
  {"GetFaceMaxValue", PyvtkGridAxes2DActor_GetFaceMaxValue, METH_VARARGS,
   "V.GetFaceMaxValue() -> int\nC++: virtual int GetFaceMaxValue()\n\nIndicate which face of the specified bounds is this class\noperating with.\n"},
  {"GetFace", PyvtkGridAxes2DActor_GetFace, METH_VARARGS,
   "V.GetFace() -> int\nC++: virtual int GetFace()\n\nIndicate which face of the specified bounds is this class\noperating with.\n"},
  {"SetLabelMask", PyvtkGridAxes2DActor_SetLabelMask, METH_VARARGS,
   "V.SetLabelMask(int)\nC++: virtual void SetLabelMask(unsigned int _arg)\n\nSet the axes to label. The mask can be generated by or-ing values\nin vtkGridAxes2DActor::LabelMasks to label multiple axes. Any\nrequest to label an axes not present on the selected `Face` is\nignored e.g. if `Face` is `MIN_YZ`, then `LabelMask` set to\n`MIN_X` will have no effect.\n"},
  {"GetLabelMask", PyvtkGridAxes2DActor_GetLabelMask, METH_VARARGS,
   "V.GetLabelMask() -> int\nC++: virtual unsigned int GetLabelMask()\n\nSet the axes to label. The mask can be generated by or-ing values\nin vtkGridAxes2DActor::LabelMasks to label multiple axes. Any\nrequest to label an axes not present on the selected `Face` is\nignored e.g. if `Face` is `MIN_YZ`, then `LabelMask` set to\n`MIN_X` will have no effect.\n"},
  {"SetProperty", PyvtkGridAxes2DActor_SetProperty, METH_VARARGS,
   "V.SetProperty(vtkProperty)\nC++: void SetProperty(vtkProperty *)\n\nGet/Set the property used to control the appearance of the\nrendered grid, including edges.\n"},
  {"GetProperty", PyvtkGridAxes2DActor_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkProperty\nC++: vtkProperty *GetProperty()\n\nGet/Set the property used to control the appearance of the\nrendered grid, including edges.\n"},
  {"SetTitleTextProperty", PyvtkGridAxes2DActor_SetTitleTextProperty, METH_VARARGS,
   "V.SetTitleTextProperty(int, vtkTextProperty)\nC++: void SetTitleTextProperty(int axis, vtkTextProperty *)\n\nGet/Set the title text properties for each of the coordinate\naxes. Which properties will be used depends on the selected Face\nbeing rendered.\n"},
  {"GetTitleTextProperty", PyvtkGridAxes2DActor_GetTitleTextProperty, METH_VARARGS,
   "V.GetTitleTextProperty(int) -> vtkTextProperty\nC++: vtkTextProperty *GetTitleTextProperty(int axis)\n\nGet/Set the title text properties for each of the coordinate\naxes. Which properties will be used depends on the selected Face\nbeing rendered.\n"},
  {"SetLabelTextProperty", PyvtkGridAxes2DActor_SetLabelTextProperty, METH_VARARGS,
   "V.SetLabelTextProperty(int, vtkTextProperty)\nC++: void SetLabelTextProperty(int axis, vtkTextProperty *)\n\nGet/Set the label text properties for each of the coordinate\naxes. Which properties will be used depends on the selected Face\nbeing rendered.\n"},
  {"GetLabelTextProperty", PyvtkGridAxes2DActor_GetLabelTextProperty, METH_VARARGS,
   "V.GetLabelTextProperty(int) -> vtkTextProperty\nC++: vtkTextProperty *GetLabelTextProperty(int axis)\n\nGet/Set the label text properties for each of the coordinate\naxes. Which properties will be used depends on the selected Face\nbeing rendered.\n"},
  {"SetTitle", PyvtkGridAxes2DActor_SetTitle, METH_VARARGS,
   "V.SetTitle(int, string)\nC++: void SetTitle(int axis, const vtkStdString &title)\n\nSet titles for each of the axes.\n"},
  {"GetTitle", PyvtkGridAxes2DActor_GetTitle, METH_VARARGS,
   "V.GetTitle(int) -> string\nC++: const vtkStdString &GetTitle(int axis)\n\nSet titles for each of the axes.\n"},
  {"SetNotation", PyvtkGridAxes2DActor_SetNotation, METH_VARARGS,
   "V.SetNotation(int, int)\nC++: void SetNotation(int axis, int notation)\n\nGet/set the numerical notation, standard, scientific or mixed (0,\n1, 2). Accepted values are vtkAxis::AUTO, vtkAxis::FIXED,\nvtkAxis::CUSTOM.\n"},
  {"GetNotation", PyvtkGridAxes2DActor_GetNotation, METH_VARARGS,
   "V.GetNotation(int) -> int\nC++: int GetNotation(int axis)\n\nGet/set the numerical notation, standard, scientific or mixed (0,\n1, 2). Accepted values are vtkAxis::AUTO, vtkAxis::FIXED,\nvtkAxis::CUSTOM.\n"},
  {"SetPrecision", PyvtkGridAxes2DActor_SetPrecision, METH_VARARGS,
   "V.SetPrecision(int, int)\nC++: void SetPrecision(int axis, int val)\n\nGet/set the numerical precision to use, default is 2.\n"},
  {"GetPrecision", PyvtkGridAxes2DActor_GetPrecision, METH_VARARGS,
   "V.GetPrecision(int) -> int\nC++: int GetPrecision(int axis)\n\nGet/set the numerical precision to use, default is 2.\n"},
  {"SetCustomTickPositions", PyvtkGridAxes2DActor_SetCustomTickPositions, METH_VARARGS,
   "V.SetCustomTickPositions(int, vtkDoubleArray)\nC++: void SetCustomTickPositions(int axis,\n    vtkDoubleArray *positions)\n\nSet custom tick positions for each of the axes. The positions are\ndeep copied. Set to NULL to not use custom tick positions for the\naxis.\n"},
  {"SetGenerateGrid", PyvtkGridAxes2DActor_SetGenerateGrid, METH_VARARGS,
   "V.SetGenerateGrid(bool)\nC++: void SetGenerateGrid(bool val)\n\nTurn off to not generate polydata for the plane's grid.\n"},
  {"GetGenerateGrid", PyvtkGridAxes2DActor_GetGenerateGrid, METH_VARARGS,
   "V.GetGenerateGrid() -> bool\nC++: bool GetGenerateGrid()\n\nTurn off to not generate polydata for the plane's grid.\n"},
  {"GenerateGridOn", PyvtkGridAxes2DActor_GenerateGridOn, METH_VARARGS,
   "V.GenerateGridOn()\nC++: virtual void GenerateGridOn()\n\nTurn off to not generate polydata for the plane's grid.\n"},
  {"GenerateGridOff", PyvtkGridAxes2DActor_GenerateGridOff, METH_VARARGS,
   "V.GenerateGridOff()\nC++: virtual void GenerateGridOff()\n\nTurn off to not generate polydata for the plane's grid.\n"},
  {"SetGenerateEdges", PyvtkGridAxes2DActor_SetGenerateEdges, METH_VARARGS,
   "V.SetGenerateEdges(bool)\nC++: void SetGenerateEdges(bool val)\n\nTurn off to not generate the polydata for the plane's edges.\n"},
  {"GetGenerateEdges", PyvtkGridAxes2DActor_GetGenerateEdges, METH_VARARGS,
   "V.GetGenerateEdges() -> bool\nC++: bool GetGenerateEdges()\n\nTurn off to not generate the polydata for the plane's edges.\n"},
  {"GenerateEdgesOn", PyvtkGridAxes2DActor_GenerateEdgesOn, METH_VARARGS,
   "V.GenerateEdgesOn()\nC++: virtual void GenerateEdgesOn()\n\nTurn off to not generate the polydata for the plane's edges.\n"},
  {"GenerateEdgesOff", PyvtkGridAxes2DActor_GenerateEdgesOff, METH_VARARGS,
   "V.GenerateEdgesOff()\nC++: virtual void GenerateEdgesOff()\n\nTurn off to not generate the polydata for the plane's edges.\n"},
  {"SetGenerateTicks", PyvtkGridAxes2DActor_SetGenerateTicks, METH_VARARGS,
   "V.SetGenerateTicks(bool)\nC++: void SetGenerateTicks(bool val)\n\nTurn off to not generate the markers for the tick positions.\nWhich edges are rendered is defined by the TickMask.\n"},
  {"GetGenerateTicks", PyvtkGridAxes2DActor_GetGenerateTicks, METH_VARARGS,
   "V.GetGenerateTicks() -> bool\nC++: bool GetGenerateTicks()\n\nTurn off to not generate the markers for the tick positions.\nWhich edges are rendered is defined by the TickMask.\n"},
  {"GenerateTicksOn", PyvtkGridAxes2DActor_GenerateTicksOn, METH_VARARGS,
   "V.GenerateTicksOn()\nC++: virtual void GenerateTicksOn()\n\nTurn off to not generate the markers for the tick positions.\nWhich edges are rendered is defined by the TickMask.\n"},
  {"GenerateTicksOff", PyvtkGridAxes2DActor_GenerateTicksOff, METH_VARARGS,
   "V.GenerateTicksOff()\nC++: virtual void GenerateTicksOff()\n\nTurn off to not generate the markers for the tick positions.\nWhich edges are rendered is defined by the TickMask.\n"},
  {"GetBounds", PyvtkGridAxes2DActor_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nReturns the prop bounds.\n"},
  {"SetForceOpaque", PyvtkGridAxes2DActor_SetForceOpaque, METH_VARARGS,
   "V.SetForceOpaque(bool)\nC++: virtual void SetForceOpaque(bool _arg)\n\nIf true, the actor will always be rendered during the opaque\npass.\n"},
  {"GetForceOpaque", PyvtkGridAxes2DActor_GetForceOpaque, METH_VARARGS,
   "V.GetForceOpaque() -> bool\nC++: virtual bool GetForceOpaque()\n\nIf true, the actor will always be rendered during the opaque\npass.\n"},
  {"ForceOpaqueOn", PyvtkGridAxes2DActor_ForceOpaqueOn, METH_VARARGS,
   "V.ForceOpaqueOn()\nC++: virtual void ForceOpaqueOn()\n\nIf true, the actor will always be rendered during the opaque\npass.\n"},
  {"ForceOpaqueOff", PyvtkGridAxes2DActor_ForceOpaqueOff, METH_VARARGS,
   "V.ForceOpaqueOff()\nC++: virtual void ForceOpaqueOff()\n\nIf true, the actor will always be rendered during the opaque\npass.\n"},
  {"RenderOpaqueGeometry", PyvtkGridAxes2DActor_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkGridAxes2DActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\n"},
  {"RenderOverlay", PyvtkGridAxes2DActor_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkGridAxes2DActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"ReleaseGraphicsResources", PyvtkGridAxes2DActor_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"GetMTime", PyvtkGridAxes2DActor_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverridden to include the mtime for the text properties.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGridAxes2DActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkGridAxes2DActor", // tp_name
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
  PyvtkGridAxes2DActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGridAxes2DActor_StaticNew()
{
  return vtkGridAxes2DActor::New();
}

PyObject *PyvtkGridAxes2DActor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGridAxes2DActor_Type, PyvtkGridAxes2DActor_Methods,
    "vtkGridAxes2DActor",
 &PyvtkGridAxes2DActor_StaticNew);

  PyTypeObject *pytype = &PyvtkGridAxes2DActor_Type;

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

  PyType_Ready(&PyvtkGridAxes2DActor_Faces_Type);
  PyvtkGridAxes2DActor_Faces_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkGridAxes2DActor_Faces_Type);

  o = (PyObject *)&PyvtkGridAxes2DActor_Faces_Type;
  if (PyDict_SetItemString(d, "Faces", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkGridAxes2DActor_LabelMasks_Type);
  PyvtkGridAxes2DActor_LabelMasks_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkGridAxes2DActor_LabelMasks_Type);

  o = (PyObject *)&PyvtkGridAxes2DActor_LabelMasks_Type;
  if (PyDict_SetItemString(d, "LabelMasks", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkGridAxes2DActor::Faces cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "MIN_YZ", vtkGridAxes2DActor::MIN_YZ },
        { "MIN_ZX", vtkGridAxes2DActor::MIN_ZX },
        { "MIN_XY", vtkGridAxes2DActor::MIN_XY },
        { "MAX_YZ", vtkGridAxes2DActor::MAX_YZ },
        { "MAX_ZX", vtkGridAxes2DActor::MAX_ZX },
        { "MAX_XY", vtkGridAxes2DActor::MAX_XY },
      };

    o = PyvtkGridAxes2DActor_Faces_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkGridAxes2DActor::LabelMasks cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "MIN_X", vtkGridAxes2DActor::MIN_X },
        { "MIN_Y", vtkGridAxes2DActor::MIN_Y },
        { "MIN_Z", vtkGridAxes2DActor::MIN_Z },
        { "MAX_X", vtkGridAxes2DActor::MAX_X },
        { "MAX_Y", vtkGridAxes2DActor::MAX_Y },
        { "MAX_Z", vtkGridAxes2DActor::MAX_Z },
      };

    o = PyvtkGridAxes2DActor_LabelMasks_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGridAxes2DActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGridAxes2DActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGridAxes2DActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

