// python wrapper for vtkChartBox
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
#include "vtkStdString.h"
#include "vtkContextMouseEvent.h"
#include "vtkVector.h"
#include "vtkChartBox.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkChartBox(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkChartBox_ClassNew(); }

#ifndef DECLARED_PyvtkChart_ClassNew
extern "C" { PyObject *PyvtkChart_ClassNew(); }
#define DECLARED_PyvtkChart_ClassNew
#endif

static const char *PyvtkChartBox_Doc =
  "vtkChartBox - Factory class for drawing box plot charts\n\n"
  "Superclass: vtkChart\n\n"
  "This defines the interface for a box plot chart.\n\n";


static PyObject *
PyvtkChartBox_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkChartBox::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChartBox::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkChartBox *tempr = vtkChartBox::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartBox *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChartBox::NewInstance());

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
PyvtkChartBox_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkChartBox::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkChartBox::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_SetColumnVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

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
      op->vtkChartBox::SetColumnVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkChartBox_SetColumnVisibility_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkIdType temp0;
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
      op->vtkChartBox::SetColumnVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkChartBox_SetColumnVisibility_Methods[] = {
  {nullptr, PyvtkChartBox_SetColumnVisibility_s1, METH_VARARGS,
   "@sq"},
  {nullptr, PyvtkChartBox_SetColumnVisibility_s2, METH_VARARGS,
   "@kq"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkChartBox_SetColumnVisibility(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkChartBox_SetColumnVisibility_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColumnVisibility");
  return nullptr;
}



static PyObject *
PyvtkChartBox_SetColumnVisibilityAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnVisibilityAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

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
      op->vtkChartBox::SetColumnVisibilityAll(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_GetColumnVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColumnVisibility(temp0) :
      op->vtkChartBox::GetColumnVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkChartBox_GetColumnVisibility_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColumnVisibility(temp0) :
      op->vtkChartBox::GetColumnVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkChartBox_GetColumnVisibility_Methods[] = {
  {nullptr, PyvtkChartBox_GetColumnVisibility_s1, METH_VARARGS,
   "@s"},
  {nullptr, PyvtkChartBox_GetColumnVisibility_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkChartBox_GetColumnVisibility(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkChartBox_GetColumnVisibility_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetColumnVisibility");
  return nullptr;
}



static PyObject *
PyvtkChartBox_GetColumnId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetColumnId(temp0) :
      op->vtkChartBox::GetColumnId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_GetVisibleColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibleColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetVisibleColumns() :
      op->vtkChartBox::GetVisibleColumns());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_GetSelectedColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedColumn() :
      op->vtkChartBox::GetSelectedColumn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_SetSelectedColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedColumn(temp0);
    }
    else
    {
      op->vtkChartBox::SetSelectedColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_GetPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPlot *tempr = (ap.IsBound() ?
      op->GetPlot(temp0) :
      op->vtkChartBox::GetPlot(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_GetNumberOfPlots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPlots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPlots() :
      op->vtkChartBox::GetNumberOfPlots());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_GetYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxis *tempr = (ap.IsBound() ?
      op->GetYAxis() :
      op->vtkChartBox::GetYAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_GetXPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float tempr = (ap.IsBound() ?
      op->GetXPosition(temp0) :
      op->vtkChartBox::GetXPosition(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_GetNumberOfVisibleColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVisibleColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfVisibleColumns() :
      op->vtkChartBox::GetNumberOfVisibleColumns());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_SetPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkPlotBox *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlotBox"))
  {
    if (ap.IsBound())
    {
      op->SetPlot(temp0);
    }
    else
    {
      op->vtkChartBox::SetPlot(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_Hit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->Hit(*temp0) :
      op->vtkChartBox::Hit(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartBox_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseMoveEvent(*temp0) :
      op->vtkChartBox::MouseMoveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartBox_MouseButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonPressEvent(*temp0) :
      op->vtkChartBox::MouseButtonPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartBox_MouseButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonReleaseEvent(*temp0) :
      op->vtkChartBox::MouseButtonReleaseEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartBox_SetTooltip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

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
      op->vtkChartBox::SetTooltip(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_GetTooltip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTooltipItem *tempr = (ap.IsBound() ?
      op->GetTooltip() :
      op->vtkChartBox::GetTooltip());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_SetTooltipInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltipInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

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
      op->vtkChartBox::SetTooltipInfo(*temp0, *temp1, temp2, temp3, temp4);
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

static PyMethodDef PyvtkChartBox_Methods[] = {
  {"IsTypeOf", PyvtkChartBox_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkChartBox_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkChartBox_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkChartBox\nC++: static vtkChartBox *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkChartBox_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkChartBox\nC++: vtkChartBox *NewInstance()\n\n"},
  {"Update", PyvtkChartBox_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {"Paint", PyvtkChartBox_Paint, METH_VARARGS,
   "V.Paint(vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the chart, called whenever the chart needs to be\ndrawn\n"},
  {"SetColumnVisibility", PyvtkChartBox_SetColumnVisibility, METH_VARARGS,
   "V.SetColumnVisibility(string, bool)\nC++: void SetColumnVisibility(const vtkStdString &name,\n    bool visible)\nV.SetColumnVisibility(int, bool)\nC++: void SetColumnVisibility(vtkIdType column, bool visible)\n\nSet the visibility of the specified column.\n"},
  {"SetColumnVisibilityAll", PyvtkChartBox_SetColumnVisibilityAll, METH_VARARGS,
   "V.SetColumnVisibilityAll(bool)\nC++: void SetColumnVisibilityAll(bool visible)\n\nSet the visibility of all columns (true will make them all\nvisible, false will remove all visible columns).\n"},
  {"GetColumnVisibility", PyvtkChartBox_GetColumnVisibility, METH_VARARGS,
   "V.GetColumnVisibility(string) -> bool\nC++: bool GetColumnVisibility(const vtkStdString &name)\nV.GetColumnVisibility(int) -> bool\nC++: bool GetColumnVisibility(vtkIdType column)\n\nGet the visibility of the specified column.\n"},
  {"GetColumnId", PyvtkChartBox_GetColumnId, METH_VARARGS,
   "V.GetColumnId(string) -> int\nC++: vtkIdType GetColumnId(const vtkStdString &name)\n\nGet the input table column id of a column by its name.\n"},
  {"GetVisibleColumns", PyvtkChartBox_GetVisibleColumns, METH_VARARGS,
   "V.GetVisibleColumns() -> vtkStringArray\nC++: virtual vtkStringArray *GetVisibleColumns()\n\nGet a list of the columns, and the order in which they are\ndisplayed.\n"},
  {"GetSelectedColumn", PyvtkChartBox_GetSelectedColumn, METH_VARARGS,
   "V.GetSelectedColumn() -> int\nC++: virtual int GetSelectedColumn()\n\n"},
  {"SetSelectedColumn", PyvtkChartBox_SetSelectedColumn, METH_VARARGS,
   "V.SetSelectedColumn(int)\nC++: virtual void SetSelectedColumn(int _arg)\n\n"},
  {"GetPlot", PyvtkChartBox_GetPlot, METH_VARARGS,
   "V.GetPlot(int) -> vtkPlot\nC++: vtkPlot *GetPlot(vtkIdType index) override;\n\nGet the plot at the specified index, returns null if the index is\ninvalid.\n"},
  {"GetNumberOfPlots", PyvtkChartBox_GetNumberOfPlots, METH_VARARGS,
   "V.GetNumberOfPlots() -> int\nC++: vtkIdType GetNumberOfPlots() override;\n\nGet the number of plots the chart contains.\n"},
  {"GetYAxis", PyvtkChartBox_GetYAxis, METH_VARARGS,
   "V.GetYAxis() -> vtkAxis\nC++: virtual vtkAxis *GetYAxis()\n\nGet the chart Y axis\n"},
  {"GetXPosition", PyvtkChartBox_GetXPosition, METH_VARARGS,
   "V.GetXPosition(int) -> float\nC++: virtual float GetXPosition(int index)\n\nGet the column X position by index in the visible set.\n"},
  {"GetNumberOfVisibleColumns", PyvtkChartBox_GetNumberOfVisibleColumns, METH_VARARGS,
   "V.GetNumberOfVisibleColumns() -> int\nC++: virtual vtkIdType GetNumberOfVisibleColumns()\n\nGet the number of visible box plots in the current chart.\n"},
  {"SetPlot", PyvtkChartBox_SetPlot, METH_VARARGS,
   "V.SetPlot(vtkPlotBox)\nC++: virtual void SetPlot(vtkPlotBox *plot)\n\nSet plot to use for the chart. Since this type of chart can only\ncontain one plot, this will replace the previous plot.\n"},
  {"Hit", PyvtkChartBox_Hit, METH_VARARGS,
   "V.Hit(vtkContextMouseEvent) -> bool\nC++: bool Hit(const vtkContextMouseEvent &mouse) override;\n\nReturn true if the supplied x, y coordinate is inside the item.\n"},
  {"MouseMoveEvent", PyvtkChartBox_MouseMoveEvent, METH_VARARGS,
   "V.MouseMoveEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseMoveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse move event.\n"},
  {"MouseButtonPressEvent", PyvtkChartBox_MouseButtonPressEvent, METH_VARARGS,
   "V.MouseButtonPressEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseButtonPressEvent(const vtkContextMouseEvent &mouse)\n     override;\n\nMouse button down event\n"},
  {"MouseButtonReleaseEvent", PyvtkChartBox_MouseButtonReleaseEvent, METH_VARARGS,
   "V.MouseButtonReleaseEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseButtonReleaseEvent(\n    const vtkContextMouseEvent &mouse) override;\n\nMouse button release event.\n"},
  {"SetTooltip", PyvtkChartBox_SetTooltip, METH_VARARGS,
   "V.SetTooltip(vtkTooltipItem)\nC++: virtual void SetTooltip(vtkTooltipItem *tooltip)\n\nSet the vtkTooltipItem object that will be displayed by the\nchart.\n"},
  {"GetTooltip", PyvtkChartBox_GetTooltip, METH_VARARGS,
   "V.GetTooltip() -> vtkTooltipItem\nC++: virtual vtkTooltipItem *GetTooltip()\n\nGet the vtkTooltipItem object that will be displayed by the\nchart.\n"},
  {"SetTooltipInfo", PyvtkChartBox_SetTooltipInfo, METH_VARARGS,
   "V.SetTooltipInfo(vtkContextMouseEvent, vtkVector2d, int, vtkPlot,\n    int)\nC++: virtual void SetTooltipInfo(const vtkContextMouseEvent &,\n    const vtkVector2d &, vtkIdType, vtkPlot *,\n    vtkIdType segmentIndex=-1)\n\nSet the information passed to the tooltip.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkChartBox_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkChartBox", // tp_name
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
  PyvtkChartBox_Doc, // tp_doc
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

static vtkObjectBase *PyvtkChartBox_StaticNew()
{
  return vtkChartBox::New();
}

PyObject *PyvtkChartBox_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkChartBox_Type, PyvtkChartBox_Methods,
    "vtkChartBox",
 &PyvtkChartBox_StaticNew);

  PyTypeObject *pytype = &PyvtkChartBox_Type;

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


static const char *PyvtkChartBoxData_Doc =
  "vtkChartBoxData - Small struct used by InvokeEvent to send some\ninformation about the point that was clicked on.\n\n"
  "This is an experimental part of the API, subject to change.\n\n"
  "vtkChartBoxData()\n"
  "vtkChartBoxData(const &vtkChartBoxData)\n";

static PyMethodDef PyvtkChartBoxData_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkChartBoxData_vtkChartBoxData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkChartBoxData");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkChartBoxData *op = new vtkChartBoxData();

    result = PyVTKSpecialObject_New("vtkChartBoxData", op);
  }

  return result;
}

static PyObject *
PyvtkChartBoxData_vtkChartBoxData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkChartBoxData");

  vtkChartBoxData *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkChartBoxData"))
  {
    vtkChartBoxData *op = new vtkChartBoxData(*temp0);

    result = PyVTKSpecialObject_New("vtkChartBoxData", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkChartBoxData_vtkChartBoxData_Methods[] = {
  {nullptr, PyvtkChartBoxData_vtkChartBoxData_s2, METH_VARARGS,
   "@W vtkChartBoxData"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkChartBoxData_vtkChartBoxData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkChartBoxData_vtkChartBoxData_s1(self, args);
    case 1:
      return PyvtkChartBoxData_vtkChartBoxData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkChartBoxData");
  return nullptr;
}


static PyObject *
PyvtkChartBoxData_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkChartBoxData_vtkChartBoxData(nullptr, args);
}

static void PyvtkChartBoxData_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkChartBoxData *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkChartBoxData_Hash(PyObject *self)
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

static PyTypeObject PyvtkChartBoxData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkChartBoxData", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkChartBoxData_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkChartBoxData_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkChartBoxData_Doc, // tp_doc
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
  PyvtkChartBoxData_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkChartBoxData_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkChartBoxData(*static_cast<const vtkChartBoxData*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkChartBoxData_TypeNew(); }

PyObject *PyvtkChartBoxData_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkChartBoxData_Type,
    PyvtkChartBoxData_Methods,
    PyvtkChartBoxData_vtkChartBoxData_Methods,
    &PyvtkChartBoxData_CCopy);

  PyTypeObject *pytype = &PyvtkChartBoxData_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkChartBox(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkChartBox_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkChartBox", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkChartBoxData_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkChartBoxData", o) != 0)
  {
    Py_DECREF(o);
  }

}

