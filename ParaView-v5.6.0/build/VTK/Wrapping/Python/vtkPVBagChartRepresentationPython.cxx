// python wrapper for vtkPVBagChartRepresentation
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
#include "vtkPVBagChartRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVBagChartRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVBagChartRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkChartRepresentation_ClassNew
extern "C" { PyObject *PyvtkChartRepresentation_ClassNew(); }
#define DECLARED_PyvtkChartRepresentation_ClassNew
#endif

static const char *PyvtkPVBagChartRepresentation_Doc =
  "vtkPVBagChartRepresentation - vtkPVagChartRepresentation is the\nvtkChartRepresentation subclass for bag plots representation.\n\n"
  "Superclass: vtkChartRepresentation\n\n"
  "It exposes API from underlying vtkXYChart and vtkPlotBag.\n\n";


static PyObject *
PyvtkPVBagChartRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVBagChartRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVBagChartRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVBagChartRepresentation *tempr = vtkPVBagChartRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVBagChartRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVBagChartRepresentation::NewInstance());

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
PyvtkPVBagChartRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility(temp0);
    }
    else
    {
      op->vtkPVBagChartRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_GetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartXY *tempr = (ap.IsBound() ?
      op->GetChart() :
      op->vtkPVBagChartRepresentation::GetChart());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetLineThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineThickness(temp0);
    }
    else
    {
      op->vtkPVBagChartRepresentation::SetLineThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_GetLineThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLineThickness() :
      op->vtkPVBagChartRepresentation::GetLineThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetLineStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineStyle(temp0);
    }
    else
    {
      op->vtkPVBagChartRepresentation::SetLineStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_GetLineStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLineStyle() :
      op->vtkPVBagChartRepresentation::GetLineStyle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetLineColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

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
      op->SetLineColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVBagChartRepresentation::SetLineColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVBagChartRepresentation_SetLineColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetLineColor(temp0);
    }
    else
    {
      op->vtkPVBagChartRepresentation::SetLineColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVBagChartRepresentation_SetLineColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPVBagChartRepresentation_SetLineColor_s1(self, args);
    case 1:
      return PyvtkPVBagChartRepresentation_SetLineColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLineColor");
  return nullptr;
}



static PyObject *
PyvtkPVBagChartRepresentation_GetLineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLineColor() :
      op->vtkPVBagChartRepresentation::GetLineColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

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
      op->vtkPVBagChartRepresentation::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkPVBagChartRepresentation::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetBagColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBagColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

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
      op->SetBagColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVBagChartRepresentation::SetBagColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVBagChartRepresentation_SetBagColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBagColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBagColor(temp0);
    }
    else
    {
      op->vtkPVBagChartRepresentation::SetBagColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVBagChartRepresentation_SetBagColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPVBagChartRepresentation_SetBagColor_s1(self, args);
    case 1:
      return PyvtkPVBagChartRepresentation_SetBagColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBagColor");
  return nullptr;
}



static PyObject *
PyvtkPVBagChartRepresentation_GetBagColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBagColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBagColor() :
      op->vtkPVBagChartRepresentation::GetBagColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetSelectionColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

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
      op->SetSelectionColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVBagChartRepresentation::SetSelectionColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVBagChartRepresentation_SetSelectionColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionColor(temp0);
    }
    else
    {
      op->vtkPVBagChartRepresentation::SetSelectionColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVBagChartRepresentation_SetSelectionColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPVBagChartRepresentation_SetSelectionColor_s1(self, args);
    case 1:
      return PyvtkPVBagChartRepresentation_SetSelectionColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSelectionColor");
  return nullptr;
}



static PyObject *
PyvtkPVBagChartRepresentation_GetSelectionColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSelectionColor() :
      op->vtkPVBagChartRepresentation::GetSelectionColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacity(temp0);
    }
    else
    {
      op->vtkPVBagChartRepresentation::SetOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacity() :
      op->vtkPVBagChartRepresentation::GetOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointSize(temp0);
    }
    else
    {
      op->vtkPVBagChartRepresentation::SetPointSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_GetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointSize() :
      op->vtkPVBagChartRepresentation::GetPointSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetPointColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

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
      op->SetPointColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVBagChartRepresentation::SetPointColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVBagChartRepresentation_SetPointColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPointColor(temp0);
    }
    else
    {
      op->vtkPVBagChartRepresentation::SetPointColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVBagChartRepresentation_SetPointColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPVBagChartRepresentation_SetPointColor_s1(self, args);
    case 1:
      return PyvtkPVBagChartRepresentation_SetPointColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPointColor");
  return nullptr;
}



static PyObject *
PyvtkPVBagChartRepresentation_GetPointColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPointColor() :
      op->vtkPVBagChartRepresentation::GetPointColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetGridLineThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridLineThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridLineThickness(temp0);
    }
    else
    {
      op->vtkPVBagChartRepresentation::SetGridLineThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_GetGridLineThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridLineThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGridLineThickness() :
      op->vtkPVBagChartRepresentation::GetGridLineThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetGridLineStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridLineStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridLineStyle(temp0);
    }
    else
    {
      op->vtkPVBagChartRepresentation::SetGridLineStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_GetGridLineStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridLineStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGridLineStyle() :
      op->vtkPVBagChartRepresentation::GetGridLineStyle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetPUserColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPUserColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

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
      op->SetPUserColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVBagChartRepresentation::SetPUserColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVBagChartRepresentation_SetPUserColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPUserColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPUserColor(temp0);
    }
    else
    {
      op->vtkPVBagChartRepresentation::SetPUserColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVBagChartRepresentation_SetPUserColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPVBagChartRepresentation_SetPUserColor_s1(self, args);
    case 1:
      return PyvtkPVBagChartRepresentation_SetPUserColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPUserColor");
  return nullptr;
}



static PyObject *
PyvtkPVBagChartRepresentation_GetPUserColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPUserColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPUserColor() :
      op->vtkPVBagChartRepresentation::GetPUserColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetP50Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetP50Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

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
      op->SetP50Color(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVBagChartRepresentation::SetP50Color(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVBagChartRepresentation_SetP50Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetP50Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetP50Color(temp0);
    }
    else
    {
      op->vtkPVBagChartRepresentation::SetP50Color(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVBagChartRepresentation_SetP50Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPVBagChartRepresentation_SetP50Color_s1(self, args);
    case 1:
      return PyvtkPVBagChartRepresentation_SetP50Color_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetP50Color");
  return nullptr;
}



static PyObject *
PyvtkPVBagChartRepresentation_GetP50Color(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetP50Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetP50Color() :
      op->vtkPVBagChartRepresentation::GetP50Color());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetXAxisSeriesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisSeriesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXAxisSeriesName(temp0);
    }
    else
    {
      op->vtkPVBagChartRepresentation::SetXAxisSeriesName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_GetXAxisSeriesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisSeriesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXAxisSeriesName() :
      op->vtkPVBagChartRepresentation::GetXAxisSeriesName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetUseIndexForXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseIndexForXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseIndexForXAxis(temp0);
    }
    else
    {
      op->vtkPVBagChartRepresentation::SetUseIndexForXAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_GetUseIndexForXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseIndexForXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseIndexForXAxis() :
      op->vtkPVBagChartRepresentation::GetUseIndexForXAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetDensitySeriesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDensitySeriesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDensitySeriesName(temp0);
    }
    else
    {
      op->vtkPVBagChartRepresentation::SetDensitySeriesName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_GetDensitySeriesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDensitySeriesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDensitySeriesName() :
      op->vtkPVBagChartRepresentation::GetDensitySeriesName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetYAxisSeriesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisSeriesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYAxisSeriesName(temp0);
    }
    else
    {
      op->vtkPVBagChartRepresentation::SetYAxisSeriesName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_GetYAxisSeriesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisSeriesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetYAxisSeriesName() :
      op->vtkPVBagChartRepresentation::GetYAxisSeriesName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVBagChartRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkPVBagChartRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVBagChartRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVBagChartRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVBagChartRepresentation\nC++: static vtkPVBagChartRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVBagChartRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVBagChartRepresentation\nC++: vtkPVBagChartRepresentation *NewInstance()\n\n"},
  {"SetVisibility", PyvtkPVBagChartRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool visible) override;\n\nSet visibility of the representation.\n"},
  {"GetChart", PyvtkPVBagChartRepresentation_GetChart, METH_VARARGS,
   "V.GetChart() -> vtkChartXY\nC++: vtkChartXY *GetChart()\n\nProvides access to the underlying VTK representation.\n"},
  {"SetLineThickness", PyvtkPVBagChartRepresentation_SetLineThickness, METH_VARARGS,
   "V.SetLineThickness(int)\nC++: virtual void SetLineThickness(int _arg)\n\nSet/get the line thickness for the plot.\n"},
  {"GetLineThickness", PyvtkPVBagChartRepresentation_GetLineThickness, METH_VARARGS,
   "V.GetLineThickness() -> int\nC++: virtual int GetLineThickness()\n\nSet/get the line thickness for the plot.\n"},
  {"SetLineStyle", PyvtkPVBagChartRepresentation_SetLineStyle, METH_VARARGS,
   "V.SetLineStyle(int)\nC++: virtual void SetLineStyle(int _arg)\n\nSet/get the line style for the plot.\n"},
  {"GetLineStyle", PyvtkPVBagChartRepresentation_GetLineStyle, METH_VARARGS,
   "V.GetLineStyle() -> int\nC++: virtual int GetLineStyle()\n\nSet/get the line style for the plot.\n"},
  {"SetLineColor", PyvtkPVBagChartRepresentation_SetLineColor, METH_VARARGS,
   "V.SetLineColor(float, float, float)\nC++: void SetLineColor(double, double, double)\nV.SetLineColor((float, float, float))\nC++: void SetLineColor(double a[3])\n\n"},
  {"GetLineColor", PyvtkPVBagChartRepresentation_GetLineColor, METH_VARARGS,
   "V.GetLineColor() -> (float, float, float)\nC++: double *GetLineColor()\n\n"},
  {"SetLookupTable", PyvtkPVBagChartRepresentation_SetLookupTable, METH_VARARGS,
   "V.SetLookupTable(vtkScalarsToColors)\nC++: void SetLookupTable(vtkScalarsToColors *lut)\n\nSet/get the color to used for the points in the plot.\n"},
  {"GetLookupTable", PyvtkPVBagChartRepresentation_GetLookupTable, METH_VARARGS,
   "V.GetLookupTable() -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetLookupTable()\n\nSet/get the color to used for the points in the plot.\n"},
  {"SetBagColor", PyvtkPVBagChartRepresentation_SetBagColor, METH_VARARGS,
   "V.SetBagColor(float, float, float)\nC++: void SetBagColor(double, double, double)\nV.SetBagColor((float, float, float))\nC++: void SetBagColor(double a[3])\n\n"},
  {"GetBagColor", PyvtkPVBagChartRepresentation_GetBagColor, METH_VARARGS,
   "V.GetBagColor() -> (float, float, float)\nC++: double *GetBagColor()\n\n"},
  {"SetSelectionColor", PyvtkPVBagChartRepresentation_SetSelectionColor, METH_VARARGS,
   "V.SetSelectionColor(float, float, float)\nC++: void SetSelectionColor(double, double, double)\nV.SetSelectionColor((float, float, float))\nC++: void SetSelectionColor(double a[3])\n\n"},
  {"GetSelectionColor", PyvtkPVBagChartRepresentation_GetSelectionColor, METH_VARARGS,
   "V.GetSelectionColor() -> (float, float, float)\nC++: double *GetSelectionColor()\n\n"},
  {"SetOpacity", PyvtkPVBagChartRepresentation_SetOpacity, METH_VARARGS,
   "V.SetOpacity(float)\nC++: virtual void SetOpacity(double _arg)\n\nSet/get the opacity for the bag in the plot.\n"},
  {"GetOpacity", PyvtkPVBagChartRepresentation_GetOpacity, METH_VARARGS,
   "V.GetOpacity() -> float\nC++: virtual double GetOpacity()\n\nSet/get the opacity for the bag in the plot.\n"},
  {"SetPointSize", PyvtkPVBagChartRepresentation_SetPointSize, METH_VARARGS,
   "V.SetPointSize(int)\nC++: virtual void SetPointSize(int _arg)\n\nSet/get the point size in the plot.\n"},
  {"GetPointSize", PyvtkPVBagChartRepresentation_GetPointSize, METH_VARARGS,
   "V.GetPointSize() -> int\nC++: virtual int GetPointSize()\n\nSet/get the point size in the plot.\n"},
  {"SetPointColor", PyvtkPVBagChartRepresentation_SetPointColor, METH_VARARGS,
   "V.SetPointColor(float, float, float)\nC++: void SetPointColor(double, double, double)\nV.SetPointColor((float, float, float))\nC++: void SetPointColor(double a[3])\n\n"},
  {"GetPointColor", PyvtkPVBagChartRepresentation_GetPointColor, METH_VARARGS,
   "V.GetPointColor() -> (float, float, float)\nC++: double *GetPointColor()\n\n"},
  {"SetGridLineThickness", PyvtkPVBagChartRepresentation_SetGridLineThickness, METH_VARARGS,
   "V.SetGridLineThickness(int)\nC++: virtual void SetGridLineThickness(int _arg)\n\nSet/get the line thickness for the plot.\n"},
  {"GetGridLineThickness", PyvtkPVBagChartRepresentation_GetGridLineThickness, METH_VARARGS,
   "V.GetGridLineThickness() -> int\nC++: virtual int GetGridLineThickness()\n\nSet/get the line thickness for the plot.\n"},
  {"SetGridLineStyle", PyvtkPVBagChartRepresentation_SetGridLineStyle, METH_VARARGS,
   "V.SetGridLineStyle(int)\nC++: virtual void SetGridLineStyle(int _arg)\n\nSet/get the line style for the plot.\n"},
  {"GetGridLineStyle", PyvtkPVBagChartRepresentation_GetGridLineStyle, METH_VARARGS,
   "V.GetGridLineStyle() -> int\nC++: virtual int GetGridLineStyle()\n\nSet/get the line style for the plot.\n"},
  {"SetPUserColor", PyvtkPVBagChartRepresentation_SetPUserColor, METH_VARARGS,
   "V.SetPUserColor(float, float, float)\nC++: void SetPUserColor(double, double, double)\nV.SetPUserColor((float, float, float))\nC++: void SetPUserColor(double a[3])\n\n"},
  {"GetPUserColor", PyvtkPVBagChartRepresentation_GetPUserColor, METH_VARARGS,
   "V.GetPUserColor() -> (float, float, float)\nC++: double *GetPUserColor()\n\n"},
  {"SetP50Color", PyvtkPVBagChartRepresentation_SetP50Color, METH_VARARGS,
   "V.SetP50Color(float, float, float)\nC++: void SetP50Color(double, double, double)\nV.SetP50Color((float, float, float))\nC++: void SetP50Color(double a[3])\n\n"},
  {"GetP50Color", PyvtkPVBagChartRepresentation_GetP50Color, METH_VARARGS,
   "V.GetP50Color() -> (float, float, float)\nC++: double *GetP50Color()\n\n"},
  {"SetXAxisSeriesName", PyvtkPVBagChartRepresentation_SetXAxisSeriesName, METH_VARARGS,
   "V.SetXAxisSeriesName(string)\nC++: virtual void SetXAxisSeriesName(const char *_arg)\n\nSet/get the series to use as the X-axis.\n"},
  {"GetXAxisSeriesName", PyvtkPVBagChartRepresentation_GetXAxisSeriesName, METH_VARARGS,
   "V.GetXAxisSeriesName() -> string\nC++: virtual char *GetXAxisSeriesName()\n\nSet/get the series to use as the X-axis.\n"},
  {"SetUseIndexForXAxis", PyvtkPVBagChartRepresentation_SetUseIndexForXAxis, METH_VARARGS,
   "V.SetUseIndexForXAxis(bool)\nC++: virtual void SetUseIndexForXAxis(bool _arg)\n\nSet/get whether the index should be used for the x axis. When\ntrue, XSeriesName is ignored.\n"},
  {"GetUseIndexForXAxis", PyvtkPVBagChartRepresentation_GetUseIndexForXAxis, METH_VARARGS,
   "V.GetUseIndexForXAxis() -> bool\nC++: virtual bool GetUseIndexForXAxis()\n\nSet/get whether the index should be used for the x axis. When\ntrue, XSeriesName is ignored.\n"},
  {"SetDensitySeriesName", PyvtkPVBagChartRepresentation_SetDensitySeriesName, METH_VARARGS,
   "V.SetDensitySeriesName(string)\nC++: virtual void SetDensitySeriesName(const char *_arg)\n\nSet/get the series to use as the density\n"},
  {"GetDensitySeriesName", PyvtkPVBagChartRepresentation_GetDensitySeriesName, METH_VARARGS,
   "V.GetDensitySeriesName() -> string\nC++: virtual char *GetDensitySeriesName()\n\nSet/get the series to use as the density\n"},
  {"SetYAxisSeriesName", PyvtkPVBagChartRepresentation_SetYAxisSeriesName, METH_VARARGS,
   "V.SetYAxisSeriesName(string)\nC++: virtual void SetYAxisSeriesName(const char *_arg)\n\nSet/get the series to use as the Y-axis\n"},
  {"GetYAxisSeriesName", PyvtkPVBagChartRepresentation_GetYAxisSeriesName, METH_VARARGS,
   "V.GetYAxisSeriesName() -> string\nC++: virtual char *GetYAxisSeriesName()\n\nSet/get the series to use as the Y-axis\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVBagChartRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVBagChartRepresentation", // tp_name
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
  PyvtkPVBagChartRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVBagChartRepresentation_StaticNew()
{
  return vtkPVBagChartRepresentation::New();
}

PyObject *PyvtkPVBagChartRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVBagChartRepresentation_Type, PyvtkPVBagChartRepresentation_Methods,
    "vtkPVBagChartRepresentation",
 &PyvtkPVBagChartRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVBagChartRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkChartRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVBagChartRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVBagChartRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVBagChartRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

