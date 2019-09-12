// python wrapper for vtkPVComparativeView
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
#include "vtkPVComparativeView.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVComparativeView(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVComparativeView_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVComparativeView_Doc =
  "vtkPVComparativeView - view for comparative visualization/\nfilm-strips.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkPVComparativeView is the view used to generate/view comparative\n"
  "visualizations/film-strips. This is not a proxy\n\n";


static PyObject *
PyvtkPVComparativeView_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVComparativeView::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVComparativeView::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVComparativeView *tempr = vtkPVComparativeView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVComparativeView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVComparativeView::NewInstance());

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
PyvtkPVComparativeView_Initialize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

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
      op->vtkPVComparativeView::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVComparativeView_Initialize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  vtkSMViewProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkPVComparativeView::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVComparativeView_Initialize_Methods[] = {
  {nullptr, PyvtkPVComparativeView_Initialize_s1, METH_VARARGS,
   "@I"},
  {nullptr, PyvtkPVComparativeView_Initialize_s2, METH_VARARGS,
   "@V *vtkSMViewProxy"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVComparativeView_Initialize(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVComparativeView_Initialize_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Initialize");
  return nullptr;
}



static PyObject *
PyvtkPVComparativeView_StillRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StillRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StillRender();
    }
    else
    {
      op->vtkPVComparativeView::StillRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_InteractiveRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractiveRender();
    }
    else
    {
      op->vtkPVComparativeView::InteractiveRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_Build(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Build(temp0, temp1);
    }
    else
    {
      op->vtkPVComparativeView::Build(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_SetOverlayAllComparisons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOverlayAllComparisons");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOverlayAllComparisons(temp0);
    }
    else
    {
      op->vtkPVComparativeView::SetOverlayAllComparisons(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_GetOverlayAllComparisons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOverlayAllComparisons");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOverlayAllComparisons() :
      op->vtkPVComparativeView::GetOverlayAllComparisons());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDimensions() :
      op->vtkPVComparativeView::GetDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_AddRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->AddRepresentation(temp0);
    }
    else
    {
      op->vtkPVComparativeView::AddRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_RemoveRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->RemoveRepresentation(temp0);
    }
    else
    {
      op->vtkPVComparativeView::RemoveRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkPVComparativeView::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_GetViews(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViews");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->GetViews(temp0);
    }
    else
    {
      op->vtkPVComparativeView::GetViews(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_GetRootView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMViewProxy *tempr = (ap.IsBound() ?
      op->GetRootView() :
      op->vtkPVComparativeView::GetRootView());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_SetViewSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetViewSize(temp0, temp1);
    }
    else
    {
      op->vtkPVComparativeView::SetViewSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_SetViewPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetViewPosition(temp0, temp1);
    }
    else
    {
      op->vtkPVComparativeView::SetViewPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_SetPPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

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
      op->vtkPVComparativeView::SetPPI(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_SetSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSpacing(temp0, temp1);
    }
    else
    {
      op->vtkPVComparativeView::SetSpacing(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVComparativeView_SetSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSpacing(temp0);
    }
    else
    {
      op->vtkPVComparativeView::SetSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVComparativeView_SetSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPVComparativeView_SetSpacing_s1(self, args);
    case 1:
      return PyvtkPVComparativeView_SetSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSpacing");
  return nullptr;
}



static PyObject *
PyvtkPVComparativeView_GetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSpacing() :
      op->vtkPVComparativeView::GetSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_AddCue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  vtkSMComparativeAnimationCueProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMComparativeAnimationCueProxy"))
  {
    if (ap.IsBound())
    {
      op->AddCue(temp0);
    }
    else
    {
      op->vtkPVComparativeView::AddCue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_RemoveCue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  vtkSMComparativeAnimationCueProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMComparativeAnimationCueProxy"))
  {
    if (ap.IsBound())
    {
      op->RemoveCue(temp0);
    }
    else
    {
      op->vtkPVComparativeView::RemoveCue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_GetViewTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetViewTime() :
      op->vtkPVComparativeView::GetViewTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_SetViewTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

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
      op->vtkPVComparativeView::SetViewTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_MarkOutdated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkOutdated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkOutdated();
    }
    else
    {
      op->vtkPVComparativeView::MarkOutdated();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_PrepareForScreenshot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForScreenshot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrepareForScreenshot();
    }
    else
    {
      op->vtkPVComparativeView::PrepareForScreenshot();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_CleanupAfterScreenshot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanupAfterScreenshot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CleanupAfterScreenshot();
    }
    else
    {
      op->vtkPVComparativeView::CleanupAfterScreenshot();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeView_CaptureWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CaptureWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->CaptureWindow(temp0, temp1) :
      op->vtkPVComparativeView::CaptureWindow(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVComparativeView_Methods[] = {
  {"IsTypeOf", PyvtkPVComparativeView_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVComparativeView_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVComparativeView_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVComparativeView\nC++: static vtkPVComparativeView *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVComparativeView_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVComparativeView\nC++: vtkPVComparativeView *NewInstance()\n\n"},
  {"Initialize", PyvtkPVComparativeView_Initialize, METH_VARARGS,
   "V.Initialize(int)\nC++: void Initialize(unsigned int)\nV.Initialize(vtkSMViewProxy)\nC++: void Initialize(vtkSMViewProxy *rootView)\n\nProvides empty handlers to simulate the vtkPVView API.\n"},
  {"StillRender", PyvtkPVComparativeView_StillRender, METH_VARARGS,
   "V.StillRender()\nC++: void StillRender()\n\nCall StillRender() on the root view.\n"},
  {"InteractiveRender", PyvtkPVComparativeView_InteractiveRender, METH_VARARGS,
   "V.InteractiveRender()\nC++: void InteractiveRender()\n\nCall InteractiveRender() on the root view.\n"},
  {"Build", PyvtkPVComparativeView_Build, METH_VARARGS,
   "V.Build(int, int)\nC++: void Build(int dx, int dy)\n\nBuilds the MxN views. This method simply creates the MxN internal\nview modules. It does not generate the visualization i.e. play\nthe animation scene(s). This method does nothing unless the\ndimensions have changed, in which case it creates new internal\nview modules (or destroys extra ones). Note that the it's the\nresponsibility of the application to lay the views out so that\nthey form a MxN grid.\n"},
  {"SetOverlayAllComparisons", PyvtkPVComparativeView_SetOverlayAllComparisons, METH_VARARGS,
   "V.SetOverlayAllComparisons(bool)\nC++: void SetOverlayAllComparisons(bool)\n\nWhen set to true, all comparisons are shown in the same view.\nOtherwise, they are tiled in separate views.\n"},
  {"GetOverlayAllComparisons", PyvtkPVComparativeView_GetOverlayAllComparisons, METH_VARARGS,
   "V.GetOverlayAllComparisons() -> bool\nC++: virtual bool GetOverlayAllComparisons()\n\nWhen set to true, all comparisons are shown in the same view.\nOtherwise, they are tiled in separate views.\n"},
  {"GetDimensions", PyvtkPVComparativeView_GetDimensions, METH_VARARGS,
   "V.GetDimensions() -> (int, int)\nC++: int *GetDimensions()\n\n"},
  {"AddRepresentation", PyvtkPVComparativeView_AddRepresentation, METH_VARARGS,
   "V.AddRepresentation(vtkSMProxy)\nC++: void AddRepresentation(vtkSMProxy *)\n\nAdds a representation proxy to this view.\n"},
  {"RemoveRepresentation", PyvtkPVComparativeView_RemoveRepresentation, METH_VARARGS,
   "V.RemoveRepresentation(vtkSMProxy)\nC++: void RemoveRepresentation(vtkSMProxy *)\n\nRemoves a representation proxy from this view.\n"},
  {"Update", PyvtkPVComparativeView_Update, METH_VARARGS,
   "V.Update()\nC++: void Update()\n\nUpdates the data pipelines for all visible representations.\n"},
  {"GetViews", PyvtkPVComparativeView_GetViews, METH_VARARGS,
   "V.GetViews(vtkCollection)\nC++: void GetViews(vtkCollection *collection)\n\nGet all the internal views. The views should only be used to be\nlaid out by the GUI. It's not recommended to directly change the\nproperties of the views.\n"},
  {"GetRootView", PyvtkPVComparativeView_GetRootView, METH_VARARGS,
   "V.GetRootView() -> vtkSMViewProxy\nC++: virtual vtkSMViewProxy *GetRootView()\n\nReturns the root view proxy.\n"},
  {"SetViewSize", PyvtkPVComparativeView_SetViewSize, METH_VARARGS,
   "V.SetViewSize(int, int)\nC++: void SetViewSize(int x, int y)\n\nViewSize, ViewPosition need to split up among all the component\nviews correctly.\n"},
  {"SetViewPosition", PyvtkPVComparativeView_SetViewPosition, METH_VARARGS,
   "V.SetViewPosition(int, int)\nC++: void SetViewPosition(int x, int y)\n\nViewSize, ViewPosition need to split up among all the component\nviews correctly.\n"},
  {"SetPPI", PyvtkPVComparativeView_SetPPI, METH_VARARGS,
   "V.SetPPI(int)\nC++: void SetPPI(int)\n\nSatisfying vtkPVView API. We don't need to do anything here since\nthe subviews have their own PPI settings.\n"},
  {"SetSpacing", PyvtkPVComparativeView_SetSpacing, METH_VARARGS,
   "V.SetSpacing(int, int)\nC++: void SetSpacing(int, int)\nV.SetSpacing((int, int))\nC++: void SetSpacing(int a[2])\n\n"},
  {"GetSpacing", PyvtkPVComparativeView_GetSpacing, METH_VARARGS,
   "V.GetSpacing() -> (int, int)\nC++: int *GetSpacing()\n\n"},
  {"AddCue", PyvtkPVComparativeView_AddCue, METH_VARARGS,
   "V.AddCue(vtkSMComparativeAnimationCueProxy)\nC++: void AddCue(vtkSMComparativeAnimationCueProxy *)\n\nAdd/Remove parameter cues.\n"},
  {"RemoveCue", PyvtkPVComparativeView_RemoveCue, METH_VARARGS,
   "V.RemoveCue(vtkSMComparativeAnimationCueProxy)\nC++: void RemoveCue(vtkSMComparativeAnimationCueProxy *)\n\nAdd/Remove parameter cues.\n"},
  {"GetViewTime", PyvtkPVComparativeView_GetViewTime, METH_VARARGS,
   "V.GetViewTime() -> float\nC++: virtual double GetViewTime()\n\nGet/Set the view time.\n"},
  {"SetViewTime", PyvtkPVComparativeView_SetViewTime, METH_VARARGS,
   "V.SetViewTime(float)\nC++: void SetViewTime(double time)\n\nGet/Set the view time.\n"},
  {"MarkOutdated", PyvtkPVComparativeView_MarkOutdated, METH_VARARGS,
   "V.MarkOutdated()\nC++: void MarkOutdated()\n\nMarks the view dirty i.e. on next Update() it needs to regenerate\nthe comparative vis by replaying the animation(s).\n"},
  {"PrepareForScreenshot", PyvtkPVComparativeView_PrepareForScreenshot, METH_VARARGS,
   "V.PrepareForScreenshot()\nC++: void PrepareForScreenshot()\n\nThese methods mimic the vtkPVView API. They do nothing here since\neach view internal view will call PrepareForScreenshot and\nCleanupAfterScreenshot explicitly when we capture the images from\neach of them as needed.\n"},
  {"CleanupAfterScreenshot", PyvtkPVComparativeView_CleanupAfterScreenshot, METH_VARARGS,
   "V.CleanupAfterScreenshot()\nC++: void CleanupAfterScreenshot()\n\n"},
  {"CaptureWindow", PyvtkPVComparativeView_CaptureWindow, METH_VARARGS,
   "V.CaptureWindow(int, int) -> vtkImageData\nC++: vtkImageData *CaptureWindow(int magX, int magY)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVComparativeView_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkPVComparativeView", // tp_name
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
  PyvtkPVComparativeView_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVComparativeView_StaticNew()
{
  return vtkPVComparativeView::New();
}

PyObject *PyvtkPVComparativeView_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVComparativeView_Type, PyvtkPVComparativeView_Methods,
    "vtkPVComparativeView",
 &PyvtkPVComparativeView_StaticNew);

  PyTypeObject *pytype = &PyvtkPVComparativeView_Type;

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

void PyVTKAddFile_vtkPVComparativeView(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVComparativeView_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVComparativeView", o) != 0)
  {
    Py_DECREF(o);
  }

}

