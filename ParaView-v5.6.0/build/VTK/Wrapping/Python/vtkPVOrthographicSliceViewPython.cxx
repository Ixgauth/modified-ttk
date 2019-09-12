// python wrapper for vtkPVOrthographicSliceView
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
#include "vtkPVOrthographicSliceView.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVOrthographicSliceView(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVOrthographicSliceView_ClassNew(); }

#ifndef DECLARED_PyvtkPVMultiSliceView_ClassNew
extern "C" { PyObject *PyvtkPVMultiSliceView_ClassNew(); }
#define DECLARED_PyvtkPVMultiSliceView_ClassNew
#endif

static const char *PyvtkPVOrthographicSliceView_Doc =
  "vtkPVOrthographicSliceView - View.\n\n"
  "Superclass: vtkPVMultiSliceView\n\n"
  "vtkPVOrthographicSliceView extends vtkPVMultiSliceView to support\n"
  "showing a quad-view with orthographic views along with the 3D view.\n"
  "Work with vtkPVCompositeOrthographicSliceRepresentation and\n"
  "vtkGeometrySliceRepresentation, this class create a 3 slices for any\n"
  "dataset shown in this view and shows those slices in the orthographic\n"
  "views. The orthographic views themselves are non-composited i.e. the\n"
  "data is simply cloned on all rendering processes (hence we limit\n"
  "ourselves to showing slices alone).\n\n"
  "@par Interactions: In the orthographic views, users can use the\n"
  "thumb-wheel to change the slice plane (in which case the\n"
  "SliceIncrements are used to update the slice position). Additionally,\n"
  "users can double click in any of the orthographic views to move the\n"
  "slice position to that location.\n\n";


static PyObject *
PyvtkPVOrthographicSliceView_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVOrthographicSliceView::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVOrthographicSliceView::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVOrthographicSliceView *tempr = vtkPVOrthographicSliceView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVOrthographicSliceView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVOrthographicSliceView::NewInstance());

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
PyvtkPVOrthographicSliceView_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

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
      op->vtkPVOrthographicSliceView::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkPVOrthographicSliceView::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  int temp0 = vtkPVRenderView::DEFAULT_RENDERER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer(temp0) :
      op->vtkPVOrthographicSliceView::GetRenderer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_ResetCamera_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetCamera();
    }
    else
    {
      op->vtkPVOrthographicSliceView::ResetCamera();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVOrthographicSliceView_ResetCamera_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

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
      op->ResetCamera(temp0);
    }
    else
    {
      op->vtkPVOrthographicSliceView::ResetCamera(temp0);
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
PyvtkPVOrthographicSliceView_ResetCamera(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPVOrthographicSliceView_ResetCamera_s1(self, args);
    case 1:
      return PyvtkPVOrthographicSliceView_ResetCamera_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ResetCamera");
  return nullptr;
}



static PyObject *
PyvtkPVOrthographicSliceView_SetInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionMode(temp0);
    }
    else
    {
      op->vtkPVOrthographicSliceView::SetInteractionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_SetupInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->SetupInteractor(temp0);
    }
    else
    {
      op->vtkPVOrthographicSliceView::SetupInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_SetSlicePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlicePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

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
      op->SetSlicePosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVOrthographicSliceView::SetSlicePosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_GetSlicePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlicePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSlicePosition() :
      op->vtkPVOrthographicSliceView::GetSlicePosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_SetSliceIncrements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

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
      op->SetSliceIncrements(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVOrthographicSliceView::SetSliceIncrements(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVOrthographicSliceView_SetSliceIncrements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSliceIncrements(temp0);
    }
    else
    {
      op->vtkPVOrthographicSliceView::SetSliceIncrements(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVOrthographicSliceView_SetSliceIncrements(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPVOrthographicSliceView_SetSliceIncrements_s1(self, args);
    case 1:
      return PyvtkPVOrthographicSliceView_SetSliceIncrements_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSliceIncrements");
  return nullptr;
}



static PyObject *
PyvtkPVOrthographicSliceView_SetSliceAnnotationsVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceAnnotationsVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceAnnotationsVisibility(temp0);
    }
    else
    {
      op->vtkPVOrthographicSliceView::SetSliceAnnotationsVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_GetSliceAnnotationsVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceAnnotationsVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSliceAnnotationsVisibility() :
      op->vtkPVOrthographicSliceView::GetSliceAnnotationsVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_SetCenterAxesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterAxesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCenterAxesVisibility(temp0);
    }
    else
    {
      op->vtkPVOrthographicSliceView::SetCenterAxesVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_SetBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

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
      op->SetBackground(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVOrthographicSliceView::SetBackground(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_SetBackground2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

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
      op->SetBackground2(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVOrthographicSliceView::SetBackground2(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_SetBackgroundTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  vtkTexture *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTexture"))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundTexture(temp0);
    }
    else
    {
      op->vtkPVOrthographicSliceView::SetBackgroundTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_SetGradientBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGradientBackground(temp0);
    }
    else
    {
      op->vtkPVOrthographicSliceView::SetGradientBackground(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_SetTexturedBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexturedBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTexturedBackground(temp0);
    }
    else
    {
      op->vtkPVOrthographicSliceView::SetTexturedBackground(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVOrthographicSliceView_Methods[] = {
  {"IsTypeOf", PyvtkPVOrthographicSliceView_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVOrthographicSliceView_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVOrthographicSliceView_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVOrthographicSliceView\nC++: static vtkPVOrthographicSliceView *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVOrthographicSliceView_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVOrthographicSliceView\nC++: vtkPVOrthographicSliceView *NewInstance()\n\n"},
  {"Initialize", PyvtkPVOrthographicSliceView_Initialize, METH_VARARGS,
   "V.Initialize(int)\nC++: void Initialize(unsigned int id) override;\n\nInitialize the view with an identifier. Unless noted otherwise,\nthis method must be called before calling any other methods on\nthis class.\n\note CallOnAllProcesses\n"},
  {"Update", PyvtkPVOrthographicSliceView_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nOverridden to ensure that the SlicePositionAxes3D doesn't get\nused when determine view bounds.\n"},
  {"GetRenderer", PyvtkPVOrthographicSliceView_GetRenderer, METH_VARARGS,
   "V.GetRenderer(int) -> vtkRenderer\nC++: vtkRenderer *GetRenderer(\n    int rendererType=vtkPVRenderView::DEFAULT_RENDERER) override;\n\nOverridden to add support for new types of renderers.\n"},
  {"ResetCamera", PyvtkPVOrthographicSliceView_ResetCamera, METH_VARARGS,
   "V.ResetCamera()\nC++: virtual void ResetCamera()\nV.ResetCamera([float, float, float, float, float, float])\nC++: virtual void ResetCamera(double bounds[6])\n\nResets the active camera using collective prop-bounds.\n\note CallOnAllProcesses\n"},
  {"SetInteractionMode", PyvtkPVOrthographicSliceView_SetInteractionMode, METH_VARARGS,
   "V.SetInteractionMode(int)\nC++: void SetInteractionMode(int mode) override;\n\nGet/Set the interaction mode. Default is INTERACTION_MODE_3D. If\nINTERACTION_MODE_SELECTION is selected, then whenever the user\ndrags and creates a selection region, this class will fire a\nvtkCommand::SelectionChangedEvent event with the selection region\nas the argument.\n\note CallOnAllProcesses\n\note this must be called on all processes, however it will have\nany effect only the driver processes i.e. the process with the\ninteractor.\n"},
  {"SetupInteractor", PyvtkPVOrthographicSliceView_SetupInteractor, METH_VARARGS,
   "V.SetupInteractor(vtkRenderWindowInteractor)\nC++: void SetupInteractor(vtkRenderWindowInteractor *) override;\n\nSet the interactor. Client applications must set the interactor\nto enable interactivity. Note this method will also change the\ninteractor styles set on the interactor.\n"},
  {"SetSlicePosition", PyvtkPVOrthographicSliceView_SetSlicePosition, METH_VARARGS,
   "V.SetSlicePosition(float, float, float)\nC++: void SetSlicePosition(double x, double y, double z)\n\nSet the slice position.\n"},
  {"GetSlicePosition", PyvtkPVOrthographicSliceView_GetSlicePosition, METH_VARARGS,
   "V.GetSlicePosition() -> (float, float, float)\nC++: double *GetSlicePosition()\n\n"},
  {"SetSliceIncrements", PyvtkPVOrthographicSliceView_SetSliceIncrements, METH_VARARGS,
   "V.SetSliceIncrements(float, float, float)\nC++: void SetSliceIncrements(double, double, double)\nV.SetSliceIncrements((float, float, float))\nC++: void SetSliceIncrements(double a[3])\n\n"},
  {"SetSliceAnnotationsVisibility", PyvtkPVOrthographicSliceView_SetSliceAnnotationsVisibility, METH_VARARGS,
   "V.SetSliceAnnotationsVisibility(bool)\nC++: virtual void SetSliceAnnotationsVisibility(bool _arg)\n\nGet/Set whether to show slice annotations.\n"},
  {"GetSliceAnnotationsVisibility", PyvtkPVOrthographicSliceView_GetSliceAnnotationsVisibility, METH_VARARGS,
   "V.GetSliceAnnotationsVisibility() -> bool\nC++: virtual bool GetSliceAnnotationsVisibility()\n\nGet/Set whether to show slice annotations.\n"},
  {"SetCenterAxesVisibility", PyvtkPVOrthographicSliceView_SetCenterAxesVisibility, METH_VARARGS,
   "V.SetCenterAxesVisibility(bool)\nC++: void SetCenterAxesVisibility(bool) override;\n\nTo avoid confusion, we don't show the center axes at all in this\nview.\n"},
  {"SetBackground", PyvtkPVOrthographicSliceView_SetBackground, METH_VARARGS,
   "V.SetBackground(float, float, float)\nC++: void SetBackground(double r, double g, double b) override;\n\n"},
  {"SetBackground2", PyvtkPVOrthographicSliceView_SetBackground2, METH_VARARGS,
   "V.SetBackground2(float, float, float)\nC++: void SetBackground2(double r, double g, double b) override;\n\n"},
  {"SetBackgroundTexture", PyvtkPVOrthographicSliceView_SetBackgroundTexture, METH_VARARGS,
   "V.SetBackgroundTexture(vtkTexture)\nC++: void SetBackgroundTexture(vtkTexture *val) override;\n\n"},
  {"SetGradientBackground", PyvtkPVOrthographicSliceView_SetGradientBackground, METH_VARARGS,
   "V.SetGradientBackground(int)\nC++: void SetGradientBackground(int val) override;\n\n"},
  {"SetTexturedBackground", PyvtkPVOrthographicSliceView_SetTexturedBackground, METH_VARARGS,
   "V.SetTexturedBackground(int)\nC++: void SetTexturedBackground(int val) override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVOrthographicSliceView_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVOrthographicSliceView", // tp_name
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
  PyvtkPVOrthographicSliceView_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVOrthographicSliceView_StaticNew()
{
  return vtkPVOrthographicSliceView::New();
}

PyObject *PyvtkPVOrthographicSliceView_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVOrthographicSliceView_Type, PyvtkPVOrthographicSliceView_Methods,
    "vtkPVOrthographicSliceView",
 &PyvtkPVOrthographicSliceView_StaticNew);

  PyTypeObject *pytype = &PyvtkPVOrthographicSliceView_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVMultiSliceView_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "SAGITTAL_VIEW_RENDERER", vtkPVOrthographicSliceView::SAGITTAL_VIEW_RENDERER },
        { "AXIAL_VIEW_RENDERER", vtkPVOrthographicSliceView::AXIAL_VIEW_RENDERER },
        { "CORONAL_VIEW_RENDERER", vtkPVOrthographicSliceView::CORONAL_VIEW_RENDERER },
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

void PyVTKAddFile_vtkPVOrthographicSliceView(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVOrthographicSliceView_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVOrthographicSliceView", o) != 0)
  {
    Py_DECREF(o);
  }

}

