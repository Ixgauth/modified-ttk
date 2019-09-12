// python wrapper for vtkXYChartRepresentation
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
#include "vtkXYChartRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXYChartRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXYChartRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkChartRepresentation_ClassNew
extern "C" { PyObject *PyvtkChartRepresentation_ClassNew(); }
#define DECLARED_PyvtkChartRepresentation_ClassNew
#endif

static const char *PyvtkXYChartRepresentation_Doc =
  "vtkXYChartRepresentation - vtkXYChartRepresentation is representation\nthat is used to add vtkPlot subclasses to a vtkChartXY instance e.g.\n\n"
  "Superclass: vtkChartRepresentation\n\n"
  "adding vtkPlotBar to create a bar chart or vtkPlotLine to create a\n"
  "line chart. For every selected series (or column in a vtkTable), this\n"
  "class adds a new vtkPlot to the vtkChartXY. vtkXYChartRepresentation\n"
  "provides a union of APIs for changing the appearance of vtkPlot\n"
  "instances. Developers should only expose the applicable API in the\n"
  "ServerManager XML.\n\n"
  "To select which type of vtkPlot instances this class will use, you\n"
  "must set the ChartType. Refer to vtkChartXY::AddPlot() for details on\n"
  "what the type must be.\n\n";


static PyObject *
PyvtkXYChartRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXYChartRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXYChartRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXYChartRepresentation *tempr = vtkXYChartRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXYChartRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXYChartRepresentation::NewInstance());

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
PyvtkXYChartRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

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
      op->vtkXYChartRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetChartType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetChartType(temp0);
    }
    else
    {
      op->vtkXYChartRepresentation::SetChartType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_GetChartType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChartType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetChartType() :
      op->vtkXYChartRepresentation::GetChartType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetChartTypeToLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartTypeToLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetChartTypeToLine();
    }
    else
    {
      op->vtkXYChartRepresentation::SetChartTypeToLine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetChartTypeToPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartTypeToPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetChartTypeToPoints();
    }
    else
    {
      op->vtkXYChartRepresentation::SetChartTypeToPoints();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetChartTypeToBar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartTypeToBar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetChartTypeToBar();
    }
    else
    {
      op->vtkXYChartRepresentation::SetChartTypeToBar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetChartTypeToStacked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartTypeToStacked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetChartTypeToStacked();
    }
    else
    {
      op->vtkXYChartRepresentation::SetChartTypeToStacked();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetChartTypeToBag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartTypeToBag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetChartTypeToBag();
    }
    else
    {
      op->vtkXYChartRepresentation::SetChartTypeToBag();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetChartTypeToFunctionalBag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartTypeToFunctionalBag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetChartTypeToFunctionalBag();
    }
    else
    {
      op->vtkXYChartRepresentation::SetChartTypeToFunctionalBag();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetChartTypeToArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartTypeToArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetChartTypeToArea();
    }
    else
    {
      op->vtkXYChartRepresentation::SetChartTypeToArea();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_GetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartXY *tempr = (ap.IsBound() ?
      op->GetChart() :
      op->vtkXYChartRepresentation::GetChart());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetXAxisSeriesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisSeriesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXAxisSeriesName(temp0);
    }
    else
    {
      op->vtkXYChartRepresentation::SetXAxisSeriesName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_GetXAxisSeriesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisSeriesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXAxisSeriesName() :
      op->vtkXYChartRepresentation::GetXAxisSeriesName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetUseIndexForXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseIndexForXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseIndexForXAxis(temp0);
    }
    else
    {
      op->vtkXYChartRepresentation::SetUseIndexForXAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_GetUseIndexForXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseIndexForXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseIndexForXAxis() :
      op->vtkXYChartRepresentation::GetUseIndexForXAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetSortDataByXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortDataByXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSortDataByXAxis(temp0);
    }
    else
    {
      op->vtkXYChartRepresentation::SetSortDataByXAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_GetSortDataByXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortDataByXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSortDataByXAxis() :
      op->vtkXYChartRepresentation::GetSortDataByXAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetSeriesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeriesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

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
      op->vtkXYChartRepresentation::SetSeriesVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetLineThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLineThickness(temp0, temp1);
    }
    else
    {
      op->vtkXYChartRepresentation::SetLineThickness(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetLineStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLineStyle(temp0, temp1);
    }
    else
    {
      op->vtkXYChartRepresentation::SetLineStyle(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

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
      op->SetColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkXYChartRepresentation::SetColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetAxisCorner(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisCorner");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisCorner(temp0, temp1);
    }
    else
    {
      op->vtkXYChartRepresentation::SetAxisCorner(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetMarkerStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkerStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMarkerStyle(temp0, temp1);
    }
    else
    {
      op->vtkXYChartRepresentation::SetMarkerStyle(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLabel(temp0, temp1);
    }
    else
    {
      op->vtkXYChartRepresentation::SetLabel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetUseColorMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseColorMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  const char *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetUseColorMapping(temp0, temp1);
    }
    else
    {
      op->vtkXYChartRepresentation::SetUseColorMapping(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  const char *temp0 = nullptr;
  vtkScalarsToColors *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0, temp1);
    }
    else
    {
      op->vtkXYChartRepresentation::SetLookupTable(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_GetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLabel(temp0) :
      op->vtkXYChartRepresentation::GetLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_ClearSeriesVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearSeriesVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearSeriesVisibilities();
    }
    else
    {
      op->vtkXYChartRepresentation::ClearSeriesVisibilities();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_ClearLineThicknesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLineThicknesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearLineThicknesses();
    }
    else
    {
      op->vtkXYChartRepresentation::ClearLineThicknesses();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_ClearLineStyles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLineStyles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearLineStyles();
    }
    else
    {
      op->vtkXYChartRepresentation::ClearLineStyles();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_ClearColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearColors();
    }
    else
    {
      op->vtkXYChartRepresentation::ClearColors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_ClearAxisCorners(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAxisCorners");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAxisCorners();
    }
    else
    {
      op->vtkXYChartRepresentation::ClearAxisCorners();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_ClearMarkerStyles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearMarkerStyles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearMarkerStyles();
    }
    else
    {
      op->vtkXYChartRepresentation::ClearMarkerStyles();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_ClearLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearLabels();
    }
    else
    {
      op->vtkXYChartRepresentation::ClearLabels();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetSelectionColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

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
      op->SetSelectionColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkXYChartRepresentation::SetSelectionColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYChartRepresentation_SetSelectionColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionColor(temp0);
    }
    else
    {
      op->vtkXYChartRepresentation::SetSelectionColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYChartRepresentation_SetSelectionColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkXYChartRepresentation_SetSelectionColor_s1(self, args);
    case 1:
      return PyvtkXYChartRepresentation_SetSelectionColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSelectionColor");
  return nullptr;
}



static PyObject *
PyvtkXYChartRepresentation_GetSelectionColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSelectionColor() :
      op->vtkXYChartRepresentation::GetSelectionColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetSeriesLabelPrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeriesLabelPrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSeriesLabelPrefix(temp0);
    }
    else
    {
      op->vtkXYChartRepresentation::SetSeriesLabelPrefix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_GetSeriesLabelPrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeriesLabelPrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSeriesLabelPrefix() :
      op->vtkXYChartRepresentation::GetSeriesLabelPrefix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_Export(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Export");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  vtkCSVExporter *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCSVExporter"))
  {
    bool tempr = (ap.IsBound() ?
      op->Export(temp0) :
      op->vtkXYChartRepresentation::Export(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXYChartRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkXYChartRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXYChartRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXYChartRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXYChartRepresentation\nC++: static vtkXYChartRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXYChartRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXYChartRepresentation\nC++: vtkXYChartRepresentation *NewInstance()\n\n"},
  {"SetVisibility", PyvtkXYChartRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool visible) override;\n\nSet visibility of the representation. Overridden to ensure that\ninternally added vtkPlot instances are updated when hiding the\nrepresentation.\n"},
  {"SetChartType", PyvtkXYChartRepresentation_SetChartType, METH_VARARGS,
   "V.SetChartType(int)\nC++: virtual void SetChartType(int _arg)\n\nGet/Set the chart type, defaults to line chart. This must be set\nbefore this representation is updated. Valid values are\nvtkChart::LINE, vtkChart::POINTS, vtkChart::BAR, etc. Default is\nvtkChart::LINE.\n"},
  {"GetChartType", PyvtkXYChartRepresentation_GetChartType, METH_VARARGS,
   "V.GetChartType() -> int\nC++: virtual int GetChartType()\n\nGet/Set the chart type, defaults to line chart. This must be set\nbefore this representation is updated. Valid values are\nvtkChart::LINE, vtkChart::POINTS, vtkChart::BAR, etc. Default is\nvtkChart::LINE.\n"},
  {"SetChartTypeToLine", PyvtkXYChartRepresentation_SetChartTypeToLine, METH_VARARGS,
   "V.SetChartTypeToLine()\nC++: void SetChartTypeToLine()\n\n"},
  {"SetChartTypeToPoints", PyvtkXYChartRepresentation_SetChartTypeToPoints, METH_VARARGS,
   "V.SetChartTypeToPoints()\nC++: void SetChartTypeToPoints()\n\n"},
  {"SetChartTypeToBar", PyvtkXYChartRepresentation_SetChartTypeToBar, METH_VARARGS,
   "V.SetChartTypeToBar()\nC++: void SetChartTypeToBar()\n\n"},
  {"SetChartTypeToStacked", PyvtkXYChartRepresentation_SetChartTypeToStacked, METH_VARARGS,
   "V.SetChartTypeToStacked()\nC++: void SetChartTypeToStacked()\n\n"},
  {"SetChartTypeToBag", PyvtkXYChartRepresentation_SetChartTypeToBag, METH_VARARGS,
   "V.SetChartTypeToBag()\nC++: void SetChartTypeToBag()\n\n"},
  {"SetChartTypeToFunctionalBag", PyvtkXYChartRepresentation_SetChartTypeToFunctionalBag, METH_VARARGS,
   "V.SetChartTypeToFunctionalBag()\nC++: void SetChartTypeToFunctionalBag()\n\n"},
  {"SetChartTypeToArea", PyvtkXYChartRepresentation_SetChartTypeToArea, METH_VARARGS,
   "V.SetChartTypeToArea()\nC++: void SetChartTypeToArea()\n\n"},
  {"GetChart", PyvtkXYChartRepresentation_GetChart, METH_VARARGS,
   "V.GetChart() -> vtkChartXY\nC++: vtkChartXY *GetChart()\n\nReturns the vtkChartXY instance from the view to which this\nrepresentation is added. Thus this will return a non-null value\nonly when this representation is added to a view.\n"},
  {"SetXAxisSeriesName", PyvtkXYChartRepresentation_SetXAxisSeriesName, METH_VARARGS,
   "V.SetXAxisSeriesName(string)\nC++: virtual void SetXAxisSeriesName(const char *_arg)\n\nSet the series to use as the X-axis.\n"},
  {"GetXAxisSeriesName", PyvtkXYChartRepresentation_GetXAxisSeriesName, METH_VARARGS,
   "V.GetXAxisSeriesName() -> string\nC++: virtual char *GetXAxisSeriesName()\n\nSet the series to use as the X-axis.\n"},
  {"SetUseIndexForXAxis", PyvtkXYChartRepresentation_SetUseIndexForXAxis, METH_VARARGS,
   "V.SetUseIndexForXAxis(bool)\nC++: virtual void SetUseIndexForXAxis(bool _arg)\n\nSet whether the index should be used for the x axis. When true,\nXSeriesName is ignored.\n"},
  {"GetUseIndexForXAxis", PyvtkXYChartRepresentation_GetUseIndexForXAxis, METH_VARARGS,
   "V.GetUseIndexForXAxis() -> bool\nC++: virtual bool GetUseIndexForXAxis()\n\nSet whether the index should be used for the x axis. When true,\nXSeriesName is ignored.\n"},
  {"SetSortDataByXAxis", PyvtkXYChartRepresentation_SetSortDataByXAxis, METH_VARARGS,
   "V.SetSortDataByXAxis(bool)\nC++: void SetSortDataByXAxis(bool val)\n\nGet/set whether the points in the chart should be sorted by their\nx-axis value. Points are connected in line plots in the order\nthey are in the table.  Sorting by the x-axis allows the line to\nhave no cycles.\n"},
  {"GetSortDataByXAxis", PyvtkXYChartRepresentation_GetSortDataByXAxis, METH_VARARGS,
   "V.GetSortDataByXAxis() -> bool\nC++: virtual bool GetSortDataByXAxis()\n\nGet/set whether the points in the chart should be sorted by their\nx-axis value. Points are connected in line plots in the order\nthey are in the table.  Sorting by the x-axis allows the line to\nhave no cycles.\n"},
  {"SetSeriesVisibility", PyvtkXYChartRepresentation_SetSeriesVisibility, METH_VARARGS,
   "V.SetSeriesVisibility(string, bool)\nC++: void SetSeriesVisibility(const char *seriesname,\n    bool visible)\n\nSet/Clear the properties for Y series/columns.\n"},
  {"SetLineThickness", PyvtkXYChartRepresentation_SetLineThickness, METH_VARARGS,
   "V.SetLineThickness(string, int)\nC++: void SetLineThickness(const char *name, int value)\n\nSet/Clear the properties for Y series/columns.\n"},
  {"SetLineStyle", PyvtkXYChartRepresentation_SetLineStyle, METH_VARARGS,
   "V.SetLineStyle(string, int)\nC++: void SetLineStyle(const char *name, int value)\n\nSet/Clear the properties for Y series/columns.\n"},
  {"SetColor", PyvtkXYChartRepresentation_SetColor, METH_VARARGS,
   "V.SetColor(string, float, float, float)\nC++: void SetColor(const char *name, double r, double g, double b)\n\nSet/Clear the properties for Y series/columns.\n"},
  {"SetAxisCorner", PyvtkXYChartRepresentation_SetAxisCorner, METH_VARARGS,
   "V.SetAxisCorner(string, int)\nC++: void SetAxisCorner(const char *name, int corner)\n\nSet/Clear the properties for Y series/columns.\n"},
  {"SetMarkerStyle", PyvtkXYChartRepresentation_SetMarkerStyle, METH_VARARGS,
   "V.SetMarkerStyle(string, int)\nC++: void SetMarkerStyle(const char *name, int style)\n\nSet/Clear the properties for Y series/columns.\n"},
  {"SetLabel", PyvtkXYChartRepresentation_SetLabel, METH_VARARGS,
   "V.SetLabel(string, string)\nC++: void SetLabel(const char *name, const char *label)\n\nSet/Clear the properties for Y series/columns.\n"},
  {"SetUseColorMapping", PyvtkXYChartRepresentation_SetUseColorMapping, METH_VARARGS,
   "V.SetUseColorMapping(string, bool)\nC++: void SetUseColorMapping(const char *name,\n    bool useColorMapping)\n\nSet/Clear the properties for Y series/columns.\n"},
  {"SetLookupTable", PyvtkXYChartRepresentation_SetLookupTable, METH_VARARGS,
   "V.SetLookupTable(string, vtkScalarsToColors)\nC++: void SetLookupTable(const char *name,\n    vtkScalarsToColors *lut)\n\nSet/Clear the properties for Y series/columns.\n"},
  {"GetLabel", PyvtkXYChartRepresentation_GetLabel, METH_VARARGS,
   "V.GetLabel(string) -> string\nC++: const char *GetLabel(const char *name)\n\nSet/Clear the properties for Y series/columns.\n"},
  {"ClearSeriesVisibilities", PyvtkXYChartRepresentation_ClearSeriesVisibilities, METH_VARARGS,
   "V.ClearSeriesVisibilities()\nC++: void ClearSeriesVisibilities()\n\n"},
  {"ClearLineThicknesses", PyvtkXYChartRepresentation_ClearLineThicknesses, METH_VARARGS,
   "V.ClearLineThicknesses()\nC++: void ClearLineThicknesses()\n\n"},
  {"ClearLineStyles", PyvtkXYChartRepresentation_ClearLineStyles, METH_VARARGS,
   "V.ClearLineStyles()\nC++: void ClearLineStyles()\n\n"},
  {"ClearColors", PyvtkXYChartRepresentation_ClearColors, METH_VARARGS,
   "V.ClearColors()\nC++: void ClearColors()\n\n"},
  {"ClearAxisCorners", PyvtkXYChartRepresentation_ClearAxisCorners, METH_VARARGS,
   "V.ClearAxisCorners()\nC++: void ClearAxisCorners()\n\n"},
  {"ClearMarkerStyles", PyvtkXYChartRepresentation_ClearMarkerStyles, METH_VARARGS,
   "V.ClearMarkerStyles()\nC++: void ClearMarkerStyles()\n\n"},
  {"ClearLabels", PyvtkXYChartRepresentation_ClearLabels, METH_VARARGS,
   "V.ClearLabels()\nC++: void ClearLabels()\n\n"},
  {"SetSelectionColor", PyvtkXYChartRepresentation_SetSelectionColor, METH_VARARGS,
   "V.SetSelectionColor(float, float, float)\nC++: void SetSelectionColor(double, double, double)\nV.SetSelectionColor((float, float, float))\nC++: void SetSelectionColor(double a[3])\n\n"},
  {"GetSelectionColor", PyvtkXYChartRepresentation_GetSelectionColor, METH_VARARGS,
   "V.GetSelectionColor() -> (float, float, float)\nC++: double *GetSelectionColor()\n\n"},
  {"SetSeriesLabelPrefix", PyvtkXYChartRepresentation_SetSeriesLabelPrefix, METH_VARARGS,
   "V.SetSeriesLabelPrefix(string)\nC++: virtual void SetSeriesLabelPrefix(const char *_arg)\n\nGet/Set the series label prefix.\n"},
  {"GetSeriesLabelPrefix", PyvtkXYChartRepresentation_GetSeriesLabelPrefix, METH_VARARGS,
   "V.GetSeriesLabelPrefix() -> string\nC++: virtual char *GetSeriesLabelPrefix()\n\nGet/Set the series label prefix.\n"},
  {"Export", PyvtkXYChartRepresentation_Export, METH_VARARGS,
   "V.Export(vtkCSVExporter) -> bool\nC++: bool Export(vtkCSVExporter *exporter) override;\n\nCalled by vtkPVContextView::Export() to export the\nrepresentation's data to a CSV file. Return false on failure\nwhich will call the exporting process to abort and raise an\nerror. Default implementation simply returns false.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXYChartRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkXYChartRepresentation", // tp_name
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
  PyvtkXYChartRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXYChartRepresentation_StaticNew()
{
  return vtkXYChartRepresentation::New();
}

PyObject *PyvtkXYChartRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXYChartRepresentation_Type, PyvtkXYChartRepresentation_Methods,
    "vtkXYChartRepresentation",
 &PyvtkXYChartRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkXYChartRepresentation_Type;

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

void PyVTKAddFile_vtkXYChartRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXYChartRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXYChartRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

