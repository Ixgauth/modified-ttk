// python wrapper for vtkSpiderPlotActor
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
#include "vtkSpiderPlotActor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSpiderPlotActor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSpiderPlotActor_ClassNew(); }

#ifndef DECLARED_PyvtkActor2D_ClassNew
extern "C" { PyObject *PyvtkActor2D_ClassNew(); }
#define DECLARED_PyvtkActor2D_ClassNew
#endif

static const char *PyvtkSpiderPlotActor_Doc =
  "vtkSpiderPlotActor - create a spider plot from input field\n\n"
  "Superclass: vtkActor2D\n\n"
  "vtkSpiderPlotActor generates a spider plot from an input field (i.e.,\n"
  "vtkDataObject). A spider plot represents N-dimensional data by using\n"
  "a set of N axes that originate from the center of a circle, and form\n"
  "the spokes of a wheel (like a spider web).  Each N-dimensional point\n"
  "is plotted as a polyline that forms a closed polygon; the vertices of\n"
  "the polygon are plotted against the radial axes.\n\n"
  "To use this class, you must specify an input data object. You'll\n"
  "probably also want to specify the position of the plot be setting the\n"
  "Position and Position2 instance variables, which define a rectangle\n"
  "in which the plot lies. Another important parameter is the\n"
  "IndependentVariables ivar, which tells the instance how to interpret\n"
  "the field data (independent variables as the rows or columns of the\n"
  "field). There are also many other instance variables that control the\n"
  "look of the plot includes its title and legend.\n\n"
  "Set the text property/attributes of the title and the labels through\n"
  "the vtkTextProperty objects associated with these components.\n\n"
  "@warning\n"
  "Field data is not necessarily \"rectangular\" in shape. In these cases,\n"
  "some of the data may not be plotted.\n\n"
  "@warning\n"
  "Field data can contain non-numeric arrays (i.e. arrays not subclasses\n"
  "of vtkDataArray). Such arrays are skipped.\n\n"
  "@sa\n"
  "vtkParallelCoordinatesActor vtkXYPlotActor2D\n\n";


static PyObject *
PyvtkSpiderPlotActor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSpiderPlotActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpiderPlotActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSpiderPlotActor *tempr = vtkSpiderPlotActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpiderPlotActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpiderPlotActor::NewInstance());

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
PyvtkSpiderPlotActor_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

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
      op->vtkSpiderPlotActor::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

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
      op->vtkSpiderPlotActor::SetInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkSpiderPlotActor::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetIndependentVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndependentVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIndependentVariables(temp0);
    }
    else
    {
      op->vtkSpiderPlotActor::SetIndependentVariables(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetIndependentVariablesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndependentVariablesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIndependentVariablesMinValue() :
      op->vtkSpiderPlotActor::GetIndependentVariablesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetIndependentVariablesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndependentVariablesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIndependentVariablesMaxValue() :
      op->vtkSpiderPlotActor::GetIndependentVariablesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetIndependentVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndependentVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIndependentVariables() :
      op->vtkSpiderPlotActor::GetIndependentVariables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetIndependentVariablesToColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndependentVariablesToColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIndependentVariablesToColumns();
    }
    else
    {
      op->vtkSpiderPlotActor::SetIndependentVariablesToColumns();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetIndependentVariablesToRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndependentVariablesToRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIndependentVariablesToRows();
    }
    else
    {
      op->vtkSpiderPlotActor::SetIndependentVariablesToRows();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

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
      op->vtkSpiderPlotActor::SetTitleVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTitleVisibility() :
      op->vtkSpiderPlotActor::GetTitleVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_TitleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TitleVisibilityOn();
    }
    else
    {
      op->vtkSpiderPlotActor::TitleVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_TitleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TitleVisibilityOff();
    }
    else
    {
      op->vtkSpiderPlotActor::TitleVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

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
      op->vtkSpiderPlotActor::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkSpiderPlotActor::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

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
      op->vtkSpiderPlotActor::SetTitleTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleTextProperty() :
      op->vtkSpiderPlotActor::GetTitleTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

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
      op->vtkSpiderPlotActor::SetLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelVisibility() :
      op->vtkSpiderPlotActor::GetLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_LabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOn();
    }
    else
    {
      op->vtkSpiderPlotActor::LabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_LabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOff();
    }
    else
    {
      op->vtkSpiderPlotActor::LabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

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
      op->vtkSpiderPlotActor::SetLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty() :
      op->vtkSpiderPlotActor::GetLabelTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetNumberOfRings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfRings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfRings(temp0);
    }
    else
    {
      op->vtkSpiderPlotActor::SetNumberOfRings(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetNumberOfRingsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRingsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRingsMinValue() :
      op->vtkSpiderPlotActor::GetNumberOfRingsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetNumberOfRingsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRingsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRingsMaxValue() :
      op->vtkSpiderPlotActor::GetNumberOfRingsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetNumberOfRings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRings() :
      op->vtkSpiderPlotActor::GetNumberOfRings());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetAxisLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabel(temp0, temp1);
    }
    else
    {
      op->vtkSpiderPlotActor::SetAxisLabel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetAxisLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAxisLabel(temp0) :
      op->vtkSpiderPlotActor::GetAxisLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetAxisRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  int temp0;
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
      op->SetAxisRange(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSpiderPlotActor::SetAxisRange(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSpiderPlotActor_SetAxisRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetAxisRange(temp0, temp1);
    }
    else
    {
      op->vtkSpiderPlotActor::SetAxisRange(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSpiderPlotActor_SetAxisRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSpiderPlotActor_SetAxisRange_s1(self, args);
    case 2:
      return PyvtkSpiderPlotActor_SetAxisRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisRange");
  return nullptr;
}



static PyObject *
PyvtkSpiderPlotActor_GetAxisRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetAxisRange(temp0, temp1);
    }
    else
    {
      op->vtkSpiderPlotActor::GetAxisRange(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetPlotColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

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
      op->SetPlotColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSpiderPlotActor::SetPlotColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSpiderPlotActor_SetPlotColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

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
      op->SetPlotColor(temp0, temp1);
    }
    else
    {
      op->vtkSpiderPlotActor::SetPlotColor(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSpiderPlotActor_SetPlotColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkSpiderPlotActor_SetPlotColor_s1(self, args);
    case 2:
      return PyvtkSpiderPlotActor_SetPlotColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPlotColor");
  return nullptr;
}



static PyObject *
PyvtkSpiderPlotActor_GetPlotColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPlotColor(temp0) :
      op->vtkSpiderPlotActor::GetPlotColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetLegendVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

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
      op->vtkSpiderPlotActor::SetLegendVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetLegendVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLegendVisibility() :
      op->vtkSpiderPlotActor::GetLegendVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_LegendVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LegendVisibilityOn();
    }
    else
    {
      op->vtkSpiderPlotActor::LegendVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_LegendVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LegendVisibilityOff();
    }
    else
    {
      op->vtkSpiderPlotActor::LegendVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetLegendActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLegendBoxActor *tempr = (ap.IsBound() ?
      op->GetLegendActor() :
      op->vtkSpiderPlotActor::GetLegendActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkSpiderPlotActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkSpiderPlotActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkSpiderPlotActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkSpiderPlotActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

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
      op->vtkSpiderPlotActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSpiderPlotActor_Methods[] = {
  {"IsTypeOf", PyvtkSpiderPlotActor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for type information and printing.\n"},
  {"IsA", PyvtkSpiderPlotActor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for type information and printing.\n"},
  {"SafeDownCast", PyvtkSpiderPlotActor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSpiderPlotActor\nC++: static vtkSpiderPlotActor *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for type information and printing.\n"},
  {"NewInstance", PyvtkSpiderPlotActor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSpiderPlotActor\nC++: vtkSpiderPlotActor *NewInstance()\n\nStandard methods for type information and printing.\n"},
  {"SetInputData", PyvtkSpiderPlotActor_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkDataObject)\nC++: virtual void SetInputData(vtkDataObject *)\n\nSet the input to the pie chart actor. SetInputData() does not\nconnect the pipeline whereas SetInputConnection() does.\n"},
  {"SetInputConnection", PyvtkSpiderPlotActor_SetInputConnection, METH_VARARGS,
   "V.SetInputConnection(vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *)\n\nSet the input to the pie chart actor. SetInputData() does not\nconnect the pipeline whereas SetInputConnection() does.\n"},
  {"GetInput", PyvtkSpiderPlotActor_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkDataObject\nC++: virtual vtkDataObject *GetInput()\n\nGet the input data object to this actor.\n"},
  {"SetIndependentVariables", PyvtkSpiderPlotActor_SetIndependentVariables, METH_VARARGS,
   "V.SetIndependentVariables(int)\nC++: virtual void SetIndependentVariables(int _arg)\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {"GetIndependentVariablesMinValue", PyvtkSpiderPlotActor_GetIndependentVariablesMinValue, METH_VARARGS,
   "V.GetIndependentVariablesMinValue() -> int\nC++: virtual int GetIndependentVariablesMinValue()\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {"GetIndependentVariablesMaxValue", PyvtkSpiderPlotActor_GetIndependentVariablesMaxValue, METH_VARARGS,
   "V.GetIndependentVariablesMaxValue() -> int\nC++: virtual int GetIndependentVariablesMaxValue()\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {"GetIndependentVariables", PyvtkSpiderPlotActor_GetIndependentVariables, METH_VARARGS,
   "V.GetIndependentVariables() -> int\nC++: virtual int GetIndependentVariables()\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {"SetIndependentVariablesToColumns", PyvtkSpiderPlotActor_SetIndependentVariablesToColumns, METH_VARARGS,
   "V.SetIndependentVariablesToColumns()\nC++: void SetIndependentVariablesToColumns()\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {"SetIndependentVariablesToRows", PyvtkSpiderPlotActor_SetIndependentVariablesToRows, METH_VARARGS,
   "V.SetIndependentVariablesToRows()\nC++: void SetIndependentVariablesToRows()\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {"SetTitleVisibility", PyvtkSpiderPlotActor_SetTitleVisibility, METH_VARARGS,
   "V.SetTitleVisibility(int)\nC++: virtual void SetTitleVisibility(vtkTypeBool _arg)\n\nEnable/Disable the display of a plot title.\n"},
  {"GetTitleVisibility", PyvtkSpiderPlotActor_GetTitleVisibility, METH_VARARGS,
   "V.GetTitleVisibility() -> int\nC++: virtual vtkTypeBool GetTitleVisibility()\n\nEnable/Disable the display of a plot title.\n"},
  {"TitleVisibilityOn", PyvtkSpiderPlotActor_TitleVisibilityOn, METH_VARARGS,
   "V.TitleVisibilityOn()\nC++: virtual void TitleVisibilityOn()\n\nEnable/Disable the display of a plot title.\n"},
  {"TitleVisibilityOff", PyvtkSpiderPlotActor_TitleVisibilityOff, METH_VARARGS,
   "V.TitleVisibilityOff()\nC++: virtual void TitleVisibilityOff()\n\nEnable/Disable the display of a plot title.\n"},
  {"SetTitle", PyvtkSpiderPlotActor_SetTitle, METH_VARARGS,
   "V.SetTitle(string)\nC++: virtual void SetTitle(const char *_arg)\n\nSet/Get the title of the spider plot.\n"},
  {"GetTitle", PyvtkSpiderPlotActor_GetTitle, METH_VARARGS,
   "V.GetTitle() -> string\nC++: virtual char *GetTitle()\n\nSet/Get the title of the spider plot.\n"},
  {"SetTitleTextProperty", PyvtkSpiderPlotActor_SetTitleTextProperty, METH_VARARGS,
   "V.SetTitleTextProperty(vtkTextProperty)\nC++: virtual void SetTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the title text property.\n"},
  {"GetTitleTextProperty", PyvtkSpiderPlotActor_GetTitleTextProperty, METH_VARARGS,
   "V.GetTitleTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTitleTextProperty()\n\nSet/Get the title text property.\n"},
  {"SetLabelVisibility", PyvtkSpiderPlotActor_SetLabelVisibility, METH_VARARGS,
   "V.SetLabelVisibility(int)\nC++: virtual void SetLabelVisibility(vtkTypeBool _arg)\n\n"},
  {"GetLabelVisibility", PyvtkSpiderPlotActor_GetLabelVisibility, METH_VARARGS,
   "V.GetLabelVisibility() -> int\nC++: virtual vtkTypeBool GetLabelVisibility()\n\n"},
  {"LabelVisibilityOn", PyvtkSpiderPlotActor_LabelVisibilityOn, METH_VARARGS,
   "V.LabelVisibilityOn()\nC++: virtual void LabelVisibilityOn()\n\n"},
  {"LabelVisibilityOff", PyvtkSpiderPlotActor_LabelVisibilityOff, METH_VARARGS,
   "V.LabelVisibilityOff()\nC++: virtual void LabelVisibilityOff()\n\n"},
  {"SetLabelTextProperty", PyvtkSpiderPlotActor_SetLabelTextProperty, METH_VARARGS,
   "V.SetLabelTextProperty(vtkTextProperty)\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p)\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {"GetLabelTextProperty", PyvtkSpiderPlotActor_GetLabelTextProperty, METH_VARARGS,
   "V.GetLabelTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLabelTextProperty()\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {"SetNumberOfRings", PyvtkSpiderPlotActor_SetNumberOfRings, METH_VARARGS,
   "V.SetNumberOfRings(int)\nC++: virtual void SetNumberOfRings(int _arg)\n\nSpecify the number of circumferential rings. If set to zero, then\nnone will be shown; otherwise the specified number will be shown.\n"},
  {"GetNumberOfRingsMinValue", PyvtkSpiderPlotActor_GetNumberOfRingsMinValue, METH_VARARGS,
   "V.GetNumberOfRingsMinValue() -> int\nC++: virtual int GetNumberOfRingsMinValue()\n\nSpecify the number of circumferential rings. If set to zero, then\nnone will be shown; otherwise the specified number will be shown.\n"},
  {"GetNumberOfRingsMaxValue", PyvtkSpiderPlotActor_GetNumberOfRingsMaxValue, METH_VARARGS,
   "V.GetNumberOfRingsMaxValue() -> int\nC++: virtual int GetNumberOfRingsMaxValue()\n\nSpecify the number of circumferential rings. If set to zero, then\nnone will be shown; otherwise the specified number will be shown.\n"},
  {"GetNumberOfRings", PyvtkSpiderPlotActor_GetNumberOfRings, METH_VARARGS,
   "V.GetNumberOfRings() -> int\nC++: virtual int GetNumberOfRings()\n\nSpecify the number of circumferential rings. If set to zero, then\nnone will be shown; otherwise the specified number will be shown.\n"},
  {"SetAxisLabel", PyvtkSpiderPlotActor_SetAxisLabel, METH_VARARGS,
   "V.SetAxisLabel(int, string)\nC++: void SetAxisLabel(const int i, const char *)\n\nSpecify the names of the radial spokes (i.e., the radial axes).\nIf not specified, then an integer number is automatically\ngenerated.\n"},
  {"GetAxisLabel", PyvtkSpiderPlotActor_GetAxisLabel, METH_VARARGS,
   "V.GetAxisLabel(int) -> string\nC++: const char *GetAxisLabel(int i)\n\nSpecify the names of the radial spokes (i.e., the radial axes).\nIf not specified, then an integer number is automatically\ngenerated.\n"},
  {"SetAxisRange", PyvtkSpiderPlotActor_SetAxisRange, METH_VARARGS,
   "V.SetAxisRange(int, float, float)\nC++: void SetAxisRange(int i, double min, double max)\nV.SetAxisRange(int, [float, float])\nC++: void SetAxisRange(int i, double range[2])\n\nSpecify the range of data on each radial axis. If not specified,\nthen the range is computed automatically.\n"},
  {"GetAxisRange", PyvtkSpiderPlotActor_GetAxisRange, METH_VARARGS,
   "V.GetAxisRange(int, [float, float])\nC++: void GetAxisRange(int i, double range[2])\n\nSpecify the range of data on each radial axis. If not specified,\nthen the range is computed automatically.\n"},
  {"SetPlotColor", PyvtkSpiderPlotActor_SetPlotColor, METH_VARARGS,
   "V.SetPlotColor(int, float, float, float)\nC++: void SetPlotColor(int i, double r, double g, double b)\nV.SetPlotColor(int, (float, float, float))\nC++: void SetPlotColor(int i, const double color[3])\n\nSpecify colors for each plot. If not specified, they are\nautomatically generated.\n"},
  {"GetPlotColor", PyvtkSpiderPlotActor_GetPlotColor, METH_VARARGS,
   "V.GetPlotColor(int) -> (float, ...)\nC++: double *GetPlotColor(int i)\n\nSpecify colors for each plot. If not specified, they are\nautomatically generated.\n"},
  {"SetLegendVisibility", PyvtkSpiderPlotActor_SetLegendVisibility, METH_VARARGS,
   "V.SetLegendVisibility(int)\nC++: virtual void SetLegendVisibility(vtkTypeBool _arg)\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {"GetLegendVisibility", PyvtkSpiderPlotActor_GetLegendVisibility, METH_VARARGS,
   "V.GetLegendVisibility() -> int\nC++: virtual vtkTypeBool GetLegendVisibility()\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {"LegendVisibilityOn", PyvtkSpiderPlotActor_LegendVisibilityOn, METH_VARARGS,
   "V.LegendVisibilityOn()\nC++: virtual void LegendVisibilityOn()\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {"LegendVisibilityOff", PyvtkSpiderPlotActor_LegendVisibilityOff, METH_VARARGS,
   "V.LegendVisibilityOff()\nC++: virtual void LegendVisibilityOff()\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {"GetLegendActor", PyvtkSpiderPlotActor_GetLegendActor, METH_VARARGS,
   "V.GetLegendActor() -> vtkLegendBoxActor\nC++: virtual vtkLegendBoxActor *GetLegendActor()\n\nRetrieve handles to the legend box. This is useful if you would\nlike to manually control the legend appearance.\n"},
  {"RenderOverlay", PyvtkSpiderPlotActor_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\nDraw the spider plot.\n"},
  {"RenderOpaqueGeometry", PyvtkSpiderPlotActor_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nDraw the spider plot.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkSpiderPlotActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nDraw the spider plot.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkSpiderPlotActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {"ReleaseGraphicsResources", PyvtkSpiderPlotActor_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSpiderPlotActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkSpiderPlotActor", // tp_name
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
  PyvtkSpiderPlotActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSpiderPlotActor_StaticNew()
{
  return vtkSpiderPlotActor::New();
}

PyObject *PyvtkSpiderPlotActor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSpiderPlotActor_Type, PyvtkSpiderPlotActor_Methods,
    "vtkSpiderPlotActor",
 &PyvtkSpiderPlotActor_StaticNew);

  PyTypeObject *pytype = &PyvtkSpiderPlotActor_Type;

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

void PyVTKAddFile_vtkSpiderPlotActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSpiderPlotActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSpiderPlotActor", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_IV_COLUMN", 0 },
        { "VTK_IV_ROW", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

