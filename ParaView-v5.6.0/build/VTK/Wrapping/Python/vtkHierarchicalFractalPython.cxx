// python wrapper for vtkHierarchicalFractal
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
#include "vtkHierarchicalFractal.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHierarchicalFractal(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkHierarchicalFractal_ClassNew(); }

#ifndef DECLARED_PyvtkCompositeDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkCompositeDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkCompositeDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkHierarchicalFractal_Doc =
  "vtkHierarchicalFractal - A source to test AMR data object.\n\n"
  "Superclass: vtkCompositeDataSetAlgorithm\n\n"
  "vtkHierarchicalFractal is a collection of uniform grids.  All have\n"
  "the same dimensions. Each block has a different origin and spacing. \n"
  "It uses mandelbrot to create cell data. I scale the fractal array to\n"
  "look like a volme fraction. I may also add block id and level as\n"
  "extra cell arrays. If GenerateRectilinearGrids is true then this\n"
  "filter outputs vtkHierarchicalBoxDataSet otherwise it generates a\n"
  "vtkMultiBlockDataSet.\n\n";


static PyObject *
PyvtkHierarchicalFractal_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHierarchicalFractal::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHierarchicalFractal::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHierarchicalFractal *tempr = vtkHierarchicalFractal::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHierarchicalFractal *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHierarchicalFractal::NewInstance());

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
PyvtkHierarchicalFractal_SetFractalValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFractalValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFractalValue(temp0);
    }
    else
    {
      op->vtkHierarchicalFractal::SetFractalValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GetFractalValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFractalValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetFractalValue() :
      op->vtkHierarchicalFractal::GetFractalValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_SetMaximumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumLevel(temp0);
    }
    else
    {
      op->vtkHierarchicalFractal::SetMaximumLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GetMaximumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumLevel() :
      op->vtkHierarchicalFractal::GetMaximumLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_SetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDimensions(temp0);
    }
    else
    {
      op->vtkHierarchicalFractal::SetDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensions() :
      op->vtkHierarchicalFractal::GetDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_SetGhostLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGhostLevels(temp0);
    }
    else
    {
      op->vtkHierarchicalFractal::SetGhostLevels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GetGhostLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevels() :
      op->vtkHierarchicalFractal::GetGhostLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GhostLevelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GhostLevelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GhostLevelsOn();
    }
    else
    {
      op->vtkHierarchicalFractal::GhostLevelsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GhostLevelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GhostLevelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GhostLevelsOff();
    }
    else
    {
      op->vtkHierarchicalFractal::GhostLevelsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeStep(temp0);
    }
    else
    {
      op->vtkHierarchicalFractal::SetTimeStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkHierarchicalFractal::GetTimeStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTimeStepRange() :
      op->vtkHierarchicalFractal::GetTimeStepRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_SetGenerateRectilinearGrids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateRectilinearGrids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateRectilinearGrids(temp0);
    }
    else
    {
      op->vtkHierarchicalFractal::SetGenerateRectilinearGrids(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GetGenerateRectilinearGrids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateRectilinearGrids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateRectilinearGrids() :
      op->vtkHierarchicalFractal::GetGenerateRectilinearGrids());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GenerateRectilinearGridsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRectilinearGridsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateRectilinearGridsOn();
    }
    else
    {
      op->vtkHierarchicalFractal::GenerateRectilinearGridsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GenerateRectilinearGridsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRectilinearGridsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateRectilinearGridsOff();
    }
    else
    {
      op->vtkHierarchicalFractal::GenerateRectilinearGridsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_SetTwoDimensional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwoDimensional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTwoDimensional(temp0);
    }
    else
    {
      op->vtkHierarchicalFractal::SetTwoDimensional(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GetTwoDimensional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwoDimensional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwoDimensional() :
      op->vtkHierarchicalFractal::GetTwoDimensional());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_TwoDimensionalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoDimensionalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwoDimensionalOn();
    }
    else
    {
      op->vtkHierarchicalFractal::TwoDimensionalOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_TwoDimensionalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoDimensionalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwoDimensionalOff();
    }
    else
    {
      op->vtkHierarchicalFractal::TwoDimensionalOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_SetAsymetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAsymetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAsymetric(temp0);
    }
    else
    {
      op->vtkHierarchicalFractal::SetAsymetric(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GetAsymetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAsymetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAsymetric() :
      op->vtkHierarchicalFractal::GetAsymetric());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_SetOverlap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOverlap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOverlap(temp0);
    }
    else
    {
      op->vtkHierarchicalFractal::SetOverlap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GetOverlap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOverlap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOverlap() :
      op->vtkHierarchicalFractal::GetOverlap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHierarchicalFractal_Methods[] = {
  {"IsTypeOf", PyvtkHierarchicalFractal_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHierarchicalFractal_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHierarchicalFractal_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkHierarchicalFractal\nC++: static vtkHierarchicalFractal *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHierarchicalFractal_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkHierarchicalFractal\nC++: vtkHierarchicalFractal *NewInstance()\n\n"},
  {"SetFractalValue", PyvtkHierarchicalFractal_SetFractalValue, METH_VARARGS,
   "V.SetFractalValue(float)\nC++: virtual void SetFractalValue(float _arg)\n\nEssentially the iso surface value. The fractal array is scaled to\nmap this value to 0.5 for use as a volume fraction.\n"},
  {"GetFractalValue", PyvtkHierarchicalFractal_GetFractalValue, METH_VARARGS,
   "V.GetFractalValue() -> float\nC++: virtual float GetFractalValue()\n\nEssentially the iso surface value. The fractal array is scaled to\nmap this value to 0.5 for use as a volume fraction.\n"},
  {"SetMaximumLevel", PyvtkHierarchicalFractal_SetMaximumLevel, METH_VARARGS,
   "V.SetMaximumLevel(int)\nC++: virtual void SetMaximumLevel(int _arg)\n\nAny blocks touching a predefined line will be subdivided to this\nlevel. Other blocks are subdivided so that neighboring blocks\nonly differ by one level.\n"},
  {"GetMaximumLevel", PyvtkHierarchicalFractal_GetMaximumLevel, METH_VARARGS,
   "V.GetMaximumLevel() -> int\nC++: virtual int GetMaximumLevel()\n\nAny blocks touching a predefined line will be subdivided to this\nlevel. Other blocks are subdivided so that neighboring blocks\nonly differ by one level.\n"},
  {"SetDimensions", PyvtkHierarchicalFractal_SetDimensions, METH_VARARGS,
   "V.SetDimensions(int)\nC++: virtual void SetDimensions(int _arg)\n\nXYZ dimensions of cells.\n"},
  {"GetDimensions", PyvtkHierarchicalFractal_GetDimensions, METH_VARARGS,
   "V.GetDimensions() -> int\nC++: virtual int GetDimensions()\n\nXYZ dimensions of cells.\n"},
  {"SetGhostLevels", PyvtkHierarchicalFractal_SetGhostLevels, METH_VARARGS,
   "V.SetGhostLevels(int)\nC++: virtual void SetGhostLevels(int _arg)\n\nFor testing ghost levels.\n"},
  {"GetGhostLevels", PyvtkHierarchicalFractal_GetGhostLevels, METH_VARARGS,
   "V.GetGhostLevels() -> int\nC++: virtual int GetGhostLevels()\n\nFor testing ghost levels.\n"},
  {"GhostLevelsOn", PyvtkHierarchicalFractal_GhostLevelsOn, METH_VARARGS,
   "V.GhostLevelsOn()\nC++: virtual void GhostLevelsOn()\n\nFor testing ghost levels.\n"},
  {"GhostLevelsOff", PyvtkHierarchicalFractal_GhostLevelsOff, METH_VARARGS,
   "V.GhostLevelsOff()\nC++: virtual void GhostLevelsOff()\n\nFor testing ghost levels.\n"},
  {"SetTimeStep", PyvtkHierarchicalFractal_SetTimeStep, METH_VARARGS,
   "V.SetTimeStep(int)\nC++: virtual void SetTimeStep(int _arg)\n\nDummy time-step\n"},
  {"GetTimeStep", PyvtkHierarchicalFractal_GetTimeStep, METH_VARARGS,
   "V.GetTimeStep() -> int\nC++: virtual int GetTimeStep()\n\nDummy time-step\n"},
  {"GetTimeStepRange", PyvtkHierarchicalFractal_GetTimeStepRange, METH_VARARGS,
   "V.GetTimeStepRange() -> (int, int)\nC++: int *GetTimeStepRange()\n\n"},
  {"SetGenerateRectilinearGrids", PyvtkHierarchicalFractal_SetGenerateRectilinearGrids, METH_VARARGS,
   "V.SetGenerateRectilinearGrids(int)\nC++: virtual void SetGenerateRectilinearGrids(int _arg)\n\nGenerate either rectilinear grids either uniform grids. Default\nis false.\n"},
  {"GetGenerateRectilinearGrids", PyvtkHierarchicalFractal_GetGenerateRectilinearGrids, METH_VARARGS,
   "V.GetGenerateRectilinearGrids() -> int\nC++: virtual int GetGenerateRectilinearGrids()\n\nGenerate either rectilinear grids either uniform grids. Default\nis false.\n"},
  {"GenerateRectilinearGridsOn", PyvtkHierarchicalFractal_GenerateRectilinearGridsOn, METH_VARARGS,
   "V.GenerateRectilinearGridsOn()\nC++: virtual void GenerateRectilinearGridsOn()\n\nGenerate either rectilinear grids either uniform grids. Default\nis false.\n"},
  {"GenerateRectilinearGridsOff", PyvtkHierarchicalFractal_GenerateRectilinearGridsOff, METH_VARARGS,
   "V.GenerateRectilinearGridsOff()\nC++: virtual void GenerateRectilinearGridsOff()\n\nGenerate either rectilinear grids either uniform grids. Default\nis false.\n"},
  {"SetTwoDimensional", PyvtkHierarchicalFractal_SetTwoDimensional, METH_VARARGS,
   "V.SetTwoDimensional(int)\nC++: virtual void SetTwoDimensional(int _arg)\n\nMake a 2D data set to test.\n"},
  {"GetTwoDimensional", PyvtkHierarchicalFractal_GetTwoDimensional, METH_VARARGS,
   "V.GetTwoDimensional() -> int\nC++: virtual int GetTwoDimensional()\n\nMake a 2D data set to test.\n"},
  {"TwoDimensionalOn", PyvtkHierarchicalFractal_TwoDimensionalOn, METH_VARARGS,
   "V.TwoDimensionalOn()\nC++: virtual void TwoDimensionalOn()\n\nMake a 2D data set to test.\n"},
  {"TwoDimensionalOff", PyvtkHierarchicalFractal_TwoDimensionalOff, METH_VARARGS,
   "V.TwoDimensionalOff()\nC++: virtual void TwoDimensionalOff()\n\nMake a 2D data set to test.\n"},
  {"SetAsymetric", PyvtkHierarchicalFractal_SetAsymetric, METH_VARARGS,
   "V.SetAsymetric(int)\nC++: virtual void SetAsymetric(int _arg)\n\nTest the case when the blocks do not have the same sizes. Adds 2\nto the x extent of the far x blocks (level 1).\n"},
  {"GetAsymetric", PyvtkHierarchicalFractal_GetAsymetric, METH_VARARGS,
   "V.GetAsymetric() -> int\nC++: virtual int GetAsymetric()\n\nTest the case when the blocks do not have the same sizes. Adds 2\nto the x extent of the far x blocks (level 1).\n"},
  {"SetOverlap", PyvtkHierarchicalFractal_SetOverlap, METH_VARARGS,
   "V.SetOverlap(int)\nC++: virtual void SetOverlap(int _arg)\n\nTest with lower levels overlapping higher levels. This is what I\nassume flash is like.\n"},
  {"GetOverlap", PyvtkHierarchicalFractal_GetOverlap, METH_VARARGS,
   "V.GetOverlap() -> int\nC++: virtual int GetOverlap()\n\nTest with lower levels overlapping higher levels. This is what I\nassume flash is like.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkHierarchicalFractal_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkHierarchicalFractal", // tp_name
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
  PyvtkHierarchicalFractal_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHierarchicalFractal_StaticNew()
{
  return vtkHierarchicalFractal::New();
}

PyObject *PyvtkHierarchicalFractal_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkHierarchicalFractal_Type, PyvtkHierarchicalFractal_Methods,
    "vtkHierarchicalFractal",
 &PyvtkHierarchicalFractal_StaticNew);

  PyTypeObject *pytype = &PyvtkHierarchicalFractal_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCompositeDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHierarchicalFractal(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHierarchicalFractal_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHierarchicalFractal", o) != 0)
  {
    Py_DECREF(o);
  }

}

