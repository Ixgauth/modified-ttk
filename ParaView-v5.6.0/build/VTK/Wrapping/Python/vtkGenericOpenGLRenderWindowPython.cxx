// python wrapper for vtkGenericOpenGLRenderWindow
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
#include "vtkGenericOpenGLRenderWindow.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenericOpenGLRenderWindow(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGenericOpenGLRenderWindow_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLRenderWindow_ClassNew
extern "C" { PyObject *PyvtkOpenGLRenderWindow_ClassNew(); }
#define DECLARED_PyvtkOpenGLRenderWindow_ClassNew
#endif

static const char *PyvtkGenericOpenGLRenderWindow_Doc =
  "vtkGenericOpenGLRenderWindow - platform independent render window\n\n"
  "Superclass: vtkOpenGLRenderWindow\n\n"
  "vtkGenericOpenGLRenderWindow provides a skeleton for implementing a\n"
  "render window using one's own OpenGL context and drawable. To be\n"
  "effective, one must register an observer for WindowMakeCurrentEvent,\n"
  "WindowIsCurrentEvent and WindowFrameEvent.  When this class sends a\n"
  "WindowIsCurrentEvent, the call data is an bool* which one can use to\n"
  "return whether the context is current.\n\n";


static PyObject *
PyvtkGenericOpenGLRenderWindow_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericOpenGLRenderWindow::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericOpenGLRenderWindow::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericOpenGLRenderWindow *tempr = vtkGenericOpenGLRenderWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericOpenGLRenderWindow *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericOpenGLRenderWindow::NewInstance());

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
PyvtkGenericOpenGLRenderWindow_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Finalize();
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::Finalize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_Frame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Frame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Frame();
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::Frame();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_MakeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MakeCurrent();
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::MakeCurrent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_IsCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsCurrent() :
      op->vtkGenericOpenGLRenderWindow::IsCurrent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SupportsOpenGL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportsOpenGL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->SupportsOpenGL() :
      op->vtkGenericOpenGLRenderWindow::SupportsOpenGL());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_IsDirect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDirect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsDirect() :
      op->vtkGenericOpenGLRenderWindow::IsDirect());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetFrontBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrontBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFrontBuffer(temp0);
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::SetFrontBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetFrontLeftBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrontLeftBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFrontLeftBuffer(temp0);
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::SetFrontLeftBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetFrontRightBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrontRightBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFrontRightBuffer(temp0);
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::SetFrontRightBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetBackBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackBuffer(temp0);
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::SetBackBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetBackLeftBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLeftBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackLeftBuffer(temp0);
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::SetBackLeftBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetBackRightBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackRightBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackRightBuffer(temp0);
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::SetBackRightBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_PushState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PushState();
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::PushState();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_PopState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PopState();
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::PopState();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetWindowId(temp0);
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::SetWindowId(temp0);
    }

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
PyvtkGenericOpenGLRenderWindow_GetGenericWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericWindowId() :
      op->vtkGenericOpenGLRenderWindow::GetGenericWindowId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayId(temp0);
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::SetDisplayId(temp0);
    }

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
PyvtkGenericOpenGLRenderWindow_SetParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetParentId(temp0);
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::SetParentId(temp0);
    }

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
PyvtkGenericOpenGLRenderWindow_GetGenericDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericDisplayId() :
      op->vtkGenericOpenGLRenderWindow::GetGenericDisplayId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetGenericParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericParentId() :
      op->vtkGenericOpenGLRenderWindow::GetGenericParentId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetGenericContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericContext() :
      op->vtkGenericOpenGLRenderWindow::GetGenericContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetGenericDrawable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDrawable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericDrawable() :
      op->vtkGenericOpenGLRenderWindow::GetGenericDrawable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetWindowInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWindowInfo(temp0);
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::SetWindowInfo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetParentInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParentInfo(temp0);
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::SetParentInfo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetScreenSize() :
      op->vtkGenericOpenGLRenderWindow::GetScreenSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Start();
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::Start();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_HideCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HideCursor();
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::HideCursor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_ShowCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowCursor();
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::ShowCursor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetFullScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFullScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFullScreen(temp0);
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::SetFullScreen(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_WindowRemap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WindowRemap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WindowRemap();
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::WindowRemap();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetEventPending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventPending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEventPending() :
      op->vtkGenericOpenGLRenderWindow::GetEventPending());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetNextWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNextWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetNextWindowId(temp0);
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::SetNextWindowId(temp0);
    }

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
PyvtkGenericOpenGLRenderWindow_SetNextWindowInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNextWindowInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNextWindowInfo(temp0);
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::SetNextWindowInfo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_CreateAWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateAWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateAWindow();
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::CreateAWindow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_DestroyWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DestroyWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DestroyWindow();
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::DestroyWindow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetIsDirect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsDirect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIsDirect(temp0);
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::SetIsDirect(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetSupportsOpenGL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSupportsOpenGL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSupportsOpenGL(temp0);
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::SetSupportsOpenGL(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetIsCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIsCurrent(temp0);
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::SetIsCurrent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Render();
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::Render();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetMaximumHardwareLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumHardwareLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaximumHardwareLineWidth() :
      op->vtkGenericOpenGLRenderWindow::GetMaximumHardwareLineWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetForceMaximumHardwareLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceMaximumHardwareLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceMaximumHardwareLineWidth(temp0);
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::SetForceMaximumHardwareLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetForceMaximumHardwareLineWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceMaximumHardwareLineWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetForceMaximumHardwareLineWidthMinValue() :
      op->vtkGenericOpenGLRenderWindow::GetForceMaximumHardwareLineWidthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetForceMaximumHardwareLineWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceMaximumHardwareLineWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetForceMaximumHardwareLineWidthMaxValue() :
      op->vtkGenericOpenGLRenderWindow::GetForceMaximumHardwareLineWidthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetForceMaximumHardwareLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceMaximumHardwareLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetForceMaximumHardwareLineWidth() :
      op->vtkGenericOpenGLRenderWindow::GetForceMaximumHardwareLineWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetReadyForRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadyForRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadyForRendering(temp0);
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::SetReadyForRendering(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetReadyForRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadyForRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReadyForRendering() :
      op->vtkGenericOpenGLRenderWindow::GetReadyForRendering());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetScreenSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScreenSize(temp0, temp1);
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::SetScreenSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericOpenGLRenderWindow_SetScreenSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScreenSize(temp0);
    }
    else
    {
      op->vtkGenericOpenGLRenderWindow::SetScreenSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericOpenGLRenderWindow_SetScreenSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkGenericOpenGLRenderWindow_SetScreenSize_s1(self, args);
    case 1:
      return PyvtkGenericOpenGLRenderWindow_SetScreenSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScreenSize");
  return nullptr;
}



static PyObject *
PyvtkGenericOpenGLRenderWindow_SetIsPicking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsPicking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

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
      op->vtkGenericOpenGLRenderWindow::SetIsPicking(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericOpenGLRenderWindow_Methods[] = {
  {"IsTypeOf", PyvtkGenericOpenGLRenderWindow_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenericOpenGLRenderWindow_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenericOpenGLRenderWindow_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGenericOpenGLRenderWindow\nC++: static vtkGenericOpenGLRenderWindow *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenericOpenGLRenderWindow_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGenericOpenGLRenderWindow\nC++: vtkGenericOpenGLRenderWindow *NewInstance()\n\n"},
  {"Finalize", PyvtkGenericOpenGLRenderWindow_Finalize, METH_VARARGS,
   "V.Finalize()\nC++: void Finalize() override;\n\nCleans up graphics resources allocated in the context for this\nVTK scene.\n"},
  {"Frame", PyvtkGenericOpenGLRenderWindow_Frame, METH_VARARGS,
   "V.Frame()\nC++: void Frame() override;\n\nflush the pending drawing operations Class user may to watch for\nWindowFrameEvent and act on it\n"},
  {"MakeCurrent", PyvtkGenericOpenGLRenderWindow_MakeCurrent, METH_VARARGS,
   "V.MakeCurrent()\nC++: void MakeCurrent() override;\n\nMakes the context current.  It is the class user's responsibility\nto watch for WindowMakeCurrentEvent and set it current.\n"},
  {"IsCurrent", PyvtkGenericOpenGLRenderWindow_IsCurrent, METH_VARARGS,
   "V.IsCurrent() -> bool\nC++: bool IsCurrent() override;\n\nReturns if the context is current.  It is the class user's\nresponsibility to watch for WindowIsCurrentEvent and set the\nbool* flag passed through the call data parameter.\n"},
  {"SupportsOpenGL", PyvtkGenericOpenGLRenderWindow_SupportsOpenGL, METH_VARARGS,
   "V.SupportsOpenGL() -> int\nC++: int SupportsOpenGL() override;\n\nReturns if OpenGL is supported.  It is the class user's\nresponsibility to watch for WindowSupportsOpenGLEvent and set the\nint* flag passed through the call data parameter.\n"},
  {"IsDirect", PyvtkGenericOpenGLRenderWindow_IsDirect, METH_VARARGS,
   "V.IsDirect() -> int\nC++: int IsDirect() override;\n\nReturns if the context is direct.  It is the class user's\nresponsibility to watch for WindowIsDirectEvent and set the int*\nflag passed through the call data parameter.\n"},
  {"SetFrontBuffer", PyvtkGenericOpenGLRenderWindow_SetFrontBuffer, METH_VARARGS,
   "V.SetFrontBuffer(int)\nC++: void SetFrontBuffer(unsigned int)\n\nset the drawing buffers to use\n"},
  {"SetFrontLeftBuffer", PyvtkGenericOpenGLRenderWindow_SetFrontLeftBuffer, METH_VARARGS,
   "V.SetFrontLeftBuffer(int)\nC++: void SetFrontLeftBuffer(unsigned int)\n\n"},
  {"SetFrontRightBuffer", PyvtkGenericOpenGLRenderWindow_SetFrontRightBuffer, METH_VARARGS,
   "V.SetFrontRightBuffer(int)\nC++: void SetFrontRightBuffer(unsigned int)\n\n"},
  {"SetBackBuffer", PyvtkGenericOpenGLRenderWindow_SetBackBuffer, METH_VARARGS,
   "V.SetBackBuffer(int)\nC++: void SetBackBuffer(unsigned int)\n\n"},
  {"SetBackLeftBuffer", PyvtkGenericOpenGLRenderWindow_SetBackLeftBuffer, METH_VARARGS,
   "V.SetBackLeftBuffer(int)\nC++: void SetBackLeftBuffer(unsigned int)\n\n"},
  {"SetBackRightBuffer", PyvtkGenericOpenGLRenderWindow_SetBackRightBuffer, METH_VARARGS,
   "V.SetBackRightBuffer(int)\nC++: void SetBackRightBuffer(unsigned int)\n\n"},
  {"PushState", PyvtkGenericOpenGLRenderWindow_PushState, METH_VARARGS,
   "V.PushState()\nC++: void PushState()\n\nno-op (for API compat with OpenGL1).\n"},
  {"PopState", PyvtkGenericOpenGLRenderWindow_PopState, METH_VARARGS,
   "V.PopState()\nC++: void PopState()\n\nno-op (for API compat with OpenGL1).\n"},
  {"SetWindowId", PyvtkGenericOpenGLRenderWindow_SetWindowId, METH_VARARGS,
   "V.SetWindowId(void)\nC++: void SetWindowId(void *) override;\n\ndoes nothing\n"},
  {"GetGenericWindowId", PyvtkGenericOpenGLRenderWindow_GetGenericWindowId, METH_VARARGS,
   "V.GetGenericWindowId() -> void\nC++: void *GetGenericWindowId() override;\n\nDummy stubs for vtkWindow API.\n"},
  {"SetDisplayId", PyvtkGenericOpenGLRenderWindow_SetDisplayId, METH_VARARGS,
   "V.SetDisplayId(void)\nC++: void SetDisplayId(void *) override;\n\nDummy stubs for vtkWindow API.\n"},
  {"SetParentId", PyvtkGenericOpenGLRenderWindow_SetParentId, METH_VARARGS,
   "V.SetParentId(void)\nC++: void SetParentId(void *) override;\n\nDummy stubs for vtkWindow API.\n"},
  {"GetGenericDisplayId", PyvtkGenericOpenGLRenderWindow_GetGenericDisplayId, METH_VARARGS,
   "V.GetGenericDisplayId() -> void\nC++: void *GetGenericDisplayId() override;\n\nDummy stubs for vtkWindow API.\n"},
  {"GetGenericParentId", PyvtkGenericOpenGLRenderWindow_GetGenericParentId, METH_VARARGS,
   "V.GetGenericParentId() -> void\nC++: void *GetGenericParentId() override;\n\nDummy stubs for vtkWindow API.\n"},
  {"GetGenericContext", PyvtkGenericOpenGLRenderWindow_GetGenericContext, METH_VARARGS,
   "V.GetGenericContext() -> void\nC++: void *GetGenericContext() override;\n\nDummy stubs for vtkWindow API.\n"},
  {"GetGenericDrawable", PyvtkGenericOpenGLRenderWindow_GetGenericDrawable, METH_VARARGS,
   "V.GetGenericDrawable() -> void\nC++: void *GetGenericDrawable() override;\n\nDummy stubs for vtkWindow API.\n"},
  {"SetWindowInfo", PyvtkGenericOpenGLRenderWindow_SetWindowInfo, METH_VARARGS,
   "V.SetWindowInfo(string)\nC++: void SetWindowInfo(const char *) override;\n\nDummy stubs for vtkWindow API.\n"},
  {"SetParentInfo", PyvtkGenericOpenGLRenderWindow_SetParentInfo, METH_VARARGS,
   "V.SetParentInfo(string)\nC++: void SetParentInfo(const char *) override;\n\nDummy stubs for vtkWindow API.\n"},
  {"GetScreenSize", PyvtkGenericOpenGLRenderWindow_GetScreenSize, METH_VARARGS,
   "V.GetScreenSize() -> (int, int)\nC++: int *GetScreenSize() override;\n\nGet the current size of the screen in pixels.\n"},
  {"Start", PyvtkGenericOpenGLRenderWindow_Start, METH_VARARGS,
   "V.Start()\nC++: void Start() override;\n\nInitialize the rendering process.\n"},
  {"HideCursor", PyvtkGenericOpenGLRenderWindow_HideCursor, METH_VARARGS,
   "V.HideCursor()\nC++: void HideCursor() override;\n\nHide or Show the mouse cursor, it is nice to be able to hide the\ndefault cursor if you want VTK to display a 3D cursor instead.\nSet cursor position in window (note that (0,0) is the lower left\ncorner).\n"},
  {"ShowCursor", PyvtkGenericOpenGLRenderWindow_ShowCursor, METH_VARARGS,
   "V.ShowCursor()\nC++: void ShowCursor() override;\n\nHide or Show the mouse cursor, it is nice to be able to hide the\ndefault cursor if you want VTK to display a 3D cursor instead.\nSet cursor position in window (note that (0,0) is the lower left\ncorner).\n"},
  {"SetFullScreen", PyvtkGenericOpenGLRenderWindow_SetFullScreen, METH_VARARGS,
   "V.SetFullScreen(int)\nC++: void SetFullScreen(vtkTypeBool) override;\n\nTurn on/off rendering full screen window size.\n"},
  {"WindowRemap", PyvtkGenericOpenGLRenderWindow_WindowRemap, METH_VARARGS,
   "V.WindowRemap()\nC++: void WindowRemap() override;\n\nRemap the rendering window. This probably only works on UNIX\nright now. It is useful for changing properties that can't\nnormally be changed once the window is up.\n"},
  {"GetEventPending", PyvtkGenericOpenGLRenderWindow_GetEventPending, METH_VARARGS,
   "V.GetEventPending() -> int\nC++: int GetEventPending() override;\n\nCheck to see if a mouse button has been pressed.  All other\nevents are ignored by this method.  Ideally, you want to abort\nthe render on any event which causes the DesiredUpdateRate to\nswitch from a high-quality rate to a more interactive rate.\n"},
  {"SetNextWindowId", PyvtkGenericOpenGLRenderWindow_SetNextWindowId, METH_VARARGS,
   "V.SetNextWindowId(void)\nC++: void SetNextWindowId(void *) override;\n\nDummy stubs for vtkWindow API.\n"},
  {"SetNextWindowInfo", PyvtkGenericOpenGLRenderWindow_SetNextWindowInfo, METH_VARARGS,
   "V.SetNextWindowInfo(string)\nC++: void SetNextWindowInfo(const char *) override;\n\nDummy stubs for vtkWindow API.\n"},
  {"CreateAWindow", PyvtkGenericOpenGLRenderWindow_CreateAWindow, METH_VARARGS,
   "V.CreateAWindow()\nC++: void CreateAWindow() override;\n\nCreate a not-off-screen window.\n"},
  {"DestroyWindow", PyvtkGenericOpenGLRenderWindow_DestroyWindow, METH_VARARGS,
   "V.DestroyWindow()\nC++: void DestroyWindow() override;\n\nDestroy a not-off-screen window.\n"},
  {"SetIsDirect", PyvtkGenericOpenGLRenderWindow_SetIsDirect, METH_VARARGS,
   "V.SetIsDirect(int)\nC++: void SetIsDirect(int newValue)\n\nAllow to update state within observer callback without changing\ndata argument and MTime.\n"},
  {"SetSupportsOpenGL", PyvtkGenericOpenGLRenderWindow_SetSupportsOpenGL, METH_VARARGS,
   "V.SetSupportsOpenGL(int)\nC++: void SetSupportsOpenGL(int newValue)\n\nAllow to update state within observer callback without changing\ndata argument and MTime.\n"},
  {"SetIsCurrent", PyvtkGenericOpenGLRenderWindow_SetIsCurrent, METH_VARARGS,
   "V.SetIsCurrent(bool)\nC++: void SetIsCurrent(bool newValue)\n\nAllow to update state within observer callback without changing\ndata argument and MTime.\n"},
  {"Render", PyvtkGenericOpenGLRenderWindow_Render, METH_VARARGS,
   "V.Render()\nC++: void Render() override;\n\nOverride the Render method to do some state management. This\nmethod saves the OpenGL state before asking its child renderers\nto render their image. Once this is done, the OpenGL state is\nrestored.\n\\sa vtkOpenGLRenderWindow::SaveGLState()\n\\sa vtkOpenGLRenderWindow::RestoreGLState()\n"},
  {"GetMaximumHardwareLineWidth", PyvtkGenericOpenGLRenderWindow_GetMaximumHardwareLineWidth, METH_VARARGS,
   "V.GetMaximumHardwareLineWidth() -> float\nC++: float GetMaximumHardwareLineWidth() override;\n\nOverridden to pass explicitly specified MaximumHardwareLineWidth,\nif any.\n"},
  {"SetForceMaximumHardwareLineWidth", PyvtkGenericOpenGLRenderWindow_SetForceMaximumHardwareLineWidth, METH_VARARGS,
   "V.SetForceMaximumHardwareLineWidth(float)\nC++: virtual void SetForceMaximumHardwareLineWidth(float _arg)\n\nSpecify a non-zero line width to force the hardware line width\ndetermined by the window.\n"},
  {"GetForceMaximumHardwareLineWidthMinValue", PyvtkGenericOpenGLRenderWindow_GetForceMaximumHardwareLineWidthMinValue, METH_VARARGS,
   "V.GetForceMaximumHardwareLineWidthMinValue() -> float\nC++: virtual float GetForceMaximumHardwareLineWidthMinValue()\n\nSpecify a non-zero line width to force the hardware line width\ndetermined by the window.\n"},
  {"GetForceMaximumHardwareLineWidthMaxValue", PyvtkGenericOpenGLRenderWindow_GetForceMaximumHardwareLineWidthMaxValue, METH_VARARGS,
   "V.GetForceMaximumHardwareLineWidthMaxValue() -> float\nC++: virtual float GetForceMaximumHardwareLineWidthMaxValue()\n\nSpecify a non-zero line width to force the hardware line width\ndetermined by the window.\n"},
  {"GetForceMaximumHardwareLineWidth", PyvtkGenericOpenGLRenderWindow_GetForceMaximumHardwareLineWidth, METH_VARARGS,
   "V.GetForceMaximumHardwareLineWidth() -> float\nC++: virtual float GetForceMaximumHardwareLineWidth()\n\nSpecify a non-zero line width to force the hardware line width\ndetermined by the window.\n"},
  {"SetReadyForRendering", PyvtkGenericOpenGLRenderWindow_SetReadyForRendering, METH_VARARGS,
   "V.SetReadyForRendering(bool)\nC++: virtual void SetReadyForRendering(bool _arg)\n\nSet this to true to indicate that the context is now ready. For\nbackwards compatibility reasons, it's set to true by default. If\nset to false, the `Render` call will be skipped entirely.\n"},
  {"GetReadyForRendering", PyvtkGenericOpenGLRenderWindow_GetReadyForRendering, METH_VARARGS,
   "V.GetReadyForRendering() -> bool\nC++: virtual bool GetReadyForRendering()\n\nSet this to true to indicate that the context is now ready. For\nbackwards compatibility reasons, it's set to true by default. If\nset to false, the `Render` call will be skipped entirely.\n"},
  {"SetScreenSize", PyvtkGenericOpenGLRenderWindow_SetScreenSize, METH_VARARGS,
   "V.SetScreenSize(int, int)\nC++: void SetScreenSize(int, int)\nV.SetScreenSize((int, int))\nC++: void SetScreenSize(int a[2])\n\n"},
  {"SetIsPicking", PyvtkGenericOpenGLRenderWindow_SetIsPicking, METH_VARARGS,
   "V.SetIsPicking(int)\nC++: void SetIsPicking(vtkTypeBool isPicking) override;\n\nOverridden to invoke vtkCommand::StartPickEvent and\nvtkCommand::EndPickEvent.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGenericOpenGLRenderWindow_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkGenericOpenGLRenderWindow", // tp_name
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
  PyvtkGenericOpenGLRenderWindow_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGenericOpenGLRenderWindow_StaticNew()
{
  return vtkGenericOpenGLRenderWindow::New();
}

PyObject *PyvtkGenericOpenGLRenderWindow_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGenericOpenGLRenderWindow_Type, PyvtkGenericOpenGLRenderWindow_Methods,
    "vtkGenericOpenGLRenderWindow",
 &PyvtkGenericOpenGLRenderWindow_StaticNew);

  PyTypeObject *pytype = &PyvtkGenericOpenGLRenderWindow_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLRenderWindow_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGenericOpenGLRenderWindow(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericOpenGLRenderWindow_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericOpenGLRenderWindow", o) != 0)
  {
    Py_DECREF(o);
  }

}

