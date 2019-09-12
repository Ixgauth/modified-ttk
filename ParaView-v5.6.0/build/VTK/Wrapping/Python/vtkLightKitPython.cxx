// python wrapper for vtkLightKit
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
#include "vtkLightKit.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLightKit(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLightKit_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkLightKit_Doc =
  "vtkLightKit - a simple but quality lighting kit\n\n"
  "Superclass: vtkObject\n\n"
  "vtkLightKit is designed to make general purpose lighting of vtk\n"
  "scenes simple, flexible, and attractive (or at least not horribly\n"
  "ugly without significant effort).  Use a LightKit when you want more\n"
  "control over your lighting than you can get with the default vtk\n"
  "light, which is a headlight located at the camera. (HeadLights are\n"
  "very simple to use, but they don't show the shape of objects very\n"
  "well, don't give a good sense of \"up\" and \"down\", and don't evenly\n"
  "light the object.)\n\n"
  "A LightKit consists of three lights, a key light, a fill light, and a\n"
  "headlight.  The main light is the key light.  It is usually\n"
  "positioned so that it appears like an overhead light (like the sun,\n"
  "or a ceiling light).  It is generally positioned to shine down on the\n"
  "scene from about a 45 degree angle vertically and at least a little\n"
  "offset side to side.  The key light usually at least about twice as\n"
  "bright as the total of all other lights in the scene to provide good\n"
  "modeling of object features.\n\n"
  "The other lights in the kit (the fill light, headlight, and a pair of\n"
  "back lights) are weaker sources that provide extra illumination to\n"
  "fill in the spots that the key light misses.  The fill light is\n"
  "usually positioned across from or opposite from the key light (though\n"
  "still on the same side of the object as the camera) in order to\n"
  "simulate diffuse reflections from other objects in the scene.  The\n"
  "headlight, always located at the position of the camera, reduces the\n"
  "contrast between areas lit by the key and fill light. The two back\n"
  "lights, one on the left of the object as seen from the observer and\n"
  "one on the right, fill on the high-contrast areas behind the object. \n"
  "To enforce the relationship between the different lights, the\n"
  "intensity of the fill, back and headlights are set as a ratio to the\n"
  "key light brightness.  Thus, the brightness of all the lights in the\n"
  "scene can be changed by changing the key light intensity.\n\n"
  "All lights are directional lights (infinitely far away with no\n"
  "falloff).  Lights move with the camera.\n\n"
  "For simplicity, the position of lights in the LightKit can only be\n"
  "specified using angles: the elevation (latitude) and azimuth\n"
  "(longitude) of each light with respect to the camera, expressed in\n"
  "degrees.  (Lights always shine on the camera's lookat point.) For\n"
  "example, a light at (elevation=0, azimuth=0) is located at the camera\n"
  "(a headlight).  A light at (elevation=90, azimuth=0) is above the\n"
  "lookat point, shining down.  Negative azimuth values move the lights\n"
  "clockwise as seen above, positive values counter-clockwise.  So, a\n"
  "light at (elevation=45, azimuth=-20) is above and in front of the\n"
  "object and shining slightly from the left side.\n\n"
  "vtkLightKit limits the colors that can be assigned to any light to\n"
  "those of incandescent sources such as light bulbs and sunlight.  It\n"
  "defines a special color spectrum called \"warmth\" from which light\n"
  "colors can be chosen, where 0 is cold blue, 0.5 is neutral white, and\n"
  "1 is deep sunset red.  Colors close to 0.5 are \"cool whites\" and \"warm\n"
  "whites,\" respectively.\n\n"
  "Since colors far from white on the warmth scale appear less bright,\n"
  "key-to-fill and key-to-headlight ratios are skewed by key, fill, and\n"
  "headlight colors.  If the flag MaintainLuminance is set, vtkLightKit\n"
  "will attempt to compensate for these perceptual differences by\n"
  "increasing the brightness of more saturated colors.\n\n"
  "A LightKit is not explicitly part of the vtk pipeline.  Rather, it is\n"
  "a composite object that controls the behavior of lights using a\n"
  "unified user interface.  Every time a parameter of vtkLightKit is\n"
  "adjusted, the properties of its lights are modified.\n\n"
  "@par Credits: vtkLightKit was originally written and contributed to\n"
  "vtk by Michael Halle (mhalle@bwh.harvard.edu) at the Surgical\n"
  "Planning Lab, Brigham and Women's Hospital.\n\n";

static PyTypeObject PyvtkLightKit_LightKitType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkLightKit.LightKitType", // tp_name
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

PyObject *PyvtkLightKit_LightKitType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkLightKit_LightKitType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkLightKit_LightKitType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkLightKit_LightKitSubType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkLightKit.LightKitSubType", // tp_name
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

PyObject *PyvtkLightKit_LightKitSubType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkLightKit_LightKitSubType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkLightKit_LightKitSubType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkLightKit_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLightKit::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLightKit::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLightKit *tempr = vtkLightKit::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLightKit *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLightKit::NewInstance());

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
PyvtkLightKit_SetKeyLightIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyLightIntensity(temp0);
    }
    else
    {
      op->vtkLightKit::SetKeyLightIntensity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyLightIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyLightIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetKeyLightIntensity() :
      op->vtkLightKit::GetKeyLightIntensity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_SetKeyToFillRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyToFillRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyToFillRatio(temp0);
    }
    else
    {
      op->vtkLightKit::SetKeyToFillRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToFillRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToFillRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetKeyToFillRatioMinValue() :
      op->vtkLightKit::GetKeyToFillRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToFillRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToFillRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetKeyToFillRatioMaxValue() :
      op->vtkLightKit::GetKeyToFillRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToFillRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToFillRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetKeyToFillRatio() :
      op->vtkLightKit::GetKeyToFillRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_SetKeyToHeadRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyToHeadRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyToHeadRatio(temp0);
    }
    else
    {
      op->vtkLightKit::SetKeyToHeadRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToHeadRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToHeadRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetKeyToHeadRatioMinValue() :
      op->vtkLightKit::GetKeyToHeadRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToHeadRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToHeadRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetKeyToHeadRatioMaxValue() :
      op->vtkLightKit::GetKeyToHeadRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToHeadRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToHeadRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetKeyToHeadRatio() :
      op->vtkLightKit::GetKeyToHeadRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_SetKeyToBackRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyToBackRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyToBackRatio(temp0);
    }
    else
    {
      op->vtkLightKit::SetKeyToBackRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToBackRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToBackRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetKeyToBackRatioMinValue() :
      op->vtkLightKit::GetKeyToBackRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToBackRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToBackRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetKeyToBackRatioMaxValue() :
      op->vtkLightKit::GetKeyToBackRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToBackRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToBackRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetKeyToBackRatio() :
      op->vtkLightKit::GetKeyToBackRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_SetKeyLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyLightWarmth(temp0);
    }
    else
    {
      op->vtkLightKit::SetKeyLightWarmth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetKeyLightWarmth() :
      op->vtkLightKit::GetKeyLightWarmth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_SetFillLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFillLightWarmth(temp0);
    }
    else
    {
      op->vtkLightKit::SetFillLightWarmth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetFillLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFillLightWarmth() :
      op->vtkLightKit::GetFillLightWarmth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_SetHeadLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeadLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeadLightWarmth(temp0);
    }
    else
    {
      op->vtkLightKit::SetHeadLightWarmth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetHeadLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeadLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHeadLightWarmth() :
      op->vtkLightKit::GetHeadLightWarmth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_SetBackLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackLightWarmth(temp0);
    }
    else
    {
      op->vtkLightKit::SetBackLightWarmth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetBackLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackLightWarmth() :
      op->vtkLightKit::GetBackLightWarmth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyLightColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyLightColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetKeyLightColor() :
      op->vtkLightKit::GetKeyLightColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetFillLightColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillLightColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetFillLightColor() :
      op->vtkLightKit::GetFillLightColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetHeadLightColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeadLightColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetHeadLightColor() :
      op->vtkLightKit::GetHeadLightColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetBackLightColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackLightColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBackLightColor() :
      op->vtkLightKit::GetBackLightColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_MaintainLuminanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaintainLuminanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MaintainLuminanceOn();
    }
    else
    {
      op->vtkLightKit::MaintainLuminanceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_MaintainLuminanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaintainLuminanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MaintainLuminanceOff();
    }
    else
    {
      op->vtkLightKit::MaintainLuminanceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetMaintainLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaintainLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaintainLuminance() :
      op->vtkLightKit::GetMaintainLuminance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_SetMaintainLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaintainLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaintainLuminance(temp0);
    }
    else
    {
      op->vtkLightKit::SetMaintainLuminance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_SetKeyLightAngle_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetKeyLightAngle(temp0, temp1);
    }
    else
    {
      op->vtkLightKit::SetKeyLightAngle(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLightKit_SetKeyLightAngle_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetKeyLightAngle(temp0);
    }
    else
    {
      op->vtkLightKit::SetKeyLightAngle(temp0);
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
PyvtkLightKit_SetKeyLightAngle(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkLightKit_SetKeyLightAngle_s1(self, args);
    case 1:
      return PyvtkLightKit_SetKeyLightAngle_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetKeyLightAngle");
  return nullptr;
}



static PyObject *
PyvtkLightKit_SetKeyLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyLightElevation(temp0);
    }
    else
    {
      op->vtkLightKit::SetKeyLightElevation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_SetKeyLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyLightAzimuth(temp0);
    }
    else
    {
      op->vtkLightKit::SetKeyLightAzimuth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyLightAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetKeyLightAngle() :
      op->vtkLightKit::GetKeyLightAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetKeyLightElevation() :
      op->vtkLightKit::GetKeyLightElevation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetKeyLightAzimuth() :
      op->vtkLightKit::GetKeyLightAzimuth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_SetFillLightAngle_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFillLightAngle(temp0, temp1);
    }
    else
    {
      op->vtkLightKit::SetFillLightAngle(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLightKit_SetFillLightAngle_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetFillLightAngle(temp0);
    }
    else
    {
      op->vtkLightKit::SetFillLightAngle(temp0);
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
PyvtkLightKit_SetFillLightAngle(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkLightKit_SetFillLightAngle_s1(self, args);
    case 1:
      return PyvtkLightKit_SetFillLightAngle_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFillLightAngle");
  return nullptr;
}



static PyObject *
PyvtkLightKit_SetFillLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFillLightElevation(temp0);
    }
    else
    {
      op->vtkLightKit::SetFillLightElevation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_SetFillLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFillLightAzimuth(temp0);
    }
    else
    {
      op->vtkLightKit::SetFillLightAzimuth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetFillLightAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetFillLightAngle() :
      op->vtkLightKit::GetFillLightAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetFillLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFillLightElevation() :
      op->vtkLightKit::GetFillLightElevation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetFillLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFillLightAzimuth() :
      op->vtkLightKit::GetFillLightAzimuth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_SetBackLightAngle_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBackLightAngle(temp0, temp1);
    }
    else
    {
      op->vtkLightKit::SetBackLightAngle(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLightKit_SetBackLightAngle_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetBackLightAngle(temp0);
    }
    else
    {
      op->vtkLightKit::SetBackLightAngle(temp0);
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
PyvtkLightKit_SetBackLightAngle(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkLightKit_SetBackLightAngle_s1(self, args);
    case 1:
      return PyvtkLightKit_SetBackLightAngle_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBackLightAngle");
  return nullptr;
}



static PyObject *
PyvtkLightKit_SetBackLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackLightElevation(temp0);
    }
    else
    {
      op->vtkLightKit::SetBackLightElevation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_SetBackLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackLightAzimuth(temp0);
    }
    else
    {
      op->vtkLightKit::SetBackLightAzimuth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetBackLightAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBackLightAngle() :
      op->vtkLightKit::GetBackLightAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetBackLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackLightElevation() :
      op->vtkLightKit::GetBackLightElevation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetBackLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackLightAzimuth() :
      op->vtkLightKit::GetBackLightAzimuth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_AddLightsToRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLightsToRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->AddLightsToRenderer(temp0);
    }
    else
    {
      op->vtkLightKit::AddLightsToRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_RemoveLightsFromRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLightsFromRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->RemoveLightsFromRenderer(temp0);
    }
    else
    {
      op->vtkLightKit::RemoveLightsFromRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  vtkLightKit *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLightKit"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkLightKit::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Modified();
    }
    else
    {
      op->vtkLightKit::Modified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkLightKit::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetStringFromType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringFromType");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkLightKit::GetStringFromType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetStringFromSubType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringFromSubType");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkLightKit::GetStringFromSubType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetShortStringFromSubType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetShortStringFromSubType");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkLightKit::GetShortStringFromSubType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightKit_GetSubType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSubType");

  typedef vtkLightKit::LightKitType temp0_type;
  temp0_type temp0;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetEnumValue(temp0, "vtkLightKit.LightKitType") &&
      ap.GetValue(temp1))
  {
    typedef vtkLightKit::LightKitSubType tempr_type;
  tempr_type tempr = vtkLightKit::GetSubType(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkLightKit_LightKitSubType_FromEnum(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLightKit_Methods[] = {
  {"IsTypeOf", PyvtkLightKit_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLightKit_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLightKit_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLightKit\nC++: static vtkLightKit *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLightKit_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLightKit\nC++: vtkLightKit *NewInstance()\n\n"},
  {"SetKeyLightIntensity", PyvtkLightKit_SetKeyLightIntensity, METH_VARARGS,
   "V.SetKeyLightIntensity(float)\nC++: virtual void SetKeyLightIntensity(double _arg)\n\nSet/Get the intensity of the key light.  The key light is the\nbrightest light in the scene.  The intensities of the other two\nlights are ratios of the key light's intensity.\n"},
  {"GetKeyLightIntensity", PyvtkLightKit_GetKeyLightIntensity, METH_VARARGS,
   "V.GetKeyLightIntensity() -> float\nC++: virtual double GetKeyLightIntensity()\n\nSet/Get the intensity of the key light.  The key light is the\nbrightest light in the scene.  The intensities of the other two\nlights are ratios of the key light's intensity.\n"},
  {"SetKeyToFillRatio", PyvtkLightKit_SetKeyToFillRatio, METH_VARARGS,
   "V.SetKeyToFillRatio(float)\nC++: virtual void SetKeyToFillRatio(double _arg)\n\nSet/Get the key-to-fill ratio.  This ratio controls how bright\nthe fill light is compared to the key light: larger values\ncorrespond to a dimmer fill light.  The purpose of the fill light\nis to light parts of the object not lit by the key light, while\nstill maintaining contrast.  This type of lighting may correspond\nto indirect illumination from the key light, bounced off a wall,\nfloor, or other object.  The fill light should never be brighter\nthan the key light:  a good range for the key-to-fill ratio is\nbetween 2 and 10.\n"},
  {"GetKeyToFillRatioMinValue", PyvtkLightKit_GetKeyToFillRatioMinValue, METH_VARARGS,
   "V.GetKeyToFillRatioMinValue() -> float\nC++: virtual double GetKeyToFillRatioMinValue()\n\nSet/Get the key-to-fill ratio.  This ratio controls how bright\nthe fill light is compared to the key light: larger values\ncorrespond to a dimmer fill light.  The purpose of the fill light\nis to light parts of the object not lit by the key light, while\nstill maintaining contrast.  This type of lighting may correspond\nto indirect illumination from the key light, bounced off a wall,\nfloor, or other object.  The fill light should never be brighter\nthan the key light:  a good range for the key-to-fill ratio is\nbetween 2 and 10.\n"},
  {"GetKeyToFillRatioMaxValue", PyvtkLightKit_GetKeyToFillRatioMaxValue, METH_VARARGS,
   "V.GetKeyToFillRatioMaxValue() -> float\nC++: virtual double GetKeyToFillRatioMaxValue()\n\nSet/Get the key-to-fill ratio.  This ratio controls how bright\nthe fill light is compared to the key light: larger values\ncorrespond to a dimmer fill light.  The purpose of the fill light\nis to light parts of the object not lit by the key light, while\nstill maintaining contrast.  This type of lighting may correspond\nto indirect illumination from the key light, bounced off a wall,\nfloor, or other object.  The fill light should never be brighter\nthan the key light:  a good range for the key-to-fill ratio is\nbetween 2 and 10.\n"},
  {"GetKeyToFillRatio", PyvtkLightKit_GetKeyToFillRatio, METH_VARARGS,
   "V.GetKeyToFillRatio() -> float\nC++: virtual double GetKeyToFillRatio()\n\nSet/Get the key-to-fill ratio.  This ratio controls how bright\nthe fill light is compared to the key light: larger values\ncorrespond to a dimmer fill light.  The purpose of the fill light\nis to light parts of the object not lit by the key light, while\nstill maintaining contrast.  This type of lighting may correspond\nto indirect illumination from the key light, bounced off a wall,\nfloor, or other object.  The fill light should never be brighter\nthan the key light:  a good range for the key-to-fill ratio is\nbetween 2 and 10.\n"},
  {"SetKeyToHeadRatio", PyvtkLightKit_SetKeyToHeadRatio, METH_VARARGS,
   "V.SetKeyToHeadRatio(float)\nC++: virtual void SetKeyToHeadRatio(double _arg)\n\nSet/Get the key-to-headlight ratio.  Similar to the key-to-fill\nratio, this ratio controls how bright the headlight light is\ncompared to the key light: larger values correspond to a dimmer\nheadlight light.  The headlight is special kind of fill light,\nlighting only the parts of the object that the camera can see. As\nsuch, a headlight tends to reduce the contrast of a scene.  It\ncan be used to fill in \"shadows\" of the object missed by the key\nand fill lights.  The headlight should always be significantly\ndimmer than the key light:  ratios of 2 to 15 are typical.\n"},
  {"GetKeyToHeadRatioMinValue", PyvtkLightKit_GetKeyToHeadRatioMinValue, METH_VARARGS,
   "V.GetKeyToHeadRatioMinValue() -> float\nC++: virtual double GetKeyToHeadRatioMinValue()\n\nSet/Get the key-to-headlight ratio.  Similar to the key-to-fill\nratio, this ratio controls how bright the headlight light is\ncompared to the key light: larger values correspond to a dimmer\nheadlight light.  The headlight is special kind of fill light,\nlighting only the parts of the object that the camera can see. As\nsuch, a headlight tends to reduce the contrast of a scene.  It\ncan be used to fill in \"shadows\" of the object missed by the key\nand fill lights.  The headlight should always be significantly\ndimmer than the key light:  ratios of 2 to 15 are typical.\n"},
  {"GetKeyToHeadRatioMaxValue", PyvtkLightKit_GetKeyToHeadRatioMaxValue, METH_VARARGS,
   "V.GetKeyToHeadRatioMaxValue() -> float\nC++: virtual double GetKeyToHeadRatioMaxValue()\n\nSet/Get the key-to-headlight ratio.  Similar to the key-to-fill\nratio, this ratio controls how bright the headlight light is\ncompared to the key light: larger values correspond to a dimmer\nheadlight light.  The headlight is special kind of fill light,\nlighting only the parts of the object that the camera can see. As\nsuch, a headlight tends to reduce the contrast of a scene.  It\ncan be used to fill in \"shadows\" of the object missed by the key\nand fill lights.  The headlight should always be significantly\ndimmer than the key light:  ratios of 2 to 15 are typical.\n"},
  {"GetKeyToHeadRatio", PyvtkLightKit_GetKeyToHeadRatio, METH_VARARGS,
   "V.GetKeyToHeadRatio() -> float\nC++: virtual double GetKeyToHeadRatio()\n\nSet/Get the key-to-headlight ratio.  Similar to the key-to-fill\nratio, this ratio controls how bright the headlight light is\ncompared to the key light: larger values correspond to a dimmer\nheadlight light.  The headlight is special kind of fill light,\nlighting only the parts of the object that the camera can see. As\nsuch, a headlight tends to reduce the contrast of a scene.  It\ncan be used to fill in \"shadows\" of the object missed by the key\nand fill lights.  The headlight should always be significantly\ndimmer than the key light:  ratios of 2 to 15 are typical.\n"},
  {"SetKeyToBackRatio", PyvtkLightKit_SetKeyToBackRatio, METH_VARARGS,
   "V.SetKeyToBackRatio(float)\nC++: virtual void SetKeyToBackRatio(double _arg)\n\nSet/Get the key-to-back light ratio.  This ratio controls how\nbright the back lights are compared to the key light: larger\nvalues correspond to dimmer back lights.  The back lights fill in\nthe remaining high-contrast regions behind the object. Values\nbetween 2 and 10 are good.\n"},
  {"GetKeyToBackRatioMinValue", PyvtkLightKit_GetKeyToBackRatioMinValue, METH_VARARGS,
   "V.GetKeyToBackRatioMinValue() -> float\nC++: virtual double GetKeyToBackRatioMinValue()\n\nSet/Get the key-to-back light ratio.  This ratio controls how\nbright the back lights are compared to the key light: larger\nvalues correspond to dimmer back lights.  The back lights fill in\nthe remaining high-contrast regions behind the object. Values\nbetween 2 and 10 are good.\n"},
  {"GetKeyToBackRatioMaxValue", PyvtkLightKit_GetKeyToBackRatioMaxValue, METH_VARARGS,
   "V.GetKeyToBackRatioMaxValue() -> float\nC++: virtual double GetKeyToBackRatioMaxValue()\n\nSet/Get the key-to-back light ratio.  This ratio controls how\nbright the back lights are compared to the key light: larger\nvalues correspond to dimmer back lights.  The back lights fill in\nthe remaining high-contrast regions behind the object. Values\nbetween 2 and 10 are good.\n"},
  {"GetKeyToBackRatio", PyvtkLightKit_GetKeyToBackRatio, METH_VARARGS,
   "V.GetKeyToBackRatio() -> float\nC++: virtual double GetKeyToBackRatio()\n\nSet/Get the key-to-back light ratio.  This ratio controls how\nbright the back lights are compared to the key light: larger\nvalues correspond to dimmer back lights.  The back lights fill in\nthe remaining high-contrast regions behind the object. Values\nbetween 2 and 10 are good.\n"},
  {"SetKeyLightWarmth", PyvtkLightKit_SetKeyLightWarmth, METH_VARARGS,
   "V.SetKeyLightWarmth(float)\nC++: virtual void SetKeyLightWarmth(double _arg)\n\nSet the warmth of each the lights.  Warmth is a parameter that\nvaries from 0 to 1, where 0 is \"cold\" (looks icy or lit by a very\nblue sky), 1 is \"warm\" (the red of a very red sunset, or the\nembers of a campfire), and 0.5 is a neutral white.  The warmth\nscale is non-linear. Warmth values close to 0.5 are subtly\n\"warmer\" or \"cooler,\" much like a warmer tungsten incandescent\nbulb, a cooler halogen, or daylight (cooler still).  Moving\nfurther away from 0.5, colors become more quickly varying towards\nblues and reds.  With regards to aesthetics, extremes of warmth\nshould be used sparingly.\n"},
  {"GetKeyLightWarmth", PyvtkLightKit_GetKeyLightWarmth, METH_VARARGS,
   "V.GetKeyLightWarmth() -> float\nC++: virtual double GetKeyLightWarmth()\n\nSet the warmth of each the lights.  Warmth is a parameter that\nvaries from 0 to 1, where 0 is \"cold\" (looks icy or lit by a very\nblue sky), 1 is \"warm\" (the red of a very red sunset, or the\nembers of a campfire), and 0.5 is a neutral white.  The warmth\nscale is non-linear. Warmth values close to 0.5 are subtly\n\"warmer\" or \"cooler,\" much like a warmer tungsten incandescent\nbulb, a cooler halogen, or daylight (cooler still).  Moving\nfurther away from 0.5, colors become more quickly varying towards\nblues and reds.  With regards to aesthetics, extremes of warmth\nshould be used sparingly.\n"},
  {"SetFillLightWarmth", PyvtkLightKit_SetFillLightWarmth, METH_VARARGS,
   "V.SetFillLightWarmth(float)\nC++: virtual void SetFillLightWarmth(double _arg)\n\n"},
  {"GetFillLightWarmth", PyvtkLightKit_GetFillLightWarmth, METH_VARARGS,
   "V.GetFillLightWarmth() -> float\nC++: virtual double GetFillLightWarmth()\n\n"},
  {"SetHeadLightWarmth", PyvtkLightKit_SetHeadLightWarmth, METH_VARARGS,
   "V.SetHeadLightWarmth(float)\nC++: virtual void SetHeadLightWarmth(double _arg)\n\n"},
  {"GetHeadLightWarmth", PyvtkLightKit_GetHeadLightWarmth, METH_VARARGS,
   "V.GetHeadLightWarmth() -> float\nC++: virtual double GetHeadLightWarmth()\n\n"},
  {"SetBackLightWarmth", PyvtkLightKit_SetBackLightWarmth, METH_VARARGS,
   "V.SetBackLightWarmth(float)\nC++: virtual void SetBackLightWarmth(double _arg)\n\n"},
  {"GetBackLightWarmth", PyvtkLightKit_GetBackLightWarmth, METH_VARARGS,
   "V.GetBackLightWarmth() -> float\nC++: virtual double GetBackLightWarmth()\n\n"},
  {"GetKeyLightColor", PyvtkLightKit_GetKeyLightColor, METH_VARARGS,
   "V.GetKeyLightColor() -> (float, float, float)\nC++: double *GetKeyLightColor()\n\nReturns the floating-point RGB values of each of the light's\ncolor.\n"},
  {"GetFillLightColor", PyvtkLightKit_GetFillLightColor, METH_VARARGS,
   "V.GetFillLightColor() -> (float, float, float)\nC++: double *GetFillLightColor()\n\nReturns the floating-point RGB values of each of the light's\ncolor.\n"},
  {"GetHeadLightColor", PyvtkLightKit_GetHeadLightColor, METH_VARARGS,
   "V.GetHeadLightColor() -> (float, float, float)\nC++: double *GetHeadLightColor()\n\nReturns the floating-point RGB values of each of the light's\ncolor.\n"},
  {"GetBackLightColor", PyvtkLightKit_GetBackLightColor, METH_VARARGS,
   "V.GetBackLightColor() -> (float, float, float)\nC++: double *GetBackLightColor()\n\nReturns the floating-point RGB values of each of the light's\ncolor.\n"},
  {"MaintainLuminanceOn", PyvtkLightKit_MaintainLuminanceOn, METH_VARARGS,
   "V.MaintainLuminanceOn()\nC++: virtual void MaintainLuminanceOn()\n\nIf MaintainLuminance is set, the LightKit will attempt to\nmaintain the apparent intensity of lights based on their\nperceptual brightnesses. By default, MaintainLuminance is off.\n"},
  {"MaintainLuminanceOff", PyvtkLightKit_MaintainLuminanceOff, METH_VARARGS,
   "V.MaintainLuminanceOff()\nC++: virtual void MaintainLuminanceOff()\n\nIf MaintainLuminance is set, the LightKit will attempt to\nmaintain the apparent intensity of lights based on their\nperceptual brightnesses. By default, MaintainLuminance is off.\n"},
  {"GetMaintainLuminance", PyvtkLightKit_GetMaintainLuminance, METH_VARARGS,
   "V.GetMaintainLuminance() -> int\nC++: virtual vtkTypeBool GetMaintainLuminance()\n\nIf MaintainLuminance is set, the LightKit will attempt to\nmaintain the apparent intensity of lights based on their\nperceptual brightnesses. By default, MaintainLuminance is off.\n"},
  {"SetMaintainLuminance", PyvtkLightKit_SetMaintainLuminance, METH_VARARGS,
   "V.SetMaintainLuminance(int)\nC++: virtual void SetMaintainLuminance(vtkTypeBool _arg)\n\nIf MaintainLuminance is set, the LightKit will attempt to\nmaintain the apparent intensity of lights based on their\nperceptual brightnesses. By default, MaintainLuminance is off.\n"},
  {"SetKeyLightAngle", PyvtkLightKit_SetKeyLightAngle, METH_VARARGS,
   "V.SetKeyLightAngle(float, float)\nC++: void SetKeyLightAngle(double elevation, double azimuth)\nV.SetKeyLightAngle([float, float])\nC++: void SetKeyLightAngle(double angle[2])\n\nGet/Set the position of the key, fill, and back lights using\nangular methods.  Elevation corresponds to latitude, azimuth to\nlongitude.  It is recommended that the key light always be on the\nviewer's side of the object and above the object, while the fill\nlight generally lights the part of the object not lit by the fill\nlight.  The headlight, which is always located at the viewer, can\nthen be used to reduce the contrast in the image. There are a\npair of back lights.  They are located at the same elevation and\nat opposing azimuths (ie, one to the left, and one to the right).\n They are generally set at the equator (elevation = 0), and at\napproximately 120 degrees (lighting from each side and behind).\n"},
  {"SetKeyLightElevation", PyvtkLightKit_SetKeyLightElevation, METH_VARARGS,
   "V.SetKeyLightElevation(float)\nC++: void SetKeyLightElevation(double x)\n\n"},
  {"SetKeyLightAzimuth", PyvtkLightKit_SetKeyLightAzimuth, METH_VARARGS,
   "V.SetKeyLightAzimuth(float)\nC++: void SetKeyLightAzimuth(double x)\n\n"},
  {"GetKeyLightAngle", PyvtkLightKit_GetKeyLightAngle, METH_VARARGS,
   "V.GetKeyLightAngle() -> (float, float)\nC++: double *GetKeyLightAngle()\n\n"},
  {"GetKeyLightElevation", PyvtkLightKit_GetKeyLightElevation, METH_VARARGS,
   "V.GetKeyLightElevation() -> float\nC++: double GetKeyLightElevation()\n\n"},
  {"GetKeyLightAzimuth", PyvtkLightKit_GetKeyLightAzimuth, METH_VARARGS,
   "V.GetKeyLightAzimuth() -> float\nC++: double GetKeyLightAzimuth()\n\n"},
  {"SetFillLightAngle", PyvtkLightKit_SetFillLightAngle, METH_VARARGS,
   "V.SetFillLightAngle(float, float)\nC++: void SetFillLightAngle(double elevation, double azimuth)\nV.SetFillLightAngle([float, float])\nC++: void SetFillLightAngle(double angle[2])\n\n"},
  {"SetFillLightElevation", PyvtkLightKit_SetFillLightElevation, METH_VARARGS,
   "V.SetFillLightElevation(float)\nC++: void SetFillLightElevation(double x)\n\n"},
  {"SetFillLightAzimuth", PyvtkLightKit_SetFillLightAzimuth, METH_VARARGS,
   "V.SetFillLightAzimuth(float)\nC++: void SetFillLightAzimuth(double x)\n\n"},
  {"GetFillLightAngle", PyvtkLightKit_GetFillLightAngle, METH_VARARGS,
   "V.GetFillLightAngle() -> (float, float)\nC++: double *GetFillLightAngle()\n\n"},
  {"GetFillLightElevation", PyvtkLightKit_GetFillLightElevation, METH_VARARGS,
   "V.GetFillLightElevation() -> float\nC++: double GetFillLightElevation()\n\n"},
  {"GetFillLightAzimuth", PyvtkLightKit_GetFillLightAzimuth, METH_VARARGS,
   "V.GetFillLightAzimuth() -> float\nC++: double GetFillLightAzimuth()\n\n"},
  {"SetBackLightAngle", PyvtkLightKit_SetBackLightAngle, METH_VARARGS,
   "V.SetBackLightAngle(float, float)\nC++: void SetBackLightAngle(double elevation, double azimuth)\nV.SetBackLightAngle([float, float])\nC++: void SetBackLightAngle(double angle[2])\n\n"},
  {"SetBackLightElevation", PyvtkLightKit_SetBackLightElevation, METH_VARARGS,
   "V.SetBackLightElevation(float)\nC++: void SetBackLightElevation(double x)\n\n"},
  {"SetBackLightAzimuth", PyvtkLightKit_SetBackLightAzimuth, METH_VARARGS,
   "V.SetBackLightAzimuth(float)\nC++: void SetBackLightAzimuth(double x)\n\n"},
  {"GetBackLightAngle", PyvtkLightKit_GetBackLightAngle, METH_VARARGS,
   "V.GetBackLightAngle() -> (float, float)\nC++: double *GetBackLightAngle()\n\n"},
  {"GetBackLightElevation", PyvtkLightKit_GetBackLightElevation, METH_VARARGS,
   "V.GetBackLightElevation() -> float\nC++: double GetBackLightElevation()\n\n"},
  {"GetBackLightAzimuth", PyvtkLightKit_GetBackLightAzimuth, METH_VARARGS,
   "V.GetBackLightAzimuth() -> float\nC++: double GetBackLightAzimuth()\n\n"},
  {"AddLightsToRenderer", PyvtkLightKit_AddLightsToRenderer, METH_VARARGS,
   "V.AddLightsToRenderer(vtkRenderer)\nC++: void AddLightsToRenderer(vtkRenderer *renderer)\n\nAdd lights to, or remove lights from, a renderer. Lights may be\nadded to more than one renderer, if desired.\n"},
  {"RemoveLightsFromRenderer", PyvtkLightKit_RemoveLightsFromRenderer, METH_VARARGS,
   "V.RemoveLightsFromRenderer(vtkRenderer)\nC++: void RemoveLightsFromRenderer(vtkRenderer *renderer)\n\nAdd lights to, or remove lights from, a renderer. Lights may be\nadded to more than one renderer, if desired.\n"},
  {"DeepCopy", PyvtkLightKit_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkLightKit)\nC++: void DeepCopy(vtkLightKit *kit)\n\n"},
  {"Modified", PyvtkLightKit_Modified, METH_VARARGS,
   "V.Modified()\nC++: void Modified() override;\n\nUpdate the modification time for this object. Many filters rely\non the modification time to determine if they need to recompute\ntheir data. The modification time is a unique monotonically\nincreasing unsigned long integer.\n"},
  {"Update", PyvtkLightKit_Update, METH_VARARGS,
   "V.Update()\nC++: void Update()\n\n"},
  {"GetStringFromType", PyvtkLightKit_GetStringFromType, METH_VARARGS,
   "V.GetStringFromType(int) -> string\nC++: static const char *GetStringFromType(int type)\n\nHelper method to go from a enum type to a string type\n"},
  {"GetStringFromSubType", PyvtkLightKit_GetStringFromSubType, METH_VARARGS,
   "V.GetStringFromSubType(int) -> string\nC++: static const char *GetStringFromSubType(int type)\n\nHelper method to go from a enum subtype to a string subtype\n"},
  {"GetShortStringFromSubType", PyvtkLightKit_GetShortStringFromSubType, METH_VARARGS,
   "V.GetShortStringFromSubType(int) -> string\nC++: static const char *GetShortStringFromSubType(int subtype)\n\nHelper method to go from a enum subtype to a string subtype The\ndifference from GetStringFromSubType is that it returns a shorter\nstrings (useful for GUI with minimum space)\n"},
  {"GetSubType", PyvtkLightKit_GetSubType, METH_VARARGS,
   "V.GetSubType(LightKitType, int) -> LightKitSubType\nC++: static LightKitSubType GetSubType(LightKitType type, int i)\n\nReturn the possible subtype from a given type. You have to pass\nin a number i [0,3] no check is done.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLightKit_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkLightKit", // tp_name
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
  PyvtkLightKit_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLightKit_StaticNew()
{
  return vtkLightKit::New();
}

PyObject *PyvtkLightKit_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLightKit_Type, PyvtkLightKit_Methods,
    "vtkLightKit",
 &PyvtkLightKit_StaticNew);

  PyTypeObject *pytype = &PyvtkLightKit_Type;

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

  PyType_Ready(&PyvtkLightKit_LightKitType_Type);
  PyvtkLightKit_LightKitType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkLightKit_LightKitType_Type);

  o = (PyObject *)&PyvtkLightKit_LightKitType_Type;
  if (PyDict_SetItemString(d, "LightKitType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkLightKit_LightKitSubType_Type);
  PyvtkLightKit_LightKitSubType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkLightKit_LightKitSubType_Type);

  o = (PyObject *)&PyvtkLightKit_LightKitSubType_Type;
  if (PyDict_SetItemString(d, "LightKitSubType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkLightKit::LightKitType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "TKeyLight", vtkLightKit::TKeyLight },
        { "TFillLight", vtkLightKit::TFillLight },
        { "TBackLight", vtkLightKit::TBackLight },
        { "THeadLight", vtkLightKit::THeadLight },
      };

    o = PyvtkLightKit_LightKitType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkLightKit::LightKitSubType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "Warmth", vtkLightKit::Warmth },
        { "Intensity", vtkLightKit::Intensity },
        { "Elevation", vtkLightKit::Elevation },
        { "Azimuth", vtkLightKit::Azimuth },
        { "KFRatio", vtkLightKit::KFRatio },
        { "KBRatio", vtkLightKit::KBRatio },
        { "KHRatio", vtkLightKit::KHRatio },
      };

    o = PyvtkLightKit_LightKitSubType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLightKit(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLightKit_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLightKit", o) != 0)
  {
    Py_DECREF(o);
  }

}

