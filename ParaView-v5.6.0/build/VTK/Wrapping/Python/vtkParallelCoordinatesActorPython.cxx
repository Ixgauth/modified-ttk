// python wrapper for vtkParallelCoordinatesActor
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
#include "vtkParallelCoordinatesActor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParallelCoordinatesActor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkParallelCoordinatesActor_ClassNew(); }

#ifndef DECLARED_PyvtkActor2D_ClassNew
extern "C" { PyObject *PyvtkActor2D_ClassNew(); }
#define DECLARED_PyvtkActor2D_ClassNew
#endif

static const char *PyvtkParallelCoordinatesActor_Doc =
  "vtkParallelCoordinatesActor - create parallel coordinate display from\ninput field\n\n"
  "Superclass: vtkActor2D\n\n"
  "vtkParallelCoordinatesActor generates a parallel coordinates plot\n"
  "from an input field (i.e., vtkDataObject). Parallel coordinates\n"
  "represent N-dimensional data by using a set of N parallel axes (not\n"
  "orthogonal like the usual x-y-z Cartesian axes). Each N-dimensional\n"
  "point is plotted as a polyline, were each of the N components of the\n"
  "point lie on one of the N axes, and the components are connected by\n"
  "straight lines.\n\n"
  "To use this class, you must specify an input data object. You'll\n"
  "probably also want to specify the position of the plot be setting the\n"
  "Position and Position2 instance variables, which define a rectangle\n"
  "in which the plot lies. Another important parameter is the\n"
  "IndependentVariables ivar, which tells the instance how to interpret\n"
  "the field data (independent variables as the rows or columns of the\n"
  "field). There are also many other instance variables that control the\n"
  "look of the plot includes its title, attributes, number of ticks on\n"
  "the axes, etc.\n\n"
  "Set the text property/attributes of the title and the labels through\n"
  "the vtkTextProperty objects associated to this actor.\n\n"
  "@warning\n"
  "Field data is not necessarily \"rectangular\" in shape. In these cases,\n"
  "some of the data may not be plotted.\n\n"
  "@warning\n"
  "Field data can contain non-numeric arrays (i.e. arrays not subclasses\n"
  "of vtkDataArray). Such arrays are skipped.\n\n"
  "@warning\n"
  "The early implementation lacks many features that could be added in\n"
  "the future. This includes the ability to \"brush\" data (choose regions\n"
  "along an axis and highlight any points/lines passing through the\n"
  "region); efficiency is really bad; more control over the properties\n"
  "of the plot (separate properties for each axes,title,etc.; and using\n"
  "the labels found in the field to label each of the axes.\n\n"
  "@sa\n"
  "vtkAxisActor3D can be used to create axes in world coordinate space.\n"
  "vtkActor2D vtkTextMapper vtkPolyDataMapper2D vtkScalarBarActor\n"
  "vtkCoordinate vtkTextProperty\n\n";


static PyObject *
PyvtkParallelCoordinatesActor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParallelCoordinatesActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParallelCoordinatesActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParallelCoordinatesActor *tempr = vtkParallelCoordinatesActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParallelCoordinatesActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParallelCoordinatesActor::NewInstance());

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
PyvtkParallelCoordinatesActor_SetIndependentVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndependentVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

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
      op->vtkParallelCoordinatesActor::SetIndependentVariables(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_GetIndependentVariablesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndependentVariablesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIndependentVariablesMinValue() :
      op->vtkParallelCoordinatesActor::GetIndependentVariablesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_GetIndependentVariablesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndependentVariablesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIndependentVariablesMaxValue() :
      op->vtkParallelCoordinatesActor::GetIndependentVariablesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_GetIndependentVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndependentVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIndependentVariables() :
      op->vtkParallelCoordinatesActor::GetIndependentVariables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_SetIndependentVariablesToColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndependentVariablesToColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIndependentVariablesToColumns();
    }
    else
    {
      op->vtkParallelCoordinatesActor::SetIndependentVariablesToColumns();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_SetIndependentVariablesToRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndependentVariablesToRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIndependentVariablesToRows();
    }
    else
    {
      op->vtkParallelCoordinatesActor::SetIndependentVariablesToRows();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

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
      op->vtkParallelCoordinatesActor::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkParallelCoordinatesActor::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_SetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLabels(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesActor::SetNumberOfLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_GetNumberOfLabelsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabelsMinValue() :
      op->vtkParallelCoordinatesActor::GetNumberOfLabelsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_GetNumberOfLabelsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabelsMaxValue() :
      op->vtkParallelCoordinatesActor::GetNumberOfLabelsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_GetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabels() :
      op->vtkParallelCoordinatesActor::GetNumberOfLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelFormat(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesActor::SetLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkParallelCoordinatesActor::GetLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_SetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

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
      op->vtkParallelCoordinatesActor::SetTitleTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleTextProperty() :
      op->vtkParallelCoordinatesActor::GetTitleTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

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
      op->vtkParallelCoordinatesActor::SetLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty() :
      op->vtkParallelCoordinatesActor::GetLabelTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkParallelCoordinatesActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkParallelCoordinatesActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkParallelCoordinatesActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkParallelCoordinatesActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_SetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

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
      op->vtkParallelCoordinatesActor::SetInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

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
      op->vtkParallelCoordinatesActor::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkParallelCoordinatesActor::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

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
      op->vtkParallelCoordinatesActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkParallelCoordinatesActor_Methods[] = {
  {"IsTypeOf", PyvtkParallelCoordinatesActor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParallelCoordinatesActor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParallelCoordinatesActor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkParallelCoordinatesActor\nC++: static vtkParallelCoordinatesActor *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParallelCoordinatesActor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkParallelCoordinatesActor\nC++: vtkParallelCoordinatesActor *NewInstance()\n\n"},
  {"SetIndependentVariables", PyvtkParallelCoordinatesActor_SetIndependentVariables, METH_VARARGS,
   "V.SetIndependentVariables(int)\nC++: virtual void SetIndependentVariables(int _arg)\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {"GetIndependentVariablesMinValue", PyvtkParallelCoordinatesActor_GetIndependentVariablesMinValue, METH_VARARGS,
   "V.GetIndependentVariablesMinValue() -> int\nC++: virtual int GetIndependentVariablesMinValue()\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {"GetIndependentVariablesMaxValue", PyvtkParallelCoordinatesActor_GetIndependentVariablesMaxValue, METH_VARARGS,
   "V.GetIndependentVariablesMaxValue() -> int\nC++: virtual int GetIndependentVariablesMaxValue()\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {"GetIndependentVariables", PyvtkParallelCoordinatesActor_GetIndependentVariables, METH_VARARGS,
   "V.GetIndependentVariables() -> int\nC++: virtual int GetIndependentVariables()\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {"SetIndependentVariablesToColumns", PyvtkParallelCoordinatesActor_SetIndependentVariablesToColumns, METH_VARARGS,
   "V.SetIndependentVariablesToColumns()\nC++: void SetIndependentVariablesToColumns()\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {"SetIndependentVariablesToRows", PyvtkParallelCoordinatesActor_SetIndependentVariablesToRows, METH_VARARGS,
   "V.SetIndependentVariablesToRows()\nC++: void SetIndependentVariablesToRows()\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {"SetTitle", PyvtkParallelCoordinatesActor_SetTitle, METH_VARARGS,
   "V.SetTitle(string)\nC++: virtual void SetTitle(const char *_arg)\n\nSet/Get the title of the parallel coordinates plot.\n"},
  {"GetTitle", PyvtkParallelCoordinatesActor_GetTitle, METH_VARARGS,
   "V.GetTitle() -> string\nC++: virtual char *GetTitle()\n\nSet/Get the title of the parallel coordinates plot.\n"},
  {"SetNumberOfLabels", PyvtkParallelCoordinatesActor_SetNumberOfLabels, METH_VARARGS,
   "V.SetNumberOfLabels(int)\nC++: virtual void SetNumberOfLabels(int _arg)\n\nSet/Get the number of annotation labels to show along each axis.\nThis values is a suggestion: the number of labels may vary\ndepending on the particulars of the data.\n"},
  {"GetNumberOfLabelsMinValue", PyvtkParallelCoordinatesActor_GetNumberOfLabelsMinValue, METH_VARARGS,
   "V.GetNumberOfLabelsMinValue() -> int\nC++: virtual int GetNumberOfLabelsMinValue()\n\nSet/Get the number of annotation labels to show along each axis.\nThis values is a suggestion: the number of labels may vary\ndepending on the particulars of the data.\n"},
  {"GetNumberOfLabelsMaxValue", PyvtkParallelCoordinatesActor_GetNumberOfLabelsMaxValue, METH_VARARGS,
   "V.GetNumberOfLabelsMaxValue() -> int\nC++: virtual int GetNumberOfLabelsMaxValue()\n\nSet/Get the number of annotation labels to show along each axis.\nThis values is a suggestion: the number of labels may vary\ndepending on the particulars of the data.\n"},
  {"GetNumberOfLabels", PyvtkParallelCoordinatesActor_GetNumberOfLabels, METH_VARARGS,
   "V.GetNumberOfLabels() -> int\nC++: virtual int GetNumberOfLabels()\n\nSet/Get the number of annotation labels to show along each axis.\nThis values is a suggestion: the number of labels may vary\ndepending on the particulars of the data.\n"},
  {"SetLabelFormat", PyvtkParallelCoordinatesActor_SetLabelFormat, METH_VARARGS,
   "V.SetLabelFormat(string)\nC++: virtual void SetLabelFormat(const char *_arg)\n\nSet/Get the format with which to print the labels on the axes.\n"},
  {"GetLabelFormat", PyvtkParallelCoordinatesActor_GetLabelFormat, METH_VARARGS,
   "V.GetLabelFormat() -> string\nC++: virtual char *GetLabelFormat()\n\nSet/Get the format with which to print the labels on the axes.\n"},
  {"SetTitleTextProperty", PyvtkParallelCoordinatesActor_SetTitleTextProperty, METH_VARARGS,
   "V.SetTitleTextProperty(vtkTextProperty)\nC++: virtual void SetTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the title text property.\n"},
  {"GetTitleTextProperty", PyvtkParallelCoordinatesActor_GetTitleTextProperty, METH_VARARGS,
   "V.GetTitleTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTitleTextProperty()\n\nSet/Get the title text property.\n"},
  {"SetLabelTextProperty", PyvtkParallelCoordinatesActor_SetLabelTextProperty, METH_VARARGS,
   "V.SetLabelTextProperty(vtkTextProperty)\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p)\n\nSet/Get the labels text property.\n"},
  {"GetLabelTextProperty", PyvtkParallelCoordinatesActor_GetLabelTextProperty, METH_VARARGS,
   "V.GetLabelTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLabelTextProperty()\n\nSet/Get the labels text property.\n"},
  {"RenderOpaqueGeometry", PyvtkParallelCoordinatesActor_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nDraw the parallel coordinates plot.\n"},
  {"RenderOverlay", PyvtkParallelCoordinatesActor_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\nDraw the parallel coordinates plot.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkParallelCoordinatesActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nDraw the parallel coordinates plot.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkParallelCoordinatesActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {"SetInputConnection", PyvtkParallelCoordinatesActor_SetInputConnection, METH_VARARGS,
   "V.SetInputConnection(vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *)\n\nSet the input to the parallel coordinates actor. Creates a\npipeline connection.\n"},
  {"SetInputData", PyvtkParallelCoordinatesActor_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkDataObject)\nC++: virtual void SetInputData(vtkDataObject *)\n\nSet the input to the parallel coordinates actor. Does not create\na pipeline connection.\n"},
  {"GetInput", PyvtkParallelCoordinatesActor_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkDataObject\nC++: vtkDataObject *GetInput()\n\nRemove a dataset from the list of data to append.\n"},
  {"ReleaseGraphicsResources", PyvtkParallelCoordinatesActor_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkParallelCoordinatesActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkParallelCoordinatesActor", // tp_name
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
  PyvtkParallelCoordinatesActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParallelCoordinatesActor_StaticNew()
{
  return vtkParallelCoordinatesActor::New();
}

PyObject *PyvtkParallelCoordinatesActor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkParallelCoordinatesActor_Type, PyvtkParallelCoordinatesActor_Methods,
    "vtkParallelCoordinatesActor",
 &PyvtkParallelCoordinatesActor_StaticNew);

  PyTypeObject *pytype = &PyvtkParallelCoordinatesActor_Type;

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

void PyVTKAddFile_vtkParallelCoordinatesActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParallelCoordinatesActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParallelCoordinatesActor", o) != 0)
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

