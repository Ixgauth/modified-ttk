// python wrapper for vtkGraphMapper
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
#include "vtkGraphMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGraphMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGraphMapper_ClassNew(); }

#ifndef DECLARED_PyvtkMapper_ClassNew
extern "C" { PyObject *PyvtkMapper_ClassNew(); }
#define DECLARED_PyvtkMapper_ClassNew
#endif

static const char *PyvtkGraphMapper_Doc =
  "vtkGraphMapper - map vtkGraph and derived classes to graphics\nprimitives\n\n"
  "Superclass: vtkMapper\n\n"
  "vtkGraphMapper is a mapper to map vtkGraph (and all derived classes)\n"
  "to graphics primitives.\n\n";


static PyObject *
PyvtkGraphMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGraphMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGraphMapper *tempr = vtkGraphMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraphMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphMapper::NewInstance());

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
PyvtkGraphMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkGraphMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetVertexColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexColorArrayName(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetVertexColorArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetVertexColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVertexColorArrayName() :
      op->vtkGraphMapper::GetVertexColorArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetColorVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorVertices(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetColorVertices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetColorVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorVertices() :
      op->vtkGraphMapper::GetColorVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_ColorVerticesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorVerticesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorVerticesOn();
    }
    else
    {
      op->vtkGraphMapper::ColorVerticesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_ColorVerticesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorVerticesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorVerticesOff();
    }
    else
    {
      op->vtkGraphMapper::ColorVerticesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetScaledGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaledGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaledGlyphs(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetScaledGlyphs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetScaledGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaledGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScaledGlyphs() :
      op->vtkGraphMapper::GetScaledGlyphs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_ScaledGlyphsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaledGlyphsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaledGlyphsOn();
    }
    else
    {
      op->vtkGraphMapper::ScaledGlyphsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_ScaledGlyphsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaledGlyphsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaledGlyphsOff();
    }
    else
    {
      op->vtkGraphMapper::ScaledGlyphsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetScalingArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalingArrayName(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetScalingArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetScalingArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalingArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetScalingArrayName() :
      op->vtkGraphMapper::GetScalingArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetEdgeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeVisibility(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetEdgeVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetEdgeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEdgeVisibility() :
      op->vtkGraphMapper::GetEdgeVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_EdgeVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeVisibilityOn();
    }
    else
    {
      op->vtkGraphMapper::EdgeVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_EdgeVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeVisibilityOff();
    }
    else
    {
      op->vtkGraphMapper::EdgeVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetEdgeColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeColorArrayName(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetEdgeColorArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetEdgeColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeColorArrayName() :
      op->vtkGraphMapper::GetEdgeColorArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetColorEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorEdges(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetColorEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetColorEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorEdges() :
      op->vtkGraphMapper::GetColorEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_ColorEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorEdgesOn();
    }
    else
    {
      op->vtkGraphMapper::ColorEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_ColorEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorEdgesOff();
    }
    else
    {
      op->vtkGraphMapper::ColorEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetEnabledEdgesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabledEdgesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabledEdgesArrayName(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetEnabledEdgesArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetEnabledEdgesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabledEdgesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetEnabledEdgesArrayName() :
      op->vtkGraphMapper::GetEnabledEdgesArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetEnableEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableEdgesByArray(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetEnableEdgesByArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetEnableEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableEdgesByArray() :
      op->vtkGraphMapper::GetEnableEdgesByArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_EnableEdgesByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableEdgesByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableEdgesByArrayOn();
    }
    else
    {
      op->vtkGraphMapper::EnableEdgesByArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_EnableEdgesByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableEdgesByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableEdgesByArrayOff();
    }
    else
    {
      op->vtkGraphMapper::EnableEdgesByArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetEnabledVerticesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabledVerticesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabledVerticesArrayName(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetEnabledVerticesArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetEnabledVerticesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabledVerticesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetEnabledVerticesArrayName() :
      op->vtkGraphMapper::GetEnabledVerticesArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetEnableVerticesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableVerticesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableVerticesByArray(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetEnableVerticesByArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetEnableVerticesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableVerticesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableVerticesByArray() :
      op->vtkGraphMapper::GetEnableVerticesByArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_EnableVerticesByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableVerticesByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableVerticesByArrayOn();
    }
    else
    {
      op->vtkGraphMapper::EnableVerticesByArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_EnableVerticesByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableVerticesByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableVerticesByArrayOff();
    }
    else
    {
      op->vtkGraphMapper::EnableVerticesByArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetIconArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIconArrayName(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetIconArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetIconArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetIconArrayName() :
      op->vtkGraphMapper::GetIconArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_AddIconType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIconType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddIconType(temp0, temp1);
    }
    else
    {
      op->vtkGraphMapper::AddIconType(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_ClearIconTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearIconTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearIconTypes();
    }
    else
    {
      op->vtkGraphMapper::ClearIconTypes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetIconSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetIconSize(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetIconSize(temp0);
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
PyvtkGraphMapper_GetIconSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetIconSize() :
      op->vtkGraphMapper::GetIconSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetIconAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIconAlignment(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetIconAlignment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetIconTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTexture *tempr = (ap.IsBound() ?
      op->GetIconTexture() :
      op->vtkGraphMapper::GetIconTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetIconTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  vtkTexture *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTexture"))
  {
    if (ap.IsBound())
    {
      op->SetIconTexture(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetIconTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetIconVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIconVisibility(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetIconVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetIconVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIconVisibility() :
      op->vtkGraphMapper::GetIconVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_IconVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IconVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IconVisibilityOn();
    }
    else
    {
      op->vtkGraphMapper::IconVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_IconVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IconVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IconVisibilityOff();
    }
    else
    {
      op->vtkGraphMapper::IconVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetVertexPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetVertexPointSize() :
      op->vtkGraphMapper::GetVertexPointSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetVertexPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexPointSize(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetVertexPointSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetEdgeLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetEdgeLineWidth() :
      op->vtkGraphMapper::GetEdgeLineWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetEdgeLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeLineWidth(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetEdgeLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

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
      op->vtkGraphMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGraphMapper::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  vtkGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkGraphMapper::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkGraphMapper::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkGraphMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

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
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkGraphMapper::GetBounds(temp0);
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
PyvtkGraphMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkGraphMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkGraphMapper_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkGraphMapper_GetEdgeLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->GetEdgeLookupTable() :
      op->vtkGraphMapper::GetEdgeLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetVertexLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->GetVertexLookupTable() :
      op->vtkGraphMapper::GetVertexLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGraphMapper_Methods[] = {
  {"IsTypeOf", PyvtkGraphMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGraphMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGraphMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGraphMapper\nC++: static vtkGraphMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGraphMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGraphMapper\nC++: vtkGraphMapper *NewInstance()\n\n"},
  {"Render", PyvtkGraphMapper_Render, METH_VARARGS,
   "V.Render(vtkRenderer, vtkActor)\nC++: void Render(vtkRenderer *ren, vtkActor *act) override;\n\nMethod initiates the mapping process. Generally sent by the actor\nas each frame is rendered.\n"},
  {"SetVertexColorArrayName", PyvtkGraphMapper_SetVertexColorArrayName, METH_VARARGS,
   "V.SetVertexColorArrayName(string)\nC++: void SetVertexColorArrayName(const char *name)\n\nThe array to use for coloring vertices.  Default is \"color\".\n"},
  {"GetVertexColorArrayName", PyvtkGraphMapper_GetVertexColorArrayName, METH_VARARGS,
   "V.GetVertexColorArrayName() -> string\nC++: const char *GetVertexColorArrayName()\n\nThe array to use for coloring vertices.  Default is \"color\".\n"},
  {"SetColorVertices", PyvtkGraphMapper_SetColorVertices, METH_VARARGS,
   "V.SetColorVertices(bool)\nC++: void SetColorVertices(bool vis)\n\nWhether to color vertices.  Default is off.\n"},
  {"GetColorVertices", PyvtkGraphMapper_GetColorVertices, METH_VARARGS,
   "V.GetColorVertices() -> bool\nC++: bool GetColorVertices()\n\nWhether to color vertices.  Default is off.\n"},
  {"ColorVerticesOn", PyvtkGraphMapper_ColorVerticesOn, METH_VARARGS,
   "V.ColorVerticesOn()\nC++: void ColorVerticesOn()\n\nWhether to color vertices.  Default is off.\n"},
  {"ColorVerticesOff", PyvtkGraphMapper_ColorVerticesOff, METH_VARARGS,
   "V.ColorVerticesOff()\nC++: void ColorVerticesOff()\n\nWhether to color vertices.  Default is off.\n"},
  {"SetScaledGlyphs", PyvtkGraphMapper_SetScaledGlyphs, METH_VARARGS,
   "V.SetScaledGlyphs(bool)\nC++: void SetScaledGlyphs(bool arg)\n\nWhether scaled glyphs are on or not.  Default is off. By default\nthis mapper uses vertex glyphs that do not scale. If you turn\nthis option on you will get circles at each vertex and they will\nscale as you zoom in/out.\n"},
  {"GetScaledGlyphs", PyvtkGraphMapper_GetScaledGlyphs, METH_VARARGS,
   "V.GetScaledGlyphs() -> bool\nC++: virtual bool GetScaledGlyphs()\n\nWhether scaled glyphs are on or not.  Default is off. By default\nthis mapper uses vertex glyphs that do not scale. If you turn\nthis option on you will get circles at each vertex and they will\nscale as you zoom in/out.\n"},
  {"ScaledGlyphsOn", PyvtkGraphMapper_ScaledGlyphsOn, METH_VARARGS,
   "V.ScaledGlyphsOn()\nC++: virtual void ScaledGlyphsOn()\n\nWhether scaled glyphs are on or not.  Default is off. By default\nthis mapper uses vertex glyphs that do not scale. If you turn\nthis option on you will get circles at each vertex and they will\nscale as you zoom in/out.\n"},
  {"ScaledGlyphsOff", PyvtkGraphMapper_ScaledGlyphsOff, METH_VARARGS,
   "V.ScaledGlyphsOff()\nC++: virtual void ScaledGlyphsOff()\n\nWhether scaled glyphs are on or not.  Default is off. By default\nthis mapper uses vertex glyphs that do not scale. If you turn\nthis option on you will get circles at each vertex and they will\nscale as you zoom in/out.\n"},
  {"SetScalingArrayName", PyvtkGraphMapper_SetScalingArrayName, METH_VARARGS,
   "V.SetScalingArrayName(string)\nC++: virtual void SetScalingArrayName(const char *_arg)\n\nGlyph scaling array name. Default is \"scale\"\n"},
  {"GetScalingArrayName", PyvtkGraphMapper_GetScalingArrayName, METH_VARARGS,
   "V.GetScalingArrayName() -> string\nC++: virtual char *GetScalingArrayName()\n\nGlyph scaling array name. Default is \"scale\"\n"},
  {"SetEdgeVisibility", PyvtkGraphMapper_SetEdgeVisibility, METH_VARARGS,
   "V.SetEdgeVisibility(bool)\nC++: void SetEdgeVisibility(bool vis)\n\nWhether to show edges or not.  Default is on.\n"},
  {"GetEdgeVisibility", PyvtkGraphMapper_GetEdgeVisibility, METH_VARARGS,
   "V.GetEdgeVisibility() -> bool\nC++: bool GetEdgeVisibility()\n\nWhether to show edges or not.  Default is on.\n"},
  {"EdgeVisibilityOn", PyvtkGraphMapper_EdgeVisibilityOn, METH_VARARGS,
   "V.EdgeVisibilityOn()\nC++: virtual void EdgeVisibilityOn()\n\nWhether to show edges or not.  Default is on.\n"},
  {"EdgeVisibilityOff", PyvtkGraphMapper_EdgeVisibilityOff, METH_VARARGS,
   "V.EdgeVisibilityOff()\nC++: virtual void EdgeVisibilityOff()\n\nWhether to show edges or not.  Default is on.\n"},
  {"SetEdgeColorArrayName", PyvtkGraphMapper_SetEdgeColorArrayName, METH_VARARGS,
   "V.SetEdgeColorArrayName(string)\nC++: void SetEdgeColorArrayName(const char *name)\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {"GetEdgeColorArrayName", PyvtkGraphMapper_GetEdgeColorArrayName, METH_VARARGS,
   "V.GetEdgeColorArrayName() -> string\nC++: const char *GetEdgeColorArrayName()\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {"SetColorEdges", PyvtkGraphMapper_SetColorEdges, METH_VARARGS,
   "V.SetColorEdges(bool)\nC++: void SetColorEdges(bool vis)\n\nWhether to color edges.  Default is off.\n"},
  {"GetColorEdges", PyvtkGraphMapper_GetColorEdges, METH_VARARGS,
   "V.GetColorEdges() -> bool\nC++: bool GetColorEdges()\n\nWhether to color edges.  Default is off.\n"},
  {"ColorEdgesOn", PyvtkGraphMapper_ColorEdgesOn, METH_VARARGS,
   "V.ColorEdgesOn()\nC++: void ColorEdgesOn()\n\nWhether to color edges.  Default is off.\n"},
  {"ColorEdgesOff", PyvtkGraphMapper_ColorEdgesOff, METH_VARARGS,
   "V.ColorEdgesOff()\nC++: void ColorEdgesOff()\n\nWhether to color edges.  Default is off.\n"},
  {"SetEnabledEdgesArrayName", PyvtkGraphMapper_SetEnabledEdgesArrayName, METH_VARARGS,
   "V.SetEnabledEdgesArrayName(string)\nC++: virtual void SetEnabledEdgesArrayName(const char *_arg)\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {"GetEnabledEdgesArrayName", PyvtkGraphMapper_GetEnabledEdgesArrayName, METH_VARARGS,
   "V.GetEnabledEdgesArrayName() -> string\nC++: virtual char *GetEnabledEdgesArrayName()\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {"SetEnableEdgesByArray", PyvtkGraphMapper_SetEnableEdgesByArray, METH_VARARGS,
   "V.SetEnableEdgesByArray(int)\nC++: virtual void SetEnableEdgesByArray(vtkTypeBool _arg)\n\nWhether to enable/disable edges using array values.  Default is\noff.\n"},
  {"GetEnableEdgesByArray", PyvtkGraphMapper_GetEnableEdgesByArray, METH_VARARGS,
   "V.GetEnableEdgesByArray() -> int\nC++: virtual vtkTypeBool GetEnableEdgesByArray()\n\nWhether to enable/disable edges using array values.  Default is\noff.\n"},
  {"EnableEdgesByArrayOn", PyvtkGraphMapper_EnableEdgesByArrayOn, METH_VARARGS,
   "V.EnableEdgesByArrayOn()\nC++: virtual void EnableEdgesByArrayOn()\n\nWhether to enable/disable edges using array values.  Default is\noff.\n"},
  {"EnableEdgesByArrayOff", PyvtkGraphMapper_EnableEdgesByArrayOff, METH_VARARGS,
   "V.EnableEdgesByArrayOff()\nC++: virtual void EnableEdgesByArrayOff()\n\nWhether to enable/disable edges using array values.  Default is\noff.\n"},
  {"SetEnabledVerticesArrayName", PyvtkGraphMapper_SetEnabledVerticesArrayName, METH_VARARGS,
   "V.SetEnabledVerticesArrayName(string)\nC++: virtual void SetEnabledVerticesArrayName(const char *_arg)\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {"GetEnabledVerticesArrayName", PyvtkGraphMapper_GetEnabledVerticesArrayName, METH_VARARGS,
   "V.GetEnabledVerticesArrayName() -> string\nC++: virtual char *GetEnabledVerticesArrayName()\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {"SetEnableVerticesByArray", PyvtkGraphMapper_SetEnableVerticesByArray, METH_VARARGS,
   "V.SetEnableVerticesByArray(int)\nC++: virtual void SetEnableVerticesByArray(vtkTypeBool _arg)\n\nWhether to enable/disable vertices using array values.  Default\nis off.\n"},
  {"GetEnableVerticesByArray", PyvtkGraphMapper_GetEnableVerticesByArray, METH_VARARGS,
   "V.GetEnableVerticesByArray() -> int\nC++: virtual vtkTypeBool GetEnableVerticesByArray()\n\nWhether to enable/disable vertices using array values.  Default\nis off.\n"},
  {"EnableVerticesByArrayOn", PyvtkGraphMapper_EnableVerticesByArrayOn, METH_VARARGS,
   "V.EnableVerticesByArrayOn()\nC++: virtual void EnableVerticesByArrayOn()\n\nWhether to enable/disable vertices using array values.  Default\nis off.\n"},
  {"EnableVerticesByArrayOff", PyvtkGraphMapper_EnableVerticesByArrayOff, METH_VARARGS,
   "V.EnableVerticesByArrayOff()\nC++: virtual void EnableVerticesByArrayOff()\n\nWhether to enable/disable vertices using array values.  Default\nis off.\n"},
  {"SetIconArrayName", PyvtkGraphMapper_SetIconArrayName, METH_VARARGS,
   "V.SetIconArrayName(string)\nC++: void SetIconArrayName(const char *name)\n\nThe array to use for assigning icons.\n"},
  {"GetIconArrayName", PyvtkGraphMapper_GetIconArrayName, METH_VARARGS,
   "V.GetIconArrayName() -> string\nC++: const char *GetIconArrayName()\n\nThe array to use for assigning icons.\n"},
  {"AddIconType", PyvtkGraphMapper_AddIconType, METH_VARARGS,
   "V.AddIconType(string, int)\nC++: void AddIconType(const char *type, int index)\n\nAssociate the icon at index \"index\" in the vtkTexture to all\nvertices containing \"type\" as a value in the vertex attribute\narray specified by IconArrayName.\n"},
  {"ClearIconTypes", PyvtkGraphMapper_ClearIconTypes, METH_VARARGS,
   "V.ClearIconTypes()\nC++: void ClearIconTypes()\n\nClear all icon mappings.\n"},
  {"SetIconSize", PyvtkGraphMapper_SetIconSize, METH_VARARGS,
   "V.SetIconSize([int, ...])\nC++: void SetIconSize(int *size)\n\nSpecify the Width and Height, in pixels, of an icon in the icon\nsheet.\n"},
  {"GetIconSize", PyvtkGraphMapper_GetIconSize, METH_VARARGS,
   "V.GetIconSize() -> (int, ...)\nC++: int *GetIconSize()\n\nSpecify the Width and Height, in pixels, of an icon in the icon\nsheet.\n"},
  {"SetIconAlignment", PyvtkGraphMapper_SetIconAlignment, METH_VARARGS,
   "V.SetIconAlignment(int)\nC++: void SetIconAlignment(int alignment)\n\nSpecify where the icons should be placed in relation to the\nvertex. See vtkIconGlyphFilter.h for possible values.\n"},
  {"GetIconTexture", PyvtkGraphMapper_GetIconTexture, METH_VARARGS,
   "V.GetIconTexture() -> vtkTexture\nC++: vtkTexture *GetIconTexture()\n\nThe texture containing the icon sheet.\n"},
  {"SetIconTexture", PyvtkGraphMapper_SetIconTexture, METH_VARARGS,
   "V.SetIconTexture(vtkTexture)\nC++: void SetIconTexture(vtkTexture *texture)\n\nThe texture containing the icon sheet.\n"},
  {"SetIconVisibility", PyvtkGraphMapper_SetIconVisibility, METH_VARARGS,
   "V.SetIconVisibility(bool)\nC++: void SetIconVisibility(bool vis)\n\nWhether to show icons.  Default is off.\n"},
  {"GetIconVisibility", PyvtkGraphMapper_GetIconVisibility, METH_VARARGS,
   "V.GetIconVisibility() -> bool\nC++: bool GetIconVisibility()\n\nWhether to show icons.  Default is off.\n"},
  {"IconVisibilityOn", PyvtkGraphMapper_IconVisibilityOn, METH_VARARGS,
   "V.IconVisibilityOn()\nC++: virtual void IconVisibilityOn()\n\nWhether to show icons.  Default is off.\n"},
  {"IconVisibilityOff", PyvtkGraphMapper_IconVisibilityOff, METH_VARARGS,
   "V.IconVisibilityOff()\nC++: virtual void IconVisibilityOff()\n\nWhether to show icons.  Default is off.\n"},
  {"GetVertexPointSize", PyvtkGraphMapper_GetVertexPointSize, METH_VARARGS,
   "V.GetVertexPointSize() -> float\nC++: virtual float GetVertexPointSize()\n\nGet/Set the vertex point size\n"},
  {"SetVertexPointSize", PyvtkGraphMapper_SetVertexPointSize, METH_VARARGS,
   "V.SetVertexPointSize(float)\nC++: void SetVertexPointSize(float size)\n\nGet/Set the vertex point size\n"},
  {"GetEdgeLineWidth", PyvtkGraphMapper_GetEdgeLineWidth, METH_VARARGS,
   "V.GetEdgeLineWidth() -> float\nC++: virtual float GetEdgeLineWidth()\n\nGet/Set the edge line width\n"},
  {"SetEdgeLineWidth", PyvtkGraphMapper_SetEdgeLineWidth, METH_VARARGS,
   "V.SetEdgeLineWidth(float)\nC++: void SetEdgeLineWidth(float width)\n\nGet/Set the edge line width\n"},
  {"ReleaseGraphicsResources", PyvtkGraphMapper_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetMTime", PyvtkGraphMapper_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the mtime also considering the lookup table.\n"},
  {"SetInputData", PyvtkGraphMapper_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkGraph)\nC++: void SetInputData(vtkGraph *input)\n\nSet the Input of this mapper.\n"},
  {"GetInput", PyvtkGraphMapper_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkGraph\nC++: vtkGraph *GetInput()\n\nSet the Input of this mapper.\n"},
  {"GetBounds", PyvtkGraphMapper_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double *bounds) override;\n\nReturn bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {"GetEdgeLookupTable", PyvtkGraphMapper_GetEdgeLookupTable, METH_VARARGS,
   "V.GetEdgeLookupTable() -> vtkLookupTable\nC++: virtual vtkLookupTable *GetEdgeLookupTable()\n\nAccess to the lookup tables used by the vertex and edge mappers.\n"},
  {"GetVertexLookupTable", PyvtkGraphMapper_GetVertexLookupTable, METH_VARARGS,
   "V.GetVertexLookupTable() -> vtkLookupTable\nC++: virtual vtkLookupTable *GetVertexLookupTable()\n\nAccess to the lookup tables used by the vertex and edge mappers.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGraphMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkGraphMapper", // tp_name
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
  PyvtkGraphMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGraphMapper_StaticNew()
{
  return vtkGraphMapper::New();
}

PyObject *PyvtkGraphMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGraphMapper_Type, PyvtkGraphMapper_Methods,
    "vtkGraphMapper",
 &PyvtkGraphMapper_StaticNew);

  PyTypeObject *pytype = &PyvtkGraphMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMapper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGraphMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGraphMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGraphMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

