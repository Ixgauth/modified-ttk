// python wrapper for vtkScalarsToColors
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
#include "vtkScalarsToColors.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkScalarsToColors(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkScalarsToColors_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkScalarsToColors_Doc =
  "vtkScalarsToColors - Superclass for mapping scalar values to colors\n\n"
  "Superclass: vtkObject\n\n"
  "vtkScalarsToColors is a general-purpose base class for objects that\n"
  "convert scalars to colors. This include vtkLookupTable classes and\n"
  "color transfer functions.  By itself, this class will simply rescale\n"
  "the scalars.\n\n"
  "The scalar-to-color mapping can be augmented with an additional\n"
  "uniform alpha blend. This is used, for example, to blend a vtkActor's\n"
  "opacity with the lookup table values.\n\n"
  "Specific scalar values may be annotated with text strings that will\n"
  "be included in color legends using SetAnnotations,\n"
  "SetAnnotation,GetNumberOfAnnotatedValues, GetAnnotatedValue,\n"
  "GetAnnotation,RemoveAnnotation, and ResetAnnotations.\n\n"
  "This class also has a method for indicating that the set of annotated\n"
  "values form a categorical color map; by setting \\a IndexedLookup to\n"
  "true, you indicate that the annotated values are the only valid\n"
  "values for which entries in the color table should be returned. In\n"
  "this mode, subclasses should then assign colors to annotated values\n"
  "by taking the modulus of an annotated value's index in the list of\n"
  "annotations with the number of colors in the table.\n\n"
  "@sa\n"
  "vtkLookupTable vtkColorTransferFunction\n\n";

static PyTypeObject PyvtkScalarsToColors_VectorModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkScalarsToColors.VectorModes", // tp_name
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

PyObject *PyvtkScalarsToColors_VectorModes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkScalarsToColors_VectorModes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkScalarsToColors_VectorModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkScalarsToColors_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkScalarsToColors::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkScalarsToColors::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkScalarsToColors *tempr = vtkScalarsToColors::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkScalarsToColors::NewInstance());

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
PyvtkScalarsToColors_IsOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsOpaque() :
      op->vtkScalarsToColors::IsOpaque());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_Build(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Build();
    }
    else
    {
      op->vtkScalarsToColors::Build();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRange() :
      op->vtkScalarsToColors::GetRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

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
      op->vtkScalarsToColors::SetRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkScalarsToColors_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

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
      op->vtkScalarsToColors::SetRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkScalarsToColors_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkScalarsToColors_SetRange_s1(self, args);
    case 1:
      return PyvtkScalarsToColors_SetRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return nullptr;
}



static PyObject *
PyvtkScalarsToColors_MapValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned char *tempr = (ap.IsBound() ?
      op->MapValue(temp0) :
      op->vtkScalarsToColors::MapValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  double temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetColor(temp0, temp1);
    }
    else
    {
      op->vtkScalarsToColors::GetColor(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkScalarsToColors_GetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  double temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetColor(temp0) :
      op->vtkScalarsToColors::GetColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkScalarsToColors_GetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkScalarsToColors_GetColor_s1(self, args);
    case 1:
      return PyvtkScalarsToColors_GetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetColor");
  return nullptr;
}



static PyObject *
PyvtkScalarsToColors_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacity(temp0) :
      op->vtkScalarsToColors::GetOpacity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLuminance(temp0) :
      op->vtkScalarsToColors::GetLuminance(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlpha(temp0);
    }
    else
    {
      op->vtkScalarsToColors::SetAlpha(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAlpha() :
      op->vtkScalarsToColors::GetAlpha());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_MapScalars_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkDataArray *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->MapScalars(temp0, temp1, temp2) :
      op->vtkScalarsToColors::MapScalars(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkScalarsToColors_MapScalars_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->MapScalars(temp0, temp1, temp2) :
      op->vtkScalarsToColors::MapScalars(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkScalarsToColors_MapScalars_Methods[] = {
  {nullptr, PyvtkScalarsToColors_MapScalars_s1, METH_VARARGS,
   "@Vii *vtkDataArray"},
  {nullptr, PyvtkScalarsToColors_MapScalars_s2, METH_VARARGS,
   "@Vii *vtkAbstractArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkScalarsToColors_MapScalars(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkScalarsToColors_MapScalars_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "MapScalars");
  return nullptr;
}



static PyObject *
PyvtkScalarsToColors_SetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorMode(temp0);
    }
    else
    {
      op->vtkScalarsToColors::SetVectorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorMode() :
      op->vtkScalarsToColors::GetVectorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetVectorModeToMagnitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToMagnitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVectorModeToMagnitude();
    }
    else
    {
      op->vtkScalarsToColors::SetVectorModeToMagnitude();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetVectorModeToComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVectorModeToComponent();
    }
    else
    {
      op->vtkScalarsToColors::SetVectorModeToComponent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetVectorModeToRGBColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToRGBColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVectorModeToRGBColors();
    }
    else
    {
      op->vtkScalarsToColors::SetVectorModeToRGBColors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetVectorComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorComponent(temp0);
    }
    else
    {
      op->vtkScalarsToColors::SetVectorComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetVectorComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorComponent() :
      op->vtkScalarsToColors::GetVectorComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetVectorSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorSize(temp0);
    }
    else
    {
      op->vtkScalarsToColors::SetVectorSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetVectorSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorSize() :
      op->vtkScalarsToColors::GetVectorSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_MapVectorsThroughTable_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapVectorsThroughTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned char> store1(2*size1);
  unsigned char *temp1 = store1.Data();
  unsigned char *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  int temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->MapVectorsThroughTable(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkScalarsToColors::MapVectorsThroughTable(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}

static PyObject *
PyvtkScalarsToColors_MapVectorsThroughTable_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapVectorsThroughTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned char> store1(2*size1);
  unsigned char *temp1 = store1.Data();
  unsigned char *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->MapVectorsThroughTable(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkScalarsToColors::MapVectorsThroughTable(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}

static PyObject *
PyvtkScalarsToColors_MapVectorsThroughTable(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 8:
      return PyvtkScalarsToColors_MapVectorsThroughTable_s1(self, args);
    case 6:
      return PyvtkScalarsToColors_MapVectorsThroughTable_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "MapVectorsThroughTable");
  return nullptr;
}



static PyObject *
PyvtkScalarsToColors_MapScalarsThroughTable_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalarsThroughTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkDataArray *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned char> store1(2*size1);
  unsigned char *temp1 = store1.Data();
  unsigned char *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->MapScalarsThroughTable(temp0, temp1, temp2);
    }
    else
    {
      op->vtkScalarsToColors::MapScalarsThroughTable(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkScalarsToColors_MapScalarsThroughTable_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalarsThroughTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkDataArray *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned char> store1(2*size1);
  unsigned char *temp1 = store1.Data();
  unsigned char *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->MapScalarsThroughTable(temp0, temp1);
    }
    else
    {
      op->vtkScalarsToColors::MapScalarsThroughTable(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkScalarsToColors_MapScalarsThroughTable_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalarsThroughTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned char> store1(2*size1);
  unsigned char *temp1 = store1.Data();
  unsigned char *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->MapScalarsThroughTable(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkScalarsToColors::MapScalarsThroughTable(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}

static PyObject *
PyvtkScalarsToColors_MapScalarsThroughTable(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkScalarsToColors_MapScalarsThroughTable_s1(self, args);
    case 2:
      return PyvtkScalarsToColors_MapScalarsThroughTable_s2(self, args);
    case 6:
      return PyvtkScalarsToColors_MapScalarsThroughTable_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "MapScalarsThroughTable");
  return nullptr;
}



static PyObject *
PyvtkScalarsToColors_MapScalarsThroughTable2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalarsThroughTable2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned char> store1(2*size1);
  unsigned char *temp1 = store1.Data();
  unsigned char *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->MapScalarsThroughTable2(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkScalarsToColors::MapScalarsThroughTable2(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkScalarsToColors_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkScalarsToColors::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_UsingLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsingLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->UsingLogScale() :
      op->vtkScalarsToColors::UsingLogScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetNumberOfAvailableColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAvailableColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfAvailableColors() :
      op->vtkScalarsToColors::GetNumberOfAvailableColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  vtkStringArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetVTKObject(temp1, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetAnnotations(temp0, temp1);
    }
    else
    {
      op->vtkScalarsToColors::SetAnnotations(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetAnnotatedValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotatedValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetAnnotatedValues() :
      op->vtkScalarsToColors::GetAnnotatedValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetAnnotations() :
      op->vtkScalarsToColors::GetAnnotations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetAnnotation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetValue(temp1))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->SetAnnotation(*temp0, temp1) :
      op->vtkScalarsToColors::SetAnnotation(*temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkScalarsToColors_SetAnnotation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkStdString temp0;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->SetAnnotation(temp0, temp1) :
      op->vtkScalarsToColors::SetAnnotation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkScalarsToColors_SetAnnotation_Methods[] = {
  {nullptr, PyvtkScalarsToColors_SetAnnotation_s1, METH_VARARGS,
   "@Ws vtkVariant"},
  {nullptr, PyvtkScalarsToColors_SetAnnotation_s2, METH_VARARGS,
   "@ss"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkScalarsToColors_SetAnnotation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkScalarsToColors_SetAnnotation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAnnotation");
  return nullptr;
}



static PyObject *
PyvtkScalarsToColors_GetNumberOfAnnotatedValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAnnotatedValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfAnnotatedValues() :
      op->vtkScalarsToColors::GetNumberOfAnnotatedValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetAnnotatedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotatedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetAnnotatedValue(temp0) :
      op->vtkScalarsToColors::GetAnnotatedValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetAnnotation(temp0) :
      op->vtkScalarsToColors::GetAnnotation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetAnnotationColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetAnnotationColor(*temp0, temp1);
    }
    else
    {
      op->vtkScalarsToColors::GetAnnotationColor(*temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetAnnotatedValueIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotatedValueIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetAnnotatedValueIndex(*temp0) :
      op->vtkScalarsToColors::GetAnnotatedValueIndex(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetAnnotatedValueIndexInternal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotatedValueIndexInternal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetAnnotatedValueIndexInternal(*temp0) :
      op->vtkScalarsToColors::GetAnnotatedValueIndexInternal(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetIndexedColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkIdType temp0;
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetIndexedColor(temp0, temp1);
    }
    else
    {
      op->vtkScalarsToColors::GetIndexedColor(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_RemoveAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveAnnotation(*temp0) :
      op->vtkScalarsToColors::RemoveAnnotation(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkScalarsToColors_ResetAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetAnnotations();
    }
    else
    {
      op->vtkScalarsToColors::ResetAnnotations();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetIndexedLookup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexedLookup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIndexedLookup(temp0);
    }
    else
    {
      op->vtkScalarsToColors::SetIndexedLookup(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetIndexedLookup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexedLookup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIndexedLookup() :
      op->vtkScalarsToColors::GetIndexedLookup());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_IndexedLookupOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IndexedLookupOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IndexedLookupOn();
    }
    else
    {
      op->vtkScalarsToColors::IndexedLookupOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColors_IndexedLookupOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IndexedLookupOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IndexedLookupOff();
    }
    else
    {
      op->vtkScalarsToColors::IndexedLookupOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkScalarsToColors_Methods[] = {
  {"IsTypeOf", PyvtkScalarsToColors_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkScalarsToColors_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkScalarsToColors_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkScalarsToColors\nC++: static vtkScalarsToColors *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkScalarsToColors_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkScalarsToColors\nC++: vtkScalarsToColors *NewInstance()\n\n"},
  {"IsOpaque", PyvtkScalarsToColors_IsOpaque, METH_VARARGS,
   "V.IsOpaque() -> int\nC++: virtual int IsOpaque()\n\nReturn true if all of the values defining the mapping have an\nopacity equal to 1. Default implementation returns true.\n"},
  {"Build", PyvtkScalarsToColors_Build, METH_VARARGS,
   "V.Build()\nC++: virtual void Build()\n\nPerform any processing required (if any) before processing\nscalars. Default implementation does nothing.\n"},
  {"GetRange", PyvtkScalarsToColors_GetRange, METH_VARARGS,
   "V.GetRange() -> (float, float)\nC++: virtual double *GetRange()\n\nSets/Gets the range of scalars that will be mapped.\n"},
  {"SetRange", PyvtkScalarsToColors_SetRange, METH_VARARGS,
   "V.SetRange(float, float)\nC++: virtual void SetRange(double min, double max)\nV.SetRange((float, float))\nC++: virtual void SetRange(const double rng[2])\n\nSets/Gets the range of scalars that will be mapped.\n"},
  {"MapValue", PyvtkScalarsToColors_MapValue, METH_VARARGS,
   "V.MapValue(float) -> (int, ...)\nC++: virtual const unsigned char *MapValue(double v)\n\nMap one value through the lookup table and return a color defined\nas an RGBA unsigned char tuple (4 bytes).\n"},
  {"GetColor", PyvtkScalarsToColors_GetColor, METH_VARARGS,
   "V.GetColor(float, [float, float, float])\nC++: virtual void GetColor(double v, double rgb[3])\nV.GetColor(float) -> (float, float, float)\nC++: double *GetColor(double v)\n\nMap one value through the lookup table and store the color as an\nRGB array of doubles between 0 and 1 in the rgb argument.\n"},
  {"GetOpacity", PyvtkScalarsToColors_GetOpacity, METH_VARARGS,
   "V.GetOpacity(float) -> float\nC++: virtual double GetOpacity(double v)\n\nMap one value through the lookup table and return the alpha value\n(the opacity) as a double between 0 and 1. This implementation\nalways returns 1.\n"},
  {"GetLuminance", PyvtkScalarsToColors_GetLuminance, METH_VARARGS,
   "V.GetLuminance(float) -> float\nC++: double GetLuminance(double x)\n\nMap one value through the lookup table and return the luminance\n0.3*red + 0.59*green + 0.11*blue as a double between 0 and 1.\nReturns the luminance value for the specified scalar value.\n"},
  {"SetAlpha", PyvtkScalarsToColors_SetAlpha, METH_VARARGS,
   "V.SetAlpha(float)\nC++: virtual void SetAlpha(double alpha)\n\nSpecify an additional opacity (alpha) value to blend with. Values\n!= 1 modify the resulting color consistent with the requested\nform of the output. This is typically used by an actor in order\nto blend its opacity. Value is clamped between 0 and 1.\n"},
  {"GetAlpha", PyvtkScalarsToColors_GetAlpha, METH_VARARGS,
   "V.GetAlpha() -> float\nC++: virtual double GetAlpha()\n\nSpecify an additional opacity (alpha) value to blend with. Values\n!= 1 modify the resulting color consistent with the requested\nform of the output. This is typically used by an actor in order\nto blend its opacity. Value is clamped between 0 and 1.\n"},
  {"MapScalars", PyvtkScalarsToColors_MapScalars, METH_VARARGS,
   "V.MapScalars(vtkDataArray, int, int) -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *MapScalars(\n    vtkDataArray *scalars, int colorMode, int component)\nV.MapScalars(vtkAbstractArray, int, int) -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *MapScalars(\n    vtkAbstractArray *scalars, int colorMode, int component)\n\nInternal methods that map a data array into a 4-component,\nunsigned char RGBA array. The color mode determines the behavior\nof mapping. If VTK_COLOR_MODE_DEFAULT is set, then unsigned char\ndata arrays are treated as colors (and converted to RGBA if\nnecessary); If VTK_COLOR_MODE_DIRECT_SCALARS is set, then all\narrays are treated as colors (integer types are clamped in the\nrange 0-255, floating point arrays are clamped in the range\n0.0-1.0. Note 'char' does not have enough values to represent a\ncolor so mapping this type is considered an error); otherwise,\nthe data is mapped through this instance of ScalarsToColors. The\ncomponent argument is used for data arrays with more than one\ncomponent; it indicates which component to use to do the\nblending.  When the component argument is -1, then the this\nobject uses its own selected technique to change a vector into a\nscalar to map.\n"},
  {"SetVectorMode", PyvtkScalarsToColors_SetVectorMode, METH_VARARGS,
   "V.SetVectorMode(int)\nC++: virtual void SetVectorMode(int _arg)\n\nChange mode that maps vectors by magnitude vs. component. If the\nmode is \"RGBColors\", then the vectors components are scaled to\nthe range and passed directly as the colors.\n"},
  {"GetVectorMode", PyvtkScalarsToColors_GetVectorMode, METH_VARARGS,
   "V.GetVectorMode() -> int\nC++: virtual int GetVectorMode()\n\nChange mode that maps vectors by magnitude vs. component. If the\nmode is \"RGBColors\", then the vectors components are scaled to\nthe range and passed directly as the colors.\n"},
  {"SetVectorModeToMagnitude", PyvtkScalarsToColors_SetVectorModeToMagnitude, METH_VARARGS,
   "V.SetVectorModeToMagnitude()\nC++: void SetVectorModeToMagnitude()\n\nChange mode that maps vectors by magnitude vs. component. If the\nmode is \"RGBColors\", then the vectors components are scaled to\nthe range and passed directly as the colors.\n"},
  {"SetVectorModeToComponent", PyvtkScalarsToColors_SetVectorModeToComponent, METH_VARARGS,
   "V.SetVectorModeToComponent()\nC++: void SetVectorModeToComponent()\n\nChange mode that maps vectors by magnitude vs. component. If the\nmode is \"RGBColors\", then the vectors components are scaled to\nthe range and passed directly as the colors.\n"},
  {"SetVectorModeToRGBColors", PyvtkScalarsToColors_SetVectorModeToRGBColors, METH_VARARGS,
   "V.SetVectorModeToRGBColors()\nC++: void SetVectorModeToRGBColors()\n\nChange mode that maps vectors by magnitude vs. component. If the\nmode is \"RGBColors\", then the vectors components are scaled to\nthe range and passed directly as the colors.\n"},
  {"SetVectorComponent", PyvtkScalarsToColors_SetVectorComponent, METH_VARARGS,
   "V.SetVectorComponent(int)\nC++: virtual void SetVectorComponent(int _arg)\n\nIf the mapper does not select which component of a vector to map\nto colors, you can specify it here.\n"},
  {"GetVectorComponent", PyvtkScalarsToColors_GetVectorComponent, METH_VARARGS,
   "V.GetVectorComponent() -> int\nC++: virtual int GetVectorComponent()\n\nIf the mapper does not select which component of a vector to map\nto colors, you can specify it here.\n"},
  {"SetVectorSize", PyvtkScalarsToColors_SetVectorSize, METH_VARARGS,
   "V.SetVectorSize(int)\nC++: virtual void SetVectorSize(int _arg)\n\nWhen mapping vectors, consider only the number of components\nselected by VectorSize to be part of the vector, and ignore any\nother components.  Set to -1 to map all components.  If this is\nnot set to -1, then you can use SetVectorComponent to set which\nscalar component will be the first component in the vector to be\nmapped.\n"},
  {"GetVectorSize", PyvtkScalarsToColors_GetVectorSize, METH_VARARGS,
   "V.GetVectorSize() -> int\nC++: virtual int GetVectorSize()\n\nWhen mapping vectors, consider only the number of components\nselected by VectorSize to be part of the vector, and ignore any\nother components.  Set to -1 to map all components.  If this is\nnot set to -1, then you can use SetVectorComponent to set which\nscalar component will be the first component in the vector to be\nmapped.\n"},
  {"MapVectorsThroughTable", PyvtkScalarsToColors_MapVectorsThroughTable, METH_VARARGS,
   "V.MapVectorsThroughTable(void, [int, ...], int, int, int, int,\n    int, int)\nC++: void MapVectorsThroughTable(void *input,\n    unsigned char *output, int inputDataType, int numberOfValues,\n    int inputIncrement, int outputFormat, int vectorComponent,\n    int vectorSize)\nV.MapVectorsThroughTable(void, [int, ...], int, int, int, int)\nC++: void MapVectorsThroughTable(void *input,\n    unsigned char *output, int inputDataType, int numberOfValues,\n    int inputIncrement, int outputFormat)\n\nMap vectors through the lookup table.  Unlike\nMapScalarsThroughTable, this method will use the VectorMode to\ndecide how to map vectors. The output format can be set to\nVTK_RGBA (4 components), VTK_RGB (3 components), VTK_LUMINANCE (1\ncomponent, greyscale), or VTK_LUMINANCE_ALPHA (2 components)\n"},
  {"MapScalarsThroughTable", PyvtkScalarsToColors_MapScalarsThroughTable, METH_VARARGS,
   "V.MapScalarsThroughTable(vtkDataArray, [int, ...], int)\nC++: void MapScalarsThroughTable(vtkDataArray *scalars,\n    unsigned char *output, int outputFormat)\nV.MapScalarsThroughTable(vtkDataArray, [int, ...])\nC++: void MapScalarsThroughTable(vtkDataArray *scalars,\n    unsigned char *output)\nV.MapScalarsThroughTable(void, [int, ...], int, int, int, int)\nC++: void MapScalarsThroughTable(void *input,\n    unsigned char *output, int inputDataType, int numberOfValues,\n    int inputIncrement, int outputFormat)\n\nMap a set of scalars through the lookup table in a single\noperation. This method ignores the VectorMode and the\nVectorComponent. The output format can be set to VTK_RGBA (4\ncomponents), VTK_RGB (3 components), VTK_LUMINANCE (1 component,\ngreyscale), or VTK_LUMINANCE_ALPHA (2 components) If not\nsupplied, the output format defaults to RGBA.\n"},
  {"MapScalarsThroughTable2", PyvtkScalarsToColors_MapScalarsThroughTable2, METH_VARARGS,
   "V.MapScalarsThroughTable2(void, [int, ...], int, int, int, int)\nC++: virtual void MapScalarsThroughTable2(void *input,\n    unsigned char *output, int inputDataType, int numberOfValues,\n    int inputIncrement, int outputFormat)\n\nAn internal method typically not used in applications.  This\nshould be a protected function, but it must be kept public for\nbackwards compatibility.  Never call this method directly.\n"},
  {"DeepCopy", PyvtkScalarsToColors_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkScalarsToColors)\nC++: virtual void DeepCopy(vtkScalarsToColors *o)\n\nCopy the contents from another object.\n"},
  {"UsingLogScale", PyvtkScalarsToColors_UsingLogScale, METH_VARARGS,
   "V.UsingLogScale() -> int\nC++: virtual int UsingLogScale()\n\nThis should return 1 is the subclass is using log scale for\nmapping scalars to colors. Default implementation always returns\n0.\n"},
  {"GetNumberOfAvailableColors", PyvtkScalarsToColors_GetNumberOfAvailableColors, METH_VARARGS,
   "V.GetNumberOfAvailableColors() -> int\nC++: virtual vtkIdType GetNumberOfAvailableColors()\n\nGet the number of available colors for mapping to.\n"},
  {"SetAnnotations", PyvtkScalarsToColors_SetAnnotations, METH_VARARGS,
   "V.SetAnnotations(vtkAbstractArray, vtkStringArray)\nC++: virtual void SetAnnotations(vtkAbstractArray *values,\n    vtkStringArray *annotations)\n\nSet a list of discrete values, either as a categorical set of\nvalues (when IndexedLookup is true) or as a set of annotations to\nadd to a scalar array (when IndexedLookup is false). The two\narrays must both either be nullptr or of the same length or the\ncall will be ignored.\n\n* Note that these arrays are deep copied rather than being used\n  directly\n* in order to support the use case where edits are made. If the\n* values and annotations arrays were held by this class then each\n* call to map scalar values to colors would require us to check\n  the MTime\n* of the arrays.\n"},
  {"GetAnnotatedValues", PyvtkScalarsToColors_GetAnnotatedValues, METH_VARARGS,
   "V.GetAnnotatedValues() -> vtkAbstractArray\nC++: virtual vtkAbstractArray *GetAnnotatedValues()\n\nSet a list of discrete values, either as a categorical set of\nvalues (when IndexedLookup is true) or as a set of annotations to\nadd to a scalar array (when IndexedLookup is false). The two\narrays must both either be nullptr or of the same length or the\ncall will be ignored.\n\n* Note that these arrays are deep copied rather than being used\n  directly\n* in order to support the use case where edits are made. If the\n* values and annotations arrays were held by this class then each\n* call to map scalar values to colors would require us to check\n  the MTime\n* of the arrays.\n"},
  {"GetAnnotations", PyvtkScalarsToColors_GetAnnotations, METH_VARARGS,
   "V.GetAnnotations() -> vtkStringArray\nC++: virtual vtkStringArray *GetAnnotations()\n\nSet a list of discrete values, either as a categorical set of\nvalues (when IndexedLookup is true) or as a set of annotations to\nadd to a scalar array (when IndexedLookup is false). The two\narrays must both either be nullptr or of the same length or the\ncall will be ignored.\n\n* Note that these arrays are deep copied rather than being used\n  directly\n* in order to support the use case where edits are made. If the\n* values and annotations arrays were held by this class then each\n* call to map scalar values to colors would require us to check\n  the MTime\n* of the arrays.\n"},
  {"SetAnnotation", PyvtkScalarsToColors_SetAnnotation, METH_VARARGS,
   "V.SetAnnotation(vtkVariant, string) -> int\nC++: virtual vtkIdType SetAnnotation(vtkVariant value,\n    vtkStdString annotation)\nV.SetAnnotation(string, string) -> int\nC++: virtual vtkIdType SetAnnotation(vtkStdString value,\n    vtkStdString annotation)\n\nAdd a new entry (or change an existing entry) to the list of\nannotated values. Returns the index of value in the list of\nannotations.\n"},
  {"GetNumberOfAnnotatedValues", PyvtkScalarsToColors_GetNumberOfAnnotatedValues, METH_VARARGS,
   "V.GetNumberOfAnnotatedValues() -> int\nC++: vtkIdType GetNumberOfAnnotatedValues()\n\nReturn the annotated value at a particular index in the list of\nannotations.\n"},
  {"GetAnnotatedValue", PyvtkScalarsToColors_GetAnnotatedValue, METH_VARARGS,
   "V.GetAnnotatedValue(int) -> vtkVariant\nC++: vtkVariant GetAnnotatedValue(vtkIdType idx)\n\nReturn the annotated value at a particular index in the list of\nannotations.\n"},
  {"GetAnnotation", PyvtkScalarsToColors_GetAnnotation, METH_VARARGS,
   "V.GetAnnotation(int) -> string\nC++: vtkStdString GetAnnotation(vtkIdType idx)\n\nReturn the annotation at a particular index in the list of\nannotations.\n"},
  {"GetAnnotationColor", PyvtkScalarsToColors_GetAnnotationColor, METH_VARARGS,
   "V.GetAnnotationColor(vtkVariant, [float, float, float, float])\nC++: virtual void GetAnnotationColor(const vtkVariant &val,\n    double rgba[4])\n\nObtain the color associated with a particular annotated value (or\nNanColor if unmatched).\n"},
  {"GetAnnotatedValueIndex", PyvtkScalarsToColors_GetAnnotatedValueIndex, METH_VARARGS,
   "V.GetAnnotatedValueIndex(vtkVariant) -> int\nC++: vtkIdType GetAnnotatedValueIndex(vtkVariant val)\n\nReturn the index of the given value in the list of annotated\nvalues (or -1 if not present).\n"},
  {"GetAnnotatedValueIndexInternal", PyvtkScalarsToColors_GetAnnotatedValueIndexInternal, METH_VARARGS,
   "V.GetAnnotatedValueIndexInternal(vtkVariant) -> int\nC++: vtkIdType GetAnnotatedValueIndexInternal(\n    const vtkVariant &val)\n\nLook up an index into the array of annotations given a value.\nDoes no pointer checks. Returns -1 when val not present.\n"},
  {"GetIndexedColor", PyvtkScalarsToColors_GetIndexedColor, METH_VARARGS,
   "V.GetIndexedColor(int, [float, float, float, float])\nC++: virtual void GetIndexedColor(vtkIdType i, double rgba[4])\n\nGet the \"indexed color\" assigned to an index.\n\n* The index is used in IndexedLookup mode to assign colors to\n  annotations (in the order\n* the annotations were set).\n* Subclasses must implement this and interpret how to treat the\n  index.\n* vtkLookupTable simply returns GetTableValue( index %\n  this->GetNumberOfTableValues()).\n* vtkColorTransferFunction returns the color associated with node\nindex % this->GetSize().\n\n* Note that implementations *must* set the opacity (alpha)\n  component of the color, even if they\n* do not provide opacity values in their colormaps. In that case,\nalpha = 1 should be used.\n"},
  {"RemoveAnnotation", PyvtkScalarsToColors_RemoveAnnotation, METH_VARARGS,
   "V.RemoveAnnotation(vtkVariant) -> bool\nC++: virtual bool RemoveAnnotation(vtkVariant value)\n\nRemove an existing entry from the list of annotated values.\n\n* Returns true when the entry was actually removed (i.e., it\n  existed before the call).\n* Otherwise, returns false.\n"},
  {"ResetAnnotations", PyvtkScalarsToColors_ResetAnnotations, METH_VARARGS,
   "V.ResetAnnotations()\nC++: virtual void ResetAnnotations()\n\nRemove all existing values and their annotations.\n"},
  {"SetIndexedLookup", PyvtkScalarsToColors_SetIndexedLookup, METH_VARARGS,
   "V.SetIndexedLookup(int)\nC++: virtual void SetIndexedLookup(vtkTypeBool _arg)\n\nSet/get whether the lookup table is for categorical or ordinal\ndata. The default is ordinal data; values not present in the\nlookup table will be assigned an interpolated color.\n\n* When categorical data is present, only values in the lookup\n  table will be\n* considered valid; all other values will be assigned NanColor.\n"},
  {"GetIndexedLookup", PyvtkScalarsToColors_GetIndexedLookup, METH_VARARGS,
   "V.GetIndexedLookup() -> int\nC++: virtual vtkTypeBool GetIndexedLookup()\n\nSet/get whether the lookup table is for categorical or ordinal\ndata. The default is ordinal data; values not present in the\nlookup table will be assigned an interpolated color.\n\n* When categorical data is present, only values in the lookup\n  table will be\n* considered valid; all other values will be assigned NanColor.\n"},
  {"IndexedLookupOn", PyvtkScalarsToColors_IndexedLookupOn, METH_VARARGS,
   "V.IndexedLookupOn()\nC++: virtual void IndexedLookupOn()\n\nSet/get whether the lookup table is for categorical or ordinal\ndata. The default is ordinal data; values not present in the\nlookup table will be assigned an interpolated color.\n\n* When categorical data is present, only values in the lookup\n  table will be\n* considered valid; all other values will be assigned NanColor.\n"},
  {"IndexedLookupOff", PyvtkScalarsToColors_IndexedLookupOff, METH_VARARGS,
   "V.IndexedLookupOff()\nC++: virtual void IndexedLookupOff()\n\nSet/get whether the lookup table is for categorical or ordinal\ndata. The default is ordinal data; values not present in the\nlookup table will be assigned an interpolated color.\n\n* When categorical data is present, only values in the lookup\n  table will be\n* considered valid; all other values will be assigned NanColor.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkScalarsToColors_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkScalarsToColors", // tp_name
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
  PyvtkScalarsToColors_Doc, // tp_doc
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

static vtkObjectBase *PyvtkScalarsToColors_StaticNew()
{
  return vtkScalarsToColors::New();
}

PyObject *PyvtkScalarsToColors_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkScalarsToColors_Type, PyvtkScalarsToColors_Methods,
    "vtkScalarsToColors",
 &PyvtkScalarsToColors_StaticNew);

  PyTypeObject *pytype = &PyvtkScalarsToColors_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkScalarsToColors_VectorModes_Type);
  PyvtkScalarsToColors_VectorModes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkScalarsToColors_VectorModes_Type);

  o = (PyObject *)&PyvtkScalarsToColors_VectorModes_Type;
  if (PyDict_SetItemString(d, "VectorModes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkScalarsToColors::VectorModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "MAGNITUDE", vtkScalarsToColors::MAGNITUDE },
        { "COMPONENT", vtkScalarsToColors::COMPONENT },
        { "RGBCOLORS", vtkScalarsToColors::RGBCOLORS },
      };

    o = PyvtkScalarsToColors_VectorModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkScalarsToColors(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkScalarsToColors_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkScalarsToColors", o) != 0)
  {
    Py_DECREF(o);
  }

}

