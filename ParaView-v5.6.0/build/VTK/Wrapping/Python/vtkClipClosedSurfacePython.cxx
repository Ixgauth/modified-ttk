// python wrapper for vtkClipClosedSurface
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
#include "vtkClipClosedSurface.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkClipClosedSurface(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkClipClosedSurface_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkClipClosedSurface_Doc =
  "vtkClipClosedSurface - Clip a closed surface with a plane collection\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkClipClosedSurface will clip a closed polydata surface with a\n"
  "collection of clipping planes.  It will produce a new closed surface\n"
  "by creating new polygonal faces where the input data was clipped.\n\n"
  "Non-manifold surfaces should not be used as input for this filter.\n"
  "The input surface should have no open edges, and must not have any\n"
  "edges that are shared by more than two faces.  The vtkFeatureEdges\n"
  "filter can be used to verify that a data set satisfies these\n"
  "conditions. In addition, the input surface should not self-intersect,\n"
  "meaning that the faces of the surface should only touch at their\n"
  "edges.\n\n"
  "If GenerateOutline is on, this filter will generate an outline\n"
  "wherever the clipping planes intersect the data.  The ScalarMode\n"
  "option will add cell scalars to the output, so that the generated\n"
  "faces can be visualized in a different color from the original\n"
  "surface.\n\n"
  "@warning\n"
  "The triangulation of new faces is done in O(n) time for simple convex\n"
  "inputs, but for non-convex inputs the worst-case time is O(n^2*m^2)\n"
  "where n is the number of points and m is the number of 3D cavities.\n"
  "The best triangulation algorithms, in contrast, are O(n log n). There\n"
  "are also rare cases where the triangulation will fail to produce a\n"
  "watertight output.  Turn on TriangulationErrorDisplay to be notified\n"
  "of these failures.\n"
  "@sa\n"
  "vtkOutlineFilter vtkOutlineSource vtkVolumeOutlineSource@par Thanks:\n"
  "Thanks to David Gobbi for contributing this class to VTK.\n\n";


static PyObject *
PyvtkClipClosedSurface_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkClipClosedSurface::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkClipClosedSurface::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkClipClosedSurface *tempr = vtkClipClosedSurface::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkClipClosedSurface *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkClipClosedSurface::NewInstance());

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
PyvtkClipClosedSurface_SetClippingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  vtkPlaneCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaneCollection"))
  {
    if (ap.IsBound())
    {
      op->SetClippingPlanes(temp0);
    }
    else
    {
      op->vtkClipClosedSurface::SetClippingPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetClippingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlaneCollection *tempr = (ap.IsBound() ?
      op->GetClippingPlanes() :
      op->vtkClipClosedSurface::GetClippingPlanes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkClipClosedSurface::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkClipClosedSurface::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetPassPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassPointData(temp0);
    }
    else
    {
      op->vtkClipClosedSurface::SetPassPointData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_PassPointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointDataOn();
    }
    else
    {
      op->vtkClipClosedSurface::PassPointDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_PassPointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointDataOff();
    }
    else
    {
      op->vtkClipClosedSurface::PassPointDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetPassPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassPointData() :
      op->vtkClipClosedSurface::GetPassPointData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetGenerateOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateOutline(temp0);
    }
    else
    {
      op->vtkClipClosedSurface::SetGenerateOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GenerateOutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateOutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateOutlineOn();
    }
    else
    {
      op->vtkClipClosedSurface::GenerateOutlineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GenerateOutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateOutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateOutlineOff();
    }
    else
    {
      op->vtkClipClosedSurface::GenerateOutlineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetGenerateOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateOutline() :
      op->vtkClipClosedSurface::GetGenerateOutline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetGenerateFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateFaces(temp0);
    }
    else
    {
      op->vtkClipClosedSurface::SetGenerateFaces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GenerateFacesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFacesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateFacesOn();
    }
    else
    {
      op->vtkClipClosedSurface::GenerateFacesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GenerateFacesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFacesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateFacesOff();
    }
    else
    {
      op->vtkClipClosedSurface::GenerateFacesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetGenerateFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateFaces() :
      op->vtkClipClosedSurface::GetGenerateFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarMode(temp0);
    }
    else
    {
      op->vtkClipClosedSurface::SetScalarMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetScalarModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarModeMinValue() :
      op->vtkClipClosedSurface::GetScalarModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetScalarModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarModeMaxValue() :
      op->vtkClipClosedSurface::GetScalarModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetScalarModeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToNone();
    }
    else
    {
      op->vtkClipClosedSurface::SetScalarModeToNone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetScalarModeToColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToColors();
    }
    else
    {
      op->vtkClipClosedSurface::SetScalarModeToColors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetScalarModeToLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToLabels();
    }
    else
    {
      op->vtkClipClosedSurface::SetScalarModeToLabels();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarMode() :
      op->vtkClipClosedSurface::GetScalarMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetScalarModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScalarModeAsString() :
      op->vtkClipClosedSurface::GetScalarModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetBaseColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

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
      op->SetBaseColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkClipClosedSurface::SetBaseColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkClipClosedSurface_SetBaseColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBaseColor(temp0);
    }
    else
    {
      op->vtkClipClosedSurface::SetBaseColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkClipClosedSurface_SetBaseColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkClipClosedSurface_SetBaseColor_s1(self, args);
    case 1:
      return PyvtkClipClosedSurface_SetBaseColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBaseColor");
  return nullptr;
}



static PyObject *
PyvtkClipClosedSurface_GetBaseColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBaseColor() :
      op->vtkClipClosedSurface::GetBaseColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetClipColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

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
      op->SetClipColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkClipClosedSurface::SetClipColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkClipClosedSurface_SetClipColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetClipColor(temp0);
    }
    else
    {
      op->vtkClipClosedSurface::SetClipColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkClipClosedSurface_SetClipColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkClipClosedSurface_SetClipColor_s1(self, args);
    case 1:
      return PyvtkClipClosedSurface_SetClipColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetClipColor");
  return nullptr;
}



static PyObject *
PyvtkClipClosedSurface_GetClipColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetClipColor() :
      op->vtkClipClosedSurface::GetClipColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetActivePlaneId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlaneId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlaneId(temp0);
    }
    else
    {
      op->vtkClipClosedSurface::SetActivePlaneId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetActivePlaneId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActivePlaneId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActivePlaneId() :
      op->vtkClipClosedSurface::GetActivePlaneId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetActivePlaneColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlaneColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

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
      op->SetActivePlaneColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkClipClosedSurface::SetActivePlaneColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkClipClosedSurface_SetActivePlaneColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlaneColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlaneColor(temp0);
    }
    else
    {
      op->vtkClipClosedSurface::SetActivePlaneColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkClipClosedSurface_SetActivePlaneColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkClipClosedSurface_SetActivePlaneColor_s1(self, args);
    case 1:
      return PyvtkClipClosedSurface_SetActivePlaneColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetActivePlaneColor");
  return nullptr;
}



static PyObject *
PyvtkClipClosedSurface_GetActivePlaneColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActivePlaneColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetActivePlaneColor() :
      op->vtkClipClosedSurface::GetActivePlaneColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetTriangulationErrorDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangulationErrorDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTriangulationErrorDisplay(temp0);
    }
    else
    {
      op->vtkClipClosedSurface::SetTriangulationErrorDisplay(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_TriangulationErrorDisplayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulationErrorDisplayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TriangulationErrorDisplayOn();
    }
    else
    {
      op->vtkClipClosedSurface::TriangulationErrorDisplayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_TriangulationErrorDisplayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulationErrorDisplayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TriangulationErrorDisplayOff();
    }
    else
    {
      op->vtkClipClosedSurface::TriangulationErrorDisplayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetTriangulationErrorDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriangulationErrorDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTriangulationErrorDisplay() :
      op->vtkClipClosedSurface::GetTriangulationErrorDisplay());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkClipClosedSurface_Methods[] = {
  {"IsTypeOf", PyvtkClipClosedSurface_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkClipClosedSurface_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkClipClosedSurface_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkClipClosedSurface\nC++: static vtkClipClosedSurface *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkClipClosedSurface_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkClipClosedSurface\nC++: vtkClipClosedSurface *NewInstance()\n\n"},
  {"SetClippingPlanes", PyvtkClipClosedSurface_SetClippingPlanes, METH_VARARGS,
   "V.SetClippingPlanes(vtkPlaneCollection)\nC++: virtual void SetClippingPlanes(vtkPlaneCollection *planes)\n\nSet the vtkPlaneCollection that holds the clipping planes.\n"},
  {"GetClippingPlanes", PyvtkClipClosedSurface_GetClippingPlanes, METH_VARARGS,
   "V.GetClippingPlanes() -> vtkPlaneCollection\nC++: virtual vtkPlaneCollection *GetClippingPlanes()\n\nSet the vtkPlaneCollection that holds the clipping planes.\n"},
  {"SetTolerance", PyvtkClipClosedSurface_SetTolerance, METH_VARARGS,
   "V.SetTolerance(float)\nC++: virtual void SetTolerance(double _arg)\n\nSet the tolerance for creating new points while clipping.  If the\ntolerance is too small, then degenerate triangles might be\nproduced. The default tolerance is 1e-6.\n"},
  {"GetTolerance", PyvtkClipClosedSurface_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> float\nC++: virtual double GetTolerance()\n\nSet the tolerance for creating new points while clipping.  If the\ntolerance is too small, then degenerate triangles might be\nproduced. The default tolerance is 1e-6.\n"},
  {"SetPassPointData", PyvtkClipClosedSurface_SetPassPointData, METH_VARARGS,
   "V.SetPassPointData(int)\nC++: virtual void SetPassPointData(vtkTypeBool _arg)\n\nPass the point data to the output.  Point data will be\ninterpolated when new points are generated.  This is off by\ndefault.\n"},
  {"PassPointDataOn", PyvtkClipClosedSurface_PassPointDataOn, METH_VARARGS,
   "V.PassPointDataOn()\nC++: virtual void PassPointDataOn()\n\nPass the point data to the output.  Point data will be\ninterpolated when new points are generated.  This is off by\ndefault.\n"},
  {"PassPointDataOff", PyvtkClipClosedSurface_PassPointDataOff, METH_VARARGS,
   "V.PassPointDataOff()\nC++: virtual void PassPointDataOff()\n\nPass the point data to the output.  Point data will be\ninterpolated when new points are generated.  This is off by\ndefault.\n"},
  {"GetPassPointData", PyvtkClipClosedSurface_GetPassPointData, METH_VARARGS,
   "V.GetPassPointData() -> int\nC++: virtual vtkTypeBool GetPassPointData()\n\nPass the point data to the output.  Point data will be\ninterpolated when new points are generated.  This is off by\ndefault.\n"},
  {"SetGenerateOutline", PyvtkClipClosedSurface_SetGenerateOutline, METH_VARARGS,
   "V.SetGenerateOutline(int)\nC++: virtual void SetGenerateOutline(vtkTypeBool _arg)\n\nSet whether to generate an outline wherever an input face was cut\nby a plane.  This is off by default.\n"},
  {"GenerateOutlineOn", PyvtkClipClosedSurface_GenerateOutlineOn, METH_VARARGS,
   "V.GenerateOutlineOn()\nC++: virtual void GenerateOutlineOn()\n\nSet whether to generate an outline wherever an input face was cut\nby a plane.  This is off by default.\n"},
  {"GenerateOutlineOff", PyvtkClipClosedSurface_GenerateOutlineOff, METH_VARARGS,
   "V.GenerateOutlineOff()\nC++: virtual void GenerateOutlineOff()\n\nSet whether to generate an outline wherever an input face was cut\nby a plane.  This is off by default.\n"},
  {"GetGenerateOutline", PyvtkClipClosedSurface_GetGenerateOutline, METH_VARARGS,
   "V.GetGenerateOutline() -> int\nC++: virtual vtkTypeBool GetGenerateOutline()\n\nSet whether to generate an outline wherever an input face was cut\nby a plane.  This is off by default.\n"},
  {"SetGenerateFaces", PyvtkClipClosedSurface_SetGenerateFaces, METH_VARARGS,
   "V.SetGenerateFaces(int)\nC++: virtual void SetGenerateFaces(vtkTypeBool _arg)\n\nSet whether to generate polygonal faces for the output.  This is\non by default.  If it is off, then the output will have no polys.\n"},
  {"GenerateFacesOn", PyvtkClipClosedSurface_GenerateFacesOn, METH_VARARGS,
   "V.GenerateFacesOn()\nC++: virtual void GenerateFacesOn()\n\nSet whether to generate polygonal faces for the output.  This is\non by default.  If it is off, then the output will have no polys.\n"},
  {"GenerateFacesOff", PyvtkClipClosedSurface_GenerateFacesOff, METH_VARARGS,
   "V.GenerateFacesOff()\nC++: virtual void GenerateFacesOff()\n\nSet whether to generate polygonal faces for the output.  This is\non by default.  If it is off, then the output will have no polys.\n"},
  {"GetGenerateFaces", PyvtkClipClosedSurface_GetGenerateFaces, METH_VARARGS,
   "V.GetGenerateFaces() -> int\nC++: virtual vtkTypeBool GetGenerateFaces()\n\nSet whether to generate polygonal faces for the output.  This is\non by default.  If it is off, then the output will have no polys.\n"},
  {"SetScalarMode", PyvtkClipClosedSurface_SetScalarMode, METH_VARARGS,
   "V.SetScalarMode(int)\nC++: virtual void SetScalarMode(int _arg)\n\nSet whether to add cell scalars, so that new faces and outlines\ncan be distinguished from original faces and lines.  The options\nare \"None\", \"Colors\", and \"Labels\".  For the \"Labels\" option, a\nscalar value of \"0\" indicates an original cell, \"1\" indicates a\nnew cell on a cut face, and \"2\" indicates a new cell on the\nActivePlane as set by the SetActivePlane() method.  The default\nscalar mode is \"None\".\n"},
  {"GetScalarModeMinValue", PyvtkClipClosedSurface_GetScalarModeMinValue, METH_VARARGS,
   "V.GetScalarModeMinValue() -> int\nC++: virtual int GetScalarModeMinValue()\n\nSet whether to add cell scalars, so that new faces and outlines\ncan be distinguished from original faces and lines.  The options\nare \"None\", \"Colors\", and \"Labels\".  For the \"Labels\" option, a\nscalar value of \"0\" indicates an original cell, \"1\" indicates a\nnew cell on a cut face, and \"2\" indicates a new cell on the\nActivePlane as set by the SetActivePlane() method.  The default\nscalar mode is \"None\".\n"},
  {"GetScalarModeMaxValue", PyvtkClipClosedSurface_GetScalarModeMaxValue, METH_VARARGS,
   "V.GetScalarModeMaxValue() -> int\nC++: virtual int GetScalarModeMaxValue()\n\nSet whether to add cell scalars, so that new faces and outlines\ncan be distinguished from original faces and lines.  The options\nare \"None\", \"Colors\", and \"Labels\".  For the \"Labels\" option, a\nscalar value of \"0\" indicates an original cell, \"1\" indicates a\nnew cell on a cut face, and \"2\" indicates a new cell on the\nActivePlane as set by the SetActivePlane() method.  The default\nscalar mode is \"None\".\n"},
  {"SetScalarModeToNone", PyvtkClipClosedSurface_SetScalarModeToNone, METH_VARARGS,
   "V.SetScalarModeToNone()\nC++: void SetScalarModeToNone()\n\nSet whether to add cell scalars, so that new faces and outlines\ncan be distinguished from original faces and lines.  The options\nare \"None\", \"Colors\", and \"Labels\".  For the \"Labels\" option, a\nscalar value of \"0\" indicates an original cell, \"1\" indicates a\nnew cell on a cut face, and \"2\" indicates a new cell on the\nActivePlane as set by the SetActivePlane() method.  The default\nscalar mode is \"None\".\n"},
  {"SetScalarModeToColors", PyvtkClipClosedSurface_SetScalarModeToColors, METH_VARARGS,
   "V.SetScalarModeToColors()\nC++: void SetScalarModeToColors()\n\nSet whether to add cell scalars, so that new faces and outlines\ncan be distinguished from original faces and lines.  The options\nare \"None\", \"Colors\", and \"Labels\".  For the \"Labels\" option, a\nscalar value of \"0\" indicates an original cell, \"1\" indicates a\nnew cell on a cut face, and \"2\" indicates a new cell on the\nActivePlane as set by the SetActivePlane() method.  The default\nscalar mode is \"None\".\n"},
  {"SetScalarModeToLabels", PyvtkClipClosedSurface_SetScalarModeToLabels, METH_VARARGS,
   "V.SetScalarModeToLabels()\nC++: void SetScalarModeToLabels()\n\nSet whether to add cell scalars, so that new faces and outlines\ncan be distinguished from original faces and lines.  The options\nare \"None\", \"Colors\", and \"Labels\".  For the \"Labels\" option, a\nscalar value of \"0\" indicates an original cell, \"1\" indicates a\nnew cell on a cut face, and \"2\" indicates a new cell on the\nActivePlane as set by the SetActivePlane() method.  The default\nscalar mode is \"None\".\n"},
  {"GetScalarMode", PyvtkClipClosedSurface_GetScalarMode, METH_VARARGS,
   "V.GetScalarMode() -> int\nC++: virtual int GetScalarMode()\n\nSet whether to add cell scalars, so that new faces and outlines\ncan be distinguished from original faces and lines.  The options\nare \"None\", \"Colors\", and \"Labels\".  For the \"Labels\" option, a\nscalar value of \"0\" indicates an original cell, \"1\" indicates a\nnew cell on a cut face, and \"2\" indicates a new cell on the\nActivePlane as set by the SetActivePlane() method.  The default\nscalar mode is \"None\".\n"},
  {"GetScalarModeAsString", PyvtkClipClosedSurface_GetScalarModeAsString, METH_VARARGS,
   "V.GetScalarModeAsString() -> string\nC++: const char *GetScalarModeAsString()\n\nSet whether to add cell scalars, so that new faces and outlines\ncan be distinguished from original faces and lines.  The options\nare \"None\", \"Colors\", and \"Labels\".  For the \"Labels\" option, a\nscalar value of \"0\" indicates an original cell, \"1\" indicates a\nnew cell on a cut face, and \"2\" indicates a new cell on the\nActivePlane as set by the SetActivePlane() method.  The default\nscalar mode is \"None\".\n"},
  {"SetBaseColor", PyvtkClipClosedSurface_SetBaseColor, METH_VARARGS,
   "V.SetBaseColor(float, float, float)\nC++: void SetBaseColor(double, double, double)\nV.SetBaseColor((float, float, float))\nC++: void SetBaseColor(double a[3])\n\n"},
  {"GetBaseColor", PyvtkClipClosedSurface_GetBaseColor, METH_VARARGS,
   "V.GetBaseColor() -> (float, float, float)\nC++: double *GetBaseColor()\n\n"},
  {"SetClipColor", PyvtkClipClosedSurface_SetClipColor, METH_VARARGS,
   "V.SetClipColor(float, float, float)\nC++: void SetClipColor(double, double, double)\nV.SetClipColor((float, float, float))\nC++: void SetClipColor(double a[3])\n\n"},
  {"GetClipColor", PyvtkClipClosedSurface_GetClipColor, METH_VARARGS,
   "V.GetClipColor() -> (float, float, float)\nC++: double *GetClipColor()\n\n"},
  {"SetActivePlaneId", PyvtkClipClosedSurface_SetActivePlaneId, METH_VARARGS,
   "V.SetActivePlaneId(int)\nC++: virtual void SetActivePlaneId(int _arg)\n\nSet the active plane, so that the clipping from that plane can be\ndisplayed in a different color.  Set this to -1 if there is no\nactive plane.  The default value is -1.\n"},
  {"GetActivePlaneId", PyvtkClipClosedSurface_GetActivePlaneId, METH_VARARGS,
   "V.GetActivePlaneId() -> int\nC++: virtual int GetActivePlaneId()\n\nSet the active plane, so that the clipping from that plane can be\ndisplayed in a different color.  Set this to -1 if there is no\nactive plane.  The default value is -1.\n"},
  {"SetActivePlaneColor", PyvtkClipClosedSurface_SetActivePlaneColor, METH_VARARGS,
   "V.SetActivePlaneColor(float, float, float)\nC++: void SetActivePlaneColor(double, double, double)\nV.SetActivePlaneColor((float, float, float))\nC++: void SetActivePlaneColor(double a[3])\n\n"},
  {"GetActivePlaneColor", PyvtkClipClosedSurface_GetActivePlaneColor, METH_VARARGS,
   "V.GetActivePlaneColor() -> (float, float, float)\nC++: double *GetActivePlaneColor()\n\n"},
  {"SetTriangulationErrorDisplay", PyvtkClipClosedSurface_SetTriangulationErrorDisplay, METH_VARARGS,
   "V.SetTriangulationErrorDisplay(int)\nC++: virtual void SetTriangulationErrorDisplay(vtkTypeBool _arg)\n\nGenerate errors when the triangulation fails.  Usually the\ntriangulation errors are too small to see, but they result in a\nsurface that is not watertight.  This option has no impact on\nperformance.\n"},
  {"TriangulationErrorDisplayOn", PyvtkClipClosedSurface_TriangulationErrorDisplayOn, METH_VARARGS,
   "V.TriangulationErrorDisplayOn()\nC++: virtual void TriangulationErrorDisplayOn()\n\nGenerate errors when the triangulation fails.  Usually the\ntriangulation errors are too small to see, but they result in a\nsurface that is not watertight.  This option has no impact on\nperformance.\n"},
  {"TriangulationErrorDisplayOff", PyvtkClipClosedSurface_TriangulationErrorDisplayOff, METH_VARARGS,
   "V.TriangulationErrorDisplayOff()\nC++: virtual void TriangulationErrorDisplayOff()\n\nGenerate errors when the triangulation fails.  Usually the\ntriangulation errors are too small to see, but they result in a\nsurface that is not watertight.  This option has no impact on\nperformance.\n"},
  {"GetTriangulationErrorDisplay", PyvtkClipClosedSurface_GetTriangulationErrorDisplay, METH_VARARGS,
   "V.GetTriangulationErrorDisplay() -> int\nC++: virtual vtkTypeBool GetTriangulationErrorDisplay()\n\nGenerate errors when the triangulation fails.  Usually the\ntriangulation errors are too small to see, but they result in a\nsurface that is not watertight.  This option has no impact on\nperformance.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkClipClosedSurface_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkClipClosedSurface", // tp_name
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
  PyvtkClipClosedSurface_Doc, // tp_doc
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

static vtkObjectBase *PyvtkClipClosedSurface_StaticNew()
{
  return vtkClipClosedSurface::New();
}

PyObject *PyvtkClipClosedSurface_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkClipClosedSurface_Type, PyvtkClipClosedSurface_Methods,
    "vtkClipClosedSurface",
 &PyvtkClipClosedSurface_StaticNew);

  PyTypeObject *pytype = &PyvtkClipClosedSurface_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkClipClosedSurface(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkClipClosedSurface_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkClipClosedSurface", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_CCS_SCALAR_MODE_NONE", VTK_CCS_SCALAR_MODE_NONE },
        { "VTK_CCS_SCALAR_MODE_COLORS", VTK_CCS_SCALAR_MODE_COLORS },
        { "VTK_CCS_SCALAR_MODE_LABELS", VTK_CCS_SCALAR_MODE_LABELS },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

