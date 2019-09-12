// python wrapper for vtkProperty
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
#include "vtkProperty.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProperty(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkProperty_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkProperty_Doc =
  "vtkProperty - represent surface properties of a geometric object\n\n"
  "Superclass: vtkObject\n\n"
  "vtkProperty is an object that represents lighting and other surface\n"
  "properties of a geometric object. The primary properties that can be\n"
  "set are colors (overall, ambient, diffuse, specular, and edge color);\n"
  "specular power; opacity of the object; the representation of the\n"
  "object (points, wireframe, or surface); and the shading method to be\n"
  "used (flat, Gouraud, and Phong). Also, some special graphics features\n"
  "like backface properties can be set and manipulated with this object.\n\n"
  "@sa\n"
  "vtkActor vtkPropertyDevice\n\n";

static PyTypeObject PyvtkProperty_VTKTextureUnit_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkProperty.VTKTextureUnit", // tp_name
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

PyObject *PyvtkProperty_VTKTextureUnit_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkProperty_VTKTextureUnit_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkProperty_VTKTextureUnit_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkProperty_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProperty *tempr = vtkProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProperty::NewInstance());

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
PyvtkProperty_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkProperty::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkActor *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkActor") &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkProperty::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_BackfaceRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackfaceRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkActor *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkActor") &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->BackfaceRender(temp0, temp1);
    }
    else
    {
      op->vtkProperty::BackfaceRender(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_PostRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkActor *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkActor") &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->PostRender(temp0, temp1);
    }
    else
    {
      op->vtkProperty::PostRender(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetLighting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLighting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLighting() :
      op->vtkProperty::GetLighting());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetLighting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLighting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLighting(temp0);
    }
    else
    {
      op->vtkProperty::SetLighting(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_LightingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LightingOn();
    }
    else
    {
      op->vtkProperty::LightingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_LightingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LightingOff();
    }
    else
    {
      op->vtkProperty::LightingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetRenderPointsAsSpheres(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderPointsAsSpheres");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRenderPointsAsSpheres() :
      op->vtkProperty::GetRenderPointsAsSpheres());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetRenderPointsAsSpheres(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderPointsAsSpheres");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderPointsAsSpheres(temp0);
    }
    else
    {
      op->vtkProperty::SetRenderPointsAsSpheres(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_RenderPointsAsSpheresOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPointsAsSpheresOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderPointsAsSpheresOn();
    }
    else
    {
      op->vtkProperty::RenderPointsAsSpheresOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_RenderPointsAsSpheresOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPointsAsSpheresOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderPointsAsSpheresOff();
    }
    else
    {
      op->vtkProperty::RenderPointsAsSpheresOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetRenderLinesAsTubes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderLinesAsTubes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRenderLinesAsTubes() :
      op->vtkProperty::GetRenderLinesAsTubes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetRenderLinesAsTubes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderLinesAsTubes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderLinesAsTubes(temp0);
    }
    else
    {
      op->vtkProperty::SetRenderLinesAsTubes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_RenderLinesAsTubesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLinesAsTubesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderLinesAsTubesOn();
    }
    else
    {
      op->vtkProperty::RenderLinesAsTubesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_RenderLinesAsTubesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLinesAsTubesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderLinesAsTubesOff();
    }
    else
    {
      op->vtkProperty::RenderLinesAsTubesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->vtkProperty::SetInterpolation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetInterpolationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationMinValue() :
      op->vtkProperty::GetInterpolationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetInterpolationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationMaxValue() :
      op->vtkProperty::GetInterpolationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolation() :
      op->vtkProperty::GetInterpolation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetInterpolationToFlat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationToFlat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationToFlat();
    }
    else
    {
      op->vtkProperty::SetInterpolationToFlat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetInterpolationToGouraud(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationToGouraud");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationToGouraud();
    }
    else
    {
      op->vtkProperty::SetInterpolationToGouraud();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetInterpolationToPhong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationToPhong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationToPhong();
    }
    else
    {
      op->vtkProperty::SetInterpolationToPhong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetInterpolationAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetInterpolationAsString() :
      op->vtkProperty::GetInterpolationAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkProperty::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetRepresentationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationMinValue() :
      op->vtkProperty::GetRepresentationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetRepresentationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationMaxValue() :
      op->vtkProperty::GetRepresentationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentation() :
      op->vtkProperty::GetRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetRepresentationToPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationToPoints();
    }
    else
    {
      op->vtkProperty::SetRepresentationToPoints();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetRepresentationToWireframe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToWireframe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationToWireframe();
    }
    else
    {
      op->vtkProperty::SetRepresentationToWireframe();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetRepresentationToSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationToSurface();
    }
    else
    {
      op->vtkProperty::SetRepresentationToSurface();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetRepresentationAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRepresentationAsString() :
      op->vtkProperty::GetRepresentationAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->vtkProperty::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->SetColor(temp0);
    }
    else
    {
      op->vtkProperty::SetColor(temp0);
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
PyvtkProperty_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProperty_SetColor_s1(self, args);
    case 1:
      return PyvtkProperty_SetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}



static PyObject *
PyvtkProperty_GetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkProperty::GetColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_GetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->GetColor(temp0);
    }
    else
    {
      op->vtkProperty::GetColor(temp0);
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
PyvtkProperty_GetColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->GetColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProperty::GetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_GetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkProperty_GetColor_s1(self, args);
    case 1:
      return PyvtkProperty_GetColor_s2(self, args);
    case 3:
      return PyvtkProperty_GetColor_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetColor");
  return nullptr;
}



static PyObject *
PyvtkProperty_SetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAmbient(temp0);
    }
    else
    {
      op->vtkProperty::SetAmbient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetAmbientMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbientMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAmbientMinValue() :
      op->vtkProperty::GetAmbientMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetAmbientMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbientMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAmbientMaxValue() :
      op->vtkProperty::GetAmbientMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAmbient() :
      op->vtkProperty::GetAmbient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDiffuse(temp0);
    }
    else
    {
      op->vtkProperty::SetDiffuse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetDiffuseMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuseMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDiffuseMinValue() :
      op->vtkProperty::GetDiffuseMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetDiffuseMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuseMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDiffuseMaxValue() :
      op->vtkProperty::GetDiffuseMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDiffuse() :
      op->vtkProperty::GetDiffuse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpecular(temp0);
    }
    else
    {
      op->vtkProperty::SetSpecular(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetSpecularMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpecularMinValue() :
      op->vtkProperty::GetSpecularMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetSpecularMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpecularMaxValue() :
      op->vtkProperty::GetSpecularMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpecular() :
      op->vtkProperty::GetSpecular());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetSpecularPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->vtkProperty::SetSpecularPower(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetSpecularPowerMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularPowerMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpecularPowerMinValue() :
      op->vtkProperty::GetSpecularPowerMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetSpecularPowerMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularPowerMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpecularPowerMaxValue() :
      op->vtkProperty::GetSpecularPowerMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetSpecularPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpecularPower() :
      op->vtkProperty::GetSpecularPower());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->vtkProperty::SetOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetOpacityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacityMinValue() :
      op->vtkProperty::GetOpacityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetOpacityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacityMaxValue() :
      op->vtkProperty::GetOpacityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacity() :
      op->vtkProperty::GetOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetAmbientColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbientColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->vtkProperty::SetAmbientColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetAmbientColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbientColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAmbientColor(temp0);
    }
    else
    {
      op->vtkProperty::SetAmbientColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetAmbientColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProperty_SetAmbientColor_s1(self, args);
    case 1:
      return PyvtkProperty_SetAmbientColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAmbientColor");
  return nullptr;
}



static PyObject *
PyvtkProperty_GetAmbientColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbientColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAmbientColor() :
      op->vtkProperty::GetAmbientColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetDiffuseColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->vtkProperty::SetDiffuseColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetDiffuseColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDiffuseColor(temp0);
    }
    else
    {
      op->vtkProperty::SetDiffuseColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetDiffuseColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProperty_SetDiffuseColor_s1(self, args);
    case 1:
      return PyvtkProperty_SetDiffuseColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDiffuseColor");
  return nullptr;
}



static PyObject *
PyvtkProperty_GetDiffuseColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDiffuseColor() :
      op->vtkProperty::GetDiffuseColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetSpecularColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->vtkProperty::SetSpecularColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetSpecularColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSpecularColor(temp0);
    }
    else
    {
      op->vtkProperty::SetSpecularColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetSpecularColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProperty_SetSpecularColor_s1(self, args);
    case 1:
      return PyvtkProperty_SetSpecularColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSpecularColor");
  return nullptr;
}



static PyObject *
PyvtkProperty_GetSpecularColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSpecularColor() :
      op->vtkProperty::GetSpecularColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetEdgeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEdgeVisibility() :
      op->vtkProperty::GetEdgeVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetEdgeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeVisibility(temp0);
    }
    else
    {
      op->vtkProperty::SetEdgeVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_EdgeVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeVisibilityOn();
    }
    else
    {
      op->vtkProperty::EdgeVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_EdgeVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeVisibilityOff();
    }
    else
    {
      op->vtkProperty::EdgeVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetEdgeColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->vtkProperty::SetEdgeColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetEdgeColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeColor(temp0);
    }
    else
    {
      op->vtkProperty::SetEdgeColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetEdgeColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProperty_SetEdgeColor_s1(self, args);
    case 1:
      return PyvtkProperty_SetEdgeColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEdgeColor");
  return nullptr;
}



static PyObject *
PyvtkProperty_GetEdgeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetEdgeColor() :
      op->vtkProperty::GetEdgeColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetVertexVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVertexVisibility() :
      op->vtkProperty::GetVertexVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetVertexVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexVisibility(temp0);
    }
    else
    {
      op->vtkProperty::SetVertexVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_VertexVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VertexVisibilityOn();
    }
    else
    {
      op->vtkProperty::VertexVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_VertexVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VertexVisibilityOff();
    }
    else
    {
      op->vtkProperty::VertexVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetVertexColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->SetVertexColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProperty::SetVertexColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetVertexColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetVertexColor(temp0);
    }
    else
    {
      op->vtkProperty::SetVertexColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetVertexColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProperty_SetVertexColor_s1(self, args);
    case 1:
      return PyvtkProperty_SetVertexColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVertexColor");
  return nullptr;
}



static PyObject *
PyvtkProperty_GetVertexColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetVertexColor() :
      op->vtkProperty::GetVertexColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  float temp0;
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
      op->vtkProperty::SetLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetLineWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLineWidthMinValue() :
      op->vtkProperty::GetLineWidthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetLineWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLineWidthMaxValue() :
      op->vtkProperty::GetLineWidthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLineWidth() :
      op->vtkProperty::GetLineWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetLineStipplePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineStipplePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineStipplePattern(temp0);
    }
    else
    {
      op->vtkProperty::SetLineStipplePattern(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetLineStipplePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStipplePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLineStipplePattern() :
      op->vtkProperty::GetLineStipplePattern());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetLineStippleRepeatFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineStippleRepeatFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineStippleRepeatFactor(temp0);
    }
    else
    {
      op->vtkProperty::SetLineStippleRepeatFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetLineStippleRepeatFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStippleRepeatFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLineStippleRepeatFactorMinValue() :
      op->vtkProperty::GetLineStippleRepeatFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetLineStippleRepeatFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStippleRepeatFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLineStippleRepeatFactorMaxValue() :
      op->vtkProperty::GetLineStippleRepeatFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetLineStippleRepeatFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStippleRepeatFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLineStippleRepeatFactor() :
      op->vtkProperty::GetLineStippleRepeatFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  float temp0;
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
      op->vtkProperty::SetPointSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetPointSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetPointSizeMinValue() :
      op->vtkProperty::GetPointSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetPointSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetPointSizeMaxValue() :
      op->vtkProperty::GetPointSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetPointSize() :
      op->vtkProperty::GetPointSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetBackfaceCulling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackfaceCulling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBackfaceCulling() :
      op->vtkProperty::GetBackfaceCulling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetBackfaceCulling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackfaceCulling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackfaceCulling(temp0);
    }
    else
    {
      op->vtkProperty::SetBackfaceCulling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_BackfaceCullingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackfaceCullingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BackfaceCullingOn();
    }
    else
    {
      op->vtkProperty::BackfaceCullingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_BackfaceCullingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackfaceCullingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BackfaceCullingOff();
    }
    else
    {
      op->vtkProperty::BackfaceCullingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetFrontfaceCulling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrontfaceCulling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFrontfaceCulling() :
      op->vtkProperty::GetFrontfaceCulling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetFrontfaceCulling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrontfaceCulling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFrontfaceCulling(temp0);
    }
    else
    {
      op->vtkProperty::SetFrontfaceCulling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_FrontfaceCullingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FrontfaceCullingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FrontfaceCullingOn();
    }
    else
    {
      op->vtkProperty::FrontfaceCullingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_FrontfaceCullingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FrontfaceCullingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FrontfaceCullingOff();
    }
    else
    {
      op->vtkProperty::FrontfaceCullingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetMaterialName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaterialName(temp0);
    }
    else
    {
      op->vtkProperty::SetMaterialName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetMaterialName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMaterialName() :
      op->vtkProperty::GetMaterialName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetShading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShading(temp0);
    }
    else
    {
      op->vtkProperty::SetShading(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetShading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShading() :
      op->vtkProperty::GetShading());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_ShadingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShadingOn();
    }
    else
    {
      op->vtkProperty::ShadingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_ShadingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShadingOff();
    }
    else
    {
      op->vtkProperty::ShadingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetShaderDeviceAdapter2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderDeviceAdapter2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkShaderDeviceAdapter2 *tempr = (ap.IsBound() ?
      op->GetShaderDeviceAdapter2() :
      op->vtkProperty::GetShaderDeviceAdapter2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_AddShaderVariable_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->AddShaderVariable(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProperty::AddShaderVariable(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_AddShaderVariable_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->AddShaderVariable(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProperty::AddShaderVariable(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_AddShaderVariable_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddShaderVariable(temp0, temp1);
    }
    else
    {
      op->vtkProperty::AddShaderVariable(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_AddShaderVariable_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddShaderVariable(temp0, temp1);
    }
    else
    {
      op->vtkProperty::AddShaderVariable(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_AddShaderVariable_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddShaderVariable(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProperty::AddShaderVariable(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_AddShaderVariable_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
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
      op->AddShaderVariable(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProperty::AddShaderVariable(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_AddShaderVariable_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddShaderVariable(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkProperty::AddShaderVariable(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_AddShaderVariable_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddShaderVariable(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkProperty::AddShaderVariable(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkProperty_AddShaderVariable_Methods[] = {
  {nullptr, PyvtkProperty_AddShaderVariable_s1, METH_VARARGS,
   "@ziP *i"},
  {nullptr, PyvtkProperty_AddShaderVariable_s2, METH_VARARGS,
   "@ziP *d"},
  {nullptr, PyvtkProperty_AddShaderVariable_s3, METH_VARARGS,
   "@zi"},
  {nullptr, PyvtkProperty_AddShaderVariable_s4, METH_VARARGS,
   "@zd"},
  {nullptr, PyvtkProperty_AddShaderVariable_s5, METH_VARARGS,
   "@zii"},
  {nullptr, PyvtkProperty_AddShaderVariable_s6, METH_VARARGS,
   "@zdd"},
  {nullptr, PyvtkProperty_AddShaderVariable_s7, METH_VARARGS,
   "@ziii"},
  {nullptr, PyvtkProperty_AddShaderVariable_s8, METH_VARARGS,
   "@zddd"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkProperty_AddShaderVariable(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkProperty_AddShaderVariable_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddShaderVariable");
  return nullptr;
}



static PyObject *
PyvtkProperty_SetTexture_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  vtkTexture *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTexture"))
  {
    if (ap.IsBound())
    {
      op->SetTexture(temp0, temp1);
    }
    else
    {
      op->vtkProperty::SetTexture(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkProperty_SetTexture_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  vtkTexture *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTexture"))
  {
    if (ap.IsBound())
    {
      op->SetTexture(temp0, temp1);
    }
    else
    {
      op->vtkProperty::SetTexture(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif

static PyMethodDef PyvtkProperty_SetTexture_Methods[] = {
  {nullptr, PyvtkProperty_SetTexture_s1, METH_VARARGS,
   "@zV *vtkTexture"},
#if !defined(VTK_LEGACY_REMOVE)
  {nullptr, PyvtkProperty_SetTexture_s2, METH_VARARGS,
   "@iV *vtkTexture"},
#endif
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkProperty_SetTexture(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkProperty_SetTexture_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTexture");
  return nullptr;
}



static PyObject *
PyvtkProperty_GetTexture_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTexture *tempr = (ap.IsBound() ?
      op->GetTexture(temp0) :
      op->vtkProperty::GetTexture(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkProperty_GetTexture_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTexture *tempr = (ap.IsBound() ?
      op->GetTexture(temp0) :
      op->vtkProperty::GetTexture(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}
#endif

static PyMethodDef PyvtkProperty_GetTexture_Methods[] = {
  {nullptr, PyvtkProperty_GetTexture_s1, METH_VARARGS,
   "@z"},
#if !defined(VTK_LEGACY_REMOVE)
  {nullptr, PyvtkProperty_GetTexture_s2, METH_VARARGS,
   "@i"},
#endif
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkProperty_GetTexture(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkProperty_GetTexture_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTexture");
  return nullptr;
}



#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkProperty_RemoveTexture_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveTexture(temp0);
    }
    else
    {
      op->vtkProperty::RemoveTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif

static PyObject *
PyvtkProperty_RemoveTexture_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveTexture(temp0);
    }
    else
    {
      op->vtkProperty::RemoveTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkProperty_RemoveTexture_Methods[] = {
#if !defined(VTK_LEGACY_REMOVE)
  {nullptr, PyvtkProperty_RemoveTexture_s1, METH_VARARGS,
   "@i"},
#endif
  {nullptr, PyvtkProperty_RemoveTexture_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkProperty_RemoveTexture(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkProperty_RemoveTexture_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveTexture");
  return nullptr;
}



static PyObject *
PyvtkProperty_RemoveAllTextures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllTextures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllTextures();
    }
    else
    {
      op->vtkProperty::RemoveAllTextures();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetNumberOfTextures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTextures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTextures() :
      op->vtkProperty::GetNumberOfTextures());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->vtkProperty::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInformation() :
      op->vtkProperty::GetInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->SetInformation(temp0);
    }
    else
    {
      op->vtkProperty::SetInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkProperty_Methods[] = {
  {"IsTypeOf", PyvtkProperty_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProperty_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProperty_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkProperty\nC++: static vtkProperty *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProperty_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkProperty\nC++: vtkProperty *NewInstance()\n\n"},
  {"DeepCopy", PyvtkProperty_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkProperty)\nC++: void DeepCopy(vtkProperty *p)\n\nAssign one property to another.\n"},
  {"Render", PyvtkProperty_Render, METH_VARARGS,
   "V.Render(vtkActor, vtkRenderer)\nC++: virtual void Render(vtkActor *, vtkRenderer *)\n\nThis method causes the property to set up whatever is required\nfor its instance variables. This is actually handled by a\nsubclass of vtkProperty, which is created automatically. This\nmethod includes the invoking actor as an argument which can be\nused by property devices that require the actor.\n"},
  {"BackfaceRender", PyvtkProperty_BackfaceRender, METH_VARARGS,
   "V.BackfaceRender(vtkActor, vtkRenderer)\nC++: virtual void BackfaceRender(vtkActor *, vtkRenderer *)\n\nThis method renders the property as a backface property.\nTwoSidedLighting must be turned off to see any backface\nproperties. Note that only colors and opacity are used for\nbackface properties. Other properties such as Representation,\nCulling are specified by the Property.\n"},
  {"PostRender", PyvtkProperty_PostRender, METH_VARARGS,
   "V.PostRender(vtkActor, vtkRenderer)\nC++: virtual void PostRender(vtkActor *, vtkRenderer *)\n\nThis method is called after the actor has been rendered. Don't\ncall this directly. This method cleans up any shaders allocated.\n"},
  {"GetLighting", PyvtkProperty_GetLighting, METH_VARARGS,
   "V.GetLighting() -> bool\nC++: virtual bool GetLighting()\n\nSet/Get lighting flag for an object. Initial value is true.\n"},
  {"SetLighting", PyvtkProperty_SetLighting, METH_VARARGS,
   "V.SetLighting(bool)\nC++: virtual void SetLighting(bool _arg)\n\nSet/Get lighting flag for an object. Initial value is true.\n"},
  {"LightingOn", PyvtkProperty_LightingOn, METH_VARARGS,
   "V.LightingOn()\nC++: virtual void LightingOn()\n\nSet/Get lighting flag for an object. Initial value is true.\n"},
  {"LightingOff", PyvtkProperty_LightingOff, METH_VARARGS,
   "V.LightingOff()\nC++: virtual void LightingOff()\n\nSet/Get lighting flag for an object. Initial value is true.\n"},
  {"GetRenderPointsAsSpheres", PyvtkProperty_GetRenderPointsAsSpheres, METH_VARARGS,
   "V.GetRenderPointsAsSpheres() -> bool\nC++: virtual bool GetRenderPointsAsSpheres()\n\nSet/Get rendering of points as spheres. The size of the sphere in\npixels is controlled by the PointSize attribute. Note that half\nspheres may be rendered instead of spheres.\n"},
  {"SetRenderPointsAsSpheres", PyvtkProperty_SetRenderPointsAsSpheres, METH_VARARGS,
   "V.SetRenderPointsAsSpheres(bool)\nC++: virtual void SetRenderPointsAsSpheres(bool _arg)\n\nSet/Get rendering of points as spheres. The size of the sphere in\npixels is controlled by the PointSize attribute. Note that half\nspheres may be rendered instead of spheres.\n"},
  {"RenderPointsAsSpheresOn", PyvtkProperty_RenderPointsAsSpheresOn, METH_VARARGS,
   "V.RenderPointsAsSpheresOn()\nC++: virtual void RenderPointsAsSpheresOn()\n\nSet/Get rendering of points as spheres. The size of the sphere in\npixels is controlled by the PointSize attribute. Note that half\nspheres may be rendered instead of spheres.\n"},
  {"RenderPointsAsSpheresOff", PyvtkProperty_RenderPointsAsSpheresOff, METH_VARARGS,
   "V.RenderPointsAsSpheresOff()\nC++: virtual void RenderPointsAsSpheresOff()\n\nSet/Get rendering of points as spheres. The size of the sphere in\npixels is controlled by the PointSize attribute. Note that half\nspheres may be rendered instead of spheres.\n"},
  {"GetRenderLinesAsTubes", PyvtkProperty_GetRenderLinesAsTubes, METH_VARARGS,
   "V.GetRenderLinesAsTubes() -> bool\nC++: virtual bool GetRenderLinesAsTubes()\n\nSet/Get rendering of lines as tubes. The width of the line in\npixels is controlled by the LineWidth attribute. May not be\nsupported on every platform and the implementation may be half\ntubes, or something only tube like in appearance.\n"},
  {"SetRenderLinesAsTubes", PyvtkProperty_SetRenderLinesAsTubes, METH_VARARGS,
   "V.SetRenderLinesAsTubes(bool)\nC++: virtual void SetRenderLinesAsTubes(bool _arg)\n\nSet/Get rendering of lines as tubes. The width of the line in\npixels is controlled by the LineWidth attribute. May not be\nsupported on every platform and the implementation may be half\ntubes, or something only tube like in appearance.\n"},
  {"RenderLinesAsTubesOn", PyvtkProperty_RenderLinesAsTubesOn, METH_VARARGS,
   "V.RenderLinesAsTubesOn()\nC++: virtual void RenderLinesAsTubesOn()\n\nSet/Get rendering of lines as tubes. The width of the line in\npixels is controlled by the LineWidth attribute. May not be\nsupported on every platform and the implementation may be half\ntubes, or something only tube like in appearance.\n"},
  {"RenderLinesAsTubesOff", PyvtkProperty_RenderLinesAsTubesOff, METH_VARARGS,
   "V.RenderLinesAsTubesOff()\nC++: virtual void RenderLinesAsTubesOff()\n\nSet/Get rendering of lines as tubes. The width of the line in\npixels is controlled by the LineWidth attribute. May not be\nsupported on every platform and the implementation may be half\ntubes, or something only tube like in appearance.\n"},
  {"SetInterpolation", PyvtkProperty_SetInterpolation, METH_VARARGS,
   "V.SetInterpolation(int)\nC++: virtual void SetInterpolation(int _arg)\n\nSet the shading interpolation method for an object.\n"},
  {"GetInterpolationMinValue", PyvtkProperty_GetInterpolationMinValue, METH_VARARGS,
   "V.GetInterpolationMinValue() -> int\nC++: virtual int GetInterpolationMinValue()\n\nSet the shading interpolation method for an object.\n"},
  {"GetInterpolationMaxValue", PyvtkProperty_GetInterpolationMaxValue, METH_VARARGS,
   "V.GetInterpolationMaxValue() -> int\nC++: virtual int GetInterpolationMaxValue()\n\nSet the shading interpolation method for an object.\n"},
  {"GetInterpolation", PyvtkProperty_GetInterpolation, METH_VARARGS,
   "V.GetInterpolation() -> int\nC++: virtual int GetInterpolation()\n\nSet the shading interpolation method for an object.\n"},
  {"SetInterpolationToFlat", PyvtkProperty_SetInterpolationToFlat, METH_VARARGS,
   "V.SetInterpolationToFlat()\nC++: void SetInterpolationToFlat()\n\nSet the shading interpolation method for an object.\n"},
  {"SetInterpolationToGouraud", PyvtkProperty_SetInterpolationToGouraud, METH_VARARGS,
   "V.SetInterpolationToGouraud()\nC++: void SetInterpolationToGouraud()\n\nSet the shading interpolation method for an object.\n"},
  {"SetInterpolationToPhong", PyvtkProperty_SetInterpolationToPhong, METH_VARARGS,
   "V.SetInterpolationToPhong()\nC++: void SetInterpolationToPhong()\n\nSet the shading interpolation method for an object.\n"},
  {"GetInterpolationAsString", PyvtkProperty_GetInterpolationAsString, METH_VARARGS,
   "V.GetInterpolationAsString() -> string\nC++: const char *GetInterpolationAsString()\n\nSet the shading interpolation method for an object.\n"},
  {"SetRepresentation", PyvtkProperty_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(int)\nC++: virtual void SetRepresentation(int _arg)\n\nControl the surface geometry representation for the object.\n"},
  {"GetRepresentationMinValue", PyvtkProperty_GetRepresentationMinValue, METH_VARARGS,
   "V.GetRepresentationMinValue() -> int\nC++: virtual int GetRepresentationMinValue()\n\nControl the surface geometry representation for the object.\n"},
  {"GetRepresentationMaxValue", PyvtkProperty_GetRepresentationMaxValue, METH_VARARGS,
   "V.GetRepresentationMaxValue() -> int\nC++: virtual int GetRepresentationMaxValue()\n\nControl the surface geometry representation for the object.\n"},
  {"GetRepresentation", PyvtkProperty_GetRepresentation, METH_VARARGS,
   "V.GetRepresentation() -> int\nC++: virtual int GetRepresentation()\n\nControl the surface geometry representation for the object.\n"},
  {"SetRepresentationToPoints", PyvtkProperty_SetRepresentationToPoints, METH_VARARGS,
   "V.SetRepresentationToPoints()\nC++: void SetRepresentationToPoints()\n\nControl the surface geometry representation for the object.\n"},
  {"SetRepresentationToWireframe", PyvtkProperty_SetRepresentationToWireframe, METH_VARARGS,
   "V.SetRepresentationToWireframe()\nC++: void SetRepresentationToWireframe()\n\nControl the surface geometry representation for the object.\n"},
  {"SetRepresentationToSurface", PyvtkProperty_SetRepresentationToSurface, METH_VARARGS,
   "V.SetRepresentationToSurface()\nC++: void SetRepresentationToSurface()\n\nControl the surface geometry representation for the object.\n"},
  {"GetRepresentationAsString", PyvtkProperty_GetRepresentationAsString, METH_VARARGS,
   "V.GetRepresentationAsString() -> string\nC++: const char *GetRepresentationAsString()\n\nControl the surface geometry representation for the object.\n"},
  {"SetColor", PyvtkProperty_SetColor, METH_VARARGS,
   "V.SetColor(float, float, float)\nC++: virtual void SetColor(double r, double g, double b)\nV.SetColor([float, float, float])\nC++: virtual void SetColor(double a[3])\n\nSet the color of the object. Has the side effect of setting the\nambient diffuse and specular colors as well. This is basically a\nquick overall color setting method.\n"},
  {"GetColor", PyvtkProperty_GetColor, METH_VARARGS,
   "V.GetColor() -> (float, float, float)\nC++: double *GetColor()\nV.GetColor([float, float, float])\nC++: void GetColor(double rgb[3])\nV.GetColor(float, float, float)\nC++: void GetColor(double &r, double &g, double &b)\n\nSet the color of the object. Has the side effect of setting the\nambient diffuse and specular colors as well. This is basically a\nquick overall color setting method.\n"},
  {"SetAmbient", PyvtkProperty_SetAmbient, METH_VARARGS,
   "V.SetAmbient(float)\nC++: virtual void SetAmbient(double _arg)\n\nSet/Get the ambient lighting coefficient.\n"},
  {"GetAmbientMinValue", PyvtkProperty_GetAmbientMinValue, METH_VARARGS,
   "V.GetAmbientMinValue() -> float\nC++: virtual double GetAmbientMinValue()\n\nSet/Get the ambient lighting coefficient.\n"},
  {"GetAmbientMaxValue", PyvtkProperty_GetAmbientMaxValue, METH_VARARGS,
   "V.GetAmbientMaxValue() -> float\nC++: virtual double GetAmbientMaxValue()\n\nSet/Get the ambient lighting coefficient.\n"},
  {"GetAmbient", PyvtkProperty_GetAmbient, METH_VARARGS,
   "V.GetAmbient() -> float\nC++: virtual double GetAmbient()\n\nSet/Get the ambient lighting coefficient.\n"},
  {"SetDiffuse", PyvtkProperty_SetDiffuse, METH_VARARGS,
   "V.SetDiffuse(float)\nC++: virtual void SetDiffuse(double _arg)\n\nSet/Get the diffuse lighting coefficient.\n"},
  {"GetDiffuseMinValue", PyvtkProperty_GetDiffuseMinValue, METH_VARARGS,
   "V.GetDiffuseMinValue() -> float\nC++: virtual double GetDiffuseMinValue()\n\nSet/Get the diffuse lighting coefficient.\n"},
  {"GetDiffuseMaxValue", PyvtkProperty_GetDiffuseMaxValue, METH_VARARGS,
   "V.GetDiffuseMaxValue() -> float\nC++: virtual double GetDiffuseMaxValue()\n\nSet/Get the diffuse lighting coefficient.\n"},
  {"GetDiffuse", PyvtkProperty_GetDiffuse, METH_VARARGS,
   "V.GetDiffuse() -> float\nC++: virtual double GetDiffuse()\n\nSet/Get the diffuse lighting coefficient.\n"},
  {"SetSpecular", PyvtkProperty_SetSpecular, METH_VARARGS,
   "V.SetSpecular(float)\nC++: virtual void SetSpecular(double _arg)\n\nSet/Get the specular lighting coefficient.\n"},
  {"GetSpecularMinValue", PyvtkProperty_GetSpecularMinValue, METH_VARARGS,
   "V.GetSpecularMinValue() -> float\nC++: virtual double GetSpecularMinValue()\n\nSet/Get the specular lighting coefficient.\n"},
  {"GetSpecularMaxValue", PyvtkProperty_GetSpecularMaxValue, METH_VARARGS,
   "V.GetSpecularMaxValue() -> float\nC++: virtual double GetSpecularMaxValue()\n\nSet/Get the specular lighting coefficient.\n"},
  {"GetSpecular", PyvtkProperty_GetSpecular, METH_VARARGS,
   "V.GetSpecular() -> float\nC++: virtual double GetSpecular()\n\nSet/Get the specular lighting coefficient.\n"},
  {"SetSpecularPower", PyvtkProperty_SetSpecularPower, METH_VARARGS,
   "V.SetSpecularPower(float)\nC++: virtual void SetSpecularPower(double _arg)\n\nSet/Get the specular power.\n"},
  {"GetSpecularPowerMinValue", PyvtkProperty_GetSpecularPowerMinValue, METH_VARARGS,
   "V.GetSpecularPowerMinValue() -> float\nC++: virtual double GetSpecularPowerMinValue()\n\nSet/Get the specular power.\n"},
  {"GetSpecularPowerMaxValue", PyvtkProperty_GetSpecularPowerMaxValue, METH_VARARGS,
   "V.GetSpecularPowerMaxValue() -> float\nC++: virtual double GetSpecularPowerMaxValue()\n\nSet/Get the specular power.\n"},
  {"GetSpecularPower", PyvtkProperty_GetSpecularPower, METH_VARARGS,
   "V.GetSpecularPower() -> float\nC++: virtual double GetSpecularPower()\n\nSet/Get the specular power.\n"},
  {"SetOpacity", PyvtkProperty_SetOpacity, METH_VARARGS,
   "V.SetOpacity(float)\nC++: virtual void SetOpacity(double _arg)\n\nSet/Get the object's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {"GetOpacityMinValue", PyvtkProperty_GetOpacityMinValue, METH_VARARGS,
   "V.GetOpacityMinValue() -> float\nC++: virtual double GetOpacityMinValue()\n\nSet/Get the object's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {"GetOpacityMaxValue", PyvtkProperty_GetOpacityMaxValue, METH_VARARGS,
   "V.GetOpacityMaxValue() -> float\nC++: virtual double GetOpacityMaxValue()\n\nSet/Get the object's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {"GetOpacity", PyvtkProperty_GetOpacity, METH_VARARGS,
   "V.GetOpacity() -> float\nC++: virtual double GetOpacity()\n\nSet/Get the object's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {"SetAmbientColor", PyvtkProperty_SetAmbientColor, METH_VARARGS,
   "V.SetAmbientColor(float, float, float)\nC++: void SetAmbientColor(double, double, double)\nV.SetAmbientColor((float, float, float))\nC++: void SetAmbientColor(double a[3])\n\n"},
  {"GetAmbientColor", PyvtkProperty_GetAmbientColor, METH_VARARGS,
   "V.GetAmbientColor() -> (float, float, float)\nC++: double *GetAmbientColor()\n\n"},
  {"SetDiffuseColor", PyvtkProperty_SetDiffuseColor, METH_VARARGS,
   "V.SetDiffuseColor(float, float, float)\nC++: void SetDiffuseColor(double, double, double)\nV.SetDiffuseColor((float, float, float))\nC++: void SetDiffuseColor(double a[3])\n\n"},
  {"GetDiffuseColor", PyvtkProperty_GetDiffuseColor, METH_VARARGS,
   "V.GetDiffuseColor() -> (float, float, float)\nC++: double *GetDiffuseColor()\n\n"},
  {"SetSpecularColor", PyvtkProperty_SetSpecularColor, METH_VARARGS,
   "V.SetSpecularColor(float, float, float)\nC++: void SetSpecularColor(double, double, double)\nV.SetSpecularColor((float, float, float))\nC++: void SetSpecularColor(double a[3])\n\n"},
  {"GetSpecularColor", PyvtkProperty_GetSpecularColor, METH_VARARGS,
   "V.GetSpecularColor() -> (float, float, float)\nC++: double *GetSpecularColor()\n\n"},
  {"GetEdgeVisibility", PyvtkProperty_GetEdgeVisibility, METH_VARARGS,
   "V.GetEdgeVisibility() -> int\nC++: virtual vtkTypeBool GetEdgeVisibility()\n\nTurn on/off the visibility of edges. On some renderers it is\npossible to render the edges of geometric primitives separately\nfrom the interior.\n"},
  {"SetEdgeVisibility", PyvtkProperty_SetEdgeVisibility, METH_VARARGS,
   "V.SetEdgeVisibility(int)\nC++: virtual void SetEdgeVisibility(vtkTypeBool _arg)\n\nTurn on/off the visibility of edges. On some renderers it is\npossible to render the edges of geometric primitives separately\nfrom the interior.\n"},
  {"EdgeVisibilityOn", PyvtkProperty_EdgeVisibilityOn, METH_VARARGS,
   "V.EdgeVisibilityOn()\nC++: virtual void EdgeVisibilityOn()\n\nTurn on/off the visibility of edges. On some renderers it is\npossible to render the edges of geometric primitives separately\nfrom the interior.\n"},
  {"EdgeVisibilityOff", PyvtkProperty_EdgeVisibilityOff, METH_VARARGS,
   "V.EdgeVisibilityOff()\nC++: virtual void EdgeVisibilityOff()\n\nTurn on/off the visibility of edges. On some renderers it is\npossible to render the edges of geometric primitives separately\nfrom the interior.\n"},
  {"SetEdgeColor", PyvtkProperty_SetEdgeColor, METH_VARARGS,
   "V.SetEdgeColor(float, float, float)\nC++: void SetEdgeColor(double, double, double)\nV.SetEdgeColor((float, float, float))\nC++: void SetEdgeColor(double a[3])\n\n"},
  {"GetEdgeColor", PyvtkProperty_GetEdgeColor, METH_VARARGS,
   "V.GetEdgeColor() -> (float, float, float)\nC++: double *GetEdgeColor()\n\n"},
  {"GetVertexVisibility", PyvtkProperty_GetVertexVisibility, METH_VARARGS,
   "V.GetVertexVisibility() -> int\nC++: virtual vtkTypeBool GetVertexVisibility()\n\nTurn on/off the visibility of vertices. On some renderers it is\npossible to render the vertices of geometric primitives\nseparately from the interior.\n"},
  {"SetVertexVisibility", PyvtkProperty_SetVertexVisibility, METH_VARARGS,
   "V.SetVertexVisibility(int)\nC++: virtual void SetVertexVisibility(vtkTypeBool _arg)\n\nTurn on/off the visibility of vertices. On some renderers it is\npossible to render the vertices of geometric primitives\nseparately from the interior.\n"},
  {"VertexVisibilityOn", PyvtkProperty_VertexVisibilityOn, METH_VARARGS,
   "V.VertexVisibilityOn()\nC++: virtual void VertexVisibilityOn()\n\nTurn on/off the visibility of vertices. On some renderers it is\npossible to render the vertices of geometric primitives\nseparately from the interior.\n"},
  {"VertexVisibilityOff", PyvtkProperty_VertexVisibilityOff, METH_VARARGS,
   "V.VertexVisibilityOff()\nC++: virtual void VertexVisibilityOff()\n\nTurn on/off the visibility of vertices. On some renderers it is\npossible to render the vertices of geometric primitives\nseparately from the interior.\n"},
  {"SetVertexColor", PyvtkProperty_SetVertexColor, METH_VARARGS,
   "V.SetVertexColor(float, float, float)\nC++: void SetVertexColor(double, double, double)\nV.SetVertexColor((float, float, float))\nC++: void SetVertexColor(double a[3])\n\n"},
  {"GetVertexColor", PyvtkProperty_GetVertexColor, METH_VARARGS,
   "V.GetVertexColor() -> (float, float, float)\nC++: double *GetVertexColor()\n\n"},
  {"SetLineWidth", PyvtkProperty_SetLineWidth, METH_VARARGS,
   "V.SetLineWidth(float)\nC++: virtual void SetLineWidth(float _arg)\n\nSet/Get the width of a Line. The width is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {"GetLineWidthMinValue", PyvtkProperty_GetLineWidthMinValue, METH_VARARGS,
   "V.GetLineWidthMinValue() -> float\nC++: virtual float GetLineWidthMinValue()\n\nSet/Get the width of a Line. The width is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {"GetLineWidthMaxValue", PyvtkProperty_GetLineWidthMaxValue, METH_VARARGS,
   "V.GetLineWidthMaxValue() -> float\nC++: virtual float GetLineWidthMaxValue()\n\nSet/Get the width of a Line. The width is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {"GetLineWidth", PyvtkProperty_GetLineWidth, METH_VARARGS,
   "V.GetLineWidth() -> float\nC++: virtual float GetLineWidth()\n\nSet/Get the width of a Line. The width is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {"SetLineStipplePattern", PyvtkProperty_SetLineStipplePattern, METH_VARARGS,
   "V.SetLineStipplePattern(int)\nC++: virtual void SetLineStipplePattern(int _arg)\n\nSet/Get the stippling pattern of a Line, as a 16-bit binary\npattern (1 = pixel on, 0 = pixel off). This is only implemented\nfor OpenGL, not OpenGL2. The default is 0xFFFF.\n"},
  {"GetLineStipplePattern", PyvtkProperty_GetLineStipplePattern, METH_VARARGS,
   "V.GetLineStipplePattern() -> int\nC++: virtual int GetLineStipplePattern()\n\nSet/Get the stippling pattern of a Line, as a 16-bit binary\npattern (1 = pixel on, 0 = pixel off). This is only implemented\nfor OpenGL, not OpenGL2. The default is 0xFFFF.\n"},
  {"SetLineStippleRepeatFactor", PyvtkProperty_SetLineStippleRepeatFactor, METH_VARARGS,
   "V.SetLineStippleRepeatFactor(int)\nC++: virtual void SetLineStippleRepeatFactor(int _arg)\n\nSet/Get the stippling repeat factor of a Line, which specifies\nhow many times each bit in the pattern is to be repeated. This is\nonly implemented for OpenGL, not OpenGL2. The default is 1.\n"},
  {"GetLineStippleRepeatFactorMinValue", PyvtkProperty_GetLineStippleRepeatFactorMinValue, METH_VARARGS,
   "V.GetLineStippleRepeatFactorMinValue() -> int\nC++: virtual int GetLineStippleRepeatFactorMinValue()\n\nSet/Get the stippling repeat factor of a Line, which specifies\nhow many times each bit in the pattern is to be repeated. This is\nonly implemented for OpenGL, not OpenGL2. The default is 1.\n"},
  {"GetLineStippleRepeatFactorMaxValue", PyvtkProperty_GetLineStippleRepeatFactorMaxValue, METH_VARARGS,
   "V.GetLineStippleRepeatFactorMaxValue() -> int\nC++: virtual int GetLineStippleRepeatFactorMaxValue()\n\nSet/Get the stippling repeat factor of a Line, which specifies\nhow many times each bit in the pattern is to be repeated. This is\nonly implemented for OpenGL, not OpenGL2. The default is 1.\n"},
  {"GetLineStippleRepeatFactor", PyvtkProperty_GetLineStippleRepeatFactor, METH_VARARGS,
   "V.GetLineStippleRepeatFactor() -> int\nC++: virtual int GetLineStippleRepeatFactor()\n\nSet/Get the stippling repeat factor of a Line, which specifies\nhow many times each bit in the pattern is to be repeated. This is\nonly implemented for OpenGL, not OpenGL2. The default is 1.\n"},
  {"SetPointSize", PyvtkProperty_SetPointSize, METH_VARARGS,
   "V.SetPointSize(float)\nC++: virtual void SetPointSize(float _arg)\n\nSet/Get the diameter of a point. The size is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {"GetPointSizeMinValue", PyvtkProperty_GetPointSizeMinValue, METH_VARARGS,
   "V.GetPointSizeMinValue() -> float\nC++: virtual float GetPointSizeMinValue()\n\nSet/Get the diameter of a point. The size is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {"GetPointSizeMaxValue", PyvtkProperty_GetPointSizeMaxValue, METH_VARARGS,
   "V.GetPointSizeMaxValue() -> float\nC++: virtual float GetPointSizeMaxValue()\n\nSet/Get the diameter of a point. The size is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {"GetPointSize", PyvtkProperty_GetPointSize, METH_VARARGS,
   "V.GetPointSize() -> float\nC++: virtual float GetPointSize()\n\nSet/Get the diameter of a point. The size is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {"GetBackfaceCulling", PyvtkProperty_GetBackfaceCulling, METH_VARARGS,
   "V.GetBackfaceCulling() -> int\nC++: virtual vtkTypeBool GetBackfaceCulling()\n\nTurn on/off fast culling of polygons based on orientation of\nnormal with respect to camera. If backface culling is on,\npolygons facing away from camera are not drawn.\n"},
  {"SetBackfaceCulling", PyvtkProperty_SetBackfaceCulling, METH_VARARGS,
   "V.SetBackfaceCulling(int)\nC++: virtual void SetBackfaceCulling(vtkTypeBool _arg)\n\nTurn on/off fast culling of polygons based on orientation of\nnormal with respect to camera. If backface culling is on,\npolygons facing away from camera are not drawn.\n"},
  {"BackfaceCullingOn", PyvtkProperty_BackfaceCullingOn, METH_VARARGS,
   "V.BackfaceCullingOn()\nC++: virtual void BackfaceCullingOn()\n\nTurn on/off fast culling of polygons based on orientation of\nnormal with respect to camera. If backface culling is on,\npolygons facing away from camera are not drawn.\n"},
  {"BackfaceCullingOff", PyvtkProperty_BackfaceCullingOff, METH_VARARGS,
   "V.BackfaceCullingOff()\nC++: virtual void BackfaceCullingOff()\n\nTurn on/off fast culling of polygons based on orientation of\nnormal with respect to camera. If backface culling is on,\npolygons facing away from camera are not drawn.\n"},
  {"GetFrontfaceCulling", PyvtkProperty_GetFrontfaceCulling, METH_VARARGS,
   "V.GetFrontfaceCulling() -> int\nC++: virtual vtkTypeBool GetFrontfaceCulling()\n\nTurn on/off fast culling of polygons based on orientation of\nnormal with respect to camera. If frontface culling is on,\npolygons facing towards camera are not drawn.\n"},
  {"SetFrontfaceCulling", PyvtkProperty_SetFrontfaceCulling, METH_VARARGS,
   "V.SetFrontfaceCulling(int)\nC++: virtual void SetFrontfaceCulling(vtkTypeBool _arg)\n\nTurn on/off fast culling of polygons based on orientation of\nnormal with respect to camera. If frontface culling is on,\npolygons facing towards camera are not drawn.\n"},
  {"FrontfaceCullingOn", PyvtkProperty_FrontfaceCullingOn, METH_VARARGS,
   "V.FrontfaceCullingOn()\nC++: virtual void FrontfaceCullingOn()\n\nTurn on/off fast culling of polygons based on orientation of\nnormal with respect to camera. If frontface culling is on,\npolygons facing towards camera are not drawn.\n"},
  {"FrontfaceCullingOff", PyvtkProperty_FrontfaceCullingOff, METH_VARARGS,
   "V.FrontfaceCullingOff()\nC++: virtual void FrontfaceCullingOff()\n\nTurn on/off fast culling of polygons based on orientation of\nnormal with respect to camera. If frontface culling is on,\npolygons facing towards camera are not drawn.\n"},
  {"SetMaterialName", PyvtkProperty_SetMaterialName, METH_VARARGS,
   "V.SetMaterialName(string)\nC++: virtual void SetMaterialName(const char *_arg)\n\nReturns the name of the material currently loaded, if any.\n"},
  {"GetMaterialName", PyvtkProperty_GetMaterialName, METH_VARARGS,
   "V.GetMaterialName() -> string\nC++: virtual char *GetMaterialName()\n\nReturns the name of the material currently loaded, if any.\n"},
  {"SetShading", PyvtkProperty_SetShading, METH_VARARGS,
   "V.SetShading(int)\nC++: virtual void SetShading(vtkTypeBool _arg)\n\nEnable/Disable shading. When shading is enabled, the Material\nmust be set.\n"},
  {"GetShading", PyvtkProperty_GetShading, METH_VARARGS,
   "V.GetShading() -> int\nC++: virtual vtkTypeBool GetShading()\n\nEnable/Disable shading. When shading is enabled, the Material\nmust be set.\n"},
  {"ShadingOn", PyvtkProperty_ShadingOn, METH_VARARGS,
   "V.ShadingOn()\nC++: virtual void ShadingOn()\n\nEnable/Disable shading. When shading is enabled, the Material\nmust be set.\n"},
  {"ShadingOff", PyvtkProperty_ShadingOff, METH_VARARGS,
   "V.ShadingOff()\nC++: virtual void ShadingOff()\n\nEnable/Disable shading. When shading is enabled, the Material\nmust be set.\n"},
  {"GetShaderDeviceAdapter2", PyvtkProperty_GetShaderDeviceAdapter2, METH_VARARGS,
   "V.GetShaderDeviceAdapter2() -> vtkShaderDeviceAdapter2\nC++: virtual vtkShaderDeviceAdapter2 *GetShaderDeviceAdapter2()\n\nGet the vtkShaderDeviceAdapter2 if set, returns null otherwise.\n"},
  {"AddShaderVariable", PyvtkProperty_AddShaderVariable, METH_VARARGS,
   "V.AddShaderVariable(string, int, [int, ...])\nC++: virtual void AddShaderVariable(const char *name, int numVars,\n     int *x)\nV.AddShaderVariable(string, int, [float, ...])\nC++: virtual void AddShaderVariable(const char *name, int numVars,\n     double *x)\nV.AddShaderVariable(string, int)\nC++: void AddShaderVariable(const char *name, int v)\nV.AddShaderVariable(string, float)\nC++: void AddShaderVariable(const char *name, double v)\nV.AddShaderVariable(string, int, int)\nC++: void AddShaderVariable(const char *name, int v1, int v2)\nV.AddShaderVariable(string, float, float)\nC++: void AddShaderVariable(const char *name, double v1,\n    double v2)\nV.AddShaderVariable(string, int, int, int)\nC++: void AddShaderVariable(const char *name, int v1, int v2,\n    int v3)\nV.AddShaderVariable(string, float, float, float)\nC++: void AddShaderVariable(const char *name, double v1,\n    double v2, double v3)\n\nProvide values to initialize shader variables. Useful to\ninitialize shader variables that change over time (animation, GUI\nwidgets inputs, etc. )\n- name - hardware name of the uniform variable\n- numVars - number of variables being set\n- x - values\n"},
  {"SetTexture", PyvtkProperty_SetTexture, METH_VARARGS,
   "V.SetTexture(string, vtkTexture)\nC++: void SetTexture(const char *name, vtkTexture *texture)\nV.SetTexture(int, vtkTexture)\nC++: void SetTexture(int unit, vtkTexture *texture)\n\nSet/Get the texture object to control rendering texture maps.\nThis will be a vtkTexture object. A property does not need to\nhave an associated texture map and multiple properties can share\none texture. Textures must be assigned unique names. Note that\nfor texture blending the textures will be rendering is\nalphabetical order and after any texture defined in the actor.\n"},
  {"GetTexture", PyvtkProperty_GetTexture, METH_VARARGS,
   "V.GetTexture(string) -> vtkTexture\nC++: vtkTexture *GetTexture(const char *name)\nV.GetTexture(int) -> vtkTexture\nC++: vtkTexture *GetTexture(int unit)\n\nSet/Get the texture object to control rendering texture maps.\nThis will be a vtkTexture object. A property does not need to\nhave an associated texture map and multiple properties can share\none texture. Textures must be assigned unique names. Note that\nfor texture blending the textures will be rendering is\nalphabetical order and after any texture defined in the actor.\n"},
#if !defined(VTK_LEGACY_REMOVE)
#endif
#if !defined(VTK_LEGACY_REMOVE)
#endif
  {"RemoveTexture", PyvtkProperty_RemoveTexture, METH_VARARGS,
   "V.RemoveTexture(int)\nC++: void RemoveTexture(int unit)\nV.RemoveTexture(string)\nC++: void RemoveTexture(const char *name)\n\nSet/Get the texture object to control rendering texture maps.\nThis will be a vtkTexture object. A property does not need to\nhave an associated texture map and multiple properties can share\none texture. Textures must be assigned unique names.\n"},
  {"RemoveAllTextures", PyvtkProperty_RemoveAllTextures, METH_VARARGS,
   "V.RemoveAllTextures()\nC++: void RemoveAllTextures()\n\nRemove all the textures.\n"},
  {"GetNumberOfTextures", PyvtkProperty_GetNumberOfTextures, METH_VARARGS,
   "V.GetNumberOfTextures() -> int\nC++: int GetNumberOfTextures()\n\nReturns the number of textures in this property.\n"},
  {"ReleaseGraphicsResources", PyvtkProperty_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *win)\n\nRelease any graphics resources that are being consumed by this\nproperty. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetInformation", PyvtkProperty_GetInformation, METH_VARARGS,
   "V.GetInformation() -> vtkInformation\nC++: virtual vtkInformation *GetInformation()\n\nSet/Get the information object associated with the Property.\n"},
  {"SetInformation", PyvtkProperty_SetInformation, METH_VARARGS,
   "V.SetInformation(vtkInformation)\nC++: virtual void SetInformation(vtkInformation *)\n\nSet/Get the information object associated with the Property.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkProperty", // tp_name
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
  PyvtkProperty_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProperty_StaticNew()
{
  return vtkProperty::New();
}

PyObject *PyvtkProperty_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkProperty_Type, PyvtkProperty_Methods,
    "vtkProperty",
 &PyvtkProperty_StaticNew);

  PyTypeObject *pytype = &PyvtkProperty_Type;

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

  PyType_Ready(&PyvtkProperty_VTKTextureUnit_Type);
  PyvtkProperty_VTKTextureUnit_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkProperty_VTKTextureUnit_Type);

  o = (PyObject *)&PyvtkProperty_VTKTextureUnit_Type;
  if (PyDict_SetItemString(d, "VTKTextureUnit", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 8; c++)
  {
    typedef vtkProperty::VTKTextureUnit cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[8] = {
        { "VTK_TEXTURE_UNIT_0", vtkProperty::VTK_TEXTURE_UNIT_0 },
        { "VTK_TEXTURE_UNIT_1", vtkProperty::VTK_TEXTURE_UNIT_1 },
        { "VTK_TEXTURE_UNIT_2", vtkProperty::VTK_TEXTURE_UNIT_2 },
        { "VTK_TEXTURE_UNIT_3", vtkProperty::VTK_TEXTURE_UNIT_3 },
        { "VTK_TEXTURE_UNIT_4", vtkProperty::VTK_TEXTURE_UNIT_4 },
        { "VTK_TEXTURE_UNIT_5", vtkProperty::VTK_TEXTURE_UNIT_5 },
        { "VTK_TEXTURE_UNIT_6", vtkProperty::VTK_TEXTURE_UNIT_6 },
        { "VTK_TEXTURE_UNIT_7", vtkProperty::VTK_TEXTURE_UNIT_7 },
      };

    o = PyvtkProperty_VTKTextureUnit_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProperty", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "VTK_FLAT", 0 },
        { "VTK_GOURAUD", 1 },
        { "VTK_PHONG", 2 },
        { "VTK_POINTS", 0 },
        { "VTK_WIREFRAME", 1 },
        { "VTK_SURFACE", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

