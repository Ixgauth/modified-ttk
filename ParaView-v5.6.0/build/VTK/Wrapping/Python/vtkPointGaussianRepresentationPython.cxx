// python wrapper for vtkPointGaussianRepresentation
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
#include "vtkPointGaussianRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointGaussianRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPointGaussianRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkPVDataRepresentation_ClassNew
extern "C" { PyObject *PyvtkPVDataRepresentation_ClassNew(); }
#define DECLARED_PyvtkPVDataRepresentation_ClassNew
#endif

static const char *PyvtkPointGaussianRepresentation_Doc =
  "vtkPointGaussianRepresentation - Representation for showing point\ndata as sprites, including gaussian splats, spheres, or some custom\nshaded representation.\n\n"
  "Superclass: vtkPVDataRepresentation\n\n"
;

static PyTypeObject PyvtkPointGaussianRepresentation_ShaderPresets_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPointGaussianRepresentation.ShaderPresets", // tp_name
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

PyObject *PyvtkPointGaussianRepresentation_ShaderPresets_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkPointGaussianRepresentation_ShaderPresets_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPointGaussianRepresentation_ShaderPresets_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkPointGaussianRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointGaussianRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointGaussianRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointGaussianRepresentation *tempr = vtkPointGaussianRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointGaussianRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointGaussianRepresentation::NewInstance());

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
PyvtkPointGaussianRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  vtkInformationRequestKey *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->ProcessViewRequest(temp0, temp1, temp2) :
      op->vtkPointGaussianRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility(temp0);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetEmissive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEmissive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEmissive(temp0);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetEmissive(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetMapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMapScalars(temp0);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetMapScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

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
      op->SetOrientation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetOrientation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

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
      op->vtkPointGaussianRepresentation::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetPickable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickable(temp0);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetPickable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

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
      op->SetScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetAmbientColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbientColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

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
      op->SetAmbientColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetAmbientColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

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
      op->SetColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetDiffuseColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

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
      op->SetDiffuseColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetDiffuseColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetEdgeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

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
      op->SetEdgeColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetEdgeColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolation(temp0);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetInterpolation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineWidth(temp0);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacity(temp0);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointSize(temp0);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetPointSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetSpecularColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

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
      op->SetSpecularColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetSpecularColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetSpecularPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpecularPower(temp0);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetSpecularPower(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetSplatSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplatSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSplatSize(temp0);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetSplatSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SelectShaderPreset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectShaderPreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectShaderPreset(temp0);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SelectShaderPreset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetCustomShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCustomShader(temp0);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetCustomShader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetCustomTriangleScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomTriangleScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCustomTriangleScale(temp0);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetCustomTriangleScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SelectScaleArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectScaleArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SelectScaleArray(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SelectScaleArray(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SelectScaleArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectScaleArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectScaleArrayComponent(temp0);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SelectScaleArrayComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetUseScaleFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseScaleFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseScaleFunction(temp0);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetUseScaleFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetScaleTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  vtkPiecewiseFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetScaleTransferFunction(temp0);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetScaleTransferFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetOpacityTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacityTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  vtkPiecewiseFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetOpacityTransferFunction(temp0);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetOpacityTransferFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SelectOpacityArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectOpacityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SelectOpacityArray(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SelectOpacityArray(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SelectOpacityArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectOpacityArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectOpacityArrayComponent(temp0);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SelectOpacityArrayComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetOpacityByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacityByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacityByArray(temp0);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetOpacityByArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_GetOpacityByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOpacityByArray() :
      op->vtkPointGaussianRepresentation::GetOpacityByArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_OpacityByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpacityByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OpacityByArrayOn();
    }
    else
    {
      op->vtkPointGaussianRepresentation::OpacityByArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_OpacityByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpacityByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OpacityByArrayOff();
    }
    else
    {
      op->vtkPointGaussianRepresentation::OpacityByArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_SetScaleByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleByArray(temp0);
    }
    else
    {
      op->vtkPointGaussianRepresentation::SetScaleByArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_GetScaleByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScaleByArray() :
      op->vtkPointGaussianRepresentation::GetScaleByArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_ScaleByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleByArrayOn();
    }
    else
    {
      op->vtkPointGaussianRepresentation::ScaleByArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianRepresentation_ScaleByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianRepresentation *op = static_cast<vtkPointGaussianRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleByArrayOff();
    }
    else
    {
      op->vtkPointGaussianRepresentation::ScaleByArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPointGaussianRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkPointGaussianRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointGaussianRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointGaussianRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPointGaussianRepresentation\nC++: static vtkPointGaussianRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointGaussianRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPointGaussianRepresentation\nC++: vtkPointGaussianRepresentation *NewInstance()\n\n"},
  {"ProcessViewRequest", PyvtkPointGaussianRepresentation_ProcessViewRequest, METH_VARARGS,
   "V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo) override;\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering. Overridden to skip processing when\nvisibility if off.\n"},
  {"SetLookupTable", PyvtkPointGaussianRepresentation_SetLookupTable, METH_VARARGS,
   "V.SetLookupTable(vtkScalarsToColors)\nC++: void SetLookupTable(vtkScalarsToColors *lut)\n\nUse to set the color map for the data in this representation\n"},
  {"SetVisibility", PyvtkPointGaussianRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool val) override;\n\nUse to set whether the data in this representation is visible or\nnot\n"},
  {"SetEmissive", PyvtkPointGaussianRepresentation_SetEmissive, METH_VARARGS,
   "V.SetEmissive(bool)\nC++: virtual void SetEmissive(bool val)\n\nUse to set whether the splat emits light\n"},
  {"SetMapScalars", PyvtkPointGaussianRepresentation_SetMapScalars, METH_VARARGS,
   "V.SetMapScalars(int)\nC++: virtual void SetMapScalars(int val)\n\nUse to make sure scalars will be mapped through lookup table, and\nnot inadvertently used as colors by themselves.\n"},
  {"SetOrientation", PyvtkPointGaussianRepresentation_SetOrientation, METH_VARARGS,
   "V.SetOrientation(float, float, float)\nC++: virtual void SetOrientation(double, double, double)\n\n"},
  {"SetOrigin", PyvtkPointGaussianRepresentation_SetOrigin, METH_VARARGS,
   "V.SetOrigin(float, float, float)\nC++: virtual void SetOrigin(double, double, double)\n\n"},
  {"SetPickable", PyvtkPointGaussianRepresentation_SetPickable, METH_VARARGS,
   "V.SetPickable(int)\nC++: virtual void SetPickable(int val)\n\n"},
  {"SetPosition", PyvtkPointGaussianRepresentation_SetPosition, METH_VARARGS,
   "V.SetPosition(float, float, float)\nC++: virtual void SetPosition(double, double, double)\n\n"},
  {"SetScale", PyvtkPointGaussianRepresentation_SetScale, METH_VARARGS,
   "V.SetScale(float, float, float)\nC++: virtual void SetScale(double, double, double)\n\n"},
  {"SetAmbientColor", PyvtkPointGaussianRepresentation_SetAmbientColor, METH_VARARGS,
   "V.SetAmbientColor(float, float, float)\nC++: virtual void SetAmbientColor(double r, double g, double b)\n\n"},
  {"SetColor", PyvtkPointGaussianRepresentation_SetColor, METH_VARARGS,
   "V.SetColor(float, float, float)\nC++: virtual void SetColor(double r, double g, double b)\n\n"},
  {"SetDiffuseColor", PyvtkPointGaussianRepresentation_SetDiffuseColor, METH_VARARGS,
   "V.SetDiffuseColor(float, float, float)\nC++: virtual void SetDiffuseColor(double r, double g, double b)\n\n"},
  {"SetEdgeColor", PyvtkPointGaussianRepresentation_SetEdgeColor, METH_VARARGS,
   "V.SetEdgeColor(float, float, float)\nC++: virtual void SetEdgeColor(double r, double g, double b)\n\n"},
  {"SetInterpolation", PyvtkPointGaussianRepresentation_SetInterpolation, METH_VARARGS,
   "V.SetInterpolation(int)\nC++: virtual void SetInterpolation(int val)\n\n"},
  {"SetLineWidth", PyvtkPointGaussianRepresentation_SetLineWidth, METH_VARARGS,
   "V.SetLineWidth(float)\nC++: virtual void SetLineWidth(double val)\n\n"},
  {"SetOpacity", PyvtkPointGaussianRepresentation_SetOpacity, METH_VARARGS,
   "V.SetOpacity(float)\nC++: virtual void SetOpacity(double val)\n\n"},
  {"SetPointSize", PyvtkPointGaussianRepresentation_SetPointSize, METH_VARARGS,
   "V.SetPointSize(float)\nC++: virtual void SetPointSize(double val)\n\n"},
  {"SetSpecularColor", PyvtkPointGaussianRepresentation_SetSpecularColor, METH_VARARGS,
   "V.SetSpecularColor(float, float, float)\nC++: virtual void SetSpecularColor(double r, double g, double b)\n\n"},
  {"SetSpecularPower", PyvtkPointGaussianRepresentation_SetSpecularPower, METH_VARARGS,
   "V.SetSpecularPower(float)\nC++: virtual void SetSpecularPower(double val)\n\n"},
  {"SetSplatSize", PyvtkPointGaussianRepresentation_SetSplatSize, METH_VARARGS,
   "V.SetSplatSize(float)\nC++: virtual void SetSplatSize(double radius)\n\nSets the radius of the gaussian splats if there is no scale array\nor if the scale array is disabled.  Defaults to 1.\n"},
  {"SelectShaderPreset", PyvtkPointGaussianRepresentation_SelectShaderPreset, METH_VARARGS,
   "V.SelectShaderPreset(int)\nC++: void SelectShaderPreset(int preset)\n\nAllows to select one of several preset options for shading the\npoints\n"},
  {"SetCustomShader", PyvtkPointGaussianRepresentation_SetCustomShader, METH_VARARGS,
   "V.SetCustomShader(string)\nC++: void SetCustomShader(const char *shaderString)\n\nSets the snippet of fragment shader code used to color the\nsprites.\n"},
  {"SetCustomTriangleScale", PyvtkPointGaussianRepresentation_SetCustomTriangleScale, METH_VARARGS,
   "V.SetCustomTriangleScale(float)\nC++: void SetCustomTriangleScale(double scale)\n\nSets the scale of the triangle geometry drawn for the custom\nshader\n"},
  {"SelectScaleArray", PyvtkPointGaussianRepresentation_SelectScaleArray, METH_VARARGS,
   "V.SelectScaleArray(int, int, int, int, string)\nC++: void SelectScaleArray(int, int, int, int, const char *name)\n\nSets the point array to scale the guassians by.  The array should\nbe a float array.  The first four parameters are unused and only\nneeded for the ParaView GUI's signature recognition.\n"},
  {"SelectScaleArrayComponent", PyvtkPointGaussianRepresentation_SelectScaleArrayComponent, METH_VARARGS,
   "V.SelectScaleArrayComponent(int)\nC++: void SelectScaleArrayComponent(int component)\n\nSets the point array component to scale the gaussians by.\n"},
  {"SetUseScaleFunction", PyvtkPointGaussianRepresentation_SetUseScaleFunction, METH_VARARGS,
   "V.SetUseScaleFunction(bool)\nC++: void SetUseScaleFunction(bool enable)\n\nUse scale transfer function. If false, no mapping is done.\n"},
  {"SetScaleTransferFunction", PyvtkPointGaussianRepresentation_SetScaleTransferFunction, METH_VARARGS,
   "V.SetScaleTransferFunction(vtkPiecewiseFunction)\nC++: void SetScaleTransferFunction(vtkPiecewiseFunction *pwf)\n\nSets a vtkPiecewiseFunction to use in mapping array values to\nsprite sizes.  Performance decreases (along with\nunderstandability) when large values are used for sprite sizes. \nThis is only used when \"SetScaleArray\" is also set.\n"},
  {"SetOpacityTransferFunction", PyvtkPointGaussianRepresentation_SetOpacityTransferFunction, METH_VARARGS,
   "V.SetOpacityTransferFunction(vtkPiecewiseFunction)\nC++: void SetOpacityTransferFunction(vtkPiecewiseFunction *pwf)\n\nSets a vtkPiecewiseFunction to use in mapping array values to\nsprite opacities.  Only used when \"Opacity Array\" is set.\n"},
  {"SelectOpacityArray", PyvtkPointGaussianRepresentation_SelectOpacityArray, METH_VARARGS,
   "V.SelectOpacityArray(int, int, int, int, string)\nC++: void SelectOpacityArray(int, int, int, int, const char *name)\n\nSets the point array to use in calculating point sprite\nopacities. The array should be a float or double array.  The\nfirst four parameters are unused and only needed for the ParaView\nGUI's signature recognition.\n"},
  {"SelectOpacityArrayComponent", PyvtkPointGaussianRepresentation_SelectOpacityArrayComponent, METH_VARARGS,
   "V.SelectOpacityArrayComponent(int)\nC++: void SelectOpacityArrayComponent(int component)\n\nSets the point array component to opacify the gaussians with.\n"},
  {"SetOpacityByArray", PyvtkPointGaussianRepresentation_SetOpacityByArray, METH_VARARGS,
   "V.SetOpacityByArray(bool)\nC++: void SetOpacityByArray(bool newVal)\n\nEnables or disables setting opacity by an array.  Set which array\nshould be used for opacity with SelectOpacityArray, and set an\nopacity transfer function with SetOpacityTransferFunction.\n"},
  {"GetOpacityByArray", PyvtkPointGaussianRepresentation_GetOpacityByArray, METH_VARARGS,
   "V.GetOpacityByArray() -> bool\nC++: virtual bool GetOpacityByArray()\n\nEnables or disables setting opacity by an array.  Set which array\nshould be used for opacity with SelectOpacityArray, and set an\nopacity transfer function with SetOpacityTransferFunction.\n"},
  {"OpacityByArrayOn", PyvtkPointGaussianRepresentation_OpacityByArrayOn, METH_VARARGS,
   "V.OpacityByArrayOn()\nC++: virtual void OpacityByArrayOn()\n\nEnables or disables setting opacity by an array.  Set which array\nshould be used for opacity with SelectOpacityArray, and set an\nopacity transfer function with SetOpacityTransferFunction.\n"},
  {"OpacityByArrayOff", PyvtkPointGaussianRepresentation_OpacityByArrayOff, METH_VARARGS,
   "V.OpacityByArrayOff()\nC++: virtual void OpacityByArrayOff()\n\nEnables or disables setting opacity by an array.  Set which array\nshould be used for opacity with SelectOpacityArray, and set an\nopacity transfer function with SetOpacityTransferFunction.\n"},
  {"SetScaleByArray", PyvtkPointGaussianRepresentation_SetScaleByArray, METH_VARARGS,
   "V.SetScaleByArray(bool)\nC++: void SetScaleByArray(bool newVal)\n\nEnables or disables scaling by a data array vs. a constant\nfactor.  Set which data array with SelectScaleArray and\nSetSplatSize.\n"},
  {"GetScaleByArray", PyvtkPointGaussianRepresentation_GetScaleByArray, METH_VARARGS,
   "V.GetScaleByArray() -> bool\nC++: virtual bool GetScaleByArray()\n\nEnables or disables scaling by a data array vs. a constant\nfactor.  Set which data array with SelectScaleArray and\nSetSplatSize.\n"},
  {"ScaleByArrayOn", PyvtkPointGaussianRepresentation_ScaleByArrayOn, METH_VARARGS,
   "V.ScaleByArrayOn()\nC++: virtual void ScaleByArrayOn()\n\nEnables or disables scaling by a data array vs. a constant\nfactor.  Set which data array with SelectScaleArray and\nSetSplatSize.\n"},
  {"ScaleByArrayOff", PyvtkPointGaussianRepresentation_ScaleByArrayOff, METH_VARARGS,
   "V.ScaleByArrayOff()\nC++: virtual void ScaleByArrayOff()\n\nEnables or disables scaling by a data array vs. a constant\nfactor.  Set which data array with SelectScaleArray and\nSetSplatSize.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPointGaussianRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPointGaussianRepresentation", // tp_name
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
  PyvtkPointGaussianRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointGaussianRepresentation_StaticNew()
{
  return vtkPointGaussianRepresentation::New();
}

PyObject *PyvtkPointGaussianRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPointGaussianRepresentation_Type, PyvtkPointGaussianRepresentation_Methods,
    "vtkPointGaussianRepresentation",
 &PyvtkPointGaussianRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkPointGaussianRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVDataRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPointGaussianRepresentation_ShaderPresets_Type);
  PyvtkPointGaussianRepresentation_ShaderPresets_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkPointGaussianRepresentation_ShaderPresets_Type);

  o = (PyObject *)&PyvtkPointGaussianRepresentation_ShaderPresets_Type;
  if (PyDict_SetItemString(d, "ShaderPresets", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 8; c++)
  {
    typedef vtkPointGaussianRepresentation::ShaderPresets cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[8] = {
        { "GAUSSIAN_BLUR", vtkPointGaussianRepresentation::GAUSSIAN_BLUR },
        { "SPHERE", vtkPointGaussianRepresentation::SPHERE },
        { "BLACK_EDGED_CIRCLE", vtkPointGaussianRepresentation::BLACK_EDGED_CIRCLE },
        { "PLAIN_CIRCLE", vtkPointGaussianRepresentation::PLAIN_CIRCLE },
        { "TRIANGLE", vtkPointGaussianRepresentation::TRIANGLE },
        { "SQUARE_OUTLINE", vtkPointGaussianRepresentation::SQUARE_OUTLINE },
        { "CUSTOM", vtkPointGaussianRepresentation::CUSTOM },
        { "NUMBER_OF_PRESETS", vtkPointGaussianRepresentation::NUMBER_OF_PRESETS },
      };

    o = PyvtkPointGaussianRepresentation_ShaderPresets_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointGaussianRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointGaussianRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointGaussianRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

