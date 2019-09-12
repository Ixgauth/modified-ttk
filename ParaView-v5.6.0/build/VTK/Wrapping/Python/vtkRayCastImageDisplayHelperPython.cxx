// python wrapper for vtkRayCastImageDisplayHelper
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
#include "vtkRayCastImageDisplayHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRayCastImageDisplayHelper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRayCastImageDisplayHelper_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkRayCastImageDisplayHelper_Doc =
  "vtkRayCastImageDisplayHelper - helper class that draws the image to\nthe screen\n\n"
  "Superclass: vtkObject\n\n"
  "This is a helper class for drawing images created from ray casting on\n"
  "the screen. This is the abstract device-independent superclass.\n\n"
  "@sa\n"
  "vtkUnstructuredGridVolumeRayCastMapper\n"
  "vtkOpenGLRayCastImageDisplayHelper\n\n";


static PyObject *
PyvtkRayCastImageDisplayHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRayCastImageDisplayHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRayCastImageDisplayHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRayCastImageDisplayHelper *tempr = vtkRayCastImageDisplayHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRayCastImageDisplayHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRayCastImageDisplayHelper::NewInstance());

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
PyvtkRayCastImageDisplayHelper_RenderTexture_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  vtkVolume *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  const size_t size2 = 2;
  int temp2[2];
  int save2[2];
  const size_t size3 = 2;
  int temp3[2];
  int save3[2];
  const size_t size4 = 2;
  int temp4[2];
  int save4[2];
  const size_t size5 = 2;
  int temp5[2];
  int save5[2];
  float temp6;
  size_t size7 = ap.GetArgSize(7);
  vtkPythonArgs::Array<unsigned char> store7(2*size7);
  unsigned char *temp7 = store7.Data();
  unsigned char *save7 = (size7 == 0 ? nullptr : temp7 + size7);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(8) &&
      ap.GetVTKObject(temp0, "vtkVolume") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetArray(temp7, size7))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);
    ap.Save(temp5, save5, size5);
    ap.Save(temp7, save7, size7);

    op->RenderTexture(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (ap.HasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(7, temp7, size7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRayCastImageDisplayHelper_RenderTexture_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  vtkVolume *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  const size_t size2 = 2;
  int temp2[2];
  int save2[2];
  const size_t size3 = 2;
  int temp3[2];
  int save3[2];
  const size_t size4 = 2;
  int temp4[2];
  int save4[2];
  const size_t size5 = 2;
  int temp5[2];
  int save5[2];
  float temp6;
  size_t size7 = ap.GetArgSize(7);
  vtkPythonArgs::Array<unsigned short> store7(2*size7);
  unsigned short *temp7 = store7.Data();
  unsigned short *save7 = (size7 == 0 ? nullptr : temp7 + size7);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(8) &&
      ap.GetVTKObject(temp0, "vtkVolume") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetArray(temp7, size7))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);
    ap.Save(temp5, save5, size5);
    ap.Save(temp7, save7, size7);

    op->RenderTexture(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (ap.HasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(7, temp7, size7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRayCastImageDisplayHelper_RenderTexture_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  vtkVolume *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  vtkFixedPointRayCastImage *temp2 = nullptr;
  float temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkVolume") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetVTKObject(temp2, "vtkFixedPointRayCastImage") &&
      ap.GetValue(temp3))
  {
    op->RenderTexture(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRayCastImageDisplayHelper_RenderTexture_Methods[] = {
  {nullptr, PyvtkRayCastImageDisplayHelper_RenderTexture_s1, METH_VARARGS,
   "@VVPPPPfP *vtkVolume *vtkRenderer *i *i *i *i *B"},
  {nullptr, PyvtkRayCastImageDisplayHelper_RenderTexture_s2, METH_VARARGS,
   "@VVPPPPfP *vtkVolume *vtkRenderer *i *i *i *i *H"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRayCastImageDisplayHelper_RenderTexture(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRayCastImageDisplayHelper_RenderTexture_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkRayCastImageDisplayHelper_RenderTexture_s3(self, args);
    case 8:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RenderTexture");
  return nullptr;
}



static PyObject *
PyvtkRayCastImageDisplayHelper_SetPreMultipliedColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreMultipliedColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreMultipliedColors(temp0);
    }
    else
    {
      op->vtkRayCastImageDisplayHelper::SetPreMultipliedColors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_GetPreMultipliedColorsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreMultipliedColorsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPreMultipliedColorsMinValue() :
      op->vtkRayCastImageDisplayHelper::GetPreMultipliedColorsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_GetPreMultipliedColorsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreMultipliedColorsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPreMultipliedColorsMaxValue() :
      op->vtkRayCastImageDisplayHelper::GetPreMultipliedColorsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_GetPreMultipliedColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreMultipliedColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPreMultipliedColors() :
      op->vtkRayCastImageDisplayHelper::GetPreMultipliedColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_PreMultipliedColorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreMultipliedColorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreMultipliedColorsOn();
    }
    else
    {
      op->vtkRayCastImageDisplayHelper::PreMultipliedColorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_PreMultipliedColorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreMultipliedColorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreMultipliedColorsOff();
    }
    else
    {
      op->vtkRayCastImageDisplayHelper::PreMultipliedColorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_SetPixelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPixelScale(temp0);
    }
    else
    {
      op->vtkRayCastImageDisplayHelper::SetPixelScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_GetPixelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetPixelScale() :
      op->vtkRayCastImageDisplayHelper::GetPixelScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

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
      op->vtkRayCastImageDisplayHelper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRayCastImageDisplayHelper_Methods[] = {
  {"IsTypeOf", PyvtkRayCastImageDisplayHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRayCastImageDisplayHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRayCastImageDisplayHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRayCastImageDisplayHelper\nC++: static vtkRayCastImageDisplayHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRayCastImageDisplayHelper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRayCastImageDisplayHelper\nC++: vtkRayCastImageDisplayHelper *NewInstance()\n\n"},
  {"RenderTexture", PyvtkRayCastImageDisplayHelper_RenderTexture, METH_VARARGS,
   "V.RenderTexture(vtkVolume, vtkRenderer, [int, int], [int, int],\n    [int, int], [int, int], float, [int, ...])\nC++: virtual void RenderTexture(vtkVolume *vol, vtkRenderer *ren,\n    int imageMemorySize[2], int imageViewportSize[2],\n    int imageInUseSize[2], int imageOrigin[2],\n    float requestedDepth, unsigned char *image)\nV.RenderTexture(vtkVolume, vtkRenderer, [int, int], [int, int],\n    [int, int], [int, int], float, [int, ...])\nC++: virtual void RenderTexture(vtkVolume *vol, vtkRenderer *ren,\n    int imageMemorySize[2], int imageViewportSize[2],\n    int imageInUseSize[2], int imageOrigin[2],\n    float requestedDepth, unsigned short *image)\nV.RenderTexture(vtkVolume, vtkRenderer, vtkFixedPointRayCastImage,\n     float)\nC++: virtual void RenderTexture(vtkVolume *vol, vtkRenderer *ren,\n    vtkFixedPointRayCastImage *image, float requestedDepth)\n\n"},
  {"SetPreMultipliedColors", PyvtkRayCastImageDisplayHelper_SetPreMultipliedColors, METH_VARARGS,
   "V.SetPreMultipliedColors(int)\nC++: virtual void SetPreMultipliedColors(vtkTypeBool _arg)\n\n"},
  {"GetPreMultipliedColorsMinValue", PyvtkRayCastImageDisplayHelper_GetPreMultipliedColorsMinValue, METH_VARARGS,
   "V.GetPreMultipliedColorsMinValue() -> int\nC++: virtual vtkTypeBool GetPreMultipliedColorsMinValue()\n\n"},
  {"GetPreMultipliedColorsMaxValue", PyvtkRayCastImageDisplayHelper_GetPreMultipliedColorsMaxValue, METH_VARARGS,
   "V.GetPreMultipliedColorsMaxValue() -> int\nC++: virtual vtkTypeBool GetPreMultipliedColorsMaxValue()\n\n"},
  {"GetPreMultipliedColors", PyvtkRayCastImageDisplayHelper_GetPreMultipliedColors, METH_VARARGS,
   "V.GetPreMultipliedColors() -> int\nC++: virtual vtkTypeBool GetPreMultipliedColors()\n\n"},
  {"PreMultipliedColorsOn", PyvtkRayCastImageDisplayHelper_PreMultipliedColorsOn, METH_VARARGS,
   "V.PreMultipliedColorsOn()\nC++: virtual void PreMultipliedColorsOn()\n\n"},
  {"PreMultipliedColorsOff", PyvtkRayCastImageDisplayHelper_PreMultipliedColorsOff, METH_VARARGS,
   "V.PreMultipliedColorsOff()\nC++: virtual void PreMultipliedColorsOff()\n\n"},
  {"SetPixelScale", PyvtkRayCastImageDisplayHelper_SetPixelScale, METH_VARARGS,
   "V.SetPixelScale(float)\nC++: virtual void SetPixelScale(float _arg)\n\nSet / Get the pixel scale to be applied to the image before\ndisplay. Can be set to scale the incoming pixel values - for\nexample the fixed point mapper uses the unsigned short API but\nwith 15 bit values so needs a scale of 2.0.\n"},
  {"GetPixelScale", PyvtkRayCastImageDisplayHelper_GetPixelScale, METH_VARARGS,
   "V.GetPixelScale() -> float\nC++: virtual float GetPixelScale()\n\nSet / Get the pixel scale to be applied to the image before\ndisplay. Can be set to scale the incoming pixel values - for\nexample the fixed point mapper uses the unsigned short API but\nwith 15 bit values so needs a scale of 2.0.\n"},
  {"ReleaseGraphicsResources", PyvtkRayCastImageDisplayHelper_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nDerived class should implemen this if needed\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRayCastImageDisplayHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumePython.vtkRayCastImageDisplayHelper", // tp_name
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
  PyvtkRayCastImageDisplayHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRayCastImageDisplayHelper_StaticNew()
{
  return vtkRayCastImageDisplayHelper::New();
}

PyObject *PyvtkRayCastImageDisplayHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRayCastImageDisplayHelper_Type, PyvtkRayCastImageDisplayHelper_Methods,
    "vtkRayCastImageDisplayHelper",
 &PyvtkRayCastImageDisplayHelper_StaticNew);

  PyTypeObject *pytype = &PyvtkRayCastImageDisplayHelper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRayCastImageDisplayHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRayCastImageDisplayHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRayCastImageDisplayHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

