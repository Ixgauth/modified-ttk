// python wrapper for vtkPVPlotMatrixRepresentation
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
#include "vtkPVPlotMatrixRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVPlotMatrixRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVPlotMatrixRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkChartRepresentation_ClassNew
extern "C" { PyObject *PyvtkChartRepresentation_ClassNew(); }
#define DECLARED_PyvtkChartRepresentation_ClassNew
#endif

static const char *PyvtkPVPlotMatrixRepresentation_Doc =
  "vtkPVPlotMatrixRepresentation - vtkChartRepresentation subclass for\nscatter-plot-matrix representation.\n\n"
  "Superclass: vtkChartRepresentation\n\n"
  "vtkPVPlotMatrixRepresentation manages representations in a\n"
  "vtkScatterPlotMatrix view. It exposes API that affects how the matrix\n"
  "is rendered as well as API to control which of the columns in the\n"
  "input vtkTable are to be plotted in the matrix.\n\n"
  "vtkPVPlotMatrixRepresentation currently does not support multiblock\n"
  "of tables and only the first table is rendered.\n\n";


static PyObject *
PyvtkPVPlotMatrixRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVPlotMatrixRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVPlotMatrixRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVPlotMatrixRepresentation *tempr = vtkPVPlotMatrixRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVPlotMatrixRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVPlotMatrixRepresentation::NewInstance());

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
PyvtkPVPlotMatrixRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

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
      op->vtkPVPlotMatrixRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetSeriesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeriesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

  const char *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSeriesVisibility(temp0, temp1);
    }
    else
    {
      op->vtkPVPlotMatrixRepresentation::SetSeriesVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_ClearSeriesVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearSeriesVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearSeriesVisibilities();
    }
    else
    {
      op->vtkPVPlotMatrixRepresentation::ClearSeriesVisibilities();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

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
      op->vtkPVPlotMatrixRepresentation::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetActivePlotColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

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
      op->SetActivePlotColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVPlotMatrixRepresentation::SetActivePlotColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetHistogramColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

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
      op->SetHistogramColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVPlotMatrixRepresentation::SetHistogramColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetMarkerStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkerStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMarkerStyle(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixRepresentation::SetMarkerStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetActivePlotMarkerStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotMarkerStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlotMarkerStyle(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixRepresentation::SetActivePlotMarkerStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetMarkerSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkerSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMarkerSize(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixRepresentation::SetMarkerSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetActivePlotMarkerSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotMarkerSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlotMarkerSize(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixRepresentation::SetActivePlotMarkerSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetDensityMapVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDensityMapVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDensityMapVisibility(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixRepresentation::SetDensityMapVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetActivePlotDensityMapVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotDensityMapVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlotDensityMapVisibility(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixRepresentation::SetActivePlotDensityMapVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetDensityLineSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDensityLineSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDensityLineSize(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixRepresentation::SetDensityLineSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetActivePlotDensityLineSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotDensityLineSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlotDensityLineSize(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixRepresentation::SetActivePlotDensityLineSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetDensityMapFirstDecileColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDensityMapFirstDecileColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

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
      op->SetDensityMapFirstDecileColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVPlotMatrixRepresentation::SetDensityMapFirstDecileColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetActivePlotDensityMapFirstDecileColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotDensityMapFirstDecileColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

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
      op->SetActivePlotDensityMapFirstDecileColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVPlotMatrixRepresentation::SetActivePlotDensityMapFirstDecileColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetDensityMapMedianColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDensityMapMedianColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

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
      op->SetDensityMapMedianColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVPlotMatrixRepresentation::SetDensityMapMedianColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetActivePlotDensityMapMedianColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotDensityMapMedianColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

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
      op->SetActivePlotDensityMapMedianColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVPlotMatrixRepresentation::SetActivePlotDensityMapMedianColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetDensityMapLastDecileColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDensityMapLastDecileColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

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
      op->SetDensityMapLastDecileColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVPlotMatrixRepresentation::SetDensityMapLastDecileColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetActivePlotDensityMapLastDecileColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotDensityMapLastDecileColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

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
      op->SetActivePlotDensityMapLastDecileColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVPlotMatrixRepresentation::SetActivePlotDensityMapLastDecileColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_GetPlotMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScatterPlotMatrix *tempr = (ap.IsBound() ?
      op->GetPlotMatrix() :
      op->vtkPVPlotMatrixRepresentation::GetPlotMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVPlotMatrixRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkPVPlotMatrixRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVPlotMatrixRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVPlotMatrixRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVPlotMatrixRepresentation\nC++: static vtkPVPlotMatrixRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVPlotMatrixRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVPlotMatrixRepresentation\nC++: vtkPVPlotMatrixRepresentation *NewInstance()\n\n"},
  {"SetVisibility", PyvtkPVPlotMatrixRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool visible) override;\n\nSets the visibility for the plot matrix representation.\n"},
  {"SetSeriesVisibility", PyvtkPVPlotMatrixRepresentation_SetSeriesVisibility, METH_VARARGS,
   "V.SetSeriesVisibility(string, bool)\nC++: void SetSeriesVisibility(const char *series, bool visibility)\n\nSet series visibility given its name. The order in which\nSetSeriesVisibility is called is used to determine the order for\neach of the plots in the grid.\n"},
  {"ClearSeriesVisibilities", PyvtkPVPlotMatrixRepresentation_ClearSeriesVisibilities, METH_VARARGS,
   "V.ClearSeriesVisibilities()\nC++: void ClearSeriesVisibilities()\n\nSet series visibility given its name. The order in which\nSetSeriesVisibility is called is used to determine the order for\neach of the plots in the grid.\n"},
  {"SetColor", PyvtkPVPlotMatrixRepresentation_SetColor, METH_VARARGS,
   "V.SetColor(float, float, float)\nC++: void SetColor(double r, double g, double b)\n\nSets the color for the scatter plots in the plot matrix.\n"},
  {"SetActivePlotColor", PyvtkPVPlotMatrixRepresentation_SetActivePlotColor, METH_VARARGS,
   "V.SetActivePlotColor(float, float, float)\nC++: void SetActivePlotColor(double r, double g, double b)\n\nSets the color for the active plot.\n"},
  {"SetHistogramColor", PyvtkPVPlotMatrixRepresentation_SetHistogramColor, METH_VARARGS,
   "V.SetHistogramColor(float, float, float)\nC++: void SetHistogramColor(double r, double g, double b)\n\nSets the color for the histograms.\n"},
  {"SetMarkerStyle", PyvtkPVPlotMatrixRepresentation_SetMarkerStyle, METH_VARARGS,
   "V.SetMarkerStyle(int)\nC++: void SetMarkerStyle(int style)\n\nSets the marker style for the scatter plots.\n"},
  {"SetActivePlotMarkerStyle", PyvtkPVPlotMatrixRepresentation_SetActivePlotMarkerStyle, METH_VARARGS,
   "V.SetActivePlotMarkerStyle(int)\nC++: void SetActivePlotMarkerStyle(int style)\n\nSets the marker style for the active plot.\n"},
  {"SetMarkerSize", PyvtkPVPlotMatrixRepresentation_SetMarkerSize, METH_VARARGS,
   "V.SetMarkerSize(float)\nC++: void SetMarkerSize(double size)\n\nSets the marker size for the scatter plots.\n"},
  {"SetActivePlotMarkerSize", PyvtkPVPlotMatrixRepresentation_SetActivePlotMarkerSize, METH_VARARGS,
   "V.SetActivePlotMarkerSize(float)\nC++: void SetActivePlotMarkerSize(double size)\n\nSets the marker size for the active plots.\n"},
  {"SetDensityMapVisibility", PyvtkPVPlotMatrixRepresentation_SetDensityMapVisibility, METH_VARARGS,
   "V.SetDensityMapVisibility(bool)\nC++: void SetDensityMapVisibility(bool visible)\n\nSet the scatter plot density map visibility\n"},
  {"SetActivePlotDensityMapVisibility", PyvtkPVPlotMatrixRepresentation_SetActivePlotDensityMapVisibility, METH_VARARGS,
   "V.SetActivePlotDensityMapVisibility(bool)\nC++: void SetActivePlotDensityMapVisibility(bool visible)\n\nSet the active plot density map visibility\n"},
  {"SetDensityLineSize", PyvtkPVPlotMatrixRepresentation_SetDensityLineSize, METH_VARARGS,
   "V.SetDensityLineSize(float)\nC++: void SetDensityLineSize(double size)\n\nSets the line size for the density map in the plot matrix.\n"},
  {"SetActivePlotDensityLineSize", PyvtkPVPlotMatrixRepresentation_SetActivePlotDensityLineSize, METH_VARARGS,
   "V.SetActivePlotDensityLineSize(float)\nC++: void SetActivePlotDensityLineSize(double size)\n\nSets the line size for the density map in the active plot.\n"},
  {"SetDensityMapFirstDecileColor", PyvtkPVPlotMatrixRepresentation_SetDensityMapFirstDecileColor, METH_VARARGS,
   "V.SetDensityMapFirstDecileColor(float, float, float)\nC++: void SetDensityMapFirstDecileColor(double r, double g,\n    double b)\n\nSets the color for the density map first DecileColor in the\nscatter plots.\n"},
  {"SetActivePlotDensityMapFirstDecileColor", PyvtkPVPlotMatrixRepresentation_SetActivePlotDensityMapFirstDecileColor, METH_VARARGS,
   "V.SetActivePlotDensityMapFirstDecileColor(float, float, float)\nC++: void SetActivePlotDensityMapFirstDecileColor(double r,\n    double g, double b)\n\nSets the color for the density map first DecileColor in the\nscatter plots.\n"},
  {"SetDensityMapMedianColor", PyvtkPVPlotMatrixRepresentation_SetDensityMapMedianColor, METH_VARARGS,
   "V.SetDensityMapMedianColor(float, float, float)\nC++: void SetDensityMapMedianColor(double r, double g, double b)\n\nSets the color for the density map MeanColor in the scatter\nplots.\n"},
  {"SetActivePlotDensityMapMedianColor", PyvtkPVPlotMatrixRepresentation_SetActivePlotDensityMapMedianColor, METH_VARARGS,
   "V.SetActivePlotDensityMapMedianColor(float, float, float)\nC++: void SetActivePlotDensityMapMedianColor(double r, double g,\n    double b)\n\nSets the color for the density map MeanColor in the scatter\nplots.\n"},
  {"SetDensityMapLastDecileColor", PyvtkPVPlotMatrixRepresentation_SetDensityMapLastDecileColor, METH_VARARGS,
   "V.SetDensityMapLastDecileColor(float, float, float)\nC++: void SetDensityMapLastDecileColor(double r, double g,\n    double b)\n\nSets the color for the density map last DecileColor in the\nscatter plots.\n"},
  {"SetActivePlotDensityMapLastDecileColor", PyvtkPVPlotMatrixRepresentation_SetActivePlotDensityMapLastDecileColor, METH_VARARGS,
   "V.SetActivePlotDensityMapLastDecileColor(float, float, float)\nC++: void SetActivePlotDensityMapLastDecileColor(double r,\n    double g, double b)\n\nSets the color for the density map last DecileColor in the\nscatter plots.\n"},
  {"GetPlotMatrix", PyvtkPVPlotMatrixRepresentation_GetPlotMatrix, METH_VARARGS,
   "V.GetPlotMatrix() -> vtkScatterPlotMatrix\nC++: vtkScatterPlotMatrix *GetPlotMatrix()\n\nReturns the scatter plot matrix.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVPlotMatrixRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVPlotMatrixRepresentation", // tp_name
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
  PyvtkPVPlotMatrixRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVPlotMatrixRepresentation_StaticNew()
{
  return vtkPVPlotMatrixRepresentation::New();
}

PyObject *PyvtkPVPlotMatrixRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVPlotMatrixRepresentation_Type, PyvtkPVPlotMatrixRepresentation_Methods,
    "vtkPVPlotMatrixRepresentation",
 &PyvtkPVPlotMatrixRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVPlotMatrixRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkChartRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVPlotMatrixRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVPlotMatrixRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVPlotMatrixRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

