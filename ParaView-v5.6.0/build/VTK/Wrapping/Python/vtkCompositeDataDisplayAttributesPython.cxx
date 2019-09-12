// python wrapper for vtkCompositeDataDisplayAttributes
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
#include "vtkStdString.h"
#include "vtkCompositeDataDisplayAttributes.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositeDataDisplayAttributes(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCompositeDataDisplayAttributes_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCompositeDataDisplayAttributes_Doc =
  "vtkCompositeDataDisplayAttributes - Rendering attributes for a\nmulti-block dataset.\n\n"
  "Superclass: vtkObject\n\n"
  "The vtkCompositeDataDisplayAttributes class stores display attributes\n"
  "for individual blocks in a multi-block dataset. It uses the actual\n"
  "data block's pointer as a key (vtkDataObject*).\n\n"
  "@warning It is considered unsafe to dereference key pointers at any\n"
  "    time,\n"
  "they should only serve as keys to access the internal map.\n\n";


static PyObject *
PyvtkCompositeDataDisplayAttributes_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositeDataDisplayAttributes::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeDataDisplayAttributes::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositeDataDisplayAttributes *tempr = vtkCompositeDataDisplayAttributes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataDisplayAttributes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeDataDisplayAttributes::NewInstance());

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
PyvtkCompositeDataDisplayAttributes_HasBlockVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockVisibilities() :
      op->vtkCompositeDataDisplayAttributes::HasBlockVisibilities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockVisibility(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::SetBlockVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBlockVisibility(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetBlockVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockVisibility(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockVisibility(temp0);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockVisibilities();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockVisibilities();
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
PyvtkCompositeDataDisplayAttributes_RemoveBlockVisibilites(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibilites");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockVisibilites();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockVisibilites();
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
PyvtkCompositeDataDisplayAttributes_HasBlockPickabilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockPickabilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockPickabilities() :
      op->vtkCompositeDataDisplayAttributes::HasBlockPickabilities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockPickability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockPickability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockPickability(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::SetBlockPickability(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockPickability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockPickability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBlockPickability(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetBlockPickability(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockPickability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockPickability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockPickability(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockPickability(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockPickability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockPickability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockPickability(temp0);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockPickability(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockPickabilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockPickabilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockPickabilities();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockPickabilities();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetBlockColor(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::SetBlockColor(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetBlockColor(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::GetBlockColor(temp0, temp1);
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
PyvtkCompositeDataDisplayAttributes_GetBlockColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    vtkColor3d tempr = (ap.IsBound() ?
      op->GetBlockColor(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetBlockColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3d");
    }
  }

  return result;
}

static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCompositeDataDisplayAttributes_GetBlockColor_s1(self, args);
    case 1:
      return PyvtkCompositeDataDisplayAttributes_GetBlockColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBlockColor");
  return nullptr;
}



static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockColors() :
      op->vtkCompositeDataDisplayAttributes::HasBlockColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockColor(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockColor(temp0);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockColors();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockColors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockOpacity(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::SetBlockOpacity(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    double tempr = (ap.IsBound() ?
      op->GetBlockOpacity(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetBlockOpacity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockOpacities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockOpacities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockOpacities() :
      op->vtkCompositeDataDisplayAttributes::HasBlockOpacities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockOpacity(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockOpacity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockOpacity(temp0);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockOpacities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockOpacities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockOpacities();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockOpacities();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockMaterial(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::SetBlockMaterial(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetBlockMaterial(temp0) :
      &op->vtkCompositeDataDisplayAttributes::GetBlockMaterial(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockMaterials(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockMaterials");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockMaterials() :
      op->vtkCompositeDataDisplayAttributes::HasBlockMaterials());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockMaterial(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockMaterial(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockMaterial(temp0);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockMaterial(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockMaterials(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockMaterials");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockMaterials();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockMaterials();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_ComputeVisibleBounds(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeVisibleBounds");

  vtkCompositeDataDisplayAttributes *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  const size_t size2 = 6;
  double temp2[6];
  double save2[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataDisplayAttributes") &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    vtkCompositeDataDisplayAttributes::ComputeVisibleBounds(temp0, temp1, temp2);

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


static PyObject *
PyvtkCompositeDataDisplayAttributes_DataObjectFromIndex(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DataObjectFromIndex");

  unsigned int temp0;
  vtkDataObject *temp1 = nullptr;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetValue(temp2))
  {
    vtkDataObject *tempr = vtkCompositeDataDisplayAttributes::DataObjectFromIndex(temp0, temp1, temp2);

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

static PyMethodDef PyvtkCompositeDataDisplayAttributes_Methods[] = {
  {"IsTypeOf", PyvtkCompositeDataDisplayAttributes_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositeDataDisplayAttributes_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositeDataDisplayAttributes_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCompositeDataDisplayAttributes\nC++: static vtkCompositeDataDisplayAttributes *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositeDataDisplayAttributes_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCompositeDataDisplayAttributes\nC++: vtkCompositeDataDisplayAttributes *NewInstance()\n\n"},
  {"HasBlockVisibilities", PyvtkCompositeDataDisplayAttributes_HasBlockVisibilities, METH_VARARGS,
   "V.HasBlockVisibilities() -> bool\nC++: bool HasBlockVisibilities()\n\nReturns true if any block has any block visibility is set.\n"},
  {"SetBlockVisibility", PyvtkCompositeDataDisplayAttributes_SetBlockVisibility, METH_VARARGS,
   "V.SetBlockVisibility(vtkDataObject, bool)\nC++: void SetBlockVisibility(vtkDataObject *data_object,\n    bool visible)\n\nSet/get the visibility for the block with data_object.\n"},
  {"GetBlockVisibility", PyvtkCompositeDataDisplayAttributes_GetBlockVisibility, METH_VARARGS,
   "V.GetBlockVisibility(vtkDataObject) -> bool\nC++: bool GetBlockVisibility(vtkDataObject *data_object)\n\nSet/get the visibility for the block with data_object.\n"},
  {"HasBlockVisibility", PyvtkCompositeDataDisplayAttributes_HasBlockVisibility, METH_VARARGS,
   "V.HasBlockVisibility(vtkDataObject) -> bool\nC++: bool HasBlockVisibility(vtkDataObject *data_object)\n\nReturns true if the block with the given data_object has a\nvisibility set.\n"},
  {"RemoveBlockVisibility", PyvtkCompositeDataDisplayAttributes_RemoveBlockVisibility, METH_VARARGS,
   "V.RemoveBlockVisibility(vtkDataObject)\nC++: void RemoveBlockVisibility(vtkDataObject *data_object)\n\nRemoves the block visibility flag for the block with data_object.\n"},
  {"RemoveBlockVisibilities", PyvtkCompositeDataDisplayAttributes_RemoveBlockVisibilities, METH_VARARGS,
   "V.RemoveBlockVisibilities()\nC++: void RemoveBlockVisibilities()\n\nRemoves all block visibility flags. This effectively sets the\nvisibility for all blocks to true.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {"RemoveBlockVisibilites", PyvtkCompositeDataDisplayAttributes_RemoveBlockVisibilites, METH_VARARGS,
   "V.RemoveBlockVisibilites()\nC++: void RemoveBlockVisibilites()\n\n"},
#endif
  {"HasBlockPickabilities", PyvtkCompositeDataDisplayAttributes_HasBlockPickabilities, METH_VARARGS,
   "V.HasBlockPickabilities() -> bool\nC++: bool HasBlockPickabilities()\n\nReturns true if any block has any block pickability is set.\n"},
  {"SetBlockPickability", PyvtkCompositeDataDisplayAttributes_SetBlockPickability, METH_VARARGS,
   "V.SetBlockPickability(vtkDataObject, bool)\nC++: void SetBlockPickability(vtkDataObject *data_object,\n    bool visible)\n\nSet/get the pickability for the block with data_object.\n"},
  {"GetBlockPickability", PyvtkCompositeDataDisplayAttributes_GetBlockPickability, METH_VARARGS,
   "V.GetBlockPickability(vtkDataObject) -> bool\nC++: bool GetBlockPickability(vtkDataObject *data_object)\n\nSet/get the pickability for the block with data_object.\n"},
  {"HasBlockPickability", PyvtkCompositeDataDisplayAttributes_HasBlockPickability, METH_VARARGS,
   "V.HasBlockPickability(vtkDataObject) -> bool\nC++: bool HasBlockPickability(vtkDataObject *data_object)\n\nReturns true if the block with the given data_object has a\npickability set.\n"},
  {"RemoveBlockPickability", PyvtkCompositeDataDisplayAttributes_RemoveBlockPickability, METH_VARARGS,
   "V.RemoveBlockPickability(vtkDataObject)\nC++: void RemoveBlockPickability(vtkDataObject *data_object)\n\nRemoves the block pickability flag for the block with\ndata_object.\n"},
  {"RemoveBlockPickabilities", PyvtkCompositeDataDisplayAttributes_RemoveBlockPickabilities, METH_VARARGS,
   "V.RemoveBlockPickabilities()\nC++: void RemoveBlockPickabilities()\n\nRemoves all block pickability flags. This effectively sets the\npickability for all blocks to true.\n"},
  {"SetBlockColor", PyvtkCompositeDataDisplayAttributes_SetBlockColor, METH_VARARGS,
   "V.SetBlockColor(vtkDataObject, (float, float, float))\nC++: void SetBlockColor(vtkDataObject *data_object,\n    const double color[3])\n\nSet/get the color for the block with data_object.\n"},
  {"GetBlockColor", PyvtkCompositeDataDisplayAttributes_GetBlockColor, METH_VARARGS,
   "V.GetBlockColor(vtkDataObject, [float, float, float])\nC++: void GetBlockColor(vtkDataObject *data_object,\n    double color[3])\nV.GetBlockColor(vtkDataObject) -> vtkColor3d\nC++: vtkColor3d GetBlockColor(vtkDataObject *data_object)\n\nSet/get the color for the block with data_object.\n"},
  {"HasBlockColors", PyvtkCompositeDataDisplayAttributes_HasBlockColors, METH_VARARGS,
   "V.HasBlockColors() -> bool\nC++: bool HasBlockColors()\n\nReturns true if any block has any block color is set.\n"},
  {"HasBlockColor", PyvtkCompositeDataDisplayAttributes_HasBlockColor, METH_VARARGS,
   "V.HasBlockColor(vtkDataObject) -> bool\nC++: bool HasBlockColor(vtkDataObject *data_object)\n\nReturns true if the block with the given data_object has a color.\n"},
  {"RemoveBlockColor", PyvtkCompositeDataDisplayAttributes_RemoveBlockColor, METH_VARARGS,
   "V.RemoveBlockColor(vtkDataObject)\nC++: void RemoveBlockColor(vtkDataObject *data_object)\n\nRemoves the block color for the block with data_object.\n"},
  {"RemoveBlockColors", PyvtkCompositeDataDisplayAttributes_RemoveBlockColors, METH_VARARGS,
   "V.RemoveBlockColors()\nC++: void RemoveBlockColors()\n\nRemoves all block colors.\n"},
  {"SetBlockOpacity", PyvtkCompositeDataDisplayAttributes_SetBlockOpacity, METH_VARARGS,
   "V.SetBlockOpacity(vtkDataObject, float)\nC++: void SetBlockOpacity(vtkDataObject *data_object,\n    double opacity)\n\nSet/get the opacity for the block with data_object.\n"},
  {"GetBlockOpacity", PyvtkCompositeDataDisplayAttributes_GetBlockOpacity, METH_VARARGS,
   "V.GetBlockOpacity(vtkDataObject) -> float\nC++: double GetBlockOpacity(vtkDataObject *data_object)\n\nSet/get the opacity for the block with data_object.\n"},
  {"HasBlockOpacities", PyvtkCompositeDataDisplayAttributes_HasBlockOpacities, METH_VARARGS,
   "V.HasBlockOpacities() -> bool\nC++: bool HasBlockOpacities()\n\nReturns true if any block has an opacity set.\n"},
  {"HasBlockOpacity", PyvtkCompositeDataDisplayAttributes_HasBlockOpacity, METH_VARARGS,
   "V.HasBlockOpacity(vtkDataObject) -> bool\nC++: bool HasBlockOpacity(vtkDataObject *data_object)\n\nReturns true if the block with data_object has an opacity set.\n"},
  {"RemoveBlockOpacity", PyvtkCompositeDataDisplayAttributes_RemoveBlockOpacity, METH_VARARGS,
   "V.RemoveBlockOpacity(vtkDataObject)\nC++: void RemoveBlockOpacity(vtkDataObject *data_object)\n\nRemoves the set opacity for the block with data_object.\n"},
  {"RemoveBlockOpacities", PyvtkCompositeDataDisplayAttributes_RemoveBlockOpacities, METH_VARARGS,
   "V.RemoveBlockOpacities()\nC++: void RemoveBlockOpacities()\n\nRemoves all block opacities.\n"},
  {"SetBlockMaterial", PyvtkCompositeDataDisplayAttributes_SetBlockMaterial, METH_VARARGS,
   "V.SetBlockMaterial(vtkDataObject, string)\nC++: void SetBlockMaterial(vtkDataObject *data_object,\n    const std::string &material)\n\nSet/get the material for the block with data_object. Only\nrendering backends that support advanced materials need to\nrespect these.\n"},
  {"GetBlockMaterial", PyvtkCompositeDataDisplayAttributes_GetBlockMaterial, METH_VARARGS,
   "V.GetBlockMaterial(vtkDataObject) -> string\nC++: const std::string &GetBlockMaterial(\n    vtkDataObject *data_object)\n\nSet/get the material for the block with data_object. Only\nrendering backends that support advanced materials need to\nrespect these.\n"},
  {"HasBlockMaterials", PyvtkCompositeDataDisplayAttributes_HasBlockMaterials, METH_VARARGS,
   "V.HasBlockMaterials() -> bool\nC++: bool HasBlockMaterials()\n\nReturns true if any block has an material set.\n"},
  {"HasBlockMaterial", PyvtkCompositeDataDisplayAttributes_HasBlockMaterial, METH_VARARGS,
   "V.HasBlockMaterial(vtkDataObject) -> bool\nC++: bool HasBlockMaterial(vtkDataObject *data_object)\n\nReturns true if the block with data_object has an material set.\n"},
  {"RemoveBlockMaterial", PyvtkCompositeDataDisplayAttributes_RemoveBlockMaterial, METH_VARARGS,
   "V.RemoveBlockMaterial(vtkDataObject)\nC++: void RemoveBlockMaterial(vtkDataObject *data_object)\n\nRemoves the set material for the block with data_object.\n"},
  {"RemoveBlockMaterials", PyvtkCompositeDataDisplayAttributes_RemoveBlockMaterials, METH_VARARGS,
   "V.RemoveBlockMaterials()\nC++: void RemoveBlockMaterials()\n\nRemoves all block materialss.\n"},
  {"ComputeVisibleBounds", PyvtkCompositeDataDisplayAttributes_ComputeVisibleBounds, METH_VARARGS,
   "V.ComputeVisibleBounds(vtkCompositeDataDisplayAttributes,\n    vtkDataObject, [float, float, float, float, float, float])\nC++: static void ComputeVisibleBounds(\n    vtkCompositeDataDisplayAttributes *cda, vtkDataObject *dobj,\n    double bounds[6])\n\nIf the input dobj is a vtkCompositeDataSet, we will loop over the\nhierarchy recursively starting from initial index 0 and use only\nvisible blocks, which is specified in the\nvtkCompositeDataDisplayAttributes cda, to compute the bounds.\n"},
  {"DataObjectFromIndex", PyvtkCompositeDataDisplayAttributes_DataObjectFromIndex, METH_VARARGS,
   "V.DataObjectFromIndex(int, vtkDataObject, int) -> vtkDataObject\nC++: static vtkDataObject *DataObjectFromIndex(\n    const unsigned int flat_index, vtkDataObject *parent_obj,\n    unsigned int &current_flat_index)\n\nGet the DataObject corresponding to the node with index\nflat_index under parent_obj. Traverses the entire hierarchy\nrecursively.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCompositeDataDisplayAttributes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkCompositeDataDisplayAttributes", // tp_name
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
  PyvtkCompositeDataDisplayAttributes_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositeDataDisplayAttributes_StaticNew()
{
  return vtkCompositeDataDisplayAttributes::New();
}

PyObject *PyvtkCompositeDataDisplayAttributes_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCompositeDataDisplayAttributes_Type, PyvtkCompositeDataDisplayAttributes_Methods,
    "vtkCompositeDataDisplayAttributes",
 &PyvtkCompositeDataDisplayAttributes_StaticNew);

  PyTypeObject *pytype = &PyvtkCompositeDataDisplayAttributes_Type;

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

void PyVTKAddFile_vtkCompositeDataDisplayAttributes(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositeDataDisplayAttributes_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeDataDisplayAttributes", o) != 0)
  {
    Py_DECREF(o);
  }

}

