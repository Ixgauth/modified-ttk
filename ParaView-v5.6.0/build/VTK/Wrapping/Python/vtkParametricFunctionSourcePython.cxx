// python wrapper for vtkParametricFunctionSource
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
#include "vtkParametricFunctionSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParametricFunctionSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkParametricFunctionSource_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkParametricFunctionSource_Doc =
  "vtkParametricFunctionSource - tessellate parametric functions\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "This class tessellates parametric functions. The user must specify\n"
  "how many points in the parametric coordinate directions are required\n"
  "(i.e., the resolution), and the mode to use to generate scalars.\n\n"
  "@par Thanks: Andrew Maclean andrew.amaclean@gmail.com for creating\n"
  "and contributing the class.\n\n"
  "@sa\n"
  "vtkParametricFunction\n\n"
  "@sa\n"
  "Implementation of parametrics for 1D lines: vtkParametricSpline\n\n"
  "@sa\n"
  "Subclasses of vtkParametricFunction implementing non-orentable\n"
  "surfaces: vtkParametricBoy vtkParametricCrossCap\n"
  "vtkParametricFigure8Klein vtkParametricKlein vtkParametricMobius\n"
  "vtkParametricRoman\n\n"
  "@sa\n"
  "Subclasses of vtkParametricFunction implementing orientable surfaces:\n"
  "vtkParametricConicSpiral vtkParametricDini vtkParametricEllipsoid\n"
  "vtkParametricEnneper vtkParametricRandomHills\n"
  "vtkParametricSuperEllipsoid vtkParametricSuperToroid\n"
  "vtkParametricTorus\n\n";

static PyTypeObject PyvtkParametricFunctionSource_SCALAR_MODE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkParametricFunctionSource.SCALAR_MODE", // tp_name
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

PyObject *PyvtkParametricFunctionSource_SCALAR_MODE_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkParametricFunctionSource_SCALAR_MODE_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkParametricFunctionSource_SCALAR_MODE_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkParametricFunctionSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParametricFunctionSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParametricFunctionSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParametricFunctionSource *tempr = vtkParametricFunctionSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParametricFunctionSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParametricFunctionSource::NewInstance());

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
PyvtkParametricFunctionSource_SetParametricFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParametricFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  vtkParametricFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkParametricFunction"))
  {
    if (ap.IsBound())
    {
      op->SetParametricFunction(temp0);
    }
    else
    {
      op->vtkParametricFunctionSource::SetParametricFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetParametricFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParametricFunction *tempr = (ap.IsBound() ?
      op->GetParametricFunction() :
      op->vtkParametricFunctionSource::GetParametricFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetUResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUResolution(temp0);
    }
    else
    {
      op->vtkParametricFunctionSource::SetUResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetUResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUResolutionMinValue() :
      op->vtkParametricFunctionSource::GetUResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetUResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUResolutionMaxValue() :
      op->vtkParametricFunctionSource::GetUResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetUResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUResolution() :
      op->vtkParametricFunctionSource::GetUResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetVResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVResolution(temp0);
    }
    else
    {
      op->vtkParametricFunctionSource::SetVResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetVResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVResolutionMinValue() :
      op->vtkParametricFunctionSource::GetVResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetVResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVResolutionMaxValue() :
      op->vtkParametricFunctionSource::GetVResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetVResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVResolution() :
      op->vtkParametricFunctionSource::GetVResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetWResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWResolution(temp0);
    }
    else
    {
      op->vtkParametricFunctionSource::SetWResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetWResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWResolutionMinValue() :
      op->vtkParametricFunctionSource::GetWResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetWResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWResolutionMaxValue() :
      op->vtkParametricFunctionSource::GetWResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetWResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWResolution() :
      op->vtkParametricFunctionSource::GetWResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GenerateTextureCoordinatesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTextureCoordinatesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTextureCoordinatesOn();
    }
    else
    {
      op->vtkParametricFunctionSource::GenerateTextureCoordinatesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GenerateTextureCoordinatesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTextureCoordinatesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTextureCoordinatesOff();
    }
    else
    {
      op->vtkParametricFunctionSource::GenerateTextureCoordinatesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetGenerateTextureCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTextureCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTextureCoordinates(temp0);
    }
    else
    {
      op->vtkParametricFunctionSource::SetGenerateTextureCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetGenerateTextureCoordinatesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTextureCoordinatesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTextureCoordinatesMinValue() :
      op->vtkParametricFunctionSource::GetGenerateTextureCoordinatesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetGenerateTextureCoordinatesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTextureCoordinatesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTextureCoordinatesMaxValue() :
      op->vtkParametricFunctionSource::GetGenerateTextureCoordinatesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetGenerateTextureCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTextureCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTextureCoordinates() :
      op->vtkParametricFunctionSource::GetGenerateTextureCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GenerateNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateNormalsOn();
    }
    else
    {
      op->vtkParametricFunctionSource::GenerateNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GenerateNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateNormalsOff();
    }
    else
    {
      op->vtkParametricFunctionSource::GenerateNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetGenerateNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateNormals(temp0);
    }
    else
    {
      op->vtkParametricFunctionSource::SetGenerateNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetGenerateNormalsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateNormalsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateNormalsMinValue() :
      op->vtkParametricFunctionSource::GetGenerateNormalsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetGenerateNormalsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateNormalsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateNormalsMaxValue() :
      op->vtkParametricFunctionSource::GetGenerateNormalsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetGenerateNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateNormals() :
      op->vtkParametricFunctionSource::GetGenerateNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarMode(temp0);
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetScalarModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarModeMinValue() :
      op->vtkParametricFunctionSource::GetScalarModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetScalarModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarModeMaxValue() :
      op->vtkParametricFunctionSource::GetScalarModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarMode() :
      op->vtkParametricFunctionSource::GetScalarMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToNone();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToNone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToU();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToU();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToV();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToV();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToU0(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToU0");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToU0();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToU0();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToV0(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToV0");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToV0();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToV0();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToU0V0(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToU0V0");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToU0V0();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToU0V0();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToModulus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToModulus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToModulus();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToModulus();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToPhase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToPhase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToPhase();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToPhase();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToQuadrant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToQuadrant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToQuadrant();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToQuadrant();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToX();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToX();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToY();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToZ();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToDistance();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToDistance();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToFunctionDefined(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToFunctionDefined");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToFunctionDefined();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToFunctionDefined();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkParametricFunctionSource::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkParametricFunctionSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkParametricFunctionSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkParametricFunctionSource_Methods[] = {
  {"IsTypeOf", PyvtkParametricFunctionSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParametricFunctionSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParametricFunctionSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkParametricFunctionSource\nC++: static vtkParametricFunctionSource *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParametricFunctionSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkParametricFunctionSource\nC++: vtkParametricFunctionSource *NewInstance()\n\n"},
  {"SetParametricFunction", PyvtkParametricFunctionSource_SetParametricFunction, METH_VARARGS,
   "V.SetParametricFunction(vtkParametricFunction)\nC++: virtual void SetParametricFunction(vtkParametricFunction *)\n\nSpecify the parametric function to use to generate the\ntessellation.\n"},
  {"GetParametricFunction", PyvtkParametricFunctionSource_GetParametricFunction, METH_VARARGS,
   "V.GetParametricFunction() -> vtkParametricFunction\nC++: virtual vtkParametricFunction *GetParametricFunction()\n\nSpecify the parametric function to use to generate the\ntessellation.\n"},
  {"SetUResolution", PyvtkParametricFunctionSource_SetUResolution, METH_VARARGS,
   "V.SetUResolution(int)\nC++: virtual void SetUResolution(int _arg)\n\nSet/Get the number of subdivisions / tessellations in the u\nparametric direction. Note that the number of tessellant points\nin the u direction is the UResolution + 1.\n"},
  {"GetUResolutionMinValue", PyvtkParametricFunctionSource_GetUResolutionMinValue, METH_VARARGS,
   "V.GetUResolutionMinValue() -> int\nC++: virtual int GetUResolutionMinValue()\n\nSet/Get the number of subdivisions / tessellations in the u\nparametric direction. Note that the number of tessellant points\nin the u direction is the UResolution + 1.\n"},
  {"GetUResolutionMaxValue", PyvtkParametricFunctionSource_GetUResolutionMaxValue, METH_VARARGS,
   "V.GetUResolutionMaxValue() -> int\nC++: virtual int GetUResolutionMaxValue()\n\nSet/Get the number of subdivisions / tessellations in the u\nparametric direction. Note that the number of tessellant points\nin the u direction is the UResolution + 1.\n"},
  {"GetUResolution", PyvtkParametricFunctionSource_GetUResolution, METH_VARARGS,
   "V.GetUResolution() -> int\nC++: virtual int GetUResolution()\n\nSet/Get the number of subdivisions / tessellations in the u\nparametric direction. Note that the number of tessellant points\nin the u direction is the UResolution + 1.\n"},
  {"SetVResolution", PyvtkParametricFunctionSource_SetVResolution, METH_VARARGS,
   "V.SetVResolution(int)\nC++: virtual void SetVResolution(int _arg)\n\nSet/Get the number of subdivisions / tessellations in the v\nparametric direction. Note that the number of tessellant points\nin the v direction is the VResolution + 1.\n"},
  {"GetVResolutionMinValue", PyvtkParametricFunctionSource_GetVResolutionMinValue, METH_VARARGS,
   "V.GetVResolutionMinValue() -> int\nC++: virtual int GetVResolutionMinValue()\n\nSet/Get the number of subdivisions / tessellations in the v\nparametric direction. Note that the number of tessellant points\nin the v direction is the VResolution + 1.\n"},
  {"GetVResolutionMaxValue", PyvtkParametricFunctionSource_GetVResolutionMaxValue, METH_VARARGS,
   "V.GetVResolutionMaxValue() -> int\nC++: virtual int GetVResolutionMaxValue()\n\nSet/Get the number of subdivisions / tessellations in the v\nparametric direction. Note that the number of tessellant points\nin the v direction is the VResolution + 1.\n"},
  {"GetVResolution", PyvtkParametricFunctionSource_GetVResolution, METH_VARARGS,
   "V.GetVResolution() -> int\nC++: virtual int GetVResolution()\n\nSet/Get the number of subdivisions / tessellations in the v\nparametric direction. Note that the number of tessellant points\nin the v direction is the VResolution + 1.\n"},
  {"SetWResolution", PyvtkParametricFunctionSource_SetWResolution, METH_VARARGS,
   "V.SetWResolution(int)\nC++: virtual void SetWResolution(int _arg)\n\nSet/Get the number of subdivisions / tessellations in the w\nparametric direction. Note that the number of tessellant points\nin the w direction is the WResolution + 1.\n"},
  {"GetWResolutionMinValue", PyvtkParametricFunctionSource_GetWResolutionMinValue, METH_VARARGS,
   "V.GetWResolutionMinValue() -> int\nC++: virtual int GetWResolutionMinValue()\n\nSet/Get the number of subdivisions / tessellations in the w\nparametric direction. Note that the number of tessellant points\nin the w direction is the WResolution + 1.\n"},
  {"GetWResolutionMaxValue", PyvtkParametricFunctionSource_GetWResolutionMaxValue, METH_VARARGS,
   "V.GetWResolutionMaxValue() -> int\nC++: virtual int GetWResolutionMaxValue()\n\nSet/Get the number of subdivisions / tessellations in the w\nparametric direction. Note that the number of tessellant points\nin the w direction is the WResolution + 1.\n"},
  {"GetWResolution", PyvtkParametricFunctionSource_GetWResolution, METH_VARARGS,
   "V.GetWResolution() -> int\nC++: virtual int GetWResolution()\n\nSet/Get the number of subdivisions / tessellations in the w\nparametric direction. Note that the number of tessellant points\nin the w direction is the WResolution + 1.\n"},
  {"GenerateTextureCoordinatesOn", PyvtkParametricFunctionSource_GenerateTextureCoordinatesOn, METH_VARARGS,
   "V.GenerateTextureCoordinatesOn()\nC++: virtual void GenerateTextureCoordinatesOn()\n\nSet/Get the generation of texture coordinates. This is off by\ndefault. Note that this is only applicable to parametric surfaces\nwhose parametric dimension is 2. Note that texturing may fail in\nsome cases.\n"},
  {"GenerateTextureCoordinatesOff", PyvtkParametricFunctionSource_GenerateTextureCoordinatesOff, METH_VARARGS,
   "V.GenerateTextureCoordinatesOff()\nC++: virtual void GenerateTextureCoordinatesOff()\n\nSet/Get the generation of texture coordinates. This is off by\ndefault. Note that this is only applicable to parametric surfaces\nwhose parametric dimension is 2. Note that texturing may fail in\nsome cases.\n"},
  {"SetGenerateTextureCoordinates", PyvtkParametricFunctionSource_SetGenerateTextureCoordinates, METH_VARARGS,
   "V.SetGenerateTextureCoordinates(int)\nC++: virtual void SetGenerateTextureCoordinates(vtkTypeBool _arg)\n\nSet/Get the generation of texture coordinates. This is off by\ndefault. Note that this is only applicable to parametric surfaces\nwhose parametric dimension is 2. Note that texturing may fail in\nsome cases.\n"},
  {"GetGenerateTextureCoordinatesMinValue", PyvtkParametricFunctionSource_GetGenerateTextureCoordinatesMinValue, METH_VARARGS,
   "V.GetGenerateTextureCoordinatesMinValue() -> int\nC++: virtual vtkTypeBool GetGenerateTextureCoordinatesMinValue()\n\nSet/Get the generation of texture coordinates. This is off by\ndefault. Note that this is only applicable to parametric surfaces\nwhose parametric dimension is 2. Note that texturing may fail in\nsome cases.\n"},
  {"GetGenerateTextureCoordinatesMaxValue", PyvtkParametricFunctionSource_GetGenerateTextureCoordinatesMaxValue, METH_VARARGS,
   "V.GetGenerateTextureCoordinatesMaxValue() -> int\nC++: virtual vtkTypeBool GetGenerateTextureCoordinatesMaxValue()\n\nSet/Get the generation of texture coordinates. This is off by\ndefault. Note that this is only applicable to parametric surfaces\nwhose parametric dimension is 2. Note that texturing may fail in\nsome cases.\n"},
  {"GetGenerateTextureCoordinates", PyvtkParametricFunctionSource_GetGenerateTextureCoordinates, METH_VARARGS,
   "V.GetGenerateTextureCoordinates() -> int\nC++: virtual vtkTypeBool GetGenerateTextureCoordinates()\n\nSet/Get the generation of texture coordinates. This is off by\ndefault. Note that this is only applicable to parametric surfaces\nwhose parametric dimension is 2. Note that texturing may fail in\nsome cases.\n"},
  {"GenerateNormalsOn", PyvtkParametricFunctionSource_GenerateNormalsOn, METH_VARARGS,
   "V.GenerateNormalsOn()\nC++: virtual void GenerateNormalsOn()\n\nSet/Get the generation of normals. This is on by default. Note\nthat this is only applicable to parametric surfaces whose\nparametric dimension is 2.\n"},
  {"GenerateNormalsOff", PyvtkParametricFunctionSource_GenerateNormalsOff, METH_VARARGS,
   "V.GenerateNormalsOff()\nC++: virtual void GenerateNormalsOff()\n\nSet/Get the generation of normals. This is on by default. Note\nthat this is only applicable to parametric surfaces whose\nparametric dimension is 2.\n"},
  {"SetGenerateNormals", PyvtkParametricFunctionSource_SetGenerateNormals, METH_VARARGS,
   "V.SetGenerateNormals(int)\nC++: virtual void SetGenerateNormals(vtkTypeBool _arg)\n\nSet/Get the generation of normals. This is on by default. Note\nthat this is only applicable to parametric surfaces whose\nparametric dimension is 2.\n"},
  {"GetGenerateNormalsMinValue", PyvtkParametricFunctionSource_GetGenerateNormalsMinValue, METH_VARARGS,
   "V.GetGenerateNormalsMinValue() -> int\nC++: virtual vtkTypeBool GetGenerateNormalsMinValue()\n\nSet/Get the generation of normals. This is on by default. Note\nthat this is only applicable to parametric surfaces whose\nparametric dimension is 2.\n"},
  {"GetGenerateNormalsMaxValue", PyvtkParametricFunctionSource_GetGenerateNormalsMaxValue, METH_VARARGS,
   "V.GetGenerateNormalsMaxValue() -> int\nC++: virtual vtkTypeBool GetGenerateNormalsMaxValue()\n\nSet/Get the generation of normals. This is on by default. Note\nthat this is only applicable to parametric surfaces whose\nparametric dimension is 2.\n"},
  {"GetGenerateNormals", PyvtkParametricFunctionSource_GetGenerateNormals, METH_VARARGS,
   "V.GetGenerateNormals() -> int\nC++: virtual vtkTypeBool GetGenerateNormals()\n\nSet/Get the generation of normals. This is on by default. Note\nthat this is only applicable to parametric surfaces whose\nparametric dimension is 2.\n"},
  {"SetScalarMode", PyvtkParametricFunctionSource_SetScalarMode, METH_VARARGS,
   "V.SetScalarMode(int)\nC++: virtual void SetScalarMode(int _arg)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {"GetScalarModeMinValue", PyvtkParametricFunctionSource_GetScalarModeMinValue, METH_VARARGS,
   "V.GetScalarModeMinValue() -> int\nC++: virtual int GetScalarModeMinValue()\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {"GetScalarModeMaxValue", PyvtkParametricFunctionSource_GetScalarModeMaxValue, METH_VARARGS,
   "V.GetScalarModeMaxValue() -> int\nC++: virtual int GetScalarModeMaxValue()\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {"GetScalarMode", PyvtkParametricFunctionSource_GetScalarMode, METH_VARARGS,
   "V.GetScalarMode() -> int\nC++: virtual int GetScalarMode()\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {"SetScalarModeToNone", PyvtkParametricFunctionSource_SetScalarModeToNone, METH_VARARGS,
   "V.SetScalarModeToNone()\nC++: void SetScalarModeToNone(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {"SetScalarModeToU", PyvtkParametricFunctionSource_SetScalarModeToU, METH_VARARGS,
   "V.SetScalarModeToU()\nC++: void SetScalarModeToU(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {"SetScalarModeToV", PyvtkParametricFunctionSource_SetScalarModeToV, METH_VARARGS,
   "V.SetScalarModeToV()\nC++: void SetScalarModeToV(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {"SetScalarModeToU0", PyvtkParametricFunctionSource_SetScalarModeToU0, METH_VARARGS,
   "V.SetScalarModeToU0()\nC++: void SetScalarModeToU0(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {"SetScalarModeToV0", PyvtkParametricFunctionSource_SetScalarModeToV0, METH_VARARGS,
   "V.SetScalarModeToV0()\nC++: void SetScalarModeToV0(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {"SetScalarModeToU0V0", PyvtkParametricFunctionSource_SetScalarModeToU0V0, METH_VARARGS,
   "V.SetScalarModeToU0V0()\nC++: void SetScalarModeToU0V0(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {"SetScalarModeToModulus", PyvtkParametricFunctionSource_SetScalarModeToModulus, METH_VARARGS,
   "V.SetScalarModeToModulus()\nC++: void SetScalarModeToModulus(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {"SetScalarModeToPhase", PyvtkParametricFunctionSource_SetScalarModeToPhase, METH_VARARGS,
   "V.SetScalarModeToPhase()\nC++: void SetScalarModeToPhase(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {"SetScalarModeToQuadrant", PyvtkParametricFunctionSource_SetScalarModeToQuadrant, METH_VARARGS,
   "V.SetScalarModeToQuadrant()\nC++: void SetScalarModeToQuadrant(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {"SetScalarModeToX", PyvtkParametricFunctionSource_SetScalarModeToX, METH_VARARGS,
   "V.SetScalarModeToX()\nC++: void SetScalarModeToX(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {"SetScalarModeToY", PyvtkParametricFunctionSource_SetScalarModeToY, METH_VARARGS,
   "V.SetScalarModeToY()\nC++: void SetScalarModeToY(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {"SetScalarModeToZ", PyvtkParametricFunctionSource_SetScalarModeToZ, METH_VARARGS,
   "V.SetScalarModeToZ()\nC++: void SetScalarModeToZ(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {"SetScalarModeToDistance", PyvtkParametricFunctionSource_SetScalarModeToDistance, METH_VARARGS,
   "V.SetScalarModeToDistance()\nC++: void SetScalarModeToDistance(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {"SetScalarModeToFunctionDefined", PyvtkParametricFunctionSource_SetScalarModeToFunctionDefined, METH_VARARGS,
   "V.SetScalarModeToFunctionDefined()\nC++: void SetScalarModeToFunctionDefined(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {"GetMTime", PyvtkParametricFunctionSource_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also considering the parametric function.\n"},
  {"SetOutputPointsPrecision", PyvtkParametricFunctionSource_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkParametricFunctionSource_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkParametricFunctionSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkParametricFunctionSource", // tp_name
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
  PyvtkParametricFunctionSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParametricFunctionSource_StaticNew()
{
  return vtkParametricFunctionSource::New();
}

PyObject *PyvtkParametricFunctionSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkParametricFunctionSource_Type, PyvtkParametricFunctionSource_Methods,
    "vtkParametricFunctionSource",
 &PyvtkParametricFunctionSource_StaticNew);

  PyTypeObject *pytype = &PyvtkParametricFunctionSource_Type;

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

  PyType_Ready(&PyvtkParametricFunctionSource_SCALAR_MODE_Type);
  PyvtkParametricFunctionSource_SCALAR_MODE_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkParametricFunctionSource_SCALAR_MODE_Type);

  o = (PyObject *)&PyvtkParametricFunctionSource_SCALAR_MODE_Type;
  if (PyDict_SetItemString(d, "SCALAR_MODE", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 14; c++)
  {
    typedef vtkParametricFunctionSource::SCALAR_MODE cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[14] = {
        { "SCALAR_NONE", vtkParametricFunctionSource::SCALAR_NONE },
        { "SCALAR_U", vtkParametricFunctionSource::SCALAR_U },
        { "SCALAR_V", vtkParametricFunctionSource::SCALAR_V },
        { "SCALAR_U0", vtkParametricFunctionSource::SCALAR_U0 },
        { "SCALAR_V0", vtkParametricFunctionSource::SCALAR_V0 },
        { "SCALAR_U0V0", vtkParametricFunctionSource::SCALAR_U0V0 },
        { "SCALAR_MODULUS", vtkParametricFunctionSource::SCALAR_MODULUS },
        { "SCALAR_PHASE", vtkParametricFunctionSource::SCALAR_PHASE },
        { "SCALAR_QUADRANT", vtkParametricFunctionSource::SCALAR_QUADRANT },
        { "SCALAR_X", vtkParametricFunctionSource::SCALAR_X },
        { "SCALAR_Y", vtkParametricFunctionSource::SCALAR_Y },
        { "SCALAR_Z", vtkParametricFunctionSource::SCALAR_Z },
        { "SCALAR_DISTANCE", vtkParametricFunctionSource::SCALAR_DISTANCE },
        { "SCALAR_FUNCTION_DEFINED", vtkParametricFunctionSource::SCALAR_FUNCTION_DEFINED },
      };

    o = PyvtkParametricFunctionSource_SCALAR_MODE_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkParametricFunctionSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParametricFunctionSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParametricFunctionSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

