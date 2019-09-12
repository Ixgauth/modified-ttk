// python wrapper for vtkPVPlotMatrixView
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
#include "vtkPVPlotMatrixView.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVPlotMatrixView(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVPlotMatrixView_ClassNew(); }

#ifndef DECLARED_PyvtkPVContextView_ClassNew
extern "C" { PyObject *PyvtkPVContextView_ClassNew(); }
#define DECLARED_PyvtkPVContextView_ClassNew
#endif

static const char *PyvtkPVPlotMatrixView_Doc =
  "vtkPVPlotMatrixView - no description provided.\n\n"
  "Superclass: vtkPVContextView\n\n"
;


static PyObject *
PyvtkPVPlotMatrixView_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVPlotMatrixView::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVPlotMatrixView::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVPlotMatrixView *tempr = vtkPVPlotMatrixView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVPlotMatrixView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVPlotMatrixView::NewInstance());

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
PyvtkPVPlotMatrixView_GetContextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractContextItem *tempr = (ap.IsBound() ?
      op->GetContextItem() :
      op->vtkPVPlotMatrixView::GetContextItem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->vtkPVPlotMatrixView::SetSelection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetActivePlot(temp0, temp1);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetActivePlot(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetActiveRow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveRow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveRow() :
      op->vtkPVPlotMatrixView::GetActiveRow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetActiveColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveColumn() :
      op->vtkPVPlotMatrixView::GetActiveColumn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_ClearAnimationPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAnimationPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAnimationPath();
    }
    else
    {
      op->vtkPVPlotMatrixView::ClearAnimationPath();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_AddAnimationPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAnimationPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddAnimationPath(temp0, temp1);
    }
    else
    {
      op->vtkPVPlotMatrixView::AddAnimationPath(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_StartAnimationPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartAnimationPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartAnimationPath();
    }
    else
    {
      op->vtkPVPlotMatrixView::StartAnimationPath();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_AdvanceAnimationPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdvanceAnimationPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AdvanceAnimationPath();
    }
    else
    {
      op->vtkPVPlotMatrixView::AdvanceAnimationPath();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->vtkPVPlotMatrixView::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkPVPlotMatrixView::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetTitleFont(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleFont");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->vtkPVPlotMatrixView::SetTitleFont(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetTitleFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->vtkPVPlotMatrixView::SetTitleFontFamily(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetTitleFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->vtkPVPlotMatrixView::SetTitleFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetTitleBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->vtkPVPlotMatrixView::SetTitleBold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetTitleItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->vtkPVPlotMatrixView::SetTitleItalic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetTitleFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTitleFontFamily() :
      op->vtkPVPlotMatrixView::GetTitleFontFamily());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetTitleFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTitleFontSize() :
      op->vtkPVPlotMatrixView::GetTitleFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetTitleFontBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleFontBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTitleFontBold() :
      op->vtkPVPlotMatrixView::GetTitleFontBold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetTitleFontItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleFontItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTitleFontItalic() :
      op->vtkPVPlotMatrixView::GetTitleFontItalic());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetTitleColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->vtkPVPlotMatrixView::SetTitleColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetTitleColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTitleColor() :
      op->vtkPVPlotMatrixView::GetTitleColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetTitleAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->vtkPVPlotMatrixView::SetTitleAlignment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetTitleAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTitleAlignment() :
      op->vtkPVPlotMatrixView::GetTitleAlignment());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetNumberOfAnimationFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfAnimationFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfAnimationFrames(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetNumberOfAnimationFrames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetGutter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGutter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetGutter(temp0, temp1);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetGutter(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetGutterX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGutterX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGutterX(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetGutterX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetGutterY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGutterY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGutterY(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetGutterY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetBorders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetBorders(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetBorders(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetBorderLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorderLeft(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetBorderLeft(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetBorderBottom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderBottom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorderBottom(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetBorderBottom(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetBorderRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorderRight(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetBorderRight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetBorderTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorderTop(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetBorderTop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetGridVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->vtkPVPlotMatrixView::SetGridVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotGridVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotGridVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScatterPlotGridVisibility(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetScatterPlotGridVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramGridVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramGridVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHistogramGridVisibility(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetHistogramGridVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotGridVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotGridVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlotGridVisibility(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetActivePlotGridVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetGridVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGridVisibility(temp0) :
      op->vtkPVPlotMatrixView::GetGridVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
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
      op->SetBackgroundColor(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetBackgroundColor(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBackgroundColor(temp0) :
      op->vtkPVPlotMatrixView::GetBackgroundColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  double temp0;
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
      op->SetScatterPlotBackgroundColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetScatterPlotBackgroundColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  double temp0;
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
      op->SetHistogramBackgroundColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetHistogramBackgroundColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  double temp0;
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
      op->SetActivePlotBackgroundColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetActivePlotBackgroundColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->vtkPVPlotMatrixView::SetAxisColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxisColor(temp0) :
      op->vtkPVPlotMatrixView::GetAxisColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->SetScatterPlotAxisColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetScatterPlotAxisColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->SetHistogramAxisColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetHistogramAxisColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->SetActivePlotAxisColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetActivePlotAxisColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetGridColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->vtkPVPlotMatrixView::SetGridColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetGridColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetGridColor(temp0) :
      op->vtkPVPlotMatrixView::GetGridColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotGridColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotGridColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->SetScatterPlotGridColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetScatterPlotGridColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramGridColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramGridColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->SetHistogramGridColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetHistogramGridColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotGridColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotGridColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->SetActivePlotGridColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetActivePlotGridColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->vtkPVPlotMatrixView::SetAxisLabelVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisLabelVisibility(temp0) :
      op->vtkPVPlotMatrixView::GetAxisLabelVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScatterPlotAxisLabelVisibility(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetScatterPlotAxisLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHistogramAxisLabelVisibility(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetHistogramAxisLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlotAxisLabelVisibility(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetActivePlotAxisLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetAxisLabelFont(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelFont");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->vtkPVPlotMatrixView::SetAxisLabelFont(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetAxisLabelFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->vtkPVPlotMatrixView::SetAxisLabelFontFamily(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotAxisLabelFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScatterPlotAxisLabelFontFamily(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetScatterPlotAxisLabelFontFamily(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramAxisLabelFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramAxisLabelFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHistogramAxisLabelFontFamily(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetHistogramAxisLabelFontFamily(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotAxisLabelFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotAxisLabelFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlotAxisLabelFontFamily(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetActivePlotAxisLabelFontFamily(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetAxisLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->vtkPVPlotMatrixView::SetAxisLabelFontSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotAxisLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScatterPlotAxisLabelFontSize(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetScatterPlotAxisLabelFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramAxisLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramAxisLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHistogramAxisLabelFontSize(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetHistogramAxisLabelFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotAxisLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotAxisLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlotAxisLabelFontSize(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetActivePlotAxisLabelFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetAxisLabelBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->vtkPVPlotMatrixView::SetAxisLabelBold(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotAxisLabelBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScatterPlotAxisLabelBold(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetScatterPlotAxisLabelBold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramAxisLabelBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramAxisLabelBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHistogramAxisLabelBold(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetHistogramAxisLabelBold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotAxisLabelBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotAxisLabelBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlotAxisLabelBold(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetActivePlotAxisLabelBold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetAxisLabelItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->vtkPVPlotMatrixView::SetAxisLabelItalic(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotAxisLabelItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScatterPlotAxisLabelItalic(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetScatterPlotAxisLabelItalic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramAxisLabelItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramAxisLabelItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHistogramAxisLabelItalic(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetHistogramAxisLabelItalic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotAxisLabelItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotAxisLabelItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlotAxisLabelItalic(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetActivePlotAxisLabelItalic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetAxisLabelFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAxisLabelFontFamily(temp0) :
      op->vtkPVPlotMatrixView::GetAxisLabelFontFamily(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetAxisLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisLabelFontSize(temp0) :
      op->vtkPVPlotMatrixView::GetAxisLabelFontSize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetAxisLabelFontBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelFontBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisLabelFontBold(temp0) :
      op->vtkPVPlotMatrixView::GetAxisLabelFontBold(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetAxisLabelFontItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelFontItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisLabelFontItalic(temp0) :
      op->vtkPVPlotMatrixView::GetAxisLabelFontItalic(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetAxisLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->vtkPVPlotMatrixView::SetAxisLabelColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->SetScatterPlotAxisLabelColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetScatterPlotAxisLabelColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramAxisLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->SetHistogramAxisLabelColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetHistogramAxisLabelColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotAxisLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->SetActivePlotAxisLabelColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetActivePlotAxisLabelColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetAxisLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxisLabelColor(temp0) :
      op->vtkPVPlotMatrixView::GetAxisLabelColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetAxisLabelNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->vtkPVPlotMatrixView::SetAxisLabelNotation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotAxisLabelNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScatterPlotAxisLabelNotation(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetScatterPlotAxisLabelNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramAxisLabelNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramAxisLabelNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHistogramAxisLabelNotation(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetHistogramAxisLabelNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotAxisLabelNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotAxisLabelNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlotAxisLabelNotation(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetActivePlotAxisLabelNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetAxisLabelNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisLabelNotation(temp0) :
      op->vtkPVPlotMatrixView::GetAxisLabelNotation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetAxisLabelPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->vtkPVPlotMatrixView::SetAxisLabelPrecision(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotAxisLabelPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScatterPlotAxisLabelPrecision(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetScatterPlotAxisLabelPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramAxisLabelPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramAxisLabelPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHistogramAxisLabelPrecision(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetHistogramAxisLabelPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotAxisLabelPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotAxisLabelPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlotAxisLabelPrecision(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetActivePlotAxisLabelPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetAxisLabelPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisLabelPrecision(temp0) :
      op->vtkPVPlotMatrixView::GetAxisLabelPrecision(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetTooltipNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltipNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTooltipNotation(temp0, temp1);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetTooltipNotation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotTooltipNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotTooltipNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScatterPlotTooltipNotation(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetScatterPlotTooltipNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramTooltipNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramTooltipNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHistogramTooltipNotation(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetHistogramTooltipNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotTooltipNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotTooltipNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlotTooltipNotation(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetActivePlotTooltipNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetTooltipPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltipPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTooltipPrecision(temp0, temp1);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetTooltipPrecision(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotTooltipPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotTooltipPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScatterPlotTooltipPrecision(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetScatterPlotTooltipPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramTooltipPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramTooltipPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHistogramTooltipPrecision(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetHistogramTooltipPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotTooltipPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotTooltipPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlotTooltipPrecision(temp0);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetActivePlotTooltipPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetTooltipNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTooltipNotation(temp0) :
      op->vtkPVPlotMatrixView::GetTooltipNotation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetTooltipPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTooltipPrecision(temp0) :
      op->vtkPVPlotMatrixView::GetTooltipPrecision(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotSelectedRowColumnColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotSelectedRowColumnColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  double temp0;
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
      op->SetScatterPlotSelectedRowColumnColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetScatterPlotSelectedRowColumnColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetScatterPlotSelectedRowColumnColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScatterPlotSelectedRowColumnColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScatterPlotSelectedRowColumnColor() :
      op->vtkPVPlotMatrixView::GetScatterPlotSelectedRowColumnColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotSelectedActiveColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotSelectedActiveColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  double temp0;
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
      op->SetScatterPlotSelectedActiveColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVPlotMatrixView::SetScatterPlotSelectedActiveColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetScatterPlotSelectedActiveColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScatterPlotSelectedActiveColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScatterPlotSelectedActiveColor() :
      op->vtkPVPlotMatrixView::GetScatterPlotSelectedActiveColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_UpdateSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateSettings();
    }
    else
    {
      op->vtkPVPlotMatrixView::UpdateSettings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVPlotMatrixView_Methods[] = {
  {"IsTypeOf", PyvtkPVPlotMatrixView_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVPlotMatrixView_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVPlotMatrixView_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVPlotMatrixView\nC++: static vtkPVPlotMatrixView *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVPlotMatrixView_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVPlotMatrixView\nC++: vtkPVPlotMatrixView *NewInstance()\n\n"},
  {"GetContextItem", PyvtkPVPlotMatrixView_GetContextItem, METH_VARARGS,
   "V.GetContextItem() -> vtkAbstractContextItem\nC++: vtkAbstractContextItem *GetContextItem() override;\n\nGet the context item.\n"},
  {"SetSelection", PyvtkPVPlotMatrixView_SetSelection, METH_VARARGS,
   "V.SetSelection(vtkChartRepresentation, vtkSelection)\nC++: void SetSelection(vtkChartRepresentation *repr,\n    vtkSelection *selection) override;\n\nRepresentations can use this method to set the selection for a\nparticular representation. Subclasses override this method to\npass on the selection to the chart using annotation link. Note\nthis is meant to pass selection for the local process alone. The\nview does not manage data movement for the selection.\n"},
  {"SetActivePlot", PyvtkPVPlotMatrixView_SetActivePlot, METH_VARARGS,
   "V.SetActivePlot(int, int)\nC++: void SetActivePlot(int i, int j)\n\nGet/set the active plot in the scatter plot matrix.\n"},
  {"GetActiveRow", PyvtkPVPlotMatrixView_GetActiveRow, METH_VARARGS,
   "V.GetActiveRow() -> int\nC++: int GetActiveRow()\n\nGet/set the active plot in the scatter plot matrix.\n"},
  {"GetActiveColumn", PyvtkPVPlotMatrixView_GetActiveColumn, METH_VARARGS,
   "V.GetActiveColumn() -> int\nC++: int GetActiveColumn()\n\nGet/set the active plot in the scatter plot matrix.\n"},
  {"ClearAnimationPath", PyvtkPVPlotMatrixView_ClearAnimationPath, METH_VARARGS,
   "V.ClearAnimationPath()\nC++: void ClearAnimationPath()\n\nClear the animation path, ensuring it is empty.\n"},
  {"AddAnimationPath", PyvtkPVPlotMatrixView_AddAnimationPath, METH_VARARGS,
   "V.AddAnimationPath(int, int)\nC++: void AddAnimationPath(int i, int j)\n\nAppend to the animation path of the scatter plot matrix.\n"},
  {"StartAnimationPath", PyvtkPVPlotMatrixView_StartAnimationPath, METH_VARARGS,
   "V.StartAnimationPath()\nC++: void StartAnimationPath()\n\nAppend to the animation path of the scatter plot matrix.\n"},
  {"AdvanceAnimationPath", PyvtkPVPlotMatrixView_AdvanceAnimationPath, METH_VARARGS,
   "V.AdvanceAnimationPath()\nC++: void AdvanceAnimationPath()\n\nPush the animation forward a frame.\n"},
  {"SetTitle", PyvtkPVPlotMatrixView_SetTitle, METH_VARARGS,
   "V.SetTitle(string)\nC++: void SetTitle(const char *title)\n\nSet the title of the active plot. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"GetTitle", PyvtkPVPlotMatrixView_GetTitle, METH_VARARGS,
   "V.GetTitle() -> string\nC++: const char *GetTitle()\n\nSet the title of the active plot. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetTitleFont", PyvtkPVPlotMatrixView_SetTitleFont, METH_VARARGS,
   "V.SetTitleFont(string, int, bool, bool)\nC++: void SetTitleFont(const char *family, int pointSize,\n    bool bold, bool italic)\n\nSet the active plot title's font. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetTitleFontFamily", PyvtkPVPlotMatrixView_SetTitleFontFamily, METH_VARARGS,
   "V.SetTitleFontFamily(string)\nC++: void SetTitleFontFamily(const char *family)\n\nSet the active plot title's font. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetTitleFontSize", PyvtkPVPlotMatrixView_SetTitleFontSize, METH_VARARGS,
   "V.SetTitleFontSize(int)\nC++: void SetTitleFontSize(int pointSize)\n\nSet the active plot title's font. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetTitleBold", PyvtkPVPlotMatrixView_SetTitleBold, METH_VARARGS,
   "V.SetTitleBold(bool)\nC++: void SetTitleBold(bool bold)\n\nSet the active plot title's font. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetTitleItalic", PyvtkPVPlotMatrixView_SetTitleItalic, METH_VARARGS,
   "V.SetTitleItalic(bool)\nC++: void SetTitleItalic(bool italic)\n\nSet the active plot title's font. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"GetTitleFontFamily", PyvtkPVPlotMatrixView_GetTitleFontFamily, METH_VARARGS,
   "V.GetTitleFontFamily() -> string\nC++: const char *GetTitleFontFamily()\n\nSet the active plot title's font. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"GetTitleFontSize", PyvtkPVPlotMatrixView_GetTitleFontSize, METH_VARARGS,
   "V.GetTitleFontSize() -> int\nC++: int GetTitleFontSize()\n\nSet the active plot title's font. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"GetTitleFontBold", PyvtkPVPlotMatrixView_GetTitleFontBold, METH_VARARGS,
   "V.GetTitleFontBold() -> int\nC++: int GetTitleFontBold()\n\nSet the active plot title's font. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"GetTitleFontItalic", PyvtkPVPlotMatrixView_GetTitleFontItalic, METH_VARARGS,
   "V.GetTitleFontItalic() -> int\nC++: int GetTitleFontItalic()\n\nSet the active plot title's font. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetTitleColor", PyvtkPVPlotMatrixView_SetTitleColor, METH_VARARGS,
   "V.SetTitleColor(float, float, float)\nC++: void SetTitleColor(double red, double green, double blue)\n\nSet the active plot title's color. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"GetTitleColor", PyvtkPVPlotMatrixView_GetTitleColor, METH_VARARGS,
   "V.GetTitleColor() -> (float, ...)\nC++: double *GetTitleColor()\n\nSet the active plot title's color. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetTitleAlignment", PyvtkPVPlotMatrixView_SetTitleAlignment, METH_VARARGS,
   "V.SetTitleAlignment(int)\nC++: void SetTitleAlignment(int alignment)\n\nSet the active plot title's alignment. These methods should not\nbe called directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"GetTitleAlignment", PyvtkPVPlotMatrixView_GetTitleAlignment, METH_VARARGS,
   "V.GetTitleAlignment() -> int\nC++: int GetTitleAlignment()\n\nSet the active plot title's alignment. These methods should not\nbe called directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetNumberOfAnimationFrames", PyvtkPVPlotMatrixView_SetNumberOfAnimationFrames, METH_VARARGS,
   "V.SetNumberOfAnimationFrames(int)\nC++: void SetNumberOfAnimationFrames(int value)\n\nSet the number of animation frames used when changing the active\nscatterplot.\n"},
  {"SetGutter", PyvtkPVPlotMatrixView_SetGutter, METH_VARARGS,
   "V.SetGutter(float, float)\nC++: virtual void SetGutter(float x, float y)\n\nSet the gutter that should be left between the charts in the\nmatrix. These methods should not be called directly. They are\nmade public only so that the client-server-stream-interpreter can\ninvoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetGutterX", PyvtkPVPlotMatrixView_SetGutterX, METH_VARARGS,
   "V.SetGutterX(float)\nC++: void SetGutterX(float value)\n\nSet the gutter that should be left between the charts in the\nmatrix. These methods should not be called directly. They are\nmade public only so that the client-server-stream-interpreter can\ninvoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetGutterY", PyvtkPVPlotMatrixView_SetGutterY, METH_VARARGS,
   "V.SetGutterY(float)\nC++: void SetGutterY(float value)\n\nSet the gutter that should be left between the charts in the\nmatrix. These methods should not be called directly. They are\nmade public only so that the client-server-stream-interpreter can\ninvoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetBorders", PyvtkPVPlotMatrixView_SetBorders, METH_VARARGS,
   "V.SetBorders(int, int, int, int)\nC++: virtual void SetBorders(int left, int bottom, int right,\n    int top)\n\nSet/get the borders of the chart matrix (space in pixels around\neach chart). These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetBorderLeft", PyvtkPVPlotMatrixView_SetBorderLeft, METH_VARARGS,
   "V.SetBorderLeft(int)\nC++: virtual void SetBorderLeft(int value)\n\nSet/get the borders of the chart matrix (space in pixels around\neach chart). These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetBorderBottom", PyvtkPVPlotMatrixView_SetBorderBottom, METH_VARARGS,
   "V.SetBorderBottom(int)\nC++: virtual void SetBorderBottom(int value)\n\nSet/get the borders of the chart matrix (space in pixels around\neach chart). These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetBorderRight", PyvtkPVPlotMatrixView_SetBorderRight, METH_VARARGS,
   "V.SetBorderRight(int)\nC++: virtual void SetBorderRight(int value)\n\nSet/get the borders of the chart matrix (space in pixels around\neach chart). These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetBorderTop", PyvtkPVPlotMatrixView_SetBorderTop, METH_VARARGS,
   "V.SetBorderTop(int)\nC++: virtual void SetBorderTop(int value)\n\nSet/get the borders of the chart matrix (space in pixels around\neach chart). These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetGridVisibility", PyvtkPVPlotMatrixView_SetGridVisibility, METH_VARARGS,
   "V.SetGridVisibility(int, bool)\nC++: void SetGridVisibility(int plotType, bool visible)\n\nSets whether or not the grid for the given axis is visible given\na plot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetScatterPlotGridVisibility", PyvtkPVPlotMatrixView_SetScatterPlotGridVisibility, METH_VARARGS,
   "V.SetScatterPlotGridVisibility(bool)\nC++: void SetScatterPlotGridVisibility(bool value)\n\nSets whether or not the grid for the given axis is visible given\na plot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetHistogramGridVisibility", PyvtkPVPlotMatrixView_SetHistogramGridVisibility, METH_VARARGS,
   "V.SetHistogramGridVisibility(bool)\nC++: void SetHistogramGridVisibility(bool value)\n\nSets whether or not the grid for the given axis is visible given\na plot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetActivePlotGridVisibility", PyvtkPVPlotMatrixView_SetActivePlotGridVisibility, METH_VARARGS,
   "V.SetActivePlotGridVisibility(bool)\nC++: void SetActivePlotGridVisibility(bool value)\n\nSets whether or not the grid for the given axis is visible given\na plot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"GetGridVisibility", PyvtkPVPlotMatrixView_GetGridVisibility, METH_VARARGS,
   "V.GetGridVisibility(int) -> int\nC++: int GetGridVisibility(int plotType)\n\nSets whether or not the grid for the given axis is visible given\na plot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetBackgroundColor", PyvtkPVPlotMatrixView_SetBackgroundColor, METH_VARARGS,
   "V.SetBackgroundColor(int, float, float, float, float)\nC++: void SetBackgroundColor(int plotType, double red,\n    double green, double blue, double alpha)\n\nSets the background color for the chart given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"GetBackgroundColor", PyvtkPVPlotMatrixView_GetBackgroundColor, METH_VARARGS,
   "V.GetBackgroundColor(int) -> (float, ...)\nC++: double *GetBackgroundColor(int plotType)\n\nSets the background color for the chart given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetScatterPlotBackgroundColor", PyvtkPVPlotMatrixView_SetScatterPlotBackgroundColor, METH_VARARGS,
   "V.SetScatterPlotBackgroundColor(float, float, float, float)\nC++: void SetScatterPlotBackgroundColor(double value1,\n    double value2, double value3, double value4)\n\nSets the background color for the chart given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetHistogramBackgroundColor", PyvtkPVPlotMatrixView_SetHistogramBackgroundColor, METH_VARARGS,
   "V.SetHistogramBackgroundColor(float, float, float, float)\nC++: void SetHistogramBackgroundColor(double value1,\n    double value2, double value3, double value4)\n\nSets the background color for the chart given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetActivePlotBackgroundColor", PyvtkPVPlotMatrixView_SetActivePlotBackgroundColor, METH_VARARGS,
   "V.SetActivePlotBackgroundColor(float, float, float, float)\nC++: void SetActivePlotBackgroundColor(double value1,\n    double value2, double value3, double value4)\n\nSets the background color for the chart given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetAxisColor", PyvtkPVPlotMatrixView_SetAxisColor, METH_VARARGS,
   "V.SetAxisColor(int, float, float, float)\nC++: void SetAxisColor(int plotType, double red, double green,\n    double blue)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"GetAxisColor", PyvtkPVPlotMatrixView_GetAxisColor, METH_VARARGS,
   "V.GetAxisColor(int) -> (float, ...)\nC++: double *GetAxisColor(int plotType)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetScatterPlotAxisColor", PyvtkPVPlotMatrixView_SetScatterPlotAxisColor, METH_VARARGS,
   "V.SetScatterPlotAxisColor(float, float, float)\nC++: void SetScatterPlotAxisColor(double value1, double value2,\n    double value3)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetHistogramAxisColor", PyvtkPVPlotMatrixView_SetHistogramAxisColor, METH_VARARGS,
   "V.SetHistogramAxisColor(float, float, float)\nC++: void SetHistogramAxisColor(double value1, double value2,\n    double value3)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetActivePlotAxisColor", PyvtkPVPlotMatrixView_SetActivePlotAxisColor, METH_VARARGS,
   "V.SetActivePlotAxisColor(float, float, float)\nC++: void SetActivePlotAxisColor(double value1, double value2,\n    double value3)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetGridColor", PyvtkPVPlotMatrixView_SetGridColor, METH_VARARGS,
   "V.SetGridColor(int, float, float, float)\nC++: void SetGridColor(int plotType, double red, double green,\n    double blue)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"GetGridColor", PyvtkPVPlotMatrixView_GetGridColor, METH_VARARGS,
   "V.GetGridColor(int) -> (float, ...)\nC++: double *GetGridColor(int plotType)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetScatterPlotGridColor", PyvtkPVPlotMatrixView_SetScatterPlotGridColor, METH_VARARGS,
   "V.SetScatterPlotGridColor(float, float, float)\nC++: void SetScatterPlotGridColor(double value1, double value2,\n    double value3)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetHistogramGridColor", PyvtkPVPlotMatrixView_SetHistogramGridColor, METH_VARARGS,
   "V.SetHistogramGridColor(float, float, float)\nC++: void SetHistogramGridColor(double value1, double value2,\n    double value3)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetActivePlotGridColor", PyvtkPVPlotMatrixView_SetActivePlotGridColor, METH_VARARGS,
   "V.SetActivePlotGridColor(float, float, float)\nC++: void SetActivePlotGridColor(double value1, double value2,\n    double value3)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {"SetAxisLabelVisibility", PyvtkPVPlotMatrixView_SetAxisLabelVisibility, METH_VARARGS,
   "V.SetAxisLabelVisibility(int, bool)\nC++: void SetAxisLabelVisibility(int plotType, bool visible)\n\nSets whether or not the labels for the axes are visible, given a\nplot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"GetAxisLabelVisibility", PyvtkPVPlotMatrixView_GetAxisLabelVisibility, METH_VARARGS,
   "V.GetAxisLabelVisibility(int) -> int\nC++: int GetAxisLabelVisibility(int plotType)\n\nSets whether or not the labels for the axes are visible, given a\nplot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetScatterPlotAxisLabelVisibility", PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelVisibility, METH_VARARGS,
   "V.SetScatterPlotAxisLabelVisibility(bool)\nC++: void SetScatterPlotAxisLabelVisibility(bool value)\n\nSets whether or not the labels for the axes are visible, given a\nplot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetHistogramAxisLabelVisibility", PyvtkPVPlotMatrixView_SetHistogramAxisLabelVisibility, METH_VARARGS,
   "V.SetHistogramAxisLabelVisibility(bool)\nC++: void SetHistogramAxisLabelVisibility(bool value)\n\nSets whether or not the labels for the axes are visible, given a\nplot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetActivePlotAxisLabelVisibility", PyvtkPVPlotMatrixView_SetActivePlotAxisLabelVisibility, METH_VARARGS,
   "V.SetActivePlotAxisLabelVisibility(bool)\nC++: void SetActivePlotAxisLabelVisibility(bool value)\n\nSets whether or not the labels for the axes are visible, given a\nplot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetAxisLabelFont", PyvtkPVPlotMatrixView_SetAxisLabelFont, METH_VARARGS,
   "V.SetAxisLabelFont(int, string, int, bool, bool)\nC++: void SetAxisLabelFont(int plotType, const char *family,\n    int pointSize, bool bold, bool italic)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetAxisLabelFontFamily", PyvtkPVPlotMatrixView_SetAxisLabelFontFamily, METH_VARARGS,
   "V.SetAxisLabelFontFamily(int, string)\nC++: void SetAxisLabelFontFamily(int plotType, const char *family)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetScatterPlotAxisLabelFontFamily", PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelFontFamily, METH_VARARGS,
   "V.SetScatterPlotAxisLabelFontFamily(string)\nC++: void SetScatterPlotAxisLabelFontFamily(const char *value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetHistogramAxisLabelFontFamily", PyvtkPVPlotMatrixView_SetHistogramAxisLabelFontFamily, METH_VARARGS,
   "V.SetHistogramAxisLabelFontFamily(string)\nC++: void SetHistogramAxisLabelFontFamily(const char *value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetActivePlotAxisLabelFontFamily", PyvtkPVPlotMatrixView_SetActivePlotAxisLabelFontFamily, METH_VARARGS,
   "V.SetActivePlotAxisLabelFontFamily(string)\nC++: void SetActivePlotAxisLabelFontFamily(const char *value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetAxisLabelFontSize", PyvtkPVPlotMatrixView_SetAxisLabelFontSize, METH_VARARGS,
   "V.SetAxisLabelFontSize(int, int)\nC++: void SetAxisLabelFontSize(int plotType, int pointSize)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetScatterPlotAxisLabelFontSize", PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelFontSize, METH_VARARGS,
   "V.SetScatterPlotAxisLabelFontSize(int)\nC++: void SetScatterPlotAxisLabelFontSize(int value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetHistogramAxisLabelFontSize", PyvtkPVPlotMatrixView_SetHistogramAxisLabelFontSize, METH_VARARGS,
   "V.SetHistogramAxisLabelFontSize(int)\nC++: void SetHistogramAxisLabelFontSize(int value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetActivePlotAxisLabelFontSize", PyvtkPVPlotMatrixView_SetActivePlotAxisLabelFontSize, METH_VARARGS,
   "V.SetActivePlotAxisLabelFontSize(int)\nC++: void SetActivePlotAxisLabelFontSize(int value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetAxisLabelBold", PyvtkPVPlotMatrixView_SetAxisLabelBold, METH_VARARGS,
   "V.SetAxisLabelBold(int, bool)\nC++: void SetAxisLabelBold(int plotType, bool bold)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetScatterPlotAxisLabelBold", PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelBold, METH_VARARGS,
   "V.SetScatterPlotAxisLabelBold(bool)\nC++: void SetScatterPlotAxisLabelBold(bool value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetHistogramAxisLabelBold", PyvtkPVPlotMatrixView_SetHistogramAxisLabelBold, METH_VARARGS,
   "V.SetHistogramAxisLabelBold(bool)\nC++: void SetHistogramAxisLabelBold(bool value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetActivePlotAxisLabelBold", PyvtkPVPlotMatrixView_SetActivePlotAxisLabelBold, METH_VARARGS,
   "V.SetActivePlotAxisLabelBold(bool)\nC++: void SetActivePlotAxisLabelBold(bool value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetAxisLabelItalic", PyvtkPVPlotMatrixView_SetAxisLabelItalic, METH_VARARGS,
   "V.SetAxisLabelItalic(int, bool)\nC++: void SetAxisLabelItalic(int plotType, bool italic)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetScatterPlotAxisLabelItalic", PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelItalic, METH_VARARGS,
   "V.SetScatterPlotAxisLabelItalic(bool)\nC++: void SetScatterPlotAxisLabelItalic(bool value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetHistogramAxisLabelItalic", PyvtkPVPlotMatrixView_SetHistogramAxisLabelItalic, METH_VARARGS,
   "V.SetHistogramAxisLabelItalic(bool)\nC++: void SetHistogramAxisLabelItalic(bool value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetActivePlotAxisLabelItalic", PyvtkPVPlotMatrixView_SetActivePlotAxisLabelItalic, METH_VARARGS,
   "V.SetActivePlotAxisLabelItalic(bool)\nC++: void SetActivePlotAxisLabelItalic(bool value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"GetAxisLabelFontFamily", PyvtkPVPlotMatrixView_GetAxisLabelFontFamily, METH_VARARGS,
   "V.GetAxisLabelFontFamily(int) -> string\nC++: const char *GetAxisLabelFontFamily(int plotType)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"GetAxisLabelFontSize", PyvtkPVPlotMatrixView_GetAxisLabelFontSize, METH_VARARGS,
   "V.GetAxisLabelFontSize(int) -> int\nC++: int GetAxisLabelFontSize(int plotType)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"GetAxisLabelFontBold", PyvtkPVPlotMatrixView_GetAxisLabelFontBold, METH_VARARGS,
   "V.GetAxisLabelFontBold(int) -> int\nC++: int GetAxisLabelFontBold(int plotType)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"GetAxisLabelFontItalic", PyvtkPVPlotMatrixView_GetAxisLabelFontItalic, METH_VARARGS,
   "V.GetAxisLabelFontItalic(int) -> int\nC++: int GetAxisLabelFontItalic(int plotType)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetAxisLabelColor", PyvtkPVPlotMatrixView_SetAxisLabelColor, METH_VARARGS,
   "V.SetAxisLabelColor(int, float, float, float)\nC++: void SetAxisLabelColor(int plotType, double red,\n    double green, double blue)\n\nSets the axis label color for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetScatterPlotAxisLabelColor", PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelColor, METH_VARARGS,
   "V.SetScatterPlotAxisLabelColor(float, float, float)\nC++: void SetScatterPlotAxisLabelColor(double value1,\n    double value2, double value3)\n\nSets the axis label color for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetHistogramAxisLabelColor", PyvtkPVPlotMatrixView_SetHistogramAxisLabelColor, METH_VARARGS,
   "V.SetHistogramAxisLabelColor(float, float, float)\nC++: void SetHistogramAxisLabelColor(double value1, double value2,\n     double value3)\n\nSets the axis label color for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetActivePlotAxisLabelColor", PyvtkPVPlotMatrixView_SetActivePlotAxisLabelColor, METH_VARARGS,
   "V.SetActivePlotAxisLabelColor(float, float, float)\nC++: void SetActivePlotAxisLabelColor(double value1,\n    double value2, double value3)\n\nSets the axis label color for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"GetAxisLabelColor", PyvtkPVPlotMatrixView_GetAxisLabelColor, METH_VARARGS,
   "V.GetAxisLabelColor(int) -> (float, ...)\nC++: double *GetAxisLabelColor(int plotType)\n\nSets the axis label color for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetAxisLabelNotation", PyvtkPVPlotMatrixView_SetAxisLabelNotation, METH_VARARGS,
   "V.SetAxisLabelNotation(int, int)\nC++: void SetAxisLabelNotation(int plotType, int notation)\n\nSets the axis label notation for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetScatterPlotAxisLabelNotation", PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelNotation, METH_VARARGS,
   "V.SetScatterPlotAxisLabelNotation(int)\nC++: void SetScatterPlotAxisLabelNotation(int value)\n\nSets the axis label notation for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetHistogramAxisLabelNotation", PyvtkPVPlotMatrixView_SetHistogramAxisLabelNotation, METH_VARARGS,
   "V.SetHistogramAxisLabelNotation(int)\nC++: void SetHistogramAxisLabelNotation(int value)\n\nSets the axis label notation for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetActivePlotAxisLabelNotation", PyvtkPVPlotMatrixView_SetActivePlotAxisLabelNotation, METH_VARARGS,
   "V.SetActivePlotAxisLabelNotation(int)\nC++: void SetActivePlotAxisLabelNotation(int value)\n\nSets the axis label notation for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"GetAxisLabelNotation", PyvtkPVPlotMatrixView_GetAxisLabelNotation, METH_VARARGS,
   "V.GetAxisLabelNotation(int) -> int\nC++: int GetAxisLabelNotation(int plotType)\n\nSets the axis label notation for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetAxisLabelPrecision", PyvtkPVPlotMatrixView_SetAxisLabelPrecision, METH_VARARGS,
   "V.SetAxisLabelPrecision(int, int)\nC++: void SetAxisLabelPrecision(int plotType, int precision)\n\nSets the axis label precision for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetScatterPlotAxisLabelPrecision", PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelPrecision, METH_VARARGS,
   "V.SetScatterPlotAxisLabelPrecision(int)\nC++: void SetScatterPlotAxisLabelPrecision(int value)\n\nSets the axis label precision for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetHistogramAxisLabelPrecision", PyvtkPVPlotMatrixView_SetHistogramAxisLabelPrecision, METH_VARARGS,
   "V.SetHistogramAxisLabelPrecision(int)\nC++: void SetHistogramAxisLabelPrecision(int value)\n\nSets the axis label precision for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetActivePlotAxisLabelPrecision", PyvtkPVPlotMatrixView_SetActivePlotAxisLabelPrecision, METH_VARARGS,
   "V.SetActivePlotAxisLabelPrecision(int)\nC++: void SetActivePlotAxisLabelPrecision(int value)\n\nSets the axis label precision for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"GetAxisLabelPrecision", PyvtkPVPlotMatrixView_GetAxisLabelPrecision, METH_VARARGS,
   "V.GetAxisLabelPrecision(int) -> int\nC++: int GetAxisLabelPrecision(int plotType)\n\nSets the axis label precision for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetTooltipNotation", PyvtkPVPlotMatrixView_SetTooltipNotation, METH_VARARGS,
   "V.SetTooltipNotation(int, int)\nC++: void SetTooltipNotation(int plotType, int notation)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetScatterPlotTooltipNotation", PyvtkPVPlotMatrixView_SetScatterPlotTooltipNotation, METH_VARARGS,
   "V.SetScatterPlotTooltipNotation(int)\nC++: void SetScatterPlotTooltipNotation(int value)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetHistogramTooltipNotation", PyvtkPVPlotMatrixView_SetHistogramTooltipNotation, METH_VARARGS,
   "V.SetHistogramTooltipNotation(int)\nC++: void SetHistogramTooltipNotation(int value)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetActivePlotTooltipNotation", PyvtkPVPlotMatrixView_SetActivePlotTooltipNotation, METH_VARARGS,
   "V.SetActivePlotTooltipNotation(int)\nC++: void SetActivePlotTooltipNotation(int value)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetTooltipPrecision", PyvtkPVPlotMatrixView_SetTooltipPrecision, METH_VARARGS,
   "V.SetTooltipPrecision(int, int)\nC++: void SetTooltipPrecision(int plotType, int precision)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetScatterPlotTooltipPrecision", PyvtkPVPlotMatrixView_SetScatterPlotTooltipPrecision, METH_VARARGS,
   "V.SetScatterPlotTooltipPrecision(int)\nC++: void SetScatterPlotTooltipPrecision(int value)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetHistogramTooltipPrecision", PyvtkPVPlotMatrixView_SetHistogramTooltipPrecision, METH_VARARGS,
   "V.SetHistogramTooltipPrecision(int)\nC++: void SetHistogramTooltipPrecision(int value)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetActivePlotTooltipPrecision", PyvtkPVPlotMatrixView_SetActivePlotTooltipPrecision, METH_VARARGS,
   "V.SetActivePlotTooltipPrecision(int)\nC++: void SetActivePlotTooltipPrecision(int value)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"GetTooltipNotation", PyvtkPVPlotMatrixView_GetTooltipNotation, METH_VARARGS,
   "V.GetTooltipNotation(int) -> int\nC++: int GetTooltipNotation(int plotType)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"GetTooltipPrecision", PyvtkPVPlotMatrixView_GetTooltipPrecision, METH_VARARGS,
   "V.GetTooltipPrecision(int) -> int\nC++: int GetTooltipPrecision(int plotType)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {"SetScatterPlotSelectedRowColumnColor", PyvtkPVPlotMatrixView_SetScatterPlotSelectedRowColumnColor, METH_VARARGS,
   "V.SetScatterPlotSelectedRowColumnColor(float, float, float, float)\nC++: void SetScatterPlotSelectedRowColumnColor(double red,\n    double green, double blue, double alpha)\n\nSet the scatter plot title's color. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"GetScatterPlotSelectedRowColumnColor", PyvtkPVPlotMatrixView_GetScatterPlotSelectedRowColumnColor, METH_VARARGS,
   "V.GetScatterPlotSelectedRowColumnColor() -> (float, ...)\nC++: double *GetScatterPlotSelectedRowColumnColor()\n\nSet the scatter plot title's color. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"SetScatterPlotSelectedActiveColor", PyvtkPVPlotMatrixView_SetScatterPlotSelectedActiveColor, METH_VARARGS,
   "V.SetScatterPlotSelectedActiveColor(float, float, float, float)\nC++: void SetScatterPlotSelectedActiveColor(double red,\n    double green, double blue, double alpha)\n\nSet the scatter plot title's color. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"GetScatterPlotSelectedActiveColor", PyvtkPVPlotMatrixView_GetScatterPlotSelectedActiveColor, METH_VARARGS,
   "V.GetScatterPlotSelectedActiveColor() -> (float, ...)\nC++: double *GetScatterPlotSelectedActiveColor()\n\nSet the scatter plot title's color. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {"UpdateSettings", PyvtkPVPlotMatrixView_UpdateSettings, METH_VARARGS,
   "V.UpdateSettings()\nC++: void UpdateSettings()\n\nUpdate all the settings\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVPlotMatrixView_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVPlotMatrixView", // tp_name
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
  PyvtkPVPlotMatrixView_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVPlotMatrixView_StaticNew()
{
  return vtkPVPlotMatrixView::New();
}

PyObject *PyvtkPVPlotMatrixView_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVPlotMatrixView_Type, PyvtkPVPlotMatrixView_Methods,
    "vtkPVPlotMatrixView",
 &PyvtkPVPlotMatrixView_StaticNew);

  PyTypeObject *pytype = &PyvtkPVPlotMatrixView_Type;

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

void PyVTKAddFile_vtkPVPlotMatrixView(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVPlotMatrixView_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVPlotMatrixView", o) != 0)
  {
    Py_DECREF(o);
  }

}

