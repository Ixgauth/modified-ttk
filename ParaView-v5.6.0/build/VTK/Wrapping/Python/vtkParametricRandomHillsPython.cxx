// python wrapper for vtkParametricRandomHills
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
#include "vtkParametricRandomHills.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParametricRandomHills(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkParametricRandomHills_ClassNew(); }

#ifndef DECLARED_PyvtkParametricFunction_ClassNew
extern "C" { PyObject *PyvtkParametricFunction_ClassNew(); }
#define DECLARED_PyvtkParametricFunction_ClassNew
#endif

static const char *PyvtkParametricRandomHills_Doc =
  "vtkParametricRandomHills - Generate a surface covered with randomly\nplaced hills.\n\n"
  "Superclass: vtkParametricFunction\n\n"
  "vtkParametricRandomHills generates a surface covered with randomly\n"
  "placed hills. Hills will vary in shape and height since the presence\n"
  "of nearby hills will contribute to the shape and height of a given\n"
  "hill. An option is provided for placing hills on a regular grid on\n"
  "the surface. In this case the hills will all have the same shape and\n"
  "height.\n\n"
  "For further information about this surface, please consult the\n"
  "technical description \"Parametric surfaces\" in\n"
  "http://www.vtk.org/publications in the \"VTK Technical Documents\"\n"
  "section in the VTk.org web pages.\n\n"
  "@par Thanks: Andrew Maclean andrew.amaclean@gmail.com for creating\n"
  "and contributing the class.\n\n";


static PyObject *
PyvtkParametricRandomHills_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParametricRandomHills::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParametricRandomHills::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParametricRandomHills *tempr = vtkParametricRandomHills::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParametricRandomHills *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParametricRandomHills::NewInstance());

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
PyvtkParametricRandomHills_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkParametricRandomHills::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetNumberOfHills(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfHills");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfHills(temp0);
    }
    else
    {
      op->vtkParametricRandomHills::SetNumberOfHills(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetNumberOfHills(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfHills");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfHills() :
      op->vtkParametricRandomHills::GetNumberOfHills());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetHillXVariance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHillXVariance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHillXVariance(temp0);
    }
    else
    {
      op->vtkParametricRandomHills::SetHillXVariance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetHillXVariance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHillXVariance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHillXVariance() :
      op->vtkParametricRandomHills::GetHillXVariance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetHillYVariance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHillYVariance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHillYVariance(temp0);
    }
    else
    {
      op->vtkParametricRandomHills::SetHillYVariance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetHillYVariance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHillYVariance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHillYVariance() :
      op->vtkParametricRandomHills::GetHillYVariance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetHillAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHillAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHillAmplitude(temp0);
    }
    else
    {
      op->vtkParametricRandomHills::SetHillAmplitude(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetHillAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHillAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHillAmplitude() :
      op->vtkParametricRandomHills::GetHillAmplitude());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetRandomSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRandomSeed(temp0);
    }
    else
    {
      op->vtkParametricRandomHills::SetRandomSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetRandomSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRandomSeed() :
      op->vtkParametricRandomHills::GetRandomSeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetAllowRandomGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowRandomGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllowRandomGeneration(temp0);
    }
    else
    {
      op->vtkParametricRandomHills::SetAllowRandomGeneration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetAllowRandomGenerationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowRandomGenerationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAllowRandomGenerationMinValue() :
      op->vtkParametricRandomHills::GetAllowRandomGenerationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetAllowRandomGenerationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowRandomGenerationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAllowRandomGenerationMaxValue() :
      op->vtkParametricRandomHills::GetAllowRandomGenerationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetAllowRandomGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowRandomGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAllowRandomGeneration() :
      op->vtkParametricRandomHills::GetAllowRandomGeneration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_AllowRandomGenerationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowRandomGenerationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowRandomGenerationOn();
    }
    else
    {
      op->vtkParametricRandomHills::AllowRandomGenerationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_AllowRandomGenerationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowRandomGenerationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowRandomGenerationOff();
    }
    else
    {
      op->vtkParametricRandomHills::AllowRandomGenerationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetXVarianceScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXVarianceScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXVarianceScaleFactor(temp0);
    }
    else
    {
      op->vtkParametricRandomHills::SetXVarianceScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetXVarianceScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXVarianceScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetXVarianceScaleFactor() :
      op->vtkParametricRandomHills::GetXVarianceScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetYVarianceScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYVarianceScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYVarianceScaleFactor(temp0);
    }
    else
    {
      op->vtkParametricRandomHills::SetYVarianceScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetYVarianceScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYVarianceScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetYVarianceScaleFactor() :
      op->vtkParametricRandomHills::GetYVarianceScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetAmplitudeScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmplitudeScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAmplitudeScaleFactor(temp0);
    }
    else
    {
      op->vtkParametricRandomHills::SetAmplitudeScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetAmplitudeScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmplitudeScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAmplitudeScaleFactor() :
      op->vtkParametricRandomHills::GetAmplitudeScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 9;
  double temp2[9];
  double save2[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->Evaluate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkParametricRandomHills::Evaluate(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
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
PyvtkParametricRandomHills_EvaluateScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 9;
  double temp2[9];
  double save2[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    double tempr = (ap.IsBound() ?
      op->EvaluateScalar(temp0, temp1, temp2) :
      op->vtkParametricRandomHills::EvaluateScalar(temp0, temp1, temp2));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkParametricRandomHills_Methods[] = {
  {"IsTypeOf", PyvtkParametricRandomHills_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParametricRandomHills_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParametricRandomHills_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkParametricRandomHills\nC++: static vtkParametricRandomHills *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParametricRandomHills_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkParametricRandomHills\nC++: vtkParametricRandomHills *NewInstance()\n\n"},
  {"GetDimension", PyvtkParametricRandomHills_GetDimension, METH_VARARGS,
   "V.GetDimension() -> int\nC++: int GetDimension() override;\n\nReturn the parametric dimension of the class.\n"},
  {"SetNumberOfHills", PyvtkParametricRandomHills_SetNumberOfHills, METH_VARARGS,
   "V.SetNumberOfHills(int)\nC++: virtual void SetNumberOfHills(int _arg)\n\nSet/Get the number of hills. Default is 30.\n"},
  {"GetNumberOfHills", PyvtkParametricRandomHills_GetNumberOfHills, METH_VARARGS,
   "V.GetNumberOfHills() -> int\nC++: virtual int GetNumberOfHills()\n\nSet/Get the number of hills. Default is 30.\n"},
  {"SetHillXVariance", PyvtkParametricRandomHills_SetHillXVariance, METH_VARARGS,
   "V.SetHillXVariance(float)\nC++: virtual void SetHillXVariance(double _arg)\n\nSet/Get the hill variance in the x-direction. Default is 2.5.\n"},
  {"GetHillXVariance", PyvtkParametricRandomHills_GetHillXVariance, METH_VARARGS,
   "V.GetHillXVariance() -> float\nC++: virtual double GetHillXVariance()\n\nSet/Get the hill variance in the x-direction. Default is 2.5.\n"},
  {"SetHillYVariance", PyvtkParametricRandomHills_SetHillYVariance, METH_VARARGS,
   "V.SetHillYVariance(float)\nC++: virtual void SetHillYVariance(double _arg)\n\nSet/Get the hill variance in the y-direction. Default is 2.5.\n"},
  {"GetHillYVariance", PyvtkParametricRandomHills_GetHillYVariance, METH_VARARGS,
   "V.GetHillYVariance() -> float\nC++: virtual double GetHillYVariance()\n\nSet/Get the hill variance in the y-direction. Default is 2.5.\n"},
  {"SetHillAmplitude", PyvtkParametricRandomHills_SetHillAmplitude, METH_VARARGS,
   "V.SetHillAmplitude(float)\nC++: virtual void SetHillAmplitude(double _arg)\n\nSet/Get the hill amplitude (height). Default is 2.\n"},
  {"GetHillAmplitude", PyvtkParametricRandomHills_GetHillAmplitude, METH_VARARGS,
   "V.GetHillAmplitude() -> float\nC++: virtual double GetHillAmplitude()\n\nSet/Get the hill amplitude (height). Default is 2.\n"},
  {"SetRandomSeed", PyvtkParametricRandomHills_SetRandomSeed, METH_VARARGS,
   "V.SetRandomSeed(int)\nC++: virtual void SetRandomSeed(int _arg)\n\nSet/Get the Seed for the random number generator, a value of 1\nwill initialize the random number generator, a negative value\nwill initialize it with the system time. Default is 1.\n"},
  {"GetRandomSeed", PyvtkParametricRandomHills_GetRandomSeed, METH_VARARGS,
   "V.GetRandomSeed() -> int\nC++: virtual int GetRandomSeed()\n\nSet/Get the Seed for the random number generator, a value of 1\nwill initialize the random number generator, a negative value\nwill initialize it with the system time. Default is 1.\n"},
  {"SetAllowRandomGeneration", PyvtkParametricRandomHills_SetAllowRandomGeneration, METH_VARARGS,
   "V.SetAllowRandomGeneration(int)\nC++: virtual void SetAllowRandomGeneration(vtkTypeBool _arg)\n\nSet/Get the random generation flag. A value of 0 will disable the\ngeneration of random hills on the surface allowing a reproducible\nnumber of identically shaped hills to be generated. If zero, then\nthe number of hills used will be the nearest perfect square less\nthan or equal to the number of hills. For example, selecting 30\nhills will result in a 5 X 5 array of hills being generated. Thus\na square array of hills will be generated.\n\n* Any other value means that the hills will be placed randomly on\nthe\n* surface.\n* Default is 1.\n"},
  {"GetAllowRandomGenerationMinValue", PyvtkParametricRandomHills_GetAllowRandomGenerationMinValue, METH_VARARGS,
   "V.GetAllowRandomGenerationMinValue() -> int\nC++: virtual vtkTypeBool GetAllowRandomGenerationMinValue()\n\nSet/Get the random generation flag. A value of 0 will disable the\ngeneration of random hills on the surface allowing a reproducible\nnumber of identically shaped hills to be generated. If zero, then\nthe number of hills used will be the nearest perfect square less\nthan or equal to the number of hills. For example, selecting 30\nhills will result in a 5 X 5 array of hills being generated. Thus\na square array of hills will be generated.\n\n* Any other value means that the hills will be placed randomly on\nthe\n* surface.\n* Default is 1.\n"},
  {"GetAllowRandomGenerationMaxValue", PyvtkParametricRandomHills_GetAllowRandomGenerationMaxValue, METH_VARARGS,
   "V.GetAllowRandomGenerationMaxValue() -> int\nC++: virtual vtkTypeBool GetAllowRandomGenerationMaxValue()\n\nSet/Get the random generation flag. A value of 0 will disable the\ngeneration of random hills on the surface allowing a reproducible\nnumber of identically shaped hills to be generated. If zero, then\nthe number of hills used will be the nearest perfect square less\nthan or equal to the number of hills. For example, selecting 30\nhills will result in a 5 X 5 array of hills being generated. Thus\na square array of hills will be generated.\n\n* Any other value means that the hills will be placed randomly on\nthe\n* surface.\n* Default is 1.\n"},
  {"GetAllowRandomGeneration", PyvtkParametricRandomHills_GetAllowRandomGeneration, METH_VARARGS,
   "V.GetAllowRandomGeneration() -> int\nC++: virtual vtkTypeBool GetAllowRandomGeneration()\n\nSet/Get the random generation flag. A value of 0 will disable the\ngeneration of random hills on the surface allowing a reproducible\nnumber of identically shaped hills to be generated. If zero, then\nthe number of hills used will be the nearest perfect square less\nthan or equal to the number of hills. For example, selecting 30\nhills will result in a 5 X 5 array of hills being generated. Thus\na square array of hills will be generated.\n\n* Any other value means that the hills will be placed randomly on\nthe\n* surface.\n* Default is 1.\n"},
  {"AllowRandomGenerationOn", PyvtkParametricRandomHills_AllowRandomGenerationOn, METH_VARARGS,
   "V.AllowRandomGenerationOn()\nC++: virtual void AllowRandomGenerationOn()\n\nSet/Get the random generation flag. A value of 0 will disable the\ngeneration of random hills on the surface allowing a reproducible\nnumber of identically shaped hills to be generated. If zero, then\nthe number of hills used will be the nearest perfect square less\nthan or equal to the number of hills. For example, selecting 30\nhills will result in a 5 X 5 array of hills being generated. Thus\na square array of hills will be generated.\n\n* Any other value means that the hills will be placed randomly on\nthe\n* surface.\n* Default is 1.\n"},
  {"AllowRandomGenerationOff", PyvtkParametricRandomHills_AllowRandomGenerationOff, METH_VARARGS,
   "V.AllowRandomGenerationOff()\nC++: virtual void AllowRandomGenerationOff()\n\nSet/Get the random generation flag. A value of 0 will disable the\ngeneration of random hills on the surface allowing a reproducible\nnumber of identically shaped hills to be generated. If zero, then\nthe number of hills used will be the nearest perfect square less\nthan or equal to the number of hills. For example, selecting 30\nhills will result in a 5 X 5 array of hills being generated. Thus\na square array of hills will be generated.\n\n* Any other value means that the hills will be placed randomly on\nthe\n* surface.\n* Default is 1.\n"},
  {"SetXVarianceScaleFactor", PyvtkParametricRandomHills_SetXVarianceScaleFactor, METH_VARARGS,
   "V.SetXVarianceScaleFactor(float)\nC++: virtual void SetXVarianceScaleFactor(double _arg)\n\nSet/Get the scaling factor for the variance in the x-direction.\nDefault is 1/3.\n"},
  {"GetXVarianceScaleFactor", PyvtkParametricRandomHills_GetXVarianceScaleFactor, METH_VARARGS,
   "V.GetXVarianceScaleFactor() -> float\nC++: virtual double GetXVarianceScaleFactor()\n\nSet/Get the scaling factor for the variance in the x-direction.\nDefault is 1/3.\n"},
  {"SetYVarianceScaleFactor", PyvtkParametricRandomHills_SetYVarianceScaleFactor, METH_VARARGS,
   "V.SetYVarianceScaleFactor(float)\nC++: virtual void SetYVarianceScaleFactor(double _arg)\n\nSet/Get the scaling factor for the variance in the y-direction.\nDefault is 1/3.\n"},
  {"GetYVarianceScaleFactor", PyvtkParametricRandomHills_GetYVarianceScaleFactor, METH_VARARGS,
   "V.GetYVarianceScaleFactor() -> float\nC++: virtual double GetYVarianceScaleFactor()\n\nSet/Get the scaling factor for the variance in the y-direction.\nDefault is 1/3.\n"},
  {"SetAmplitudeScaleFactor", PyvtkParametricRandomHills_SetAmplitudeScaleFactor, METH_VARARGS,
   "V.SetAmplitudeScaleFactor(float)\nC++: virtual void SetAmplitudeScaleFactor(double _arg)\n\nSet/Get the scaling factor for the amplitude. Default is 1/3.\n"},
  {"GetAmplitudeScaleFactor", PyvtkParametricRandomHills_GetAmplitudeScaleFactor, METH_VARARGS,
   "V.GetAmplitudeScaleFactor() -> float\nC++: virtual double GetAmplitudeScaleFactor()\n\nSet/Get the scaling factor for the amplitude. Default is 1/3.\n"},
  {"Evaluate", PyvtkParametricRandomHills_Evaluate, METH_VARARGS,
   "V.Evaluate([float, float, float], [float, float, float], [float,\n    float, float, float, float, float, float, float, float])\nC++: void Evaluate(double uvw[3], double Pt[3], double Duvw[9])\n    override;\n\nConstruct a terrain consisting of hills on a surface.\n\n* This function performs the mapping $f(u,v) \\rightarrow (x,y,x)\n  $, returning it\n* as Pt. It also returns the partial derivatives Du and Dv.\n* $Pt = (x, y, z), Du = (dx/du, dy/du, dz/du), Dv = (dx/dv,\n  dy/dv, dz/dv) $ .\n* Then the normal is $N = Du X Dv $ .\n"},
  {"EvaluateScalar", PyvtkParametricRandomHills_EvaluateScalar, METH_VARARGS,
   "V.EvaluateScalar([float, float, float], [float, float, float],\n    [float, float, float, float, float, float, float, float,\n    float]) -> float\nC++: double EvaluateScalar(double uvw[3], double Pt[3],\n    double Duvw[9]) override;\n\nCalculate a user defined scalar using one or all of uvw, Pt,\nDuvw.\n\n* uvw are the parameters with Pt being the Cartesian point,\n* Duvw are the derivatives of this point with respect to u, v and\nw.\n* Pt, Duvw are obtained from Evaluate().\n\n* This function is only called if the ScalarMode has the value\n* vtkParametricFunctionSource::SCALAR_FUNCTION_DEFINED\n\n* If the user does not need to calculate a scalar, then the\n* instantiated function should return zero.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkParametricRandomHills_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonComputationalGeometryPython.vtkParametricRandomHills", // tp_name
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
  PyvtkParametricRandomHills_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParametricRandomHills_StaticNew()
{
  return vtkParametricRandomHills::New();
}

PyObject *PyvtkParametricRandomHills_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkParametricRandomHills_Type, PyvtkParametricRandomHills_Methods,
    "vtkParametricRandomHills",
 &PyvtkParametricRandomHills_StaticNew);

  PyTypeObject *pytype = &PyvtkParametricRandomHills_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkParametricFunction_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkParametricRandomHills(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParametricRandomHills_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParametricRandomHills", o) != 0)
  {
    Py_DECREF(o);
  }

}

