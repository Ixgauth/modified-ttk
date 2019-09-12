// python wrapper for vtkPointGaussianMapper
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
#include "vtkPointGaussianMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointGaussianMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPointGaussianMapper_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataMapper_ClassNew
extern "C" { PyObject *PyvtkPolyDataMapper_ClassNew(); }
#define DECLARED_PyvtkPolyDataMapper_ClassNew
#endif

static const char *PyvtkPointGaussianMapper_Doc =
  "vtkPointGaussianMapper - draw PointGaussians using imposters\n\n"
  "Superclass: vtkPolyDataMapper\n\n"
  "A mapper that uses imposters to draw gaussian splats or other shapes\n"
  "if custom shader code is set. Supports transparency and picking as\n"
  "well. It draws all the points and does not require cell arrays. If\n"
  "cell arrays are provided it will only draw the points used by the\n"
  "Verts cell array. The shape of the imposter is a triangle.\n\n";


static PyObject *
PyvtkPointGaussianMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointGaussianMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointGaussianMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointGaussianMapper *tempr = vtkPointGaussianMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointGaussianMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointGaussianMapper::NewInstance());

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
PyvtkPointGaussianMapper_SetScaleFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  vtkPiecewiseFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetScaleFunction(temp0);
    }
    else
    {
      op->vtkPointGaussianMapper::SetScaleFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_GetScaleFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetScaleFunction() :
      op->vtkPointGaussianMapper::GetScaleFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_SetScaleTableSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleTableSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleTableSize(temp0);
    }
    else
    {
      op->vtkPointGaussianMapper::SetScaleTableSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_GetScaleTableSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleTableSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScaleTableSize() :
      op->vtkPointGaussianMapper::GetScaleTableSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_SetScaleArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleArray(temp0);
    }
    else
    {
      op->vtkPointGaussianMapper::SetScaleArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_GetScaleArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetScaleArray() :
      op->vtkPointGaussianMapper::GetScaleArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_SetScaleArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleArrayComponent(temp0);
    }
    else
    {
      op->vtkPointGaussianMapper::SetScaleArrayComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_GetScaleArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScaleArrayComponent() :
      op->vtkPointGaussianMapper::GetScaleArrayComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleFactor(temp0);
    }
    else
    {
      op->vtkPointGaussianMapper::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkPointGaussianMapper::GetScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_SetEmissive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEmissive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  int temp0;
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
      op->vtkPointGaussianMapper::SetEmissive(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_GetEmissive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEmissive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEmissive() :
      op->vtkPointGaussianMapper::GetEmissive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_EmissiveOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EmissiveOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EmissiveOn();
    }
    else
    {
      op->vtkPointGaussianMapper::EmissiveOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_EmissiveOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EmissiveOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EmissiveOff();
    }
    else
    {
      op->vtkPointGaussianMapper::EmissiveOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_SetScalarOpacityFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacityFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  vtkPiecewiseFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetScalarOpacityFunction(temp0);
    }
    else
    {
      op->vtkPointGaussianMapper::SetScalarOpacityFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_GetScalarOpacityFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacityFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetScalarOpacityFunction() :
      op->vtkPointGaussianMapper::GetScalarOpacityFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_SetOpacityTableSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacityTableSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacityTableSize(temp0);
    }
    else
    {
      op->vtkPointGaussianMapper::SetOpacityTableSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_GetOpacityTableSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityTableSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOpacityTableSize() :
      op->vtkPointGaussianMapper::GetOpacityTableSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_SetOpacityArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacityArray(temp0);
    }
    else
    {
      op->vtkPointGaussianMapper::SetOpacityArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_GetOpacityArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetOpacityArray() :
      op->vtkPointGaussianMapper::GetOpacityArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_SetOpacityArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacityArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacityArrayComponent(temp0);
    }
    else
    {
      op->vtkPointGaussianMapper::SetOpacityArrayComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_GetOpacityArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOpacityArrayComponent() :
      op->vtkPointGaussianMapper::GetOpacityArrayComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_SetSplatShaderCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplatShaderCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSplatShaderCode(temp0);
    }
    else
    {
      op->vtkPointGaussianMapper::SetSplatShaderCode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_GetSplatShaderCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplatShaderCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSplatShaderCode() :
      op->vtkPointGaussianMapper::GetSplatShaderCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_SetTriangleScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleScale(temp0);
    }
    else
    {
      op->vtkPointGaussianMapper::SetTriangleScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_GetTriangleScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriangleScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetTriangleScale() :
      op->vtkPointGaussianMapper::GetTriangleScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointGaussianMapper_GetSupportsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointGaussianMapper *op = static_cast<vtkPointGaussianMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSupportsSelection() :
      op->vtkPointGaussianMapper::GetSupportsSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPointGaussianMapper_Methods[] = {
  {"IsTypeOf", PyvtkPointGaussianMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointGaussianMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointGaussianMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPointGaussianMapper\nC++: static vtkPointGaussianMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointGaussianMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPointGaussianMapper\nC++: vtkPointGaussianMapper *NewInstance()\n\n"},
  {"SetScaleFunction", PyvtkPointGaussianMapper_SetScaleFunction, METH_VARARGS,
   "V.SetScaleFunction(vtkPiecewiseFunction)\nC++: void SetScaleFunction(vtkPiecewiseFunction *)\n\nSet/Get the optional scale transfer function. This is only used\nwhen a ScaleArray is also specified.\n"},
  {"GetScaleFunction", PyvtkPointGaussianMapper_GetScaleFunction, METH_VARARGS,
   "V.GetScaleFunction() -> vtkPiecewiseFunction\nC++: virtual vtkPiecewiseFunction *GetScaleFunction()\n\nSet/Get the optional scale transfer function. This is only used\nwhen a ScaleArray is also specified.\n"},
  {"SetScaleTableSize", PyvtkPointGaussianMapper_SetScaleTableSize, METH_VARARGS,
   "V.SetScaleTableSize(int)\nC++: virtual void SetScaleTableSize(int _arg)\n\nThe size of the table used in computing scale, used when\nconverting a vtkPiecewiseFunction to a table\n"},
  {"GetScaleTableSize", PyvtkPointGaussianMapper_GetScaleTableSize, METH_VARARGS,
   "V.GetScaleTableSize() -> int\nC++: virtual int GetScaleTableSize()\n\nThe size of the table used in computing scale, used when\nconverting a vtkPiecewiseFunction to a table\n"},
  {"SetScaleArray", PyvtkPointGaussianMapper_SetScaleArray, METH_VARARGS,
   "V.SetScaleArray(string)\nC++: virtual void SetScaleArray(const char *_arg)\n\nConvenience method to set the array to scale with.\n"},
  {"GetScaleArray", PyvtkPointGaussianMapper_GetScaleArray, METH_VARARGS,
   "V.GetScaleArray() -> string\nC++: virtual char *GetScaleArray()\n\nConvenience method to set the array to scale with.\n"},
  {"SetScaleArrayComponent", PyvtkPointGaussianMapper_SetScaleArrayComponent, METH_VARARGS,
   "V.SetScaleArrayComponent(int)\nC++: virtual void SetScaleArrayComponent(int _arg)\n\nConvenience method to set the component of the array to scale\nwith.\n"},
  {"GetScaleArrayComponent", PyvtkPointGaussianMapper_GetScaleArrayComponent, METH_VARARGS,
   "V.GetScaleArrayComponent() -> int\nC++: virtual int GetScaleArrayComponent()\n\nConvenience method to set the component of the array to scale\nwith.\n"},
  {"SetScaleFactor", PyvtkPointGaussianMapper_SetScaleFactor, METH_VARARGS,
   "V.SetScaleFactor(float)\nC++: virtual void SetScaleFactor(double _arg)\n\nSet the default scale factor of the point gaussians.  This\ndefaults to 1.0. All radius computations will be scaled by the\nfactor including the ScaleArray. If a vtkPiecewideFunction is\nused the scaling happens prior to the function lookup. A scale\nfactor of 0.0 indicates that the splats should be rendered as\nsimple points.\n"},
  {"GetScaleFactor", PyvtkPointGaussianMapper_GetScaleFactor, METH_VARARGS,
   "V.GetScaleFactor() -> float\nC++: virtual double GetScaleFactor()\n\nSet the default scale factor of the point gaussians.  This\ndefaults to 1.0. All radius computations will be scaled by the\nfactor including the ScaleArray. If a vtkPiecewideFunction is\nused the scaling happens prior to the function lookup. A scale\nfactor of 0.0 indicates that the splats should be rendered as\nsimple points.\n"},
  {"SetEmissive", PyvtkPointGaussianMapper_SetEmissive, METH_VARARGS,
   "V.SetEmissive(int)\nC++: virtual void SetEmissive(vtkTypeBool _arg)\n\nTreat the points/splats as emissive light sources. The default is\ntrue.\n"},
  {"GetEmissive", PyvtkPointGaussianMapper_GetEmissive, METH_VARARGS,
   "V.GetEmissive() -> int\nC++: virtual vtkTypeBool GetEmissive()\n\nTreat the points/splats as emissive light sources. The default is\ntrue.\n"},
  {"EmissiveOn", PyvtkPointGaussianMapper_EmissiveOn, METH_VARARGS,
   "V.EmissiveOn()\nC++: virtual void EmissiveOn()\n\nTreat the points/splats as emissive light sources. The default is\ntrue.\n"},
  {"EmissiveOff", PyvtkPointGaussianMapper_EmissiveOff, METH_VARARGS,
   "V.EmissiveOff()\nC++: virtual void EmissiveOff()\n\nTreat the points/splats as emissive light sources. The default is\ntrue.\n"},
  {"SetScalarOpacityFunction", PyvtkPointGaussianMapper_SetScalarOpacityFunction, METH_VARARGS,
   "V.SetScalarOpacityFunction(vtkPiecewiseFunction)\nC++: void SetScalarOpacityFunction(vtkPiecewiseFunction *)\n\nSet/Get the optional opacity transfer function. This is only used\nwhen an OpacityArray is also specified.\n"},
  {"GetScalarOpacityFunction", PyvtkPointGaussianMapper_GetScalarOpacityFunction, METH_VARARGS,
   "V.GetScalarOpacityFunction() -> vtkPiecewiseFunction\nC++: virtual vtkPiecewiseFunction *GetScalarOpacityFunction()\n\nSet/Get the optional opacity transfer function. This is only used\nwhen an OpacityArray is also specified.\n"},
  {"SetOpacityTableSize", PyvtkPointGaussianMapper_SetOpacityTableSize, METH_VARARGS,
   "V.SetOpacityTableSize(int)\nC++: virtual void SetOpacityTableSize(int _arg)\n\nThe size of the table used in computing opacities, used when\nconverting a vtkPiecewiseFunction to a table\n"},
  {"GetOpacityTableSize", PyvtkPointGaussianMapper_GetOpacityTableSize, METH_VARARGS,
   "V.GetOpacityTableSize() -> int\nC++: virtual int GetOpacityTableSize()\n\nThe size of the table used in computing opacities, used when\nconverting a vtkPiecewiseFunction to a table\n"},
  {"SetOpacityArray", PyvtkPointGaussianMapper_SetOpacityArray, METH_VARARGS,
   "V.SetOpacityArray(string)\nC++: virtual void SetOpacityArray(const char *_arg)\n\nMethod to set the optional opacity array.  If specified this\narray will be used to generate the opacity values.\n"},
  {"GetOpacityArray", PyvtkPointGaussianMapper_GetOpacityArray, METH_VARARGS,
   "V.GetOpacityArray() -> string\nC++: virtual char *GetOpacityArray()\n\nMethod to set the optional opacity array.  If specified this\narray will be used to generate the opacity values.\n"},
  {"SetOpacityArrayComponent", PyvtkPointGaussianMapper_SetOpacityArrayComponent, METH_VARARGS,
   "V.SetOpacityArrayComponent(int)\nC++: virtual void SetOpacityArrayComponent(int _arg)\n\nConvenience method to set the component of the array to opacify\nwith.\n"},
  {"GetOpacityArrayComponent", PyvtkPointGaussianMapper_GetOpacityArrayComponent, METH_VARARGS,
   "V.GetOpacityArrayComponent() -> int\nC++: virtual int GetOpacityArrayComponent()\n\nConvenience method to set the component of the array to opacify\nwith.\n"},
  {"SetSplatShaderCode", PyvtkPointGaussianMapper_SetSplatShaderCode, METH_VARARGS,
   "V.SetSplatShaderCode(string)\nC++: virtual void SetSplatShaderCode(const char *_arg)\n\nMethod to override the fragment shader code for the splat.  You\ncan set this to draw other shapes. For the OPenGL2 backend some\nof the variables you can use and/or modify include, opacity - 0.0\nto 1.0 diffuseColor - vec3 ambientColor - vec3 offsetVCVSOutput -\nvec2 offset in view coordinates from the splat center\n"},
  {"GetSplatShaderCode", PyvtkPointGaussianMapper_GetSplatShaderCode, METH_VARARGS,
   "V.GetSplatShaderCode() -> string\nC++: virtual char *GetSplatShaderCode()\n\nMethod to override the fragment shader code for the splat.  You\ncan set this to draw other shapes. For the OPenGL2 backend some\nof the variables you can use and/or modify include, opacity - 0.0\nto 1.0 diffuseColor - vec3 ambientColor - vec3 offsetVCVSOutput -\nvec2 offset in view coordinates from the splat center\n"},
  {"SetTriangleScale", PyvtkPointGaussianMapper_SetTriangleScale, METH_VARARGS,
   "V.SetTriangleScale(float)\nC++: virtual void SetTriangleScale(float _arg)\n\nWhen drawing triangles as opposed too point mode (triangles are\nfor splats shaders that are bigger than a pixel) this controls\nhow large the triangle will be. By default it is large enough to\ncontain a cicle of radius 3.0*scale which works well for gaussian\nsplats as after 3.0 standard deviations the opacity is near zero.\nFor custom shader codes a different value can be used. Generally\nyou should use the lowest value you can as it will result in\nfewer fragments. For example if your custom shader only draws a\ndisc of radius 1.0*scale, then set this to 1.0 to avoid sending\nmany fragments to the shader that will just get discarded.\n"},
  {"GetTriangleScale", PyvtkPointGaussianMapper_GetTriangleScale, METH_VARARGS,
   "V.GetTriangleScale() -> float\nC++: virtual float GetTriangleScale()\n\nWhen drawing triangles as opposed too point mode (triangles are\nfor splats shaders that are bigger than a pixel) this controls\nhow large the triangle will be. By default it is large enough to\ncontain a cicle of radius 3.0*scale which works well for gaussian\nsplats as after 3.0 standard deviations the opacity is near zero.\nFor custom shader codes a different value can be used. Generally\nyou should use the lowest value you can as it will result in\nfewer fragments. For example if your custom shader only draws a\ndisc of radius 1.0*scale, then set this to 1.0 to avoid sending\nmany fragments to the shader that will just get discarded.\n"},
  {"GetSupportsSelection", PyvtkPointGaussianMapper_GetSupportsSelection, METH_VARARGS,
   "V.GetSupportsSelection() -> bool\nC++: bool GetSupportsSelection() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Used by\nvtkHardwareSelector to determine if the prop supports hardware\nselection.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPointGaussianMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkPointGaussianMapper", // tp_name
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
  PyvtkPointGaussianMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointGaussianMapper_StaticNew()
{
  return vtkPointGaussianMapper::New();
}

PyObject *PyvtkPointGaussianMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPointGaussianMapper_Type, PyvtkPointGaussianMapper_Methods,
    "vtkPointGaussianMapper",
 &PyvtkPointGaussianMapper_StaticNew);

  PyTypeObject *pytype = &PyvtkPointGaussianMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataMapper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointGaussianMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointGaussianMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointGaussianMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

