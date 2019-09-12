// python wrapper for vtkRenderWindow
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
#include "vtkRenderWindow.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRenderWindow(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRenderWindow_ClassNew(); }

#ifndef DECLARED_PyvtkWindow_ClassNew
extern "C" { PyObject *PyvtkWindow_ClassNew(); }
#define DECLARED_PyvtkWindow_ClassNew
#endif

static const char *PyvtkRenderWindow_Doc =
  "vtkRenderWindow - create a window for renderers to draw into\n\n"
  "Superclass: vtkWindow\n\n"
  "vtkRenderWindow is an abstract object to specify the behavior of a\n"
  "rendering window. A rendering window is a window in a graphical user\n"
  "interface where renderers draw their images. Methods are provided to\n"
  "synchronize the rendering process, set window size, and control\n"
  "double buffering.  The window also allows rendering in stereo.  The\n"
  "interlaced render stereo type is for output to a VRex stereo\n"
  "projector.  All of the odd horizontal lines are from the left eye,\n"
  "and the even lines are from the right eye.  The user has to make the\n"
  "render window aligned with the VRex projector, or the eye will be\n"
  "swapped.\n\n"
  "@warning\n"
  "In VTK versions 4 and later, the vtkWindowToImageFilter class is part\n"
  "of the canonical way to output an image of a window to a file\n"
  "(replacing the obsolete SaveImageAsPPM method for vtkRenderWindows\n"
  "that existed in 3.2 and earlier).  Connect one of these filters to\n"
  "the output of the window, and filter's output to a writer such as\n"
  "vtkPNGWriter.\n\n"
  "@sa\n"
  "vtkRenderer vtkRenderWindowInteractor vtkWindowToImageFilter\n\n";


static PyObject *
PyvtkRenderWindow_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRenderWindow::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderWindow::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRenderWindow *tempr = vtkRenderWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderWindow::NewInstance());

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
PyvtkRenderWindow_AddRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->AddRenderer(temp0);
    }
    else
    {
      op->vtkRenderWindow::AddRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_RemoveRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->RemoveRenderer(temp0);
    }
    else
    {
      op->vtkRenderWindow::RemoveRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_HasRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    int tempr = (ap.IsBound() ?
      op->HasRenderer(temp0) :
      op->vtkRenderWindow::HasRenderer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetRenderLibrary(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRenderLibrary");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkRenderWindow::GetRenderLibrary();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetRenderingBackend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderingBackend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRenderingBackend() :
      op->vtkRenderWindow::GetRenderingBackend());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetRenderTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderTimerLog *tempr = (ap.IsBound() ?
      op->GetRenderTimer() :
      op->vtkRenderWindow::GetRenderTimer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetRenderers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRendererCollection *tempr = (ap.IsBound() ?
      op->GetRenderers() :
      op->vtkRenderWindow::GetRenderers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_CaptureGL2PSSpecialProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CaptureGL2PSSpecialProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->CaptureGL2PSSpecialProps(temp0);
    }
    else
    {
      op->vtkRenderWindow::CaptureGL2PSSpecialProps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetCapturingGL2PSSpecialProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapturingGL2PSSpecialProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCapturingGL2PSSpecialProps() :
      op->vtkRenderWindow::GetCapturingGL2PSSpecialProps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Render();
    }
    else
    {
      op->vtkRenderWindow::Render();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Start();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Finalize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_Frame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Frame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Frame();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_WaitForCompletion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForCompletion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->WaitForCompletion();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_CopyResultFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyResultFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyResultFrame();
    }
    else
    {
      op->vtkRenderWindow::CopyResultFrame();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_MakeRenderWindowInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeRenderWindowInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->MakeRenderWindowInteractor() :
      op->vtkRenderWindow::MakeRenderWindowInteractor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_HideCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->HideCursor();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_ShowCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->ShowCursor();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetCursorPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCursorPosition(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindow::SetCursorPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetCurrentCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentCursor(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetCurrentCursor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetCurrentCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurrentCursor() :
      op->vtkRenderWindow::GetCurrentCursor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetFullScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFullScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetFullScreen(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetFullScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFullScreen() :
      op->vtkRenderWindow::GetFullScreen());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_FullScreenOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FullScreenOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FullScreenOn();
    }
    else
    {
      op->vtkRenderWindow::FullScreenOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_FullScreenOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FullScreenOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FullScreenOff();
    }
    else
    {
      op->vtkRenderWindow::FullScreenOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetBorders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorders(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetBorders(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetBorders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBorders() :
      op->vtkRenderWindow::GetBorders());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_BordersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BordersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BordersOn();
    }
    else
    {
      op->vtkRenderWindow::BordersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_BordersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BordersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BordersOff();
    }
    else
    {
      op->vtkRenderWindow::BordersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetStereoCapableWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStereoCapableWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStereoCapableWindow() :
      op->vtkRenderWindow::GetStereoCapableWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_StereoCapableWindowOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoCapableWindowOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StereoCapableWindowOn();
    }
    else
    {
      op->vtkRenderWindow::StereoCapableWindowOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_StereoCapableWindowOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoCapableWindowOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StereoCapableWindowOff();
    }
    else
    {
      op->vtkRenderWindow::StereoCapableWindowOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoCapableWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoCapableWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStereoCapableWindow(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetStereoCapableWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetStereoRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStereoRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStereoRender() :
      op->vtkRenderWindow::GetStereoRender());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStereoRender(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetStereoRender(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_StereoRenderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoRenderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StereoRenderOn();
    }
    else
    {
      op->vtkRenderWindow::StereoRenderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_StereoRenderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoRenderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StereoRenderOff();
    }
    else
    {
      op->vtkRenderWindow::StereoRenderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetAlphaBitPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlphaBitPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlphaBitPlanes(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetAlphaBitPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetAlphaBitPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlphaBitPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAlphaBitPlanes() :
      op->vtkRenderWindow::GetAlphaBitPlanes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_AlphaBitPlanesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlphaBitPlanesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlphaBitPlanesOn();
    }
    else
    {
      op->vtkRenderWindow::AlphaBitPlanesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_AlphaBitPlanesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlphaBitPlanesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlphaBitPlanesOff();
    }
    else
    {
      op->vtkRenderWindow::AlphaBitPlanesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetPointSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointSmoothing(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetPointSmoothing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetPointSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointSmoothing() :
      op->vtkRenderWindow::GetPointSmoothing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_PointSmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointSmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointSmoothingOn();
    }
    else
    {
      op->vtkRenderWindow::PointSmoothingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_PointSmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointSmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointSmoothingOff();
    }
    else
    {
      op->vtkRenderWindow::PointSmoothingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetLineSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineSmoothing(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetLineSmoothing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetLineSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLineSmoothing() :
      op->vtkRenderWindow::GetLineSmoothing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_LineSmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LineSmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LineSmoothingOn();
    }
    else
    {
      op->vtkRenderWindow::LineSmoothingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_LineSmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LineSmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LineSmoothingOff();
    }
    else
    {
      op->vtkRenderWindow::LineSmoothingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetPolygonSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolygonSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolygonSmoothing(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetPolygonSmoothing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetPolygonSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygonSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPolygonSmoothing() :
      op->vtkRenderWindow::GetPolygonSmoothing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_PolygonSmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolygonSmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PolygonSmoothingOn();
    }
    else
    {
      op->vtkRenderWindow::PolygonSmoothingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_PolygonSmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolygonSmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PolygonSmoothingOff();
    }
    else
    {
      op->vtkRenderWindow::PolygonSmoothingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetStereoType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStereoType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStereoType() :
      op->vtkRenderWindow::GetStereoType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStereoType(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetStereoType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToCrystalEyes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToCrystalEyes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStereoTypeToCrystalEyes();
    }
    else
    {
      op->vtkRenderWindow::SetStereoTypeToCrystalEyes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToRedBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToRedBlue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStereoTypeToRedBlue();
    }
    else
    {
      op->vtkRenderWindow::SetStereoTypeToRedBlue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToInterlaced(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToInterlaced");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStereoTypeToInterlaced();
    }
    else
    {
      op->vtkRenderWindow::SetStereoTypeToInterlaced();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStereoTypeToLeft();
    }
    else
    {
      op->vtkRenderWindow::SetStereoTypeToLeft();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStereoTypeToRight();
    }
    else
    {
      op->vtkRenderWindow::SetStereoTypeToRight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToDresden(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToDresden");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStereoTypeToDresden();
    }
    else
    {
      op->vtkRenderWindow::SetStereoTypeToDresden();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToAnaglyph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToAnaglyph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStereoTypeToAnaglyph();
    }
    else
    {
      op->vtkRenderWindow::SetStereoTypeToAnaglyph();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToCheckerboard(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToCheckerboard");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStereoTypeToCheckerboard();
    }
    else
    {
      op->vtkRenderWindow::SetStereoTypeToCheckerboard();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToSplitViewportHorizontal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToSplitViewportHorizontal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStereoTypeToSplitViewportHorizontal();
    }
    else
    {
      op->vtkRenderWindow::SetStereoTypeToSplitViewportHorizontal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToFake(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToFake");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStereoTypeToFake();
    }
    else
    {
      op->vtkRenderWindow::SetStereoTypeToFake();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetStereoTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStereoTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetStereoTypeAsString() :
      op->vtkRenderWindow::GetStereoTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_StereoUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StereoUpdate();
    }
    else
    {
      op->vtkRenderWindow::StereoUpdate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_StereoMidpoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoMidpoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StereoMidpoint();
    }
    else
    {
      op->vtkRenderWindow::StereoMidpoint();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_StereoRenderComplete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoRenderComplete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StereoRenderComplete();
    }
    else
    {
      op->vtkRenderWindow::StereoRenderComplete();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetAnaglyphColorSaturation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnaglyphColorSaturation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnaglyphColorSaturation(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetAnaglyphColorSaturation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetAnaglyphColorSaturationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnaglyphColorSaturationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetAnaglyphColorSaturationMinValue() :
      op->vtkRenderWindow::GetAnaglyphColorSaturationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetAnaglyphColorSaturationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnaglyphColorSaturationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetAnaglyphColorSaturationMaxValue() :
      op->vtkRenderWindow::GetAnaglyphColorSaturationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetAnaglyphColorSaturation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnaglyphColorSaturation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetAnaglyphColorSaturation() :
      op->vtkRenderWindow::GetAnaglyphColorSaturation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetAnaglyphColorMask_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnaglyphColorMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAnaglyphColorMask(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindow::SetAnaglyphColorMask(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindow_SetAnaglyphColorMask_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnaglyphColorMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAnaglyphColorMask(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetAnaglyphColorMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindow_SetAnaglyphColorMask(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkRenderWindow_SetAnaglyphColorMask_s1(self, args);
    case 1:
      return PyvtkRenderWindow_SetAnaglyphColorMask_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAnaglyphColorMask");
  return nullptr;
}



static PyObject *
PyvtkRenderWindow_GetAnaglyphColorMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnaglyphColorMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetAnaglyphColorMask() :
      op->vtkRenderWindow::GetAnaglyphColorMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_WindowRemap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WindowRemap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->WindowRemap();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetSwapBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSwapBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSwapBuffers(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetSwapBuffers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetSwapBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwapBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSwapBuffers() :
      op->vtkRenderWindow::GetSwapBuffers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SwapBuffersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBuffersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SwapBuffersOn();
    }
    else
    {
      op->vtkRenderWindow::SwapBuffersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SwapBuffersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBuffersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SwapBuffersOff();
    }
    else
    {
      op->vtkRenderWindow::SwapBuffersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<unsigned char> store4(2*size4);
  unsigned char *temp4 = store4.Data();
  unsigned char *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  int temp6 = 0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    ap.Save(temp4, save4, size4);

    int tempr = op->SetPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindow_SetPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkUnsignedCharArray *temp4 = nullptr;
  int temp5;
  int temp6 = 0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkUnsignedCharArray") &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    int tempr = op->SetPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderWindow_SetPixelData_Methods[] = {
  {nullptr, PyvtkRenderWindow_SetPixelData_s1, METH_VARARGS,
   "@iiiiPi|i *B"},
  {nullptr, PyvtkRenderWindow_SetPixelData_s2, METH_VARARGS,
   "@iiiiVi|i *vtkUnsignedCharArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRenderWindow_SetPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderWindow_SetPixelData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
    case 7:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPixelData");
  return nullptr;
}



static PyObject *
PyvtkRenderWindow_GetRGBAPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5 = 0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5, 6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    float *tempr = op->GetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindow_GetRGBAPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  vtkFloatArray *temp5 = nullptr;
  int temp6 = 0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkFloatArray") &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    int tempr = op->GetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderWindow_GetRGBAPixelData_Methods[] = {
  {nullptr, PyvtkRenderWindow_GetRGBAPixelData_s1, METH_VARARGS,
   "@iiiii|i"},
  {nullptr, PyvtkRenderWindow_GetRGBAPixelData_s2, METH_VARARGS,
   "@iiiiiV|i *vtkFloatArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRenderWindow_GetRGBAPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderWindow_GetRGBAPixelData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkRenderWindow_GetRGBAPixelData_s1(self, args);
    case 7:
      return PyvtkRenderWindow_GetRGBAPixelData_s2(self, args);
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRGBAPixelData");
  return nullptr;
}



static PyObject *
PyvtkRenderWindow_SetRGBAPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<float> store4(2*size4);
  float *temp4 = store4.Data();
  float *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  int temp6 = 0;
  int temp7 = 0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(6, 8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp7)))
  {
    ap.Save(temp4, save4, size4);

    int tempr = op->SetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindow_SetRGBAPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkFloatArray *temp4 = nullptr;
  int temp5;
  int temp6 = 0;
  int temp7 = 0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(6, 8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkFloatArray") &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp7)))
  {
    int tempr = op->SetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderWindow_SetRGBAPixelData_Methods[] = {
  {nullptr, PyvtkRenderWindow_SetRGBAPixelData_s1, METH_VARARGS,
   "@iiiiPi|ii *f"},
  {nullptr, PyvtkRenderWindow_SetRGBAPixelData_s2, METH_VARARGS,
   "@iiiiVi|ii *vtkFloatArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRenderWindow_SetRGBAPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderWindow_SetRGBAPixelData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
    case 7:
    case 8:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRGBAPixelData");
  return nullptr;
}



static PyObject *
PyvtkRenderWindow_ReleaseRGBAPixelData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->ReleaseRGBAPixelData(temp0);

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
PyvtkRenderWindow_GetRGBACharPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5 = 0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5, 6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    unsigned char *tempr = op->GetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindow_GetRGBACharPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  vtkUnsignedCharArray *temp5 = nullptr;
  int temp6 = 0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkUnsignedCharArray") &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    int tempr = op->GetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderWindow_GetRGBACharPixelData_Methods[] = {
  {nullptr, PyvtkRenderWindow_GetRGBACharPixelData_s1, METH_VARARGS,
   "@iiiii|i"},
  {nullptr, PyvtkRenderWindow_GetRGBACharPixelData_s2, METH_VARARGS,
   "@iiiiiV|i *vtkUnsignedCharArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRenderWindow_GetRGBACharPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderWindow_GetRGBACharPixelData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkRenderWindow_GetRGBACharPixelData_s1(self, args);
    case 7:
      return PyvtkRenderWindow_GetRGBACharPixelData_s2(self, args);
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRGBACharPixelData");
  return nullptr;
}



static PyObject *
PyvtkRenderWindow_SetRGBACharPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<unsigned char> store4(2*size4);
  unsigned char *temp4 = store4.Data();
  unsigned char *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  int temp6 = 0;
  int temp7 = 0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(6, 8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp7)))
  {
    ap.Save(temp4, save4, size4);

    int tempr = op->SetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindow_SetRGBACharPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkUnsignedCharArray *temp4 = nullptr;
  int temp5;
  int temp6 = 0;
  int temp7 = 0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(6, 8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkUnsignedCharArray") &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp7)))
  {
    int tempr = op->SetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderWindow_SetRGBACharPixelData_Methods[] = {
  {nullptr, PyvtkRenderWindow_SetRGBACharPixelData_s1, METH_VARARGS,
   "@iiiiPi|ii *B"},
  {nullptr, PyvtkRenderWindow_SetRGBACharPixelData_s2, METH_VARARGS,
   "@iiiiVi|ii *vtkUnsignedCharArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRenderWindow_SetRGBACharPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderWindow_SetRGBACharPixelData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
    case 7:
    case 8:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRGBACharPixelData");
  return nullptr;
}



static PyObject *
PyvtkRenderWindow_GetZbufferData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    float *tempr = op->GetZbufferData(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindow_GetZbufferData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<float> store4(2*size4);
  float *temp4 = store4.Data();
  float *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp4, save4, size4);

    int tempr = op->GetZbufferData(temp0, temp1, temp2, temp3, temp4);

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindow_GetZbufferData_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkFloatArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkFloatArray"))
  {
    int tempr = op->GetZbufferData(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderWindow_GetZbufferData_Methods[] = {
  {nullptr, PyvtkRenderWindow_GetZbufferData_s2, METH_VARARGS,
   "@iiiiP *f"},
  {nullptr, PyvtkRenderWindow_GetZbufferData_s3, METH_VARARGS,
   "@iiiiV *vtkFloatArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRenderWindow_GetZbufferData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderWindow_GetZbufferData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkRenderWindow_GetZbufferData_s1(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetZbufferData");
  return nullptr;
}



static PyObject *
PyvtkRenderWindow_SetZbufferData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<float> store4(2*size4);
  float *temp4 = store4.Data();
  float *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp4, save4, size4);

    int tempr = op->SetZbufferData(temp0, temp1, temp2, temp3, temp4);

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindow_SetZbufferData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkFloatArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkFloatArray"))
  {
    int tempr = op->SetZbufferData(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderWindow_SetZbufferData_Methods[] = {
  {nullptr, PyvtkRenderWindow_SetZbufferData_s1, METH_VARARGS,
   "@iiiiP *f"},
  {nullptr, PyvtkRenderWindow_SetZbufferData_s2, METH_VARARGS,
   "@iiiiV *vtkFloatArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRenderWindow_SetZbufferData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderWindow_SetZbufferData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetZbufferData");
  return nullptr;
}



static PyObject *
PyvtkRenderWindow_GetZbufferDataAtPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferDataAtPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    float tempr = (ap.IsBound() ?
      op->GetZbufferDataAtPoint(temp0, temp1) :
      op->vtkRenderWindow::GetZbufferDataAtPoint(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetNeverRendered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeverRendered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNeverRendered() :
      op->vtkRenderWindow::GetNeverRendered());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetAbortRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbortRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAbortRender() :
      op->vtkRenderWindow::GetAbortRender());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetAbortRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbortRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAbortRender(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetAbortRender(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetInAbortCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInAbortCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInAbortCheck() :
      op->vtkRenderWindow::GetInAbortCheck());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetInAbortCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInAbortCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInAbortCheck(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetInAbortCheck(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_CheckAbortStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckAbortStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->CheckAbortStatus() :
      op->vtkRenderWindow::CheckAbortStatus());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetIsPicking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsPicking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIsPicking() :
      op->vtkRenderWindow::GetIsPicking());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetIsPicking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsPicking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIsPicking(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetIsPicking(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_IsPickingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPickingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IsPickingOn();
    }
    else
    {
      op->vtkRenderWindow::IsPickingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_IsPickingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPickingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IsPickingOff();
    }
    else
    {
      op->vtkRenderWindow::IsPickingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetEventPending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventPending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetEventPending();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_CheckInRenderStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckInRenderStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->CheckInRenderStatus() :
      op->vtkRenderWindow::CheckInRenderStatus());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_ClearInRenderStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInRenderStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearInRenderStatus();
    }
    else
    {
      op->vtkRenderWindow::ClearInRenderStatus();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetDesiredUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDesiredUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDesiredUpdateRate(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetDesiredUpdateRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetDesiredUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDesiredUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDesiredUpdateRate() :
      op->vtkRenderWindow::GetDesiredUpdateRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetNumberOfLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLayers() :
      op->vtkRenderWindow::GetNumberOfLayers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetNumberOfLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLayers(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetNumberOfLayers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetNumberOfLayersMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLayersMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLayersMinValue() :
      op->vtkRenderWindow::GetNumberOfLayersMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetNumberOfLayersMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLayersMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLayersMaxValue() :
      op->vtkRenderWindow::GetNumberOfLayersMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkRenderWindow::GetInteractor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->SetInteractor(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    op->SetDisplayId(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkRenderWindow_SetWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    op->SetWindowId(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkRenderWindow_SetNextWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNextWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    op->SetNextWindowId(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkRenderWindow_SetParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    op->SetParentId(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkRenderWindow_GetGenericDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    void  *tempr = op->GetGenericDisplayId();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetGenericWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    void  *tempr = op->GetGenericWindowId();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetGenericParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    void  *tempr = op->GetGenericParentId();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetGenericContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    void  *tempr = op->GetGenericContext();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetGenericDrawable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDrawable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    void  *tempr = op->GetGenericDrawable();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetWindowInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetWindowInfo(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetNextWindowInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNextWindowInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetNextWindowInfo(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetParentInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetParentInfo(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_InitializeFromCurrentContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeFromCurrentContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->InitializeFromCurrentContext() :
      op->vtkRenderWindow::InitializeFromCurrentContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetSharedRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSharedRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetSharedRenderWindow(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetSharedRenderWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetSharedRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSharedRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetSharedRenderWindow() :
      op->vtkRenderWindow::GetSharedRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetPlatformSupportsRenderWindowSharing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlatformSupportsRenderWindowSharing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPlatformSupportsRenderWindowSharing() :
      op->vtkRenderWindow::GetPlatformSupportsRenderWindowSharing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_MakeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->MakeCurrent();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_IsCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    bool tempr = op->IsCurrent();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_IsDrawable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDrawable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDrawable() :
      op->vtkRenderWindow::IsDrawable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetForceMakeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceMakeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetForceMakeCurrent();
    }
    else
    {
      op->vtkRenderWindow::SetForceMakeCurrent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_ReportCapabilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportCapabilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->ReportCapabilities() :
      op->vtkRenderWindow::ReportCapabilities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SupportsOpenGL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportsOpenGL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->SupportsOpenGL() :
      op->vtkRenderWindow::SupportsOpenGL());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_IsDirect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDirect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsDirect() :
      op->vtkRenderWindow::IsDirect());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetDepthBufferSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetDepthBufferSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetColorBufferSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorBufferSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = op->GetColorBufferSizes(temp0);

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
PyvtkRenderWindow_SetMultiSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMultiSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMultiSamples(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetMultiSamples(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetMultiSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultiSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMultiSamples() :
      op->vtkRenderWindow::GetMultiSamples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStencilCapable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencilCapable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStencilCapable(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetStencilCapable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetStencilCapable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStencilCapable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStencilCapable() :
      op->vtkRenderWindow::GetStencilCapable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_StencilCapableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StencilCapableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StencilCapableOn();
    }
    else
    {
      op->vtkRenderWindow::StencilCapableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_StencilCapableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StencilCapableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StencilCapableOff();
    }
    else
    {
      op->vtkRenderWindow::StencilCapableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetDeviceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeviceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeviceIndex(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetDeviceIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetDeviceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeviceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDeviceIndex() :
      op->vtkRenderWindow::GetDeviceIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetNumberOfDevices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDevices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDevices() :
      op->vtkRenderWindow::GetNumberOfDevices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetUseOffScreenBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOffScreenBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetUseOffScreenBuffers(temp0) :
      op->vtkRenderWindow::SetUseOffScreenBuffers(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetUseOffScreenBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOffScreenBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseOffScreenBuffers() :
      op->vtkRenderWindow::GetUseOffScreenBuffers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetUseSRGBColorSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseSRGBColorSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseSRGBColorSpace() :
      op->vtkRenderWindow::GetUseSRGBColorSpace());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetUseSRGBColorSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseSRGBColorSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseSRGBColorSpace(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetUseSRGBColorSpace(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_UseSRGBColorSpaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSRGBColorSpaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseSRGBColorSpaceOn();
    }
    else
    {
      op->vtkRenderWindow::UseSRGBColorSpaceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_UseSRGBColorSpaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSRGBColorSpaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseSRGBColorSpaceOff();
    }
    else
    {
      op->vtkRenderWindow::UseSRGBColorSpaceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderWindow_Methods[] = {
  {"IsTypeOf", PyvtkRenderWindow_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRenderWindow_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRenderWindow_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRenderWindow\nC++: static vtkRenderWindow *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRenderWindow_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRenderWindow\nC++: vtkRenderWindow *NewInstance()\n\n"},
  {"AddRenderer", PyvtkRenderWindow_AddRenderer, METH_VARARGS,
   "V.AddRenderer(vtkRenderer)\nC++: virtual void AddRenderer(vtkRenderer *)\n\nAdd a renderer to the list of renderers.\n"},
  {"RemoveRenderer", PyvtkRenderWindow_RemoveRenderer, METH_VARARGS,
   "V.RemoveRenderer(vtkRenderer)\nC++: void RemoveRenderer(vtkRenderer *)\n\nRemove a renderer from the list of renderers.\n"},
  {"HasRenderer", PyvtkRenderWindow_HasRenderer, METH_VARARGS,
   "V.HasRenderer(vtkRenderer) -> int\nC++: int HasRenderer(vtkRenderer *)\n\nQuery if a renderer is in the list of renderers.\n"},
  {"GetRenderLibrary", PyvtkRenderWindow_GetRenderLibrary, METH_VARARGS,
   "V.GetRenderLibrary() -> string\nC++: static const char *GetRenderLibrary()\n\nWhat rendering library has the user requested\n"},
  {"GetRenderingBackend", PyvtkRenderWindow_GetRenderingBackend, METH_VARARGS,
   "V.GetRenderingBackend() -> string\nC++: virtual const char *GetRenderingBackend()\n\nWhat rendering backend has the user requested\n"},
  {"GetRenderTimer", PyvtkRenderWindow_GetRenderTimer, METH_VARARGS,
   "V.GetRenderTimer() -> vtkRenderTimerLog\nC++: virtual vtkRenderTimerLog *GetRenderTimer()\n\nGet the render timer log for this window.\n"},
  {"GetRenderers", PyvtkRenderWindow_GetRenderers, METH_VARARGS,
   "V.GetRenderers() -> vtkRendererCollection\nC++: vtkRendererCollection *GetRenderers()\n\nReturn the collection of renderers in the render window.\n"},
  {"CaptureGL2PSSpecialProps", PyvtkRenderWindow_CaptureGL2PSSpecialProps, METH_VARARGS,
   "V.CaptureGL2PSSpecialProps(vtkCollection)\nC++: void CaptureGL2PSSpecialProps(vtkCollection *specialProps)\n\nThe GL2PS exporter must handle certain props in a special way\n(e.g. text). This method performs a render and captures all\n\"GL2PS-special\" props in the specified collection. The collection\nwill contain a vtkPropCollection for each vtkRenderer in\nthis->GetRenderers(), each containing the special props rendered\nby the corresponding renderer.\n"},
  {"GetCapturingGL2PSSpecialProps", PyvtkRenderWindow_GetCapturingGL2PSSpecialProps, METH_VARARGS,
   "V.GetCapturingGL2PSSpecialProps() -> int\nC++: virtual int GetCapturingGL2PSSpecialProps()\n\nReturns true if the render process is capturing text actors.\n"},
  {"Render", PyvtkRenderWindow_Render, METH_VARARGS,
   "V.Render()\nC++: void Render() override;\n\nAsk each renderer owned by this RenderWindow to render its image\nand synchronize this process.\n"},
  {"Start", PyvtkRenderWindow_Start, METH_VARARGS,
   "V.Start()\nC++: virtual void Start()\n\nInitialize the rendering process.\n"},
  {"Finalize", PyvtkRenderWindow_Finalize, METH_VARARGS,
   "V.Finalize()\nC++: virtual void Finalize()\n\nFinalize the rendering process.\n"},
  {"Frame", PyvtkRenderWindow_Frame, METH_VARARGS,
   "V.Frame()\nC++: virtual void Frame()\n\nA termination method performed at the end of the rendering\nprocess to do things like swapping buffers (if necessary) or\nsimilar actions.\n"},
  {"WaitForCompletion", PyvtkRenderWindow_WaitForCompletion, METH_VARARGS,
   "V.WaitForCompletion()\nC++: virtual void WaitForCompletion()\n\nBlock the thread until the actual rendering is finished(). Useful\nfor measurement only.\n"},
  {"CopyResultFrame", PyvtkRenderWindow_CopyResultFrame, METH_VARARGS,
   "V.CopyResultFrame()\nC++: virtual void CopyResultFrame()\n\nPerformed at the end of the rendering process to generate image.\nThis is typically done right before swapping buffers.\n"},
  {"MakeRenderWindowInteractor", PyvtkRenderWindow_MakeRenderWindowInteractor, METH_VARARGS,
   "V.MakeRenderWindowInteractor() -> vtkRenderWindowInteractor\nC++: virtual vtkRenderWindowInteractor *MakeRenderWindowInteractor(\n    )\n\nCreate an interactor to control renderers in this window. We need\nto know what type of interactor to create, because we might be in\nX Windows or MS Windows.\n"},
  {"HideCursor", PyvtkRenderWindow_HideCursor, METH_VARARGS,
   "V.HideCursor()\nC++: virtual void HideCursor()\n\nHide or Show the mouse cursor, it is nice to be able to hide the\ndefault cursor if you want VTK to display a 3D cursor instead.\nSet cursor position in window (note that (0,0) is the lower left\ncorner).\n"},
  {"ShowCursor", PyvtkRenderWindow_ShowCursor, METH_VARARGS,
   "V.ShowCursor()\nC++: virtual void ShowCursor()\n\nHide or Show the mouse cursor, it is nice to be able to hide the\ndefault cursor if you want VTK to display a 3D cursor instead.\nSet cursor position in window (note that (0,0) is the lower left\ncorner).\n"},
  {"SetCursorPosition", PyvtkRenderWindow_SetCursorPosition, METH_VARARGS,
   "V.SetCursorPosition(int, int)\nC++: virtual void SetCursorPosition(int, int)\n\nHide or Show the mouse cursor, it is nice to be able to hide the\ndefault cursor if you want VTK to display a 3D cursor instead.\nSet cursor position in window (note that (0,0) is the lower left\ncorner).\n"},
  {"SetCurrentCursor", PyvtkRenderWindow_SetCurrentCursor, METH_VARARGS,
   "V.SetCurrentCursor(int)\nC++: virtual void SetCurrentCursor(int _arg)\n\nChange the shape of the cursor.\n"},
  {"GetCurrentCursor", PyvtkRenderWindow_GetCurrentCursor, METH_VARARGS,
   "V.GetCurrentCursor() -> int\nC++: virtual int GetCurrentCursor()\n\nChange the shape of the cursor.\n"},
  {"SetFullScreen", PyvtkRenderWindow_SetFullScreen, METH_VARARGS,
   "V.SetFullScreen(int)\nC++: virtual void SetFullScreen(vtkTypeBool)\n\nTurn on/off rendering full screen window size.\n"},
  {"GetFullScreen", PyvtkRenderWindow_GetFullScreen, METH_VARARGS,
   "V.GetFullScreen() -> int\nC++: virtual vtkTypeBool GetFullScreen()\n\nTurn on/off rendering full screen window size.\n"},
  {"FullScreenOn", PyvtkRenderWindow_FullScreenOn, METH_VARARGS,
   "V.FullScreenOn()\nC++: virtual void FullScreenOn()\n\nTurn on/off rendering full screen window size.\n"},
  {"FullScreenOff", PyvtkRenderWindow_FullScreenOff, METH_VARARGS,
   "V.FullScreenOff()\nC++: virtual void FullScreenOff()\n\nTurn on/off rendering full screen window size.\n"},
  {"SetBorders", PyvtkRenderWindow_SetBorders, METH_VARARGS,
   "V.SetBorders(int)\nC++: virtual void SetBorders(vtkTypeBool _arg)\n\nTurn on/off window manager borders. Typically, you shouldn't turn\nthe borders off, because that bypasses the window manager and can\ncause undesirable behavior.\n"},
  {"GetBorders", PyvtkRenderWindow_GetBorders, METH_VARARGS,
   "V.GetBorders() -> int\nC++: virtual vtkTypeBool GetBorders()\n\nTurn on/off window manager borders. Typically, you shouldn't turn\nthe borders off, because that bypasses the window manager and can\ncause undesirable behavior.\n"},
  {"BordersOn", PyvtkRenderWindow_BordersOn, METH_VARARGS,
   "V.BordersOn()\nC++: virtual void BordersOn()\n\nTurn on/off window manager borders. Typically, you shouldn't turn\nthe borders off, because that bypasses the window manager and can\ncause undesirable behavior.\n"},
  {"BordersOff", PyvtkRenderWindow_BordersOff, METH_VARARGS,
   "V.BordersOff()\nC++: virtual void BordersOff()\n\nTurn on/off window manager borders. Typically, you shouldn't turn\nthe borders off, because that bypasses the window manager and can\ncause undesirable behavior.\n"},
  {"GetStereoCapableWindow", PyvtkRenderWindow_GetStereoCapableWindow, METH_VARARGS,
   "V.GetStereoCapableWindow() -> int\nC++: virtual vtkTypeBool GetStereoCapableWindow()\n\nPrescribe that the window be created in a stereo-capable mode.\nThis method must be called before the window is realized. Default\nis off.\n"},
  {"StereoCapableWindowOn", PyvtkRenderWindow_StereoCapableWindowOn, METH_VARARGS,
   "V.StereoCapableWindowOn()\nC++: virtual void StereoCapableWindowOn()\n\nPrescribe that the window be created in a stereo-capable mode.\nThis method must be called before the window is realized. Default\nis off.\n"},
  {"StereoCapableWindowOff", PyvtkRenderWindow_StereoCapableWindowOff, METH_VARARGS,
   "V.StereoCapableWindowOff()\nC++: virtual void StereoCapableWindowOff()\n\nPrescribe that the window be created in a stereo-capable mode.\nThis method must be called before the window is realized. Default\nis off.\n"},
  {"SetStereoCapableWindow", PyvtkRenderWindow_SetStereoCapableWindow, METH_VARARGS,
   "V.SetStereoCapableWindow(int)\nC++: virtual void SetStereoCapableWindow(vtkTypeBool capable)\n\nPrescribe that the window be created in a stereo-capable mode.\nThis method must be called before the window is realized. Default\nis off.\n"},
  {"GetStereoRender", PyvtkRenderWindow_GetStereoRender, METH_VARARGS,
   "V.GetStereoRender() -> int\nC++: virtual vtkTypeBool GetStereoRender()\n\nTurn on/off stereo rendering.\n"},
  {"SetStereoRender", PyvtkRenderWindow_SetStereoRender, METH_VARARGS,
   "V.SetStereoRender(int)\nC++: void SetStereoRender(vtkTypeBool stereo)\n\nTurn on/off stereo rendering.\n"},
  {"StereoRenderOn", PyvtkRenderWindow_StereoRenderOn, METH_VARARGS,
   "V.StereoRenderOn()\nC++: virtual void StereoRenderOn()\n\nTurn on/off stereo rendering.\n"},
  {"StereoRenderOff", PyvtkRenderWindow_StereoRenderOff, METH_VARARGS,
   "V.StereoRenderOff()\nC++: virtual void StereoRenderOff()\n\nTurn on/off stereo rendering.\n"},
  {"SetAlphaBitPlanes", PyvtkRenderWindow_SetAlphaBitPlanes, METH_VARARGS,
   "V.SetAlphaBitPlanes(int)\nC++: virtual void SetAlphaBitPlanes(vtkTypeBool _arg)\n\nTurn on/off the use of alpha bitplanes.\n"},
  {"GetAlphaBitPlanes", PyvtkRenderWindow_GetAlphaBitPlanes, METH_VARARGS,
   "V.GetAlphaBitPlanes() -> int\nC++: virtual vtkTypeBool GetAlphaBitPlanes()\n\nTurn on/off the use of alpha bitplanes.\n"},
  {"AlphaBitPlanesOn", PyvtkRenderWindow_AlphaBitPlanesOn, METH_VARARGS,
   "V.AlphaBitPlanesOn()\nC++: virtual void AlphaBitPlanesOn()\n\nTurn on/off the use of alpha bitplanes.\n"},
  {"AlphaBitPlanesOff", PyvtkRenderWindow_AlphaBitPlanesOff, METH_VARARGS,
   "V.AlphaBitPlanesOff()\nC++: virtual void AlphaBitPlanesOff()\n\nTurn on/off the use of alpha bitplanes.\n"},
  {"SetPointSmoothing", PyvtkRenderWindow_SetPointSmoothing, METH_VARARGS,
   "V.SetPointSmoothing(int)\nC++: virtual void SetPointSmoothing(vtkTypeBool _arg)\n\nTurn on/off point smoothing. Default is off. This must be applied\nbefore the first Render.\n"},
  {"GetPointSmoothing", PyvtkRenderWindow_GetPointSmoothing, METH_VARARGS,
   "V.GetPointSmoothing() -> int\nC++: virtual vtkTypeBool GetPointSmoothing()\n\nTurn on/off point smoothing. Default is off. This must be applied\nbefore the first Render.\n"},
  {"PointSmoothingOn", PyvtkRenderWindow_PointSmoothingOn, METH_VARARGS,
   "V.PointSmoothingOn()\nC++: virtual void PointSmoothingOn()\n\nTurn on/off point smoothing. Default is off. This must be applied\nbefore the first Render.\n"},
  {"PointSmoothingOff", PyvtkRenderWindow_PointSmoothingOff, METH_VARARGS,
   "V.PointSmoothingOff()\nC++: virtual void PointSmoothingOff()\n\nTurn on/off point smoothing. Default is off. This must be applied\nbefore the first Render.\n"},
  {"SetLineSmoothing", PyvtkRenderWindow_SetLineSmoothing, METH_VARARGS,
   "V.SetLineSmoothing(int)\nC++: virtual void SetLineSmoothing(vtkTypeBool _arg)\n\nTurn on/off line smoothing. Default is off. This must be applied\nbefore the first Render.\n"},
  {"GetLineSmoothing", PyvtkRenderWindow_GetLineSmoothing, METH_VARARGS,
   "V.GetLineSmoothing() -> int\nC++: virtual vtkTypeBool GetLineSmoothing()\n\nTurn on/off line smoothing. Default is off. This must be applied\nbefore the first Render.\n"},
  {"LineSmoothingOn", PyvtkRenderWindow_LineSmoothingOn, METH_VARARGS,
   "V.LineSmoothingOn()\nC++: virtual void LineSmoothingOn()\n\nTurn on/off line smoothing. Default is off. This must be applied\nbefore the first Render.\n"},
  {"LineSmoothingOff", PyvtkRenderWindow_LineSmoothingOff, METH_VARARGS,
   "V.LineSmoothingOff()\nC++: virtual void LineSmoothingOff()\n\nTurn on/off line smoothing. Default is off. This must be applied\nbefore the first Render.\n"},
  {"SetPolygonSmoothing", PyvtkRenderWindow_SetPolygonSmoothing, METH_VARARGS,
   "V.SetPolygonSmoothing(int)\nC++: virtual void SetPolygonSmoothing(vtkTypeBool _arg)\n\nTurn on/off polygon smoothing. Default is off. This must be\napplied before the first Render.\n"},
  {"GetPolygonSmoothing", PyvtkRenderWindow_GetPolygonSmoothing, METH_VARARGS,
   "V.GetPolygonSmoothing() -> int\nC++: virtual vtkTypeBool GetPolygonSmoothing()\n\nTurn on/off polygon smoothing. Default is off. This must be\napplied before the first Render.\n"},
  {"PolygonSmoothingOn", PyvtkRenderWindow_PolygonSmoothingOn, METH_VARARGS,
   "V.PolygonSmoothingOn()\nC++: virtual void PolygonSmoothingOn()\n\nTurn on/off polygon smoothing. Default is off. This must be\napplied before the first Render.\n"},
  {"PolygonSmoothingOff", PyvtkRenderWindow_PolygonSmoothingOff, METH_VARARGS,
   "V.PolygonSmoothingOff()\nC++: virtual void PolygonSmoothingOff()\n\nTurn on/off polygon smoothing. Default is off. This must be\napplied before the first Render.\n"},
  {"GetStereoType", PyvtkRenderWindow_GetStereoType, METH_VARARGS,
   "V.GetStereoType() -> int\nC++: virtual int GetStereoType()\n\nSet/Get what type of stereo rendering to use.  CrystalEyes mode\nuses frame-sequential capabilities available in OpenGL to drive\nLCD shutter glasses and stereo projectors.  RedBlue mode is a\nsimple type of stereo for use with red-blue glasses. Anaglyph\nmode is a superset of RedBlue mode, but the color output channels\ncan be configured using the AnaglyphColorMask and the color of\nthe original image can be (somewhat) maintained using\nAnaglyphColorSaturation;  the default colors for Anaglyph mode is\nred-cyan.  Interlaced stereo mode produces a composite image\nwhere horizontal lines alternate between left and right views. \nStereoLeft and StereoRight modes choose one or the other stereo\nview.  Dresden mode is yet another stereoscopic interleaving.\nFake simply causes the window to render twice without actually\nswapping the camera from left eye to right eye. This is useful in\ncertain applications that want to emulate the rendering passes\nwithout actually rendering in stereo mode.\n"},
  {"SetStereoType", PyvtkRenderWindow_SetStereoType, METH_VARARGS,
   "V.SetStereoType(int)\nC++: void SetStereoType(int)\n\nSet/Get what type of stereo rendering to use.  CrystalEyes mode\nuses frame-sequential capabilities available in OpenGL to drive\nLCD shutter glasses and stereo projectors.  RedBlue mode is a\nsimple type of stereo for use with red-blue glasses. Anaglyph\nmode is a superset of RedBlue mode, but the color output channels\ncan be configured using the AnaglyphColorMask and the color of\nthe original image can be (somewhat) maintained using\nAnaglyphColorSaturation;  the default colors for Anaglyph mode is\nred-cyan.  Interlaced stereo mode produces a composite image\nwhere horizontal lines alternate between left and right views. \nStereoLeft and StereoRight modes choose one or the other stereo\nview.  Dresden mode is yet another stereoscopic interleaving.\nFake simply causes the window to render twice without actually\nswapping the camera from left eye to right eye. This is useful in\ncertain applications that want to emulate the rendering passes\nwithout actually rendering in stereo mode.\n"},
  {"SetStereoTypeToCrystalEyes", PyvtkRenderWindow_SetStereoTypeToCrystalEyes, METH_VARARGS,
   "V.SetStereoTypeToCrystalEyes()\nC++: void SetStereoTypeToCrystalEyes()\n\nSet/Get what type of stereo rendering to use.  CrystalEyes mode\nuses frame-sequential capabilities available in OpenGL to drive\nLCD shutter glasses and stereo projectors.  RedBlue mode is a\nsimple type of stereo for use with red-blue glasses. Anaglyph\nmode is a superset of RedBlue mode, but the color output channels\ncan be configured using the AnaglyphColorMask and the color of\nthe original image can be (somewhat) maintained using\nAnaglyphColorSaturation;  the default colors for Anaglyph mode is\nred-cyan.  Interlaced stereo mode produces a composite image\nwhere horizontal lines alternate between left and right views. \nStereoLeft and StereoRight modes choose one or the other stereo\nview.  Dresden mode is yet another stereoscopic interleaving.\nFake simply causes the window to render twice without actually\nswapping the camera from left eye to right eye. This is useful in\ncertain applications that want to emulate the rendering passes\nwithout actually rendering in stereo mode.\n"},
  {"SetStereoTypeToRedBlue", PyvtkRenderWindow_SetStereoTypeToRedBlue, METH_VARARGS,
   "V.SetStereoTypeToRedBlue()\nC++: void SetStereoTypeToRedBlue()\n\nSet/Get what type of stereo rendering to use.  CrystalEyes mode\nuses frame-sequential capabilities available in OpenGL to drive\nLCD shutter glasses and stereo projectors.  RedBlue mode is a\nsimple type of stereo for use with red-blue glasses. Anaglyph\nmode is a superset of RedBlue mode, but the color output channels\ncan be configured using the AnaglyphColorMask and the color of\nthe original image can be (somewhat) maintained using\nAnaglyphColorSaturation;  the default colors for Anaglyph mode is\nred-cyan.  Interlaced stereo mode produces a composite image\nwhere horizontal lines alternate between left and right views. \nStereoLeft and StereoRight modes choose one or the other stereo\nview.  Dresden mode is yet another stereoscopic interleaving.\nFake simply causes the window to render twice without actually\nswapping the camera from left eye to right eye. This is useful in\ncertain applications that want to emulate the rendering passes\nwithout actually rendering in stereo mode.\n"},
  {"SetStereoTypeToInterlaced", PyvtkRenderWindow_SetStereoTypeToInterlaced, METH_VARARGS,
   "V.SetStereoTypeToInterlaced()\nC++: void SetStereoTypeToInterlaced()\n\nSet/Get what type of stereo rendering to use.  CrystalEyes mode\nuses frame-sequential capabilities available in OpenGL to drive\nLCD shutter glasses and stereo projectors.  RedBlue mode is a\nsimple type of stereo for use with red-blue glasses. Anaglyph\nmode is a superset of RedBlue mode, but the color output channels\ncan be configured using the AnaglyphColorMask and the color of\nthe original image can be (somewhat) maintained using\nAnaglyphColorSaturation;  the default colors for Anaglyph mode is\nred-cyan.  Interlaced stereo mode produces a composite image\nwhere horizontal lines alternate between left and right views. \nStereoLeft and StereoRight modes choose one or the other stereo\nview.  Dresden mode is yet another stereoscopic interleaving.\nFake simply causes the window to render twice without actually\nswapping the camera from left eye to right eye. This is useful in\ncertain applications that want to emulate the rendering passes\nwithout actually rendering in stereo mode.\n"},
  {"SetStereoTypeToLeft", PyvtkRenderWindow_SetStereoTypeToLeft, METH_VARARGS,
   "V.SetStereoTypeToLeft()\nC++: void SetStereoTypeToLeft()\n\nSet/Get what type of stereo rendering to use.  CrystalEyes mode\nuses frame-sequential capabilities available in OpenGL to drive\nLCD shutter glasses and stereo projectors.  RedBlue mode is a\nsimple type of stereo for use with red-blue glasses. Anaglyph\nmode is a superset of RedBlue mode, but the color output channels\ncan be configured using the AnaglyphColorMask and the color of\nthe original image can be (somewhat) maintained using\nAnaglyphColorSaturation;  the default colors for Anaglyph mode is\nred-cyan.  Interlaced stereo mode produces a composite image\nwhere horizontal lines alternate between left and right views. \nStereoLeft and StereoRight modes choose one or the other stereo\nview.  Dresden mode is yet another stereoscopic interleaving.\nFake simply causes the window to render twice without actually\nswapping the camera from left eye to right eye. This is useful in\ncertain applications that want to emulate the rendering passes\nwithout actually rendering in stereo mode.\n"},
  {"SetStereoTypeToRight", PyvtkRenderWindow_SetStereoTypeToRight, METH_VARARGS,
   "V.SetStereoTypeToRight()\nC++: void SetStereoTypeToRight()\n\nSet/Get what type of stereo rendering to use.  CrystalEyes mode\nuses frame-sequential capabilities available in OpenGL to drive\nLCD shutter glasses and stereo projectors.  RedBlue mode is a\nsimple type of stereo for use with red-blue glasses. Anaglyph\nmode is a superset of RedBlue mode, but the color output channels\ncan be configured using the AnaglyphColorMask and the color of\nthe original image can be (somewhat) maintained using\nAnaglyphColorSaturation;  the default colors for Anaglyph mode is\nred-cyan.  Interlaced stereo mode produces a composite image\nwhere horizontal lines alternate between left and right views. \nStereoLeft and StereoRight modes choose one or the other stereo\nview.  Dresden mode is yet another stereoscopic interleaving.\nFake simply causes the window to render twice without actually\nswapping the camera from left eye to right eye. This is useful in\ncertain applications that want to emulate the rendering passes\nwithout actually rendering in stereo mode.\n"},
  {"SetStereoTypeToDresden", PyvtkRenderWindow_SetStereoTypeToDresden, METH_VARARGS,
   "V.SetStereoTypeToDresden()\nC++: void SetStereoTypeToDresden()\n\nSet/Get what type of stereo rendering to use.  CrystalEyes mode\nuses frame-sequential capabilities available in OpenGL to drive\nLCD shutter glasses and stereo projectors.  RedBlue mode is a\nsimple type of stereo for use with red-blue glasses. Anaglyph\nmode is a superset of RedBlue mode, but the color output channels\ncan be configured using the AnaglyphColorMask and the color of\nthe original image can be (somewhat) maintained using\nAnaglyphColorSaturation;  the default colors for Anaglyph mode is\nred-cyan.  Interlaced stereo mode produces a composite image\nwhere horizontal lines alternate between left and right views. \nStereoLeft and StereoRight modes choose one or the other stereo\nview.  Dresden mode is yet another stereoscopic interleaving.\nFake simply causes the window to render twice without actually\nswapping the camera from left eye to right eye. This is useful in\ncertain applications that want to emulate the rendering passes\nwithout actually rendering in stereo mode.\n"},
  {"SetStereoTypeToAnaglyph", PyvtkRenderWindow_SetStereoTypeToAnaglyph, METH_VARARGS,
   "V.SetStereoTypeToAnaglyph()\nC++: void SetStereoTypeToAnaglyph()\n\nSet/Get what type of stereo rendering to use.  CrystalEyes mode\nuses frame-sequential capabilities available in OpenGL to drive\nLCD shutter glasses and stereo projectors.  RedBlue mode is a\nsimple type of stereo for use with red-blue glasses. Anaglyph\nmode is a superset of RedBlue mode, but the color output channels\ncan be configured using the AnaglyphColorMask and the color of\nthe original image can be (somewhat) maintained using\nAnaglyphColorSaturation;  the default colors for Anaglyph mode is\nred-cyan.  Interlaced stereo mode produces a composite image\nwhere horizontal lines alternate between left and right views. \nStereoLeft and StereoRight modes choose one or the other stereo\nview.  Dresden mode is yet another stereoscopic interleaving.\nFake simply causes the window to render twice without actually\nswapping the camera from left eye to right eye. This is useful in\ncertain applications that want to emulate the rendering passes\nwithout actually rendering in stereo mode.\n"},
  {"SetStereoTypeToCheckerboard", PyvtkRenderWindow_SetStereoTypeToCheckerboard, METH_VARARGS,
   "V.SetStereoTypeToCheckerboard()\nC++: void SetStereoTypeToCheckerboard()\n\nSet/Get what type of stereo rendering to use.  CrystalEyes mode\nuses frame-sequential capabilities available in OpenGL to drive\nLCD shutter glasses and stereo projectors.  RedBlue mode is a\nsimple type of stereo for use with red-blue glasses. Anaglyph\nmode is a superset of RedBlue mode, but the color output channels\ncan be configured using the AnaglyphColorMask and the color of\nthe original image can be (somewhat) maintained using\nAnaglyphColorSaturation;  the default colors for Anaglyph mode is\nred-cyan.  Interlaced stereo mode produces a composite image\nwhere horizontal lines alternate between left and right views. \nStereoLeft and StereoRight modes choose one or the other stereo\nview.  Dresden mode is yet another stereoscopic interleaving.\nFake simply causes the window to render twice without actually\nswapping the camera from left eye to right eye. This is useful in\ncertain applications that want to emulate the rendering passes\nwithout actually rendering in stereo mode.\n"},
  {"SetStereoTypeToSplitViewportHorizontal", PyvtkRenderWindow_SetStereoTypeToSplitViewportHorizontal, METH_VARARGS,
   "V.SetStereoTypeToSplitViewportHorizontal()\nC++: void SetStereoTypeToSplitViewportHorizontal()\n\nSet/Get what type of stereo rendering to use.  CrystalEyes mode\nuses frame-sequential capabilities available in OpenGL to drive\nLCD shutter glasses and stereo projectors.  RedBlue mode is a\nsimple type of stereo for use with red-blue glasses. Anaglyph\nmode is a superset of RedBlue mode, but the color output channels\ncan be configured using the AnaglyphColorMask and the color of\nthe original image can be (somewhat) maintained using\nAnaglyphColorSaturation;  the default colors for Anaglyph mode is\nred-cyan.  Interlaced stereo mode produces a composite image\nwhere horizontal lines alternate between left and right views. \nStereoLeft and StereoRight modes choose one or the other stereo\nview.  Dresden mode is yet another stereoscopic interleaving.\nFake simply causes the window to render twice without actually\nswapping the camera from left eye to right eye. This is useful in\ncertain applications that want to emulate the rendering passes\nwithout actually rendering in stereo mode.\n"},
  {"SetStereoTypeToFake", PyvtkRenderWindow_SetStereoTypeToFake, METH_VARARGS,
   "V.SetStereoTypeToFake()\nC++: void SetStereoTypeToFake()\n\nSet/Get what type of stereo rendering to use.  CrystalEyes mode\nuses frame-sequential capabilities available in OpenGL to drive\nLCD shutter glasses and stereo projectors.  RedBlue mode is a\nsimple type of stereo for use with red-blue glasses. Anaglyph\nmode is a superset of RedBlue mode, but the color output channels\ncan be configured using the AnaglyphColorMask and the color of\nthe original image can be (somewhat) maintained using\nAnaglyphColorSaturation;  the default colors for Anaglyph mode is\nred-cyan.  Interlaced stereo mode produces a composite image\nwhere horizontal lines alternate between left and right views. \nStereoLeft and StereoRight modes choose one or the other stereo\nview.  Dresden mode is yet another stereoscopic interleaving.\nFake simply causes the window to render twice without actually\nswapping the camera from left eye to right eye. This is useful in\ncertain applications that want to emulate the rendering passes\nwithout actually rendering in stereo mode.\n"},
  {"GetStereoTypeAsString", PyvtkRenderWindow_GetStereoTypeAsString, METH_VARARGS,
   "V.GetStereoTypeAsString() -> string\nC++: const char *GetStereoTypeAsString()\n\n"},
  {"StereoUpdate", PyvtkRenderWindow_StereoUpdate, METH_VARARGS,
   "V.StereoUpdate()\nC++: virtual void StereoUpdate()\n\nUpdate the system, if needed, due to stereo rendering. For some\nstereo methods, subclasses might need to switch some hardware\nsettings here.\n"},
  {"StereoMidpoint", PyvtkRenderWindow_StereoMidpoint, METH_VARARGS,
   "V.StereoMidpoint()\nC++: virtual void StereoMidpoint()\n\nIntermediate method performs operations required between the\nrendering of the left and right eye.\n"},
  {"StereoRenderComplete", PyvtkRenderWindow_StereoRenderComplete, METH_VARARGS,
   "V.StereoRenderComplete()\nC++: virtual void StereoRenderComplete()\n\nHandles work required once both views have been rendered when\nusing stereo rendering.\n"},
  {"SetAnaglyphColorSaturation", PyvtkRenderWindow_SetAnaglyphColorSaturation, METH_VARARGS,
   "V.SetAnaglyphColorSaturation(float)\nC++: virtual void SetAnaglyphColorSaturation(float _arg)\n\nSet/get the anaglyph color saturation factor.  This number ranges\nfrom 0.0 to 1.0:  0.0 means that no color from the original\nobject is maintained, 1.0 means all of the color is maintained. \nThe default value is 0.65.  Too much saturation can produce\nuncomfortable 3D viewing because anaglyphs also use color to\nencode 3D.\n"},
  {"GetAnaglyphColorSaturationMinValue", PyvtkRenderWindow_GetAnaglyphColorSaturationMinValue, METH_VARARGS,
   "V.GetAnaglyphColorSaturationMinValue() -> float\nC++: virtual float GetAnaglyphColorSaturationMinValue()\n\nSet/get the anaglyph color saturation factor.  This number ranges\nfrom 0.0 to 1.0:  0.0 means that no color from the original\nobject is maintained, 1.0 means all of the color is maintained. \nThe default value is 0.65.  Too much saturation can produce\nuncomfortable 3D viewing because anaglyphs also use color to\nencode 3D.\n"},
  {"GetAnaglyphColorSaturationMaxValue", PyvtkRenderWindow_GetAnaglyphColorSaturationMaxValue, METH_VARARGS,
   "V.GetAnaglyphColorSaturationMaxValue() -> float\nC++: virtual float GetAnaglyphColorSaturationMaxValue()\n\nSet/get the anaglyph color saturation factor.  This number ranges\nfrom 0.0 to 1.0:  0.0 means that no color from the original\nobject is maintained, 1.0 means all of the color is maintained. \nThe default value is 0.65.  Too much saturation can produce\nuncomfortable 3D viewing because anaglyphs also use color to\nencode 3D.\n"},
  {"GetAnaglyphColorSaturation", PyvtkRenderWindow_GetAnaglyphColorSaturation, METH_VARARGS,
   "V.GetAnaglyphColorSaturation() -> float\nC++: virtual float GetAnaglyphColorSaturation()\n\nSet/get the anaglyph color saturation factor.  This number ranges\nfrom 0.0 to 1.0:  0.0 means that no color from the original\nobject is maintained, 1.0 means all of the color is maintained. \nThe default value is 0.65.  Too much saturation can produce\nuncomfortable 3D viewing because anaglyphs also use color to\nencode 3D.\n"},
  {"SetAnaglyphColorMask", PyvtkRenderWindow_SetAnaglyphColorMask, METH_VARARGS,
   "V.SetAnaglyphColorMask(int, int)\nC++: void SetAnaglyphColorMask(int, int)\nV.SetAnaglyphColorMask((int, int))\nC++: void SetAnaglyphColorMask(int a[2])\n\n"},
  {"GetAnaglyphColorMask", PyvtkRenderWindow_GetAnaglyphColorMask, METH_VARARGS,
   "V.GetAnaglyphColorMask() -> (int, int)\nC++: int *GetAnaglyphColorMask()\n\nSet/get the anaglyph color mask values.  These two numbers are\nbits mask that control which color channels of the original\nstereo images are used to produce the final anaglyph image.  The\nfirst value is the color mask for the left view, the second the\nmask for the right view.  If a bit in the mask is on for a\nparticular color for a view, that color is passed on to the final\nview; if it is not set, that channel for that view is ignored.\nThe bits are arranged as r, g, and b, so r = 4, g = 2, and b = 1.\nBy default, the first value (the left view) is set to 4, and the\nsecond value is set to 3.  That means that the red output channel\ncomes from the left view, and the green and blue values come from\nthe right view.\n"},
  {"WindowRemap", PyvtkRenderWindow_WindowRemap, METH_VARARGS,
   "V.WindowRemap()\nC++: virtual void WindowRemap()\n\nRemap the rendering window. This probably only works on UNIX\nright now. It is useful for changing properties that can't\nnormally be changed once the window is up.\n"},
  {"SetSwapBuffers", PyvtkRenderWindow_SetSwapBuffers, METH_VARARGS,
   "V.SetSwapBuffers(int)\nC++: virtual void SetSwapBuffers(vtkTypeBool _arg)\n\nTurn on/off buffer swapping between images.\n"},
  {"GetSwapBuffers", PyvtkRenderWindow_GetSwapBuffers, METH_VARARGS,
   "V.GetSwapBuffers() -> int\nC++: virtual vtkTypeBool GetSwapBuffers()\n\nTurn on/off buffer swapping between images.\n"},
  {"SwapBuffersOn", PyvtkRenderWindow_SwapBuffersOn, METH_VARARGS,
   "V.SwapBuffersOn()\nC++: virtual void SwapBuffersOn()\n\nTurn on/off buffer swapping between images.\n"},
  {"SwapBuffersOff", PyvtkRenderWindow_SwapBuffersOff, METH_VARARGS,
   "V.SwapBuffersOff()\nC++: virtual void SwapBuffersOff()\n\nTurn on/off buffer swapping between images.\n"},
  {"SetPixelData", PyvtkRenderWindow_SetPixelData, METH_VARARGS,
   "V.SetPixelData(int, int, int, int, [int, ...], int, int) -> int\nC++: virtual int SetPixelData(int x, int y, int x2, int y2,\n    unsigned char *data, int front, int right=0)\nV.SetPixelData(int, int, int, int, vtkUnsignedCharArray, int, int)\n     -> int\nC++: virtual int SetPixelData(int x, int y, int x2, int y2,\n    vtkUnsignedCharArray *data, int front, int right=0)\n\nSet/Get the pixel data of an image, transmitted as RGBRGBRGB. The\nfront argument indicates if the front buffer should be used or\nthe back buffer. It is the caller's responsibility to delete the\nresulting array. It is very important to realize that the memory\nin this array is organized from the bottom of the window to the\ntop. The origin of the screen is in the lower left corner. The y\naxis increases as you go up the screen. So the storage of pixels\nis from left to right and from bottom to top. (x,y) is any corner\nof the rectangle. (x2,y2) is its opposite corner on the diagonal.\n"},
  {"GetRGBAPixelData", PyvtkRenderWindow_GetRGBAPixelData, METH_VARARGS,
   "V.GetRGBAPixelData(int, int, int, int, int, int) -> (float, ...)\nC++: virtual float *GetRGBAPixelData(int x, int y, int x2, int y2,\n     int front, int right=0)\nV.GetRGBAPixelData(int, int, int, int, int, vtkFloatArray, int)\n    -> int\nC++: virtual int GetRGBAPixelData(int x, int y, int x2, int y2,\n    int front, vtkFloatArray *data, int right=0)\n\nSame as Get/SetPixelData except that the image also contains an\nalpha component. The image is transmitted as RGBARGBARGBA... each\nof which is a float value. The \"blend\" parameter controls whether\nthe SetRGBAPixelData method blends the data with the previous\ncontents of the frame buffer or completely replaces the frame\nbuffer data.\n"},
  {"SetRGBAPixelData", PyvtkRenderWindow_SetRGBAPixelData, METH_VARARGS,
   "V.SetRGBAPixelData(int, int, int, int, [float, ...], int, int,\n    int) -> int\nC++: virtual int SetRGBAPixelData(int x, int y, int x2, int y2,\n    float *, int front, int blend=0, int right=0)\nV.SetRGBAPixelData(int, int, int, int, vtkFloatArray, int, int,\n    int) -> int\nC++: virtual int SetRGBAPixelData(int, int, int, int,\n    vtkFloatArray *, int, int blend=0, int right=0)\n\nSame as Get/SetPixelData except that the image also contains an\nalpha component. The image is transmitted as RGBARGBARGBA... each\nof which is a float value. The \"blend\" parameter controls whether\nthe SetRGBAPixelData method blends the data with the previous\ncontents of the frame buffer or completely replaces the frame\nbuffer data.\n"},
  {"ReleaseRGBAPixelData", PyvtkRenderWindow_ReleaseRGBAPixelData, METH_VARARGS,
   "V.ReleaseRGBAPixelData([float, ...])\nC++: virtual void ReleaseRGBAPixelData(float *data)\n\nSame as Get/SetPixelData except that the image also contains an\nalpha component. The image is transmitted as RGBARGBARGBA... each\nof which is a float value. The \"blend\" parameter controls whether\nthe SetRGBAPixelData method blends the data with the previous\ncontents of the frame buffer or completely replaces the frame\nbuffer data.\n"},
  {"GetRGBACharPixelData", PyvtkRenderWindow_GetRGBACharPixelData, METH_VARARGS,
   "V.GetRGBACharPixelData(int, int, int, int, int, int) -> (int, ...)\nC++: virtual unsigned char *GetRGBACharPixelData(int x, int y,\n    int x2, int y2, int front, int right=0)\nV.GetRGBACharPixelData(int, int, int, int, int,\n    vtkUnsignedCharArray, int) -> int\nC++: virtual int GetRGBACharPixelData(int x, int y, int x2,\n    int y2, int front, vtkUnsignedCharArray *data, int right=0)\n\nSame as Get/SetPixelData except that the image also contains an\nalpha component. The image is transmitted as RGBARGBARGBA... each\nof which is a float value. The \"blend\" parameter controls whether\nthe SetRGBAPixelData method blends the data with the previous\ncontents of the frame buffer or completely replaces the frame\nbuffer data.\n"},
  {"SetRGBACharPixelData", PyvtkRenderWindow_SetRGBACharPixelData, METH_VARARGS,
   "V.SetRGBACharPixelData(int, int, int, int, [int, ...], int, int,\n    int) -> int\nC++: virtual int SetRGBACharPixelData(int x, int y, int x2,\n    int y2, unsigned char *data, int front, int blend=0,\n    int right=0)\nV.SetRGBACharPixelData(int, int, int, int, vtkUnsignedCharArray,\n    int, int, int) -> int\nC++: virtual int SetRGBACharPixelData(int x, int y, int x2,\n    int y2, vtkUnsignedCharArray *data, int front, int blend=0,\n    int right=0)\n\nSame as Get/SetPixelData except that the image also contains an\nalpha component. The image is transmitted as RGBARGBARGBA... each\nof which is a float value. The \"blend\" parameter controls whether\nthe SetRGBAPixelData method blends the data with the previous\ncontents of the frame buffer or completely replaces the frame\nbuffer data.\n"},
  {"GetZbufferData", PyvtkRenderWindow_GetZbufferData, METH_VARARGS,
   "V.GetZbufferData(int, int, int, int) -> (float, ...)\nC++: virtual float *GetZbufferData(int x, int y, int x2, int y2)\nV.GetZbufferData(int, int, int, int, [float, ...]) -> int\nC++: virtual int GetZbufferData(int x, int y, int x2, int y2,\n    float *z)\nV.GetZbufferData(int, int, int, int, vtkFloatArray) -> int\nC++: virtual int GetZbufferData(int x, int y, int x2, int y2,\n    vtkFloatArray *z)\n\nSet/Get the zbuffer data from the frame buffer. (x,y) is any\ncorner of the rectangle. (x2,y2) is its opposite corner on the\ndiagonal.\n"},
  {"SetZbufferData", PyvtkRenderWindow_SetZbufferData, METH_VARARGS,
   "V.SetZbufferData(int, int, int, int, [float, ...]) -> int\nC++: virtual int SetZbufferData(int x, int y, int x2, int y2,\n    float *z)\nV.SetZbufferData(int, int, int, int, vtkFloatArray) -> int\nC++: virtual int SetZbufferData(int x, int y, int x2, int y2,\n    vtkFloatArray *z)\n\nSet/Get the zbuffer data from the frame buffer. (x,y) is any\ncorner of the rectangle. (x2,y2) is its opposite corner on the\ndiagonal.\n"},
  {"GetZbufferDataAtPoint", PyvtkRenderWindow_GetZbufferDataAtPoint, METH_VARARGS,
   "V.GetZbufferDataAtPoint(int, int) -> float\nC++: float GetZbufferDataAtPoint(int x, int y)\n\nSet/Get the zbuffer data from the frame buffer. (x,y) is any\ncorner of the rectangle. (x2,y2) is its opposite corner on the\ndiagonal.\n"},
  {"GetNeverRendered", PyvtkRenderWindow_GetNeverRendered, METH_VARARGS,
   "V.GetNeverRendered() -> int\nC++: virtual int GetNeverRendered()\n\nThis flag is set if the window hasn't rendered since it was\ncreated\n"},
  {"GetAbortRender", PyvtkRenderWindow_GetAbortRender, METH_VARARGS,
   "V.GetAbortRender() -> int\nC++: virtual int GetAbortRender()\n\nThis is a flag that can be set to interrupt a rendering that is\nin progress.\n"},
  {"SetAbortRender", PyvtkRenderWindow_SetAbortRender, METH_VARARGS,
   "V.SetAbortRender(int)\nC++: virtual void SetAbortRender(int _arg)\n\nThis is a flag that can be set to interrupt a rendering that is\nin progress.\n"},
  {"GetInAbortCheck", PyvtkRenderWindow_GetInAbortCheck, METH_VARARGS,
   "V.GetInAbortCheck() -> int\nC++: virtual int GetInAbortCheck()\n\nThis is a flag that can be set to interrupt a rendering that is\nin progress.\n"},
  {"SetInAbortCheck", PyvtkRenderWindow_SetInAbortCheck, METH_VARARGS,
   "V.SetInAbortCheck(int)\nC++: virtual void SetInAbortCheck(int _arg)\n\nThis is a flag that can be set to interrupt a rendering that is\nin progress.\n"},
  {"CheckAbortStatus", PyvtkRenderWindow_CheckAbortStatus, METH_VARARGS,
   "V.CheckAbortStatus() -> int\nC++: virtual int CheckAbortStatus()\n\nThis is a flag that can be set to interrupt a rendering that is\nin progress.\n"},
  {"GetIsPicking", PyvtkRenderWindow_GetIsPicking, METH_VARARGS,
   "V.GetIsPicking() -> int\nC++: virtual vtkTypeBool GetIsPicking()\n\n"},
  {"SetIsPicking", PyvtkRenderWindow_SetIsPicking, METH_VARARGS,
   "V.SetIsPicking(int)\nC++: virtual void SetIsPicking(vtkTypeBool _arg)\n\n"},
  {"IsPickingOn", PyvtkRenderWindow_IsPickingOn, METH_VARARGS,
   "V.IsPickingOn()\nC++: virtual void IsPickingOn()\n\n"},
  {"IsPickingOff", PyvtkRenderWindow_IsPickingOff, METH_VARARGS,
   "V.IsPickingOff()\nC++: virtual void IsPickingOff()\n\n"},
  {"GetEventPending", PyvtkRenderWindow_GetEventPending, METH_VARARGS,
   "V.GetEventPending() -> int\nC++: virtual int GetEventPending()\n\nCheck to see if a mouse button has been pressed.  All other\nevents are ignored by this method.  Ideally, you want to abort\nthe render on any event which causes the DesiredUpdateRate to\nswitch from a high-quality rate to a more interactive rate.\n"},
  {"CheckInRenderStatus", PyvtkRenderWindow_CheckInRenderStatus, METH_VARARGS,
   "V.CheckInRenderStatus() -> int\nC++: virtual int CheckInRenderStatus()\n\nAre we rendering at the moment\n"},
  {"ClearInRenderStatus", PyvtkRenderWindow_ClearInRenderStatus, METH_VARARGS,
   "V.ClearInRenderStatus()\nC++: virtual void ClearInRenderStatus()\n\nClear status (after an exception was thrown for example)\n"},
  {"SetDesiredUpdateRate", PyvtkRenderWindow_SetDesiredUpdateRate, METH_VARARGS,
   "V.SetDesiredUpdateRate(float)\nC++: virtual void SetDesiredUpdateRate(double)\n\nSet/Get the desired update rate. This is used with the\nvtkLODActor class. When using level of detail actors you need to\nspecify what update rate you require. The LODActors then will\npick the correct resolution to meet your desired update rate in\nframes per second. A value of zero indicates that they can use\nall the time they want to.\n"},
  {"GetDesiredUpdateRate", PyvtkRenderWindow_GetDesiredUpdateRate, METH_VARARGS,
   "V.GetDesiredUpdateRate() -> float\nC++: virtual double GetDesiredUpdateRate()\n\nSet/Get the desired update rate. This is used with the\nvtkLODActor class. When using level of detail actors you need to\nspecify what update rate you require. The LODActors then will\npick the correct resolution to meet your desired update rate in\nframes per second. A value of zero indicates that they can use\nall the time they want to.\n"},
  {"GetNumberOfLayers", PyvtkRenderWindow_GetNumberOfLayers, METH_VARARGS,
   "V.GetNumberOfLayers() -> int\nC++: virtual int GetNumberOfLayers()\n\nGet the number of layers for renderers.  Each renderer should\nhave its layer set individually.  Some algorithms iterate through\nall layers, so it is not wise to set the number of layers to be\nexorbitantly large (say bigger than 100).\n"},
  {"SetNumberOfLayers", PyvtkRenderWindow_SetNumberOfLayers, METH_VARARGS,
   "V.SetNumberOfLayers(int)\nC++: virtual void SetNumberOfLayers(int _arg)\n\nGet the number of layers for renderers.  Each renderer should\nhave its layer set individually.  Some algorithms iterate through\nall layers, so it is not wise to set the number of layers to be\nexorbitantly large (say bigger than 100).\n"},
  {"GetNumberOfLayersMinValue", PyvtkRenderWindow_GetNumberOfLayersMinValue, METH_VARARGS,
   "V.GetNumberOfLayersMinValue() -> int\nC++: virtual int GetNumberOfLayersMinValue()\n\nGet the number of layers for renderers.  Each renderer should\nhave its layer set individually.  Some algorithms iterate through\nall layers, so it is not wise to set the number of layers to be\nexorbitantly large (say bigger than 100).\n"},
  {"GetNumberOfLayersMaxValue", PyvtkRenderWindow_GetNumberOfLayersMaxValue, METH_VARARGS,
   "V.GetNumberOfLayersMaxValue() -> int\nC++: virtual int GetNumberOfLayersMaxValue()\n\nGet the number of layers for renderers.  Each renderer should\nhave its layer set individually.  Some algorithms iterate through\nall layers, so it is not wise to set the number of layers to be\nexorbitantly large (say bigger than 100).\n"},
  {"GetInteractor", PyvtkRenderWindow_GetInteractor, METH_VARARGS,
   "V.GetInteractor() -> vtkRenderWindowInteractor\nC++: virtual vtkRenderWindowInteractor *GetInteractor()\n\nGet the interactor associated with this render window\n"},
  {"SetInteractor", PyvtkRenderWindow_SetInteractor, METH_VARARGS,
   "V.SetInteractor(vtkRenderWindowInteractor)\nC++: void SetInteractor(vtkRenderWindowInteractor *)\n\nSet the interactor to the render window\n"},
  {"SetDisplayId", PyvtkRenderWindow_SetDisplayId, METH_VARARGS,
   "V.SetDisplayId(void)\nC++: void SetDisplayId(void *) override = 0;\n\nDummy stubs for vtkWindow API.\n"},
  {"SetWindowId", PyvtkRenderWindow_SetWindowId, METH_VARARGS,
   "V.SetWindowId(void)\nC++: void SetWindowId(void *) override = 0;\n\nDummy stubs for vtkWindow API.\n"},
  {"SetNextWindowId", PyvtkRenderWindow_SetNextWindowId, METH_VARARGS,
   "V.SetNextWindowId(void)\nC++: virtual void SetNextWindowId(void *)\n\nDummy stubs for vtkWindow API.\n"},
  {"SetParentId", PyvtkRenderWindow_SetParentId, METH_VARARGS,
   "V.SetParentId(void)\nC++: void SetParentId(void *) override = 0;\n\nDummy stubs for vtkWindow API.\n"},
  {"GetGenericDisplayId", PyvtkRenderWindow_GetGenericDisplayId, METH_VARARGS,
   "V.GetGenericDisplayId() -> void\nC++: void *GetGenericDisplayId() override = 0;\n\nDummy stubs for vtkWindow API.\n"},
  {"GetGenericWindowId", PyvtkRenderWindow_GetGenericWindowId, METH_VARARGS,
   "V.GetGenericWindowId() -> void\nC++: void *GetGenericWindowId() override = 0;\n\nDummy stubs for vtkWindow API.\n"},
  {"GetGenericParentId", PyvtkRenderWindow_GetGenericParentId, METH_VARARGS,
   "V.GetGenericParentId() -> void\nC++: void *GetGenericParentId() override = 0;\n\nDummy stubs for vtkWindow API.\n"},
  {"GetGenericContext", PyvtkRenderWindow_GetGenericContext, METH_VARARGS,
   "V.GetGenericContext() -> void\nC++: void *GetGenericContext() override = 0;\n\nDummy stubs for vtkWindow API.\n"},
  {"GetGenericDrawable", PyvtkRenderWindow_GetGenericDrawable, METH_VARARGS,
   "V.GetGenericDrawable() -> void\nC++: void *GetGenericDrawable() override = 0;\n\nDummy stubs for vtkWindow API.\n"},
  {"SetWindowInfo", PyvtkRenderWindow_SetWindowInfo, METH_VARARGS,
   "V.SetWindowInfo(string)\nC++: void SetWindowInfo(const char *) override = 0;\n\nDummy stubs for vtkWindow API.\n"},
  {"SetNextWindowInfo", PyvtkRenderWindow_SetNextWindowInfo, METH_VARARGS,
   "V.SetNextWindowInfo(string)\nC++: virtual void SetNextWindowInfo(const char *)\n\nDummy stubs for vtkWindow API.\n"},
  {"SetParentInfo", PyvtkRenderWindow_SetParentInfo, METH_VARARGS,
   "V.SetParentInfo(string)\nC++: void SetParentInfo(const char *) override = 0;\n\nDummy stubs for vtkWindow API.\n"},
  {"InitializeFromCurrentContext", PyvtkRenderWindow_InitializeFromCurrentContext, METH_VARARGS,
   "V.InitializeFromCurrentContext() -> bool\nC++: virtual bool InitializeFromCurrentContext()\n\nInitialize the render window from the information associated with\nthe currently activated OpenGL context.\n"},
  {"SetSharedRenderWindow", PyvtkRenderWindow_SetSharedRenderWindow, METH_VARARGS,
   "V.SetSharedRenderWindow(vtkRenderWindow)\nC++: virtual void SetSharedRenderWindow(vtkRenderWindow *)\n\nSet/Get an already existing window that this window should share\ndata with if possible. This must be set after the shared render\nwindow has been created and initialized but before this window\nhas been initialized. Not all platforms support data sharing.\n"},
  {"GetSharedRenderWindow", PyvtkRenderWindow_GetSharedRenderWindow, METH_VARARGS,
   "V.GetSharedRenderWindow() -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetSharedRenderWindow()\n\nSet/Get an already existing window that this window should share\ndata with if possible. This must be set after the shared render\nwindow has been created and initialized but before this window\nhas been initialized. Not all platforms support data sharing.\n"},
  {"GetPlatformSupportsRenderWindowSharing", PyvtkRenderWindow_GetPlatformSupportsRenderWindowSharing, METH_VARARGS,
   "V.GetPlatformSupportsRenderWindowSharing() -> bool\nC++: virtual bool GetPlatformSupportsRenderWindowSharing()\n\nSet/Get an already existing window that this window should share\ndata with if possible. This must be set after the shared render\nwindow has been created and initialized but before this window\nhas been initialized. Not all platforms support data sharing.\n"},
  {"MakeCurrent", PyvtkRenderWindow_MakeCurrent, METH_VARARGS,
   "V.MakeCurrent()\nC++: void MakeCurrent() override = 0;\n\nAttempt to make this window the current graphics context for the\ncalling thread.\n"},
  {"IsCurrent", PyvtkRenderWindow_IsCurrent, METH_VARARGS,
   "V.IsCurrent() -> bool\nC++: virtual bool IsCurrent()\n\nTells if this window is the current graphics context for the\ncalling thread.\n"},
  {"IsDrawable", PyvtkRenderWindow_IsDrawable, METH_VARARGS,
   "V.IsDrawable() -> bool\nC++: virtual bool IsDrawable()\n\nTest if the window has a valid drawable. This is currently only\nan issue on Mac OS X Cocoa where rendering to an invalid drawable\nresults in all OpenGL calls to fail with \"invalid framebuffer\noperation\".\n"},
  {"SetForceMakeCurrent", PyvtkRenderWindow_SetForceMakeCurrent, METH_VARARGS,
   "V.SetForceMakeCurrent()\nC++: virtual void SetForceMakeCurrent()\n\nIf called, allow MakeCurrent() to skip cache-check when called.\nMakeCurrent() reverts to original behavior of cache-checking on\nthe next render.\n"},
  {"ReportCapabilities", PyvtkRenderWindow_ReportCapabilities, METH_VARARGS,
   "V.ReportCapabilities() -> string\nC++: virtual const char *ReportCapabilities()\n\nGet report of capabilities for the render window\n"},
  {"SupportsOpenGL", PyvtkRenderWindow_SupportsOpenGL, METH_VARARGS,
   "V.SupportsOpenGL() -> int\nC++: virtual int SupportsOpenGL()\n\nDoes this render window support OpenGL? 0-false, 1-true\n"},
  {"IsDirect", PyvtkRenderWindow_IsDirect, METH_VARARGS,
   "V.IsDirect() -> int\nC++: virtual int IsDirect()\n\nIs this render window using hardware acceleration? 0-false,\n1-true\n"},
  {"GetDepthBufferSize", PyvtkRenderWindow_GetDepthBufferSize, METH_VARARGS,
   "V.GetDepthBufferSize() -> int\nC++: virtual int GetDepthBufferSize()\n\nThis method should be defined by the subclass. How many bits of\nprecision are there in the zbuffer?\n"},
  {"GetColorBufferSizes", PyvtkRenderWindow_GetColorBufferSizes, METH_VARARGS,
   "V.GetColorBufferSizes([int, ...]) -> int\nC++: virtual int GetColorBufferSizes(int *rgba)\n\nGet the size of the color buffer. Returns 0 if not able to\ndetermine otherwise sets R G B and A into buffer.\n"},
  {"SetMultiSamples", PyvtkRenderWindow_SetMultiSamples, METH_VARARGS,
   "V.SetMultiSamples(int)\nC++: virtual void SetMultiSamples(int _arg)\n\nSet / Get the number of multisamples to use for hardware\nantialiasing.\n"},
  {"GetMultiSamples", PyvtkRenderWindow_GetMultiSamples, METH_VARARGS,
   "V.GetMultiSamples() -> int\nC++: virtual int GetMultiSamples()\n\nSet / Get the number of multisamples to use for hardware\nantialiasing.\n"},
  {"SetStencilCapable", PyvtkRenderWindow_SetStencilCapable, METH_VARARGS,
   "V.SetStencilCapable(int)\nC++: virtual void SetStencilCapable(vtkTypeBool _arg)\n\nSet / Get the availability of the stencil buffer.\n"},
  {"GetStencilCapable", PyvtkRenderWindow_GetStencilCapable, METH_VARARGS,
   "V.GetStencilCapable() -> int\nC++: virtual vtkTypeBool GetStencilCapable()\n\nSet / Get the availability of the stencil buffer.\n"},
  {"StencilCapableOn", PyvtkRenderWindow_StencilCapableOn, METH_VARARGS,
   "V.StencilCapableOn()\nC++: virtual void StencilCapableOn()\n\nSet / Get the availability of the stencil buffer.\n"},
  {"StencilCapableOff", PyvtkRenderWindow_StencilCapableOff, METH_VARARGS,
   "V.StencilCapableOff()\nC++: virtual void StencilCapableOff()\n\nSet / Get the availability of the stencil buffer.\n"},
  {"SetDeviceIndex", PyvtkRenderWindow_SetDeviceIndex, METH_VARARGS,
   "V.SetDeviceIndex(int)\nC++: virtual void SetDeviceIndex(int _arg)\n\nIf there are several graphics card installed on a system, this\nindex can be used to specify which card you want to render to.\nthe default is 0. This may not work on all derived render window\nand it may need to be set before the first render.\n"},
  {"GetDeviceIndex", PyvtkRenderWindow_GetDeviceIndex, METH_VARARGS,
   "V.GetDeviceIndex() -> int\nC++: virtual int GetDeviceIndex()\n\nIf there are several graphics card installed on a system, this\nindex can be used to specify which card you want to render to.\nthe default is 0. This may not work on all derived render window\nand it may need to be set before the first render.\n"},
  {"GetNumberOfDevices", PyvtkRenderWindow_GetNumberOfDevices, METH_VARARGS,
   "V.GetNumberOfDevices() -> int\nC++: virtual int GetNumberOfDevices()\n\nReturns the number of devices (graphics cards) on a system. This\nmay not work on all derived render windows.\n"},
  {"SetUseOffScreenBuffers", PyvtkRenderWindow_SetUseOffScreenBuffers, METH_VARARGS,
   "V.SetUseOffScreenBuffers(bool) -> int\nC++: virtual int SetUseOffScreenBuffers(bool)\n\nCreate and bind offscreen rendering buffers without destroying\nthe current OpenGL context. This allows to temporary switch to\noffscreen rendering (ie. to make a screenshot even if the window\nis hidden). Return if the creation was successful (1) or not (0).\nNote: This function requires that the device supports OpenGL\nframebuffer extension. The function has no effect if\nOffScreenRendering is ON.\n"},
  {"GetUseOffScreenBuffers", PyvtkRenderWindow_GetUseOffScreenBuffers, METH_VARARGS,
   "V.GetUseOffScreenBuffers() -> bool\nC++: virtual bool GetUseOffScreenBuffers()\n\n"},
  {"GetUseSRGBColorSpace", PyvtkRenderWindow_GetUseSRGBColorSpace, METH_VARARGS,
   "V.GetUseSRGBColorSpace() -> bool\nC++: virtual bool GetUseSRGBColorSpace()\n\nSet/Get if we want this window to use the sRGB color space. Some\nhardware/drivers do not fully support this.\n"},
  {"SetUseSRGBColorSpace", PyvtkRenderWindow_SetUseSRGBColorSpace, METH_VARARGS,
   "V.SetUseSRGBColorSpace(bool)\nC++: virtual void SetUseSRGBColorSpace(bool _arg)\n\nSet/Get if we want this window to use the sRGB color space. Some\nhardware/drivers do not fully support this.\n"},
  {"UseSRGBColorSpaceOn", PyvtkRenderWindow_UseSRGBColorSpaceOn, METH_VARARGS,
   "V.UseSRGBColorSpaceOn()\nC++: virtual void UseSRGBColorSpaceOn()\n\nSet/Get if we want this window to use the sRGB color space. Some\nhardware/drivers do not fully support this.\n"},
  {"UseSRGBColorSpaceOff", PyvtkRenderWindow_UseSRGBColorSpaceOff, METH_VARARGS,
   "V.UseSRGBColorSpaceOff()\nC++: virtual void UseSRGBColorSpaceOff()\n\nSet/Get if we want this window to use the sRGB color space. Some\nhardware/drivers do not fully support this.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRenderWindow_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkRenderWindow", // tp_name
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
  PyvtkRenderWindow_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRenderWindow_StaticNew()
{
  return vtkRenderWindow::New();
}

PyObject *PyvtkRenderWindow_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRenderWindow_Type, PyvtkRenderWindow_Methods,
    "vtkRenderWindow",
 &PyvtkRenderWindow_StaticNew);

  PyTypeObject *pytype = &PyvtkRenderWindow_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkWindow_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRenderWindow(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRenderWindow_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRenderWindow", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 21; c++)
  {
    static const struct { const char *name; int value; }
      constants[21] = {
        { "VTK_STEREO_CRYSTAL_EYES", 1 },
        { "VTK_STEREO_RED_BLUE", 2 },
        { "VTK_STEREO_INTERLACED", 3 },
        { "VTK_STEREO_LEFT", 4 },
        { "VTK_STEREO_RIGHT", 5 },
        { "VTK_STEREO_DRESDEN", 6 },
        { "VTK_STEREO_ANAGLYPH", 7 },
        { "VTK_STEREO_CHECKERBOARD", 8 },
        { "VTK_STEREO_SPLITVIEWPORT_HORIZONTAL", 9 },
        { "VTK_STEREO_FAKE", 10 },
        { "VTK_CURSOR_DEFAULT", 0 },
        { "VTK_CURSOR_ARROW", 1 },
        { "VTK_CURSOR_SIZENE", 2 },
        { "VTK_CURSOR_SIZENW", 3 },
        { "VTK_CURSOR_SIZESW", 4 },
        { "VTK_CURSOR_SIZESE", 5 },
        { "VTK_CURSOR_SIZENS", 6 },
        { "VTK_CURSOR_SIZEWE", 7 },
        { "VTK_CURSOR_SIZEALL", 8 },
        { "VTK_CURSOR_HAND", 9 },
        { "VTK_CURSOR_CROSSHAIR", 10 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

