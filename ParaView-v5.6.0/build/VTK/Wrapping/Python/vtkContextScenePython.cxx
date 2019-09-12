// python wrapper for vtkContextScene
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
#include "vtkContextScene.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContextScene(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkContextScene_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkContextScene_Doc =
  "vtkContextScene - Provides a 2D scene for vtkContextItem objects.\n\n"
  "Superclass: vtkObject\n\n"
  "Provides a 2D scene that vtkContextItem objects can be added to.\n"
  "Manages the items, ensures that they are rendered at the right times\n"
  "and passes on mouse events.\n\n";


static PyObject *
PyvtkContextScene_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkContextScene::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContextScene::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkContextScene *tempr = vtkContextScene::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContextScene *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContextScene::NewInstance());

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
PyvtkContextScene_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkContextScene::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  vtkAbstractContextItem *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractContextItem"))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->AddItem(temp0) :
      op->vtkContextScene::AddItem(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_RemoveItem_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  vtkAbstractContextItem *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractContextItem"))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveItem(temp0) :
      op->vtkContextScene::RemoveItem(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkContextScene_RemoveItem_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveItem(temp0) :
      op->vtkContextScene::RemoveItem(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkContextScene_RemoveItem_Methods[] = {
  {nullptr, PyvtkContextScene_RemoveItem_s1, METH_VARARGS,
   "@V *vtkAbstractContextItem"},
  {nullptr, PyvtkContextScene_RemoveItem_s2, METH_VARARGS,
   "@I"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContextScene_RemoveItem(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContextScene_RemoveItem_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveItem");
  return nullptr;
}



static PyObject *
PyvtkContextScene_GetItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAbstractContextItem *tempr = (ap.IsBound() ?
      op->GetItem(temp0) :
      op->vtkContextScene::GetItem(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_GetNumberOfItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfItems() :
      op->vtkContextScene::GetNumberOfItems());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_ClearItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearItems();
    }
    else
    {
      op->vtkContextScene::ClearItems();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_SetAnnotationLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  vtkAnnotationLink *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnotationLink"))
  {
    if (ap.IsBound())
    {
      op->SetAnnotationLink(temp0);
    }
    else
    {
      op->vtkContextScene::SetAnnotationLink(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_GetAnnotationLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAnnotationLink *tempr = (ap.IsBound() ?
      op->GetAnnotationLink() :
      op->vtkContextScene::GetAnnotationLink());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_SetGeometry_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetGeometry(temp0, temp1);
    }
    else
    {
      op->vtkContextScene::SetGeometry(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContextScene_SetGeometry_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGeometry(temp0);
    }
    else
    {
      op->vtkContextScene::SetGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContextScene_SetGeometry(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkContextScene_SetGeometry_s1(self, args);
    case 1:
      return PyvtkContextScene_SetGeometry_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGeometry");
  return nullptr;
}



static PyObject *
PyvtkContextScene_GetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetGeometry() :
      op->vtkContextScene::GetGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_SetUseBufferId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseBufferId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseBufferId(temp0);
    }
    else
    {
      op->vtkContextScene::SetUseBufferId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_GetUseBufferId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseBufferId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseBufferId() :
      op->vtkContextScene::GetUseBufferId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_GetViewWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetViewWidth() :
      op->vtkContextScene::GetViewWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_GetViewHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetViewHeight() :
      op->vtkContextScene::GetViewHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_GetSceneWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSceneWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSceneWidth() :
      op->vtkContextScene::GetSceneWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_GetSceneHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSceneHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSceneHeight() :
      op->vtkContextScene::GetSceneHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_SetScaleTiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleTiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleTiles(temp0);
    }
    else
    {
      op->vtkContextScene::SetScaleTiles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_GetScaleTiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleTiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScaleTiles() :
      op->vtkContextScene::GetScaleTiles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_ScaleTilesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleTilesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleTilesOn();
    }
    else
    {
      op->vtkContextScene::ScaleTilesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_ScaleTilesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleTilesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleTilesOff();
    }
    else
    {
      op->vtkContextScene::ScaleTilesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_GetLogicalTileScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogicalTileScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2i tempr = (ap.IsBound() ?
      op->GetLogicalTileScale() :
      op->vtkContextScene::GetLogicalTileScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkContextScene::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkContextScene::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_SetDirty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDirty(temp0);
    }
    else
    {
      op->vtkContextScene::SetDirty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_GetDirty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDirty() :
      op->vtkContextScene::GetDirty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources();
    }
    else
    {
      op->vtkContextScene::ReleaseGraphicsResources();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_GetBufferId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBufferId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractContextBufferId *tempr = (ap.IsBound() ?
      op->GetBufferId() :
      op->vtkContextScene::GetBufferId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  vtkTransform2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform2D"))
  {
    if (ap.IsBound())
    {
      op->SetTransform(temp0);
    }
    else
    {
      op->vtkContextScene::SetTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransform2D *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkContextScene::GetTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextScene_HasTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasTransform() :
      op->vtkContextScene::HasTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkContextScene_Methods[] = {
  {"IsTypeOf", PyvtkContextScene_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkContextScene_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkContextScene_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkContextScene\nC++: static vtkContextScene *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkContextScene_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkContextScene\nC++: vtkContextScene *NewInstance()\n\n"},
  {"Paint", PyvtkContextScene_Paint, METH_VARARGS,
   "V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the chart, called whenever the chart needs to be\ndrawn\n"},
  {"AddItem", PyvtkContextScene_AddItem, METH_VARARGS,
   "V.AddItem(vtkAbstractContextItem) -> int\nC++: unsigned int AddItem(vtkAbstractContextItem *item)\n\nAdd child items to this item. Increments reference count of item.\n\\return the index of the child item.\n"},
  {"RemoveItem", PyvtkContextScene_RemoveItem, METH_VARARGS,
   "V.RemoveItem(vtkAbstractContextItem) -> bool\nC++: bool RemoveItem(vtkAbstractContextItem *item)\nV.RemoveItem(int) -> bool\nC++: bool RemoveItem(unsigned int index)\n\nRemove child item from this item. Decrements reference count of\nitem.\n\\param item the item to be removed.\n\\return true on success, false otherwise.\n"},
  {"GetItem", PyvtkContextScene_GetItem, METH_VARARGS,
   "V.GetItem(int) -> vtkAbstractContextItem\nC++: vtkAbstractContextItem *GetItem(unsigned int index)\n\nGet the item at the specified index.\n\\return the item at the specified index (null if index is\n    invalid).\n"},
  {"GetNumberOfItems", PyvtkContextScene_GetNumberOfItems, METH_VARARGS,
   "V.GetNumberOfItems() -> int\nC++: unsigned int GetNumberOfItems()\n\nGet the number of child items.\n"},
  {"ClearItems", PyvtkContextScene_ClearItems, METH_VARARGS,
   "V.ClearItems()\nC++: void ClearItems()\n\nRemove all child items from this item.\n"},
  {"SetAnnotationLink", PyvtkContextScene_SetAnnotationLink, METH_VARARGS,
   "V.SetAnnotationLink(vtkAnnotationLink)\nC++: virtual void SetAnnotationLink(vtkAnnotationLink *link)\n\nSet the vtkAnnotationLink for the chart.\n"},
  {"GetAnnotationLink", PyvtkContextScene_GetAnnotationLink, METH_VARARGS,
   "V.GetAnnotationLink() -> vtkAnnotationLink\nC++: virtual vtkAnnotationLink *GetAnnotationLink()\n\nGet the vtkAnnotationLink for the chart.\n"},
  {"SetGeometry", PyvtkContextScene_SetGeometry, METH_VARARGS,
   "V.SetGeometry(int, int)\nC++: void SetGeometry(int, int)\nV.SetGeometry((int, int))\nC++: void SetGeometry(int a[2])\n\n"},
  {"GetGeometry", PyvtkContextScene_GetGeometry, METH_VARARGS,
   "V.GetGeometry() -> (int, int)\nC++: int *GetGeometry()\n\n"},
  {"SetUseBufferId", PyvtkContextScene_SetUseBufferId, METH_VARARGS,
   "V.SetUseBufferId(bool)\nC++: virtual void SetUseBufferId(bool _arg)\n\nSet whether the scene should use the color buffer. Default is\ntrue.\n"},
  {"GetUseBufferId", PyvtkContextScene_GetUseBufferId, METH_VARARGS,
   "V.GetUseBufferId() -> bool\nC++: virtual bool GetUseBufferId()\n\nGet whether the scene is using the color buffer. Default is true.\n"},
  {"GetViewWidth", PyvtkContextScene_GetViewWidth, METH_VARARGS,
   "V.GetViewWidth() -> int\nC++: virtual int GetViewWidth()\n\nGet the width of the view\n"},
  {"GetViewHeight", PyvtkContextScene_GetViewHeight, METH_VARARGS,
   "V.GetViewHeight() -> int\nC++: virtual int GetViewHeight()\n\nGet the height of the view\n"},
  {"GetSceneWidth", PyvtkContextScene_GetSceneWidth, METH_VARARGS,
   "V.GetSceneWidth() -> int\nC++: int GetSceneWidth()\n\nGet the width of the scene.\n"},
  {"GetSceneHeight", PyvtkContextScene_GetSceneHeight, METH_VARARGS,
   "V.GetSceneHeight() -> int\nC++: int GetSceneHeight()\n\nGet the height of the scene.\n"},
  {"SetScaleTiles", PyvtkContextScene_SetScaleTiles, METH_VARARGS,
   "V.SetScaleTiles(bool)\nC++: virtual void SetScaleTiles(bool _arg)\n\nWhether to scale the scene transform when tiling, for example\nwhen using vtkWindowToImageFilter to take a large screenshot. The\ndefault is true.\n"},
  {"GetScaleTiles", PyvtkContextScene_GetScaleTiles, METH_VARARGS,
   "V.GetScaleTiles() -> bool\nC++: virtual bool GetScaleTiles()\n\nWhether to scale the scene transform when tiling, for example\nwhen using vtkWindowToImageFilter to take a large screenshot. The\ndefault is true.\n"},
  {"ScaleTilesOn", PyvtkContextScene_ScaleTilesOn, METH_VARARGS,
   "V.ScaleTilesOn()\nC++: virtual void ScaleTilesOn()\n\nWhether to scale the scene transform when tiling, for example\nwhen using vtkWindowToImageFilter to take a large screenshot. The\ndefault is true.\n"},
  {"ScaleTilesOff", PyvtkContextScene_ScaleTilesOff, METH_VARARGS,
   "V.ScaleTilesOff()\nC++: virtual void ScaleTilesOff()\n\nWhether to scale the scene transform when tiling, for example\nwhen using vtkWindowToImageFilter to take a large screenshot. The\ndefault is true.\n"},
  {"GetLogicalTileScale", PyvtkContextScene_GetLogicalTileScale, METH_VARARGS,
   "V.GetLogicalTileScale() -> vtkVector2i\nC++: vtkVector2i GetLogicalTileScale()\n\nThe tile scale of the target vtkRenderWindow. Hardcoded pixel\noffsets, etc should properly account for these <x, y> scale\nfactors. This will simply return vtkVector2i(1, 1) if ScaleTiles\nis false or if this->Renderer is NULL.\n"},
  {"SetRenderer", PyvtkContextScene_SetRenderer, METH_VARARGS,
   "V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *renderer)\n\nThis should not be necessary as the context view should take care\nof rendering.\n"},
  {"GetRenderer", PyvtkContextScene_GetRenderer, METH_VARARGS,
   "V.GetRenderer() -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\nThis should not be necessary as the context view should take care\nof rendering.\n"},
  {"SetDirty", PyvtkContextScene_SetDirty, METH_VARARGS,
   "V.SetDirty(bool)\nC++: void SetDirty(bool isDirty)\n\nInform the scene that something changed that requires a repaint\nof the scene. This should only be used by the vtkContextItem\nderived objects in a scene in their event handlers.\n"},
  {"GetDirty", PyvtkContextScene_GetDirty, METH_VARARGS,
   "V.GetDirty() -> bool\nC++: bool GetDirty()\n\nInform the scene that something changed that requires a repaint\nof the scene. This should only be used by the vtkContextItem\nderived objects in a scene in their event handlers.\n"},
  {"ReleaseGraphicsResources", PyvtkContextScene_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources()\nC++: void ReleaseGraphicsResources()\n\nRelease graphics resources hold by the scene.\n"},
  {"GetBufferId", PyvtkContextScene_GetBufferId, METH_VARARGS,
   "V.GetBufferId() -> vtkAbstractContextBufferId\nC++: vtkAbstractContextBufferId *GetBufferId()\n\nReturn buffer id. Not part of the end-user API. Can be used by\ncontext items to initialize their own colorbuffer id (when a\ncontext item is a container).\n"},
  {"SetTransform", PyvtkContextScene_SetTransform, METH_VARARGS,
   "V.SetTransform(vtkTransform2D)\nC++: virtual void SetTransform(vtkTransform2D *transform)\n\nSet the transform for the scene.\n"},
  {"GetTransform", PyvtkContextScene_GetTransform, METH_VARARGS,
   "V.GetTransform() -> vtkTransform2D\nC++: vtkTransform2D *GetTransform()\n\nGet the transform for the scene.\n"},
  {"HasTransform", PyvtkContextScene_HasTransform, METH_VARARGS,
   "V.HasTransform() -> bool\nC++: bool HasTransform()\n\nCheck whether the scene has a transform.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkContextScene_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingContext2DPython.vtkContextScene", // tp_name
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
  PyvtkContextScene_Doc, // tp_doc
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

static vtkObjectBase *PyvtkContextScene_StaticNew()
{
  return vtkContextScene::New();
}

PyObject *PyvtkContextScene_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkContextScene_Type, PyvtkContextScene_Methods,
    "vtkContextScene",
 &PyvtkContextScene_StaticNew);

  PyTypeObject *pytype = &PyvtkContextScene_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "SELECTION_NONE", vtkContextScene::SELECTION_NONE },
        { "SELECTION_DEFAULT", vtkContextScene::SELECTION_DEFAULT },
        { "SELECTION_ADDITION", vtkContextScene::SELECTION_ADDITION },
        { "SELECTION_SUBTRACTION", vtkContextScene::SELECTION_SUBTRACTION },
        { "SELECTION_TOGGLE", vtkContextScene::SELECTION_TOGGLE },
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

void PyVTKAddFile_vtkContextScene(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContextScene_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkContextScene", o) != 0)
  {
    Py_DECREF(o);
  }

}

