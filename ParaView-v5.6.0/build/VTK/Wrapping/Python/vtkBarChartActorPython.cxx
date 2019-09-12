// python wrapper for vtkBarChartActor
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
#include "vtkBarChartActor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBarChartActor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBarChartActor_ClassNew(); }

#ifndef DECLARED_PyvtkActor2D_ClassNew
extern "C" { PyObject *PyvtkActor2D_ClassNew(); }
#define DECLARED_PyvtkActor2D_ClassNew
#endif

static const char *PyvtkBarChartActor_Doc =
  "vtkBarChartActor - create a bar chart from an array\n\n"
  "Superclass: vtkActor2D\n\n"
  "vtkBarChartActor generates a bar chart from an array of numbers\n"
  "defined in field data (a vtkDataObject). To use this class, you must\n"
  "specify an input data object. You'll probably also want to specify\n"
  "the position of the plot be setting the Position and Position2\n"
  "instance variables, which define a rectangle in which the plot lies. \n"
  "There are also many other instance variables that control the look of\n"
  "the plot includes its title and legend.\n\n"
  "Set the text property/attributes of the title and the labels through\n"
  "the vtkTextProperty objects associated with these components.\n\n"
  "@sa\n"
  "vtkParallelCoordinatesActor vtkXYPlotActor vtkSpiderPlotActor\n"
  "vtkPieChartActor\n\n";


static PyObject *
PyvtkBarChartActor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBarChartActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBarChartActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBarChartActor *tempr = vtkBarChartActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBarChartActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBarChartActor::NewInstance());

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
PyvtkBarChartActor_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkBarChartActor::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkBarChartActor::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_SetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

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
      op->vtkBarChartActor::SetTitleVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_GetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTitleVisibility() :
      op->vtkBarChartActor::GetTitleVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_TitleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TitleVisibilityOn();
    }
    else
    {
      op->vtkBarChartActor::TitleVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_TitleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TitleVisibilityOff();
    }
    else
    {
      op->vtkBarChartActor::TitleVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

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
      op->vtkBarChartActor::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkBarChartActor::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_SetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

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
      op->vtkBarChartActor::SetTitleTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleTextProperty() :
      op->vtkBarChartActor::GetTitleTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_SetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

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
      op->vtkBarChartActor::SetLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_GetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelVisibility() :
      op->vtkBarChartActor::GetLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_LabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOn();
    }
    else
    {
      op->vtkBarChartActor::LabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_LabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOff();
    }
    else
    {
      op->vtkBarChartActor::LabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

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
      op->vtkBarChartActor::SetLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty() :
      op->vtkBarChartActor::GetLabelTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_SetBarColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBarColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

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
      op->SetBarColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkBarChartActor::SetBarColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBarChartActor_SetBarColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBarColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

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
      op->SetBarColor(temp0, temp1);
    }
    else
    {
      op->vtkBarChartActor::SetBarColor(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBarChartActor_SetBarColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkBarChartActor_SetBarColor_s1(self, args);
    case 2:
      return PyvtkBarChartActor_SetBarColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBarColor");
  return nullptr;
}



static PyObject *
PyvtkBarChartActor_GetBarColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBarColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBarColor(temp0) :
      op->vtkBarChartActor::GetBarColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_SetBarLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBarLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBarLabel(temp0, temp1);
    }
    else
    {
      op->vtkBarChartActor::SetBarLabel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_GetBarLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBarLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetBarLabel(temp0) :
      op->vtkBarChartActor::GetBarLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_SetYTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYTitle(temp0);
    }
    else
    {
      op->vtkBarChartActor::SetYTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_GetYTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetYTitle() :
      op->vtkBarChartActor::GetYTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_SetLegendVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

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
      op->vtkBarChartActor::SetLegendVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_GetLegendVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLegendVisibility() :
      op->vtkBarChartActor::GetLegendVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_LegendVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LegendVisibilityOn();
    }
    else
    {
      op->vtkBarChartActor::LegendVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_LegendVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LegendVisibilityOff();
    }
    else
    {
      op->vtkBarChartActor::LegendVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_GetLegendActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLegendBoxActor *tempr = (ap.IsBound() ?
      op->GetLegendActor() :
      op->vtkBarChartActor::GetLegendActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkBarChartActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkBarChartActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkBarChartActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkBarChartActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBarChartActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

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
      op->vtkBarChartActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBarChartActor_Methods[] = {
  {"IsTypeOf", PyvtkBarChartActor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for type information and printing.\n"},
  {"IsA", PyvtkBarChartActor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for type information and printing.\n"},
  {"SafeDownCast", PyvtkBarChartActor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBarChartActor\nC++: static vtkBarChartActor *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for type information and printing.\n"},
  {"NewInstance", PyvtkBarChartActor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBarChartActor\nC++: vtkBarChartActor *NewInstance()\n\nStandard methods for type information and printing.\n"},
  {"SetInput", PyvtkBarChartActor_SetInput, METH_VARARGS,
   "V.SetInput(vtkDataObject)\nC++: virtual void SetInput(vtkDataObject *)\n\nSet the input to the bar chart actor.\n"},
  {"GetInput", PyvtkBarChartActor_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkDataObject\nC++: virtual vtkDataObject *GetInput()\n\nGet the input data object to this actor.\n"},
  {"SetTitleVisibility", PyvtkBarChartActor_SetTitleVisibility, METH_VARARGS,
   "V.SetTitleVisibility(int)\nC++: virtual void SetTitleVisibility(vtkTypeBool _arg)\n\nEnable/Disable the display of a plot title.\n"},
  {"GetTitleVisibility", PyvtkBarChartActor_GetTitleVisibility, METH_VARARGS,
   "V.GetTitleVisibility() -> int\nC++: virtual vtkTypeBool GetTitleVisibility()\n\nEnable/Disable the display of a plot title.\n"},
  {"TitleVisibilityOn", PyvtkBarChartActor_TitleVisibilityOn, METH_VARARGS,
   "V.TitleVisibilityOn()\nC++: virtual void TitleVisibilityOn()\n\nEnable/Disable the display of a plot title.\n"},
  {"TitleVisibilityOff", PyvtkBarChartActor_TitleVisibilityOff, METH_VARARGS,
   "V.TitleVisibilityOff()\nC++: virtual void TitleVisibilityOff()\n\nEnable/Disable the display of a plot title.\n"},
  {"SetTitle", PyvtkBarChartActor_SetTitle, METH_VARARGS,
   "V.SetTitle(string)\nC++: virtual void SetTitle(const char *_arg)\n\nSet/Get the title of the bar chart.\n"},
  {"GetTitle", PyvtkBarChartActor_GetTitle, METH_VARARGS,
   "V.GetTitle() -> string\nC++: virtual char *GetTitle()\n\nSet/Get the title of the bar chart.\n"},
  {"SetTitleTextProperty", PyvtkBarChartActor_SetTitleTextProperty, METH_VARARGS,
   "V.SetTitleTextProperty(vtkTextProperty)\nC++: virtual void SetTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the title text property. The property controls the\nappearance of the plot title.\n"},
  {"GetTitleTextProperty", PyvtkBarChartActor_GetTitleTextProperty, METH_VARARGS,
   "V.GetTitleTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTitleTextProperty()\n\nSet/Get the title text property. The property controls the\nappearance of the plot title.\n"},
  {"SetLabelVisibility", PyvtkBarChartActor_SetLabelVisibility, METH_VARARGS,
   "V.SetLabelVisibility(int)\nC++: virtual void SetLabelVisibility(vtkTypeBool _arg)\n\nEnable/Disable the display of bar labels.\n"},
  {"GetLabelVisibility", PyvtkBarChartActor_GetLabelVisibility, METH_VARARGS,
   "V.GetLabelVisibility() -> int\nC++: virtual vtkTypeBool GetLabelVisibility()\n\nEnable/Disable the display of bar labels.\n"},
  {"LabelVisibilityOn", PyvtkBarChartActor_LabelVisibilityOn, METH_VARARGS,
   "V.LabelVisibilityOn()\nC++: virtual void LabelVisibilityOn()\n\nEnable/Disable the display of bar labels.\n"},
  {"LabelVisibilityOff", PyvtkBarChartActor_LabelVisibilityOff, METH_VARARGS,
   "V.LabelVisibilityOff()\nC++: virtual void LabelVisibilityOff()\n\nEnable/Disable the display of bar labels.\n"},
  {"SetLabelTextProperty", PyvtkBarChartActor_SetLabelTextProperty, METH_VARARGS,
   "V.SetLabelTextProperty(vtkTextProperty)\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p)\n\nSet/Get the labels text property. This controls the appearance of\nall bar bar labels.\n"},
  {"GetLabelTextProperty", PyvtkBarChartActor_GetLabelTextProperty, METH_VARARGS,
   "V.GetLabelTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLabelTextProperty()\n\nSet/Get the labels text property. This controls the appearance of\nall bar bar labels.\n"},
  {"SetBarColor", PyvtkBarChartActor_SetBarColor, METH_VARARGS,
   "V.SetBarColor(int, float, float, float)\nC++: void SetBarColor(int i, double r, double g, double b)\nV.SetBarColor(int, (float, float, float))\nC++: void SetBarColor(int i, const double color[3])\n\nSpecify colors for each bar. If not specified, they are\nautomatically generated.\n"},
  {"GetBarColor", PyvtkBarChartActor_GetBarColor, METH_VARARGS,
   "V.GetBarColor(int) -> (float, ...)\nC++: double *GetBarColor(int i)\n\nSpecify colors for each bar. If not specified, they are\nautomatically generated.\n"},
  {"SetBarLabel", PyvtkBarChartActor_SetBarLabel, METH_VARARGS,
   "V.SetBarLabel(int, string)\nC++: void SetBarLabel(const int i, const char *)\n\nSpecify the names of each bar. If not specified, then an integer\nnumber is automatically generated.\n"},
  {"GetBarLabel", PyvtkBarChartActor_GetBarLabel, METH_VARARGS,
   "V.GetBarLabel(int) -> string\nC++: const char *GetBarLabel(int i)\n\nSpecify the names of each bar. If not specified, then an integer\nnumber is automatically generated.\n"},
  {"SetYTitle", PyvtkBarChartActor_SetYTitle, METH_VARARGS,
   "V.SetYTitle(string)\nC++: virtual void SetYTitle(const char *_arg)\n\nSpecify the title of the y-axis.\n"},
  {"GetYTitle", PyvtkBarChartActor_GetYTitle, METH_VARARGS,
   "V.GetYTitle() -> string\nC++: virtual char *GetYTitle()\n\nSpecify the title of the y-axis.\n"},
  {"SetLegendVisibility", PyvtkBarChartActor_SetLegendVisibility, METH_VARARGS,
   "V.SetLegendVisibility(int)\nC++: virtual void SetLegendVisibility(vtkTypeBool _arg)\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {"GetLegendVisibility", PyvtkBarChartActor_GetLegendVisibility, METH_VARARGS,
   "V.GetLegendVisibility() -> int\nC++: virtual vtkTypeBool GetLegendVisibility()\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {"LegendVisibilityOn", PyvtkBarChartActor_LegendVisibilityOn, METH_VARARGS,
   "V.LegendVisibilityOn()\nC++: virtual void LegendVisibilityOn()\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {"LegendVisibilityOff", PyvtkBarChartActor_LegendVisibilityOff, METH_VARARGS,
   "V.LegendVisibilityOff()\nC++: virtual void LegendVisibilityOff()\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {"GetLegendActor", PyvtkBarChartActor_GetLegendActor, METH_VARARGS,
   "V.GetLegendActor() -> vtkLegendBoxActor\nC++: virtual vtkLegendBoxActor *GetLegendActor()\n\nRetrieve handles to the legend box. This is useful if you would\nlike to manually control the legend appearance.\n"},
  {"RenderOverlay", PyvtkBarChartActor_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\nDraw the bar plot.\n"},
  {"RenderOpaqueGeometry", PyvtkBarChartActor_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nDraw the bar plot.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkBarChartActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nDraw the bar plot.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkBarChartActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {"ReleaseGraphicsResources", PyvtkBarChartActor_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBarChartActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkBarChartActor", // tp_name
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
  PyvtkBarChartActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBarChartActor_StaticNew()
{
  return vtkBarChartActor::New();
}

PyObject *PyvtkBarChartActor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBarChartActor_Type, PyvtkBarChartActor_Methods,
    "vtkBarChartActor",
 &PyvtkBarChartActor_StaticNew);

  PyTypeObject *pytype = &PyvtkBarChartActor_Type;

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

void PyVTKAddFile_vtkBarChartActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBarChartActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBarChartActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

