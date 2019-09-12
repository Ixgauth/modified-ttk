// python wrapper for vtkGlyph3DRepresentation
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
#include "vtkGlyph3DRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGlyph3DRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGlyph3DRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkGeometryRepresentation_ClassNew
extern "C" { PyObject *PyvtkGeometryRepresentation_ClassNew(); }
#define DECLARED_PyvtkGeometryRepresentation_ClassNew
#endif

static const char *PyvtkGlyph3DRepresentation_Doc =
  "vtkGlyph3DRepresentation - vtkGlyph3DRepresentation is a\nrepresentation that uses the vtkGlyph3DMapper for rendering glyphs.\n\n"
  "Superclass: vtkGeometryRepresentation\n\n"
  "Note that vtkGlyph3DRepresentation requires that the \"glyph\" source\n"
  "data is available on all rendering processes.\n\n";


static PyObject *
PyvtkGlyph3DRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGlyph3DRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGlyph3DRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGlyph3DRepresentation *tempr = vtkGlyph3DRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGlyph3DRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGlyph3DRepresentation::NewInstance());

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
PyvtkGlyph3DRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  vtkInformationRequestKey *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->ProcessViewRequest(temp0, temp1, temp2) :
      op->vtkGlyph3DRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkModified();
    }
    else
    {
      op->vtkGlyph3DRepresentation::MarkModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetMeshVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeshVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMeshVisibility(temp0);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetMeshVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

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
      op->vtkGlyph3DRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetMaskArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskArray(temp0);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetMaskArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetScaleArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleArray(temp0);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetScaleArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetOrientationArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationArray(temp0);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetOrientationArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetSourceIndexArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceIndexArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSourceIndexArray(temp0);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetSourceIndexArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaling(temp0);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetScaling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleMode(temp0);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetScaleMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleFactor(temp0);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetOrient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrient(temp0);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetOrient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetOrientationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationMode(temp0);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetOrientationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetMasking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMasking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMasking(temp0);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetMasking(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetSourceIndexing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceIndexing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSourceIndexing(temp0);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetSourceIndexing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetUseSourceTableTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseSourceTableTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseSourceTableTree(temp0);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetUseSourceTableTree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetUseCullingAndLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCullingAndLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseCullingAndLOD(temp0);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetUseCullingAndLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetNumberOfLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLOD(temp0);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetNumberOfLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetLODDistanceAndTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODDistanceAndTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  int temp0;
  float temp1;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetLODDistanceAndTargetReduction(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetLODDistanceAndTargetReduction(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetColorByLODIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorByLODIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorByLODIndex(temp0);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetColorByLODIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetInterpolateScalarsBeforeMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolateScalarsBeforeMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolateScalarsBeforeMapping(temp0);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetInterpolateScalarsBeforeMapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

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
      op->vtkGlyph3DRepresentation::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetMapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMapScalars(temp0);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetMapScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetStatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStatic(temp0);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetStatic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

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
      op->SetOrientation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetOrientation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetPickable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickable(temp0);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetPickable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

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
      op->SetScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  vtkTexture *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTexture"))
  {
    if (ap.IsBound())
    {
      op->SetTexture(temp0);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetUserTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  const size_t size0 = 16;
  double temp0[16];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetUserTransform(temp0);
    }
    else
    {
      op->vtkGlyph3DRepresentation::SetUserTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGlyph3DRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkGlyph3DRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGlyph3DRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGlyph3DRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGlyph3DRepresentation\nC++: static vtkGlyph3DRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGlyph3DRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGlyph3DRepresentation\nC++: vtkGlyph3DRepresentation *NewInstance()\n\n"},
  {"ProcessViewRequest", PyvtkGlyph3DRepresentation_ProcessViewRequest, METH_VARARGS,
   "V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo) override;\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering.\n"},
  {"MarkModified", PyvtkGlyph3DRepresentation_MarkModified, METH_VARARGS,
   "V.MarkModified()\nC++: void MarkModified() override;\n\nThis needs to be called on all instances of\nvtkGeometryRepresentation when the input is modified. This is\nessential since the geometry filter does not have any real-input\non the client side which messes with the Update requests.\n"},
  {"SetMeshVisibility", PyvtkGlyph3DRepresentation_SetMeshVisibility, METH_VARARGS,
   "V.SetMeshVisibility(bool)\nC++: void SetMeshVisibility(bool visible)\n\nToggle the visibility of the original mesh. If\nthis->GetVisibility() is false, then this has no effect.\n"},
  {"SetVisibility", PyvtkGlyph3DRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool) override;\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored.\n"},
  {"SetMaskArray", PyvtkGlyph3DRepresentation_SetMaskArray, METH_VARARGS,
   "V.SetMaskArray(string)\nC++: void SetMaskArray(const char *val)\n\n"},
  {"SetScaleArray", PyvtkGlyph3DRepresentation_SetScaleArray, METH_VARARGS,
   "V.SetScaleArray(string)\nC++: void SetScaleArray(const char *val)\n\n"},
  {"SetOrientationArray", PyvtkGlyph3DRepresentation_SetOrientationArray, METH_VARARGS,
   "V.SetOrientationArray(string)\nC++: void SetOrientationArray(const char *val)\n\n"},
  {"SetSourceIndexArray", PyvtkGlyph3DRepresentation_SetSourceIndexArray, METH_VARARGS,
   "V.SetSourceIndexArray(string)\nC++: void SetSourceIndexArray(const char *val)\n\n"},
  {"SetScaling", PyvtkGlyph3DRepresentation_SetScaling, METH_VARARGS,
   "V.SetScaling(bool)\nC++: void SetScaling(bool val)\n\n"},
  {"SetScaleMode", PyvtkGlyph3DRepresentation_SetScaleMode, METH_VARARGS,
   "V.SetScaleMode(int)\nC++: void SetScaleMode(int val)\n\n"},
  {"SetScaleFactor", PyvtkGlyph3DRepresentation_SetScaleFactor, METH_VARARGS,
   "V.SetScaleFactor(float)\nC++: void SetScaleFactor(double val)\n\n"},
  {"SetOrient", PyvtkGlyph3DRepresentation_SetOrient, METH_VARARGS,
   "V.SetOrient(bool)\nC++: void SetOrient(bool val)\n\n"},
  {"SetOrientationMode", PyvtkGlyph3DRepresentation_SetOrientationMode, METH_VARARGS,
   "V.SetOrientationMode(int)\nC++: void SetOrientationMode(int val)\n\n"},
  {"SetMasking", PyvtkGlyph3DRepresentation_SetMasking, METH_VARARGS,
   "V.SetMasking(bool)\nC++: void SetMasking(bool val)\n\n"},
  {"SetSourceIndexing", PyvtkGlyph3DRepresentation_SetSourceIndexing, METH_VARARGS,
   "V.SetSourceIndexing(bool)\nC++: void SetSourceIndexing(bool val)\n\n"},
  {"SetUseSourceTableTree", PyvtkGlyph3DRepresentation_SetUseSourceTableTree, METH_VARARGS,
   "V.SetUseSourceTableTree(bool)\nC++: void SetUseSourceTableTree(bool val)\n\n"},
  {"SetUseCullingAndLOD", PyvtkGlyph3DRepresentation_SetUseCullingAndLOD, METH_VARARGS,
   "V.SetUseCullingAndLOD(bool)\nC++: void SetUseCullingAndLOD(bool val)\n\n"},
  {"SetNumberOfLOD", PyvtkGlyph3DRepresentation_SetNumberOfLOD, METH_VARARGS,
   "V.SetNumberOfLOD(int)\nC++: void SetNumberOfLOD(int val)\n\n"},
  {"SetLODDistanceAndTargetReduction", PyvtkGlyph3DRepresentation_SetLODDistanceAndTargetReduction, METH_VARARGS,
   "V.SetLODDistanceAndTargetReduction(int, float, float)\nC++: void SetLODDistanceAndTargetReduction(int index, float dist,\n    float reduc)\n\n"},
  {"SetColorByLODIndex", PyvtkGlyph3DRepresentation_SetColorByLODIndex, METH_VARARGS,
   "V.SetColorByLODIndex(bool)\nC++: void SetColorByLODIndex(bool val)\n\n"},
  {"SetInterpolateScalarsBeforeMapping", PyvtkGlyph3DRepresentation_SetInterpolateScalarsBeforeMapping, METH_VARARGS,
   "V.SetInterpolateScalarsBeforeMapping(int)\nC++: void SetInterpolateScalarsBeforeMapping(int val) override;\n\n"},
  {"SetLookupTable", PyvtkGlyph3DRepresentation_SetLookupTable, METH_VARARGS,
   "V.SetLookupTable(vtkScalarsToColors)\nC++: void SetLookupTable(vtkScalarsToColors *val) override;\n\n"},
  {"SetMapScalars", PyvtkGlyph3DRepresentation_SetMapScalars, METH_VARARGS,
   "V.SetMapScalars(int)\nC++: void SetMapScalars(int val) override;\n\nSets if scalars are mapped through a color-map or are used\ndirectly as colors. 0 maps to VTK_COLOR_MODE_DIRECT_SCALARS 1\nmaps to VTK_COLOR_MODE_MAP_SCALARS@see\nvtkScalarsToColors::MapScalars\n"},
  {"SetStatic", PyvtkGlyph3DRepresentation_SetStatic, METH_VARARGS,
   "V.SetStatic(int)\nC++: void SetStatic(int val) override;\n\nSets if scalars are mapped through a color-map or are used\ndirectly as colors. 0 maps to VTK_COLOR_MODE_DIRECT_SCALARS 1\nmaps to VTK_COLOR_MODE_MAP_SCALARS@see\nvtkScalarsToColors::MapScalars\n"},
  {"SetOrientation", PyvtkGlyph3DRepresentation_SetOrientation, METH_VARARGS,
   "V.SetOrientation(float, float, float)\nC++: void SetOrientation(double, double, double) override;\n\n"},
  {"SetOrigin", PyvtkGlyph3DRepresentation_SetOrigin, METH_VARARGS,
   "V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double) override;\n\n"},
  {"SetPickable", PyvtkGlyph3DRepresentation_SetPickable, METH_VARARGS,
   "V.SetPickable(int)\nC++: void SetPickable(int val) override;\n\n"},
  {"SetPosition", PyvtkGlyph3DRepresentation_SetPosition, METH_VARARGS,
   "V.SetPosition(float, float, float)\nC++: void SetPosition(double, double, double) override;\n\n"},
  {"SetScale", PyvtkGlyph3DRepresentation_SetScale, METH_VARARGS,
   "V.SetScale(float, float, float)\nC++: void SetScale(double, double, double) override;\n\n"},
  {"SetTexture", PyvtkGlyph3DRepresentation_SetTexture, METH_VARARGS,
   "V.SetTexture(vtkTexture)\nC++: void SetTexture(vtkTexture *) override;\n\n"},
  {"SetUserTransform", PyvtkGlyph3DRepresentation_SetUserTransform, METH_VARARGS,
   "V.SetUserTransform((float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float))\nC++: void SetUserTransform(const double[16]) override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGlyph3DRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkGlyph3DRepresentation", // tp_name
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
  PyvtkGlyph3DRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGlyph3DRepresentation_StaticNew()
{
  return vtkGlyph3DRepresentation::New();
}

PyObject *PyvtkGlyph3DRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGlyph3DRepresentation_Type, PyvtkGlyph3DRepresentation_Methods,
    "vtkGlyph3DRepresentation",
 &PyvtkGlyph3DRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkGlyph3DRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGeometryRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGlyph3DRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGlyph3DRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGlyph3DRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

