// python wrapper for vtkMapper
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
#include "vtkMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMapper_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractMapper3D_ClassNew
extern "C" { PyObject *PyvtkAbstractMapper3D_ClassNew(); }
#define DECLARED_PyvtkAbstractMapper3D_ClassNew
#endif

static const char *PyvtkMapper_Doc =
  "vtkMapper - abstract class specifies interface to map data to\ngraphics primitives\n\n"
  "Superclass: vtkAbstractMapper3D\n\n"
  "vtkMapper is an abstract class to specify interface between data and\n"
  "graphics primitives. Subclasses of vtkMapper map data through a\n"
  "lookuptable and control the creation of rendering primitives that\n"
  "interface to the graphics library. The mapping can be controlled by\n"
  "supplying a lookup table and specifying a scalar range to map data\n"
  "through.\n\n"
  "There are several important control mechanisms affecting the behavior\n"
  "of this object. The ScalarVisibility flag controls whether scalar\n"
  "data (if any) controls the color of the associated actor(s) that\n"
  "refer to the mapper. The ScalarMode ivar is used to determine whether\n"
  "scalar point data or cell data is used to color the object. By\n"
  "default, point data scalars are used unless there are none, in which\n"
  "cell scalars are used. Or you can explicitly control whether to use\n"
  "point or cell scalar data. Finally, the mapping of scalars through\n"
  "the lookup table varies depending on the setting of the ColorMode\n"
  "flag. See the documentation for the appropriate methods for an\n"
  "explanation.\n\n"
  "Another important feature of the mapper is the ability to shift the\n"
  "z-buffer to resolve coincident topology. For example, if you'd like\n"
  "to draw a mesh with some edges a different color, and the edges lie\n"
  "on the mesh, this feature can be useful to get nice looking lines.\n"
  "(See the ResolveCoincidentTopology-related methods.)\n\n"
  "@sa\n"
  "vtkDataSetMapper vtkPolyDataMapper\n\n";


static PyObject *
PyvtkMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMapper *tempr = vtkMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMapper::NewInstance());

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
PyvtkMapper_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  vtkAbstractMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractMapper"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkMapper::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkMapper::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    op->Render(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

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
      op->vtkMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

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
      op->vtkMapper::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkMapper::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_CreateDefaultLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLookupTable();
    }
    else
    {
      op->vtkMapper::CreateDefaultLookupTable();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

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
      op->vtkMapper::SetScalarVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarVisibility() :
      op->vtkMapper::GetScalarVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_ScalarVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarVisibilityOn();
    }
    else
    {
      op->vtkMapper::ScalarVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_ScalarVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarVisibilityOff();
    }
    else
    {
      op->vtkMapper::ScalarVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetStatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

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
      op->vtkMapper::SetStatic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetStatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStatic() :
      op->vtkMapper::GetStatic());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_StaticOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StaticOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StaticOn();
    }
    else
    {
      op->vtkMapper::StaticOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_StaticOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StaticOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StaticOff();
    }
    else
    {
      op->vtkMapper::StaticOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorMode(temp0);
    }
    else
    {
      op->vtkMapper::SetColorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorMode() :
      op->vtkMapper::GetColorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetColorModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToDefault();
    }
    else
    {
      op->vtkMapper::SetColorModeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetColorModeToMapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToMapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToMapScalars();
    }
    else
    {
      op->vtkMapper::SetColorModeToMapScalars();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetColorModeToDirectScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToDirectScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToDirectScalars();
    }
    else
    {
      op->vtkMapper::SetColorModeToDirectScalars();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetColorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetColorModeAsString() :
      op->vtkMapper::GetColorModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetInterpolateScalarsBeforeMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolateScalarsBeforeMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

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
      op->vtkMapper::SetInterpolateScalarsBeforeMapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetInterpolateScalarsBeforeMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolateScalarsBeforeMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolateScalarsBeforeMapping() :
      op->vtkMapper::GetInterpolateScalarsBeforeMapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_InterpolateScalarsBeforeMappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateScalarsBeforeMappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateScalarsBeforeMappingOn();
    }
    else
    {
      op->vtkMapper::InterpolateScalarsBeforeMappingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_InterpolateScalarsBeforeMappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateScalarsBeforeMappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateScalarsBeforeMappingOff();
    }
    else
    {
      op->vtkMapper::InterpolateScalarsBeforeMappingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetUseLookupTableScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseLookupTableScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseLookupTableScalarRange(temp0);
    }
    else
    {
      op->vtkMapper::SetUseLookupTableScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetUseLookupTableScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLookupTableScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseLookupTableScalarRange() :
      op->vtkMapper::GetUseLookupTableScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_UseLookupTableScalarRangeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLookupTableScalarRangeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLookupTableScalarRangeOn();
    }
    else
    {
      op->vtkMapper::UseLookupTableScalarRangeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_UseLookupTableScalarRangeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLookupTableScalarRangeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLookupTableScalarRangeOff();
    }
    else
    {
      op->vtkMapper::UseLookupTableScalarRangeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0, temp1);
    }
    else
    {
      op->vtkMapper::SetScalarRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMapper_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0);
    }
    else
    {
      op->vtkMapper::SetScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMapper_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMapper_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkMapper_SetScalarRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return nullptr;
}



static PyObject *
PyvtkMapper_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScalarRange() :
      op->vtkMapper::GetScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

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
      op->vtkMapper::SetScalarMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarMode() :
      op->vtkMapper::GetScalarMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToDefault();
    }
    else
    {
      op->vtkMapper::SetScalarModeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarModeToUsePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUsePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToUsePointData();
    }
    else
    {
      op->vtkMapper::SetScalarModeToUsePointData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarModeToUseCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUseCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToUseCellData();
    }
    else
    {
      op->vtkMapper::SetScalarModeToUseCellData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarModeToUsePointFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUsePointFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToUsePointFieldData();
    }
    else
    {
      op->vtkMapper::SetScalarModeToUsePointFieldData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarModeToUseCellFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUseCellFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToUseCellFieldData();
    }
    else
    {
      op->vtkMapper::SetScalarModeToUseCellFieldData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarModeToUseFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUseFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToUseFieldData();
    }
    else
    {
      op->vtkMapper::SetScalarModeToUseFieldData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SelectColorArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
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
      op->vtkMapper::SelectColorArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMapper_SelectColorArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  const char *temp0 = nullptr;
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
      op->vtkMapper::SelectColorArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMapper_SelectColorArray_Methods[] = {
  {nullptr, PyvtkMapper_SelectColorArray_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkMapper_SelectColorArray_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMapper_SelectColorArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMapper_SelectColorArray_Methods;
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
PyvtkMapper_SetFieldDataTupleId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDataTupleId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldDataTupleId(temp0);
    }
    else
    {
      op->vtkMapper::SetFieldDataTupleId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetFieldDataTupleId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataTupleId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetFieldDataTupleId() :
      op->vtkMapper::GetFieldDataTupleId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_ColorByArrayComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorByArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ColorByArrayComponent(temp0, temp1);
    }
    else
    {
      op->vtkMapper::ColorByArrayComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMapper_ColorByArrayComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorByArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ColorByArrayComponent(temp0, temp1);
    }
    else
    {
      op->vtkMapper::ColorByArrayComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMapper_ColorByArrayComponent_Methods[] = {
  {nullptr, PyvtkMapper_ColorByArrayComponent_s1, METH_VARARGS,
   "@ii"},
  {nullptr, PyvtkMapper_ColorByArrayComponent_s2, METH_VARARGS,
   "@zi"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMapper_ColorByArrayComponent(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMapper_ColorByArrayComponent_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ColorByArrayComponent");
  return nullptr;
}



static PyObject *
PyvtkMapper_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkMapper::GetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayName(temp0);
    }
    else
    {
      op->vtkMapper::SetArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayId() :
      op->vtkMapper::GetArrayId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayId(temp0);
    }
    else
    {
      op->vtkMapper::SetArrayId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetArrayAccessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayAccessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayAccessMode() :
      op->vtkMapper::GetArrayAccessMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetArrayAccessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayAccessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayAccessMode(temp0);
    }
    else
    {
      op->vtkMapper::SetArrayAccessMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayComponent() :
      op->vtkMapper::GetArrayComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayComponent(temp0);
    }
    else
    {
      op->vtkMapper::SetArrayComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetScalarModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScalarModeAsString() :
      op->vtkMapper::GetScalarModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopology(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopology");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMapper::SetResolveCoincidentTopology(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetResolveCoincidentTopology(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetResolveCoincidentTopology");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkMapper::GetResolveCoincidentTopology();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyToDefault(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyToDefault");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMapper::SetResolveCoincidentTopologyToDefault();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyToOff(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyToOff");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMapper::SetResolveCoincidentTopologyToOff();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyToPolygonOffset(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyToPolygonOffset");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMapper::SetResolveCoincidentTopologyToPolygonOffset();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyToShiftZBuffer(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyToShiftZBuffer");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMapper::SetResolveCoincidentTopologyToShiftZBuffer();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyPolygonOffsetParameters(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyPolygonOffsetParameters");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkMapper::SetResolveCoincidentTopologyPolygonOffsetParameters(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetResolveCoincidentTopologyPolygonOffsetParameters(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetResolveCoincidentTopologyPolygonOffsetParameters");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkMapper::GetResolveCoincidentTopologyPolygonOffsetParameters(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetRelativeCoincidentTopologyPolygonOffsetParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelativeCoincidentTopologyPolygonOffsetParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRelativeCoincidentTopologyPolygonOffsetParameters(temp0, temp1);
    }
    else
    {
      op->vtkMapper::SetRelativeCoincidentTopologyPolygonOffsetParameters(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetRelativeCoincidentTopologyPolygonOffsetParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeCoincidentTopologyPolygonOffsetParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetRelativeCoincidentTopologyPolygonOffsetParameters(temp0, temp1);
    }
    else
    {
      op->vtkMapper::GetRelativeCoincidentTopologyPolygonOffsetParameters(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyLineOffsetParameters(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyLineOffsetParameters");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkMapper::SetResolveCoincidentTopologyLineOffsetParameters(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetResolveCoincidentTopologyLineOffsetParameters(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetResolveCoincidentTopologyLineOffsetParameters");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkMapper::GetResolveCoincidentTopologyLineOffsetParameters(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetRelativeCoincidentTopologyLineOffsetParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelativeCoincidentTopologyLineOffsetParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRelativeCoincidentTopologyLineOffsetParameters(temp0, temp1);
    }
    else
    {
      op->vtkMapper::SetRelativeCoincidentTopologyLineOffsetParameters(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetRelativeCoincidentTopologyLineOffsetParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeCoincidentTopologyLineOffsetParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetRelativeCoincidentTopologyLineOffsetParameters(temp0, temp1);
    }
    else
    {
      op->vtkMapper::GetRelativeCoincidentTopologyLineOffsetParameters(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyPointOffsetParameter(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyPointOffsetParameter");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMapper::SetResolveCoincidentTopologyPointOffsetParameter(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetResolveCoincidentTopologyPointOffsetParameter(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetResolveCoincidentTopologyPointOffsetParameter");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMapper::GetResolveCoincidentTopologyPointOffsetParameter(temp0);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetRelativeCoincidentTopologyPointOffsetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelativeCoincidentTopologyPointOffsetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRelativeCoincidentTopologyPointOffsetParameter(temp0);
    }
    else
    {
      op->vtkMapper::SetRelativeCoincidentTopologyPointOffsetParameter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetRelativeCoincidentTopologyPointOffsetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeCoincidentTopologyPointOffsetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->GetRelativeCoincidentTopologyPointOffsetParameter(temp0);
    }
    else
    {
      op->vtkMapper::GetRelativeCoincidentTopologyPointOffsetParameter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetCoincidentTopologyPolygonOffsetParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoincidentTopologyPolygonOffsetParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetCoincidentTopologyPolygonOffsetParameters(temp0, temp1);
    }
    else
    {
      op->vtkMapper::GetCoincidentTopologyPolygonOffsetParameters(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetCoincidentTopologyLineOffsetParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoincidentTopologyLineOffsetParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetCoincidentTopologyLineOffsetParameters(temp0, temp1);
    }
    else
    {
      op->vtkMapper::GetCoincidentTopologyLineOffsetParameters(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetCoincidentTopologyPointOffsetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoincidentTopologyPointOffsetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->GetCoincidentTopologyPointOffsetParameter(temp0);
    }
    else
    {
      op->vtkMapper::GetCoincidentTopologyPointOffsetParameter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyPolygonOffsetFaces(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyPolygonOffsetFaces");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMapper::SetResolveCoincidentTopologyPolygonOffsetFaces(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetResolveCoincidentTopologyPolygonOffsetFaces(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetResolveCoincidentTopologyPolygonOffsetFaces");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkMapper::GetResolveCoincidentTopologyPolygonOffsetFaces();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyZShift(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyZShift");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMapper::SetResolveCoincidentTopologyZShift(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetResolveCoincidentTopologyZShift(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetResolveCoincidentTopologyZShift");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    double tempr = vtkMapper::GetResolveCoincidentTopologyZShift();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkMapper::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

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
      op->vtkMapper::GetBounds(temp0);
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
PyvtkMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkMapper_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkMapper_SetRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderTime(temp0);
    }
    else
    {
      op->vtkMapper::SetRenderTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRenderTime() :
      op->vtkMapper::GetRenderTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkMapper::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetInputAsDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputAsDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetInputAsDataSet() :
      op->vtkMapper::GetInputAsDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_MapScalars_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->MapScalars(temp0) :
      op->vtkMapper::MapScalars(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMapper_MapScalars_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->MapScalars(temp0, temp1) :
      op->vtkMapper::MapScalars(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMapper_MapScalars_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  vtkDataSet *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->MapScalars(temp0, temp1) :
      op->vtkMapper::MapScalars(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMapper_MapScalars_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  vtkDataSet *temp0 = nullptr;
  double temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->MapScalars(temp0, temp1, temp2) :
      op->vtkMapper::MapScalars(temp0, temp1, temp2));

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

static PyMethodDef PyvtkMapper_MapScalars_Methods[] = {
  {nullptr, PyvtkMapper_MapScalars_s2, METH_VARARGS,
   "@di"},
  {nullptr, PyvtkMapper_MapScalars_s3, METH_VARARGS,
   "@Vd *vtkDataSet"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMapper_MapScalars(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMapper_MapScalars_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMapper_MapScalars_s1(self, args);
    case 3:
      return PyvtkMapper_MapScalars_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "MapScalars");
  return nullptr;
}



static PyObject *
PyvtkMapper_GetIsOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsOpaque() :
      op->vtkMapper::GetIsOpaque());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetSupportsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSupportsSelection() :
      op->vtkMapper::GetSupportsSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_CanUseTextureMapForColoring(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanUseTextureMapForColoring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->CanUseTextureMapForColoring(temp0) :
      op->vtkMapper::CanUseTextureMapForColoring(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_ClearColorArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearColorArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearColorArrays();
    }
    else
    {
      op->vtkMapper::ClearColorArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetColorMapColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMapColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetColorMapColors() :
      op->vtkMapper::GetColorMapColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetColorCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetColorCoordinates() :
      op->vtkMapper::GetColorCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetColorTextureMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorTextureMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetColorTextureMap() :
      op->vtkMapper::GetColorTextureMap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMapper_Methods[] = {
  {"IsTypeOf", PyvtkMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMapper\nC++: static vtkMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMapper\nC++: vtkMapper *NewInstance()\n\n"},
  {"ShallowCopy", PyvtkMapper_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkAbstractMapper)\nC++: void ShallowCopy(vtkAbstractMapper *m)\n\nMake a shallow copy of this mapper.\n"},
  {"GetMTime", PyvtkMapper_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverload standard modified time function. If lookup table is\nmodified, then this object is modified as well.\n"},
  {"Render", PyvtkMapper_Render, METH_VARARGS,
   "V.Render(vtkRenderer, vtkActor)\nC++: virtual void Render(vtkRenderer *ren, vtkActor *a)\n\nMethod initiates the mapping process. Generally sent by the actor\nas each frame is rendered.\n"},
  {"ReleaseGraphicsResources", PyvtkMapper_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"SetLookupTable", PyvtkMapper_SetLookupTable, METH_VARARGS,
   "V.SetLookupTable(vtkScalarsToColors)\nC++: void SetLookupTable(vtkScalarsToColors *lut)\n\nSpecify a lookup table for the mapper to use.\n"},
  {"GetLookupTable", PyvtkMapper_GetLookupTable, METH_VARARGS,
   "V.GetLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\nSpecify a lookup table for the mapper to use.\n"},
  {"CreateDefaultLookupTable", PyvtkMapper_CreateDefaultLookupTable, METH_VARARGS,
   "V.CreateDefaultLookupTable()\nC++: virtual void CreateDefaultLookupTable()\n\nCreate default lookup table. Generally used to create one when\nnone is available with the scalar data.\n"},
  {"SetScalarVisibility", PyvtkMapper_SetScalarVisibility, METH_VARARGS,
   "V.SetScalarVisibility(int)\nC++: virtual void SetScalarVisibility(vtkTypeBool _arg)\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {"GetScalarVisibility", PyvtkMapper_GetScalarVisibility, METH_VARARGS,
   "V.GetScalarVisibility() -> int\nC++: virtual vtkTypeBool GetScalarVisibility()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {"ScalarVisibilityOn", PyvtkMapper_ScalarVisibilityOn, METH_VARARGS,
   "V.ScalarVisibilityOn()\nC++: virtual void ScalarVisibilityOn()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {"ScalarVisibilityOff", PyvtkMapper_ScalarVisibilityOff, METH_VARARGS,
   "V.ScalarVisibilityOff()\nC++: virtual void ScalarVisibilityOff()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {"SetStatic", PyvtkMapper_SetStatic, METH_VARARGS,
   "V.SetStatic(int)\nC++: virtual void SetStatic(vtkTypeBool _arg)\n\nTurn on/off flag to control whether the mapper's data is static.\nStatic data means that the mapper does not propagate updates down\nthe pipeline, greatly decreasing the time it takes to update many\nmappers. This should only be used if the data never changes.\n"},
  {"GetStatic", PyvtkMapper_GetStatic, METH_VARARGS,
   "V.GetStatic() -> int\nC++: virtual vtkTypeBool GetStatic()\n\nTurn on/off flag to control whether the mapper's data is static.\nStatic data means that the mapper does not propagate updates down\nthe pipeline, greatly decreasing the time it takes to update many\nmappers. This should only be used if the data never changes.\n"},
  {"StaticOn", PyvtkMapper_StaticOn, METH_VARARGS,
   "V.StaticOn()\nC++: virtual void StaticOn()\n\nTurn on/off flag to control whether the mapper's data is static.\nStatic data means that the mapper does not propagate updates down\nthe pipeline, greatly decreasing the time it takes to update many\nmappers. This should only be used if the data never changes.\n"},
  {"StaticOff", PyvtkMapper_StaticOff, METH_VARARGS,
   "V.StaticOff()\nC++: virtual void StaticOff()\n\nTurn on/off flag to control whether the mapper's data is static.\nStatic data means that the mapper does not propagate updates down\nthe pipeline, greatly decreasing the time it takes to update many\nmappers. This should only be used if the data never changes.\n"},
  {"SetColorMode", PyvtkMapper_SetColorMode, METH_VARARGS,
   "V.SetColorMode(int)\nC++: virtual void SetColorMode(int _arg)\n\ndefault (ColorModeToDefault), unsigned char scalars are treated\nas colors, and NOT mapped through the lookup table, while\neverything else is.  ColorModeToDirectScalar extends\nColorModeToDefault such that all integer types are treated as\ncolors with values in the range 0-255 and floating types are\ntreated as colors with values in the range 0.0-1.0.  Setting\nColorModeToMapScalars means that all scalar data will be mapped\nthrough the lookup table.  (Note that for multi-component\nscalars, the particular component to use for mapping can be\nspecified using the SelectColorArray() method.)\n"},
  {"GetColorMode", PyvtkMapper_GetColorMode, METH_VARARGS,
   "V.GetColorMode() -> int\nC++: virtual int GetColorMode()\n\ndefault (ColorModeToDefault), unsigned char scalars are treated\nas colors, and NOT mapped through the lookup table, while\neverything else is.  ColorModeToDirectScalar extends\nColorModeToDefault such that all integer types are treated as\ncolors with values in the range 0-255 and floating types are\ntreated as colors with values in the range 0.0-1.0.  Setting\nColorModeToMapScalars means that all scalar data will be mapped\nthrough the lookup table.  (Note that for multi-component\nscalars, the particular component to use for mapping can be\nspecified using the SelectColorArray() method.)\n"},
  {"SetColorModeToDefault", PyvtkMapper_SetColorModeToDefault, METH_VARARGS,
   "V.SetColorModeToDefault()\nC++: void SetColorModeToDefault()\n\ndefault (ColorModeToDefault), unsigned char scalars are treated\nas colors, and NOT mapped through the lookup table, while\neverything else is.  ColorModeToDirectScalar extends\nColorModeToDefault such that all integer types are treated as\ncolors with values in the range 0-255 and floating types are\ntreated as colors with values in the range 0.0-1.0.  Setting\nColorModeToMapScalars means that all scalar data will be mapped\nthrough the lookup table.  (Note that for multi-component\nscalars, the particular component to use for mapping can be\nspecified using the SelectColorArray() method.)\n"},
  {"SetColorModeToMapScalars", PyvtkMapper_SetColorModeToMapScalars, METH_VARARGS,
   "V.SetColorModeToMapScalars()\nC++: void SetColorModeToMapScalars()\n\ndefault (ColorModeToDefault), unsigned char scalars are treated\nas colors, and NOT mapped through the lookup table, while\neverything else is.  ColorModeToDirectScalar extends\nColorModeToDefault such that all integer types are treated as\ncolors with values in the range 0-255 and floating types are\ntreated as colors with values in the range 0.0-1.0.  Setting\nColorModeToMapScalars means that all scalar data will be mapped\nthrough the lookup table.  (Note that for multi-component\nscalars, the particular component to use for mapping can be\nspecified using the SelectColorArray() method.)\n"},
  {"SetColorModeToDirectScalars", PyvtkMapper_SetColorModeToDirectScalars, METH_VARARGS,
   "V.SetColorModeToDirectScalars()\nC++: void SetColorModeToDirectScalars()\n\ndefault (ColorModeToDefault), unsigned char scalars are treated\nas colors, and NOT mapped through the lookup table, while\neverything else is.  ColorModeToDirectScalar extends\nColorModeToDefault such that all integer types are treated as\ncolors with values in the range 0-255 and floating types are\ntreated as colors with values in the range 0.0-1.0.  Setting\nColorModeToMapScalars means that all scalar data will be mapped\nthrough the lookup table.  (Note that for multi-component\nscalars, the particular component to use for mapping can be\nspecified using the SelectColorArray() method.)\n"},
  {"GetColorModeAsString", PyvtkMapper_GetColorModeAsString, METH_VARARGS,
   "V.GetColorModeAsString() -> string\nC++: const char *GetColorModeAsString()\n\nReturn the method of coloring scalar data.\n"},
  {"SetInterpolateScalarsBeforeMapping", PyvtkMapper_SetInterpolateScalarsBeforeMapping, METH_VARARGS,
   "V.SetInterpolateScalarsBeforeMapping(int)\nC++: virtual void SetInterpolateScalarsBeforeMapping(\n    vtkTypeBool _arg)\n\nBy default, vertex color is used to map colors to a surface.\nColors are interpolated after being mapped. This option avoids\ncolor interpolation by using a one dimensional texture map for\nthe colors.\n"},
  {"GetInterpolateScalarsBeforeMapping", PyvtkMapper_GetInterpolateScalarsBeforeMapping, METH_VARARGS,
   "V.GetInterpolateScalarsBeforeMapping() -> int\nC++: virtual vtkTypeBool GetInterpolateScalarsBeforeMapping()\n\nBy default, vertex color is used to map colors to a surface.\nColors are interpolated after being mapped. This option avoids\ncolor interpolation by using a one dimensional texture map for\nthe colors.\n"},
  {"InterpolateScalarsBeforeMappingOn", PyvtkMapper_InterpolateScalarsBeforeMappingOn, METH_VARARGS,
   "V.InterpolateScalarsBeforeMappingOn()\nC++: virtual void InterpolateScalarsBeforeMappingOn()\n\nBy default, vertex color is used to map colors to a surface.\nColors are interpolated after being mapped. This option avoids\ncolor interpolation by using a one dimensional texture map for\nthe colors.\n"},
  {"InterpolateScalarsBeforeMappingOff", PyvtkMapper_InterpolateScalarsBeforeMappingOff, METH_VARARGS,
   "V.InterpolateScalarsBeforeMappingOff()\nC++: virtual void InterpolateScalarsBeforeMappingOff()\n\nBy default, vertex color is used to map colors to a surface.\nColors are interpolated after being mapped. This option avoids\ncolor interpolation by using a one dimensional texture map for\nthe colors.\n"},
  {"SetUseLookupTableScalarRange", PyvtkMapper_SetUseLookupTableScalarRange, METH_VARARGS,
   "V.SetUseLookupTableScalarRange(int)\nC++: virtual void SetUseLookupTableScalarRange(vtkTypeBool _arg)\n\nControl whether the mapper sets the lookuptable range based on\nits own ScalarRange, or whether it will use the LookupTable\nScalarRange regardless of it's own setting. By default the Mapper\nis allowed to set the LookupTable range, but users who are\nsharing LookupTables between mappers/actors will probably wish to\nforce the mapper to use the LookupTable unchanged.\n"},
  {"GetUseLookupTableScalarRange", PyvtkMapper_GetUseLookupTableScalarRange, METH_VARARGS,
   "V.GetUseLookupTableScalarRange() -> int\nC++: virtual vtkTypeBool GetUseLookupTableScalarRange()\n\nControl whether the mapper sets the lookuptable range based on\nits own ScalarRange, or whether it will use the LookupTable\nScalarRange regardless of it's own setting. By default the Mapper\nis allowed to set the LookupTable range, but users who are\nsharing LookupTables between mappers/actors will probably wish to\nforce the mapper to use the LookupTable unchanged.\n"},
  {"UseLookupTableScalarRangeOn", PyvtkMapper_UseLookupTableScalarRangeOn, METH_VARARGS,
   "V.UseLookupTableScalarRangeOn()\nC++: virtual void UseLookupTableScalarRangeOn()\n\nControl whether the mapper sets the lookuptable range based on\nits own ScalarRange, or whether it will use the LookupTable\nScalarRange regardless of it's own setting. By default the Mapper\nis allowed to set the LookupTable range, but users who are\nsharing LookupTables between mappers/actors will probably wish to\nforce the mapper to use the LookupTable unchanged.\n"},
  {"UseLookupTableScalarRangeOff", PyvtkMapper_UseLookupTableScalarRangeOff, METH_VARARGS,
   "V.UseLookupTableScalarRangeOff()\nC++: virtual void UseLookupTableScalarRangeOff()\n\nControl whether the mapper sets the lookuptable range based on\nits own ScalarRange, or whether it will use the LookupTable\nScalarRange regardless of it's own setting. By default the Mapper\nis allowed to set the LookupTable range, but users who are\nsharing LookupTables between mappers/actors will probably wish to\nforce the mapper to use the LookupTable unchanged.\n"},
  {"SetScalarRange", PyvtkMapper_SetScalarRange, METH_VARARGS,
   "V.SetScalarRange(float, float)\nC++: void SetScalarRange(double, double)\nV.SetScalarRange((float, float))\nC++: void SetScalarRange(double a[2])\n\n"},
  {"GetScalarRange", PyvtkMapper_GetScalarRange, METH_VARARGS,
   "V.GetScalarRange() -> (float, float)\nC++: double *GetScalarRange()\n\nSpecify range in terms of scalar minimum and maximum (smin,smax).\nThese values are used to map scalars into lookup table. Has no\neffect when UseLookupTableScalarRange is true.\n"},
  {"SetScalarMode", PyvtkMapper_SetScalarMode, METH_VARARGS,
   "V.SetScalarMode(int)\nC++: virtual void SetScalarMode(int _arg)\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectColorArray before you call GetColors.\n"},
  {"GetScalarMode", PyvtkMapper_GetScalarMode, METH_VARARGS,
   "V.GetScalarMode() -> int\nC++: virtual int GetScalarMode()\n\n"},
  {"SetScalarModeToDefault", PyvtkMapper_SetScalarModeToDefault, METH_VARARGS,
   "V.SetScalarModeToDefault()\nC++: void SetScalarModeToDefault()\n\n"},
  {"SetScalarModeToUsePointData", PyvtkMapper_SetScalarModeToUsePointData, METH_VARARGS,
   "V.SetScalarModeToUsePointData()\nC++: void SetScalarModeToUsePointData()\n\n"},
  {"SetScalarModeToUseCellData", PyvtkMapper_SetScalarModeToUseCellData, METH_VARARGS,
   "V.SetScalarModeToUseCellData()\nC++: void SetScalarModeToUseCellData()\n\n"},
  {"SetScalarModeToUsePointFieldData", PyvtkMapper_SetScalarModeToUsePointFieldData, METH_VARARGS,
   "V.SetScalarModeToUsePointFieldData()\nC++: void SetScalarModeToUsePointFieldData()\n\n"},
  {"SetScalarModeToUseCellFieldData", PyvtkMapper_SetScalarModeToUseCellFieldData, METH_VARARGS,
   "V.SetScalarModeToUseCellFieldData()\nC++: void SetScalarModeToUseCellFieldData()\n\n"},
  {"SetScalarModeToUseFieldData", PyvtkMapper_SetScalarModeToUseFieldData, METH_VARARGS,
   "V.SetScalarModeToUseFieldData()\nC++: void SetScalarModeToUseFieldData()\n\n"},
  {"SelectColorArray", PyvtkMapper_SelectColorArray, METH_VARARGS,
   "V.SelectColorArray(int)\nC++: void SelectColorArray(int arrayNum)\nV.SelectColorArray(string)\nC++: void SelectColorArray(const char *arrayName)\n\nWhen ScalarMode is set to UsePointFieldData or UseCellFieldData,\nyou can specify which array to use for coloring using these\nmethods. The lookup table will decide how to convert vectors to\ncolors.\n"},
  {"SetFieldDataTupleId", PyvtkMapper_SetFieldDataTupleId, METH_VARARGS,
   "V.SetFieldDataTupleId(int)\nC++: virtual void SetFieldDataTupleId(vtkIdType _arg)\n\n"},
  {"GetFieldDataTupleId", PyvtkMapper_GetFieldDataTupleId, METH_VARARGS,
   "V.GetFieldDataTupleId() -> int\nC++: virtual vtkIdType GetFieldDataTupleId()\n\n"},
  {"ColorByArrayComponent", PyvtkMapper_ColorByArrayComponent, METH_VARARGS,
   "V.ColorByArrayComponent(int, int)\nC++: void ColorByArrayComponent(int arrayNum, int component)\nV.ColorByArrayComponent(string, int)\nC++: void ColorByArrayComponent(const char *arrayName,\n    int component)\n\nLegacy: These methods used to be used to specify the array\ncomponent. It is better to do this in the lookup table.\n"},
  {"GetArrayName", PyvtkMapper_GetArrayName, METH_VARARGS,
   "V.GetArrayName() -> string\nC++: virtual char *GetArrayName()\n\nSet/Get the array name or number and component to color by.\n"},
  {"SetArrayName", PyvtkMapper_SetArrayName, METH_VARARGS,
   "V.SetArrayName(string)\nC++: virtual void SetArrayName(const char *_arg)\n\n"},
  {"GetArrayId", PyvtkMapper_GetArrayId, METH_VARARGS,
   "V.GetArrayId() -> int\nC++: virtual int GetArrayId()\n\n"},
  {"SetArrayId", PyvtkMapper_SetArrayId, METH_VARARGS,
   "V.SetArrayId(int)\nC++: virtual void SetArrayId(int _arg)\n\n"},
  {"GetArrayAccessMode", PyvtkMapper_GetArrayAccessMode, METH_VARARGS,
   "V.GetArrayAccessMode() -> int\nC++: virtual int GetArrayAccessMode()\n\n"},
  {"SetArrayAccessMode", PyvtkMapper_SetArrayAccessMode, METH_VARARGS,
   "V.SetArrayAccessMode(int)\nC++: virtual void SetArrayAccessMode(int _arg)\n\n"},
  {"GetArrayComponent", PyvtkMapper_GetArrayComponent, METH_VARARGS,
   "V.GetArrayComponent() -> int\nC++: virtual int GetArrayComponent()\n\n"},
  {"SetArrayComponent", PyvtkMapper_SetArrayComponent, METH_VARARGS,
   "V.SetArrayComponent(int)\nC++: virtual void SetArrayComponent(int _arg)\n\n"},
  {"GetScalarModeAsString", PyvtkMapper_GetScalarModeAsString, METH_VARARGS,
   "V.GetScalarModeAsString() -> string\nC++: const char *GetScalarModeAsString()\n\nReturn the method for obtaining scalar data.\n"},
  {"SetResolveCoincidentTopology", PyvtkMapper_SetResolveCoincidentTopology, METH_VARARGS,
   "V.SetResolveCoincidentTopology(int)\nC++: static void SetResolveCoincidentTopology(int val)\n\nSet/Get a global flag that controls whether coincident topology\n(e.g., a line on top of a polygon) is shifted to avoid z-buffer\nresolution (and hence rendering problems). If not off, there are\ntwo methods to choose from. PolygonOffset uses graphics systems\ncalls to shift polygons, lines and points from each other.\nShiftZBuffer is a legacy method that used to remap the z-buffer\nto distinguish vertices, lines, and polygons, but does not always\nproduce acceptable results. You should only use the PolygonOffset\nmethod (or none) at this point.\n"},
  {"GetResolveCoincidentTopology", PyvtkMapper_GetResolveCoincidentTopology, METH_VARARGS,
   "V.GetResolveCoincidentTopology() -> int\nC++: static int GetResolveCoincidentTopology()\n\nSet/Get a global flag that controls whether coincident topology\n(e.g., a line on top of a polygon) is shifted to avoid z-buffer\nresolution (and hence rendering problems). If not off, there are\ntwo methods to choose from. PolygonOffset uses graphics systems\ncalls to shift polygons, lines and points from each other.\nShiftZBuffer is a legacy method that used to remap the z-buffer\nto distinguish vertices, lines, and polygons, but does not always\nproduce acceptable results. You should only use the PolygonOffset\nmethod (or none) at this point.\n"},
  {"SetResolveCoincidentTopologyToDefault", PyvtkMapper_SetResolveCoincidentTopologyToDefault, METH_VARARGS,
   "V.SetResolveCoincidentTopologyToDefault()\nC++: static void SetResolveCoincidentTopologyToDefault()\n\nSet/Get a global flag that controls whether coincident topology\n(e.g., a line on top of a polygon) is shifted to avoid z-buffer\nresolution (and hence rendering problems). If not off, there are\ntwo methods to choose from. PolygonOffset uses graphics systems\ncalls to shift polygons, lines and points from each other.\nShiftZBuffer is a legacy method that used to remap the z-buffer\nto distinguish vertices, lines, and polygons, but does not always\nproduce acceptable results. You should only use the PolygonOffset\nmethod (or none) at this point.\n"},
  {"SetResolveCoincidentTopologyToOff", PyvtkMapper_SetResolveCoincidentTopologyToOff, METH_VARARGS,
   "V.SetResolveCoincidentTopologyToOff()\nC++: static void SetResolveCoincidentTopologyToOff()\n\nSet/Get a global flag that controls whether coincident topology\n(e.g., a line on top of a polygon) is shifted to avoid z-buffer\nresolution (and hence rendering problems). If not off, there are\ntwo methods to choose from. PolygonOffset uses graphics systems\ncalls to shift polygons, lines and points from each other.\nShiftZBuffer is a legacy method that used to remap the z-buffer\nto distinguish vertices, lines, and polygons, but does not always\nproduce acceptable results. You should only use the PolygonOffset\nmethod (or none) at this point.\n"},
  {"SetResolveCoincidentTopologyToPolygonOffset", PyvtkMapper_SetResolveCoincidentTopologyToPolygonOffset, METH_VARARGS,
   "V.SetResolveCoincidentTopologyToPolygonOffset()\nC++: static void SetResolveCoincidentTopologyToPolygonOffset()\n\nSet/Get a global flag that controls whether coincident topology\n(e.g., a line on top of a polygon) is shifted to avoid z-buffer\nresolution (and hence rendering problems). If not off, there are\ntwo methods to choose from. PolygonOffset uses graphics systems\ncalls to shift polygons, lines and points from each other.\nShiftZBuffer is a legacy method that used to remap the z-buffer\nto distinguish vertices, lines, and polygons, but does not always\nproduce acceptable results. You should only use the PolygonOffset\nmethod (or none) at this point.\n"},
  {"SetResolveCoincidentTopologyToShiftZBuffer", PyvtkMapper_SetResolveCoincidentTopologyToShiftZBuffer, METH_VARARGS,
   "V.SetResolveCoincidentTopologyToShiftZBuffer()\nC++: static void SetResolveCoincidentTopologyToShiftZBuffer()\n\nSet/Get a global flag that controls whether coincident topology\n(e.g., a line on top of a polygon) is shifted to avoid z-buffer\nresolution (and hence rendering problems). If not off, there are\ntwo methods to choose from. PolygonOffset uses graphics systems\ncalls to shift polygons, lines and points from each other.\nShiftZBuffer is a legacy method that used to remap the z-buffer\nto distinguish vertices, lines, and polygons, but does not always\nproduce acceptable results. You should only use the PolygonOffset\nmethod (or none) at this point.\n"},
  {"SetResolveCoincidentTopologyPolygonOffsetParameters", PyvtkMapper_SetResolveCoincidentTopologyPolygonOffsetParameters, METH_VARARGS,
   "V.SetResolveCoincidentTopologyPolygonOffsetParameters(float,\n    float)\nC++: static void SetResolveCoincidentTopologyPolygonOffsetParameters(\n    double factor, double units)\n\nUsed to set the polygon offset scale factor and units. Used when\nResolveCoincidentTopology is set to PolygonOffset. These are\nglobal variables.\n"},
  {"GetResolveCoincidentTopologyPolygonOffsetParameters", PyvtkMapper_GetResolveCoincidentTopologyPolygonOffsetParameters, METH_VARARGS,
   "V.GetResolveCoincidentTopologyPolygonOffsetParameters(float,\n    float)\nC++: static void GetResolveCoincidentTopologyPolygonOffsetParameters(\n    double &factor, double &units)\n\nUsed to set the polygon offset scale factor and units. Used when\nResolveCoincidentTopology is set to PolygonOffset. These are\nglobal variables.\n"},
  {"SetRelativeCoincidentTopologyPolygonOffsetParameters", PyvtkMapper_SetRelativeCoincidentTopologyPolygonOffsetParameters, METH_VARARGS,
   "V.SetRelativeCoincidentTopologyPolygonOffsetParameters(float,\n    float)\nC++: void SetRelativeCoincidentTopologyPolygonOffsetParameters(\n    double factor, double units)\n\nUsed to set the polygon offset values relative to the global Used\nwhen ResolveCoincidentTopology is set to PolygonOffset.\n"},
  {"GetRelativeCoincidentTopologyPolygonOffsetParameters", PyvtkMapper_GetRelativeCoincidentTopologyPolygonOffsetParameters, METH_VARARGS,
   "V.GetRelativeCoincidentTopologyPolygonOffsetParameters(float,\n    float)\nC++: void GetRelativeCoincidentTopologyPolygonOffsetParameters(\n    double &factor, double &units)\n\nUsed to set the polygon offset values relative to the global Used\nwhen ResolveCoincidentTopology is set to PolygonOffset.\n"},
  {"SetResolveCoincidentTopologyLineOffsetParameters", PyvtkMapper_SetResolveCoincidentTopologyLineOffsetParameters, METH_VARARGS,
   "V.SetResolveCoincidentTopologyLineOffsetParameters(float, float)\nC++: static void SetResolveCoincidentTopologyLineOffsetParameters(\n    double factor, double units)\n\nUsed to set the line offset scale factor and units. Used when\nResolveCoincidentTopology is set to PolygonOffset. These are\nglobal variables.\n"},
  {"GetResolveCoincidentTopologyLineOffsetParameters", PyvtkMapper_GetResolveCoincidentTopologyLineOffsetParameters, METH_VARARGS,
   "V.GetResolveCoincidentTopologyLineOffsetParameters(float, float)\nC++: static void GetResolveCoincidentTopologyLineOffsetParameters(\n    double &factor, double &units)\n\nUsed to set the line offset scale factor and units. Used when\nResolveCoincidentTopology is set to PolygonOffset. These are\nglobal variables.\n"},
  {"SetRelativeCoincidentTopologyLineOffsetParameters", PyvtkMapper_SetRelativeCoincidentTopologyLineOffsetParameters, METH_VARARGS,
   "V.SetRelativeCoincidentTopologyLineOffsetParameters(float, float)\nC++: void SetRelativeCoincidentTopologyLineOffsetParameters(\n    double factor, double units)\n\nUsed to set the line offset values relative to the global Used\nwhen ResolveCoincidentTopology is set to PolygonOffset.\n"},
  {"GetRelativeCoincidentTopologyLineOffsetParameters", PyvtkMapper_GetRelativeCoincidentTopologyLineOffsetParameters, METH_VARARGS,
   "V.GetRelativeCoincidentTopologyLineOffsetParameters(float, float)\nC++: void GetRelativeCoincidentTopologyLineOffsetParameters(\n    double &factor, double &units)\n\nUsed to set the line offset values relative to the global Used\nwhen ResolveCoincidentTopology is set to PolygonOffset.\n"},
  {"SetResolveCoincidentTopologyPointOffsetParameter", PyvtkMapper_SetResolveCoincidentTopologyPointOffsetParameter, METH_VARARGS,
   "V.SetResolveCoincidentTopologyPointOffsetParameter(float)\nC++: static void SetResolveCoincidentTopologyPointOffsetParameter(\n    double units)\n\nUsed to set the point offset value Used when\nResolveCoincidentTopology is set to PolygonOffset. These are\nglobal variables.\n"},
  {"GetResolveCoincidentTopologyPointOffsetParameter", PyvtkMapper_GetResolveCoincidentTopologyPointOffsetParameter, METH_VARARGS,
   "V.GetResolveCoincidentTopologyPointOffsetParameter(float)\nC++: static void GetResolveCoincidentTopologyPointOffsetParameter(\n    double &units)\n\nUsed to set the point offset value Used when\nResolveCoincidentTopology is set to PolygonOffset. These are\nglobal variables.\n"},
  {"SetRelativeCoincidentTopologyPointOffsetParameter", PyvtkMapper_SetRelativeCoincidentTopologyPointOffsetParameter, METH_VARARGS,
   "V.SetRelativeCoincidentTopologyPointOffsetParameter(float)\nC++: void SetRelativeCoincidentTopologyPointOffsetParameter(\n    double units)\n\nUsed to set the point offset value relative to the global Used\nwhen ResolveCoincidentTopology is set to PolygonOffset.\n"},
  {"GetRelativeCoincidentTopologyPointOffsetParameter", PyvtkMapper_GetRelativeCoincidentTopologyPointOffsetParameter, METH_VARARGS,
   "V.GetRelativeCoincidentTopologyPointOffsetParameter(float)\nC++: void GetRelativeCoincidentTopologyPointOffsetParameter(\n    double &units)\n\nUsed to set the point offset value relative to the global Used\nwhen ResolveCoincidentTopology is set to PolygonOffset.\n"},
  {"GetCoincidentTopologyPolygonOffsetParameters", PyvtkMapper_GetCoincidentTopologyPolygonOffsetParameters, METH_VARARGS,
   "V.GetCoincidentTopologyPolygonOffsetParameters(float, float)\nC++: void GetCoincidentTopologyPolygonOffsetParameters(\n    double &factor, double &units)\n\nGet the net parameters for handling coincident topology obtained\nby summing the global values with the relative values.\n"},
  {"GetCoincidentTopologyLineOffsetParameters", PyvtkMapper_GetCoincidentTopologyLineOffsetParameters, METH_VARARGS,
   "V.GetCoincidentTopologyLineOffsetParameters(float, float)\nC++: void GetCoincidentTopologyLineOffsetParameters(\n    double &factor, double &units)\n\nGet the net parameters for handling coincident topology obtained\nby summing the global values with the relative values.\n"},
  {"GetCoincidentTopologyPointOffsetParameter", PyvtkMapper_GetCoincidentTopologyPointOffsetParameter, METH_VARARGS,
   "V.GetCoincidentTopologyPointOffsetParameter(float)\nC++: void GetCoincidentTopologyPointOffsetParameter(double &units)\n\nGet the net parameters for handling coincident topology obtained\nby summing the global values with the relative values.\n"},
  {"SetResolveCoincidentTopologyPolygonOffsetFaces", PyvtkMapper_SetResolveCoincidentTopologyPolygonOffsetFaces, METH_VARARGS,
   "V.SetResolveCoincidentTopologyPolygonOffsetFaces(int)\nC++: static void SetResolveCoincidentTopologyPolygonOffsetFaces(\n    int faces)\n\nUsed when ResolveCoincidentTopology is set to PolygonOffset. The\npolygon offset can be applied either to the solid polygonal faces\nor the lines/vertices. When set (default), the offset is applied\nto the faces otherwise it is applied to lines and vertices. This\nis a global variable.\n"},
  {"GetResolveCoincidentTopologyPolygonOffsetFaces", PyvtkMapper_GetResolveCoincidentTopologyPolygonOffsetFaces, METH_VARARGS,
   "V.GetResolveCoincidentTopologyPolygonOffsetFaces() -> int\nC++: static int GetResolveCoincidentTopologyPolygonOffsetFaces()\n\nUsed when ResolveCoincidentTopology is set to PolygonOffset. The\npolygon offset can be applied either to the solid polygonal faces\nor the lines/vertices. When set (default), the offset is applied\nto the faces otherwise it is applied to lines and vertices. This\nis a global variable.\n"},
  {"SetResolveCoincidentTopologyZShift", PyvtkMapper_SetResolveCoincidentTopologyZShift, METH_VARARGS,
   "V.SetResolveCoincidentTopologyZShift(float)\nC++: static void SetResolveCoincidentTopologyZShift(double val)\n\nUsed to set the z-shift if ResolveCoincidentTopology is set to\nShiftZBuffer. This is a global variable.\n"},
  {"GetResolveCoincidentTopologyZShift", PyvtkMapper_GetResolveCoincidentTopologyZShift, METH_VARARGS,
   "V.GetResolveCoincidentTopologyZShift() -> float\nC++: static double GetResolveCoincidentTopologyZShift()\n\nUsed to set the z-shift if ResolveCoincidentTopology is set to\nShiftZBuffer. This is a global variable.\n"},
  {"GetBounds", PyvtkMapper_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6]) override;\n\nReturn bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {"SetRenderTime", PyvtkMapper_SetRenderTime, METH_VARARGS,
   "V.SetRenderTime(float)\nC++: void SetRenderTime(double time)\n\nThis instance variable is used by vtkLODActor to determine which\nmapper to use.  It is an estimate of the time necessary to\nrender. Setting the render time does not modify the mapper.\n"},
  {"GetRenderTime", PyvtkMapper_GetRenderTime, METH_VARARGS,
   "V.GetRenderTime() -> float\nC++: virtual double GetRenderTime()\n\n"},
  {"GetInput", PyvtkMapper_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkDataSet\nC++: vtkDataSet *GetInput()\n\nGet the input as a vtkDataSet.  This method is overridden in the\nspecialized mapper classes to return more specific data types.\n"},
  {"GetInputAsDataSet", PyvtkMapper_GetInputAsDataSet, METH_VARARGS,
   "V.GetInputAsDataSet() -> vtkDataSet\nC++: vtkDataSet *GetInputAsDataSet()\n\nGet the input to this mapper as a vtkDataSet, instead of as a\nmore specialized data type that the subclass may return from\nGetInput().  This method is provided for use in the wrapper\nlanguages, C++ programmers should use GetInput() instead.\n"},
  {"MapScalars", PyvtkMapper_MapScalars, METH_VARARGS,
   "V.MapScalars(float) -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *MapScalars(double alpha)\nV.MapScalars(float, int) -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *MapScalars(double alpha,\n    int &cellFlag)\nV.MapScalars(vtkDataSet, float) -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *MapScalars(vtkDataSet *input,\n    double alpha)\nV.MapScalars(vtkDataSet, float, int) -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *MapScalars(vtkDataSet *input,\n    double alpha, int &cellFlag)\n\nMap the scalars (if there are any scalars and ScalarVisibility is\non) through the lookup table, returning an unsigned char RGBA\narray. This is typically done as part of the rendering process.\nThe alpha parameter allows the blending of the scalars with an\nadditional alpha (typically which comes from a vtkActor, etc.)\n"},
  {"GetIsOpaque", PyvtkMapper_GetIsOpaque, METH_VARARGS,
   "V.GetIsOpaque() -> bool\nC++: virtual bool GetIsOpaque()\n\nReturns if the mapper does not expect to have translucent\ngeometry. This may happen when using ColorMode is set to not map\nscalars i.e. render the scalar array directly as colors and the\nscalar array has opacity i.e. alpha component.  Default\nimplementation simply returns true. Note that even if this method\nreturns true, an actor may treat the geometry as translucent\nsince a constant translucency is set on the property, for\nexample.\n"},
  {"GetSupportsSelection", PyvtkMapper_GetSupportsSelection, METH_VARARGS,
   "V.GetSupportsSelection() -> bool\nC++: virtual bool GetSupportsSelection()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Used by\nvtkHardwareSelector to determine if the prop supports hardware\nselection.\n"},
  {"CanUseTextureMapForColoring", PyvtkMapper_CanUseTextureMapForColoring, METH_VARARGS,
   "V.CanUseTextureMapForColoring(vtkDataObject) -> int\nC++: virtual int CanUseTextureMapForColoring(vtkDataObject *input)\n\nReturns if we can use texture maps for scalar coloring. Note this\ndoesn't say we \"will\" use scalar coloring. It says, if we do use\nscalar coloring, we will use a texture. When rendering multiblock\ndatasets, if any 2 blocks provide different lookup tables for the\nscalars, then also we cannot use textures. This case can be\nhandled if required.\n"},
  {"ClearColorArrays", PyvtkMapper_ClearColorArrays, METH_VARARGS,
   "V.ClearColorArrays()\nC++: void ClearColorArrays()\n\nCall to force a rebuild of color result arrays on next\nMapScalars. Necessary when using arrays in the case of multiblock\ndata.\n"},
  {"GetColorMapColors", PyvtkMapper_GetColorMapColors, METH_VARARGS,
   "V.GetColorMapColors() -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetColorMapColors()\n\nProvide read access to the color array\n"},
  {"GetColorCoordinates", PyvtkMapper_GetColorCoordinates, METH_VARARGS,
   "V.GetColorCoordinates() -> vtkFloatArray\nC++: vtkFloatArray *GetColorCoordinates()\n\nProvide read access to the color texture coordinate array\n"},
  {"GetColorTextureMap", PyvtkMapper_GetColorTextureMap, METH_VARARGS,
   "V.GetColorTextureMap() -> vtkImageData\nC++: vtkImageData *GetColorTextureMap()\n\nProvide read access to the color texture array\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkMapper", // tp_name
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
  PyvtkMapper_Doc, // tp_doc
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

PyObject *PyvtkMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMapper_Type, PyvtkMapper_Methods,
    "vtkMapper",
 nullptr);

  PyTypeObject *pytype = &PyvtkMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractMapper3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMapper", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 9; c++)
  {
    static const struct { const char *name; int value; }
      constants[9] = {
        { "VTK_RESOLVE_OFF", 0 },
        { "VTK_RESOLVE_POLYGON_OFFSET", 1 },
        { "VTK_RESOLVE_SHIFT_ZBUFFER", 2 },
        { "VTK_GET_ARRAY_BY_ID", 0 },
        { "VTK_GET_ARRAY_BY_NAME", 1 },
        { "VTK_MATERIALMODE_DEFAULT", 0 },
        { "VTK_MATERIALMODE_AMBIENT", 1 },
        { "VTK_MATERIALMODE_DIFFUSE", 2 },
        { "VTK_MATERIALMODE_AMBIENT_AND_DIFFUSE", 3 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

