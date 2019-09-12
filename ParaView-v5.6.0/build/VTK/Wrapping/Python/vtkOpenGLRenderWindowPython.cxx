// python wrapper for vtkOpenGLRenderWindow
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
#include "vtkStdString.h"
#include "vtkOpenGLRenderWindow.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLRenderWindow(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLRenderWindow_ClassNew(); }

#ifndef DECLARED_PyvtkRenderWindow_ClassNew
extern "C" { PyObject *PyvtkRenderWindow_ClassNew(); }
#define DECLARED_PyvtkRenderWindow_ClassNew
#endif

static const char *PyvtkOpenGLRenderWindow_Doc =
  "vtkOpenGLRenderWindow - OpenGL rendering window\n\n"
  "Superclass: vtkRenderWindow\n\n"
  "vtkOpenGLRenderWindow is a concrete implementation of the abstract\n"
  "class vtkRenderWindow. vtkOpenGLRenderer interfaces to the OpenGL\n"
  "graphics library. Application programmers should normally use\n"
  "vtkRenderWindow instead of the OpenGL specific version.\n\n";


static PyObject *
PyvtkOpenGLRenderWindow_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLRenderWindow::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLRenderWindow::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLRenderWindow *tempr = vtkOpenGLRenderWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLRenderWindow *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLRenderWindow::NewInstance());

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
PyvtkOpenGLRenderWindow_GetRenderingBackend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderingBackend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRenderingBackend() :
      op->vtkOpenGLRenderWindow::GetRenderingBackend());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_SetGlobalMaximumNumberOfMultiSamples(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalMaximumNumberOfMultiSamples");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkOpenGLRenderWindow::SetGlobalMaximumNumberOfMultiSamples(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetGlobalMaximumNumberOfMultiSamples(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalMaximumNumberOfMultiSamples");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkOpenGLRenderWindow::GetGlobalMaximumNumberOfMultiSamples();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetPixelData(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkOpenGLRenderWindow::GetPixelData(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_GetPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  vtkUnsignedCharArray *temp5 = nullptr;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkUnsignedCharArray") &&
      ap.GetValue(temp6))
  {
    int tempr = (ap.IsBound() ?
      op->GetPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkOpenGLRenderWindow::GetPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_GetPixelData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkOpenGLRenderWindow_GetPixelData_s1(self, args);
    case 7:
      return PyvtkOpenGLRenderWindow_GetPixelData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPixelData");
  return nullptr;
}



static PyObject *
PyvtkOpenGLRenderWindow_SetPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<unsigned char> store4(2*size4);
  unsigned char *temp4 = store4.Data();
  unsigned char *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    ap.Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->SetPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkOpenGLRenderWindow::SetPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkOpenGLRenderWindow_SetPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkUnsignedCharArray *temp4 = nullptr;
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkUnsignedCharArray") &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    int tempr = (ap.IsBound() ?
      op->SetPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkOpenGLRenderWindow::SetPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderWindow_SetPixelData_Methods[] = {
  {nullptr, PyvtkOpenGLRenderWindow_SetPixelData_s1, METH_VARARGS,
   "@iiiiPii *B"},
  {nullptr, PyvtkOpenGLRenderWindow_SetPixelData_s2, METH_VARARGS,
   "@iiiiVii *vtkUnsignedCharArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLRenderWindow_SetPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLRenderWindow_SetPixelData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 7:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPixelData");
  return nullptr;
}



static PyObject *
PyvtkOpenGLRenderWindow_GetRGBAPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5, 6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    float *tempr = (ap.IsBound() ?
      op->GetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkOpenGLRenderWindow::GetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_GetRGBAPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  vtkFloatArray *temp5 = nullptr;
  int temp6 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkFloatArray") &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    int tempr = (ap.IsBound() ?
      op->GetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkOpenGLRenderWindow::GetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderWindow_GetRGBAPixelData_Methods[] = {
  {nullptr, PyvtkOpenGLRenderWindow_GetRGBAPixelData_s1, METH_VARARGS,
   "@iiiii|i"},
  {nullptr, PyvtkOpenGLRenderWindow_GetRGBAPixelData_s2, METH_VARARGS,
   "@iiiiiV|i *vtkFloatArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLRenderWindow_GetRGBAPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLRenderWindow_GetRGBAPixelData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkOpenGLRenderWindow_GetRGBAPixelData_s1(self, args);
    case 7:
      return PyvtkOpenGLRenderWindow_GetRGBAPixelData_s2(self, args);
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRGBAPixelData");
  return nullptr;
}



static PyObject *
PyvtkOpenGLRenderWindow_SetRGBAPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

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

  if (op && ap.CheckArgCount(6, 8) &&
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

    int tempr = (ap.IsBound() ?
      op->SetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkOpenGLRenderWindow::SetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

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
PyvtkOpenGLRenderWindow_SetRGBAPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkFloatArray *temp4 = nullptr;
  int temp5;
  int temp6 = 0;
  int temp7 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6, 8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkFloatArray") &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp7)))
  {
    int tempr = (ap.IsBound() ?
      op->SetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkOpenGLRenderWindow::SetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderWindow_SetRGBAPixelData_Methods[] = {
  {nullptr, PyvtkOpenGLRenderWindow_SetRGBAPixelData_s1, METH_VARARGS,
   "@iiiiPi|ii *f"},
  {nullptr, PyvtkOpenGLRenderWindow_SetRGBAPixelData_s2, METH_VARARGS,
   "@iiiiVi|ii *vtkFloatArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLRenderWindow_SetRGBAPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLRenderWindow_SetRGBAPixelData_Methods;
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
PyvtkOpenGLRenderWindow_ReleaseRGBAPixelData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->ReleaseRGBAPixelData(temp0);
    }
    else
    {
      op->vtkOpenGLRenderWindow::ReleaseRGBAPixelData(temp0);
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
PyvtkOpenGLRenderWindow_GetRGBACharPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5, 6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkOpenGLRenderWindow::GetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_GetRGBACharPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  vtkUnsignedCharArray *temp5 = nullptr;
  int temp6 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkUnsignedCharArray") &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    int tempr = (ap.IsBound() ?
      op->GetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkOpenGLRenderWindow::GetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderWindow_GetRGBACharPixelData_Methods[] = {
  {nullptr, PyvtkOpenGLRenderWindow_GetRGBACharPixelData_s1, METH_VARARGS,
   "@iiiii|i"},
  {nullptr, PyvtkOpenGLRenderWindow_GetRGBACharPixelData_s2, METH_VARARGS,
   "@iiiiiV|i *vtkUnsignedCharArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLRenderWindow_GetRGBACharPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLRenderWindow_GetRGBACharPixelData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkOpenGLRenderWindow_GetRGBACharPixelData_s1(self, args);
    case 7:
      return PyvtkOpenGLRenderWindow_GetRGBACharPixelData_s2(self, args);
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRGBACharPixelData");
  return nullptr;
}



static PyObject *
PyvtkOpenGLRenderWindow_SetRGBACharPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

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

  if (op && ap.CheckArgCount(6, 8) &&
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

    int tempr = (ap.IsBound() ?
      op->SetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkOpenGLRenderWindow::SetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

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
PyvtkOpenGLRenderWindow_SetRGBACharPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkUnsignedCharArray *temp4 = nullptr;
  int temp5;
  int temp6 = 0;
  int temp7 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6, 8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkUnsignedCharArray") &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp7)))
  {
    int tempr = (ap.IsBound() ?
      op->SetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkOpenGLRenderWindow::SetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderWindow_SetRGBACharPixelData_Methods[] = {
  {nullptr, PyvtkOpenGLRenderWindow_SetRGBACharPixelData_s1, METH_VARARGS,
   "@iiiiPi|ii *B"},
  {nullptr, PyvtkOpenGLRenderWindow_SetRGBACharPixelData_s2, METH_VARARGS,
   "@iiiiVi|ii *vtkUnsignedCharArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLRenderWindow_SetRGBACharPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLRenderWindow_SetRGBACharPixelData_Methods;
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
PyvtkOpenGLRenderWindow_GetZbufferData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    float *tempr = (ap.IsBound() ?
      op->GetZbufferData(temp0, temp1, temp2, temp3) :
      op->vtkOpenGLRenderWindow::GetZbufferData(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_GetZbufferData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<float> store4(2*size4);
  float *temp4 = store4.Data();
  float *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GetZbufferData(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOpenGLRenderWindow::GetZbufferData(temp0, temp1, temp2, temp3, temp4));

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
PyvtkOpenGLRenderWindow_GetZbufferData_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkFloatArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkFloatArray"))
  {
    int tempr = (ap.IsBound() ?
      op->GetZbufferData(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOpenGLRenderWindow::GetZbufferData(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderWindow_GetZbufferData_Methods[] = {
  {nullptr, PyvtkOpenGLRenderWindow_GetZbufferData_s2, METH_VARARGS,
   "@iiiiP *f"},
  {nullptr, PyvtkOpenGLRenderWindow_GetZbufferData_s3, METH_VARARGS,
   "@iiiiV *vtkFloatArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLRenderWindow_GetZbufferData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLRenderWindow_GetZbufferData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkOpenGLRenderWindow_GetZbufferData_s1(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetZbufferData");
  return nullptr;
}



static PyObject *
PyvtkOpenGLRenderWindow_SetZbufferData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<float> store4(2*size4);
  float *temp4 = store4.Data();
  float *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->SetZbufferData(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOpenGLRenderWindow::SetZbufferData(temp0, temp1, temp2, temp3, temp4));

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
PyvtkOpenGLRenderWindow_SetZbufferData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkFloatArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkFloatArray"))
  {
    int tempr = (ap.IsBound() ?
      op->SetZbufferData(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOpenGLRenderWindow::SetZbufferData(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderWindow_SetZbufferData_Methods[] = {
  {nullptr, PyvtkOpenGLRenderWindow_SetZbufferData_s1, METH_VARARGS,
   "@iiiiP *f"},
  {nullptr, PyvtkOpenGLRenderWindow_SetZbufferData_s2, METH_VARARGS,
   "@iiiiV *vtkFloatArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLRenderWindow_SetZbufferData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLRenderWindow_SetZbufferData_Methods;
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
PyvtkOpenGLRenderWindow_ActivateTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActivateTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  vtkTextureObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
  {
    if (ap.IsBound())
    {
      op->ActivateTexture(temp0);
    }
    else
    {
      op->vtkOpenGLRenderWindow::ActivateTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_DeactivateTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeactivateTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  vtkTextureObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
  {
    if (ap.IsBound())
    {
      op->DeactivateTexture(temp0);
    }
    else
    {
      op->vtkOpenGLRenderWindow::DeactivateTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetTextureUnitForTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureUnitForTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  vtkTextureObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureUnitForTexture(temp0) :
      op->vtkOpenGLRenderWindow::GetTextureUnitForTexture(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetDepthBufferSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDepthBufferSize() :
      op->vtkOpenGLRenderWindow::GetDepthBufferSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetUsingSRGBColorSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUsingSRGBColorSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUsingSRGBColorSpace() :
      op->vtkOpenGLRenderWindow::GetUsingSRGBColorSpace());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetColorBufferSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorBufferSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetColorBufferSizes(temp0) :
      op->vtkOpenGLRenderWindow::GetColorBufferSizes(temp0));

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
PyvtkOpenGLRenderWindow_GetColorBufferInternalFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorBufferInternalFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorBufferInternalFormat(temp0) :
      op->vtkOpenGLRenderWindow::GetColorBufferInternalFormat(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

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
      op->vtkOpenGLRenderWindow::SetSize(temp0);
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
PyvtkOpenGLRenderWindow_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

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
      op->vtkOpenGLRenderWindow::SetSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkOpenGLRenderWindow_SetSize_s1(self, args);
    case 2:
      return PyvtkOpenGLRenderWindow_SetSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return nullptr;
}



static PyObject *
PyvtkOpenGLRenderWindow_OpenGLInit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenGLInit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OpenGLInit();
    }
    else
    {
      op->vtkOpenGLRenderWindow::OpenGLInit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_OpenGLInitState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenGLInitState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OpenGLInitState();
    }
    else
    {
      op->vtkOpenGLRenderWindow::OpenGLInitState();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_OpenGLInitContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenGLInitContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OpenGLInitContext();
    }
    else
    {
      op->vtkOpenGLRenderWindow::OpenGLInitContext();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetOpenGLVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpenGLVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetOpenGLVersion(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLRenderWindow::GetOpenGLVersion(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetBackLeftBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackLeftBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBackLeftBuffer() :
      op->vtkOpenGLRenderWindow::GetBackLeftBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetBackRightBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackRightBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBackRightBuffer() :
      op->vtkOpenGLRenderWindow::GetBackRightBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetFrontLeftBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrontLeftBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetFrontLeftBuffer() :
      op->vtkOpenGLRenderWindow::GetFrontLeftBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetFrontRightBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrontRightBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetFrontRightBuffer() :
      op->vtkOpenGLRenderWindow::GetFrontRightBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetBackBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBackBuffer() :
      op->vtkOpenGLRenderWindow::GetBackBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetFrontBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrontBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetFrontBuffer() :
      op->vtkOpenGLRenderWindow::GetFrontBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetContextCreationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContextCreationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetContextCreationTime() :
      op->vtkOpenGLRenderWindow::GetContextCreationTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetShaderCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLShaderCache *tempr = (ap.IsBound() ?
      op->GetShaderCache() :
      op->vtkOpenGLRenderWindow::GetShaderCache());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetVBOCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVBOCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLVertexBufferObjectCache *tempr = (ap.IsBound() ?
      op->GetVBOCache() :
      op->vtkOpenGLRenderWindow::GetVBOCache());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetFrameBufferObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameBufferObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetFrameBufferObject() :
      op->vtkOpenGLRenderWindow::GetFrameBufferObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetTextureUnitManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureUnitManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextureUnitManager *tempr = (ap.IsBound() ?
      op->GetTextureUnitManager() :
      op->vtkOpenGLRenderWindow::GetTextureUnitManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_WaitForCompletion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForCompletion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WaitForCompletion();
    }
    else
    {
      op->vtkOpenGLRenderWindow::WaitForCompletion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_DrawPixels_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  void  *temp6 = nullptr;
  Py_buffer pbuf6 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetBuffer(temp6, &pbuf6))
  {
    if (ap.IsBound())
    {
      op->DrawPixels(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkOpenGLRenderWindow::DrawPixels(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf6.obj != 0)
  {
    PyBuffer_Release(&pbuf6);
  }
#endif
  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_DrawPixels_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  int temp7;
  int temp8;
  int temp9;
  int temp10;
  int temp11;
  void  *temp12 = nullptr;
  Py_buffer pbuf12 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(13) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9) &&
      ap.GetValue(temp10) &&
      ap.GetValue(temp11) &&
      ap.GetBuffer(temp12, &pbuf12))
  {
    if (ap.IsBound())
    {
      op->DrawPixels(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11, temp12);
    }
    else
    {
      op->vtkOpenGLRenderWindow::DrawPixels(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11, temp12);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf12.obj != 0)
  {
    PyBuffer_Release(&pbuf12);
  }
#endif
  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_DrawPixels_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  void  *temp4 = nullptr;
  Py_buffer pbuf4 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetBuffer(temp4, &pbuf4))
  {
    if (ap.IsBound())
    {
      op->DrawPixels(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkOpenGLRenderWindow::DrawPixels(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf4.obj != 0)
  {
    PyBuffer_Release(&pbuf4);
  }
#endif
  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_DrawPixels(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 7:
      return PyvtkOpenGLRenderWindow_DrawPixels_s1(self, args);
    case 13:
      return PyvtkOpenGLRenderWindow_DrawPixels_s2(self, args);
    case 5:
      return PyvtkOpenGLRenderWindow_DrawPixels_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawPixels");
  return nullptr;
}



static PyObject *
PyvtkOpenGLRenderWindow_GetMaximumHardwareLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumHardwareLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaximumHardwareLineWidth() :
      op->vtkOpenGLRenderWindow::GetMaximumHardwareLineWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_IsPointSpriteBugPresent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPointSpriteBugPresent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsPointSpriteBugPresent() :
      op->vtkOpenGLRenderWindow::IsPointSpriteBugPresent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetDefaultTextureInternalFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultTextureInternalFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  bool temp2 = false;
  bool temp3 = false;
  bool temp4 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->GetDefaultTextureInternalFormat(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOpenGLRenderWindow::GetDefaultTextureInternalFormat(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetOpenGLSupportMessage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpenGLSupportMessage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetOpenGLSupportMessage() :
      op->vtkOpenGLRenderWindow::GetOpenGLSupportMessage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_SetUseOffScreenBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOffScreenBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetUseOffScreenBuffers(temp0) :
      op->vtkOpenGLRenderWindow::SetUseOffScreenBuffers(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetUseOffScreenBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOffScreenBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseOffScreenBuffers() :
      op->vtkOpenGLRenderWindow::GetUseOffScreenBuffers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_SupportsOpenGL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportsOpenGL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->SupportsOpenGL() :
      op->vtkOpenGLRenderWindow::SupportsOpenGL());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_ReportCapabilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportCapabilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->ReportCapabilities() :
      op->vtkOpenGLRenderWindow::ReportCapabilities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkOpenGLRenderWindow::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_RegisterGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  vtkGenericOpenGLResourceFreeCallback *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericOpenGLResourceFreeCallback"))
  {
    if (ap.IsBound())
    {
      op->RegisterGraphicsResources(temp0);
    }
    else
    {
      op->vtkOpenGLRenderWindow::RegisterGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_UnregisterGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnregisterGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  vtkGenericOpenGLResourceFreeCallback *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericOpenGLResourceFreeCallback"))
  {
    if (ap.IsBound())
    {
      op->UnregisterGraphicsResources(temp0);
    }
    else
    {
      op->vtkOpenGLRenderWindow::UnregisterGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_PushContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PushContext();
    }
    else
    {
      op->vtkOpenGLRenderWindow::PushContext();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_PopContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PopContext();
    }
    else
    {
      op->vtkOpenGLRenderWindow::PopContext();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_InitializeFromCurrentContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeFromCurrentContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->InitializeFromCurrentContext() :
      op->vtkOpenGLRenderWindow::InitializeFromCurrentContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetDefaultFrameBufferId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFrameBufferId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDefaultFrameBufferId() :
      op->vtkOpenGLRenderWindow::GetDefaultFrameBufferId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_SetSwapControl(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSwapControl");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetSwapControl(temp0) :
      op->vtkOpenGLRenderWindow::SetSwapControl(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetTQuad2DVBO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTQuad2DVBO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLBufferObject *tempr = (ap.IsBound() ?
      op->GetTQuad2DVBO() :
      op->vtkOpenGLRenderWindow::GetTQuad2DVBO());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetNoiseTextureUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoiseTextureUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNoiseTextureUnit() :
      op->vtkOpenGLRenderWindow::GetNoiseTextureUnit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_StereoUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StereoUpdate();
    }
    else
    {
      op->vtkOpenGLRenderWindow::StereoUpdate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_StereoMidpoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoMidpoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StereoMidpoint();
    }
    else
    {
      op->vtkOpenGLRenderWindow::StereoMidpoint();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Render();
    }
    else
    {
      op->vtkOpenGLRenderWindow::Render();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderWindow_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLRenderWindow_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLRenderWindow_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLRenderWindow_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOpenGLRenderWindow\nC++: static vtkOpenGLRenderWindow *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLRenderWindow_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOpenGLRenderWindow\nC++: vtkOpenGLRenderWindow *NewInstance()\n\n"},
  {"GetRenderingBackend", PyvtkOpenGLRenderWindow_GetRenderingBackend, METH_VARARGS,
   "V.GetRenderingBackend() -> string\nC++: const char *GetRenderingBackend() override;\n\nWhat rendering backend has the user requested\n"},
  {"SetGlobalMaximumNumberOfMultiSamples", PyvtkOpenGLRenderWindow_SetGlobalMaximumNumberOfMultiSamples, METH_VARARGS,
   "V.SetGlobalMaximumNumberOfMultiSamples(int)\nC++: static void SetGlobalMaximumNumberOfMultiSamples(int val)\n\nSet/Get the maximum number of multisamples\n"},
  {"GetGlobalMaximumNumberOfMultiSamples", PyvtkOpenGLRenderWindow_GetGlobalMaximumNumberOfMultiSamples, METH_VARARGS,
   "V.GetGlobalMaximumNumberOfMultiSamples() -> int\nC++: static int GetGlobalMaximumNumberOfMultiSamples()\n\nSet/Get the maximum number of multisamples\n"},
  {"GetPixelData", PyvtkOpenGLRenderWindow_GetPixelData, METH_VARARGS,
   "V.GetPixelData(int, int, int, int, int, int) -> (int, ...)\nC++: unsigned char *GetPixelData(int x, int y, int x2, int y2,\n    int front, int right) override;\nV.GetPixelData(int, int, int, int, int, vtkUnsignedCharArray, int)\n     -> int\nC++: int GetPixelData(int x, int y, int x2, int y2, int front,\n    vtkUnsignedCharArray *data, int right) override;\n\nSet/Get the pixel data of an image, transmitted as RGBRGB...\n"},
  {"SetPixelData", PyvtkOpenGLRenderWindow_SetPixelData, METH_VARARGS,
   "V.SetPixelData(int, int, int, int, [int, ...], int, int) -> int\nC++: int SetPixelData(int x, int y, int x2, int y2,\n    unsigned char *data, int front, int right) override;\nV.SetPixelData(int, int, int, int, vtkUnsignedCharArray, int, int)\n     -> int\nC++: int SetPixelData(int x, int y, int x2, int y2,\n    vtkUnsignedCharArray *data, int front, int right) override;\n\nSet/Get the pixel data of an image, transmitted as RGBRGB...\n"},
  {"GetRGBAPixelData", PyvtkOpenGLRenderWindow_GetRGBAPixelData, METH_VARARGS,
   "V.GetRGBAPixelData(int, int, int, int, int, int) -> (float, ...)\nC++: float *GetRGBAPixelData(int x, int y, int x2, int y2,\n    int front, int right=0) override;\nV.GetRGBAPixelData(int, int, int, int, int, vtkFloatArray, int)\n    -> int\nC++: int GetRGBAPixelData(int x, int y, int x2, int y2, int front,\n     vtkFloatArray *data, int right=0) override;\n\nSet/Get the pixel data of an image, transmitted as RGBARGBA...\n"},
  {"SetRGBAPixelData", PyvtkOpenGLRenderWindow_SetRGBAPixelData, METH_VARARGS,
   "V.SetRGBAPixelData(int, int, int, int, [float, ...], int, int,\n    int) -> int\nC++: int SetRGBAPixelData(int x, int y, int x2, int y2,\n    float *data, int front, int blend=0, int right=0) override;\nV.SetRGBAPixelData(int, int, int, int, vtkFloatArray, int, int,\n    int) -> int\nC++: int SetRGBAPixelData(int x, int y, int x2, int y2,\n    vtkFloatArray *data, int front, int blend=0, int right=0)\n    override;\n\nSet/Get the pixel data of an image, transmitted as RGBARGBA...\n"},
  {"ReleaseRGBAPixelData", PyvtkOpenGLRenderWindow_ReleaseRGBAPixelData, METH_VARARGS,
   "V.ReleaseRGBAPixelData([float, ...])\nC++: void ReleaseRGBAPixelData(float *data) override;\n\nSet/Get the pixel data of an image, transmitted as RGBARGBA...\n"},
  {"GetRGBACharPixelData", PyvtkOpenGLRenderWindow_GetRGBACharPixelData, METH_VARARGS,
   "V.GetRGBACharPixelData(int, int, int, int, int, int) -> (int, ...)\nC++: unsigned char *GetRGBACharPixelData(int x, int y, int x2,\n    int y2, int front, int right=0) override;\nV.GetRGBACharPixelData(int, int, int, int, int,\n    vtkUnsignedCharArray, int) -> int\nC++: int GetRGBACharPixelData(int x, int y, int x2, int y2,\n    int front, vtkUnsignedCharArray *data, int right=0) override;\n\nSet/Get the pixel data of an image, transmitted as RGBARGBA...\n"},
  {"SetRGBACharPixelData", PyvtkOpenGLRenderWindow_SetRGBACharPixelData, METH_VARARGS,
   "V.SetRGBACharPixelData(int, int, int, int, [int, ...], int, int,\n    int) -> int\nC++: int SetRGBACharPixelData(int x, int y, int x2, int y2,\n    unsigned char *data, int front, int blend=0, int right=0)\n    override;\nV.SetRGBACharPixelData(int, int, int, int, vtkUnsignedCharArray,\n    int, int, int) -> int\nC++: int SetRGBACharPixelData(int x, int y, int x2, int y2,\n    vtkUnsignedCharArray *data, int front, int blend=0,\n    int right=0) override;\n\nSet/Get the pixel data of an image, transmitted as RGBARGBA...\n"},
  {"GetZbufferData", PyvtkOpenGLRenderWindow_GetZbufferData, METH_VARARGS,
   "V.GetZbufferData(int, int, int, int) -> (float, ...)\nC++: float *GetZbufferData(int x1, int y1, int x2, int y2)\n    override;\nV.GetZbufferData(int, int, int, int, [float, ...]) -> int\nC++: int GetZbufferData(int x1, int y1, int x2, int y2, float *z)\n    override;\nV.GetZbufferData(int, int, int, int, vtkFloatArray) -> int\nC++: int GetZbufferData(int x1, int y1, int x2, int y2,\n    vtkFloatArray *z) override;\n\nSet/Get the zbuffer data from an image\n"},
  {"SetZbufferData", PyvtkOpenGLRenderWindow_SetZbufferData, METH_VARARGS,
   "V.SetZbufferData(int, int, int, int, [float, ...]) -> int\nC++: int SetZbufferData(int x1, int y1, int x2, int y2,\n    float *buffer) override;\nV.SetZbufferData(int, int, int, int, vtkFloatArray) -> int\nC++: int SetZbufferData(int x1, int y1, int x2, int y2,\n    vtkFloatArray *buffer) override;\n\nSet/Get the zbuffer data from an image\n"},
  {"ActivateTexture", PyvtkOpenGLRenderWindow_ActivateTexture, METH_VARARGS,
   "V.ActivateTexture(vtkTextureObject)\nC++: void ActivateTexture(vtkTextureObject *)\n\nActivate a texture unit for this texture\n"},
  {"DeactivateTexture", PyvtkOpenGLRenderWindow_DeactivateTexture, METH_VARARGS,
   "V.DeactivateTexture(vtkTextureObject)\nC++: void DeactivateTexture(vtkTextureObject *)\n\nDeactive a previously activated texture\n"},
  {"GetTextureUnitForTexture", PyvtkOpenGLRenderWindow_GetTextureUnitForTexture, METH_VARARGS,
   "V.GetTextureUnitForTexture(vtkTextureObject) -> int\nC++: int GetTextureUnitForTexture(vtkTextureObject *)\n\nGet the texture unit for a given texture object\n"},
  {"GetDepthBufferSize", PyvtkOpenGLRenderWindow_GetDepthBufferSize, METH_VARARGS,
   "V.GetDepthBufferSize() -> int\nC++: int GetDepthBufferSize() override;\n\nGet the size of the depth buffer.\n"},
  {"GetUsingSRGBColorSpace", PyvtkOpenGLRenderWindow_GetUsingSRGBColorSpace, METH_VARARGS,
   "V.GetUsingSRGBColorSpace() -> bool\nC++: bool GetUsingSRGBColorSpace()\n\nIs this window/fo in sRGB colorspace\n"},
  {"GetColorBufferSizes", PyvtkOpenGLRenderWindow_GetColorBufferSizes, METH_VARARGS,
   "V.GetColorBufferSizes([int, ...]) -> int\nC++: int GetColorBufferSizes(int *rgba) override;\n\nGet the size of the color buffer. Returns 0 if not able to\ndetermine otherwise sets R G B and A into buffer.\n"},
  {"GetColorBufferInternalFormat", PyvtkOpenGLRenderWindow_GetColorBufferInternalFormat, METH_VARARGS,
   "V.GetColorBufferInternalFormat(int) -> int\nC++: int GetColorBufferInternalFormat(int attachmentPoint)\n\nGet the internal format of current attached texture or render\nbuffer. attachmentPoint is the index of attachment. Returns 0 if\nnot able to determine.\n"},
  {"SetSize", PyvtkOpenGLRenderWindow_SetSize, METH_VARARGS,
   "V.SetSize([int, int])\nC++: void SetSize(int a[2]) override;\nV.SetSize(int, int)\nC++: void SetSize(int, int) override;\n\nSet the size of the window in screen coordinates in pixels.\n"},
  {"OpenGLInit", PyvtkOpenGLRenderWindow_OpenGLInit, METH_VARARGS,
   "V.OpenGLInit()\nC++: virtual void OpenGLInit()\n\nInitialize OpenGL for this window.\n"},
  {"OpenGLInitState", PyvtkOpenGLRenderWindow_OpenGLInitState, METH_VARARGS,
   "V.OpenGLInitState()\nC++: virtual void OpenGLInitState()\n\n"},
  {"OpenGLInitContext", PyvtkOpenGLRenderWindow_OpenGLInitContext, METH_VARARGS,
   "V.OpenGLInitContext()\nC++: virtual void OpenGLInitContext()\n\n"},
  {"GetOpenGLVersion", PyvtkOpenGLRenderWindow_GetOpenGLVersion, METH_VARARGS,
   "V.GetOpenGLVersion(int, int)\nC++: void GetOpenGLVersion(int &major, int &minor)\n\nGet the major and minor version numbers of the OpenGL context we\nare using ala 3.2, 3.3, 4.0, etc... returns 0,0 if opengl has not\nbeen initialized yet\n"},
  {"GetBackLeftBuffer", PyvtkOpenGLRenderWindow_GetBackLeftBuffer, METH_VARARGS,
   "V.GetBackLeftBuffer() -> int\nC++: unsigned int GetBackLeftBuffer()\n\nReturn the OpenGL name of the back left buffer. It is\nGL_BACK_LEFT if GL is bound to the window-system-provided\nframebuffer. It is vtkgl::COLOR_ATTACHMENT0_EXT if GL is bound to\nan application-created framebuffer object (GPU-based offscreen\nrendering) It is used by vtkOpenGLCamera.\n"},
  {"GetBackRightBuffer", PyvtkOpenGLRenderWindow_GetBackRightBuffer, METH_VARARGS,
   "V.GetBackRightBuffer() -> int\nC++: unsigned int GetBackRightBuffer()\n\nReturn the OpenGL name of the back right buffer. It is\nGL_BACK_RIGHT if GL is bound to the window-system-provided\nframebuffer. It is vtkgl::COLOR_ATTACHMENT0_EXT+1 if GL is bound\nto an application-created framebuffer object (GPU-based offscreen\nrendering) It is used by vtkOpenGLCamera.\n"},
  {"GetFrontLeftBuffer", PyvtkOpenGLRenderWindow_GetFrontLeftBuffer, METH_VARARGS,
   "V.GetFrontLeftBuffer() -> int\nC++: unsigned int GetFrontLeftBuffer()\n\nReturn the OpenGL name of the front left buffer. It is\nGL_FRONT_LEFT if GL is bound to the window-system-provided\nframebuffer. It is vtkgl::COLOR_ATTACHMENT0_EXT if GL is bound to\nan application-created framebuffer object (GPU-based offscreen\nrendering) It is used by vtkOpenGLCamera.\n"},
  {"GetFrontRightBuffer", PyvtkOpenGLRenderWindow_GetFrontRightBuffer, METH_VARARGS,
   "V.GetFrontRightBuffer() -> int\nC++: unsigned int GetFrontRightBuffer()\n\nReturn the OpenGL name of the front right buffer. It is\nGL_FRONT_RIGHT if GL is bound to the window-system-provided\nframebuffer. It is vtkgl::COLOR_ATTACHMENT0_EXT+1 if GL is bound\nto an application-created framebuffer object (GPU-based offscreen\nrendering) It is used by vtkOpenGLCamera.\n"},
  {"GetBackBuffer", PyvtkOpenGLRenderWindow_GetBackBuffer, METH_VARARGS,
   "V.GetBackBuffer() -> int\nC++: unsigned int GetBackBuffer()\n\nReturn the OpenGL name of the back left buffer. It is GL_BACK if\nGL is bound to the window-system-provided framebuffer. It is\nvtkgl::COLOR_ATTACHMENT0_EXT if GL is bound to an\napplication-created framebuffer object (GPU-based offscreen\nrendering) It is used by vtkOpenGLCamera.\n"},
  {"GetFrontBuffer", PyvtkOpenGLRenderWindow_GetFrontBuffer, METH_VARARGS,
   "V.GetFrontBuffer() -> int\nC++: unsigned int GetFrontBuffer()\n\nReturn the OpenGL name of the front left buffer. It is GL_FRONT\nif GL is bound to the window-system-provided framebuffer. It is\nvtkgl::COLOR_ATTACHMENT0_EXT if GL is bound to an\napplication-created framebuffer object (GPU-based offscreen\nrendering) It is used by vtkOpenGLCamera.\n"},
  {"GetContextCreationTime", PyvtkOpenGLRenderWindow_GetContextCreationTime, METH_VARARGS,
   "V.GetContextCreationTime() -> int\nC++: virtual vtkMTimeType GetContextCreationTime()\n\nGet the time when the OpenGL context was created.\n"},
  {"GetShaderCache", PyvtkOpenGLRenderWindow_GetShaderCache, METH_VARARGS,
   "V.GetShaderCache() -> vtkOpenGLShaderCache\nC++: virtual vtkOpenGLShaderCache *GetShaderCache()\n\nReturns an Shader Cache object\n"},
  {"GetVBOCache", PyvtkOpenGLRenderWindow_GetVBOCache, METH_VARARGS,
   "V.GetVBOCache() -> vtkOpenGLVertexBufferObjectCache\nC++: virtual vtkOpenGLVertexBufferObjectCache *GetVBOCache()\n\nReturns an Shader Cache object\n"},
  {"GetFrameBufferObject", PyvtkOpenGLRenderWindow_GetFrameBufferObject, METH_VARARGS,
   "V.GetFrameBufferObject() -> int\nC++: virtual unsigned int GetFrameBufferObject()\n\nReturns the current default FBO (0 when OffScreenRendering is\ninactive).\n"},
  {"GetTextureUnitManager", PyvtkOpenGLRenderWindow_GetTextureUnitManager, METH_VARARGS,
   "V.GetTextureUnitManager() -> vtkTextureUnitManager\nC++: vtkTextureUnitManager *GetTextureUnitManager()\n\nReturns its texture unit manager object. A new one will be\ncreated if one hasn't already been set up.\n"},
  {"WaitForCompletion", PyvtkOpenGLRenderWindow_WaitForCompletion, METH_VARARGS,
   "V.WaitForCompletion()\nC++: void WaitForCompletion() override;\n\nBlock the thread until the actual rendering is finished(). Useful\nfor measurement only.\n"},
  {"DrawPixels", PyvtkOpenGLRenderWindow_DrawPixels, METH_VARARGS,
   "V.DrawPixels(int, int, int, int, int, int, void)\nC++: virtual void DrawPixels(int x1, int y1, int x2, int y2,\n    int numComponents, int dataType, void *data)\nV.DrawPixels(int, int, int, int, int, int, int, int, int, int,\n    int, int, void)\nC++: virtual void DrawPixels(int dstXmin, int dstYmin,\n    int dstXmax, int dstYmax, int srcXmin, int srcYmin,\n    int srcXmax, int srcYmax, int srcWidth, int srcHeight,\n    int numComponents, int dataType, void *data)\nV.DrawPixels(int, int, int, int, void)\nC++: virtual void DrawPixels(int srcWidth, int srcHeight,\n    int numComponents, int dataType, void *data)\n\nReplacement for the old glDrawPixels function\n"},
  {"GetMaximumHardwareLineWidth", PyvtkOpenGLRenderWindow_GetMaximumHardwareLineWidth, METH_VARARGS,
   "V.GetMaximumHardwareLineWidth() -> float\nC++: virtual float GetMaximumHardwareLineWidth()\n\nReturn the largest line width supported by the hardware\n"},
  {"IsPointSpriteBugPresent", PyvtkOpenGLRenderWindow_IsPointSpriteBugPresent, METH_VARARGS,
   "V.IsPointSpriteBugPresent() -> bool\nC++: virtual bool IsPointSpriteBugPresent()\n\nReturns true if driver has an EGL/OpenGL bug that makes\nvtkChartsCoreCxx-TestChartDoubleColors and other tests to fail\nbecause point sprites don't work correctly (gl_PointCoord is\nundefined) unless glEnable(GL_POINT_SPRITE)\n"},
  {"GetDefaultTextureInternalFormat", PyvtkOpenGLRenderWindow_GetDefaultTextureInternalFormat, METH_VARARGS,
   "V.GetDefaultTextureInternalFormat(int, int, bool, bool, bool)\n    -> int\nC++: int GetDefaultTextureInternalFormat(int vtktype,\n    int numComponents, bool needInteger, bool needFloat,\n    bool needSRGB)\n\nGet a mapping of vtk data types to native texture formats for\nthis window we put this on the RenderWindow so that every texture\ndoes not have to build these structures themselves\n"},
  {"GetOpenGLSupportMessage", PyvtkOpenGLRenderWindow_GetOpenGLSupportMessage, METH_VARARGS,
   "V.GetOpenGLSupportMessage() -> string\nC++: std::string GetOpenGLSupportMessage()\n\nReturn a message profiding additional details about the results\nof calling SupportsOpenGL()  This can be used to retrieve more\nspecifics about what failed\n"},
  {"SetUseOffScreenBuffers", PyvtkOpenGLRenderWindow_SetUseOffScreenBuffers, METH_VARARGS,
   "V.SetUseOffScreenBuffers(bool) -> int\nC++: int SetUseOffScreenBuffers(bool offScreen) override;\n\nCreate and bind offscreen rendering buffers without destroying\nthe current OpenGL context. This allows to temporary switch to\noffscreen rendering (ie. to make a screenshot even if the window\nis hidden). Return if the creation was successful (1) or not (0).\nNote: This function requires that the device supports OpenGL\nframebuffer extension. The function has no effect if\nOffScreenRendering is ON.\n"},
  {"GetUseOffScreenBuffers", PyvtkOpenGLRenderWindow_GetUseOffScreenBuffers, METH_VARARGS,
   "V.GetUseOffScreenBuffers() -> bool\nC++: bool GetUseOffScreenBuffers() override;\n\n"},
  {"SupportsOpenGL", PyvtkOpenGLRenderWindow_SupportsOpenGL, METH_VARARGS,
   "V.SupportsOpenGL() -> int\nC++: int SupportsOpenGL() override;\n\nDoes this render window support OpenGL? 0-false, 1-true\n"},
  {"ReportCapabilities", PyvtkOpenGLRenderWindow_ReportCapabilities, METH_VARARGS,
   "V.ReportCapabilities() -> string\nC++: const char *ReportCapabilities() override;\n\nGet report of capabilities for the render window\n"},
  {"Initialize", PyvtkOpenGLRenderWindow_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: virtual void Initialize(void)\n\nInitialize the rendering window.  This will setup all\nsystem-specific resources.  This method and Finalize() must be\nsymmetric and it should be possible to call them multiple times,\neven changing WindowId in-between.  This is what WindowRemap\ndoes.\n"},
  {"RegisterGraphicsResources", PyvtkOpenGLRenderWindow_RegisterGraphicsResources, METH_VARARGS,
   "V.RegisterGraphicsResources(vtkGenericOpenGLResourceFreeCallback)\nC++: void RegisterGraphicsResources(\n    vtkGenericOpenGLResourceFreeCallback *cb)\n\n"},
  {"UnregisterGraphicsResources", PyvtkOpenGLRenderWindow_UnregisterGraphicsResources, METH_VARARGS,
   "V.UnregisterGraphicsResources(\n    vtkGenericOpenGLResourceFreeCallback)\nC++: void UnregisterGraphicsResources(\n    vtkGenericOpenGLResourceFreeCallback *cb)\n\n"},
  {"PushContext", PyvtkOpenGLRenderWindow_PushContext, METH_VARARGS,
   "V.PushContext()\nC++: virtual void PushContext()\n\nAbility to push and pop this window's context as the current\ncontext. The idea being to if needed make this window's context\ncurrent and when done releasing resources restore the prior\ncontext.  The default implementation here is only meant as a\nbackup for subclasses that lack a proper implementation.\n"},
  {"PopContext", PyvtkOpenGLRenderWindow_PopContext, METH_VARARGS,
   "V.PopContext()\nC++: virtual void PopContext()\n\n"},
  {"InitializeFromCurrentContext", PyvtkOpenGLRenderWindow_InitializeFromCurrentContext, METH_VARARGS,
   "V.InitializeFromCurrentContext() -> bool\nC++: bool InitializeFromCurrentContext() override;\n\nInitialize the render window from the information associated with\nthe currently activated OpenGL context.\n"},
  {"GetDefaultFrameBufferId", PyvtkOpenGLRenderWindow_GetDefaultFrameBufferId, METH_VARARGS,
   "V.GetDefaultFrameBufferId() -> int\nC++: virtual unsigned int GetDefaultFrameBufferId()\n\nReturns the id for the frame buffer object, if any, used by the\nrender window in which the window does all its rendering. This\nmay be 0, in which case the render window is rendering to the\ndefault OpenGL render buffers.\n\n@returns the name (or id) of the frame buffer object to render\n    to.\n"},
  {"SetSwapControl", PyvtkOpenGLRenderWindow_SetSwapControl, METH_VARARGS,
   "V.SetSwapControl(int) -> bool\nC++: virtual bool SetSwapControl(int)\n\nSet the number of vertical syncs required between frames. A value\nof 0 means swap buffers as quickly as possible regardless of the\nvertical refresh. A value of 1 means swap buffers in sync with\nthe vertical refresh to eliminate tearing. A value of -1 means\nuse a value of 1 unless we missed a frame in which case swap\nimmediately. Returns true if the call succeeded.\n"},
  {"GetTQuad2DVBO", PyvtkOpenGLRenderWindow_GetTQuad2DVBO, METH_VARARGS,
   "V.GetTQuad2DVBO() -> vtkOpenGLBufferObject\nC++: vtkOpenGLBufferObject *GetTQuad2DVBO()\n\n"},
  {"GetNoiseTextureUnit", PyvtkOpenGLRenderWindow_GetNoiseTextureUnit, METH_VARARGS,
   "V.GetNoiseTextureUnit() -> int\nC++: int GetNoiseTextureUnit()\n\n"},
  {"StereoUpdate", PyvtkOpenGLRenderWindow_StereoUpdate, METH_VARARGS,
   "V.StereoUpdate()\nC++: void StereoUpdate() override;\n\nUpdate the system, if needed, due to stereo rendering. For some\nstereo methods, subclasses might need to switch some hardware\nsettings here.\n"},
  {"StereoMidpoint", PyvtkOpenGLRenderWindow_StereoMidpoint, METH_VARARGS,
   "V.StereoMidpoint()\nC++: void StereoMidpoint() override;\n\nIntermediate method performs operations required between the\nrendering of the left and right eye.\n"},
  {"Render", PyvtkOpenGLRenderWindow_Render, METH_VARARGS,
   "V.Render()\nC++: void Render() override;\n\nHandle opengl specific code and calls superclass\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOpenGLRenderWindow_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLRenderWindow", // tp_name
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
  PyvtkOpenGLRenderWindow_Doc, // tp_doc
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

PyObject *PyvtkOpenGLRenderWindow_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOpenGLRenderWindow_Type, PyvtkOpenGLRenderWindow_Methods,
    "vtkOpenGLRenderWindow",
 nullptr);

  PyTypeObject *pytype = &PyvtkOpenGLRenderWindow_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkRenderWindow_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLRenderWindow(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLRenderWindow_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLRenderWindow", o) != 0)
  {
    Py_DECREF(o);
  }

}

