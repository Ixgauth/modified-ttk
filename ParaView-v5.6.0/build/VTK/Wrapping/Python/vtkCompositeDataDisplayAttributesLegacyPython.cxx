// python wrapper for vtkCompositeDataDisplayAttributesLegacy
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
#include "vtkColor.h"
#include "vtkCompositeDataDisplayAttributesLegacy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositeDataDisplayAttributesLegacy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCompositeDataDisplayAttributesLegacy_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCompositeDataDisplayAttributesLegacy_Doc =
  "vtkCompositeDataDisplayAttributesLegacy - rendering attributes for a\nmulti-block dataset.\n\n"
  "Superclass: vtkObject\n\n"
  "The vtkCompositeDataDisplayAttributesLegacy class stores display\n"
  "attributes for individual blocks in a multi-block dataset. Attributes\n"
  "are mapped to blocks through their flat-index; This is the mechanism\n"
  "used in legacy OpenGL classes.\n\n";


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositeDataDisplayAttributesLegacy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeDataDisplayAttributesLegacy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositeDataDisplayAttributesLegacy *tempr = vtkCompositeDataDisplayAttributesLegacy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataDisplayAttributesLegacy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeDataDisplayAttributesLegacy::NewInstance());

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
PyvtkCompositeDataDisplayAttributesLegacy_HasBlockVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockVisibilities() :
      op->vtkCompositeDataDisplayAttributesLegacy::HasBlockVisibilities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_SetBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

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
      op->vtkCompositeDataDisplayAttributesLegacy::SetBlockVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_GetBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBlockVisibility(temp0) :
      op->vtkCompositeDataDisplayAttributesLegacy::GetBlockVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_HasBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockVisibility(temp0) :
      op->vtkCompositeDataDisplayAttributesLegacy::HasBlockVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_RemoveBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

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
      op->vtkCompositeDataDisplayAttributesLegacy::RemoveBlockVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_RemoveBlockVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockVisibilities();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributesLegacy::RemoveBlockVisibilities();
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
PyvtkCompositeDataDisplayAttributesLegacy_RemoveBlockVisibilites(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibilites");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockVisibilites();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributesLegacy::RemoveBlockVisibilites();
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
PyvtkCompositeDataDisplayAttributesLegacy_HasBlockPickabilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockPickabilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockPickabilities() :
      op->vtkCompositeDataDisplayAttributesLegacy::HasBlockPickabilities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_SetBlockPickability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockPickability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockPickability(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributesLegacy::SetBlockPickability(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_GetBlockPickability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockPickability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBlockPickability(temp0) :
      op->vtkCompositeDataDisplayAttributesLegacy::GetBlockPickability(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_HasBlockPickability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockPickability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockPickability(temp0) :
      op->vtkCompositeDataDisplayAttributesLegacy::HasBlockPickability(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_RemoveBlockPickability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockPickability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockPickability(temp0);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributesLegacy::RemoveBlockPickability(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_RemoveBlockPickabilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockPickabilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockPickabilities();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributesLegacy::RemoveBlockPickabilities();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_SetBlockColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

  unsigned int temp0;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetBlockColor(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributesLegacy::SetBlockColor(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_GetBlockColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

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
      op->GetBlockColor(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributesLegacy::GetBlockColor(temp0, temp1);
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
PyvtkCompositeDataDisplayAttributesLegacy_GetBlockColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor3d tempr = (ap.IsBound() ?
      op->GetBlockColor(temp0) :
      op->vtkCompositeDataDisplayAttributesLegacy::GetBlockColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3d");
    }
  }

  return result;
}

static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_GetBlockColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCompositeDataDisplayAttributesLegacy_GetBlockColor_s1(self, args);
    case 1:
      return PyvtkCompositeDataDisplayAttributesLegacy_GetBlockColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBlockColor");
  return nullptr;
}



static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_HasBlockColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockColors() :
      op->vtkCompositeDataDisplayAttributesLegacy::HasBlockColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_HasBlockColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockColor(temp0) :
      op->vtkCompositeDataDisplayAttributesLegacy::HasBlockColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_RemoveBlockColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

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
      op->vtkCompositeDataDisplayAttributesLegacy::RemoveBlockColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_RemoveBlockColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockColors();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributesLegacy::RemoveBlockColors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_SetBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

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
      op->vtkCompositeDataDisplayAttributesLegacy::SetBlockOpacity(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_GetBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBlockOpacity(temp0) :
      op->vtkCompositeDataDisplayAttributesLegacy::GetBlockOpacity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_HasBlockOpacities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockOpacities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockOpacities() :
      op->vtkCompositeDataDisplayAttributesLegacy::HasBlockOpacities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_HasBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockOpacity(temp0) :
      op->vtkCompositeDataDisplayAttributesLegacy::HasBlockOpacity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_RemoveBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

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
      op->vtkCompositeDataDisplayAttributesLegacy::RemoveBlockOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_RemoveBlockOpacities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockOpacities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributesLegacy *op = static_cast<vtkCompositeDataDisplayAttributesLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockOpacities();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributesLegacy::RemoveBlockOpacities();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributesLegacy_ComputeVisibleBounds(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeVisibleBounds");

  vtkCompositeDataDisplayAttributesLegacy *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  const size_t size2 = 6;
  double temp2[6];
  double save2[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataDisplayAttributesLegacy") &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    vtkCompositeDataDisplayAttributesLegacy::ComputeVisibleBounds(temp0, temp1, temp2);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeDataDisplayAttributesLegacy_Methods[] = {
  {"IsTypeOf", PyvtkCompositeDataDisplayAttributesLegacy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositeDataDisplayAttributesLegacy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositeDataDisplayAttributesLegacy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkCompositeDataDisplayAttributesLegacy\nC++: static vtkCompositeDataDisplayAttributesLegacy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositeDataDisplayAttributesLegacy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCompositeDataDisplayAttributesLegacy\nC++: vtkCompositeDataDisplayAttributesLegacy *NewInstance()\n\n"},
  {"HasBlockVisibilities", PyvtkCompositeDataDisplayAttributesLegacy_HasBlockVisibilities, METH_VARARGS,
   "V.HasBlockVisibilities() -> bool\nC++: bool HasBlockVisibilities()\n\nReturns true if any block has any block visibility is set.\n"},
  {"SetBlockVisibility", PyvtkCompositeDataDisplayAttributesLegacy_SetBlockVisibility, METH_VARARGS,
   "V.SetBlockVisibility(int, bool)\nC++: void SetBlockVisibility(unsigned int flat_index,\n    bool visible)\n\nSet/get the visibility for the block with flat_index.\n"},
  {"GetBlockVisibility", PyvtkCompositeDataDisplayAttributesLegacy_GetBlockVisibility, METH_VARARGS,
   "V.GetBlockVisibility(int) -> bool\nC++: bool GetBlockVisibility(unsigned int flat_index)\n\nSet/get the visibility for the block with flat_index.\n"},
  {"HasBlockVisibility", PyvtkCompositeDataDisplayAttributesLegacy_HasBlockVisibility, METH_VARARGS,
   "V.HasBlockVisibility(int) -> bool\nC++: bool HasBlockVisibility(unsigned int flat_index)\n\nReturns true if the block with the given flat_index has a\nvisibility set.\n"},
  {"RemoveBlockVisibility", PyvtkCompositeDataDisplayAttributesLegacy_RemoveBlockVisibility, METH_VARARGS,
   "V.RemoveBlockVisibility(int)\nC++: void RemoveBlockVisibility(unsigned int flat_index)\n\nRemoves the block visibility flag for the block with flat_index.\n"},
  {"RemoveBlockVisibilities", PyvtkCompositeDataDisplayAttributesLegacy_RemoveBlockVisibilities, METH_VARARGS,
   "V.RemoveBlockVisibilities()\nC++: void RemoveBlockVisibilities()\n\nRemoves all block visibility flags. The effectively sets the\nvisibility for all blocks to true.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {"RemoveBlockVisibilites", PyvtkCompositeDataDisplayAttributesLegacy_RemoveBlockVisibilites, METH_VARARGS,
   "V.RemoveBlockVisibilites()\nC++: void RemoveBlockVisibilites()\n\n"},
#endif
  {"HasBlockPickabilities", PyvtkCompositeDataDisplayAttributesLegacy_HasBlockPickabilities, METH_VARARGS,
   "V.HasBlockPickabilities() -> bool\nC++: bool HasBlockPickabilities()\n\nReturns true if any block has any block visibility is set.\n"},
  {"SetBlockPickability", PyvtkCompositeDataDisplayAttributesLegacy_SetBlockPickability, METH_VARARGS,
   "V.SetBlockPickability(int, bool)\nC++: void SetBlockPickability(unsigned int flat_index,\n    bool visible)\n\nSet/get the visibility for the block with flat_index.\n"},
  {"GetBlockPickability", PyvtkCompositeDataDisplayAttributesLegacy_GetBlockPickability, METH_VARARGS,
   "V.GetBlockPickability(int) -> bool\nC++: bool GetBlockPickability(unsigned int flat_index)\n\nSet/get the visibility for the block with flat_index.\n"},
  {"HasBlockPickability", PyvtkCompositeDataDisplayAttributesLegacy_HasBlockPickability, METH_VARARGS,
   "V.HasBlockPickability(int) -> bool\nC++: bool HasBlockPickability(unsigned int flat_index)\n\nReturns true if the block with the given flat_index has a\nvisibility set.\n"},
  {"RemoveBlockPickability", PyvtkCompositeDataDisplayAttributesLegacy_RemoveBlockPickability, METH_VARARGS,
   "V.RemoveBlockPickability(int)\nC++: void RemoveBlockPickability(unsigned int flat_index)\n\nRemoves the block visibility flag for the block with flat_index.\n"},
  {"RemoveBlockPickabilities", PyvtkCompositeDataDisplayAttributesLegacy_RemoveBlockPickabilities, METH_VARARGS,
   "V.RemoveBlockPickabilities()\nC++: void RemoveBlockPickabilities()\n\nRemoves all block visibility flags. The effectively sets the\nvisibility for all blocks to true.\n"},
  {"SetBlockColor", PyvtkCompositeDataDisplayAttributesLegacy_SetBlockColor, METH_VARARGS,
   "V.SetBlockColor(int, (float, float, float))\nC++: void SetBlockColor(unsigned int flat_index,\n    const double color[3])\n\nSet/get the color for the block with flat_index.\n"},
  {"GetBlockColor", PyvtkCompositeDataDisplayAttributesLegacy_GetBlockColor, METH_VARARGS,
   "V.GetBlockColor(int, [float, float, float])\nC++: void GetBlockColor(unsigned int flat_index, double color[3])\nV.GetBlockColor(int) -> vtkColor3d\nC++: vtkColor3d GetBlockColor(unsigned int flat_index)\n\nSet/get the color for the block with flat_index.\n"},
  {"HasBlockColors", PyvtkCompositeDataDisplayAttributesLegacy_HasBlockColors, METH_VARARGS,
   "V.HasBlockColors() -> bool\nC++: bool HasBlockColors()\n\nReturns true if any block has any block color is set.\n"},
  {"HasBlockColor", PyvtkCompositeDataDisplayAttributesLegacy_HasBlockColor, METH_VARARGS,
   "V.HasBlockColor(int) -> bool\nC++: bool HasBlockColor(unsigned int flat_index)\n\nReturns true if the block with the given flat_index has a color.\n"},
  {"RemoveBlockColor", PyvtkCompositeDataDisplayAttributesLegacy_RemoveBlockColor, METH_VARARGS,
   "V.RemoveBlockColor(int)\nC++: void RemoveBlockColor(unsigned int flat_index)\n\nRemoves the block color for the block with flat_index.\n"},
  {"RemoveBlockColors", PyvtkCompositeDataDisplayAttributesLegacy_RemoveBlockColors, METH_VARARGS,
   "V.RemoveBlockColors()\nC++: void RemoveBlockColors()\n\nRemoves all block colors.\n"},
  {"SetBlockOpacity", PyvtkCompositeDataDisplayAttributesLegacy_SetBlockOpacity, METH_VARARGS,
   "V.SetBlockOpacity(int, float)\nC++: void SetBlockOpacity(unsigned int flat_index, double opacity)\n\nSet/get the opacity for the block with flat_index.\n"},
  {"GetBlockOpacity", PyvtkCompositeDataDisplayAttributesLegacy_GetBlockOpacity, METH_VARARGS,
   "V.GetBlockOpacity(int) -> float\nC++: double GetBlockOpacity(unsigned int flat_index)\n\nSet/get the opacity for the block with flat_index.\n"},
  {"HasBlockOpacities", PyvtkCompositeDataDisplayAttributesLegacy_HasBlockOpacities, METH_VARARGS,
   "V.HasBlockOpacities() -> bool\nC++: bool HasBlockOpacities()\n\nReturns true if any block has an opacity set.\n"},
  {"HasBlockOpacity", PyvtkCompositeDataDisplayAttributesLegacy_HasBlockOpacity, METH_VARARGS,
   "V.HasBlockOpacity(int) -> bool\nC++: bool HasBlockOpacity(unsigned int flat_index)\n\nReturns true if the block with flat_index has an opacity set.\n"},
  {"RemoveBlockOpacity", PyvtkCompositeDataDisplayAttributesLegacy_RemoveBlockOpacity, METH_VARARGS,
   "V.RemoveBlockOpacity(int)\nC++: void RemoveBlockOpacity(unsigned int flat_index)\n\nRemoves the set opacity for the block with flat_index.\n"},
  {"RemoveBlockOpacities", PyvtkCompositeDataDisplayAttributesLegacy_RemoveBlockOpacities, METH_VARARGS,
   "V.RemoveBlockOpacities()\nC++: void RemoveBlockOpacities()\n\nRemoves all block opacities.\n"},
  {"ComputeVisibleBounds", PyvtkCompositeDataDisplayAttributesLegacy_ComputeVisibleBounds, METH_VARARGS,
   "V.ComputeVisibleBounds(vtkCompositeDataDisplayAttributesLegacy,\n    vtkDataObject, [float, float, float, float, float, float])\nC++: static void ComputeVisibleBounds(\n    vtkCompositeDataDisplayAttributesLegacy *cda,\n    vtkDataObject *dobj, double bounds[6])\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCompositeDataDisplayAttributesLegacy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkCompositeDataDisplayAttributesLegacy", // tp_name
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
  PyvtkCompositeDataDisplayAttributesLegacy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositeDataDisplayAttributesLegacy_StaticNew()
{
  return vtkCompositeDataDisplayAttributesLegacy::New();
}

PyObject *PyvtkCompositeDataDisplayAttributesLegacy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCompositeDataDisplayAttributesLegacy_Type, PyvtkCompositeDataDisplayAttributesLegacy_Methods,
    "vtkCompositeDataDisplayAttributesLegacy",
 &PyvtkCompositeDataDisplayAttributesLegacy_StaticNew);

  PyTypeObject *pytype = &PyvtkCompositeDataDisplayAttributesLegacy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompositeDataDisplayAttributesLegacy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositeDataDisplayAttributesLegacy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeDataDisplayAttributesLegacy", o) != 0)
  {
    Py_DECREF(o);
  }

}

