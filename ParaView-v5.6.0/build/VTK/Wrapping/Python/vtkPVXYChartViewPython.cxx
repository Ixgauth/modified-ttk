// python wrapper for vtkPVXYChartView
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
#include "vtkPVXYChartView.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVXYChartView(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVXYChartView_ClassNew(); }

#ifndef DECLARED_PyvtkPVContextView_ClassNew
extern "C" { PyObject *PyvtkPVContextView_ClassNew(); }
#define DECLARED_PyvtkPVContextView_ClassNew
#endif

static const char *PyvtkPVXYChartView_Doc =
  "vtkPVXYChartView - vtkPVView subclass for drawing charts\n\n"
  "Superclass: vtkPVContextView\n\n"
  "vtkPVXYChartView is a concrete subclass of vtkPVContextView -- which\n"
  "in turn inherits vtkPVView -- that creates a vtkChart to perform\n"
  "rendering.\n\n";


static PyObject *
PyvtkPVXYChartView_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVXYChartView::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVXYChartView::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVXYChartView *tempr = vtkPVXYChartView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVXYChartView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVXYChartView::NewInstance());

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
PyvtkPVXYChartView_SetChartType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
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
      op->vtkPVXYChartView::SetChartType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetChartTypeToLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartTypeToLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetChartTypeToLine();
    }
    else
    {
      op->vtkPVXYChartView::SetChartTypeToLine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetChartTypeToPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartTypeToPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetChartTypeToPoint();
    }
    else
    {
      op->vtkPVXYChartView::SetChartTypeToPoint();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetChartTypeToBar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartTypeToBar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetChartTypeToBar();
    }
    else
    {
      op->vtkPVXYChartView::SetChartTypeToBar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetChartTypeToBag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartTypeToBag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetChartTypeToBag();
    }
    else
    {
      op->vtkPVXYChartView::SetChartTypeToBag();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetChartTypeToBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartTypeToBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetChartTypeToBox();
    }
    else
    {
      op->vtkPVXYChartView::SetChartTypeToBox();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetChartTypeToArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartTypeToArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetChartTypeToArea();
    }
    else
    {
      op->vtkPVXYChartView::SetChartTypeToArea();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetChartTypeToFunctionalBag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartTypeToFunctionalBag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetChartTypeToFunctionalBag();
    }
    else
    {
      op->vtkPVXYChartView::SetChartTypeToFunctionalBag();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetChartTypeToParallelCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartTypeToParallelCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetChartTypeToParallelCoordinates();
    }
    else
    {
      op->vtkPVXYChartView::SetChartTypeToParallelCoordinates();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitle(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTitleFont(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleFont");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  bool temp2 = false;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetTitleFont(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVXYChartView::SetTitleFont(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTitleFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleFontFamily(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTitleFontFamily(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTitleFontFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleFontFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleFontFile(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTitleFontFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTitleFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleFontSize(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTitleFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTitleBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleBold(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTitleBold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTitleItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleItalic(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTitleItalic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTitleColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

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
      op->SetTitleColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVXYChartView::SetTitleColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTitleAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleAlignment(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTitleAlignment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLegendVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLegendVisibility(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLegendVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLegendLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLegendLocation(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLegendLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLegendPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLegendPosition(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetLegendPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLegendFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLegendFontFamily(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLegendFontFamily(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLegendFontFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendFontFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLegendFontFile(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLegendFontFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLegendFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLegendFontSize(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLegendFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLegendBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLegendBold(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLegendBold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLegendItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLegendItalic(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLegendItalic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetGridVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetGridVisibility(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetGridVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftGridVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftGridVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftGridVisibility(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftGridVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomGridVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomGridVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomGridVisibility(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomGridVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightGridVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightGridVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightGridVisibility(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetRightGridVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopGridVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopGridVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopGridVisibility(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTopGridVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
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
      op->SetAxisColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

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
      op->SetLeftAxisColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

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
      op->SetBottomAxisColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

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
      op->SetRightAxisColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

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
      op->SetTopAxisColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetGridColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
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
      op->SetGridColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVXYChartView::SetGridColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftGridColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftGridColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

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
      op->SetLeftGridColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftGridColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomGridColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomGridColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

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
      op->SetBottomGridColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomGridColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightGridColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightGridColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

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
      op->SetRightGridColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVXYChartView::SetRightGridColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopGridColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopGridColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

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
      op->SetTopGridColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVXYChartView::SetTopGridColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelVisibility(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisLabelVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftAxisLabelVisibility(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomAxisLabelVisibility(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightAxisLabelVisibility(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopAxisLabelVisibility(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisLabelFont(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelFont");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  bool temp3 = false;
  bool temp4 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelFont(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisLabelFont(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisLabelFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelFontFamily(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisLabelFontFamily(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisLabelFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisLabelFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftAxisLabelFontFamily(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisLabelFontFamily(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisLabelFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisLabelFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomAxisLabelFontFamily(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisLabelFontFamily(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisLabelFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisLabelFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightAxisLabelFontFamily(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisLabelFontFamily(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisLabelFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisLabelFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopAxisLabelFontFamily(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisLabelFontFamily(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisLabelFontFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelFontFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelFontFile(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisLabelFontFile(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisLabelFontFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisLabelFontFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftAxisLabelFontFile(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisLabelFontFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisLabelFontFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisLabelFontFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomAxisLabelFontFile(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisLabelFontFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisLabelFontFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisLabelFontFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightAxisLabelFontFile(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisLabelFontFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisLabelFontFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisLabelFontFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopAxisLabelFontFile(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisLabelFontFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelFontSize(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisLabelFontSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftAxisLabelFontSize(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisLabelFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomAxisLabelFontSize(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisLabelFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightAxisLabelFontSize(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisLabelFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopAxisLabelFontSize(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisLabelFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisLabelBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelBold(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisLabelBold(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisLabelBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisLabelBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftAxisLabelBold(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisLabelBold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisLabelBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisLabelBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomAxisLabelBold(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisLabelBold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisLabelBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisLabelBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightAxisLabelBold(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisLabelBold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisLabelBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisLabelBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopAxisLabelBold(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisLabelBold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisLabelItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelItalic(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisLabelItalic(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisLabelItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisLabelItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftAxisLabelItalic(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisLabelItalic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisLabelItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisLabelItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomAxisLabelItalic(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisLabelItalic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisLabelItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisLabelItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightAxisLabelItalic(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisLabelItalic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisLabelItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisLabelItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopAxisLabelItalic(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisLabelItalic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
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
      op->SetAxisLabelColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisLabelColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

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
      op->SetLeftAxisLabelColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisLabelColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

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
      op->SetBottomAxisLabelColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisLabelColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

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
      op->SetRightAxisLabelColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisLabelColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

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
      op->SetTopAxisLabelColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisLabelColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisLabelNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelNotation(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisLabelNotation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisLabelNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisLabelNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftAxisLabelNotation(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisLabelNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisLabelNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisLabelNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomAxisLabelNotation(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisLabelNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisLabelNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisLabelNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightAxisLabelNotation(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisLabelNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisLabelNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisLabelNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopAxisLabelNotation(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisLabelNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisLabelPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelPrecision(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisLabelPrecision(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisLabelPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisLabelPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftAxisLabelPrecision(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisLabelPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisLabelPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisLabelPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomAxisLabelPrecision(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisLabelPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisLabelPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisLabelPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightAxisLabelPrecision(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisLabelPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisLabelPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisLabelPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopAxisLabelPrecision(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisLabelPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisRangeMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisRangeMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftAxisRangeMinimum(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisRangeMinimum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisRangeMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisRangeMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomAxisRangeMinimum(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisRangeMinimum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisRangeMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisRangeMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightAxisRangeMinimum(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisRangeMinimum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisRangeMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisRangeMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopAxisRangeMinimum(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisRangeMinimum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisRangeMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisRangeMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftAxisRangeMaximum(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisRangeMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisRangeMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisRangeMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomAxisRangeMaximum(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisRangeMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisRangeMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisRangeMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightAxisRangeMaximum(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisRangeMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisRangeMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisRangeMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopAxisRangeMaximum(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisRangeMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisUseCustomRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisUseCustomRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisUseCustomRange(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisUseCustomRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisUseCustomRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisUseCustomRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftAxisUseCustomRange(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisUseCustomRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisUseCustomRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisUseCustomRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomAxisUseCustomRange(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisUseCustomRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisUseCustomRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisUseCustomRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightAxisUseCustomRange(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisUseCustomRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisUseCustomRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisUseCustomRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopAxisUseCustomRange(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisUseCustomRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisLogScale(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisLogScale(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftAxisLogScale(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisLogScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomAxisLogScale(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisLogScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightAxisLogScale(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisLogScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopAxisLogScale(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisLogScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisTitle(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisTitle(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftAxisTitle(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomAxisTitle(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightAxisTitle(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopAxisTitle(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisTitleFont(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleFont");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  bool temp3 = false;
  bool temp4 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetAxisTitleFont(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisTitleFont(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisTitleFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisTitleFontFamily(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisTitleFontFamily(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisTitleFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisTitleFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftAxisTitleFontFamily(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisTitleFontFamily(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisTitleFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisTitleFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomAxisTitleFontFamily(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisTitleFontFamily(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisTitleFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisTitleFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightAxisTitleFontFamily(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisTitleFontFamily(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisTitleFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisTitleFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopAxisTitleFontFamily(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisTitleFontFamily(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisTitleFontFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleFontFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisTitleFontFile(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisTitleFontFile(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisTitleFontFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisTitleFontFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftAxisTitleFontFile(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisTitleFontFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisTitleFontFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisTitleFontFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomAxisTitleFontFile(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisTitleFontFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisTitleFontFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisTitleFontFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightAxisTitleFontFile(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisTitleFontFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisTitleFontFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisTitleFontFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopAxisTitleFontFile(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisTitleFontFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisTitleFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisTitleFontSize(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisTitleFontSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisTitleFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisTitleFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftAxisTitleFontSize(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisTitleFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisTitleFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisTitleFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomAxisTitleFontSize(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisTitleFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisTitleFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisTitleFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightAxisTitleFontSize(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisTitleFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisTitleFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisTitleFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopAxisTitleFontSize(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisTitleFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisTitleBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisTitleBold(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisTitleBold(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisTitleBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisTitleBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftAxisTitleBold(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisTitleBold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisTitleBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisTitleBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomAxisTitleBold(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisTitleBold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisTitleBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisTitleBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightAxisTitleBold(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisTitleBold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisTitleBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisTitleBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopAxisTitleBold(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisTitleBold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisTitleItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisTitleItalic(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisTitleItalic(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisTitleItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisTitleItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftAxisTitleItalic(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisTitleItalic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisTitleItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisTitleItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomAxisTitleItalic(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisTitleItalic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisTitleItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisTitleItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightAxisTitleItalic(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisTitleItalic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisTitleItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisTitleItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopAxisTitleItalic(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisTitleItalic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisTitleColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
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
      op->SetAxisTitleColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisTitleColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisTitleColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisTitleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

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
      op->SetLeftAxisTitleColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisTitleColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisTitleColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisTitleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

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
      op->SetBottomAxisTitleColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisTitleColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisTitleColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisTitleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

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
      op->SetRightAxisTitleColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisTitleColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisTitleColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisTitleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

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
      op->SetTopAxisTitleColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisTitleColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisUseCustomLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisUseCustomLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisUseCustomLabels(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisUseCustomLabels(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisUseCustomLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisUseCustomLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftAxisUseCustomLabels(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisUseCustomLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisUseCustomLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisUseCustomLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomAxisUseCustomLabels(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisUseCustomLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisUseCustomLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisUseCustomLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightAxisUseCustomLabels(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisUseCustomLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisUseCustomLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisUseCustomLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopAxisUseCustomLabels(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisUseCustomLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisLabelsNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelsNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelsNumber(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisLabelsNumber(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisLabelsNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisLabelsNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftAxisLabelsNumber(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisLabelsNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisLabelsNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisLabelsNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomAxisLabelsNumber(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisLabelsNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisLabelsNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisLabelsNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightAxisLabelsNumber(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisLabelsNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisLabelsNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisLabelsNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopAxisLabelsNumber(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisLabelsNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetAxisLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabels(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVXYChartView::SetAxisLabels(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetLeftAxisLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLeftAxisLabels(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetLeftAxisLabels(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetBottomAxisLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBottomAxisLabels(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetBottomAxisLabels(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetRightAxisLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRightAxisLabels(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetRightAxisLabels(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTopAxisLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTopAxisLabels(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetTopAxisLabels(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTooltipNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltipNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTooltipNotation(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTooltipNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetTooltipPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltipPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTooltipPrecision(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetTooltipPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetHideTimeMarker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHideTimeMarker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHideTimeMarker(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetHideTimeMarker(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_GetHideTimeMarker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHideTimeMarker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHideTimeMarker() :
      op->vtkPVXYChartView::GetHideTimeMarker());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_GetSortByXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortByXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSortByXAxis() :
      op->vtkPVXYChartView::GetSortByXAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetSortByXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortByXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSortByXAxis(temp0);
    }
    else
    {
      op->vtkPVXYChartView::SetSortByXAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetIgnoreNegativeLogAxisWarning(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetIgnoreNegativeLogAxisWarning");

  bool temp0 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVXYChartView::SetIgnoreNegativeLogAxisWarning(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_GetIgnoreNegativeLogAxisWarning(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetIgnoreNegativeLogAxisWarning");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkPVXYChartView::GetIgnoreNegativeLogAxisWarning();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_GetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChart *tempr = (ap.IsBound() ?
      op->GetChart() :
      op->vtkPVXYChartView::GetChart());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_GetContextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractContextItem *tempr = (ap.IsBound() ?
      op->GetContextItem() :
      op->vtkPVXYChartView::GetContextItem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_SetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  vtkChartRepresentation *temp0 = nullptr;
  vtkSelection *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkChartRepresentation") &&
      ap.GetVTKObject(temp1, "vtkSelection"))
  {
    if (ap.IsBound())
    {
      op->SetSelection(temp0, temp1);
    }
    else
    {
      op->vtkPVXYChartView::SetSelection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXYChartView_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXYChartView *op = static_cast<vtkPVXYChartView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkPVXYChartView::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVXYChartView_Methods[] = {
  {"IsTypeOf", PyvtkPVXYChartView_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVXYChartView_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVXYChartView_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVXYChartView\nC++: static vtkPVXYChartView *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVXYChartView_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVXYChartView\nC++: vtkPVXYChartView *NewInstance()\n\n"},
  {"SetChartType", PyvtkPVXYChartView_SetChartType, METH_VARARGS,
   "V.SetChartType(string)\nC++: void SetChartType(const char *type)\n\nSet the chart type, defaults to line chart\n"},
  {"SetChartTypeToLine", PyvtkPVXYChartView_SetChartTypeToLine, METH_VARARGS,
   "V.SetChartTypeToLine()\nC++: void SetChartTypeToLine()\n\n"},
  {"SetChartTypeToPoint", PyvtkPVXYChartView_SetChartTypeToPoint, METH_VARARGS,
   "V.SetChartTypeToPoint()\nC++: void SetChartTypeToPoint()\n\n"},
  {"SetChartTypeToBar", PyvtkPVXYChartView_SetChartTypeToBar, METH_VARARGS,
   "V.SetChartTypeToBar()\nC++: void SetChartTypeToBar()\n\n"},
  {"SetChartTypeToBag", PyvtkPVXYChartView_SetChartTypeToBag, METH_VARARGS,
   "V.SetChartTypeToBag()\nC++: void SetChartTypeToBag()\n\n"},
  {"SetChartTypeToBox", PyvtkPVXYChartView_SetChartTypeToBox, METH_VARARGS,
   "V.SetChartTypeToBox()\nC++: void SetChartTypeToBox()\n\n"},
  {"SetChartTypeToArea", PyvtkPVXYChartView_SetChartTypeToArea, METH_VARARGS,
   "V.SetChartTypeToArea()\nC++: void SetChartTypeToArea()\n\n"},
  {"SetChartTypeToFunctionalBag", PyvtkPVXYChartView_SetChartTypeToFunctionalBag, METH_VARARGS,
   "V.SetChartTypeToFunctionalBag()\nC++: void SetChartTypeToFunctionalBag()\n\n"},
  {"SetChartTypeToParallelCoordinates", PyvtkPVXYChartView_SetChartTypeToParallelCoordinates, METH_VARARGS,
   "V.SetChartTypeToParallelCoordinates()\nC++: void SetChartTypeToParallelCoordinates()\n\n"},
  {"SetTitle", PyvtkPVXYChartView_SetTitle, METH_VARARGS,
   "V.SetTitle(string)\nC++: void SetTitle(const char *title)\n\nSet the title of the chart. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetTitleFont", PyvtkPVXYChartView_SetTitleFont, METH_VARARGS,
   "V.SetTitleFont(string, int, bool, bool)\nC++: void SetTitleFont(const char *family, int pointSize,\n    bool bold, bool italic)\n\nSet the chart title's font. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetTitleFontFamily", PyvtkPVXYChartView_SetTitleFontFamily, METH_VARARGS,
   "V.SetTitleFontFamily(string)\nC++: void SetTitleFontFamily(const char *family)\n\nSet the chart title's font. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetTitleFontFile", PyvtkPVXYChartView_SetTitleFontFile, METH_VARARGS,
   "V.SetTitleFontFile(string)\nC++: void SetTitleFontFile(const char *file)\n\nSet the chart title's font. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetTitleFontSize", PyvtkPVXYChartView_SetTitleFontSize, METH_VARARGS,
   "V.SetTitleFontSize(int)\nC++: void SetTitleFontSize(int pointSize)\n\nSet the chart title's font. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetTitleBold", PyvtkPVXYChartView_SetTitleBold, METH_VARARGS,
   "V.SetTitleBold(bool)\nC++: void SetTitleBold(bool bold)\n\nSet the chart title's font. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetTitleItalic", PyvtkPVXYChartView_SetTitleItalic, METH_VARARGS,
   "V.SetTitleItalic(bool)\nC++: void SetTitleItalic(bool bold)\n\nSet the chart title's font. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetTitleColor", PyvtkPVXYChartView_SetTitleColor, METH_VARARGS,
   "V.SetTitleColor(float, float, float)\nC++: void SetTitleColor(double red, double green, double blue)\n\nSet the chart title's color. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetTitleAlignment", PyvtkPVXYChartView_SetTitleAlignment, METH_VARARGS,
   "V.SetTitleAlignment(int)\nC++: void SetTitleAlignment(int alignment)\n\nSet the chart title's alignment. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetLegendVisibility", PyvtkPVXYChartView_SetLegendVisibility, METH_VARARGS,
   "V.SetLegendVisibility(int)\nC++: void SetLegendVisibility(int visible)\n\nSet the legend visibility. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetLegendLocation", PyvtkPVXYChartView_SetLegendLocation, METH_VARARGS,
   "V.SetLegendLocation(int)\nC++: void SetLegendLocation(int location)\n\nSet the legend location. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetLegendPosition", PyvtkPVXYChartView_SetLegendPosition, METH_VARARGS,
   "V.SetLegendPosition(int, int)\nC++: void SetLegendPosition(int x, int y)\n\nSet the legend position.\n"},
  {"SetLegendFontFamily", PyvtkPVXYChartView_SetLegendFontFamily, METH_VARARGS,
   "V.SetLegendFontFamily(string)\nC++: void SetLegendFontFamily(const char *family)\n\nSet the legend font family.\n"},
  {"SetLegendFontFile", PyvtkPVXYChartView_SetLegendFontFile, METH_VARARGS,
   "V.SetLegendFontFile(string)\nC++: void SetLegendFontFile(const char *file)\n\nSet the legend font file.\n"},
  {"SetLegendFontSize", PyvtkPVXYChartView_SetLegendFontSize, METH_VARARGS,
   "V.SetLegendFontSize(int)\nC++: void SetLegendFontSize(int pointSize)\n\nSet the legend font size.\n"},
  {"SetLegendBold", PyvtkPVXYChartView_SetLegendBold, METH_VARARGS,
   "V.SetLegendBold(bool)\nC++: void SetLegendBold(bool bold)\n\nSet the legend font bold.\n"},
  {"SetLegendItalic", PyvtkPVXYChartView_SetLegendItalic, METH_VARARGS,
   "V.SetLegendItalic(bool)\nC++: void SetLegendItalic(bool italic)\n\nSet the legend font italic.\n"},
  {"SetGridVisibility", PyvtkPVXYChartView_SetGridVisibility, METH_VARARGS,
   "V.SetGridVisibility(int, bool)\nC++: void SetGridVisibility(int index, bool visible)\n\nSets whether or not the grid for the given axis is visible. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetLeftGridVisibility", PyvtkPVXYChartView_SetLeftGridVisibility, METH_VARARGS,
   "V.SetLeftGridVisibility(bool)\nC++: void SetLeftGridVisibility(bool value)\n\nSets whether or not the grid for the given axis is visible. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetBottomGridVisibility", PyvtkPVXYChartView_SetBottomGridVisibility, METH_VARARGS,
   "V.SetBottomGridVisibility(bool)\nC++: void SetBottomGridVisibility(bool value)\n\nSets whether or not the grid for the given axis is visible. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetRightGridVisibility", PyvtkPVXYChartView_SetRightGridVisibility, METH_VARARGS,
   "V.SetRightGridVisibility(bool)\nC++: void SetRightGridVisibility(bool value)\n\nSets whether or not the grid for the given axis is visible. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetTopGridVisibility", PyvtkPVXYChartView_SetTopGridVisibility, METH_VARARGS,
   "V.SetTopGridVisibility(bool)\nC++: void SetTopGridVisibility(bool value)\n\nSets whether or not the grid for the given axis is visible. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetAxisColor", PyvtkPVXYChartView_SetAxisColor, METH_VARARGS,
   "V.SetAxisColor(int, float, float, float)\nC++: void SetAxisColor(int index, double red, double green,\n    double blue)\n\nSets the color for the given axis. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetLeftAxisColor", PyvtkPVXYChartView_SetLeftAxisColor, METH_VARARGS,
   "V.SetLeftAxisColor(float, float, float)\nC++: void SetLeftAxisColor(double value1, double value2,\n    double value3)\n\nSets the color for the given axis. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetBottomAxisColor", PyvtkPVXYChartView_SetBottomAxisColor, METH_VARARGS,
   "V.SetBottomAxisColor(float, float, float)\nC++: void SetBottomAxisColor(double value1, double value2,\n    double value3)\n\nSets the color for the given axis. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetRightAxisColor", PyvtkPVXYChartView_SetRightAxisColor, METH_VARARGS,
   "V.SetRightAxisColor(float, float, float)\nC++: void SetRightAxisColor(double value1, double value2,\n    double value3)\n\nSets the color for the given axis. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetTopAxisColor", PyvtkPVXYChartView_SetTopAxisColor, METH_VARARGS,
   "V.SetTopAxisColor(float, float, float)\nC++: void SetTopAxisColor(double value1, double value2,\n    double value3)\n\nSets the color for the given axis. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetGridColor", PyvtkPVXYChartView_SetGridColor, METH_VARARGS,
   "V.SetGridColor(int, float, float, float)\nC++: void SetGridColor(int index, double red, double green,\n    double blue)\n\nSets the color for the given axis. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetLeftGridColor", PyvtkPVXYChartView_SetLeftGridColor, METH_VARARGS,
   "V.SetLeftGridColor(float, float, float)\nC++: void SetLeftGridColor(double value1, double value2,\n    double value3)\n\nSets the color for the given axis. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetBottomGridColor", PyvtkPVXYChartView_SetBottomGridColor, METH_VARARGS,
   "V.SetBottomGridColor(float, float, float)\nC++: void SetBottomGridColor(double value1, double value2,\n    double value3)\n\nSets the color for the given axis. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetRightGridColor", PyvtkPVXYChartView_SetRightGridColor, METH_VARARGS,
   "V.SetRightGridColor(float, float, float)\nC++: void SetRightGridColor(double value1, double value2,\n    double value3)\n\nSets the color for the given axis. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetTopGridColor", PyvtkPVXYChartView_SetTopGridColor, METH_VARARGS,
   "V.SetTopGridColor(float, float, float)\nC++: void SetTopGridColor(double value1, double value2,\n    double value3)\n\nSets the color for the given axis. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetAxisLabelVisibility", PyvtkPVXYChartView_SetAxisLabelVisibility, METH_VARARGS,
   "V.SetAxisLabelVisibility(int, bool)\nC++: void SetAxisLabelVisibility(int index, bool visible)\n\nSets whether or not the labels for the given axis are visible.\nThese methods should not be called directly. They are made public\nonly so that the client-server-stream-interpreter can invoke\nthem. Use the corresponding properties to change these values.\n"},
  {"SetLeftAxisLabelVisibility", PyvtkPVXYChartView_SetLeftAxisLabelVisibility, METH_VARARGS,
   "V.SetLeftAxisLabelVisibility(bool)\nC++: void SetLeftAxisLabelVisibility(bool value)\n\nSets whether or not the labels for the given axis are visible.\nThese methods should not be called directly. They are made public\nonly so that the client-server-stream-interpreter can invoke\nthem. Use the corresponding properties to change these values.\n"},
  {"SetBottomAxisLabelVisibility", PyvtkPVXYChartView_SetBottomAxisLabelVisibility, METH_VARARGS,
   "V.SetBottomAxisLabelVisibility(bool)\nC++: void SetBottomAxisLabelVisibility(bool value)\n\nSets whether or not the labels for the given axis are visible.\nThese methods should not be called directly. They are made public\nonly so that the client-server-stream-interpreter can invoke\nthem. Use the corresponding properties to change these values.\n"},
  {"SetRightAxisLabelVisibility", PyvtkPVXYChartView_SetRightAxisLabelVisibility, METH_VARARGS,
   "V.SetRightAxisLabelVisibility(bool)\nC++: void SetRightAxisLabelVisibility(bool value)\n\nSets whether or not the labels for the given axis are visible.\nThese methods should not be called directly. They are made public\nonly so that the client-server-stream-interpreter can invoke\nthem. Use the corresponding properties to change these values.\n"},
  {"SetTopAxisLabelVisibility", PyvtkPVXYChartView_SetTopAxisLabelVisibility, METH_VARARGS,
   "V.SetTopAxisLabelVisibility(bool)\nC++: void SetTopAxisLabelVisibility(bool value)\n\nSets whether or not the labels for the given axis are visible.\nThese methods should not be called directly. They are made public\nonly so that the client-server-stream-interpreter can invoke\nthem. Use the corresponding properties to change these values.\n"},
  {"SetAxisLabelFont", PyvtkPVXYChartView_SetAxisLabelFont, METH_VARARGS,
   "V.SetAxisLabelFont(int, string, int, bool, bool)\nC++: void SetAxisLabelFont(int index, const char *family,\n    int pointSize, bool bold, bool italic)\n\nSet the axis label font for the given axis. These methods should\nnot be called directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetAxisLabelFontFamily", PyvtkPVXYChartView_SetAxisLabelFontFamily, METH_VARARGS,
   "V.SetAxisLabelFontFamily(int, string)\nC++: void SetAxisLabelFontFamily(int index, const char *family)\n\nSet the axis label font family for the given axis.\n"},
  {"SetLeftAxisLabelFontFamily", PyvtkPVXYChartView_SetLeftAxisLabelFontFamily, METH_VARARGS,
   "V.SetLeftAxisLabelFontFamily(string)\nC++: void SetLeftAxisLabelFontFamily(const char *value)\n\nSet the axis label font family for the given axis.\n"},
  {"SetBottomAxisLabelFontFamily", PyvtkPVXYChartView_SetBottomAxisLabelFontFamily, METH_VARARGS,
   "V.SetBottomAxisLabelFontFamily(string)\nC++: void SetBottomAxisLabelFontFamily(const char *value)\n\nSet the axis label font family for the given axis.\n"},
  {"SetRightAxisLabelFontFamily", PyvtkPVXYChartView_SetRightAxisLabelFontFamily, METH_VARARGS,
   "V.SetRightAxisLabelFontFamily(string)\nC++: void SetRightAxisLabelFontFamily(const char *value)\n\nSet the axis label font family for the given axis.\n"},
  {"SetTopAxisLabelFontFamily", PyvtkPVXYChartView_SetTopAxisLabelFontFamily, METH_VARARGS,
   "V.SetTopAxisLabelFontFamily(string)\nC++: void SetTopAxisLabelFontFamily(const char *value)\n\nSet the axis label font family for the given axis.\n"},
  {"SetAxisLabelFontFile", PyvtkPVXYChartView_SetAxisLabelFontFile, METH_VARARGS,
   "V.SetAxisLabelFontFile(int, string)\nC++: void SetAxisLabelFontFile(int index, const char *file)\n\nSet the axis label font file for the given axis.\n"},
  {"SetLeftAxisLabelFontFile", PyvtkPVXYChartView_SetLeftAxisLabelFontFile, METH_VARARGS,
   "V.SetLeftAxisLabelFontFile(string)\nC++: void SetLeftAxisLabelFontFile(const char *value)\n\nSet the axis label font file for the given axis.\n"},
  {"SetBottomAxisLabelFontFile", PyvtkPVXYChartView_SetBottomAxisLabelFontFile, METH_VARARGS,
   "V.SetBottomAxisLabelFontFile(string)\nC++: void SetBottomAxisLabelFontFile(const char *value)\n\nSet the axis label font file for the given axis.\n"},
  {"SetRightAxisLabelFontFile", PyvtkPVXYChartView_SetRightAxisLabelFontFile, METH_VARARGS,
   "V.SetRightAxisLabelFontFile(string)\nC++: void SetRightAxisLabelFontFile(const char *value)\n\nSet the axis label font file for the given axis.\n"},
  {"SetTopAxisLabelFontFile", PyvtkPVXYChartView_SetTopAxisLabelFontFile, METH_VARARGS,
   "V.SetTopAxisLabelFontFile(string)\nC++: void SetTopAxisLabelFontFile(const char *value)\n\nSet the axis label font file for the given axis.\n"},
  {"SetAxisLabelFontSize", PyvtkPVXYChartView_SetAxisLabelFontSize, METH_VARARGS,
   "V.SetAxisLabelFontSize(int, int)\nC++: void SetAxisLabelFontSize(int index, int pointSize)\n\nSet the axis label font size for the given axis.\n"},
  {"SetLeftAxisLabelFontSize", PyvtkPVXYChartView_SetLeftAxisLabelFontSize, METH_VARARGS,
   "V.SetLeftAxisLabelFontSize(int)\nC++: void SetLeftAxisLabelFontSize(int value)\n\nSet the axis label font size for the given axis.\n"},
  {"SetBottomAxisLabelFontSize", PyvtkPVXYChartView_SetBottomAxisLabelFontSize, METH_VARARGS,
   "V.SetBottomAxisLabelFontSize(int)\nC++: void SetBottomAxisLabelFontSize(int value)\n\nSet the axis label font size for the given axis.\n"},
  {"SetRightAxisLabelFontSize", PyvtkPVXYChartView_SetRightAxisLabelFontSize, METH_VARARGS,
   "V.SetRightAxisLabelFontSize(int)\nC++: void SetRightAxisLabelFontSize(int value)\n\nSet the axis label font size for the given axis.\n"},
  {"SetTopAxisLabelFontSize", PyvtkPVXYChartView_SetTopAxisLabelFontSize, METH_VARARGS,
   "V.SetTopAxisLabelFontSize(int)\nC++: void SetTopAxisLabelFontSize(int value)\n\nSet the axis label font size for the given axis.\n"},
  {"SetAxisLabelBold", PyvtkPVXYChartView_SetAxisLabelBold, METH_VARARGS,
   "V.SetAxisLabelBold(int, bool)\nC++: void SetAxisLabelBold(int index, bool bold)\n\nSet the axis label font bold for the given axis.\n"},
  {"SetLeftAxisLabelBold", PyvtkPVXYChartView_SetLeftAxisLabelBold, METH_VARARGS,
   "V.SetLeftAxisLabelBold(bool)\nC++: void SetLeftAxisLabelBold(bool value)\n\nSet the axis label font bold for the given axis.\n"},
  {"SetBottomAxisLabelBold", PyvtkPVXYChartView_SetBottomAxisLabelBold, METH_VARARGS,
   "V.SetBottomAxisLabelBold(bool)\nC++: void SetBottomAxisLabelBold(bool value)\n\nSet the axis label font bold for the given axis.\n"},
  {"SetRightAxisLabelBold", PyvtkPVXYChartView_SetRightAxisLabelBold, METH_VARARGS,
   "V.SetRightAxisLabelBold(bool)\nC++: void SetRightAxisLabelBold(bool value)\n\nSet the axis label font bold for the given axis.\n"},
  {"SetTopAxisLabelBold", PyvtkPVXYChartView_SetTopAxisLabelBold, METH_VARARGS,
   "V.SetTopAxisLabelBold(bool)\nC++: void SetTopAxisLabelBold(bool value)\n\nSet the axis label font bold for the given axis.\n"},
  {"SetAxisLabelItalic", PyvtkPVXYChartView_SetAxisLabelItalic, METH_VARARGS,
   "V.SetAxisLabelItalic(int, bool)\nC++: void SetAxisLabelItalic(int index, bool italic)\n\nSet the axis label font italic for the given axis.\n"},
  {"SetLeftAxisLabelItalic", PyvtkPVXYChartView_SetLeftAxisLabelItalic, METH_VARARGS,
   "V.SetLeftAxisLabelItalic(bool)\nC++: void SetLeftAxisLabelItalic(bool value)\n\nSet the axis label font italic for the given axis.\n"},
  {"SetBottomAxisLabelItalic", PyvtkPVXYChartView_SetBottomAxisLabelItalic, METH_VARARGS,
   "V.SetBottomAxisLabelItalic(bool)\nC++: void SetBottomAxisLabelItalic(bool value)\n\nSet the axis label font italic for the given axis.\n"},
  {"SetRightAxisLabelItalic", PyvtkPVXYChartView_SetRightAxisLabelItalic, METH_VARARGS,
   "V.SetRightAxisLabelItalic(bool)\nC++: void SetRightAxisLabelItalic(bool value)\n\nSet the axis label font italic for the given axis.\n"},
  {"SetTopAxisLabelItalic", PyvtkPVXYChartView_SetTopAxisLabelItalic, METH_VARARGS,
   "V.SetTopAxisLabelItalic(bool)\nC++: void SetTopAxisLabelItalic(bool value)\n\nSet the axis label font italic for the given axis.\n"},
  {"SetAxisLabelColor", PyvtkPVXYChartView_SetAxisLabelColor, METH_VARARGS,
   "V.SetAxisLabelColor(int, float, float, float)\nC++: void SetAxisLabelColor(int index, double red, double green,\n    double blue)\n\nSets the axis label color for the given axis. These methods\nshould not be called directly. They are made public only so that\nthe client-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetLeftAxisLabelColor", PyvtkPVXYChartView_SetLeftAxisLabelColor, METH_VARARGS,
   "V.SetLeftAxisLabelColor(float, float, float)\nC++: void SetLeftAxisLabelColor(double value1, double value2,\n    double value3)\n\nSets the axis label color for the given axis. These methods\nshould not be called directly. They are made public only so that\nthe client-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetBottomAxisLabelColor", PyvtkPVXYChartView_SetBottomAxisLabelColor, METH_VARARGS,
   "V.SetBottomAxisLabelColor(float, float, float)\nC++: void SetBottomAxisLabelColor(double value1, double value2,\n    double value3)\n\nSets the axis label color for the given axis. These methods\nshould not be called directly. They are made public only so that\nthe client-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetRightAxisLabelColor", PyvtkPVXYChartView_SetRightAxisLabelColor, METH_VARARGS,
   "V.SetRightAxisLabelColor(float, float, float)\nC++: void SetRightAxisLabelColor(double value1, double value2,\n    double value3)\n\nSets the axis label color for the given axis. These methods\nshould not be called directly. They are made public only so that\nthe client-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetTopAxisLabelColor", PyvtkPVXYChartView_SetTopAxisLabelColor, METH_VARARGS,
   "V.SetTopAxisLabelColor(float, float, float)\nC++: void SetTopAxisLabelColor(double value1, double value2,\n    double value3)\n\nSets the axis label color for the given axis. These methods\nshould not be called directly. They are made public only so that\nthe client-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetAxisLabelNotation", PyvtkPVXYChartView_SetAxisLabelNotation, METH_VARARGS,
   "V.SetAxisLabelNotation(int, int)\nC++: void SetAxisLabelNotation(int index, int notation)\n\nSets the axis label notation for the given axis. These methods\nshould not be called directly. They are made public only so that\nthe client-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetLeftAxisLabelNotation", PyvtkPVXYChartView_SetLeftAxisLabelNotation, METH_VARARGS,
   "V.SetLeftAxisLabelNotation(int)\nC++: void SetLeftAxisLabelNotation(int value)\n\nSets the axis label notation for the given axis. These methods\nshould not be called directly. They are made public only so that\nthe client-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetBottomAxisLabelNotation", PyvtkPVXYChartView_SetBottomAxisLabelNotation, METH_VARARGS,
   "V.SetBottomAxisLabelNotation(int)\nC++: void SetBottomAxisLabelNotation(int value)\n\nSets the axis label notation for the given axis. These methods\nshould not be called directly. They are made public only so that\nthe client-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetRightAxisLabelNotation", PyvtkPVXYChartView_SetRightAxisLabelNotation, METH_VARARGS,
   "V.SetRightAxisLabelNotation(int)\nC++: void SetRightAxisLabelNotation(int value)\n\nSets the axis label notation for the given axis. These methods\nshould not be called directly. They are made public only so that\nthe client-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetTopAxisLabelNotation", PyvtkPVXYChartView_SetTopAxisLabelNotation, METH_VARARGS,
   "V.SetTopAxisLabelNotation(int)\nC++: void SetTopAxisLabelNotation(int value)\n\nSets the axis label notation for the given axis. These methods\nshould not be called directly. They are made public only so that\nthe client-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetAxisLabelPrecision", PyvtkPVXYChartView_SetAxisLabelPrecision, METH_VARARGS,
   "V.SetAxisLabelPrecision(int, int)\nC++: void SetAxisLabelPrecision(int index, int precision)\n\nSets the axis label precision for the given axis. These methods\nshould not be called directly. They are made public only so that\nthe client-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetLeftAxisLabelPrecision", PyvtkPVXYChartView_SetLeftAxisLabelPrecision, METH_VARARGS,
   "V.SetLeftAxisLabelPrecision(int)\nC++: void SetLeftAxisLabelPrecision(int value)\n\nSets the axis label precision for the given axis. These methods\nshould not be called directly. They are made public only so that\nthe client-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetBottomAxisLabelPrecision", PyvtkPVXYChartView_SetBottomAxisLabelPrecision, METH_VARARGS,
   "V.SetBottomAxisLabelPrecision(int)\nC++: void SetBottomAxisLabelPrecision(int value)\n\nSets the axis label precision for the given axis. These methods\nshould not be called directly. They are made public only so that\nthe client-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetRightAxisLabelPrecision", PyvtkPVXYChartView_SetRightAxisLabelPrecision, METH_VARARGS,
   "V.SetRightAxisLabelPrecision(int)\nC++: void SetRightAxisLabelPrecision(int value)\n\nSets the axis label precision for the given axis. These methods\nshould not be called directly. They are made public only so that\nthe client-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetTopAxisLabelPrecision", PyvtkPVXYChartView_SetTopAxisLabelPrecision, METH_VARARGS,
   "V.SetTopAxisLabelPrecision(int)\nC++: void SetTopAxisLabelPrecision(int value)\n\nSets the axis label precision for the given axis. These methods\nshould not be called directly. They are made public only so that\nthe client-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetLeftAxisRangeMinimum", PyvtkPVXYChartView_SetLeftAxisRangeMinimum, METH_VARARGS,
   "V.SetLeftAxisRangeMinimum(float)\nC++: void SetLeftAxisRangeMinimum(double value)\n\nFor axis ranges, ParaView overrides the VTK charts behavior.\nUsers can either specify an explicit range or let the VTK chart\ndetermine the range based on the data. To specify a range\nexplicitly, users should use SetAxisUseCustomRange() to on for\nthe corresponding axis and then use these methods to set the\nranges. Note these ranges are only respected when the\ncorresponding AxisUseCustomRange flag it set.\n"},
  {"SetBottomAxisRangeMinimum", PyvtkPVXYChartView_SetBottomAxisRangeMinimum, METH_VARARGS,
   "V.SetBottomAxisRangeMinimum(float)\nC++: void SetBottomAxisRangeMinimum(double value)\n\nFor axis ranges, ParaView overrides the VTK charts behavior.\nUsers can either specify an explicit range or let the VTK chart\ndetermine the range based on the data. To specify a range\nexplicitly, users should use SetAxisUseCustomRange() to on for\nthe corresponding axis and then use these methods to set the\nranges. Note these ranges are only respected when the\ncorresponding AxisUseCustomRange flag it set.\n"},
  {"SetRightAxisRangeMinimum", PyvtkPVXYChartView_SetRightAxisRangeMinimum, METH_VARARGS,
   "V.SetRightAxisRangeMinimum(float)\nC++: void SetRightAxisRangeMinimum(double value)\n\nFor axis ranges, ParaView overrides the VTK charts behavior.\nUsers can either specify an explicit range or let the VTK chart\ndetermine the range based on the data. To specify a range\nexplicitly, users should use SetAxisUseCustomRange() to on for\nthe corresponding axis and then use these methods to set the\nranges. Note these ranges are only respected when the\ncorresponding AxisUseCustomRange flag it set.\n"},
  {"SetTopAxisRangeMinimum", PyvtkPVXYChartView_SetTopAxisRangeMinimum, METH_VARARGS,
   "V.SetTopAxisRangeMinimum(float)\nC++: void SetTopAxisRangeMinimum(double value)\n\nFor axis ranges, ParaView overrides the VTK charts behavior.\nUsers can either specify an explicit range or let the VTK chart\ndetermine the range based on the data. To specify a range\nexplicitly, users should use SetAxisUseCustomRange() to on for\nthe corresponding axis and then use these methods to set the\nranges. Note these ranges are only respected when the\ncorresponding AxisUseCustomRange flag it set.\n"},
  {"SetLeftAxisRangeMaximum", PyvtkPVXYChartView_SetLeftAxisRangeMaximum, METH_VARARGS,
   "V.SetLeftAxisRangeMaximum(float)\nC++: void SetLeftAxisRangeMaximum(double value)\n\nFor axis ranges, ParaView overrides the VTK charts behavior.\nUsers can either specify an explicit range or let the VTK chart\ndetermine the range based on the data. To specify a range\nexplicitly, users should use SetAxisUseCustomRange() to on for\nthe corresponding axis and then use these methods to set the\nranges. Note these ranges are only respected when the\ncorresponding AxisUseCustomRange flag it set.\n"},
  {"SetBottomAxisRangeMaximum", PyvtkPVXYChartView_SetBottomAxisRangeMaximum, METH_VARARGS,
   "V.SetBottomAxisRangeMaximum(float)\nC++: void SetBottomAxisRangeMaximum(double value)\n\nFor axis ranges, ParaView overrides the VTK charts behavior.\nUsers can either specify an explicit range or let the VTK chart\ndetermine the range based on the data. To specify a range\nexplicitly, users should use SetAxisUseCustomRange() to on for\nthe corresponding axis and then use these methods to set the\nranges. Note these ranges are only respected when the\ncorresponding AxisUseCustomRange flag it set.\n"},
  {"SetRightAxisRangeMaximum", PyvtkPVXYChartView_SetRightAxisRangeMaximum, METH_VARARGS,
   "V.SetRightAxisRangeMaximum(float)\nC++: void SetRightAxisRangeMaximum(double value)\n\nFor axis ranges, ParaView overrides the VTK charts behavior.\nUsers can either specify an explicit range or let the VTK chart\ndetermine the range based on the data. To specify a range\nexplicitly, users should use SetAxisUseCustomRange() to on for\nthe corresponding axis and then use these methods to set the\nranges. Note these ranges are only respected when the\ncorresponding AxisUseCustomRange flag it set.\n"},
  {"SetTopAxisRangeMaximum", PyvtkPVXYChartView_SetTopAxisRangeMaximum, METH_VARARGS,
   "V.SetTopAxisRangeMaximum(float)\nC++: void SetTopAxisRangeMaximum(double value)\n\nFor axis ranges, ParaView overrides the VTK charts behavior.\nUsers can either specify an explicit range or let the VTK chart\ndetermine the range based on the data. To specify a range\nexplicitly, users should use SetAxisUseCustomRange() to on for\nthe corresponding axis and then use these methods to set the\nranges. Note these ranges are only respected when the\ncorresponding AxisUseCustomRange flag it set.\n"},
  {"SetAxisUseCustomRange", PyvtkPVXYChartView_SetAxisUseCustomRange, METH_VARARGS,
   "V.SetAxisUseCustomRange(int, bool)\nC++: void SetAxisUseCustomRange(int index, bool useCustomRange)\n\nSet whether to use the range specified by SetAxisRange(..) (or\nvariants) or to let the chart determine the range automatically\nbased on the data being shown.\n"},
  {"SetLeftAxisUseCustomRange", PyvtkPVXYChartView_SetLeftAxisUseCustomRange, METH_VARARGS,
   "V.SetLeftAxisUseCustomRange(bool)\nC++: void SetLeftAxisUseCustomRange(bool value)\n\nSet whether to use the range specified by SetAxisRange(..) (or\nvariants) or to let the chart determine the range automatically\nbased on the data being shown.\n"},
  {"SetBottomAxisUseCustomRange", PyvtkPVXYChartView_SetBottomAxisUseCustomRange, METH_VARARGS,
   "V.SetBottomAxisUseCustomRange(bool)\nC++: void SetBottomAxisUseCustomRange(bool value)\n\nSet whether to use the range specified by SetAxisRange(..) (or\nvariants) or to let the chart determine the range automatically\nbased on the data being shown.\n"},
  {"SetRightAxisUseCustomRange", PyvtkPVXYChartView_SetRightAxisUseCustomRange, METH_VARARGS,
   "V.SetRightAxisUseCustomRange(bool)\nC++: void SetRightAxisUseCustomRange(bool value)\n\nSet whether to use the range specified by SetAxisRange(..) (or\nvariants) or to let the chart determine the range automatically\nbased on the data being shown.\n"},
  {"SetTopAxisUseCustomRange", PyvtkPVXYChartView_SetTopAxisUseCustomRange, METH_VARARGS,
   "V.SetTopAxisUseCustomRange(bool)\nC++: void SetTopAxisUseCustomRange(bool value)\n\nSet whether to use the range specified by SetAxisRange(..) (or\nvariants) or to let the chart determine the range automatically\nbased on the data being shown.\n"},
  {"SetAxisLogScale", PyvtkPVXYChartView_SetAxisLogScale, METH_VARARGS,
   "V.SetAxisLogScale(int, bool)\nC++: void SetAxisLogScale(int index, bool logScale)\n\nSets whether or not the given axis uses a log10 scale. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetLeftAxisLogScale", PyvtkPVXYChartView_SetLeftAxisLogScale, METH_VARARGS,
   "V.SetLeftAxisLogScale(bool)\nC++: void SetLeftAxisLogScale(bool value)\n\nSets whether or not the given axis uses a log10 scale. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetBottomAxisLogScale", PyvtkPVXYChartView_SetBottomAxisLogScale, METH_VARARGS,
   "V.SetBottomAxisLogScale(bool)\nC++: void SetBottomAxisLogScale(bool value)\n\nSets whether or not the given axis uses a log10 scale. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetRightAxisLogScale", PyvtkPVXYChartView_SetRightAxisLogScale, METH_VARARGS,
   "V.SetRightAxisLogScale(bool)\nC++: void SetRightAxisLogScale(bool value)\n\nSets whether or not the given axis uses a log10 scale. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetTopAxisLogScale", PyvtkPVXYChartView_SetTopAxisLogScale, METH_VARARGS,
   "V.SetTopAxisLogScale(bool)\nC++: void SetTopAxisLogScale(bool value)\n\nSets whether or not the given axis uses a log10 scale. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetAxisTitle", PyvtkPVXYChartView_SetAxisTitle, METH_VARARGS,
   "V.SetAxisTitle(int, string)\nC++: void SetAxisTitle(int index, const char *title)\n\nSet the chart axis title for the given index. These methods\nshould not be called directly. They are made public only so that\nthe client-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetLeftAxisTitle", PyvtkPVXYChartView_SetLeftAxisTitle, METH_VARARGS,
   "V.SetLeftAxisTitle(string)\nC++: void SetLeftAxisTitle(const char *value)\n\nSet the chart axis title for the given index. These methods\nshould not be called directly. They are made public only so that\nthe client-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetBottomAxisTitle", PyvtkPVXYChartView_SetBottomAxisTitle, METH_VARARGS,
   "V.SetBottomAxisTitle(string)\nC++: void SetBottomAxisTitle(const char *value)\n\nSet the chart axis title for the given index. These methods\nshould not be called directly. They are made public only so that\nthe client-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetRightAxisTitle", PyvtkPVXYChartView_SetRightAxisTitle, METH_VARARGS,
   "V.SetRightAxisTitle(string)\nC++: void SetRightAxisTitle(const char *value)\n\nSet the chart axis title for the given index. These methods\nshould not be called directly. They are made public only so that\nthe client-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetTopAxisTitle", PyvtkPVXYChartView_SetTopAxisTitle, METH_VARARGS,
   "V.SetTopAxisTitle(string)\nC++: void SetTopAxisTitle(const char *value)\n\nSet the chart axis title for the given index. These methods\nshould not be called directly. They are made public only so that\nthe client-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetAxisTitleFont", PyvtkPVXYChartView_SetAxisTitleFont, METH_VARARGS,
   "V.SetAxisTitleFont(int, string, int, bool, bool)\nC++: void SetAxisTitleFont(int index, const char *family,\n    int pointSize, bool bold, bool italic)\n\nSet the chart axis title's font for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetAxisTitleFontFamily", PyvtkPVXYChartView_SetAxisTitleFontFamily, METH_VARARGS,
   "V.SetAxisTitleFontFamily(int, string)\nC++: void SetAxisTitleFontFamily(int index, const char *family)\n\nSet the chart axis title's font family for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetLeftAxisTitleFontFamily", PyvtkPVXYChartView_SetLeftAxisTitleFontFamily, METH_VARARGS,
   "V.SetLeftAxisTitleFontFamily(string)\nC++: void SetLeftAxisTitleFontFamily(const char *value)\n\nSet the chart axis title's font family for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetBottomAxisTitleFontFamily", PyvtkPVXYChartView_SetBottomAxisTitleFontFamily, METH_VARARGS,
   "V.SetBottomAxisTitleFontFamily(string)\nC++: void SetBottomAxisTitleFontFamily(const char *value)\n\nSet the chart axis title's font family for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetRightAxisTitleFontFamily", PyvtkPVXYChartView_SetRightAxisTitleFontFamily, METH_VARARGS,
   "V.SetRightAxisTitleFontFamily(string)\nC++: void SetRightAxisTitleFontFamily(const char *value)\n\nSet the chart axis title's font family for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetTopAxisTitleFontFamily", PyvtkPVXYChartView_SetTopAxisTitleFontFamily, METH_VARARGS,
   "V.SetTopAxisTitleFontFamily(string)\nC++: void SetTopAxisTitleFontFamily(const char *value)\n\nSet the chart axis title's font family for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetAxisTitleFontFile", PyvtkPVXYChartView_SetAxisTitleFontFile, METH_VARARGS,
   "V.SetAxisTitleFontFile(int, string)\nC++: void SetAxisTitleFontFile(int index, const char *file)\n\nSet the chart axis title's font file for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetLeftAxisTitleFontFile", PyvtkPVXYChartView_SetLeftAxisTitleFontFile, METH_VARARGS,
   "V.SetLeftAxisTitleFontFile(string)\nC++: void SetLeftAxisTitleFontFile(const char *value)\n\nSet the chart axis title's font file for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetBottomAxisTitleFontFile", PyvtkPVXYChartView_SetBottomAxisTitleFontFile, METH_VARARGS,
   "V.SetBottomAxisTitleFontFile(string)\nC++: void SetBottomAxisTitleFontFile(const char *value)\n\nSet the chart axis title's font file for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetRightAxisTitleFontFile", PyvtkPVXYChartView_SetRightAxisTitleFontFile, METH_VARARGS,
   "V.SetRightAxisTitleFontFile(string)\nC++: void SetRightAxisTitleFontFile(const char *value)\n\nSet the chart axis title's font file for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetTopAxisTitleFontFile", PyvtkPVXYChartView_SetTopAxisTitleFontFile, METH_VARARGS,
   "V.SetTopAxisTitleFontFile(string)\nC++: void SetTopAxisTitleFontFile(const char *value)\n\nSet the chart axis title's font file for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetAxisTitleFontSize", PyvtkPVXYChartView_SetAxisTitleFontSize, METH_VARARGS,
   "V.SetAxisTitleFontSize(int, int)\nC++: void SetAxisTitleFontSize(int index, int pointSize)\n\nSet the chart axis title's font size for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetLeftAxisTitleFontSize", PyvtkPVXYChartView_SetLeftAxisTitleFontSize, METH_VARARGS,
   "V.SetLeftAxisTitleFontSize(int)\nC++: void SetLeftAxisTitleFontSize(int value)\n\nSet the chart axis title's font size for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetBottomAxisTitleFontSize", PyvtkPVXYChartView_SetBottomAxisTitleFontSize, METH_VARARGS,
   "V.SetBottomAxisTitleFontSize(int)\nC++: void SetBottomAxisTitleFontSize(int value)\n\nSet the chart axis title's font size for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetRightAxisTitleFontSize", PyvtkPVXYChartView_SetRightAxisTitleFontSize, METH_VARARGS,
   "V.SetRightAxisTitleFontSize(int)\nC++: void SetRightAxisTitleFontSize(int value)\n\nSet the chart axis title's font size for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetTopAxisTitleFontSize", PyvtkPVXYChartView_SetTopAxisTitleFontSize, METH_VARARGS,
   "V.SetTopAxisTitleFontSize(int)\nC++: void SetTopAxisTitleFontSize(int value)\n\nSet the chart axis title's font size for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetAxisTitleBold", PyvtkPVXYChartView_SetAxisTitleBold, METH_VARARGS,
   "V.SetAxisTitleBold(int, bool)\nC++: void SetAxisTitleBold(int index, bool bold)\n\nSet the chart axis title's font bold for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetLeftAxisTitleBold", PyvtkPVXYChartView_SetLeftAxisTitleBold, METH_VARARGS,
   "V.SetLeftAxisTitleBold(bool)\nC++: void SetLeftAxisTitleBold(bool value)\n\nSet the chart axis title's font bold for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetBottomAxisTitleBold", PyvtkPVXYChartView_SetBottomAxisTitleBold, METH_VARARGS,
   "V.SetBottomAxisTitleBold(bool)\nC++: void SetBottomAxisTitleBold(bool value)\n\nSet the chart axis title's font bold for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetRightAxisTitleBold", PyvtkPVXYChartView_SetRightAxisTitleBold, METH_VARARGS,
   "V.SetRightAxisTitleBold(bool)\nC++: void SetRightAxisTitleBold(bool value)\n\nSet the chart axis title's font bold for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetTopAxisTitleBold", PyvtkPVXYChartView_SetTopAxisTitleBold, METH_VARARGS,
   "V.SetTopAxisTitleBold(bool)\nC++: void SetTopAxisTitleBold(bool value)\n\nSet the chart axis title's font bold for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetAxisTitleItalic", PyvtkPVXYChartView_SetAxisTitleItalic, METH_VARARGS,
   "V.SetAxisTitleItalic(int, bool)\nC++: void SetAxisTitleItalic(int index, bool italic)\n\nSet the chart axis title's font italic for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetLeftAxisTitleItalic", PyvtkPVXYChartView_SetLeftAxisTitleItalic, METH_VARARGS,
   "V.SetLeftAxisTitleItalic(bool)\nC++: void SetLeftAxisTitleItalic(bool value)\n\nSet the chart axis title's font italic for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetBottomAxisTitleItalic", PyvtkPVXYChartView_SetBottomAxisTitleItalic, METH_VARARGS,
   "V.SetBottomAxisTitleItalic(bool)\nC++: void SetBottomAxisTitleItalic(bool value)\n\nSet the chart axis title's font italic for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetRightAxisTitleItalic", PyvtkPVXYChartView_SetRightAxisTitleItalic, METH_VARARGS,
   "V.SetRightAxisTitleItalic(bool)\nC++: void SetRightAxisTitleItalic(bool value)\n\nSet the chart axis title's font italic for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetTopAxisTitleItalic", PyvtkPVXYChartView_SetTopAxisTitleItalic, METH_VARARGS,
   "V.SetTopAxisTitleItalic(bool)\nC++: void SetTopAxisTitleItalic(bool value)\n\nSet the chart axis title's font italic for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetAxisTitleColor", PyvtkPVXYChartView_SetAxisTitleColor, METH_VARARGS,
   "V.SetAxisTitleColor(int, float, float, float)\nC++: void SetAxisTitleColor(int index, double red, double green,\n    double blue)\n\nSet the chart axis title's color for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetLeftAxisTitleColor", PyvtkPVXYChartView_SetLeftAxisTitleColor, METH_VARARGS,
   "V.SetLeftAxisTitleColor(float, float, float)\nC++: void SetLeftAxisTitleColor(double value1, double value2,\n    double value3)\n\nSet the chart axis title's color for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetBottomAxisTitleColor", PyvtkPVXYChartView_SetBottomAxisTitleColor, METH_VARARGS,
   "V.SetBottomAxisTitleColor(float, float, float)\nC++: void SetBottomAxisTitleColor(double value1, double value2,\n    double value3)\n\nSet the chart axis title's color for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetRightAxisTitleColor", PyvtkPVXYChartView_SetRightAxisTitleColor, METH_VARARGS,
   "V.SetRightAxisTitleColor(float, float, float)\nC++: void SetRightAxisTitleColor(double value1, double value2,\n    double value3)\n\nSet the chart axis title's color for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetTopAxisTitleColor", PyvtkPVXYChartView_SetTopAxisTitleColor, METH_VARARGS,
   "V.SetTopAxisTitleColor(float, float, float)\nC++: void SetTopAxisTitleColor(double value1, double value2,\n    double value3)\n\nSet the chart axis title's color for the given index. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetAxisUseCustomLabels", PyvtkPVXYChartView_SetAxisUseCustomLabels, METH_VARARGS,
   "V.SetAxisUseCustomLabels(int, bool)\nC++: void SetAxisUseCustomLabels(int index, bool useCustomLabels)\n\nSet whether the chart uses custom labels or if the labels/ticks\nare placed automatically.\n"},
  {"SetLeftAxisUseCustomLabels", PyvtkPVXYChartView_SetLeftAxisUseCustomLabels, METH_VARARGS,
   "V.SetLeftAxisUseCustomLabels(bool)\nC++: void SetLeftAxisUseCustomLabels(bool value)\n\nSet whether the chart uses custom labels or if the labels/ticks\nare placed automatically.\n"},
  {"SetBottomAxisUseCustomLabels", PyvtkPVXYChartView_SetBottomAxisUseCustomLabels, METH_VARARGS,
   "V.SetBottomAxisUseCustomLabels(bool)\nC++: void SetBottomAxisUseCustomLabels(bool value)\n\nSet whether the chart uses custom labels or if the labels/ticks\nare placed automatically.\n"},
  {"SetRightAxisUseCustomLabels", PyvtkPVXYChartView_SetRightAxisUseCustomLabels, METH_VARARGS,
   "V.SetRightAxisUseCustomLabels(bool)\nC++: void SetRightAxisUseCustomLabels(bool value)\n\nSet whether the chart uses custom labels or if the labels/ticks\nare placed automatically.\n"},
  {"SetTopAxisUseCustomLabels", PyvtkPVXYChartView_SetTopAxisUseCustomLabels, METH_VARARGS,
   "V.SetTopAxisUseCustomLabels(bool)\nC++: void SetTopAxisUseCustomLabels(bool value)\n\nSet whether the chart uses custom labels or if the labels/ticks\nare placed automatically.\n"},
  {"SetAxisLabelsNumber", PyvtkPVXYChartView_SetAxisLabelsNumber, METH_VARARGS,
   "V.SetAxisLabelsNumber(int, int)\nC++: void SetAxisLabelsNumber(int axis, int number)\n\nSet the number of labels for the supplied axis.\n"},
  {"SetLeftAxisLabelsNumber", PyvtkPVXYChartView_SetLeftAxisLabelsNumber, METH_VARARGS,
   "V.SetLeftAxisLabelsNumber(int)\nC++: void SetLeftAxisLabelsNumber(int value)\n\nSet the number of labels for the supplied axis.\n"},
  {"SetBottomAxisLabelsNumber", PyvtkPVXYChartView_SetBottomAxisLabelsNumber, METH_VARARGS,
   "V.SetBottomAxisLabelsNumber(int)\nC++: void SetBottomAxisLabelsNumber(int value)\n\nSet the number of labels for the supplied axis.\n"},
  {"SetRightAxisLabelsNumber", PyvtkPVXYChartView_SetRightAxisLabelsNumber, METH_VARARGS,
   "V.SetRightAxisLabelsNumber(int)\nC++: void SetRightAxisLabelsNumber(int value)\n\nSet the number of labels for the supplied axis.\n"},
  {"SetTopAxisLabelsNumber", PyvtkPVXYChartView_SetTopAxisLabelsNumber, METH_VARARGS,
   "V.SetTopAxisLabelsNumber(int)\nC++: void SetTopAxisLabelsNumber(int value)\n\nSet the number of labels for the supplied axis.\n"},
  {"SetAxisLabels", PyvtkPVXYChartView_SetAxisLabels, METH_VARARGS,
   "V.SetAxisLabels(int, int, float)\nC++: void SetAxisLabels(int axis, int index, double value)\n\nSet the axis label positions for the supplied axis at the given\nindex.\n"},
  {"SetLeftAxisLabels", PyvtkPVXYChartView_SetLeftAxisLabels, METH_VARARGS,
   "V.SetLeftAxisLabels(int, float)\nC++: void SetLeftAxisLabels(int value1, double value2)\n\nSet the axis label positions for the supplied axis at the given\nindex.\n"},
  {"SetBottomAxisLabels", PyvtkPVXYChartView_SetBottomAxisLabels, METH_VARARGS,
   "V.SetBottomAxisLabels(int, float)\nC++: void SetBottomAxisLabels(int value1, double value2)\n\nSet the axis label positions for the supplied axis at the given\nindex.\n"},
  {"SetRightAxisLabels", PyvtkPVXYChartView_SetRightAxisLabels, METH_VARARGS,
   "V.SetRightAxisLabels(int, float)\nC++: void SetRightAxisLabels(int value1, double value2)\n\nSet the axis label positions for the supplied axis at the given\nindex.\n"},
  {"SetTopAxisLabels", PyvtkPVXYChartView_SetTopAxisLabels, METH_VARARGS,
   "V.SetTopAxisLabels(int, float)\nC++: void SetTopAxisLabels(int value1, double value2)\n\nSet the axis label positions for the supplied axis at the given\nindex.\n"},
  {"SetTooltipNotation", PyvtkPVXYChartView_SetTooltipNotation, METH_VARARGS,
   "V.SetTooltipNotation(int)\nC++: void SetTooltipNotation(int notation)\n\n"},
  {"SetTooltipPrecision", PyvtkPVXYChartView_SetTooltipPrecision, METH_VARARGS,
   "V.SetTooltipPrecision(int)\nC++: void SetTooltipPrecision(int precision)\n\n"},
  {"SetHideTimeMarker", PyvtkPVXYChartView_SetHideTimeMarker, METH_VARARGS,
   "V.SetHideTimeMarker(bool)\nC++: virtual void SetHideTimeMarker(bool _arg)\n\nSet the visibility for the time-marker in the view. Note, you\ncannot force the time-marker to be shown. One can only hide it\nwhen the view would have shown it otherwise.\n"},
  {"GetHideTimeMarker", PyvtkPVXYChartView_GetHideTimeMarker, METH_VARARGS,
   "V.GetHideTimeMarker() -> bool\nC++: virtual bool GetHideTimeMarker()\n\nSet the visibility for the time-marker in the view. Note, you\ncannot force the time-marker to be shown. One can only hide it\nwhen the view would have shown it otherwise.\n"},
  {"GetSortByXAxis", PyvtkPVXYChartView_GetSortByXAxis, METH_VARARGS,
   "V.GetSortByXAxis() -> bool\nC++: virtual bool GetSortByXAxis()\n\nSet whether to sort the data in the chart by the x-axis array so\nthat line plot connectivity is from left to right rather than\nsemi-randomly by index.\n"},
  {"SetSortByXAxis", PyvtkPVXYChartView_SetSortByXAxis, METH_VARARGS,
   "V.SetSortByXAxis(bool)\nC++: virtual void SetSortByXAxis(bool _arg)\n\nSet whether to sort the data in the chart by the x-axis array so\nthat line plot connectivity is from left to right rather than\nsemi-randomly by index.\n"},
  {"SetIgnoreNegativeLogAxisWarning", PyvtkPVXYChartView_SetIgnoreNegativeLogAxisWarning, METH_VARARGS,
   "V.SetIgnoreNegativeLogAxisWarning(bool)\nC++: static void SetIgnoreNegativeLogAxisWarning(bool val)\n\nWhen plotting data with nonpositive values, ignore the standard\nwarning and draw only the data with positive values.\n"},
  {"GetIgnoreNegativeLogAxisWarning", PyvtkPVXYChartView_GetIgnoreNegativeLogAxisWarning, METH_VARARGS,
   "V.GetIgnoreNegativeLogAxisWarning() -> bool\nC++: static bool GetIgnoreNegativeLogAxisWarning()\n\n"},
  {"GetChart", PyvtkPVXYChartView_GetChart, METH_VARARGS,
   "V.GetChart() -> vtkChart\nC++: virtual vtkChart *GetChart()\n\nProvides access to the chart view.\n"},
  {"GetContextItem", PyvtkPVXYChartView_GetContextItem, METH_VARARGS,
   "V.GetContextItem() -> vtkAbstractContextItem\nC++: vtkAbstractContextItem *GetContextItem() override;\n\nGet the context item.\n"},
  {"SetSelection", PyvtkPVXYChartView_SetSelection, METH_VARARGS,
   "V.SetSelection(vtkChartRepresentation, vtkSelection)\nC++: void SetSelection(vtkChartRepresentation *repr,\n    vtkSelection *selection) override;\n\nRepresentations can use this method to set the selection for a\nparticular representation. Subclasses override this method to\npass on the selection to the chart using annotation link. Note\nthis is meant to pass selection for the local process alone. The\nview does not manage data movement for the selection.\n"},
  {"Update", PyvtkPVXYChartView_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nOverridden to rescale axes range on every update.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVXYChartView_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVXYChartView", // tp_name
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
  PyvtkPVXYChartView_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVXYChartView_StaticNew()
{
  return vtkPVXYChartView::New();
}

PyObject *PyvtkPVXYChartView_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVXYChartView_Type, PyvtkPVXYChartView_Methods,
    "vtkPVXYChartView",
 &PyvtkPVXYChartView_StaticNew);

  PyTypeObject *pytype = &PyvtkPVXYChartView_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVContextView_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVXYChartView(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVXYChartView_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVXYChartView", o) != 0)
  {
    Py_DECREF(o);
  }

}

