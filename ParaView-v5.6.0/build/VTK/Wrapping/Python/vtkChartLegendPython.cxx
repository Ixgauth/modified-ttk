// python wrapper for vtkChartLegend
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
#include "vtkRect.h"
#include "vtkContextMouseEvent.h"
#include "vtkChartLegend.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkChartLegend(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkChartLegend_ClassNew(); }

#ifndef DECLARED_PyvtkContextItem_ClassNew
extern "C" { PyObject *PyvtkContextItem_ClassNew(); }
#define DECLARED_PyvtkContextItem_ClassNew
#endif

static const char *PyvtkChartLegend_Doc =
  "vtkChartLegend - draw the chart legend\n\n"
  "Superclass: vtkContextItem\n\n"
  "The vtkChartLegend is drawn in screen coordinates. It is usually one\n"
  "of the last elements of a chart to be drawn. It renders the mark/line\n"
  "for each plot, and the plot labels.\n\n";


static PyObject *
PyvtkChartLegend_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkChartLegend::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChartLegend::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkChartLegend *tempr = vtkChartLegend::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartLegend *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChartLegend::NewInstance());

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
PyvtkChartLegend_SetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPoint(temp0, temp1);
    }
    else
    {
      op->vtkChartLegend::SetPoint(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkChartLegend_SetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  const size_t size0 = 2;
  float temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPoint(temp0);
    }
    else
    {
      op->vtkChartLegend::SetPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkChartLegend_SetPoint_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    if (ap.IsBound())
    {
      op->SetPoint(*temp0);
    }
    else
    {
      op->vtkChartLegend::SetPoint(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkChartLegend_SetPoint_Methods[] = {
  {nullptr, PyvtkChartLegend_SetPoint_s2, METH_VARARGS,
   "@P *f"},
  {nullptr, PyvtkChartLegend_SetPoint_s3, METH_VARARGS,
   "@W vtkVector2f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkChartLegend_SetPoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkChartLegend_SetPoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkChartLegend_SetPoint_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint");
  return nullptr;
}



static PyObject *
PyvtkChartLegend_GetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetPoint() :
      op->vtkChartLegend::GetPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetPointVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkVector2f *tempr = (ap.IsBound() ?
      &op->GetPointVector() :
      &op->vtkChartLegend::GetPointVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVector2f");
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_SetHorizontalAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHorizontalAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHorizontalAlignment(temp0);
    }
    else
    {
      op->vtkChartLegend::SetHorizontalAlignment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetHorizontalAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHorizontalAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHorizontalAlignment() :
      op->vtkChartLegend::GetHorizontalAlignment());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_SetVerticalAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalAlignment(temp0);
    }
    else
    {
      op->vtkChartLegend::SetVerticalAlignment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetVerticalAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVerticalAlignment() :
      op->vtkChartLegend::GetVerticalAlignment());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_SetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPadding(temp0);
    }
    else
    {
      op->vtkChartLegend::SetPadding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPadding() :
      op->vtkChartLegend::GetPadding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_SetSymbolWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSymbolWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSymbolWidth(temp0);
    }
    else
    {
      op->vtkChartLegend::SetSymbolWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetSymbolWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSymbolWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSymbolWidth() :
      op->vtkChartLegend::GetSymbolWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_SetLabelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelSize(temp0);
    }
    else
    {
      op->vtkChartLegend::SetLabelSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetLabelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelSize() :
      op->vtkChartLegend::GetLabelSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_SetInline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInline(temp0);
    }
    else
    {
      op->vtkChartLegend::SetInline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetInline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInline() :
      op->vtkChartLegend::GetInline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_SetDragEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDragEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDragEnabled(temp0);
    }
    else
    {
      op->vtkChartLegend::SetDragEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetDragEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDragEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDragEnabled() :
      op->vtkChartLegend::GetDragEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_SetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  vtkChart *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkChart"))
  {
    if (ap.IsBound())
    {
      op->SetChart(temp0);
    }
    else
    {
      op->vtkChartLegend::SetChart(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChart *tempr = (ap.IsBound() ?
      op->GetChart() :
      op->vtkChartLegend::GetChart());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkChartLegend::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkChartLegend::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetBoundingRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    vtkRectf tempr = (ap.IsBound() ?
      op->GetBoundingRect(temp0) :
      op->vtkChartLegend::GetBoundingRect(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetPen() :
      op->vtkChartLegend::GetPen());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBrush *tempr = (ap.IsBound() ?
      op->GetBrush() :
      op->vtkChartLegend::GetBrush());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetLabelProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelProperties() :
      op->vtkChartLegend::GetLabelProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_SetCacheBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCacheBounds(temp0);
    }
    else
    {
      op->vtkChartLegend::SetCacheBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetCacheBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCacheBounds() :
      op->vtkChartLegend::GetCacheBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_CacheBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CacheBoundsOn();
    }
    else
    {
      op->vtkChartLegend::CacheBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_CacheBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CacheBoundsOff();
    }
    else
    {
      op->vtkChartLegend::CacheBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_Hit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->Hit(*temp0) :
      op->vtkChartLegend::Hit(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartLegend_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseMoveEvent(*temp0) :
      op->vtkChartLegend::MouseMoveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartLegend_MouseButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonPressEvent(*temp0) :
      op->vtkChartLegend::MouseButtonPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartLegend_MouseButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonReleaseEvent(*temp0) :
      op->vtkChartLegend::MouseButtonReleaseEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkChartLegend_Methods[] = {
  {"IsTypeOf", PyvtkChartLegend_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkChartLegend_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkChartLegend_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkChartLegend\nC++: static vtkChartLegend *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkChartLegend_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkChartLegend\nC++: vtkChartLegend *NewInstance()\n\n"},
  {"SetPoint", PyvtkChartLegend_SetPoint, METH_VARARGS,
   "V.SetPoint(float, float)\nC++: void SetPoint(float, float)\nV.SetPoint((float, float))\nC++: void SetPoint(float a[2])\nV.SetPoint(vtkVector2f)\nC++: void SetPoint(const vtkVector2f &point)\n\n"},
  {"GetPoint", PyvtkChartLegend_GetPoint, METH_VARARGS,
   "V.GetPoint() -> (float, float)\nC++: float *GetPoint()\n\n"},
  {"GetPointVector", PyvtkChartLegend_GetPointVector, METH_VARARGS,
   "V.GetPointVector() -> vtkVector2f\nC++: const vtkVector2f &GetPointVector()\n\nGet point the legend box is anchored to.\n"},
  {"SetHorizontalAlignment", PyvtkChartLegend_SetHorizontalAlignment, METH_VARARGS,
   "V.SetHorizontalAlignment(int)\nC++: virtual void SetHorizontalAlignment(int _arg)\n\nSet the horizontal alignment of the legend to the point\nspecified. Valid values are LEFT, CENTER and RIGHT.\n"},
  {"GetHorizontalAlignment", PyvtkChartLegend_GetHorizontalAlignment, METH_VARARGS,
   "V.GetHorizontalAlignment() -> int\nC++: virtual int GetHorizontalAlignment()\n\nGet the horizontal alignment of the legend to the point\nspecified.\n"},
  {"SetVerticalAlignment", PyvtkChartLegend_SetVerticalAlignment, METH_VARARGS,
   "V.SetVerticalAlignment(int)\nC++: virtual void SetVerticalAlignment(int _arg)\n\nSet the vertical alignment of the legend to the point specified.\nValid values are TOP, CENTER and BOTTOM.\n"},
  {"GetVerticalAlignment", PyvtkChartLegend_GetVerticalAlignment, METH_VARARGS,
   "V.GetVerticalAlignment() -> int\nC++: virtual int GetVerticalAlignment()\n\nGet the vertical alignment of the legend to the point specified.\n"},
  {"SetPadding", PyvtkChartLegend_SetPadding, METH_VARARGS,
   "V.SetPadding(int)\nC++: virtual void SetPadding(int _arg)\n\nSet the padding between legend marks, default is 5.\n"},
  {"GetPadding", PyvtkChartLegend_GetPadding, METH_VARARGS,
   "V.GetPadding() -> int\nC++: virtual int GetPadding()\n\nGet the padding between legend marks.\n"},
  {"SetSymbolWidth", PyvtkChartLegend_SetSymbolWidth, METH_VARARGS,
   "V.SetSymbolWidth(int)\nC++: virtual void SetSymbolWidth(int _arg)\n\nSet the symbol width, default is 15.\n"},
  {"GetSymbolWidth", PyvtkChartLegend_GetSymbolWidth, METH_VARARGS,
   "V.GetSymbolWidth() -> int\nC++: virtual int GetSymbolWidth()\n\nGet the legend symbol width.\n"},
  {"SetLabelSize", PyvtkChartLegend_SetLabelSize, METH_VARARGS,
   "V.SetLabelSize(int)\nC++: virtual void SetLabelSize(int size)\n\nSet the point size of the label text.\n"},
  {"GetLabelSize", PyvtkChartLegend_GetLabelSize, METH_VARARGS,
   "V.GetLabelSize() -> int\nC++: virtual int GetLabelSize()\n\nGet the point size of the label text.\n"},
  {"SetInline", PyvtkChartLegend_SetInline, METH_VARARGS,
   "V.SetInline(bool)\nC++: virtual void SetInline(bool _arg)\n\nGet/set if the legend should be drawn inline (inside the chart),\nor not. True would generally request that the chart draws it\ninside the chart, false would adjust the chart axes and make\nspace to draw the axes outside.\n"},
  {"GetInline", PyvtkChartLegend_GetInline, METH_VARARGS,
   "V.GetInline() -> bool\nC++: virtual bool GetInline()\n\nGet/set if the legend should be drawn inline (inside the chart),\nor not. True would generally request that the chart draws it\ninside the chart, false would adjust the chart axes and make\nspace to draw the axes outside.\n"},
  {"SetDragEnabled", PyvtkChartLegend_SetDragEnabled, METH_VARARGS,
   "V.SetDragEnabled(bool)\nC++: virtual void SetDragEnabled(bool _arg)\n\nGet/set if the legend can be dragged with the mouse button, or\nnot. True results in left click and drag causing the legend to\nmove around the scene. False disables response to mouse events.\nThe default is true.\n"},
  {"GetDragEnabled", PyvtkChartLegend_GetDragEnabled, METH_VARARGS,
   "V.GetDragEnabled() -> bool\nC++: virtual bool GetDragEnabled()\n\nGet/set if the legend can be dragged with the mouse button, or\nnot. True results in left click and drag causing the legend to\nmove around the scene. False disables response to mouse events.\nThe default is true.\n"},
  {"SetChart", PyvtkChartLegend_SetChart, METH_VARARGS,
   "V.SetChart(vtkChart)\nC++: void SetChart(vtkChart *chart)\n\nSet the chart that the legend belongs to and will draw the legend\nfor.\n"},
  {"GetChart", PyvtkChartLegend_GetChart, METH_VARARGS,
   "V.GetChart() -> vtkChart\nC++: vtkChart *GetChart()\n\nGet the chart that the legend belongs to and will draw the legend\nfor.\n"},
  {"Update", PyvtkChartLegend_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nUpdate the geometry of the axis. Takes care of setting up the\ntick mark locations etc. Should be called by the scene before\nrendering.\n"},
  {"Paint", PyvtkChartLegend_Paint, METH_VARARGS,
   "V.Paint(vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the axis, called whenever the axis needs to be\ndrawn.\n"},
  {"GetBoundingRect", PyvtkChartLegend_GetBoundingRect, METH_VARARGS,
   "V.GetBoundingRect(vtkContext2D) -> vtkRectf\nC++: virtual vtkRectf GetBoundingRect(vtkContext2D *painter)\n\nRequest the space the legend requires to be drawn. This is\nreturned as a vtkRect4f, with the corner being the offset from\nPoint, and the width/ height being the total width/height\nrequired by the axis. In order to ensure the numbers are correct,\nUpdate() should be called first.\n"},
  {"GetPen", PyvtkChartLegend_GetPen, METH_VARARGS,
   "V.GetPen() -> vtkPen\nC++: vtkPen *GetPen()\n\nGet the pen used to draw the legend outline.\n"},
  {"GetBrush", PyvtkChartLegend_GetBrush, METH_VARARGS,
   "V.GetBrush() -> vtkBrush\nC++: vtkBrush *GetBrush()\n\nGet the brush used to draw the legend background.\n"},
  {"GetLabelProperties", PyvtkChartLegend_GetLabelProperties, METH_VARARGS,
   "V.GetLabelProperties() -> vtkTextProperty\nC++: vtkTextProperty *GetLabelProperties()\n\nGet the vtkTextProperty for the legend's labels.\n"},
  {"SetCacheBounds", PyvtkChartLegend_SetCacheBounds, METH_VARARGS,
   "V.SetCacheBounds(bool)\nC++: virtual void SetCacheBounds(bool _arg)\n\nToggle whether or not this legend should attempt to cache its\nposition and size.  The default value is true.  If this value is\nset to false, the legend will recalculate its position and bounds\nevery time it is drawn.  If users will be able to zoom in or out\non your legend, you may want to set this to false.  Otherwise,\nthe border around the legend may not resize appropriately.\n"},
  {"GetCacheBounds", PyvtkChartLegend_GetCacheBounds, METH_VARARGS,
   "V.GetCacheBounds() -> bool\nC++: virtual bool GetCacheBounds()\n\nToggle whether or not this legend should attempt to cache its\nposition and size.  The default value is true.  If this value is\nset to false, the legend will recalculate its position and bounds\nevery time it is drawn.  If users will be able to zoom in or out\non your legend, you may want to set this to false.  Otherwise,\nthe border around the legend may not resize appropriately.\n"},
  {"CacheBoundsOn", PyvtkChartLegend_CacheBoundsOn, METH_VARARGS,
   "V.CacheBoundsOn()\nC++: virtual void CacheBoundsOn()\n\nToggle whether or not this legend should attempt to cache its\nposition and size.  The default value is true.  If this value is\nset to false, the legend will recalculate its position and bounds\nevery time it is drawn.  If users will be able to zoom in or out\non your legend, you may want to set this to false.  Otherwise,\nthe border around the legend may not resize appropriately.\n"},
  {"CacheBoundsOff", PyvtkChartLegend_CacheBoundsOff, METH_VARARGS,
   "V.CacheBoundsOff()\nC++: virtual void CacheBoundsOff()\n\nToggle whether or not this legend should attempt to cache its\nposition and size.  The default value is true.  If this value is\nset to false, the legend will recalculate its position and bounds\nevery time it is drawn.  If users will be able to zoom in or out\non your legend, you may want to set this to false.  Otherwise,\nthe border around the legend may not resize appropriately.\n"},
  {"Hit", PyvtkChartLegend_Hit, METH_VARARGS,
   "V.Hit(vtkContextMouseEvent) -> bool\nC++: bool Hit(const vtkContextMouseEvent &mouse) override;\n\nReturn true if the supplied x, y coordinate is inside the item.\n"},
  {"MouseMoveEvent", PyvtkChartLegend_MouseMoveEvent, METH_VARARGS,
   "V.MouseMoveEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseMoveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse move event.\n"},
  {"MouseButtonPressEvent", PyvtkChartLegend_MouseButtonPressEvent, METH_VARARGS,
   "V.MouseButtonPressEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseButtonPressEvent(const vtkContextMouseEvent &mouse)\n     override;\n\nMouse button down event\n"},
  {"MouseButtonReleaseEvent", PyvtkChartLegend_MouseButtonReleaseEvent, METH_VARARGS,
   "V.MouseButtonReleaseEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseButtonReleaseEvent(\n    const vtkContextMouseEvent &mouse) override;\n\nMouse button release event.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkChartLegend_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkChartLegend", // tp_name
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
  PyvtkChartLegend_Doc, // tp_doc
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

static vtkObjectBase *PyvtkChartLegend_StaticNew()
{
  return vtkChartLegend::New();
}

PyObject *PyvtkChartLegend_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkChartLegend_Type, PyvtkChartLegend_Methods,
    "vtkChartLegend",
 &PyvtkChartLegend_StaticNew);

  PyTypeObject *pytype = &PyvtkChartLegend_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkContextItem_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "LEFT", vtkChartLegend::LEFT },
        { "CENTER", vtkChartLegend::CENTER },
        { "RIGHT", vtkChartLegend::RIGHT },
        { "TOP", vtkChartLegend::TOP },
        { "BOTTOM", vtkChartLegend::BOTTOM },
        { "CUSTOM", vtkChartLegend::CUSTOM },
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

void PyVTKAddFile_vtkChartLegend(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkChartLegend_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkChartLegend", o) != 0)
  {
    Py_DECREF(o);
  }

}

