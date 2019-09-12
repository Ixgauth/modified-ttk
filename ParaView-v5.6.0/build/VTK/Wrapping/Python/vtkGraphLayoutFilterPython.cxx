// python wrapper for vtkGraphLayoutFilter
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
#include "vtkGraphLayoutFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGraphLayoutFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGraphLayoutFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkGraphLayoutFilter_Doc =
  "vtkGraphLayoutFilter - nice layout of undirected graphs in 3D\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkGraphLayoutFilter will reposition a network of nodes, connected by\n"
  "lines or polylines, into a more pleasing arrangement. The class\n"
  "implements a simple force-directed placement algorithm (Fruchterman &\n"
  "Reingold \"Graph Drawing by Force-directed Placement\"\n"
  "Software-Practice and Experience 21(11) 1991).\n\n"
  "The input to the filter is a vtkPolyData representing the undirected\n"
  "graphs. A graph is represented by a set of polylines and/or lines.\n"
  "The output is also a vtkPolyData, where the point positions have been\n"
  "modified. To use the filter, specify whether you wish the layout to\n"
  "occur in 2D or 3D; the bounds in which the graph should lie (note\n"
  "that you can just use automatic bounds computation); and modify the\n"
  "cool down rate (controls the final process of simulated annealing).\n\n";


static PyObject *
PyvtkGraphLayoutFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGraphLayoutFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphLayoutFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGraphLayoutFilter *tempr = vtkGraphLayoutFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraphLayoutFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphLayoutFilter::NewInstance());

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
PyvtkGraphLayoutFilter_SetGraphBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

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
      op->SetGraphBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkGraphLayoutFilter::SetGraphBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGraphLayoutFilter_SetGraphBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGraphBounds(temp0);
    }
    else
    {
      op->vtkGraphLayoutFilter::SetGraphBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGraphLayoutFilter_SetGraphBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkGraphLayoutFilter_SetGraphBounds_s1(self, args);
    case 1:
      return PyvtkGraphLayoutFilter_SetGraphBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphBounds");
  return nullptr;
}



static PyObject *
PyvtkGraphLayoutFilter_GetGraphBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetGraphBounds() :
      op->vtkGraphLayoutFilter::GetGraphBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_SetAutomaticBoundsComputation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticBoundsComputation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomaticBoundsComputation(temp0);
    }
    else
    {
      op->vtkGraphLayoutFilter::SetAutomaticBoundsComputation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetAutomaticBoundsComputation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticBoundsComputation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticBoundsComputation() :
      op->vtkGraphLayoutFilter::GetAutomaticBoundsComputation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_AutomaticBoundsComputationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticBoundsComputationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticBoundsComputationOn();
    }
    else
    {
      op->vtkGraphLayoutFilter::AutomaticBoundsComputationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_AutomaticBoundsComputationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticBoundsComputationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticBoundsComputationOff();
    }
    else
    {
      op->vtkGraphLayoutFilter::AutomaticBoundsComputationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_SetMaxNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxNumberOfIterations(temp0);
    }
    else
    {
      op->vtkGraphLayoutFilter::SetMaxNumberOfIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetMaxNumberOfIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxNumberOfIterationsMinValue() :
      op->vtkGraphLayoutFilter::GetMaxNumberOfIterationsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetMaxNumberOfIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxNumberOfIterationsMaxValue() :
      op->vtkGraphLayoutFilter::GetMaxNumberOfIterationsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetMaxNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxNumberOfIterations() :
      op->vtkGraphLayoutFilter::GetMaxNumberOfIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_SetCoolDownRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoolDownRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCoolDownRate(temp0);
    }
    else
    {
      op->vtkGraphLayoutFilter::SetCoolDownRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetCoolDownRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoolDownRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoolDownRateMinValue() :
      op->vtkGraphLayoutFilter::GetCoolDownRateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetCoolDownRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoolDownRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoolDownRateMaxValue() :
      op->vtkGraphLayoutFilter::GetCoolDownRateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetCoolDownRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoolDownRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoolDownRate() :
      op->vtkGraphLayoutFilter::GetCoolDownRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_SetThreeDimensionalLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreeDimensionalLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThreeDimensionalLayout(temp0);
    }
    else
    {
      op->vtkGraphLayoutFilter::SetThreeDimensionalLayout(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetThreeDimensionalLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreeDimensionalLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThreeDimensionalLayout() :
      op->vtkGraphLayoutFilter::GetThreeDimensionalLayout());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_ThreeDimensionalLayoutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeDimensionalLayoutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ThreeDimensionalLayoutOn();
    }
    else
    {
      op->vtkGraphLayoutFilter::ThreeDimensionalLayoutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_ThreeDimensionalLayoutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeDimensionalLayoutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ThreeDimensionalLayoutOff();
    }
    else
    {
      op->vtkGraphLayoutFilter::ThreeDimensionalLayoutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGraphLayoutFilter_Methods[] = {
  {"IsTypeOf", PyvtkGraphLayoutFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGraphLayoutFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGraphLayoutFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGraphLayoutFilter\nC++: static vtkGraphLayoutFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGraphLayoutFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGraphLayoutFilter\nC++: vtkGraphLayoutFilter *NewInstance()\n\n"},
  {"SetGraphBounds", PyvtkGraphLayoutFilter_SetGraphBounds, METH_VARARGS,
   "V.SetGraphBounds(float, float, float, float, float, float)\nC++: void SetGraphBounds(double, double, double, double, double,\n    double)\nV.SetGraphBounds((float, float, float, float, float, float))\nC++: void SetGraphBounds(double a[6])\n\n"},
  {"GetGraphBounds", PyvtkGraphLayoutFilter_GetGraphBounds, METH_VARARGS,
   "V.GetGraphBounds() -> (float, float, float, float, float, float)\nC++: double *GetGraphBounds()\n\nSet / get the region in space in which to place the final graph.\nThe GraphBounds only affects the results if\nAutomaticBoundsComputation is off.\n"},
  {"SetAutomaticBoundsComputation", PyvtkGraphLayoutFilter_SetAutomaticBoundsComputation, METH_VARARGS,
   "V.SetAutomaticBoundsComputation(int)\nC++: virtual void SetAutomaticBoundsComputation(vtkTypeBool _arg)\n\nTurn on/off automatic graph bounds calculation. If this boolean\nis off, then the manually specified GraphBounds is used. If on,\nthen the input's bounds us used as the graph bounds.\n"},
  {"GetAutomaticBoundsComputation", PyvtkGraphLayoutFilter_GetAutomaticBoundsComputation, METH_VARARGS,
   "V.GetAutomaticBoundsComputation() -> int\nC++: virtual vtkTypeBool GetAutomaticBoundsComputation()\n\nTurn on/off automatic graph bounds calculation. If this boolean\nis off, then the manually specified GraphBounds is used. If on,\nthen the input's bounds us used as the graph bounds.\n"},
  {"AutomaticBoundsComputationOn", PyvtkGraphLayoutFilter_AutomaticBoundsComputationOn, METH_VARARGS,
   "V.AutomaticBoundsComputationOn()\nC++: virtual void AutomaticBoundsComputationOn()\n\nTurn on/off automatic graph bounds calculation. If this boolean\nis off, then the manually specified GraphBounds is used. If on,\nthen the input's bounds us used as the graph bounds.\n"},
  {"AutomaticBoundsComputationOff", PyvtkGraphLayoutFilter_AutomaticBoundsComputationOff, METH_VARARGS,
   "V.AutomaticBoundsComputationOff()\nC++: virtual void AutomaticBoundsComputationOff()\n\nTurn on/off automatic graph bounds calculation. If this boolean\nis off, then the manually specified GraphBounds is used. If on,\nthen the input's bounds us used as the graph bounds.\n"},
  {"SetMaxNumberOfIterations", PyvtkGraphLayoutFilter_SetMaxNumberOfIterations, METH_VARARGS,
   "V.SetMaxNumberOfIterations(int)\nC++: virtual void SetMaxNumberOfIterations(int _arg)\n\nSet/Get the maximum number of iterations to be used. The higher\nthis number, the more iterations through the algorithm is\npossible, and thus, the more the graph gets modified.\n"},
  {"GetMaxNumberOfIterationsMinValue", PyvtkGraphLayoutFilter_GetMaxNumberOfIterationsMinValue, METH_VARARGS,
   "V.GetMaxNumberOfIterationsMinValue() -> int\nC++: virtual int GetMaxNumberOfIterationsMinValue()\n\nSet/Get the maximum number of iterations to be used. The higher\nthis number, the more iterations through the algorithm is\npossible, and thus, the more the graph gets modified.\n"},
  {"GetMaxNumberOfIterationsMaxValue", PyvtkGraphLayoutFilter_GetMaxNumberOfIterationsMaxValue, METH_VARARGS,
   "V.GetMaxNumberOfIterationsMaxValue() -> int\nC++: virtual int GetMaxNumberOfIterationsMaxValue()\n\nSet/Get the maximum number of iterations to be used. The higher\nthis number, the more iterations through the algorithm is\npossible, and thus, the more the graph gets modified.\n"},
  {"GetMaxNumberOfIterations", PyvtkGraphLayoutFilter_GetMaxNumberOfIterations, METH_VARARGS,
   "V.GetMaxNumberOfIterations() -> int\nC++: virtual int GetMaxNumberOfIterations()\n\nSet/Get the maximum number of iterations to be used. The higher\nthis number, the more iterations through the algorithm is\npossible, and thus, the more the graph gets modified.\n"},
  {"SetCoolDownRate", PyvtkGraphLayoutFilter_SetCoolDownRate, METH_VARARGS,
   "V.SetCoolDownRate(float)\nC++: virtual void SetCoolDownRate(double _arg)\n\nSet/Get the Cool-down rate. The higher this number is, the longer\nit will take to \"cool-down\", and thus, the more the graph will be\nmodified.\n"},
  {"GetCoolDownRateMinValue", PyvtkGraphLayoutFilter_GetCoolDownRateMinValue, METH_VARARGS,
   "V.GetCoolDownRateMinValue() -> float\nC++: virtual double GetCoolDownRateMinValue()\n\nSet/Get the Cool-down rate. The higher this number is, the longer\nit will take to \"cool-down\", and thus, the more the graph will be\nmodified.\n"},
  {"GetCoolDownRateMaxValue", PyvtkGraphLayoutFilter_GetCoolDownRateMaxValue, METH_VARARGS,
   "V.GetCoolDownRateMaxValue() -> float\nC++: virtual double GetCoolDownRateMaxValue()\n\nSet/Get the Cool-down rate. The higher this number is, the longer\nit will take to \"cool-down\", and thus, the more the graph will be\nmodified.\n"},
  {"GetCoolDownRate", PyvtkGraphLayoutFilter_GetCoolDownRate, METH_VARARGS,
   "V.GetCoolDownRate() -> float\nC++: virtual double GetCoolDownRate()\n\nSet/Get the Cool-down rate. The higher this number is, the longer\nit will take to \"cool-down\", and thus, the more the graph will be\nmodified.\n"},
  {"SetThreeDimensionalLayout", PyvtkGraphLayoutFilter_SetThreeDimensionalLayout, METH_VARARGS,
   "V.SetThreeDimensionalLayout(int)\nC++: virtual void SetThreeDimensionalLayout(vtkTypeBool _arg)\n\n"},
  {"GetThreeDimensionalLayout", PyvtkGraphLayoutFilter_GetThreeDimensionalLayout, METH_VARARGS,
   "V.GetThreeDimensionalLayout() -> int\nC++: virtual vtkTypeBool GetThreeDimensionalLayout()\n\n"},
  {"ThreeDimensionalLayoutOn", PyvtkGraphLayoutFilter_ThreeDimensionalLayoutOn, METH_VARARGS,
   "V.ThreeDimensionalLayoutOn()\nC++: virtual void ThreeDimensionalLayoutOn()\n\n"},
  {"ThreeDimensionalLayoutOff", PyvtkGraphLayoutFilter_ThreeDimensionalLayoutOff, METH_VARARGS,
   "V.ThreeDimensionalLayoutOff()\nC++: virtual void ThreeDimensionalLayoutOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGraphLayoutFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkGraphLayoutFilter", // tp_name
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
  PyvtkGraphLayoutFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGraphLayoutFilter_StaticNew()
{
  return vtkGraphLayoutFilter::New();
}

PyObject *PyvtkGraphLayoutFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGraphLayoutFilter_Type, PyvtkGraphLayoutFilter_Methods,
    "vtkGraphLayoutFilter",
 &PyvtkGraphLayoutFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkGraphLayoutFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGraphLayoutFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGraphLayoutFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGraphLayoutFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

