// python wrapper for vtkCompositePolyDataMapper2
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
#include "vtkCompositePolyDataMapper2.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositePolyDataMapper2(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCompositePolyDataMapper2_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLPolyDataMapper_ClassNew
extern "C" { PyObject *PyvtkOpenGLPolyDataMapper_ClassNew(); }
#define DECLARED_PyvtkOpenGLPolyDataMapper_ClassNew
#endif

static const char *PyvtkCompositePolyDataMapper2_Doc =
  "vtkCompositePolyDataMapper2 - mapper for composite dataset consisting\nof polygonal data.\n\n"
  "Superclass: vtkOpenGLPolyDataMapper\n\n"
  "vtkCompositePolyDataMapper2 is similar to vtkCompositePolyDataMapper\n"
  "except that instead of creating individual mapper for each block in\n"
  "the composite dataset, it iterates over the blocks internally.\n\n";


static PyObject *
PyvtkCompositePolyDataMapper2_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositePolyDataMapper2::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositePolyDataMapper2::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositePolyDataMapper2 *tempr = vtkCompositePolyDataMapper2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositePolyDataMapper2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositePolyDataMapper2::NewInstance());

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
PyvtkCompositePolyDataMapper2_GetIsOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsOpaque() :
      op->vtkCompositePolyDataMapper2::GetIsOpaque());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_SetCompositeDataDisplayAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeDataDisplayAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  vtkCompositeDataDisplayAttributes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataDisplayAttributes"))
  {
    if (ap.IsBound())
    {
      op->SetCompositeDataDisplayAttributes(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::SetCompositeDataDisplayAttributes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_GetCompositeDataDisplayAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeDataDisplayAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataDisplayAttributes *tempr = (ap.IsBound() ?
      op->GetCompositeDataDisplayAttributes() :
      op->vtkCompositePolyDataMapper2::GetCompositeDataDisplayAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_SetBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockVisibility(temp0, temp1);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::SetBlockVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_GetBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBlockVisibility(temp0) :
      op->vtkCompositePolyDataMapper2::GetBlockVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_RemoveBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockVisibility(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::RemoveBlockVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_RemoveBlockVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockVisibilities();
    }
    else
    {
      op->vtkCompositePolyDataMapper2::RemoveBlockVisibilities();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkCompositePolyDataMapper2_RemoveBlockVisibilites(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibilites");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockVisibilites();
    }
    else
    {
      op->vtkCompositePolyDataMapper2::RemoveBlockVisibilites();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif


static PyObject *
PyvtkCompositePolyDataMapper2_SetBlockColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetBlockColor(temp0, temp1);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::SetBlockColor(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositePolyDataMapper2_SetBlockColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetBlockColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::SetBlockColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositePolyDataMapper2_SetBlockColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCompositePolyDataMapper2_SetBlockColor_s1(self, args);
    case 4:
      return PyvtkCompositePolyDataMapper2_SetBlockColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBlockColor");
  return nullptr;
}



static PyObject *
PyvtkCompositePolyDataMapper2_GetBlockColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBlockColor(temp0) :
      op->vtkCompositePolyDataMapper2::GetBlockColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_RemoveBlockColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockColor(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::RemoveBlockColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_RemoveBlockColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockColors();
    }
    else
    {
      op->vtkCompositePolyDataMapper2::RemoveBlockColors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_SetBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockOpacity(temp0, temp1);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::SetBlockOpacity(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_GetBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBlockOpacity(temp0) :
      op->vtkCompositePolyDataMapper2::GetBlockOpacity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_RemoveBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockOpacity(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::RemoveBlockOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_RemoveBlockOpacities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockOpacities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockOpacities();
    }
    else
    {
      op->vtkCompositePolyDataMapper2::RemoveBlockOpacities();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_SetColorMissingArraysWithNanColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMissingArraysWithNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorMissingArraysWithNanColor(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::SetColorMissingArraysWithNanColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_GetColorMissingArraysWithNanColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMissingArraysWithNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorMissingArraysWithNanColor() :
      op->vtkCompositePolyDataMapper2::GetColorMissingArraysWithNanColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_ColorMissingArraysWithNanColorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorMissingArraysWithNanColorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorMissingArraysWithNanColorOn();
    }
    else
    {
      op->vtkCompositePolyDataMapper2::ColorMissingArraysWithNanColorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_ColorMissingArraysWithNanColorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorMissingArraysWithNanColorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorMissingArraysWithNanColorOff();
    }
    else
    {
      op->vtkCompositePolyDataMapper2::ColorMissingArraysWithNanColorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

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
      op->vtkCompositePolyDataMapper2::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

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
      op->vtkCompositePolyDataMapper2::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_SetInputArrayToProcess_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositePolyDataMapper2_SetInputArrayToProcess_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositePolyDataMapper2_SetInputArrayToProcess_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::SetInputArrayToProcess(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositePolyDataMapper2_SetInputArrayToProcess_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  int temp0;
  int temp1;
  int temp2;
  const char *temp3 = nullptr;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositePolyDataMapper2_SetInputArrayToProcess_Methods[] = {
  {nullptr, PyvtkCompositePolyDataMapper2_SetInputArrayToProcess_s1, METH_VARARGS,
   "@iiiiz"},
  {nullptr, PyvtkCompositePolyDataMapper2_SetInputArrayToProcess_s2, METH_VARARGS,
   "@iiiii"},
  {nullptr, PyvtkCompositePolyDataMapper2_SetInputArrayToProcess_s4, METH_VARARGS,
   "@iiizz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCompositePolyDataMapper2_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCompositePolyDataMapper2_SetInputArrayToProcess_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCompositePolyDataMapper2_SetInputArrayToProcess_s3(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputArrayToProcess");
  return nullptr;
}


static PyMethodDef PyvtkCompositePolyDataMapper2_Methods[] = {
  {"IsTypeOf", PyvtkCompositePolyDataMapper2_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositePolyDataMapper2_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositePolyDataMapper2_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCompositePolyDataMapper2\nC++: static vtkCompositePolyDataMapper2 *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositePolyDataMapper2_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCompositePolyDataMapper2\nC++: vtkCompositePolyDataMapper2 *NewInstance()\n\n"},
  {"GetIsOpaque", PyvtkCompositePolyDataMapper2_GetIsOpaque, METH_VARARGS,
   "V.GetIsOpaque() -> bool\nC++: bool GetIsOpaque() override;\n\nReturns if the mapper does not expect to have translucent\ngeometry. This may happen when using ScalarMode is set to not map\nscalars i.e. render the scalar array directly as colors and the\nscalar array has opacity i.e. alpha component. Note that even if\nthis method returns true, an actor may treat the geometry as\ntranslucent since a constant translucency is set on the property,\nfor example. Overridden to use the actual data and ScalarMode to\ndetermine if we have opaque geometry.\n"},
  {"SetCompositeDataDisplayAttributes", PyvtkCompositePolyDataMapper2_SetCompositeDataDisplayAttributes, METH_VARARGS,
   "V.SetCompositeDataDisplayAttributes(\n    vtkCompositeDataDisplayAttributes)\nC++: void SetCompositeDataDisplayAttributes(\n    vtkCompositeDataDisplayAttributes *attributes)\n\nSet/get the composite data set attributes.\n"},
  {"GetCompositeDataDisplayAttributes", PyvtkCompositePolyDataMapper2_GetCompositeDataDisplayAttributes, METH_VARARGS,
   "V.GetCompositeDataDisplayAttributes()\n    -> vtkCompositeDataDisplayAttributes\nC++: vtkCompositeDataDisplayAttributes *GetCompositeDataDisplayAttributes(\n    )\n\nSet/get the composite data set attributes.\n"},
  {"SetBlockVisibility", PyvtkCompositePolyDataMapper2_SetBlockVisibility, METH_VARARGS,
   "V.SetBlockVisibility(int, bool)\nC++: void SetBlockVisibility(unsigned int index, bool visible)\n\nSet/get the visibility for a block given its flat index.\n"},
  {"GetBlockVisibility", PyvtkCompositePolyDataMapper2_GetBlockVisibility, METH_VARARGS,
   "V.GetBlockVisibility(int) -> bool\nC++: bool GetBlockVisibility(unsigned int index)\n\nSet/get the visibility for a block given its flat index.\n"},
  {"RemoveBlockVisibility", PyvtkCompositePolyDataMapper2_RemoveBlockVisibility, METH_VARARGS,
   "V.RemoveBlockVisibility(int)\nC++: void RemoveBlockVisibility(unsigned int index)\n\nSet/get the visibility for a block given its flat index.\n"},
  {"RemoveBlockVisibilities", PyvtkCompositePolyDataMapper2_RemoveBlockVisibilities, METH_VARARGS,
   "V.RemoveBlockVisibilities()\nC++: void RemoveBlockVisibilities()\n\nSet/get the visibility for a block given its flat index.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {"RemoveBlockVisibilites", PyvtkCompositePolyDataMapper2_RemoveBlockVisibilites, METH_VARARGS,
   "V.RemoveBlockVisibilites()\nC++: void RemoveBlockVisibilites()\n\n"},
#endif
  {"SetBlockColor", PyvtkCompositePolyDataMapper2_SetBlockColor, METH_VARARGS,
   "V.SetBlockColor(int, [float, float, float])\nC++: void SetBlockColor(unsigned int index, double color[3])\nV.SetBlockColor(int, float, float, float)\nC++: void SetBlockColor(unsigned int index, double r, double g,\n    double b)\n\nSet/get the color for a block given its flat index.\n"},
  {"GetBlockColor", PyvtkCompositePolyDataMapper2_GetBlockColor, METH_VARARGS,
   "V.GetBlockColor(int) -> (float, ...)\nC++: double *GetBlockColor(unsigned int index)\n\nSet/get the color for a block given its flat index.\n"},
  {"RemoveBlockColor", PyvtkCompositePolyDataMapper2_RemoveBlockColor, METH_VARARGS,
   "V.RemoveBlockColor(int)\nC++: void RemoveBlockColor(unsigned int index)\n\nSet/get the color for a block given its flat index.\n"},
  {"RemoveBlockColors", PyvtkCompositePolyDataMapper2_RemoveBlockColors, METH_VARARGS,
   "V.RemoveBlockColors()\nC++: void RemoveBlockColors()\n\nSet/get the color for a block given its flat index.\n"},
  {"SetBlockOpacity", PyvtkCompositePolyDataMapper2_SetBlockOpacity, METH_VARARGS,
   "V.SetBlockOpacity(int, float)\nC++: void SetBlockOpacity(unsigned int index, double opacity)\n\nSet/get the opacity for a block given its flat index.\n"},
  {"GetBlockOpacity", PyvtkCompositePolyDataMapper2_GetBlockOpacity, METH_VARARGS,
   "V.GetBlockOpacity(int) -> float\nC++: double GetBlockOpacity(unsigned int index)\n\nSet/get the opacity for a block given its flat index.\n"},
  {"RemoveBlockOpacity", PyvtkCompositePolyDataMapper2_RemoveBlockOpacity, METH_VARARGS,
   "V.RemoveBlockOpacity(int)\nC++: void RemoveBlockOpacity(unsigned int index)\n\nSet/get the opacity for a block given its flat index.\n"},
  {"RemoveBlockOpacities", PyvtkCompositePolyDataMapper2_RemoveBlockOpacities, METH_VARARGS,
   "V.RemoveBlockOpacities()\nC++: void RemoveBlockOpacities()\n\nSet/get the opacity for a block given its flat index.\n"},
  {"SetColorMissingArraysWithNanColor", PyvtkCompositePolyDataMapper2_SetColorMissingArraysWithNanColor, METH_VARARGS,
   "V.SetColorMissingArraysWithNanColor(bool)\nC++: virtual void SetColorMissingArraysWithNanColor(bool _arg)\n\n"},
  {"GetColorMissingArraysWithNanColor", PyvtkCompositePolyDataMapper2_GetColorMissingArraysWithNanColor, METH_VARARGS,
   "V.GetColorMissingArraysWithNanColor() -> bool\nC++: virtual bool GetColorMissingArraysWithNanColor()\n\n"},
  {"ColorMissingArraysWithNanColorOn", PyvtkCompositePolyDataMapper2_ColorMissingArraysWithNanColorOn, METH_VARARGS,
   "V.ColorMissingArraysWithNanColorOn()\nC++: virtual void ColorMissingArraysWithNanColorOn()\n\n"},
  {"ColorMissingArraysWithNanColorOff", PyvtkCompositePolyDataMapper2_ColorMissingArraysWithNanColorOff, METH_VARARGS,
   "V.ColorMissingArraysWithNanColorOff()\nC++: virtual void ColorMissingArraysWithNanColorOff()\n\n"},
  {"ReleaseGraphicsResources", PyvtkCompositePolyDataMapper2_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"Render", PyvtkCompositePolyDataMapper2_Render, METH_VARARGS,
   "V.Render(vtkRenderer, vtkActor)\nC++: void Render(vtkRenderer *ren, vtkActor *act) override;\n\nThis calls RenderPiece (in a for loop if streaming is necessary).\n"},
  {"SetInputArrayToProcess", PyvtkCompositePolyDataMapper2_SetInputArrayToProcess, METH_VARARGS,
   "V.SetInputArrayToProcess(int, int, int, int, string)\nC++: void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, const char *name)\n    override;\nV.SetInputArrayToProcess(int, int, int, int, int)\nC++: void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, int fieldAttributeType)\n    override;\nV.SetInputArrayToProcess(int, vtkInformation)\nC++: void SetInputArrayToProcess(int idx, vtkInformation *info)\n    override;\nV.SetInputArrayToProcess(int, int, int, string, string)\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, const char *fieldAssociation,\n    const char *attributeTypeorName)\n\nCall SetInputArrayToProcess on helpers.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCompositePolyDataMapper2_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkCompositePolyDataMapper2", // tp_name
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
  PyvtkCompositePolyDataMapper2_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositePolyDataMapper2_StaticNew()
{
  return vtkCompositePolyDataMapper2::New();
}

PyObject *PyvtkCompositePolyDataMapper2_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCompositePolyDataMapper2_Type, PyvtkCompositePolyDataMapper2_Methods,
    "vtkCompositePolyDataMapper2",
 &PyvtkCompositePolyDataMapper2_StaticNew);

  PyTypeObject *pytype = &PyvtkCompositePolyDataMapper2_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLPolyDataMapper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompositePolyDataMapper2(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositePolyDataMapper2_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositePolyDataMapper2", o) != 0)
  {
    Py_DECREF(o);
  }

}

