// python wrapper for vtkPieChartActor
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
#include "vtkPieChartActor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPieChartActor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPieChartActor_ClassNew(); }

#ifndef DECLARED_PyvtkActor2D_ClassNew
extern "C" { PyObject *PyvtkActor2D_ClassNew(); }
#define DECLARED_PyvtkActor2D_ClassNew
#endif

static const char *PyvtkPieChartActor_Doc =
  "vtkPieChartActor - create a pie chart from an array\n\n"
  "Superclass: vtkActor2D\n\n"
  "vtkPieChartActor generates a pie chart from an array of numbers\n"
  "defined in field data (a vtkDataObject). To use this class, you must\n"
  "specify an input data object. You'll probably also want to specify\n"
  "the position of the plot be setting the Position and Position2\n"
  "instance variables, which define a rectangle in which the plot lies. \n"
  "There are also many other instance variables that control the look of\n"
  "the plot includes its title, and legend.\n\n"
  "Set the text property/attributes of the title and the labels through\n"
  "the vtkTextProperty objects associated with these components.\n\n"
  "@sa\n"
  "vtkParallelCoordinatesActor vtkXYPlotActor2D vtkSpiderPlotActor\n\n";


static PyObject *
PyvtkPieChartActor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPieChartActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPieChartActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPieChartActor *tempr = vtkPieChartActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPieChartActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPieChartActor::NewInstance());

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
PyvtkPieChartActor_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkPieChartActor::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_SetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnection(temp0);
    }
    else
    {
      op->vtkPieChartActor::SetInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkPieChartActor::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_SetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleVisibility(temp0);
    }
    else
    {
      op->vtkPieChartActor::SetTitleVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_GetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTitleVisibility() :
      op->vtkPieChartActor::GetTitleVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_TitleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TitleVisibilityOn();
    }
    else
    {
      op->vtkPieChartActor::TitleVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_TitleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TitleVisibilityOff();
    }
    else
    {
      op->vtkPieChartActor::TitleVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

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
      op->vtkPieChartActor::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkPieChartActor::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_SetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTitleTextProperty(temp0);
    }
    else
    {
      op->vtkPieChartActor::SetTitleTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleTextProperty() :
      op->vtkPieChartActor::GetTitleTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_SetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelVisibility(temp0);
    }
    else
    {
      op->vtkPieChartActor::SetLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_GetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelVisibility() :
      op->vtkPieChartActor::GetLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_LabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOn();
    }
    else
    {
      op->vtkPieChartActor::LabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_LabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOff();
    }
    else
    {
      op->vtkPieChartActor::LabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetLabelTextProperty(temp0);
    }
    else
    {
      op->vtkPieChartActor::SetLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty() :
      op->vtkPieChartActor::GetLabelTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_SetPieceColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

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
      op->SetPieceColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPieChartActor::SetPieceColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPieChartActor_SetPieceColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetPieceColor(temp0, temp1);
    }
    else
    {
      op->vtkPieChartActor::SetPieceColor(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPieChartActor_SetPieceColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkPieChartActor_SetPieceColor_s1(self, args);
    case 2:
      return PyvtkPieChartActor_SetPieceColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPieceColor");
  return nullptr;
}



static PyObject *
PyvtkPieChartActor_GetPieceColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPieceColor(temp0) :
      op->vtkPieChartActor::GetPieceColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_SetPieceLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPieceLabel(temp0, temp1);
    }
    else
    {
      op->vtkPieChartActor::SetPieceLabel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_GetPieceLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPieceLabel(temp0) :
      op->vtkPieChartActor::GetPieceLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_SetLegendVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

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
      op->vtkPieChartActor::SetLegendVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_GetLegendVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLegendVisibility() :
      op->vtkPieChartActor::GetLegendVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_LegendVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LegendVisibilityOn();
    }
    else
    {
      op->vtkPieChartActor::LegendVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_LegendVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LegendVisibilityOff();
    }
    else
    {
      op->vtkPieChartActor::LegendVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_GetLegendActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLegendBoxActor *tempr = (ap.IsBound() ?
      op->GetLegendActor() :
      op->vtkPieChartActor::GetLegendActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkPieChartActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkPieChartActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkPieChartActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkPieChartActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieChartActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieChartActor *op = static_cast<vtkPieChartActor *>(vp);

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
      op->vtkPieChartActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPieChartActor_Methods[] = {
  {"IsTypeOf", PyvtkPieChartActor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for type information and printing.\n"},
  {"IsA", PyvtkPieChartActor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for type information and printing.\n"},
  {"SafeDownCast", PyvtkPieChartActor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPieChartActor\nC++: static vtkPieChartActor *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for type information and printing.\n"},
  {"NewInstance", PyvtkPieChartActor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPieChartActor\nC++: vtkPieChartActor *NewInstance()\n\nStandard methods for type information and printing.\n"},
  {"SetInputData", PyvtkPieChartActor_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkDataObject)\nC++: virtual void SetInputData(vtkDataObject *)\n\nSet the input to the pie chart actor. SetInputData() does not\nconnect the pipeline whereas SetInputConnection() does.\n"},
  {"SetInputConnection", PyvtkPieChartActor_SetInputConnection, METH_VARARGS,
   "V.SetInputConnection(vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *)\n\nSet the input to the pie chart actor. SetInputData() does not\nconnect the pipeline whereas SetInputConnection() does.\n"},
  {"GetInput", PyvtkPieChartActor_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkDataObject\nC++: virtual vtkDataObject *GetInput()\n\nGet the input data object to this actor.\n"},
  {"SetTitleVisibility", PyvtkPieChartActor_SetTitleVisibility, METH_VARARGS,
   "V.SetTitleVisibility(int)\nC++: virtual void SetTitleVisibility(vtkTypeBool _arg)\n\nEnable/Disable the display of a plot title.\n"},
  {"GetTitleVisibility", PyvtkPieChartActor_GetTitleVisibility, METH_VARARGS,
   "V.GetTitleVisibility() -> int\nC++: virtual vtkTypeBool GetTitleVisibility()\n\nEnable/Disable the display of a plot title.\n"},
  {"TitleVisibilityOn", PyvtkPieChartActor_TitleVisibilityOn, METH_VARARGS,
   "V.TitleVisibilityOn()\nC++: virtual void TitleVisibilityOn()\n\nEnable/Disable the display of a plot title.\n"},
  {"TitleVisibilityOff", PyvtkPieChartActor_TitleVisibilityOff, METH_VARARGS,
   "V.TitleVisibilityOff()\nC++: virtual void TitleVisibilityOff()\n\nEnable/Disable the display of a plot title.\n"},
  {"SetTitle", PyvtkPieChartActor_SetTitle, METH_VARARGS,
   "V.SetTitle(string)\nC++: virtual void SetTitle(const char *_arg)\n\nSet/Get the title of the pie chart.\n"},
  {"GetTitle", PyvtkPieChartActor_GetTitle, METH_VARARGS,
   "V.GetTitle() -> string\nC++: virtual char *GetTitle()\n\nSet/Get the title of the pie chart.\n"},
  {"SetTitleTextProperty", PyvtkPieChartActor_SetTitleTextProperty, METH_VARARGS,
   "V.SetTitleTextProperty(vtkTextProperty)\nC++: virtual void SetTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the title text property. The property controls the\nappearance of the plot title.\n"},
  {"GetTitleTextProperty", PyvtkPieChartActor_GetTitleTextProperty, METH_VARARGS,
   "V.GetTitleTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTitleTextProperty()\n\nSet/Get the title text property. The property controls the\nappearance of the plot title.\n"},
  {"SetLabelVisibility", PyvtkPieChartActor_SetLabelVisibility, METH_VARARGS,
   "V.SetLabelVisibility(int)\nC++: virtual void SetLabelVisibility(vtkTypeBool _arg)\n\nEnable/Disable the display of pie piece labels.\n"},
  {"GetLabelVisibility", PyvtkPieChartActor_GetLabelVisibility, METH_VARARGS,
   "V.GetLabelVisibility() -> int\nC++: virtual vtkTypeBool GetLabelVisibility()\n\nEnable/Disable the display of pie piece labels.\n"},
  {"LabelVisibilityOn", PyvtkPieChartActor_LabelVisibilityOn, METH_VARARGS,
   "V.LabelVisibilityOn()\nC++: virtual void LabelVisibilityOn()\n\nEnable/Disable the display of pie piece labels.\n"},
  {"LabelVisibilityOff", PyvtkPieChartActor_LabelVisibilityOff, METH_VARARGS,
   "V.LabelVisibilityOff()\nC++: virtual void LabelVisibilityOff()\n\nEnable/Disable the display of pie piece labels.\n"},
  {"SetLabelTextProperty", PyvtkPieChartActor_SetLabelTextProperty, METH_VARARGS,
   "V.SetLabelTextProperty(vtkTextProperty)\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p)\n\nSet/Get the labels text property. This controls the appearance of\nall pie piece labels.\n"},
  {"GetLabelTextProperty", PyvtkPieChartActor_GetLabelTextProperty, METH_VARARGS,
   "V.GetLabelTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLabelTextProperty()\n\nSet/Get the labels text property. This controls the appearance of\nall pie piece labels.\n"},
  {"SetPieceColor", PyvtkPieChartActor_SetPieceColor, METH_VARARGS,
   "V.SetPieceColor(int, float, float, float)\nC++: void SetPieceColor(int i, double r, double g, double b)\nV.SetPieceColor(int, (float, float, float))\nC++: void SetPieceColor(int i, const double color[3])\n\nSpecify colors for each piece of pie. If not specified, they are\nautomatically generated.\n"},
  {"GetPieceColor", PyvtkPieChartActor_GetPieceColor, METH_VARARGS,
   "V.GetPieceColor(int) -> (float, ...)\nC++: double *GetPieceColor(int i)\n\nSpecify colors for each piece of pie. If not specified, they are\nautomatically generated.\n"},
  {"SetPieceLabel", PyvtkPieChartActor_SetPieceLabel, METH_VARARGS,
   "V.SetPieceLabel(int, string)\nC++: void SetPieceLabel(const int i, const char *)\n\nSpecify the names for each piece of pie.  not specified, then an\ninteger number is automatically generated.\n"},
  {"GetPieceLabel", PyvtkPieChartActor_GetPieceLabel, METH_VARARGS,
   "V.GetPieceLabel(int) -> string\nC++: const char *GetPieceLabel(int i)\n\nSpecify the names for each piece of pie.  not specified, then an\ninteger number is automatically generated.\n"},
  {"SetLegendVisibility", PyvtkPieChartActor_SetLegendVisibility, METH_VARARGS,
   "V.SetLegendVisibility(int)\nC++: virtual void SetLegendVisibility(vtkTypeBool _arg)\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {"GetLegendVisibility", PyvtkPieChartActor_GetLegendVisibility, METH_VARARGS,
   "V.GetLegendVisibility() -> int\nC++: virtual vtkTypeBool GetLegendVisibility()\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {"LegendVisibilityOn", PyvtkPieChartActor_LegendVisibilityOn, METH_VARARGS,
   "V.LegendVisibilityOn()\nC++: virtual void LegendVisibilityOn()\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {"LegendVisibilityOff", PyvtkPieChartActor_LegendVisibilityOff, METH_VARARGS,
   "V.LegendVisibilityOff()\nC++: virtual void LegendVisibilityOff()\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {"GetLegendActor", PyvtkPieChartActor_GetLegendActor, METH_VARARGS,
   "V.GetLegendActor() -> vtkLegendBoxActor\nC++: virtual vtkLegendBoxActor *GetLegendActor()\n\nRetrieve handles to the legend box. This is useful if you would\nlike to manually control the legend appearance.\n"},
  {"RenderOverlay", PyvtkPieChartActor_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\nDraw the pie plot.\n"},
  {"RenderOpaqueGeometry", PyvtkPieChartActor_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nDraw the pie plot.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkPieChartActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nDraw the pie plot.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkPieChartActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {"ReleaseGraphicsResources", PyvtkPieChartActor_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPieChartActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkPieChartActor", // tp_name
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
  PyvtkPieChartActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPieChartActor_StaticNew()
{
  return vtkPieChartActor::New();
}

PyObject *PyvtkPieChartActor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPieChartActor_Type, PyvtkPieChartActor_Methods,
    "vtkPieChartActor",
 &PyvtkPieChartActor_StaticNew);

  PyTypeObject *pytype = &PyvtkPieChartActor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkActor2D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPieChartActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPieChartActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPieChartActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

