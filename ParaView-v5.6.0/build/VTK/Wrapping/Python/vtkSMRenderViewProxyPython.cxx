// python wrapper for vtkSMRenderViewProxy
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
#include "vtkSMRenderViewProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMRenderViewProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMRenderViewProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMViewProxy_ClassNew
extern "C" { PyObject *PyvtkSMViewProxy_ClassNew(); }
#define DECLARED_PyvtkSMViewProxy_ClassNew
#endif

static const char *PyvtkSMRenderViewProxy_Doc =
  "vtkSMRenderViewProxy - implementation for View that includes render\nwindow and renderers.\n\n"
  "Superclass: vtkSMViewProxy\n\n"
  "vtkSMRenderViewProxy is a 3D view consisting for a render window and\n"
  "two renderers: 1 for 3D geometry and 1 for overlaid 2D geometry.\n\n";


static PyObject *
PyvtkSMRenderViewProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMRenderViewProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMRenderViewProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMRenderViewProxy *tempr = vtkSMRenderViewProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMRenderViewProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMRenderViewProxy::NewInstance());

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
PyvtkSMRenderViewProxy_SelectSurfaceCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectSurfaceCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  const size_t size0 = 4;
  int temp0[4];
  vtkCollection *temp1 = nullptr;
  vtkCollection *temp2 = nullptr;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCollection") &&
      ap.GetVTKObject(temp2, "vtkCollection") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    bool tempr = (ap.IsBound() ?
      op->SelectSurfaceCells(temp0, temp1, temp2, temp3) :
      op->vtkSMRenderViewProxy::SelectSurfaceCells(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_SelectSurfacePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectSurfacePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  const size_t size0 = 4;
  int temp0[4];
  vtkCollection *temp1 = nullptr;
  vtkCollection *temp2 = nullptr;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCollection") &&
      ap.GetVTKObject(temp2, "vtkCollection") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    bool tempr = (ap.IsBound() ?
      op->SelectSurfacePoints(temp0, temp1, temp2, temp3) :
      op->vtkSMRenderViewProxy::SelectSurfacePoints(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_SelectFrustumCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectFrustumCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  const size_t size0 = 4;
  int temp0[4];
  vtkCollection *temp1 = nullptr;
  vtkCollection *temp2 = nullptr;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCollection") &&
      ap.GetVTKObject(temp2, "vtkCollection") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    bool tempr = (ap.IsBound() ?
      op->SelectFrustumCells(temp0, temp1, temp2, temp3) :
      op->vtkSMRenderViewProxy::SelectFrustumCells(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_SelectFrustumPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectFrustumPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  const size_t size0 = 4;
  int temp0[4];
  vtkCollection *temp1 = nullptr;
  vtkCollection *temp2 = nullptr;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCollection") &&
      ap.GetVTKObject(temp2, "vtkCollection") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    bool tempr = (ap.IsBound() ?
      op->SelectFrustumPoints(temp0, temp1, temp2, temp3) :
      op->vtkSMRenderViewProxy::SelectFrustumPoints(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_SelectPolygonPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPolygonPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  vtkIntArray *temp0 = nullptr;
  vtkCollection *temp1 = nullptr;
  vtkCollection *temp2 = nullptr;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkIntArray") &&
      ap.GetVTKObject(temp1, "vtkCollection") &&
      ap.GetVTKObject(temp2, "vtkCollection") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    bool tempr = (ap.IsBound() ?
      op->SelectPolygonPoints(temp0, temp1, temp2, temp3) :
      op->vtkSMRenderViewProxy::SelectPolygonPoints(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_SelectPolygonCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPolygonCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  vtkIntArray *temp0 = nullptr;
  vtkCollection *temp1 = nullptr;
  vtkCollection *temp2 = nullptr;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkIntArray") &&
      ap.GetVTKObject(temp1, "vtkCollection") &&
      ap.GetVTKObject(temp2, "vtkCollection") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    bool tempr = (ap.IsBound() ?
      op->SelectPolygonCells(temp0, temp1, temp2, temp3) :
      op->vtkSMRenderViewProxy::SelectPolygonCells(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_ComputeVisibleScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVisibleScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  const size_t size0 = 4;
  int temp0[4];
  int temp1;
  const char *temp2 = nullptr;
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp4, save4, size4);

    bool tempr = (ap.IsBound() ?
      op->ComputeVisibleScalarRange(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSMRenderViewProxy::ComputeVisibleScalarRange(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMRenderViewProxy_ComputeVisibleScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVisibleScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    bool tempr = (ap.IsBound() ?
      op->ComputeVisibleScalarRange(temp0, temp1, temp2, temp3) :
      op->vtkSMRenderViewProxy::ComputeVisibleScalarRange(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMRenderViewProxy_ComputeVisibleScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkSMRenderViewProxy_ComputeVisibleScalarRange_s1(self, args);
    case 4:
      return PyvtkSMRenderViewProxy_ComputeVisibleScalarRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeVisibleScalarRange");
  return nullptr;
}



static PyObject *
PyvtkSMRenderViewProxy_Pick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkSMRepresentationProxy *tempr = (ap.IsBound() ?
      op->Pick(temp0, temp1) :
      op->vtkSMRenderViewProxy::Pick(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_PickBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  int temp0;
  int temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkSMRepresentationProxy *tempr = (ap.IsBound() ?
      op->PickBlock(temp0, temp1, temp2) :
      op->vtkSMRenderViewProxy::PickBlock(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_ConvertDisplayToPointOnSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertDisplayToPointOnSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    ap.Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->ConvertDisplayToPointOnSurface(temp0, temp1, temp2) :
      op->vtkSMRenderViewProxy::ConvertDisplayToPointOnSurface(temp0, temp1, temp2));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_IsSelectionAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSelectionAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSelectionAvailable() :
      op->vtkSMRenderViewProxy::IsSelectionAvailable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_ResetCamera_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetCamera();
    }
    else
    {
      op->vtkSMRenderViewProxy::ResetCamera();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMRenderViewProxy_ResetCamera_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->ResetCamera(temp0);
    }
    else
    {
      op->vtkSMRenderViewProxy::ResetCamera(temp0);
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
PyvtkSMRenderViewProxy_ResetCamera_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->ResetCamera(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkSMRenderViewProxy::ResetCamera(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMRenderViewProxy_ResetCamera(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMRenderViewProxy_ResetCamera_s1(self, args);
    case 1:
      return PyvtkSMRenderViewProxy_ResetCamera_s2(self, args);
    case 6:
      return PyvtkSMRenderViewProxy_ResetCamera_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ResetCamera");
  return nullptr;
}



static PyObject *
PyvtkSMRenderViewProxy_ZoomTo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZoomTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->ZoomTo(temp0);
    }
    else
    {
      op->vtkSMRenderViewProxy::ZoomTo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_IsSelectVisibleCellsAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSelectVisibleCellsAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->IsSelectVisibleCellsAvailable() :
      op->vtkSMRenderViewProxy::IsSelectVisibleCellsAvailable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_IsSelectVisiblePointsAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSelectVisiblePointsAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->IsSelectVisiblePointsAvailable() :
      op->vtkSMRenderViewProxy::IsSelectVisiblePointsAvailable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_SetupInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->SetupInteractor(temp0);
    }
    else
    {
      op->vtkSMRenderViewProxy::SetupInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkSMRenderViewProxy::GetInteractor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkSMRenderViewProxy::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_GetActiveCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetActiveCamera() :
      op->vtkSMRenderViewProxy::GetActiveCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_SynchronizeCameraProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeCameraProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SynchronizeCameraProperties();
    }
    else
    {
      op->vtkSMRenderViewProxy::SynchronizeCameraProperties();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_LastRenderWasInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LastRenderWasInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->LastRenderWasInteractive() :
      op->vtkSMRenderViewProxy::LastRenderWasInteractive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_GetZBufferValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZBufferValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->GetZBufferValue(temp0, temp1) :
      op->vtkSMRenderViewProxy::GetZBufferValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkSMRenderViewProxy::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_GetNeedsUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeedsUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNeedsUpdate() :
      op->vtkSMRenderViewProxy::GetNeedsUpdate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_StreamingUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StreamingUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->StreamingUpdate(temp0) :
      op->vtkSMRenderViewProxy::StreamingUpdate(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_GetRepresentationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRepresentationType(temp0, temp1) :
      op->vtkSMRenderViewProxy::GetRepresentationType(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkSMRenderViewProxy::GetRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_GetInteractorHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractorHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMViewProxyInteractorHelper *tempr = (ap.IsBound() ?
      op->GetInteractorHelper() :
      op->vtkSMRenderViewProxy::GetInteractorHelper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_CaptureDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CaptureDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->CaptureDepthBuffer() :
      op->vtkSMRenderViewProxy::CaptureDepthBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_GetValuesFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValuesFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetValuesFloat() :
      op->vtkSMRenderViewProxy::GetValuesFloat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_StartCaptureValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartCaptureValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartCaptureValues();
    }
    else
    {
      op->vtkSMRenderViewProxy::StartCaptureValues();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_StopCaptureValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StopCaptureValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StopCaptureValues();
    }
    else
    {
      op->vtkSMRenderViewProxy::StopCaptureValues();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_GetValueRenderingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRenderingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetValueRenderingMode() :
      op->vtkSMRenderViewProxy::GetValueRenderingMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_SetValueRenderingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueRenderingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValueRenderingMode(temp0);
    }
    else
    {
      op->vtkSMRenderViewProxy::SetValueRenderingMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMRenderViewProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMRenderViewProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMRenderViewProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMRenderViewProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMRenderViewProxy\nC++: static vtkSMRenderViewProxy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMRenderViewProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMRenderViewProxy\nC++: vtkSMRenderViewProxy *NewInstance()\n\n"},
  {"SelectSurfaceCells", PyvtkSMRenderViewProxy_SelectSurfaceCells, METH_VARARGS,
   "V.SelectSurfaceCells((int, int, int, int), vtkCollection,\n    vtkCollection, bool) -> bool\nC++: bool SelectSurfaceCells(const int region[4],\n    vtkCollection *selectedRepresentations,\n    vtkCollection *selectionSources,\n    bool multiple_selections=false)\n\nMakes a new selection source proxy.\n"},
  {"SelectSurfacePoints", PyvtkSMRenderViewProxy_SelectSurfacePoints, METH_VARARGS,
   "V.SelectSurfacePoints((int, int, int, int), vtkCollection,\n    vtkCollection, bool) -> bool\nC++: bool SelectSurfacePoints(const int region[4],\n    vtkCollection *selectedRepresentations,\n    vtkCollection *selectionSources,\n    bool multiple_selections=false)\n\nMakes a new selection source proxy.\n"},
  {"SelectFrustumCells", PyvtkSMRenderViewProxy_SelectFrustumCells, METH_VARARGS,
   "V.SelectFrustumCells((int, int, int, int), vtkCollection,\n    vtkCollection, bool) -> bool\nC++: bool SelectFrustumCells(const int region[4],\n    vtkCollection *selectedRepresentations,\n    vtkCollection *selectionSources,\n    bool multiple_selections=false)\n\nMakes a new selection source proxy.\n"},
  {"SelectFrustumPoints", PyvtkSMRenderViewProxy_SelectFrustumPoints, METH_VARARGS,
   "V.SelectFrustumPoints((int, int, int, int), vtkCollection,\n    vtkCollection, bool) -> bool\nC++: bool SelectFrustumPoints(const int region[4],\n    vtkCollection *selectedRepresentations,\n    vtkCollection *selectionSources,\n    bool multiple_selections=false)\n\nMakes a new selection source proxy.\n"},
  {"SelectPolygonPoints", PyvtkSMRenderViewProxy_SelectPolygonPoints, METH_VARARGS,
   "V.SelectPolygonPoints(vtkIntArray, vtkCollection, vtkCollection,\n    bool) -> bool\nC++: bool SelectPolygonPoints(vtkIntArray *polygon,\n    vtkCollection *selectedRepresentations,\n    vtkCollection *selectionSources,\n    bool multiple_selections=false)\n\nMakes a new selection source proxy.\n"},
  {"SelectPolygonCells", PyvtkSMRenderViewProxy_SelectPolygonCells, METH_VARARGS,
   "V.SelectPolygonCells(vtkIntArray, vtkCollection, vtkCollection,\n    bool) -> bool\nC++: bool SelectPolygonCells(vtkIntArray *polygon,\n    vtkCollection *selectedRepresentations,\n    vtkCollection *selectionSources,\n    bool multiple_selections=false)\n\nMakes a new selection source proxy.\n"},
  {"ComputeVisibleScalarRange", PyvtkSMRenderViewProxy_ComputeVisibleScalarRange, METH_VARARGS,
   "V.ComputeVisibleScalarRange((int, int, int, int), int, string,\n    int, [float, ...]) -> bool\nC++: bool ComputeVisibleScalarRange(const int region[4],\n    int fieldAssociation, const char *scalarName, int component,\n    double range[])\nV.ComputeVisibleScalarRange(int, string, int, [float, ...])\n    -> bool\nC++: bool ComputeVisibleScalarRange(int fieldAssociation,\n    const char *scalarName, int component, double range[])\n\nReturns the range for visible elements in the current view.\n"},
  {"Pick", PyvtkSMRenderViewProxy_Pick, METH_VARARGS,
   "V.Pick(int, int) -> vtkSMRepresentationProxy\nC++: vtkSMRepresentationProxy *Pick(int x, int y)\n\nConvenience method to pick a location. Internally uses\nSelectSurfaceCells to locate the picked object. In future, we can\nmake this faster.\n"},
  {"PickBlock", PyvtkSMRenderViewProxy_PickBlock, METH_VARARGS,
   "V.PickBlock(int, int, int) -> vtkSMRepresentationProxy\nC++: vtkSMRepresentationProxy *PickBlock(int x, int y,\n    unsigned int &flatIndex)\n\nConvenience method to pick a block in a multi-block data set.\nWill return the selected representation. Furthermore, if it is a\nmulti-block data set the flat index of the selected block will be\nreturned in flatIndex.\n"},
  {"ConvertDisplayToPointOnSurface", PyvtkSMRenderViewProxy_ConvertDisplayToPointOnSurface, METH_VARARGS,
   "V.ConvertDisplayToPointOnSurface((int, int), [float, float,\n    float], bool) -> bool\nC++: bool ConvertDisplayToPointOnSurface(\n    const int display_position[2], double world_position[3],\n    bool snapOnMeshPoint=false)\n\nGiven a location is display coordinates (pixels), tries to\ncompute and return the world location on a surface, if possible.\nReturns true if the conversion was successful, else returns\nfalse. If Snap on mesh point is true, it will return a point from\nthe mesh only\n"},
  {"IsSelectionAvailable", PyvtkSMRenderViewProxy_IsSelectionAvailable, METH_VARARGS,
   "V.IsSelectionAvailable() -> bool\nC++: virtual bool IsSelectionAvailable()\n\nChecks if color depth is sufficient to support selection. If not,\nwill return 0 and any calls to SelectVisibleCells will quietly\nreturn an empty selection.\n"},
  {"ResetCamera", PyvtkSMRenderViewProxy_ResetCamera, METH_VARARGS,
   "V.ResetCamera()\nC++: void ResetCamera()\nV.ResetCamera([float, float, float, float, float, float])\nC++: void ResetCamera(double bounds[6])\nV.ResetCamera(float, float, float, float, float, float)\nC++: void ResetCamera(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\n\nFor backwards compatibility in Python scripts.\n"},
  {"ZoomTo", PyvtkSMRenderViewProxy_ZoomTo, METH_VARARGS,
   "V.ZoomTo(vtkSMProxy)\nC++: virtual void ZoomTo(vtkSMProxy *representation)\n\nConvenience method for zooming to a representation.\n"},
  {"IsSelectVisibleCellsAvailable", PyvtkSMRenderViewProxy_IsSelectVisibleCellsAvailable, METH_VARARGS,
   "V.IsSelectVisibleCellsAvailable() -> string\nC++: virtual const char *IsSelectVisibleCellsAvailable()\n\nSimilar to IsSelectionAvailable(), however, on failure returns\nthe error message otherwise 0.\n"},
  {"IsSelectVisiblePointsAvailable", PyvtkSMRenderViewProxy_IsSelectVisiblePointsAvailable, METH_VARARGS,
   "V.IsSelectVisiblePointsAvailable() -> string\nC++: virtual const char *IsSelectVisiblePointsAvailable()\n\nSimilar to IsSelectionAvailable(), however, on failure returns\nthe error message otherwise 0.\n"},
  {"SetupInteractor", PyvtkSMRenderViewProxy_SetupInteractor, METH_VARARGS,
   "V.SetupInteractor(vtkRenderWindowInteractor)\nC++: void SetupInteractor(vtkRenderWindowInteractor *iren)\n    override;\n\nA client process need to set the interactor to enable\ninteractivity. Use this method to set the interactor and\ninitialize it as needed by the RenderView. This include changing\nthe interactor style as well as overriding VTK rendering to use\nthe Proxy/ViewProxy API instead.\n"},
  {"GetInteractor", PyvtkSMRenderViewProxy_GetInteractor, METH_VARARGS,
   "V.GetInteractor() -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *GetInteractor() override;\n\nReturns the interactor.\n"},
  {"GetRenderer", PyvtkSMRenderViewProxy_GetRenderer, METH_VARARGS,
   "V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\nReturns the client-side renderer (composited or 3D).\n"},
  {"GetActiveCamera", PyvtkSMRenderViewProxy_GetActiveCamera, METH_VARARGS,
   "V.GetActiveCamera() -> vtkCamera\nC++: vtkCamera *GetActiveCamera()\n\nReturns the client-side camera object.\n"},
  {"SynchronizeCameraProperties", PyvtkSMRenderViewProxy_SynchronizeCameraProperties, METH_VARARGS,
   "V.SynchronizeCameraProperties()\nC++: void SynchronizeCameraProperties()\n\nThis method calls UpdateInformation on the Camera Proxy and sets\nthe Camera properties according to the info properties. This\napproach is a bit lame. We need to ensure that camera properties\nare always/automatically synchronized. Camera properties cannot\nbe treated same way as other properties.\n"},
  {"LastRenderWasInteractive", PyvtkSMRenderViewProxy_LastRenderWasInteractive, METH_VARARGS,
   "V.LastRenderWasInteractive() -> bool\nC++: virtual bool LastRenderWasInteractive()\n\nReturns true if the most recent render indeed employed low-res\nrendering.\n"},
  {"GetZBufferValue", PyvtkSMRenderViewProxy_GetZBufferValue, METH_VARARGS,
   "V.GetZBufferValue(int, int) -> float\nC++: double GetZBufferValue(int x, int y)\n\nReturns the Z-buffer value at the given location in this view.\n"},
  {"Update", PyvtkSMRenderViewProxy_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nCalled vtkPVView::Update on the server-side. Overridden to update\nthe state of NeedsUpdateLOD flag.\n"},
  {"GetNeedsUpdate", PyvtkSMRenderViewProxy_GetNeedsUpdate, METH_VARARGS,
   "V.GetNeedsUpdate() -> bool\nC++: bool GetNeedsUpdate() override;\n\nWe override that method to handle LOD and non-LOD NeedsUpdate in\ntransparent manner.\n"},
  {"StreamingUpdate", PyvtkSMRenderViewProxy_StreamingUpdate, METH_VARARGS,
   "V.StreamingUpdate(bool) -> bool\nC++: bool StreamingUpdate(bool render_if_needed)\n\nCalled to render a streaming pass. Returns true if the view\n\"streamed\" some geometry.\n"},
  {"GetRepresentationType", PyvtkSMRenderViewProxy_GetRepresentationType, METH_VARARGS,
   "V.GetRepresentationType(vtkSMSourceProxy, int) -> string\nC++: const char *GetRepresentationType(vtkSMSourceProxy *producer,\n     int outputPort) override;\n\nOverridden to check through the various representations that this\nview can create.\n"},
  {"GetRenderWindow", PyvtkSMRenderViewProxy_GetRenderWindow, METH_VARARGS,
   "V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow() override;\n\nReturns the render window used by this view.\n"},
  {"GetInteractorHelper", PyvtkSMRenderViewProxy_GetInteractorHelper, METH_VARARGS,
   "V.GetInteractorHelper() -> vtkSMViewProxyInteractorHelper\nC++: vtkSMViewProxyInteractorHelper *GetInteractorHelper()\n\nProvides access to the vtkSMViewProxyInteractorHelper object that\nhandles the interaction/view sync. We provide access to it for\napplications to monitor timer events etc.\n"},
  {"CaptureDepthBuffer", PyvtkSMRenderViewProxy_CaptureDepthBuffer, METH_VARARGS,
   "V.CaptureDepthBuffer() -> vtkFloatArray\nC++: vtkFloatArray *CaptureDepthBuffer()\n\nAccess to the Z buffer.\n"},
  {"GetValuesFloat", PyvtkSMRenderViewProxy_GetValuesFloat, METH_VARARGS,
   "V.GetValuesFloat() -> vtkFloatArray\nC++: vtkFloatArray *GetValuesFloat()\n\nAccess to value-rendered array. Used for deferred color mapping\nduring in-situ visualization (Cinema).\n"},
  {"StartCaptureValues", PyvtkSMRenderViewProxy_StartCaptureValues, METH_VARARGS,
   "V.StartCaptureValues()\nC++: void StartCaptureValues()\n\nValue raster capture controls.\n"},
  {"StopCaptureValues", PyvtkSMRenderViewProxy_StopCaptureValues, METH_VARARGS,
   "V.StopCaptureValues()\nC++: void StopCaptureValues()\n\nValue raster capture controls.\n"},
  {"GetValueRenderingMode", PyvtkSMRenderViewProxy_GetValueRenderingMode, METH_VARARGS,
   "V.GetValueRenderingMode() -> int\nC++: int GetValueRenderingMode()\n\nAccess to the current vtkValuePass rendering mode.\n"},
  {"SetValueRenderingMode", PyvtkSMRenderViewProxy_SetValueRenderingMode, METH_VARARGS,
   "V.SetValueRenderingMode(int)\nC++: void SetValueRenderingMode(int mode)\n\nAccess to the current vtkValuePass rendering mode.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMRenderViewProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMRenderViewProxy", // tp_name
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
  PyvtkSMRenderViewProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMRenderViewProxy_StaticNew()
{
  return vtkSMRenderViewProxy::New();
}

PyObject *PyvtkSMRenderViewProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMRenderViewProxy_Type, PyvtkSMRenderViewProxy_Methods,
    "vtkSMRenderViewProxy",
 &PyvtkSMRenderViewProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMRenderViewProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMViewProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMRenderViewProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMRenderViewProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMRenderViewProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

