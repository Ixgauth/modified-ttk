// python wrapper for vtkPlotPoints
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
#include "vtkRect.h"
#include "vtkStdString.h"
#include "vtkVector.h"
#include "vtkContextPolygon.h"
#include "vtkPlotPoints.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPlotPoints(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPlotPoints_ClassNew(); }

#ifndef DECLARED_PyvtkPlot_ClassNew
extern "C" { PyObject *PyvtkPlot_ClassNew(); }
#define DECLARED_PyvtkPlot_ClassNew
#endif

static const char *PyvtkPlotPoints_Doc =
  "vtkPlotPoints - Class for drawing an points given two columns from a\nvtkTable.\n\n"
  "Superclass: vtkPlot\n\n"
  "This class draws points in a plot given two columns from a table. If\n"
  "you need a line as well you should use vtkPlotLine which derives from\n"
  "vtkPlotPoints and is capable of drawing both points and a line.\n\n"
  "@sa\n"
  "vtkPlotLine\n\n";


static PyObject *
PyvtkPlotPoints_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlotPoints::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlotPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlotPoints *tempr = vtkPlotPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlotPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlotPoints::NewInstance());

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
PyvtkPlotPoints_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkPlotPoints::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkPlotPoints::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_PaintLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PaintLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkContext2D *temp0 = nullptr;
  vtkRectf *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkContext2D") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkRectf") &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->PaintLegend(temp0, *temp1, temp2) :
      op->vtkPlotPoints::PaintLegend(temp0, *temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkPlotPoints_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkPlotPoints::GetBounds(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_GetUnscaledInputBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnscaledInputBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetUnscaledInputBounds(temp0);
    }
    else
    {
      op->vtkPlotPoints::GetUnscaledInputBounds(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkPlotPoints::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkPlotPoints::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_CreateDefaultLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLookupTable();
    }
    else
    {
      op->vtkPlotPoints::CreateDefaultLookupTable();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_SetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarVisibility(temp0);
    }
    else
    {
      op->vtkPlotPoints::SetScalarVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_GetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarVisibility() :
      op->vtkPlotPoints::GetScalarVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_ScalarVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarVisibilityOn();
    }
    else
    {
      op->vtkPlotPoints::ScalarVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_ScalarVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarVisibilityOff();
    }
    else
    {
      op->vtkPlotPoints::ScalarVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_SelectColorArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectColorArray(temp0);
    }
    else
    {
      op->vtkPlotPoints::SelectColorArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlotPoints_SelectColorArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectColorArray(temp0);
    }
    else
    {
      op->vtkPlotPoints::SelectColorArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPlotPoints_SelectColorArray_Methods[] = {
  {nullptr, PyvtkPlotPoints_SelectColorArray_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkPlotPoints_SelectColorArray_s2, METH_VARARGS,
   "@s"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPlotPoints_SelectColorArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPlotPoints_SelectColorArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SelectColorArray");
  return nullptr;
}



static PyObject *
PyvtkPlotPoints_GetColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetColorArrayName() :
      op->vtkPlotPoints::GetColorArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_SelectPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVector2f *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector2f"))
  {
    bool tempr = (ap.IsBound() ?
      op->SelectPoints(*temp0, *temp1) :
      op->vtkPlotPoints::SelectPoints(*temp0, *temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkPlotPoints_SelectPointsInPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPointsInPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkContextPolygon *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextPolygon"))
  {
    bool tempr = (ap.IsBound() ?
      op->SelectPointsInPolygon(*temp0) :
      op->vtkPlotPoints::SelectPointsInPolygon(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkPlotPoints_GetMarkerStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkerStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMarkerStyle() :
      op->vtkPlotPoints::GetMarkerStyle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_SetMarkerStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkerStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

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
      op->vtkPlotPoints::SetMarkerStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_GetMarkerSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkerSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMarkerSize() :
      op->vtkPlotPoints::GetMarkerSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_SetMarkerSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkerSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  float temp0;
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
      op->vtkPlotPoints::SetMarkerSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_GetValidPointMaskName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidPointMaskName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetValidPointMaskName() :
      op->vtkPlotPoints::GetValidPointMaskName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_SetValidPointMaskName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidPointMaskName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValidPointMaskName(temp0);
    }
    else
    {
      op->vtkPlotPoints::SetValidPointMaskName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPlotPoints_Methods[] = {
  {"IsTypeOf", PyvtkPlotPoints_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPlotPoints_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPlotPoints_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPlotPoints\nC++: static vtkPlotPoints *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPlotPoints_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPlotPoints\nC++: vtkPlotPoints *NewInstance()\n\n"},
  {"Update", PyvtkPlotPoints_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {"Paint", PyvtkPlotPoints_Paint, METH_VARARGS,
   "V.Paint(vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the XY plot, called whenever the chart needs to\nbe drawn\n"},
  {"PaintLegend", PyvtkPlotPoints_PaintLegend, METH_VARARGS,
   "V.PaintLegend(vtkContext2D, vtkRectf, int) -> bool\nC++: bool PaintLegend(vtkContext2D *painter, const vtkRectf &rect,\n     int legendIndex) override;\n\nPaint legend event for the XY plot, called whenever the legend\nneeds the plot items symbol/mark/line drawn. A rect is supplied\nwith the lower left corner of the rect (elements 0 and 1) and\nwith width x height (elements 2 and 3). The plot can choose how\nto fill the space supplied.\n"},
  {"GetBounds", PyvtkPlotPoints_GetBounds, METH_VARARGS,
   "V.GetBounds([float, float, float, float])\nC++: void GetBounds(double bounds[4]) override;\n\nGet the bounds for this plot as (Xmin, Xmax, Ymin, Ymax).\n"},
  {"GetUnscaledInputBounds", PyvtkPlotPoints_GetUnscaledInputBounds, METH_VARARGS,
   "V.GetUnscaledInputBounds([float, float, float, float])\nC++: void GetUnscaledInputBounds(double bounds[4]) override;\n\nGet the non-log-scaled bounds on chart inputs for this plot as\n(Xmin, Xmax, Ymin, Ymax).\n"},
  {"SetLookupTable", PyvtkPlotPoints_SetLookupTable, METH_VARARGS,
   "V.SetLookupTable(vtkScalarsToColors)\nC++: void SetLookupTable(vtkScalarsToColors *lut)\n\nSpecify a lookup table for the mapper to use.\n"},
  {"GetLookupTable", PyvtkPlotPoints_GetLookupTable, METH_VARARGS,
   "V.GetLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\nSpecify a lookup table for the mapper to use.\n"},
  {"CreateDefaultLookupTable", PyvtkPlotPoints_CreateDefaultLookupTable, METH_VARARGS,
   "V.CreateDefaultLookupTable()\nC++: virtual void CreateDefaultLookupTable()\n\nCreate default lookup table. Generally used to create one when\nnone is available with the scalar data.\n"},
  {"SetScalarVisibility", PyvtkPlotPoints_SetScalarVisibility, METH_VARARGS,
   "V.SetScalarVisibility(int)\nC++: virtual void SetScalarVisibility(vtkTypeBool _arg)\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {"GetScalarVisibility", PyvtkPlotPoints_GetScalarVisibility, METH_VARARGS,
   "V.GetScalarVisibility() -> int\nC++: virtual vtkTypeBool GetScalarVisibility()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {"ScalarVisibilityOn", PyvtkPlotPoints_ScalarVisibilityOn, METH_VARARGS,
   "V.ScalarVisibilityOn()\nC++: virtual void ScalarVisibilityOn()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {"ScalarVisibilityOff", PyvtkPlotPoints_ScalarVisibilityOff, METH_VARARGS,
   "V.ScalarVisibilityOff()\nC++: virtual void ScalarVisibilityOff()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {"SelectColorArray", PyvtkPlotPoints_SelectColorArray, METH_VARARGS,
   "V.SelectColorArray(int)\nC++: void SelectColorArray(vtkIdType arrayNum)\nV.SelectColorArray(string)\nC++: void SelectColorArray(const vtkStdString &arrayName)\n\nWhen ScalarMode is set to UsePointFieldData or UseCellFieldData,\nyou can specify which array to use for coloring using these\nmethods. The lookup table will decide how to convert vectors to\ncolors.\n"},
  {"GetColorArrayName", PyvtkPlotPoints_GetColorArrayName, METH_VARARGS,
   "V.GetColorArrayName() -> string\nC++: vtkStdString GetColorArrayName()\n\nGet the array name to color by.\n"},
  {"SelectPoints", PyvtkPlotPoints_SelectPoints, METH_VARARGS,
   "V.SelectPoints(vtkVector2f, vtkVector2f) -> bool\nC++: bool SelectPoints(const vtkVector2f &min,\n    const vtkVector2f &max) override;\n\nSelect all points in the specified rectangle.\n"},
  {"SelectPointsInPolygon", PyvtkPlotPoints_SelectPointsInPolygon, METH_VARARGS,
   "V.SelectPointsInPolygon(vtkContextPolygon) -> bool\nC++: bool SelectPointsInPolygon(const vtkContextPolygon &polygon)\n    override;\n\nSelect all points in the specified polygon.\n"},
  {"GetMarkerStyle", PyvtkPlotPoints_GetMarkerStyle, METH_VARARGS,
   "V.GetMarkerStyle() -> int\nC++: virtual int GetMarkerStyle()\n\nGet/set the marker style that should be used. The default is\nnone, the enum in this class is used as a parameter.\n"},
  {"SetMarkerStyle", PyvtkPlotPoints_SetMarkerStyle, METH_VARARGS,
   "V.SetMarkerStyle(int)\nC++: virtual void SetMarkerStyle(int _arg)\n\nGet/set the marker style that should be used. The default is\nnone, the enum in this class is used as a parameter.\n"},
  {"GetMarkerSize", PyvtkPlotPoints_GetMarkerSize, METH_VARARGS,
   "V.GetMarkerSize() -> float\nC++: virtual float GetMarkerSize()\n\nGet/set the marker size that should be used. The default is\nnegative, and in that case it is 2.3 times the pen width, if less\nthan 8 will be used.\n"},
  {"SetMarkerSize", PyvtkPlotPoints_SetMarkerSize, METH_VARARGS,
   "V.SetMarkerSize(float)\nC++: virtual void SetMarkerSize(float _arg)\n\nGet/set the marker size that should be used. The default is\nnegative, and in that case it is 2.3 times the pen width, if less\nthan 8 will be used.\n"},
  {"GetValidPointMaskName", PyvtkPlotPoints_GetValidPointMaskName, METH_VARARGS,
   "V.GetValidPointMaskName() -> string\nC++: virtual vtkStdString GetValidPointMaskName()\n\nGet/set the valid point mask array name.\n"},
  {"SetValidPointMaskName", PyvtkPlotPoints_SetValidPointMaskName, METH_VARARGS,
   "V.SetValidPointMaskName(string)\nC++: virtual void SetValidPointMaskName(vtkStdString _arg)\n\nGet/set the valid point mask array name.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPlotPoints_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkPlotPoints", // tp_name
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
  PyvtkPlotPoints_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPlotPoints_StaticNew()
{
  return vtkPlotPoints::New();
}

PyObject *PyvtkPlotPoints_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPlotPoints_Type, PyvtkPlotPoints_Methods,
    "vtkPlotPoints",
 &PyvtkPlotPoints_StaticNew);

  PyTypeObject *pytype = &PyvtkPlotPoints_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPlot_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "NONE", vtkPlotPoints::NONE },
        { "CROSS", vtkPlotPoints::CROSS },
        { "PLUS", vtkPlotPoints::PLUS },
        { "SQUARE", vtkPlotPoints::SQUARE },
        { "CIRCLE", vtkPlotPoints::CIRCLE },
        { "DIAMOND", vtkPlotPoints::DIAMOND },
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

void PyVTKAddFile_vtkPlotPoints(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlotPoints_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlotPoints", o) != 0)
  {
    Py_DECREF(o);
  }

}

