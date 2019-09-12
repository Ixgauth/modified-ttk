// python wrapper for vtkScatterPlotMatrix
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
#include "vtkVector.h"
#include "vtkStdString.h"
#include "vtkColor.h"
#include "vtkContextMouseEvent.h"
#include "vtkScatterPlotMatrix.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkScatterPlotMatrix(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkScatterPlotMatrix_ClassNew(); }

#ifndef DECLARED_PyvtkChartMatrix_ClassNew
extern "C" { PyObject *PyvtkChartMatrix_ClassNew(); }
#define DECLARED_PyvtkChartMatrix_ClassNew
#endif

static const char *PyvtkScatterPlotMatrix_Doc =
  "vtkScatterPlotMatrix - container for a matrix of charts.\n\n"
  "Superclass: vtkChartMatrix\n\n"
  "This class contains a matrix of charts. These charts will be of type\n"
  "vtkChartXY by default, but this can be overridden. The class will\n"
  "manage their layout and object lifetime.\n\n";


static PyObject *
PyvtkScatterPlotMatrix_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkScatterPlotMatrix::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkScatterPlotMatrix::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkScatterPlotMatrix *tempr = vtkScatterPlotMatrix::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScatterPlotMatrix *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkScatterPlotMatrix::NewInstance());

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
PyvtkScatterPlotMatrix_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkScatterPlotMatrix::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkScatterPlotMatrix::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkContextScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContextScene"))
  {
    if (ap.IsBound())
    {
      op->SetScene(temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetActivePlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetActivePlot(*temp0) :
      op->vtkScatterPlotMatrix::SetActivePlot(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
  {
    if (ap.IsBound())
    {
      op->SetSize(*temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetSize(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetActivePlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActivePlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2i tempr = (ap.IsBound() ?
      op->GetActivePlot() :
      op->vtkScatterPlotMatrix::GetActivePlot());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetAnnotationLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAnnotationLink *tempr = (ap.IsBound() ?
      op->GetAnnotationLink() :
      op->vtkScatterPlotMatrix::GetAnnotationLink());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetColumnVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkStdString temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetColumnVisibility(temp0, temp1);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetColumnVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_InsertVisibleColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertVisibleColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkStdString temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->InsertVisibleColumn(temp0, temp1);
    }
    else
    {
      op->vtkScatterPlotMatrix::InsertVisibleColumn(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetColumnVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColumnVisibility(temp0) :
      op->vtkScatterPlotMatrix::GetColumnVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetColumnVisibilityAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnVisibilityAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColumnVisibilityAll(temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetColumnVisibilityAll(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetVisibleColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibleColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetVisibleColumns() :
      op->vtkScatterPlotMatrix::GetVisibleColumns());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetVisibleColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibleColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetVisibleColumns(temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetVisibleColumns(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetNumberOfBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfBins(temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetNumberOfBins(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetNumberOfBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBins() :
      op->vtkScatterPlotMatrix::GetNumberOfBins());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetPlotColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  vtkColor4ub *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor4ub"))
  {
    if (ap.IsBound())
    {
      op->SetPlotColor(temp0, *temp1);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetPlotColor(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetPlotMarkerStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotMarkerStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPlotMarkerStyle(temp0, temp1);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetPlotMarkerStyle(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetPlotMarkerSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotMarkerSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPlotMarkerSize(temp0, temp1);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetPlotMarkerSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_Hit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->Hit(*temp0) :
      op->vtkScatterPlotMatrix::Hit(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseMoveEvent(*temp0) :
      op->vtkScatterPlotMatrix::MouseMoveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_MouseButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonPressEvent(*temp0) :
      op->vtkScatterPlotMatrix::MouseButtonPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_MouseButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonReleaseEvent(*temp0) :
      op->vtkScatterPlotMatrix::MouseButtonReleaseEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetPlotType_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlotType(*temp0) :
      op->vtkScatterPlotMatrix::GetPlotType(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkScatterPlotMatrix_GetPlotType_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlotType(temp0, temp1) :
      op->vtkScatterPlotMatrix::GetPlotType(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkScatterPlotMatrix_GetPlotType(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkScatterPlotMatrix_GetPlotType_s1(self, args);
    case 2:
      return PyvtkScatterPlotMatrix_GetPlotType_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPlotType");
  return nullptr;
}



static PyObject *
PyvtkScatterPlotMatrix_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkStdString temp0;
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
      op->vtkScatterPlotMatrix::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkScatterPlotMatrix::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetTitleProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTitleProperties(temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetTitleProperties(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetTitleProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleProperties() :
      op->vtkScatterPlotMatrix::GetTitleProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetGridVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

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
      op->vtkScatterPlotMatrix::SetGridVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetGridVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGridVisibility(temp0) :
      op->vtkScatterPlotMatrix::GetGridVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  vtkColor4ub *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor4ub"))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundColor(temp0, *temp1);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetBackgroundColor(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor4ub tempr = (ap.IsBound() ?
      op->GetBackgroundColor(temp0) :
      op->vtkScatterPlotMatrix::GetBackgroundColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor4ub");
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  vtkColor4ub *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor4ub"))
  {
    if (ap.IsBound())
    {
      op->SetAxisColor(temp0, *temp1);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetAxisColor(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor4ub tempr = (ap.IsBound() ?
      op->GetAxisColor(temp0) :
      op->vtkScatterPlotMatrix::GetAxisColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor4ub");
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetGridColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  vtkColor4ub *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor4ub"))
  {
    if (ap.IsBound())
    {
      op->SetGridColor(temp0, *temp1);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetGridColor(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetGridColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor4ub tempr = (ap.IsBound() ?
      op->GetGridColor(temp0) :
      op->vtkScatterPlotMatrix::GetGridColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor4ub");
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

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
      op->vtkScatterPlotMatrix::SetAxisLabelVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAxisLabelVisibility(temp0) :
      op->vtkScatterPlotMatrix::GetAxisLabelVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetAxisLabelProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  vtkTextProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelProperties(temp0, temp1);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetAxisLabelProperties(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetAxisLabelProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetAxisLabelProperties(temp0) :
      op->vtkScatterPlotMatrix::GetAxisLabelProperties(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetAxisLabelNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

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
      op->vtkScatterPlotMatrix::SetAxisLabelNotation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetAxisLabelNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisLabelNotation(temp0) :
      op->vtkScatterPlotMatrix::GetAxisLabelNotation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetAxisLabelPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

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
      op->vtkScatterPlotMatrix::SetAxisLabelPrecision(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetAxisLabelPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisLabelPrecision(temp0) :
      op->vtkScatterPlotMatrix::GetAxisLabelPrecision(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetTooltipNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltipNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

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
      op->vtkScatterPlotMatrix::SetTooltipNotation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetTooltipPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltipPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

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
      op->vtkScatterPlotMatrix::SetTooltipPrecision(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetTooltipNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTooltipNotation(temp0) :
      op->vtkScatterPlotMatrix::GetTooltipNotation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetTooltipPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTooltipPrecision(temp0) :
      op->vtkScatterPlotMatrix::GetTooltipPrecision(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetTooltip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

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
      op->vtkScatterPlotMatrix::SetTooltip(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetTooltip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTooltipItem *tempr = (ap.IsBound() ?
      op->GetTooltip() :
      op->vtkScatterPlotMatrix::GetTooltip());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetIndexedLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexedLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetIndexedLabels(temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetIndexedLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetIndexedLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexedLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetIndexedLabels() :
      op->vtkScatterPlotMatrix::GetIndexedLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetScatterPlotSelectedRowColumnColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotSelectedRowColumnColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkColor4ub *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor4ub"))
  {
    if (ap.IsBound())
    {
      op->SetScatterPlotSelectedRowColumnColor(*temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetScatterPlotSelectedRowColumnColor(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetScatterPlotSelectedRowColumnColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScatterPlotSelectedRowColumnColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkColor4ub tempr = (ap.IsBound() ?
      op->GetScatterPlotSelectedRowColumnColor() :
      op->vtkScatterPlotMatrix::GetScatterPlotSelectedRowColumnColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor4ub");
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetScatterPlotSelectedActiveColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotSelectedActiveColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkColor4ub *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor4ub"))
  {
    if (ap.IsBound())
    {
      op->SetScatterPlotSelectedActiveColor(*temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetScatterPlotSelectedActiveColor(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetScatterPlotSelectedActiveColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScatterPlotSelectedActiveColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkColor4ub tempr = (ap.IsBound() ?
      op->GetScatterPlotSelectedActiveColor() :
      op->vtkScatterPlotMatrix::GetScatterPlotSelectedActiveColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor4ub");
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_UpdateSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateSettings();
    }
    else
    {
      op->vtkScatterPlotMatrix::UpdateSettings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_UpdateChartSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateChartSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UpdateChartSettings(temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::UpdateChartSettings(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionMode(temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetSelectionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectionMode() :
      op->vtkScatterPlotMatrix::GetSelectionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetColumnName(temp0) :
      op->vtkScatterPlotMatrix::GetColumnName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetRowName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRowName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetRowName(temp0) :
      op->vtkScatterPlotMatrix::GetRowName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetNumberOfFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfFrames(temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetNumberOfFrames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetNumberOfFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFrames() :
      op->vtkScatterPlotMatrix::GetNumberOfFrames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_ClearAnimationPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAnimationPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAnimationPath();
    }
    else
    {
      op->vtkScatterPlotMatrix::ClearAnimationPath();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_AddAnimationPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAnimationPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
  {
    bool tempr = (ap.IsBound() ?
      op->AddAnimationPath(*temp0) :
      op->vtkScatterPlotMatrix::AddAnimationPath(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetNumberOfAnimationPathElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAnimationPathElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfAnimationPathElements() :
      op->vtkScatterPlotMatrix::GetNumberOfAnimationPathElements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetAnimationPathElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationPathElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector2i tempr = (ap.IsBound() ?
      op->GetAnimationPathElement(temp0) :
      op->vtkScatterPlotMatrix::GetAnimationPathElement(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_BeginAnimationPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginAnimationPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    bool tempr = (ap.IsBound() ?
      op->BeginAnimationPath(temp0) :
      op->vtkScatterPlotMatrix::BeginAnimationPath(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_AdvanceAnimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdvanceAnimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AdvanceAnimation();
    }
    else
    {
      op->vtkScatterPlotMatrix::AdvanceAnimation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetMainChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMainChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChart *tempr = (ap.IsBound() ?
      op->GetMainChart() :
      op->vtkScatterPlotMatrix::GetMainChart());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkScatterPlotMatrix_Methods[] = {
  {"IsTypeOf", PyvtkScatterPlotMatrix_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkScatterPlotMatrix_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkScatterPlotMatrix_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkScatterPlotMatrix\nC++: static vtkScatterPlotMatrix *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkScatterPlotMatrix_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkScatterPlotMatrix\nC++: vtkScatterPlotMatrix *NewInstance()\n\n"},
  {"Update", PyvtkScatterPlotMatrix_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nPerform any updates to the item that may be necessary before\nrendering.\n"},
  {"Paint", PyvtkScatterPlotMatrix_Paint, METH_VARARGS,
   "V.Paint(vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the chart matrix.\n"},
  {"SetScene", PyvtkScatterPlotMatrix_SetScene, METH_VARARGS,
   "V.SetScene(vtkContextScene)\nC++: void SetScene(vtkContextScene *scene) override;\n\nSet the vtkContextScene for the item, always set for an item in a\nscene.\n"},
  {"SetActivePlot", PyvtkScatterPlotMatrix_SetActivePlot, METH_VARARGS,
   "V.SetActivePlot(vtkVector2i) -> bool\nC++: virtual bool SetActivePlot(const vtkVector2i &position)\n\nSet the active plot, the one that will be displayed in the\ntop-right. This defaults to (0, n-2), the plot below the first\nhistogram on the left.\n\\return false is the position specified is not valid.\n"},
  {"SetSize", PyvtkScatterPlotMatrix_SetSize, METH_VARARGS,
   "V.SetSize(vtkVector2i)\nC++: void SetSize(const vtkVector2i &size) override;\n\nReset ActivePlotSet flag and call superclass method\n"},
  {"GetActivePlot", PyvtkScatterPlotMatrix_GetActivePlot, METH_VARARGS,
   "V.GetActivePlot() -> vtkVector2i\nC++: virtual vtkVector2i GetActivePlot()\n\nGet the position of the active plot.\n"},
  {"GetAnnotationLink", PyvtkScatterPlotMatrix_GetAnnotationLink, METH_VARARGS,
   "V.GetAnnotationLink() -> vtkAnnotationLink\nC++: vtkAnnotationLink *GetAnnotationLink()\n\nGet the AnnotationLink for the scatter plot matrix, this gives\nyou access to the currently selected points in the scatter plot\nmatrix.\n"},
  {"SetInput", PyvtkScatterPlotMatrix_SetInput, METH_VARARGS,
   "V.SetInput(vtkTable)\nC++: virtual void SetInput(vtkTable *table)\n\nSet the input table for the scatter plot matrix. This will cause\nall columns to be plotted against each other - a square scatter\nplot matrix.\n"},
  {"SetColumnVisibility", PyvtkScatterPlotMatrix_SetColumnVisibility, METH_VARARGS,
   "V.SetColumnVisibility(string, bool)\nC++: void SetColumnVisibility(const vtkStdString &name,\n    bool visible)\n\nSet the visibility of the specified column.\n"},
  {"InsertVisibleColumn", PyvtkScatterPlotMatrix_InsertVisibleColumn, METH_VARARGS,
   "V.InsertVisibleColumn(string, int)\nC++: void InsertVisibleColumn(const vtkStdString &name, int index)\n\nInsert the specified column at the index position of the visible\ncolumns.\n"},
  {"GetColumnVisibility", PyvtkScatterPlotMatrix_GetColumnVisibility, METH_VARARGS,
   "V.GetColumnVisibility(string) -> bool\nC++: bool GetColumnVisibility(const vtkStdString &name)\n\nGet the visibility of the specified column.\n"},
  {"SetColumnVisibilityAll", PyvtkScatterPlotMatrix_SetColumnVisibilityAll, METH_VARARGS,
   "V.SetColumnVisibilityAll(bool)\nC++: void SetColumnVisibilityAll(bool visible)\n\nSet the visibility of all columns (true will make them all\nvisible, false will remove all visible columns).\n"},
  {"GetVisibleColumns", PyvtkScatterPlotMatrix_GetVisibleColumns, METH_VARARGS,
   "V.GetVisibleColumns() -> vtkStringArray\nC++: virtual vtkStringArray *GetVisibleColumns()\n\nGet a list of the columns, and the order in which they are\ndisplayed.\n"},
  {"SetVisibleColumns", PyvtkScatterPlotMatrix_SetVisibleColumns, METH_VARARGS,
   "V.SetVisibleColumns(vtkStringArray)\nC++: virtual void SetVisibleColumns(vtkStringArray *visColumns)\n\nSet the list of visible columns, and the order in which they will\nbe displayed.\n"},
  {"SetNumberOfBins", PyvtkScatterPlotMatrix_SetNumberOfBins, METH_VARARGS,
   "V.SetNumberOfBins(int)\nC++: virtual void SetNumberOfBins(int numberOfBins)\n\nSet the number of bins in the histograms along the central\ndiagonal of the scatter plot matrix.\n"},
  {"GetNumberOfBins", PyvtkScatterPlotMatrix_GetNumberOfBins, METH_VARARGS,
   "V.GetNumberOfBins() -> int\nC++: virtual int GetNumberOfBins()\n\nGet the number of bins the histograms along the central diagonal\nscatter plot matrix. The default value is 10.\n"},
  {"SetPlotColor", PyvtkScatterPlotMatrix_SetPlotColor, METH_VARARGS,
   "V.SetPlotColor(int, vtkColor4ub)\nC++: void SetPlotColor(int plotType, const vtkColor4ub &color)\n\nSet the color for the specified plotType.\n"},
  {"SetPlotMarkerStyle", PyvtkScatterPlotMatrix_SetPlotMarkerStyle, METH_VARARGS,
   "V.SetPlotMarkerStyle(int, int)\nC++: void SetPlotMarkerStyle(int plotType, int style)\n\nSets the marker style for the specified plotType.\n"},
  {"SetPlotMarkerSize", PyvtkScatterPlotMatrix_SetPlotMarkerSize, METH_VARARGS,
   "V.SetPlotMarkerSize(int, float)\nC++: void SetPlotMarkerSize(int plotType, float size)\n\nSets the marker size for the specified plotType.\n"},
  {"Hit", PyvtkScatterPlotMatrix_Hit, METH_VARARGS,
   "V.Hit(vtkContextMouseEvent) -> bool\nC++: bool Hit(const vtkContextMouseEvent &mouse) override;\n\nReturn true if the supplied x, y coordinate is inside the item.\n"},
  {"MouseMoveEvent", PyvtkScatterPlotMatrix_MouseMoveEvent, METH_VARARGS,
   "V.MouseMoveEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseMoveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse move event.\n"},
  {"MouseButtonPressEvent", PyvtkScatterPlotMatrix_MouseButtonPressEvent, METH_VARARGS,
   "V.MouseButtonPressEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseButtonPressEvent(const vtkContextMouseEvent &mouse)\n     override;\n\nMouse button down event\n"},
  {"MouseButtonReleaseEvent", PyvtkScatterPlotMatrix_MouseButtonReleaseEvent, METH_VARARGS,
   "V.MouseButtonReleaseEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseButtonReleaseEvent(\n    const vtkContextMouseEvent &mouse) override;\n\nMouse button release event.\n"},
  {"GetPlotType", PyvtkScatterPlotMatrix_GetPlotType, METH_VARARGS,
   "V.GetPlotType(vtkVector2i) -> int\nC++: int GetPlotType(const vtkVector2i &pos)\nV.GetPlotType(int, int) -> int\nC++: int GetPlotType(int row, int column)\n\nReturns the type of the plot at the given position. The return\nvalue is one of: SCATTERPLOT, HISTOGRAM, ACTIVEPLOT, or NOPLOT.\n"},
  {"SetTitle", PyvtkScatterPlotMatrix_SetTitle, METH_VARARGS,
   "V.SetTitle(string)\nC++: void SetTitle(const vtkStdString &title)\n\nSet/get the scatter plot title.\n"},
  {"GetTitle", PyvtkScatterPlotMatrix_GetTitle, METH_VARARGS,
   "V.GetTitle() -> string\nC++: vtkStdString GetTitle()\n\nSet/get the scatter plot title.\n"},
  {"SetTitleProperties", PyvtkScatterPlotMatrix_SetTitleProperties, METH_VARARGS,
   "V.SetTitleProperties(vtkTextProperty)\nC++: void SetTitleProperties(vtkTextProperty *prop)\n\nSet/get the text properties for the chart title, i.e. color,\nfont, size.\n"},
  {"GetTitleProperties", PyvtkScatterPlotMatrix_GetTitleProperties, METH_VARARGS,
   "V.GetTitleProperties() -> vtkTextProperty\nC++: vtkTextProperty *GetTitleProperties()\n\nSet/get the text properties for the chart title, i.e. color,\nfont, size.\n"},
  {"SetGridVisibility", PyvtkScatterPlotMatrix_SetGridVisibility, METH_VARARGS,
   "V.SetGridVisibility(int, bool)\nC++: void SetGridVisibility(int plotType, bool visible)\n\nSets whether or not the grid for the given axis is visible given\na plot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}.\n"},
  {"GetGridVisibility", PyvtkScatterPlotMatrix_GetGridVisibility, METH_VARARGS,
   "V.GetGridVisibility(int) -> bool\nC++: bool GetGridVisibility(int plotType)\n\nSets whether or not the grid for the given axis is visible given\na plot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}.\n"},
  {"SetBackgroundColor", PyvtkScatterPlotMatrix_SetBackgroundColor, METH_VARARGS,
   "V.SetBackgroundColor(int, vtkColor4ub)\nC++: void SetBackgroundColor(int plotType,\n    const vtkColor4ub &color)\n\nSets the background color for the chart given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}.\n"},
  {"GetBackgroundColor", PyvtkScatterPlotMatrix_GetBackgroundColor, METH_VARARGS,
   "V.GetBackgroundColor(int) -> vtkColor4ub\nC++: vtkColor4ub GetBackgroundColor(int plotType)\n\nSets the background color for the chart given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}.\n"},
  {"SetAxisColor", PyvtkScatterPlotMatrix_SetAxisColor, METH_VARARGS,
   "V.SetAxisColor(int, vtkColor4ub)\nC++: void SetAxisColor(int plotType, const vtkColor4ub &color)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}.\n"},
  {"GetAxisColor", PyvtkScatterPlotMatrix_GetAxisColor, METH_VARARGS,
   "V.GetAxisColor(int) -> vtkColor4ub\nC++: vtkColor4ub GetAxisColor(int plotType)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}.\n"},
  {"SetGridColor", PyvtkScatterPlotMatrix_SetGridColor, METH_VARARGS,
   "V.SetGridColor(int, vtkColor4ub)\nC++: void SetGridColor(int plotType, const vtkColor4ub &color)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}.\n"},
  {"GetGridColor", PyvtkScatterPlotMatrix_GetGridColor, METH_VARARGS,
   "V.GetGridColor(int) -> vtkColor4ub\nC++: vtkColor4ub GetGridColor(int plotType)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}.\n"},
  {"SetAxisLabelVisibility", PyvtkScatterPlotMatrix_SetAxisLabelVisibility, METH_VARARGS,
   "V.SetAxisLabelVisibility(int, bool)\nC++: void SetAxisLabelVisibility(int plotType, bool visible)\n\nSets whether or not the labels for the axes are visible, given a\nplot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}.\n"},
  {"GetAxisLabelVisibility", PyvtkScatterPlotMatrix_GetAxisLabelVisibility, METH_VARARGS,
   "V.GetAxisLabelVisibility(int) -> bool\nC++: bool GetAxisLabelVisibility(int plotType)\n\nSets whether or not the labels for the axes are visible, given a\nplot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}.\n"},
  {"SetAxisLabelProperties", PyvtkScatterPlotMatrix_SetAxisLabelProperties, METH_VARARGS,
   "V.SetAxisLabelProperties(int, vtkTextProperty)\nC++: void SetAxisLabelProperties(int plotType,\n    vtkTextProperty *prop)\n\nSet/get the text property for the axis labels of the given plot\ntype, possible types are vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}.\n"},
  {"GetAxisLabelProperties", PyvtkScatterPlotMatrix_GetAxisLabelProperties, METH_VARARGS,
   "V.GetAxisLabelProperties(int) -> vtkTextProperty\nC++: vtkTextProperty *GetAxisLabelProperties(int plotType)\n\nSet/get the text property for the axis labels of the given plot\ntype, possible types are vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}.\n"},
  {"SetAxisLabelNotation", PyvtkScatterPlotMatrix_SetAxisLabelNotation, METH_VARARGS,
   "V.SetAxisLabelNotation(int, int)\nC++: void SetAxisLabelNotation(int plotType, int notation)\n\nSets the axis label notation for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}.\n"},
  {"GetAxisLabelNotation", PyvtkScatterPlotMatrix_GetAxisLabelNotation, METH_VARARGS,
   "V.GetAxisLabelNotation(int) -> int\nC++: int GetAxisLabelNotation(int plotType)\n\nSets the axis label notation for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}.\n"},
  {"SetAxisLabelPrecision", PyvtkScatterPlotMatrix_SetAxisLabelPrecision, METH_VARARGS,
   "V.SetAxisLabelPrecision(int, int)\nC++: void SetAxisLabelPrecision(int plotType, int precision)\n\nSets the axis label precision for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}.\n"},
  {"GetAxisLabelPrecision", PyvtkScatterPlotMatrix_GetAxisLabelPrecision, METH_VARARGS,
   "V.GetAxisLabelPrecision(int) -> int\nC++: int GetAxisLabelPrecision(int plotType)\n\nSets the axis label precision for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}.\n"},
  {"SetTooltipNotation", PyvtkScatterPlotMatrix_SetTooltipNotation, METH_VARARGS,
   "V.SetTooltipNotation(int, int)\nC++: void SetTooltipNotation(int plotType, int notation)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}.\n"},
  {"SetTooltipPrecision", PyvtkScatterPlotMatrix_SetTooltipPrecision, METH_VARARGS,
   "V.SetTooltipPrecision(int, int)\nC++: void SetTooltipPrecision(int plotType, int precision)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}.\n"},
  {"GetTooltipNotation", PyvtkScatterPlotMatrix_GetTooltipNotation, METH_VARARGS,
   "V.GetTooltipNotation(int) -> int\nC++: int GetTooltipNotation(int plotType)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}.\n"},
  {"GetTooltipPrecision", PyvtkScatterPlotMatrix_GetTooltipPrecision, METH_VARARGS,
   "V.GetTooltipPrecision(int) -> int\nC++: int GetTooltipPrecision(int plotType)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}.\n"},
  {"SetTooltip", PyvtkScatterPlotMatrix_SetTooltip, METH_VARARGS,
   "V.SetTooltip(vtkTooltipItem)\nC++: void SetTooltip(vtkTooltipItem *tooltip)\n\nSet the vtkTooltipItem object that will be displayed by the\nactive chart.\n"},
  {"GetTooltip", PyvtkScatterPlotMatrix_GetTooltip, METH_VARARGS,
   "V.GetTooltip() -> vtkTooltipItem\nC++: vtkTooltipItem *GetTooltip()\n\nGet the vtkTooltipItem object that will be displayed by the\nactive chart.\n"},
  {"SetIndexedLabels", PyvtkScatterPlotMatrix_SetIndexedLabels, METH_VARARGS,
   "V.SetIndexedLabels(vtkStringArray)\nC++: void SetIndexedLabels(vtkStringArray *labels)\n\nSet indexed labels array.\n"},
  {"GetIndexedLabels", PyvtkScatterPlotMatrix_GetIndexedLabels, METH_VARARGS,
   "V.GetIndexedLabels() -> vtkStringArray\nC++: vtkStringArray *GetIndexedLabels()\n\nGet the indexed labels array.\n"},
  {"SetScatterPlotSelectedRowColumnColor", PyvtkScatterPlotMatrix_SetScatterPlotSelectedRowColumnColor, METH_VARARGS,
   "V.SetScatterPlotSelectedRowColumnColor(vtkColor4ub)\nC++: void SetScatterPlotSelectedRowColumnColor(\n    const vtkColor4ub &color)\n\nSet the scatter plot selected row/column charts' background\ncolor.\n"},
  {"GetScatterPlotSelectedRowColumnColor", PyvtkScatterPlotMatrix_GetScatterPlotSelectedRowColumnColor, METH_VARARGS,
   "V.GetScatterPlotSelectedRowColumnColor() -> vtkColor4ub\nC++: vtkColor4ub GetScatterPlotSelectedRowColumnColor()\n\nSet the scatter plot selected row/column charts' background\ncolor.\n"},
  {"SetScatterPlotSelectedActiveColor", PyvtkScatterPlotMatrix_SetScatterPlotSelectedActiveColor, METH_VARARGS,
   "V.SetScatterPlotSelectedActiveColor(vtkColor4ub)\nC++: void SetScatterPlotSelectedActiveColor(\n    const vtkColor4ub &color)\n\nSet the scatter plot selected active chart background color.\n"},
  {"GetScatterPlotSelectedActiveColor", PyvtkScatterPlotMatrix_GetScatterPlotSelectedActiveColor, METH_VARARGS,
   "V.GetScatterPlotSelectedActiveColor() -> vtkColor4ub\nC++: vtkColor4ub GetScatterPlotSelectedActiveColor()\n\nSet the scatter plot selected active chart background color.\n"},
  {"UpdateSettings", PyvtkScatterPlotMatrix_UpdateSettings, METH_VARARGS,
   "V.UpdateSettings()\nC++: void UpdateSettings()\n\nConvenient method to update all the chart settings\n"},
  {"UpdateChartSettings", PyvtkScatterPlotMatrix_UpdateChartSettings, METH_VARARGS,
   "V.UpdateChartSettings(int)\nC++: void UpdateChartSettings(int plotType)\n\nUpdate charts based on settings given the plot type\n"},
  {"SetSelectionMode", PyvtkScatterPlotMatrix_SetSelectionMode, METH_VARARGS,
   "V.SetSelectionMode(int)\nC++: virtual void SetSelectionMode(int)\n\nSet/get the Selection Mode that will be used by the chart while\ndoing selection. The only valid enums are\nvtkContextScene::SELECTION_NONE, SELECTION_DEFAULT,\nSELECTION_ADDITION, SELECTION_SUBTRACTION, SELECTION_TOGGLE\n"},
  {"GetSelectionMode", PyvtkScatterPlotMatrix_GetSelectionMode, METH_VARARGS,
   "V.GetSelectionMode() -> int\nC++: virtual int GetSelectionMode()\n\nSet/get the Selection Mode that will be used by the chart while\ndoing selection. The only valid enums are\nvtkContextScene::SELECTION_NONE, SELECTION_DEFAULT,\nSELECTION_ADDITION, SELECTION_SUBTRACTION, SELECTION_TOGGLE\n"},
  {"GetColumnName", PyvtkScatterPlotMatrix_GetColumnName, METH_VARARGS,
   "V.GetColumnName(int) -> string\nC++: vtkStdString GetColumnName(int column)\n\nGet the column name for the supplied index.\n"},
  {"GetRowName", PyvtkScatterPlotMatrix_GetRowName, METH_VARARGS,
   "V.GetRowName(int) -> string\nC++: vtkStdString GetRowName(int row)\n\nGet the column name for the supplied index.\n"},
  {"SetNumberOfFrames", PyvtkScatterPlotMatrix_SetNumberOfFrames, METH_VARARGS,
   "V.SetNumberOfFrames(int)\nC++: void SetNumberOfFrames(int frames)\n\nSet the number of animation frames in each transition. Default is\n25, and 0 means to animations between axes.\n"},
  {"GetNumberOfFrames", PyvtkScatterPlotMatrix_GetNumberOfFrames, METH_VARARGS,
   "V.GetNumberOfFrames() -> int\nC++: int GetNumberOfFrames()\n\nGet the number of animation frames in each transition. Default is\n25, and 0 means to animations between axes.\n"},
  {"ClearAnimationPath", PyvtkScatterPlotMatrix_ClearAnimationPath, METH_VARARGS,
   "V.ClearAnimationPath()\nC++: void ClearAnimationPath()\n\nClear the animation path.\n"},
  {"AddAnimationPath", PyvtkScatterPlotMatrix_AddAnimationPath, METH_VARARGS,
   "V.AddAnimationPath(vtkVector2i) -> bool\nC++: bool AddAnimationPath(const vtkVector2i &move)\n\nAdd a move to the animation path. Note that a move can only\nchange i or j, not both. If the proposed move does not satisfy\nthose criteria it will be rejected and the animation path will\nnot be extended.\n"},
  {"GetNumberOfAnimationPathElements", PyvtkScatterPlotMatrix_GetNumberOfAnimationPathElements, METH_VARARGS,
   "V.GetNumberOfAnimationPathElements() -> int\nC++: vtkIdType GetNumberOfAnimationPathElements()\n\nGet the number of elements (transitions) in the animation path.\n"},
  {"GetAnimationPathElement", PyvtkScatterPlotMatrix_GetAnimationPathElement, METH_VARARGS,
   "V.GetAnimationPathElement(int) -> vtkVector2i\nC++: vtkVector2i GetAnimationPathElement(vtkIdType i)\n\nGet the element specified from the animation path.\n"},
  {"BeginAnimationPath", PyvtkScatterPlotMatrix_BeginAnimationPath, METH_VARARGS,
   "V.BeginAnimationPath(vtkRenderWindowInteractor) -> bool\nC++: bool BeginAnimationPath(\n    vtkRenderWindowInteractor *interactor)\n\nTrigger the animation of the scatter plot matrix to begin.\n"},
  {"AdvanceAnimation", PyvtkScatterPlotMatrix_AdvanceAnimation, METH_VARARGS,
   "V.AdvanceAnimation()\nC++: virtual void AdvanceAnimation()\n\nAdvance the animation in response to the timer events. This is\npublic to allow the animation to be manually advanced when timers\nare not a\n"},
  {"GetMainChart", PyvtkScatterPlotMatrix_GetMainChart, METH_VARARGS,
   "V.GetMainChart() -> vtkChart\nC++: virtual vtkChart *GetMainChart()\n\nGet the main plot (the one in the top-right of the matrix.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkScatterPlotMatrix_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkScatterPlotMatrix", // tp_name
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
  PyvtkScatterPlotMatrix_Doc, // tp_doc
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

static vtkObjectBase *PyvtkScatterPlotMatrix_StaticNew()
{
  return vtkScatterPlotMatrix::New();
}

PyObject *PyvtkScatterPlotMatrix_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkScatterPlotMatrix_Type, PyvtkScatterPlotMatrix_Methods,
    "vtkScatterPlotMatrix",
 &PyvtkScatterPlotMatrix_StaticNew);

  PyTypeObject *pytype = &PyvtkScatterPlotMatrix_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkChartMatrix_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "SCATTERPLOT", vtkScatterPlotMatrix::SCATTERPLOT },
        { "HISTOGRAM", vtkScatterPlotMatrix::HISTOGRAM },
        { "ACTIVEPLOT", vtkScatterPlotMatrix::ACTIVEPLOT },
        { "NOPLOT", vtkScatterPlotMatrix::NOPLOT },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkScatterPlotMatrix(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkScatterPlotMatrix_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkScatterPlotMatrix", o) != 0)
  {
    Py_DECREF(o);
  }

}

