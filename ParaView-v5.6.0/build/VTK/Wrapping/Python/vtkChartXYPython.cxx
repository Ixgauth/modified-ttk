// python wrapper for vtkChartXY
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
#include "vtkContextMouseEvent.h"
#include "vtkVector.h"
#include "vtkContextKeyEvent.h"
#include "vtkChartXY.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkChartXY(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkChartXY_ClassNew(); }

#ifndef DECLARED_PyvtkChart_ClassNew
extern "C" { PyObject *PyvtkChart_ClassNew(); }
#define DECLARED_PyvtkChart_ClassNew
#endif

static const char *PyvtkChartXY_Doc =
  "vtkChartXY - Factory class for drawing XY charts\n\n"
  "Superclass: vtkChart\n\n"
  "This class implements an XY chart.\n\n"
  "@sa\n"
  "vtkBarChartActor\n\n";


static PyObject *
PyvtkChartXY_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkChartXY::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChartXY::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkChartXY *tempr = vtkChartXY::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartXY *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChartXY::NewInstance());

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
PyvtkChartXY_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkChartXY::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkChartXY::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_AddPlot_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPlot *tempr = (ap.IsBound() ?
      op->AddPlot(temp0) :
      op->vtkChartXY::AddPlot(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkChartXY_AddPlot_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkPlot *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlot"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddPlot(temp0) :
      op->vtkChartXY::AddPlot(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkChartXY_AddPlot_Methods[] = {
  {nullptr, PyvtkChartXY_AddPlot_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkChartXY_AddPlot_s2, METH_VARARGS,
   "@V *vtkPlot"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkChartXY_AddPlot(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkChartXY_AddPlot_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddPlot");
  return nullptr;
}



static PyObject *
PyvtkChartXY_RemovePlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->RemovePlot(temp0) :
      op->vtkChartXY::RemovePlot(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_ClearPlots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearPlots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearPlots();
    }
    else
    {
      op->vtkChartXY::ClearPlots();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPlot *tempr = (ap.IsBound() ?
      op->GetPlot(temp0) :
      op->vtkChartXY::GetPlot(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetPlotIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkPlot *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlot"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPlotIndex(temp0) :
      op->vtkChartXY::GetPlotIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_RaisePlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RaisePlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkPlot *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlot"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->RaisePlot(temp0) :
      op->vtkChartXY::RaisePlot(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_StackPlotAbove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StackPlotAbove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkPlot *temp0 = nullptr;
  vtkPlot *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPlot") &&
      ap.GetVTKObject(temp1, "vtkPlot"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->StackPlotAbove(temp0, temp1) :
      op->vtkChartXY::StackPlotAbove(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_LowerPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LowerPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkPlot *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlot"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->LowerPlot(temp0) :
      op->vtkChartXY::LowerPlot(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_StackPlotUnder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StackPlotUnder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkPlot *temp0 = nullptr;
  vtkPlot *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPlot") &&
      ap.GetVTKObject(temp1, "vtkPlot"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->StackPlotUnder(temp0, temp1) :
      op->vtkChartXY::StackPlotUnder(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetNumberOfPlots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPlots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPlots() :
      op->vtkChartXY::GetNumberOfPlots());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetPlotCorner(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotCorner");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkPlot *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlot"))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlotCorner(temp0) :
      op->vtkChartXY::GetPlotCorner(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetPlotCorner(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotCorner");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkPlot *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPlot") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPlotCorner(temp0, temp1);
    }
    else
    {
      op->vtkChartXY::SetPlotCorner(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAxis *tempr = (ap.IsBound() ?
      op->GetAxis(temp0) :
      op->vtkChartXY::GetAxis(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  int temp0;
  vtkAxis *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAxis"))
  {
    if (ap.IsBound())
    {
      op->SetAxis(temp0, temp1);
    }
    else
    {
      op->vtkChartXY::SetAxis(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetShowLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowLegend(temp0);
    }
    else
    {
      op->vtkChartXY::SetShowLegend(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartLegend *tempr = (ap.IsBound() ?
      op->GetLegend() :
      op->vtkChartXY::GetLegend());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetTooltip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkTooltipItem *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTooltipItem"))
  {
    if (ap.IsBound())
    {
      op->SetTooltip(temp0);
    }
    else
    {
      op->vtkChartXY::SetTooltip(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetTooltip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTooltipItem *tempr = (ap.IsBound() ?
      op->GetTooltip() :
      op->vtkChartXY::GetTooltip());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetNumberOfAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfAxes() :
      op->vtkChartXY::GetNumberOfAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_RecalculateBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecalculateBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RecalculateBounds();
    }
    else
    {
      op->vtkChartXY::RecalculateBounds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetSelectionMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionMethod(temp0);
    }
    else
    {
      op->vtkChartXY::SetSelectionMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_RemovePlotSelections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePlotSelections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemovePlotSelections();
    }
    else
    {
      op->vtkChartXY::RemovePlotSelections();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetDrawAxesAtOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawAxesAtOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawAxesAtOrigin(temp0);
    }
    else
    {
      op->vtkChartXY::SetDrawAxesAtOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetDrawAxesAtOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawAxesAtOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawAxesAtOrigin() :
      op->vtkChartXY::GetDrawAxesAtOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_DrawAxesAtOriginOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawAxesAtOriginOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawAxesAtOriginOn();
    }
    else
    {
      op->vtkChartXY::DrawAxesAtOriginOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_DrawAxesAtOriginOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawAxesAtOriginOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawAxesAtOriginOff();
    }
    else
    {
      op->vtkChartXY::DrawAxesAtOriginOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetAutoAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoAxes(temp0);
    }
    else
    {
      op->vtkChartXY::SetAutoAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetAutoAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAutoAxes() :
      op->vtkChartXY::GetAutoAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_AutoAxesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAxesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAxesOn();
    }
    else
    {
      op->vtkChartXY::AutoAxesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_AutoAxesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAxesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAxesOff();
    }
    else
    {
      op->vtkChartXY::AutoAxesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetHiddenAxisBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHiddenAxisBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHiddenAxisBorder(temp0);
    }
    else
    {
      op->vtkChartXY::SetHiddenAxisBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetHiddenAxisBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHiddenAxisBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHiddenAxisBorder() :
      op->vtkChartXY::GetHiddenAxisBorder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetForceAxesToBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceAxesToBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceAxesToBounds(temp0);
    }
    else
    {
      op->vtkChartXY::SetForceAxesToBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetForceAxesToBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceAxesToBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceAxesToBounds() :
      op->vtkChartXY::GetForceAxesToBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_ForceAxesToBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceAxesToBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceAxesToBoundsOn();
    }
    else
    {
      op->vtkChartXY::ForceAxesToBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_ForceAxesToBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceAxesToBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceAxesToBoundsOff();
    }
    else
    {
      op->vtkChartXY::ForceAxesToBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetBarWidthFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBarWidthFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBarWidthFraction(temp0);
    }
    else
    {
      op->vtkChartXY::SetBarWidthFraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetBarWidthFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBarWidthFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetBarWidthFraction() :
      op->vtkChartXY::GetBarWidthFraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetZoomWithMouseWheel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZoomWithMouseWheel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZoomWithMouseWheel(temp0);
    }
    else
    {
      op->vtkChartXY::SetZoomWithMouseWheel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetZoomWithMouseWheel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZoomWithMouseWheel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetZoomWithMouseWheel() :
      op->vtkChartXY::GetZoomWithMouseWheel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_ZoomWithMouseWheelOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZoomWithMouseWheelOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZoomWithMouseWheelOn();
    }
    else
    {
      op->vtkChartXY::ZoomWithMouseWheelOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_ZoomWithMouseWheelOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZoomWithMouseWheelOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZoomWithMouseWheelOff();
    }
    else
    {
      op->vtkChartXY::ZoomWithMouseWheelOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetAdjustLowerBoundForLogPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustLowerBoundForLogPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAdjustLowerBoundForLogPlot(temp0);
    }
    else
    {
      op->vtkChartXY::SetAdjustLowerBoundForLogPlot(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetAdjustLowerBoundForLogPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustLowerBoundForLogPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAdjustLowerBoundForLogPlot() :
      op->vtkChartXY::GetAdjustLowerBoundForLogPlot());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_AdjustLowerBoundForLogPlotOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustLowerBoundForLogPlotOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AdjustLowerBoundForLogPlotOn();
    }
    else
    {
      op->vtkChartXY::AdjustLowerBoundForLogPlotOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_AdjustLowerBoundForLogPlotOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustLowerBoundForLogPlotOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AdjustLowerBoundForLogPlotOff();
    }
    else
    {
      op->vtkChartXY::AdjustLowerBoundForLogPlotOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetDragPointAlongX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDragPointAlongX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDragPointAlongX(temp0);
    }
    else
    {
      op->vtkChartXY::SetDragPointAlongX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetDragPointAlongX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDragPointAlongX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDragPointAlongX() :
      op->vtkChartXY::GetDragPointAlongX());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_DragPointAlongXOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DragPointAlongXOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DragPointAlongXOn();
    }
    else
    {
      op->vtkChartXY::DragPointAlongXOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_DragPointAlongXOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DragPointAlongXOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DragPointAlongXOff();
    }
    else
    {
      op->vtkChartXY::DragPointAlongXOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetDragPointAlongY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDragPointAlongY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDragPointAlongY(temp0);
    }
    else
    {
      op->vtkChartXY::SetDragPointAlongY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetDragPointAlongY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDragPointAlongY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDragPointAlongY() :
      op->vtkChartXY::GetDragPointAlongY());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_DragPointAlongYOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DragPointAlongYOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DragPointAlongYOn();
    }
    else
    {
      op->vtkChartXY::DragPointAlongYOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_DragPointAlongYOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DragPointAlongYOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DragPointAlongYOff();
    }
    else
    {
      op->vtkChartXY::DragPointAlongYOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetTooltipInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltipInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVector2d *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkIdType temp2;
  vtkPlot *temp3 = nullptr;
  vtkIdType temp4 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector2d") &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkPlot") &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    if (ap.IsBound())
    {
      op->SetTooltipInfo(*temp0, *temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkChartXY::SetTooltipInfo(*temp0, *temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkChartXY_Hit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->Hit(*temp0) :
      op->vtkChartXY::Hit(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartXY_MouseEnterEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseEnterEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseEnterEvent(*temp0) :
      op->vtkChartXY::MouseEnterEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartXY_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseMoveEvent(*temp0) :
      op->vtkChartXY::MouseMoveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartXY_MouseLeaveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseLeaveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseLeaveEvent(*temp0) :
      op->vtkChartXY::MouseLeaveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartXY_MouseButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonPressEvent(*temp0) :
      op->vtkChartXY::MouseButtonPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartXY_MouseButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonReleaseEvent(*temp0) :
      op->vtkChartXY::MouseButtonReleaseEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartXY_MouseWheelEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseWheelEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseWheelEvent(*temp0, temp1) :
      op->vtkChartXY::MouseWheelEvent(*temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartXY_KeyPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeyPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkContextKeyEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextKeyEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->KeyPressEvent(*temp0) :
      op->vtkChartXY::KeyPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkChartXY_Methods[] = {
  {"IsTypeOf", PyvtkChartXY_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkChartXY_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkChartXY_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkChartXY\nC++: static vtkChartXY *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkChartXY_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkChartXY\nC++: vtkChartXY *NewInstance()\n\n"},
  {"Update", PyvtkChartXY_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {"Paint", PyvtkChartXY_Paint, METH_VARARGS,
   "V.Paint(vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the chart, called whenever the chart needs to be\ndrawn\n"},
  {"AddPlot", PyvtkChartXY_AddPlot, METH_VARARGS,
   "V.AddPlot(int) -> vtkPlot\nC++: vtkPlot *AddPlot(int type) override;\nV.AddPlot(vtkPlot) -> int\nC++: vtkIdType AddPlot(vtkPlot *plot) override;\n\nAdd a plot to the chart, defaults to using the name of the y\ncolumn\n"},
  {"RemovePlot", PyvtkChartXY_RemovePlot, METH_VARARGS,
   "V.RemovePlot(int) -> bool\nC++: bool RemovePlot(vtkIdType index) override;\n\nRemove the plot at the specified index, returns true if\nsuccessful, false if the index was invalid.\n"},
  {"ClearPlots", PyvtkChartXY_ClearPlots, METH_VARARGS,
   "V.ClearPlots()\nC++: void ClearPlots() override;\n\nRemove all plots from the chart.\n"},
  {"GetPlot", PyvtkChartXY_GetPlot, METH_VARARGS,
   "V.GetPlot(int) -> vtkPlot\nC++: vtkPlot *GetPlot(vtkIdType index) override;\n\nGet the plot at the specified index, returns null if the index is\ninvalid.\n"},
  {"GetPlotIndex", PyvtkChartXY_GetPlotIndex, METH_VARARGS,
   "V.GetPlotIndex(vtkPlot) -> int\nC++: virtual vtkIdType GetPlotIndex(vtkPlot *)\n\nGet the index of the specified plot, returns -1 if the plot does\nnot belong to the chart.\n"},
  {"RaisePlot", PyvtkChartXY_RaisePlot, METH_VARARGS,
   "V.RaisePlot(vtkPlot) -> int\nC++: vtkIdType RaisePlot(vtkPlot *plot)\n\nRaises the plot to the top of the plot's stack.\n\\return The new index of the plot\n\\sa StackPlotAbove(), LowerPlot(), StackPlotUnder()\n"},
  {"StackPlotAbove", PyvtkChartXY_StackPlotAbove, METH_VARARGS,
   "V.StackPlotAbove(vtkPlot, vtkPlot) -> int\nC++: virtual vtkIdType StackPlotAbove(vtkPlot *plot,\n    vtkPlot *under)\n\nRaises the plot above the under plot. If under is null, the plot\nis raised to the top of the plot's stack.\n\\return The new index of the plot\n\\sa RaisePlot(), LowerPlot(), StackPlotUnder()\n"},
  {"LowerPlot", PyvtkChartXY_LowerPlot, METH_VARARGS,
   "V.LowerPlot(vtkPlot) -> int\nC++: vtkIdType LowerPlot(vtkPlot *plot)\n\nLowers the plot to the bottom of the plot's stack.\n\\return The new index of the plot\n\\sa StackPlotUnder(), RaisePlot(), StackPlotAbove()\n"},
  {"StackPlotUnder", PyvtkChartXY_StackPlotUnder, METH_VARARGS,
   "V.StackPlotUnder(vtkPlot, vtkPlot) -> int\nC++: virtual vtkIdType StackPlotUnder(vtkPlot *plot,\n    vtkPlot *above)\n\nLowers the plot under the above plot. If above is null, the plot\nis lowered to the bottom of the plot's stack\n\\return The new index of the plot\n\\sa StackPlotUnder(), RaisePlot(), StackPlotAbove()\n"},
  {"GetNumberOfPlots", PyvtkChartXY_GetNumberOfPlots, METH_VARARGS,
   "V.GetNumberOfPlots() -> int\nC++: vtkIdType GetNumberOfPlots() override;\n\nGet the number of plots the chart contains.\n"},
  {"GetPlotCorner", PyvtkChartXY_GetPlotCorner, METH_VARARGS,
   "V.GetPlotCorner(vtkPlot) -> int\nC++: int GetPlotCorner(vtkPlot *plot)\n\nFigure out which quadrant the plot is in.\n"},
  {"SetPlotCorner", PyvtkChartXY_SetPlotCorner, METH_VARARGS,
   "V.SetPlotCorner(vtkPlot, int)\nC++: void SetPlotCorner(vtkPlot *plot, int corner)\n\nFigure out which quadrant the plot is in.\n"},
  {"GetAxis", PyvtkChartXY_GetAxis, METH_VARARGS,
   "V.GetAxis(int) -> vtkAxis\nC++: vtkAxis *GetAxis(int axisIndex) override;\n\nGet the axis specified by axisIndex. This is specified with the\nvtkAxis position enum, valid values are vtkAxis::LEFT,\nvtkAxis::BOTTOM, vtkAxis::RIGHT and vtkAxis::TOP.\n"},
  {"SetAxis", PyvtkChartXY_SetAxis, METH_VARARGS,
   "V.SetAxis(int, vtkAxis)\nC++: virtual void SetAxis(int axisIndex, vtkAxis *) override;\n\nSet the axis specified by axisIndex. This is specified with the\nvtkAxis position enum, valid values are vtkAxis::LEFT,\nvtkAxis::BOTTOM, vtkAxis::RIGHT and vtkAxis::TOP.\n"},
  {"SetShowLegend", PyvtkChartXY_SetShowLegend, METH_VARARGS,
   "V.SetShowLegend(bool)\nC++: void SetShowLegend(bool visible) override;\n\nSet whether the chart should draw a legend.\n"},
  {"GetLegend", PyvtkChartXY_GetLegend, METH_VARARGS,
   "V.GetLegend() -> vtkChartLegend\nC++: vtkChartLegend *GetLegend() override;\n\nGet the vtkChartLegend object that will be displayed by the\nchart.\n"},
  {"SetTooltip", PyvtkChartXY_SetTooltip, METH_VARARGS,
   "V.SetTooltip(vtkTooltipItem)\nC++: virtual void SetTooltip(vtkTooltipItem *tooltip)\n\nSet the vtkTooltipItem object that will be displayed by the\nchart.\n"},
  {"GetTooltip", PyvtkChartXY_GetTooltip, METH_VARARGS,
   "V.GetTooltip() -> vtkTooltipItem\nC++: virtual vtkTooltipItem *GetTooltip()\n\nGet the vtkTooltipItem object that will be displayed by the\nchart.\n"},
  {"GetNumberOfAxes", PyvtkChartXY_GetNumberOfAxes, METH_VARARGS,
   "V.GetNumberOfAxes() -> int\nC++: vtkIdType GetNumberOfAxes() override;\n\nGet the number of axes in the current chart.\n"},
  {"RecalculateBounds", PyvtkChartXY_RecalculateBounds, METH_VARARGS,
   "V.RecalculateBounds()\nC++: void RecalculateBounds() override;\n\nRequest that the chart recalculates the range of its axes.\nEspecially useful in applications after the parameters of plots\nhave been modified.\n"},
  {"SetSelectionMethod", PyvtkChartXY_SetSelectionMethod, METH_VARARGS,
   "V.SetSelectionMethod(int)\nC++: void SetSelectionMethod(int method) override;\n\nSet the selection method, which controls how selections are\nhandled by the chart. The default is SELECTION_ROWS which selects\nall points in all plots in a chart that have values in the rows\nselected. SELECTION_PLOTS allows for finer-grained selections\nspecific to each plot, and so to each XY column pair.\n"},
  {"RemovePlotSelections", PyvtkChartXY_RemovePlotSelections, METH_VARARGS,
   "V.RemovePlotSelections()\nC++: void RemovePlotSelections()\n\nRemove all the selection from Plots\n"},
  {"SetDrawAxesAtOrigin", PyvtkChartXY_SetDrawAxesAtOrigin, METH_VARARGS,
   "V.SetDrawAxesAtOrigin(bool)\nC++: virtual void SetDrawAxesAtOrigin(bool _arg)\n\nIf true then the axes will be drawn at the origin (scientific\nstyle).\n"},
  {"GetDrawAxesAtOrigin", PyvtkChartXY_GetDrawAxesAtOrigin, METH_VARARGS,
   "V.GetDrawAxesAtOrigin() -> bool\nC++: virtual bool GetDrawAxesAtOrigin()\n\nIf true then the axes will be drawn at the origin (scientific\nstyle).\n"},
  {"DrawAxesAtOriginOn", PyvtkChartXY_DrawAxesAtOriginOn, METH_VARARGS,
   "V.DrawAxesAtOriginOn()\nC++: virtual void DrawAxesAtOriginOn()\n\nIf true then the axes will be drawn at the origin (scientific\nstyle).\n"},
  {"DrawAxesAtOriginOff", PyvtkChartXY_DrawAxesAtOriginOff, METH_VARARGS,
   "V.DrawAxesAtOriginOff()\nC++: virtual void DrawAxesAtOriginOff()\n\nIf true then the axes will be drawn at the origin (scientific\nstyle).\n"},
  {"SetAutoAxes", PyvtkChartXY_SetAutoAxes, METH_VARARGS,
   "V.SetAutoAxes(bool)\nC++: virtual void SetAutoAxes(bool _arg)\n\nIf true then the axes will be turned on and off depending upon\nwhether any plots are in that corner. Defaults to true.\n"},
  {"GetAutoAxes", PyvtkChartXY_GetAutoAxes, METH_VARARGS,
   "V.GetAutoAxes() -> bool\nC++: virtual bool GetAutoAxes()\n\nIf true then the axes will be turned on and off depending upon\nwhether any plots are in that corner. Defaults to true.\n"},
  {"AutoAxesOn", PyvtkChartXY_AutoAxesOn, METH_VARARGS,
   "V.AutoAxesOn()\nC++: virtual void AutoAxesOn()\n\nIf true then the axes will be turned on and off depending upon\nwhether any plots are in that corner. Defaults to true.\n"},
  {"AutoAxesOff", PyvtkChartXY_AutoAxesOff, METH_VARARGS,
   "V.AutoAxesOff()\nC++: virtual void AutoAxesOff()\n\nIf true then the axes will be turned on and off depending upon\nwhether any plots are in that corner. Defaults to true.\n"},
  {"SetHiddenAxisBorder", PyvtkChartXY_SetHiddenAxisBorder, METH_VARARGS,
   "V.SetHiddenAxisBorder(int)\nC++: virtual void SetHiddenAxisBorder(int _arg)\n\nBorder size of the axes that are hidden (vtkAxis::GetVisible())\n"},
  {"GetHiddenAxisBorder", PyvtkChartXY_GetHiddenAxisBorder, METH_VARARGS,
   "V.GetHiddenAxisBorder() -> int\nC++: virtual int GetHiddenAxisBorder()\n\nBorder size of the axes that are hidden (vtkAxis::GetVisible())\n"},
  {"SetForceAxesToBounds", PyvtkChartXY_SetForceAxesToBounds, METH_VARARGS,
   "V.SetForceAxesToBounds(bool)\nC++: virtual void SetForceAxesToBounds(bool _arg)\n\nForce the axes to have their Minimum and Maximum properties\ninside the plot boundaries. It constrains pan and zoom\ninteraction. False by default.\n"},
  {"GetForceAxesToBounds", PyvtkChartXY_GetForceAxesToBounds, METH_VARARGS,
   "V.GetForceAxesToBounds() -> bool\nC++: virtual bool GetForceAxesToBounds()\n\nForce the axes to have their Minimum and Maximum properties\ninside the plot boundaries. It constrains pan and zoom\ninteraction. False by default.\n"},
  {"ForceAxesToBoundsOn", PyvtkChartXY_ForceAxesToBoundsOn, METH_VARARGS,
   "V.ForceAxesToBoundsOn()\nC++: virtual void ForceAxesToBoundsOn()\n\nForce the axes to have their Minimum and Maximum properties\ninside the plot boundaries. It constrains pan and zoom\ninteraction. False by default.\n"},
  {"ForceAxesToBoundsOff", PyvtkChartXY_ForceAxesToBoundsOff, METH_VARARGS,
   "V.ForceAxesToBoundsOff()\nC++: virtual void ForceAxesToBoundsOff()\n\nForce the axes to have their Minimum and Maximum properties\ninside the plot boundaries. It constrains pan and zoom\ninteraction. False by default.\n"},
  {"SetBarWidthFraction", PyvtkChartXY_SetBarWidthFraction, METH_VARARGS,
   "V.SetBarWidthFraction(float)\nC++: virtual void SetBarWidthFraction(float _arg)\n\nSet the width fraction for any bar charts drawn in this chart. It\nis assumed that all bar plots will use the same array for the X\naxis, and that this array is regularly spaced. The delta between\nthe first two x values is used to calculated the width of the\nbars, and subdivided between each bar. The default value is 0.8,\n1.0 would lead to bars that touch.\n"},
  {"GetBarWidthFraction", PyvtkChartXY_GetBarWidthFraction, METH_VARARGS,
   "V.GetBarWidthFraction() -> float\nC++: virtual float GetBarWidthFraction()\n\nSet the width fraction for any bar charts drawn in this chart. It\nis assumed that all bar plots will use the same array for the X\naxis, and that this array is regularly spaced. The delta between\nthe first two x values is used to calculated the width of the\nbars, and subdivided between each bar. The default value is 0.8,\n1.0 would lead to bars that touch.\n"},
  {"SetZoomWithMouseWheel", PyvtkChartXY_SetZoomWithMouseWheel, METH_VARARGS,
   "V.SetZoomWithMouseWheel(bool)\nC++: virtual void SetZoomWithMouseWheel(bool _arg)\n\nSet the behavior of the mouse wheel.  If true, the mouse wheel\nzooms in/out on the chart.  Otherwise, unless MouseWheelEvent is\noverridden by a subclass the mouse wheel does nothing. The\ndefault value is true.\n"},
  {"GetZoomWithMouseWheel", PyvtkChartXY_GetZoomWithMouseWheel, METH_VARARGS,
   "V.GetZoomWithMouseWheel() -> bool\nC++: virtual bool GetZoomWithMouseWheel()\n\nSet the behavior of the mouse wheel.  If true, the mouse wheel\nzooms in/out on the chart.  Otherwise, unless MouseWheelEvent is\noverridden by a subclass the mouse wheel does nothing. The\ndefault value is true.\n"},
  {"ZoomWithMouseWheelOn", PyvtkChartXY_ZoomWithMouseWheelOn, METH_VARARGS,
   "V.ZoomWithMouseWheelOn()\nC++: virtual void ZoomWithMouseWheelOn()\n\nSet the behavior of the mouse wheel.  If true, the mouse wheel\nzooms in/out on the chart.  Otherwise, unless MouseWheelEvent is\noverridden by a subclass the mouse wheel does nothing. The\ndefault value is true.\n"},
  {"ZoomWithMouseWheelOff", PyvtkChartXY_ZoomWithMouseWheelOff, METH_VARARGS,
   "V.ZoomWithMouseWheelOff()\nC++: virtual void ZoomWithMouseWheelOff()\n\nSet the behavior of the mouse wheel.  If true, the mouse wheel\nzooms in/out on the chart.  Otherwise, unless MouseWheelEvent is\noverridden by a subclass the mouse wheel does nothing. The\ndefault value is true.\n"},
  {"SetAdjustLowerBoundForLogPlot", PyvtkChartXY_SetAdjustLowerBoundForLogPlot, METH_VARARGS,
   "V.SetAdjustLowerBoundForLogPlot(bool)\nC++: virtual void SetAdjustLowerBoundForLogPlot(bool _arg)\n\nAdjust the minimum of a logarithmic axis to be greater than 0,\nregardless of the minimum data value. False by default.\n"},
  {"GetAdjustLowerBoundForLogPlot", PyvtkChartXY_GetAdjustLowerBoundForLogPlot, METH_VARARGS,
   "V.GetAdjustLowerBoundForLogPlot() -> bool\nC++: virtual bool GetAdjustLowerBoundForLogPlot()\n\nAdjust the minimum of a logarithmic axis to be greater than 0,\nregardless of the minimum data value. False by default.\n"},
  {"AdjustLowerBoundForLogPlotOn", PyvtkChartXY_AdjustLowerBoundForLogPlotOn, METH_VARARGS,
   "V.AdjustLowerBoundForLogPlotOn()\nC++: virtual void AdjustLowerBoundForLogPlotOn()\n\nAdjust the minimum of a logarithmic axis to be greater than 0,\nregardless of the minimum data value. False by default.\n"},
  {"AdjustLowerBoundForLogPlotOff", PyvtkChartXY_AdjustLowerBoundForLogPlotOff, METH_VARARGS,
   "V.AdjustLowerBoundForLogPlotOff()\nC++: virtual void AdjustLowerBoundForLogPlotOff()\n\nAdjust the minimum of a logarithmic axis to be greater than 0,\nregardless of the minimum data value. False by default.\n"},
  {"SetDragPointAlongX", PyvtkChartXY_SetDragPointAlongX, METH_VARARGS,
   "V.SetDragPointAlongX(bool)\nC++: virtual void SetDragPointAlongX(bool _arg)\n\nSet if the point can be dragged along X by the ClickAndDrag\nAction True by default.\n"},
  {"GetDragPointAlongX", PyvtkChartXY_GetDragPointAlongX, METH_VARARGS,
   "V.GetDragPointAlongX() -> bool\nC++: virtual bool GetDragPointAlongX()\n\nSet if the point can be dragged along X by the ClickAndDrag\nAction True by default.\n"},
  {"DragPointAlongXOn", PyvtkChartXY_DragPointAlongXOn, METH_VARARGS,
   "V.DragPointAlongXOn()\nC++: virtual void DragPointAlongXOn()\n\nSet if the point can be dragged along X by the ClickAndDrag\nAction True by default.\n"},
  {"DragPointAlongXOff", PyvtkChartXY_DragPointAlongXOff, METH_VARARGS,
   "V.DragPointAlongXOff()\nC++: virtual void DragPointAlongXOff()\n\nSet if the point can be dragged along X by the ClickAndDrag\nAction True by default.\n"},
  {"SetDragPointAlongY", PyvtkChartXY_SetDragPointAlongY, METH_VARARGS,
   "V.SetDragPointAlongY(bool)\nC++: virtual void SetDragPointAlongY(bool _arg)\n\nSet if the point can be dragged along Y by the ClickAndDrag\nAction True by default.\n"},
  {"GetDragPointAlongY", PyvtkChartXY_GetDragPointAlongY, METH_VARARGS,
   "V.GetDragPointAlongY() -> bool\nC++: virtual bool GetDragPointAlongY()\n\nSet if the point can be dragged along Y by the ClickAndDrag\nAction True by default.\n"},
  {"DragPointAlongYOn", PyvtkChartXY_DragPointAlongYOn, METH_VARARGS,
   "V.DragPointAlongYOn()\nC++: virtual void DragPointAlongYOn()\n\nSet if the point can be dragged along Y by the ClickAndDrag\nAction True by default.\n"},
  {"DragPointAlongYOff", PyvtkChartXY_DragPointAlongYOff, METH_VARARGS,
   "V.DragPointAlongYOff()\nC++: virtual void DragPointAlongYOff()\n\nSet if the point can be dragged along Y by the ClickAndDrag\nAction True by default.\n"},
  {"SetTooltipInfo", PyvtkChartXY_SetTooltipInfo, METH_VARARGS,
   "V.SetTooltipInfo(vtkContextMouseEvent, vtkVector2d, int, vtkPlot,\n    int)\nC++: virtual void SetTooltipInfo(const vtkContextMouseEvent &,\n    const vtkVector2d &, vtkIdType, vtkPlot *,\n    vtkIdType segmentIndex=-1)\n\nSet the information passed to the tooltip.\n"},
  {"Hit", PyvtkChartXY_Hit, METH_VARARGS,
   "V.Hit(vtkContextMouseEvent) -> bool\nC++: bool Hit(const vtkContextMouseEvent &mouse) override;\n\nReturn true if the supplied x, y coordinate is inside the item.\n"},
  {"MouseEnterEvent", PyvtkChartXY_MouseEnterEvent, METH_VARARGS,
   "V.MouseEnterEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseEnterEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse enter event.\n"},
  {"MouseMoveEvent", PyvtkChartXY_MouseMoveEvent, METH_VARARGS,
   "V.MouseMoveEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseMoveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse move event.\n"},
  {"MouseLeaveEvent", PyvtkChartXY_MouseLeaveEvent, METH_VARARGS,
   "V.MouseLeaveEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseLeaveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse leave event.\n"},
  {"MouseButtonPressEvent", PyvtkChartXY_MouseButtonPressEvent, METH_VARARGS,
   "V.MouseButtonPressEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseButtonPressEvent(const vtkContextMouseEvent &mouse)\n     override;\n\nMouse button down event\n"},
  {"MouseButtonReleaseEvent", PyvtkChartXY_MouseButtonReleaseEvent, METH_VARARGS,
   "V.MouseButtonReleaseEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseButtonReleaseEvent(\n    const vtkContextMouseEvent &mouse) override;\n\nMouse button release event.\n"},
  {"MouseWheelEvent", PyvtkChartXY_MouseWheelEvent, METH_VARARGS,
   "V.MouseWheelEvent(vtkContextMouseEvent, int) -> bool\nC++: bool MouseWheelEvent(const vtkContextMouseEvent &mouse,\n    int delta) override;\n\nMouse wheel event, positive delta indicates forward movement of\nthe wheel.\n"},
  {"KeyPressEvent", PyvtkChartXY_KeyPressEvent, METH_VARARGS,
   "V.KeyPressEvent(vtkContextKeyEvent) -> bool\nC++: bool KeyPressEvent(const vtkContextKeyEvent &key) override;\n\nKey press event.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkChartXY_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkChartXY", // tp_name
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
  PyvtkChartXY_Doc, // tp_doc
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

static vtkObjectBase *PyvtkChartXY_StaticNew()
{
  return vtkChartXY::New();
}

PyObject *PyvtkChartXY_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkChartXY_Type, PyvtkChartXY_Methods,
    "vtkChartXY",
 &PyvtkChartXY_StaticNew);

  PyTypeObject *pytype = &PyvtkChartXY_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkChart_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkChartPlotData_Doc =
  "vtkChartPlotData - Small struct used by InvokeEvent to send some\ninformation about the point that was clicked on.\n\n"
  "This is an experimental part of the API, subject to change.\n\n"
  "vtkChartPlotData()\n"
  "vtkChartPlotData(const &vtkChartPlotData)\n";

static PyMethodDef PyvtkChartPlotData_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkChartPlotData_vtkChartPlotData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkChartPlotData");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkChartPlotData *op = new vtkChartPlotData();

    result = PyVTKSpecialObject_New("vtkChartPlotData", op);
  }

  return result;
}

static PyObject *
PyvtkChartPlotData_vtkChartPlotData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkChartPlotData");

  vtkChartPlotData *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkChartPlotData"))
  {
    vtkChartPlotData *op = new vtkChartPlotData(*temp0);

    result = PyVTKSpecialObject_New("vtkChartPlotData", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkChartPlotData_vtkChartPlotData_Methods[] = {
  {nullptr, PyvtkChartPlotData_vtkChartPlotData_s2, METH_VARARGS,
   "@W vtkChartPlotData"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkChartPlotData_vtkChartPlotData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkChartPlotData_vtkChartPlotData_s1(self, args);
    case 1:
      return PyvtkChartPlotData_vtkChartPlotData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkChartPlotData");
  return nullptr;
}


static PyObject *
PyvtkChartPlotData_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkChartPlotData_vtkChartPlotData(nullptr, args);
}

static void PyvtkChartPlotData_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkChartPlotData *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkChartPlotData_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkChartPlotData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkChartPlotData", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkChartPlotData_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkChartPlotData_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkChartPlotData_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkChartPlotData_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkChartPlotData_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkChartPlotData(*static_cast<const vtkChartPlotData*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkChartPlotData_TypeNew(); }

PyObject *PyvtkChartPlotData_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkChartPlotData_Type,
    PyvtkChartPlotData_Methods,
    PyvtkChartPlotData_vtkChartPlotData_Methods,
    &PyvtkChartPlotData_CCopy);

  PyTypeObject *pytype = &PyvtkChartPlotData_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkChartXY(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkChartXY_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkChartXY", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkChartPlotData_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkChartPlotData", o) != 0)
  {
    Py_DECREF(o);
  }

}

