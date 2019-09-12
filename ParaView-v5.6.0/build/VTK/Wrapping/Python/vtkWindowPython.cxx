// python wrapper for vtkWindow
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
#include "vtkWindow.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWindow(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkWindow_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkWindow_Doc =
  "vtkWindow - window superclass for vtkRenderWindow\n\n"
  "Superclass: vtkObject\n\n"
  "vtkWindow is an abstract object to specify the behavior of a\n"
  "rendering window.  It contains vtkViewports.\n\n"
  "@sa\n"
  "vtkRenderWindow vtkViewport\n\n";


static PyObject *
PyvtkWindow_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWindow::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWindow::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWindow *tempr = vtkWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWindow *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWindow::NewInstance());

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
PyvtkWindow_SetDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
PyvtkWindow_SetWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
PyvtkWindow_SetParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
PyvtkWindow_GetGenericDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
PyvtkWindow_GetGenericWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
PyvtkWindow_GetGenericParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
PyvtkWindow_GetGenericContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
PyvtkWindow_GetGenericDrawable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDrawable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
PyvtkWindow_SetWindowInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
PyvtkWindow_SetParentInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
PyvtkWindow_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkWindow::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
      op->vtkWindow::SetPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindow_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkWindow::SetPosition(temp0);
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
PyvtkWindow_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkWindow_SetPosition_s1(self, args);
    case 1:
      return PyvtkWindow_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}



static PyObject *
PyvtkWindow_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkWindow::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
      op->vtkWindow::SetSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindow_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetSize(temp0);
    }
    else
    {
      op->vtkWindow::SetSize(temp0);
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
PyvtkWindow_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkWindow_SetSize_s1(self, args);
    case 1:
      return PyvtkWindow_SetSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return nullptr;
}



static PyObject *
PyvtkWindow_GetActualSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetActualSize() :
      op->vtkWindow::GetActualSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int *tempr = op->GetScreenSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetMapped(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapped");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMapped(temp0);
    }
    else
    {
      op->vtkWindow::SetMapped(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetMapped(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapped");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMapped() :
      op->vtkWindow::GetMapped());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_MappedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MappedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MappedOn();
    }
    else
    {
      op->vtkWindow::MappedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_MappedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MappedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MappedOff();
    }
    else
    {
      op->vtkWindow::MappedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetErase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetErase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetErase(temp0);
    }
    else
    {
      op->vtkWindow::SetErase(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetErase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetErase() :
      op->vtkWindow::GetErase());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_EraseOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EraseOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EraseOn();
    }
    else
    {
      op->vtkWindow::EraseOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_EraseOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EraseOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EraseOff();
    }
    else
    {
      op->vtkWindow::EraseOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetDoubleBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDoubleBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDoubleBuffer(temp0);
    }
    else
    {
      op->vtkWindow::SetDoubleBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetDoubleBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDoubleBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDoubleBuffer() :
      op->vtkWindow::GetDoubleBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_DoubleBufferOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoubleBufferOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DoubleBufferOn();
    }
    else
    {
      op->vtkWindow::DoubleBufferOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_DoubleBufferOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoubleBufferOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DoubleBufferOff();
    }
    else
    {
      op->vtkWindow::DoubleBufferOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetWindowName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetWindowName() :
      op->vtkWindow::GetWindowName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetWindowName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWindowName(temp0);
    }
    else
    {
      op->vtkWindow::SetWindowName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Render();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
    unsigned char *tempr = op->GetPixelData(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkWindow_GetPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
    int tempr = op->GetPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkWindow_GetPixelData_Methods[] = {
  {nullptr, PyvtkWindow_GetPixelData_s1, METH_VARARGS,
   "@iiiii|i"},
  {nullptr, PyvtkWindow_GetPixelData_s2, METH_VARARGS,
   "@iiiiiV|i *vtkUnsignedCharArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkWindow_GetPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkWindow_GetPixelData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkWindow_GetPixelData_s1(self, args);
    case 7:
      return PyvtkWindow_GetPixelData_s2(self, args);
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPixelData");
  return nullptr;
}



static PyObject *
PyvtkWindow_GetDPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDPI() :
      op->vtkWindow::GetDPI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetDPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDPI(temp0);
    }
    else
    {
      op->vtkWindow::SetDPI(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetDPIMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDPIMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDPIMinValue() :
      op->vtkWindow::GetDPIMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetDPIMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDPIMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDPIMaxValue() :
      op->vtkWindow::GetDPIMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_DetectDPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetectDPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->DetectDPI() :
      op->vtkWindow::DetectDPI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetOffScreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffScreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOffScreenRendering(temp0);
    }
    else
    {
      op->vtkWindow::SetOffScreenRendering(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetOffScreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffScreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOffScreenRendering() :
      op->vtkWindow::GetOffScreenRendering());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_OffScreenRenderingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OffScreenRenderingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OffScreenRenderingOn();
    }
    else
    {
      op->vtkWindow::OffScreenRenderingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_OffScreenRenderingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OffScreenRenderingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OffScreenRenderingOff();
    }
    else
    {
      op->vtkWindow::OffScreenRenderingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_MakeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MakeCurrent();
    }
    else
    {
      op->vtkWindow::MakeCurrent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetTileScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTileScale(temp0, temp1);
    }
    else
    {
      op->vtkWindow::SetTileScale(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindow_SetTileScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTileScale(temp0);
    }
    else
    {
      op->vtkWindow::SetTileScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindow_SetTileScale_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTileScale(temp0);
    }
    else
    {
      op->vtkWindow::SetTileScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkWindow_SetTileScale_Methods[] = {
  {nullptr, PyvtkWindow_SetTileScale_s2, METH_VARARGS,
   "@P *i"},
  {nullptr, PyvtkWindow_SetTileScale_s3, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkWindow_SetTileScale(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkWindow_SetTileScale_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkWindow_SetTileScale_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTileScale");
  return nullptr;
}



static PyObject *
PyvtkWindow_GetTileScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTileScale() :
      op->vtkWindow::GetTileScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetTileViewport_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  double temp0;
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
      op->SetTileViewport(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkWindow::SetTileViewport(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindow_SetTileViewport_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTileViewport(temp0);
    }
    else
    {
      op->vtkWindow::SetTileViewport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindow_SetTileViewport(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkWindow_SetTileViewport_s1(self, args);
    case 1:
      return PyvtkWindow_SetTileViewport_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTileViewport");
  return nullptr;
}



static PyObject *
PyvtkWindow_GetTileViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTileViewport() :
      op->vtkWindow::GetTileViewport());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkWindow_Methods[] = {
  {"IsTypeOf", PyvtkWindow_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWindow_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWindow_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkWindow\nC++: static vtkWindow *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWindow_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkWindow\nC++: vtkWindow *NewInstance()\n\n"},
  {"SetDisplayId", PyvtkWindow_SetDisplayId, METH_VARARGS,
   "V.SetDisplayId(void)\nC++: virtual void SetDisplayId(void *)\n\nThese are window system independent methods that are used to help\ninterface vtkWindow to native windowing systems.\n"},
  {"SetWindowId", PyvtkWindow_SetWindowId, METH_VARARGS,
   "V.SetWindowId(void)\nC++: virtual void SetWindowId(void *)\n\nThese are window system independent methods that are used to help\ninterface vtkWindow to native windowing systems.\n"},
  {"SetParentId", PyvtkWindow_SetParentId, METH_VARARGS,
   "V.SetParentId(void)\nC++: virtual void SetParentId(void *)\n\nThese are window system independent methods that are used to help\ninterface vtkWindow to native windowing systems.\n"},
  {"GetGenericDisplayId", PyvtkWindow_GetGenericDisplayId, METH_VARARGS,
   "V.GetGenericDisplayId() -> void\nC++: virtual void *GetGenericDisplayId()\n\nThese are window system independent methods that are used to help\ninterface vtkWindow to native windowing systems.\n"},
  {"GetGenericWindowId", PyvtkWindow_GetGenericWindowId, METH_VARARGS,
   "V.GetGenericWindowId() -> void\nC++: virtual void *GetGenericWindowId()\n\nThese are window system independent methods that are used to help\ninterface vtkWindow to native windowing systems.\n"},
  {"GetGenericParentId", PyvtkWindow_GetGenericParentId, METH_VARARGS,
   "V.GetGenericParentId() -> void\nC++: virtual void *GetGenericParentId()\n\nThese are window system independent methods that are used to help\ninterface vtkWindow to native windowing systems.\n"},
  {"GetGenericContext", PyvtkWindow_GetGenericContext, METH_VARARGS,
   "V.GetGenericContext() -> void\nC++: virtual void *GetGenericContext()\n\nThese are window system independent methods that are used to help\ninterface vtkWindow to native windowing systems.\n"},
  {"GetGenericDrawable", PyvtkWindow_GetGenericDrawable, METH_VARARGS,
   "V.GetGenericDrawable() -> void\nC++: virtual void *GetGenericDrawable()\n\nThese are window system independent methods that are used to help\ninterface vtkWindow to native windowing systems.\n"},
  {"SetWindowInfo", PyvtkWindow_SetWindowInfo, METH_VARARGS,
   "V.SetWindowInfo(string)\nC++: virtual void SetWindowInfo(const char *)\n\nThese are window system independent methods that are used to help\ninterface vtkWindow to native windowing systems.\n"},
  {"SetParentInfo", PyvtkWindow_SetParentInfo, METH_VARARGS,
   "V.SetParentInfo(string)\nC++: virtual void SetParentInfo(const char *)\n\nThese are window system independent methods that are used to help\ninterface vtkWindow to native windowing systems.\n"},
  {"GetPosition", PyvtkWindow_GetPosition, METH_VARARGS,
   "V.GetPosition() -> (int, int)\nC++: virtual int *GetPosition()\n\nSet/Get the position in screen coordinates of the rendering\nwindow. Measured in pixels.\n"},
  {"SetPosition", PyvtkWindow_SetPosition, METH_VARARGS,
   "V.SetPosition(int, int)\nC++: virtual void SetPosition(int, int)\nV.SetPosition([int, int])\nC++: virtual void SetPosition(int a[2])\n\nSet/Get the position in screen coordinates of the rendering\nwindow. Measured in pixels.\n"},
  {"GetSize", PyvtkWindow_GetSize, METH_VARARGS,
   "V.GetSize() -> (int, int)\nC++: virtual int *GetSize()\n\nSet/Get the size of the window in screen coordinates in pixels.\n"},
  {"SetSize", PyvtkWindow_SetSize, METH_VARARGS,
   "V.SetSize(int, int)\nC++: virtual void SetSize(int, int)\nV.SetSize([int, int])\nC++: virtual void SetSize(int a[2])\n\nSet/Get the size of the window in screen coordinates in pixels.\n"},
  {"GetActualSize", PyvtkWindow_GetActualSize, METH_VARARGS,
   "V.GetActualSize() -> (int, int)\nC++: int *GetActualSize()\n\nGetSize() returns the size * this->TileScale, whereas this method\nreturns the size without multiplying with the tile scale.\nMeasured in pixels.\n"},
  {"GetScreenSize", PyvtkWindow_GetScreenSize, METH_VARARGS,
   "V.GetScreenSize() -> (int, int)\nC++: virtual int *GetScreenSize()\n\nGet the current size of the screen in pixels.\n"},
  {"SetMapped", PyvtkWindow_SetMapped, METH_VARARGS,
   "V.SetMapped(int)\nC++: virtual void SetMapped(vtkTypeBool _arg)\n\nKeep track of whether the rendering window has been mapped to\nscreen.\n"},
  {"GetMapped", PyvtkWindow_GetMapped, METH_VARARGS,
   "V.GetMapped() -> int\nC++: virtual vtkTypeBool GetMapped()\n\nKeep track of whether the rendering window has been mapped to\nscreen.\n"},
  {"MappedOn", PyvtkWindow_MappedOn, METH_VARARGS,
   "V.MappedOn()\nC++: virtual void MappedOn()\n\nKeep track of whether the rendering window has been mapped to\nscreen.\n"},
  {"MappedOff", PyvtkWindow_MappedOff, METH_VARARGS,
   "V.MappedOff()\nC++: virtual void MappedOff()\n\nKeep track of whether the rendering window has been mapped to\nscreen.\n"},
  {"SetErase", PyvtkWindow_SetErase, METH_VARARGS,
   "V.SetErase(int)\nC++: virtual void SetErase(vtkTypeBool _arg)\n\nTurn on/off erasing the screen between images. This allows\nmultiple exposure sequences if turned on. You will need to turn\ndouble buffering off or make use of the SwapBuffers methods to\nprevent you from swapping buffers between exposures.\n"},
  {"GetErase", PyvtkWindow_GetErase, METH_VARARGS,
   "V.GetErase() -> int\nC++: virtual vtkTypeBool GetErase()\n\nTurn on/off erasing the screen between images. This allows\nmultiple exposure sequences if turned on. You will need to turn\ndouble buffering off or make use of the SwapBuffers methods to\nprevent you from swapping buffers between exposures.\n"},
  {"EraseOn", PyvtkWindow_EraseOn, METH_VARARGS,
   "V.EraseOn()\nC++: virtual void EraseOn()\n\nTurn on/off erasing the screen between images. This allows\nmultiple exposure sequences if turned on. You will need to turn\ndouble buffering off or make use of the SwapBuffers methods to\nprevent you from swapping buffers between exposures.\n"},
  {"EraseOff", PyvtkWindow_EraseOff, METH_VARARGS,
   "V.EraseOff()\nC++: virtual void EraseOff()\n\nTurn on/off erasing the screen between images. This allows\nmultiple exposure sequences if turned on. You will need to turn\ndouble buffering off or make use of the SwapBuffers methods to\nprevent you from swapping buffers between exposures.\n"},
  {"SetDoubleBuffer", PyvtkWindow_SetDoubleBuffer, METH_VARARGS,
   "V.SetDoubleBuffer(int)\nC++: virtual void SetDoubleBuffer(vtkTypeBool _arg)\n\nKeep track of whether double buffering is on or off\n"},
  {"GetDoubleBuffer", PyvtkWindow_GetDoubleBuffer, METH_VARARGS,
   "V.GetDoubleBuffer() -> int\nC++: virtual vtkTypeBool GetDoubleBuffer()\n\nKeep track of whether double buffering is on or off\n"},
  {"DoubleBufferOn", PyvtkWindow_DoubleBufferOn, METH_VARARGS,
   "V.DoubleBufferOn()\nC++: virtual void DoubleBufferOn()\n\nKeep track of whether double buffering is on or off\n"},
  {"DoubleBufferOff", PyvtkWindow_DoubleBufferOff, METH_VARARGS,
   "V.DoubleBufferOff()\nC++: virtual void DoubleBufferOff()\n\nKeep track of whether double buffering is on or off\n"},
  {"GetWindowName", PyvtkWindow_GetWindowName, METH_VARARGS,
   "V.GetWindowName() -> string\nC++: virtual char *GetWindowName()\n\nGet name of rendering window\n"},
  {"SetWindowName", PyvtkWindow_SetWindowName, METH_VARARGS,
   "V.SetWindowName(string)\nC++: virtual void SetWindowName(const char *_arg)\n\nGet name of rendering window\n"},
  {"Render", PyvtkWindow_Render, METH_VARARGS,
   "V.Render()\nC++: virtual void Render()\n\nAsk each viewport owned by this Window to render its image and\nsynchronize this process.\n"},
  {"GetPixelData", PyvtkWindow_GetPixelData, METH_VARARGS,
   "V.GetPixelData(int, int, int, int, int, int) -> (int, ...)\nC++: virtual unsigned char *GetPixelData(int x, int y, int x2,\n    int y2, int front, int right=0)\nV.GetPixelData(int, int, int, int, int, vtkUnsignedCharArray, int)\n     -> int\nC++: virtual int GetPixelData(int x, int y, int x2, int y2,\n    int front, vtkUnsignedCharArray *data, int right=0)\n\nGet the pixel data of an image, transmitted as RGBRGBRGB. The\nfront argument indicates if the front buffer should be used or\nthe back buffer. It is the caller's responsibility to delete the\nresulting array. It is very important to realize that the memory\nin this array is organized from the bottom of the window to the\ntop. The origin of the screen is in the lower left corner. The y\naxis increases as you go up the screen. So the storage of pixels\nis from left to right and from bottom to top. (x,y) is any corner\nof the rectangle. (x2,y2) is its opposite corner on the diagonal.\n"},
  {"GetDPI", PyvtkWindow_GetDPI, METH_VARARGS,
   "V.GetDPI() -> int\nC++: virtual int GetDPI()\n\nReturn a best estimate to the dots per inch of the display device\nbeing rendered (or printed).\n"},
  {"SetDPI", PyvtkWindow_SetDPI, METH_VARARGS,
   "V.SetDPI(int)\nC++: virtual void SetDPI(int _arg)\n\nReturn a best estimate to the dots per inch of the display device\nbeing rendered (or printed).\n"},
  {"GetDPIMinValue", PyvtkWindow_GetDPIMinValue, METH_VARARGS,
   "V.GetDPIMinValue() -> int\nC++: virtual int GetDPIMinValue()\n\nReturn a best estimate to the dots per inch of the display device\nbeing rendered (or printed).\n"},
  {"GetDPIMaxValue", PyvtkWindow_GetDPIMaxValue, METH_VARARGS,
   "V.GetDPIMaxValue() -> int\nC++: virtual int GetDPIMaxValue()\n\nReturn a best estimate to the dots per inch of the display device\nbeing rendered (or printed).\n"},
  {"DetectDPI", PyvtkWindow_DetectDPI, METH_VARARGS,
   "V.DetectDPI() -> bool\nC++: virtual bool DetectDPI()\n\nAttempt to detect and set the DPI of the display device by\nquerying the system. Note that this is not supported on most\nbackends, and this method will return false if the DPI could not\nbe detected. Use GetDPI() to inspect the detected value.\n"},
  {"SetOffScreenRendering", PyvtkWindow_SetOffScreenRendering, METH_VARARGS,
   "V.SetOffScreenRendering(int)\nC++: virtual void SetOffScreenRendering(vtkTypeBool _arg)\n\nCreate a window in memory instead of on the screen. This may not\nbe supported for every type of window and on some windows you may\nneed to invoke this prior to the first render.\n"},
  {"GetOffScreenRendering", PyvtkWindow_GetOffScreenRendering, METH_VARARGS,
   "V.GetOffScreenRendering() -> int\nC++: virtual vtkTypeBool GetOffScreenRendering()\n\nCreate a window in memory instead of on the screen. This may not\nbe supported for every type of window and on some windows you may\nneed to invoke this prior to the first render.\n"},
  {"OffScreenRenderingOn", PyvtkWindow_OffScreenRenderingOn, METH_VARARGS,
   "V.OffScreenRenderingOn()\nC++: virtual void OffScreenRenderingOn()\n\nCreate a window in memory instead of on the screen. This may not\nbe supported for every type of window and on some windows you may\nneed to invoke this prior to the first render.\n"},
  {"OffScreenRenderingOff", PyvtkWindow_OffScreenRenderingOff, METH_VARARGS,
   "V.OffScreenRenderingOff()\nC++: virtual void OffScreenRenderingOff()\n\nCreate a window in memory instead of on the screen. This may not\nbe supported for every type of window and on some windows you may\nneed to invoke this prior to the first render.\n"},
  {"MakeCurrent", PyvtkWindow_MakeCurrent, METH_VARARGS,
   "V.MakeCurrent()\nC++: virtual void MakeCurrent()\n\nMake the window current. May be overridden in subclasses to do\nfor example a glXMakeCurrent or a wglMakeCurrent.\n"},
  {"SetTileScale", PyvtkWindow_SetTileScale, METH_VARARGS,
   "V.SetTileScale(int, int)\nC++: void SetTileScale(int, int)\nV.SetTileScale((int, int))\nC++: void SetTileScale(int a[2])\nV.SetTileScale(int)\nC++: void SetTileScale(int s)\n\n"},
  {"GetTileScale", PyvtkWindow_GetTileScale, METH_VARARGS,
   "V.GetTileScale() -> (int, int)\nC++: int *GetTileScale()\n\n"},
  {"SetTileViewport", PyvtkWindow_SetTileViewport, METH_VARARGS,
   "V.SetTileViewport(float, float, float, float)\nC++: void SetTileViewport(double, double, double, double)\nV.SetTileViewport((float, float, float, float))\nC++: void SetTileViewport(double a[4])\n\n"},
  {"GetTileViewport", PyvtkWindow_GetTileViewport, METH_VARARGS,
   "V.GetTileViewport() -> (float, float, float, float)\nC++: double *GetTileViewport()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkWindow_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkWindow", // tp_name
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
  PyvtkWindow_Doc, // tp_doc
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

PyObject *PyvtkWindow_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkWindow_Type, PyvtkWindow_Methods,
    "vtkWindow",
 nullptr);

  PyTypeObject *pytype = &PyvtkWindow_Type;

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

void PyVTKAddFile_vtkWindow(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWindow_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWindow", o) != 0)
  {
    Py_DECREF(o);
  }

}

