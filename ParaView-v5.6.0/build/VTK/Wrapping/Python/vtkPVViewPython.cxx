// python wrapper for vtkPVView
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
#include "vtkPVView.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVView(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVView_ClassNew(); }

#ifndef DECLARED_PyvtkView_ClassNew
extern "C" { PyObject *PyvtkView_ClassNew(); }
#define DECLARED_PyvtkView_ClassNew
#endif

static const char *PyvtkPVView_Doc =
  "vtkPVView - baseclass for all ParaView views.\n\n"
  "Superclass: vtkView\n\n"
  "vtkPVView adds API to vtkView for ParaView specific views. Typically,\n"
  "one writes a simple vtkView subclass for their custom view. Then one\n"
  "subclasses vtkPVView to use their own vtkView subclass with added\n"
  "support for parallel rendering, tile-displays and client-server. Even\n"
  "if the view is client-only view, it needs to address these other\n"
  "configuration gracefully.\n\n";


static PyObject *
PyvtkPVView_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVView::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVView::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVView *tempr = vtkPVView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVView::NewInstance());

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
PyvtkPVView_SetEnableStreaming(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetEnableStreaming");

  bool temp0 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVView::SetEnableStreaming(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_GetEnableStreaming(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEnableStreaming");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkPVView::GetEnableStreaming();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkPVView::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0, temp1);
    }
    else
    {
      op->vtkPVView::SetPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkPVView::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_SetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0, temp1);
    }
    else
    {
      op->vtkPVView::SetSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkPVView::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_SetPPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPPI(temp0);
    }
    else
    {
      op->vtkPVView::SetPPI(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_GetPPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPPI() :
      op->vtkPVView::GetPPI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_StillRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StillRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->StillRender();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_InteractiveRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->InteractiveRender();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_SynchronizeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->SynchronizeBounds(temp0) :
      op->vtkPVView::SynchronizeBounds(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_SynchronizeSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SynchronizeSize(temp0) :
      op->vtkPVView::SynchronizeSize(temp0));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVView_SynchronizeSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SynchronizeSize(temp0) :
      op->vtkPVView::SynchronizeSize(temp0));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVView_SynchronizeSize_Methods[] = {
  {nullptr, PyvtkPVView_SynchronizeSize_s1, METH_VARARGS,
   "@d"},
  {nullptr, PyvtkPVView_SynchronizeSize_s2, METH_VARARGS,
   "@I"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVView_SynchronizeSize(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVView_SynchronizeSize_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SynchronizeSize");
  return nullptr;
}



static PyObject *
PyvtkPVView_SetViewTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetViewTime(temp0);
    }
    else
    {
      op->vtkPVView::SetViewTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_GetViewTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetViewTime() :
      op->vtkPVView::GetViewTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_SetCacheKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCacheKey(temp0);
    }
    else
    {
      op->vtkPVView::SetCacheKey(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_GetCacheKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCacheKey() :
      op->vtkPVView::GetCacheKey());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_SetUseCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseCache(temp0);
    }
    else
    {
      op->vtkPVView::SetUseCache(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_GetUseCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseCache() :
      op->vtkPVView::GetUseCache());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_PrepareForScreenshot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForScreenshot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrepareForScreenshot();
    }
    else
    {
      op->vtkPVView::PrepareForScreenshot();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_CleanupAfterScreenshot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanupAfterScreenshot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CleanupAfterScreenshot();
    }
    else
    {
      op->vtkPVView::CleanupAfterScreenshot();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_VIEW(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "VIEW");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationObjectBaseKey *tempr = vtkPVView::VIEW();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_REQUEST_UPDATE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_UPDATE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationRequestKey *tempr = vtkPVView::REQUEST_UPDATE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_REQUEST_UPDATE_LOD(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_UPDATE_LOD");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationRequestKey *tempr = vtkPVView::REQUEST_UPDATE_LOD();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_REQUEST_RENDER(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_RENDER");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationRequestKey *tempr = vtkPVView::REQUEST_RENDER();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkPVView::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_InTileDisplayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InTileDisplayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->InTileDisplayMode() :
      op->vtkPVView::InTileDisplayMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_InCaveDisplayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InCaveDisplayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->InCaveDisplayMode() :
      op->vtkPVView::InCaveDisplayMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_GetLocalProcessSupportsInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalProcessSupportsInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLocalProcessSupportsInteraction() :
      op->vtkPVView::GetLocalProcessSupportsInteraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_GetIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetIdentifier() :
      op->vtkPVView::GetIdentifier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVView_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkPVView::GetRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVView_Methods[] = {
  {"IsTypeOf", PyvtkPVView_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVView_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVView_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVView\nC++: static vtkPVView *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVView_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVView\nC++: vtkPVView *NewInstance()\n\n"},
  {"SetEnableStreaming", PyvtkPVView_SetEnableStreaming, METH_VARARGS,
   "V.SetEnableStreaming(bool)\nC++: static void SetEnableStreaming(bool)\n\n"},
  {"GetEnableStreaming", PyvtkPVView_GetEnableStreaming, METH_VARARGS,
   "V.GetEnableStreaming() -> bool\nC++: static bool GetEnableStreaming()\n\n"},
  {"Initialize", PyvtkPVView_Initialize, METH_VARARGS,
   "V.Initialize(int)\nC++: virtual void Initialize(unsigned int id)\n\nInitialize the view with an identifier. Unless noted otherwise,\nthis method must be called before calling any other methods on\nthis class.\n\note CallOnAllProcesses\n"},
  {"SetPosition", PyvtkPVView_SetPosition, METH_VARARGS,
   "V.SetPosition(int, int)\nC++: virtual void SetPosition(int, int)\n\nSet the position on this view in the multiview configuration.\nThis can be called only after Initialize().\n\note CallOnAllProcesses\n"},
  {"GetPosition", PyvtkPVView_GetPosition, METH_VARARGS,
   "V.GetPosition() -> (int, int)\nC++: int *GetPosition()\n\n"},
  {"SetSize", PyvtkPVView_SetSize, METH_VARARGS,
   "V.SetSize(int, int)\nC++: virtual void SetSize(int, int)\n\nSet the size of this view in the multiview configuration. This\ncan be called only after Initialize().\n\note CallOnAllProcesses\n"},
  {"GetSize", PyvtkPVView_GetSize, METH_VARARGS,
   "V.GetSize() -> (int, int)\nC++: int *GetSize()\n\n"},
  {"SetPPI", PyvtkPVView_SetPPI, METH_VARARGS,
   "V.SetPPI(int)\nC++: virtual void SetPPI(int)\n\nDescription: Set the screen PPI. This can be called only after\nInitialize().\n\note CallOnAllProcesses\n"},
  {"GetPPI", PyvtkPVView_GetPPI, METH_VARARGS,
   "V.GetPPI() -> int\nC++: virtual int GetPPI()\n\n"},
  {"StillRender", PyvtkPVView_StillRender, METH_VARARGS,
   "V.StillRender()\nC++: virtual void StillRender()\n\nTriggers a high-resolution render.\n\note CallOnAllProcesses\n"},
  {"InteractiveRender", PyvtkPVView_InteractiveRender, METH_VARARGS,
   "V.InteractiveRender()\nC++: virtual void InteractiveRender()\n\nTriggers a interactive render. Based on the settings on the view,\nthis may result in a low-resolution rendering or a simplified\ngeometry rendering.\n\note CallOnAllProcesses\n"},
  {"SynchronizeBounds", PyvtkPVView_SynchronizeBounds, METH_VARARGS,
   "V.SynchronizeBounds([float, float, float, float, float, float])\n    -> bool\nC++: bool SynchronizeBounds(double bounds[6])\n\nThis encapsulates a whole lot of logic for communication between\nprocesses. Given the ton of information this class keeps, it can\neasily aid vtkViews to synchronize information such as bounds/\ndata-size among all processes efficiently. This can be achieved\nby using these methods. Note that these methods should be called\non all processes at the same time otherwise we will have\ndeadlocks. We may make this API generic in future, for now this\nworks.\n"},
  {"SynchronizeSize", PyvtkPVView_SynchronizeSize, METH_VARARGS,
   "V.SynchronizeSize(float) -> bool\nC++: bool SynchronizeSize(double &size)\nV.SynchronizeSize(int) -> bool\nC++: bool SynchronizeSize(unsigned int &size)\n\nThis encapsulates a whole lot of logic for communication between\nprocesses. Given the ton of information this class keeps, it can\neasily aid vtkViews to synchronize information such as bounds/\ndata-size among all processes efficiently. This can be achieved\nby using these methods. Note that these methods should be called\non all processes at the same time otherwise we will have\ndeadlocks. We may make this API generic in future, for now this\nworks.\n"},
  {"SetViewTime", PyvtkPVView_SetViewTime, METH_VARARGS,
   "V.SetViewTime(float)\nC++: virtual void SetViewTime(double value)\n\nGet/Set the time this view is showing. Whenever time is changed,\nthis fires a ViewTimeChangedEvent event.\n\note CallOnAllProcesses\n"},
  {"GetViewTime", PyvtkPVView_GetViewTime, METH_VARARGS,
   "V.GetViewTime() -> float\nC++: virtual double GetViewTime()\n\nGet/Set the time this view is showing. Whenever time is changed,\nthis fires a ViewTimeChangedEvent event.\n\note CallOnAllProcesses\n"},
  {"SetCacheKey", PyvtkPVView_SetCacheKey, METH_VARARGS,
   "V.SetCacheKey(float)\nC++: virtual void SetCacheKey(double _arg)\n\nGet/Set the cache key. When caching is enabled, this key is used\nto identify what geometry cache to use for the current render. It\nis passed on to the representations in vtkPVView::Update(). The\nCacheKey is respected only when UseCache is true.\n\note CallOnAllProcesses\n"},
  {"GetCacheKey", PyvtkPVView_GetCacheKey, METH_VARARGS,
   "V.GetCacheKey() -> float\nC++: virtual double GetCacheKey()\n\nGet/Set the cache key. When caching is enabled, this key is used\nto identify what geometry cache to use for the current render. It\nis passed on to the representations in vtkPVView::Update(). The\nCacheKey is respected only when UseCache is true.\n\note CallOnAllProcesses\n"},
  {"SetUseCache", PyvtkPVView_SetUseCache, METH_VARARGS,
   "V.SetUseCache(bool)\nC++: virtual void SetUseCache(bool _arg)\n\nGet/Set whether caching is enabled.\n\note CallOnAllProcesses\n"},
  {"GetUseCache", PyvtkPVView_GetUseCache, METH_VARARGS,
   "V.GetUseCache() -> bool\nC++: virtual bool GetUseCache()\n\nGet/Set whether caching is enabled.\n\note CallOnAllProcesses\n"},
  {"PrepareForScreenshot", PyvtkPVView_PrepareForScreenshot, METH_VARARGS,
   "V.PrepareForScreenshot()\nC++: virtual void PrepareForScreenshot()\n\nThese methods are used to setup the view for capturing screen\nshots.\n"},
  {"CleanupAfterScreenshot", PyvtkPVView_CleanupAfterScreenshot, METH_VARARGS,
   "V.CleanupAfterScreenshot()\nC++: virtual void CleanupAfterScreenshot()\n\nThese methods are used to setup the view for capturing screen\nshots.\n"},
  {"VIEW", PyvtkPVView_VIEW, METH_VARARGS,
   "V.VIEW() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *VIEW()\n\nKey used to pass the vtkPVView pointer to the representation\nduring any of the view passes such as REQUEST_UPDATE(),\nREQUEST_UPDATE_LOD(), REQUEST_RENDER(), etc.\n"},
  {"REQUEST_UPDATE", PyvtkPVView_REQUEST_UPDATE, METH_VARARGS,
   "V.REQUEST_UPDATE() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_UPDATE()\n\nThis is a Update-Data pass. All representations are expected to\nupdate their inputs and prepare geometries for rendering. All\nheavy work that has to happen only when input-data changes can be\ndone in this pass. This is the first pass.\n"},
  {"REQUEST_UPDATE_LOD", PyvtkPVView_REQUEST_UPDATE_LOD, METH_VARARGS,
   "V.REQUEST_UPDATE_LOD() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_UPDATE_LOD()\n\nThis is a Update-LOD-Data pass. All representations are expected\nto update their lod-data, if any. This is assured to be called\nonly after REQUEST_UPDATE() pass.\n"},
  {"REQUEST_RENDER", PyvtkPVView_REQUEST_RENDER, METH_VARARGS,
   "V.REQUEST_RENDER() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_RENDER()\n\nThis is a render pass. This is called for every render, hence\nrepresentations should not do any work that doesn't depend on\nthings that could change every render.\n"},
  {"Update", PyvtkPVView_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nOverridden to not call Update() directly on the input\nrepresentations, instead use ProcessViewRequest() for all\nvtkPVDataRepresentations.\n"},
  {"InTileDisplayMode", PyvtkPVView_InTileDisplayMode, METH_VARARGS,
   "V.InTileDisplayMode() -> bool\nC++: bool InTileDisplayMode()\n\nReturns true if the application is currently in tile display\nmode.\n"},
  {"InCaveDisplayMode", PyvtkPVView_InCaveDisplayMode, METH_VARARGS,
   "V.InCaveDisplayMode() -> bool\nC++: bool InCaveDisplayMode()\n\nReturns true if the application is currently in cave/immersive\ndisplay mode.\n"},
  {"GetLocalProcessSupportsInteraction", PyvtkPVView_GetLocalProcessSupportsInteraction, METH_VARARGS,
   "V.GetLocalProcessSupportsInteraction() -> bool\nC++: bool GetLocalProcessSupportsInteraction()\n\nReturns true if the local process can support interaction. This\nwill return true only on the client node e.g. Qt client (or\npvpython) when connected to builtin or remote server. On server\nnodes this will return false. CAVEAT: Currently this returns true\non root node on batch and false on all other nodes. In reality\nbatch processes should not support interaction. Due to a bug in\nvtkPVAxesWidget, if there's no interactor, the batch mode ends up\nmissing the orientation widget and hence rendering differently\nthan pvpython. To avoid that, this method currently returns true\non the root node in batch mode. This will however change in the\nfuture once vtkPVAxesWidget has been cleaned up.\n"},
  {"GetIdentifier", PyvtkPVView_GetIdentifier, METH_VARARGS,
   "V.GetIdentifier() -> int\nC++: virtual unsigned int GetIdentifier()\n\nReturns the unique identifier used for this view. This gets set\nin `Initialize()`.\n"},
  {"GetRenderWindow", PyvtkPVView_GetRenderWindow, METH_VARARGS,
   "V.GetRenderWindow() -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetRenderWindow()\n\nIf this view needs a render window (not all views may use one),\nthis method can be used to get the render window associated with\nthis view on the current process. Note that this window may be\nshared with other views depending on the process on which this is\ncalled and the configuration ParaView is running under.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVView_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVView", // tp_name
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
  PyvtkPVView_Doc, // tp_doc
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

PyObject *PyvtkPVView_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVView_Type, PyvtkPVView_Methods,
    "vtkPVView",
 nullptr);

  PyTypeObject *pytype = &PyvtkPVView_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkView_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  o = PyInt_FromLong(vtkPVView::ViewTimeChangedEvent);
  if (o)
  {
    PyDict_SetItemString(d, "ViewTimeChangedEvent", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVView(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVView_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVView", o) != 0)
  {
    Py_DECREF(o);
  }

}

