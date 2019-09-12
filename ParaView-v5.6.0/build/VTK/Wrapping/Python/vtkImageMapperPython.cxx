// python wrapper for vtkImageMapper
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
#include "vtkImageMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageMapper_ClassNew(); }

#ifndef DECLARED_PyvtkMapper2D_ClassNew
extern "C" { PyObject *PyvtkMapper2D_ClassNew(); }
#define DECLARED_PyvtkMapper2D_ClassNew
#endif

static const char *PyvtkImageMapper_Doc =
  "vtkImageMapper - 2D image display\n\n"
  "Superclass: vtkMapper2D\n\n"
  "vtkImageMapper provides 2D image display support for vtk. It is a\n"
  "Mapper2D subclass that can be associated with an Actor2D and placed\n"
  "within a RenderWindow or ImageWindow. The vtkImageMapper is a 2D\n"
  "mapper, which means that it displays images in display coordinates.\n"
  "In display coordinates, one image pixel is always one screen pixel.\n\n"
  "@sa\n"
  "vtkMapper2D vtkActor2D\n\n";


static PyObject *
PyvtkImageMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageMapper *tempr = vtkImageMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageMapper::NewInstance());

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
PyvtkImageMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageMapper::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_SetColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorWindow(temp0);
    }
    else
    {
      op->vtkImageMapper::SetColorWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetColorWindow() :
      op->vtkImageMapper::GetColorWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_SetColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorLevel(temp0);
    }
    else
    {
      op->vtkImageMapper::SetColorLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetColorLevel() :
      op->vtkImageMapper::GetColorLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_SetZSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZSlice(temp0);
    }
    else
    {
      op->vtkImageMapper::SetZSlice(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetZSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZSlice() :
      op->vtkImageMapper::GetZSlice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetWholeZMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeZMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWholeZMin() :
      op->vtkImageMapper::GetWholeZMin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetWholeZMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeZMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWholeZMax() :
      op->vtkImageMapper::GetWholeZMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_RenderStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkActor2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
  {
    if (ap.IsBound())
    {
      op->RenderStart(temp0, temp1);
    }
    else
    {
      op->vtkImageMapper::RenderStart(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_RenderData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkImageData *temp1 = nullptr;
  vtkActor2D *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetVTKObject(temp2, "vtkActor2D"))
  {
    op->RenderData(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetColorShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetColorShift() :
      op->vtkImageMapper::GetColorShift());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetColorScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetColorScale() :
      op->vtkImageMapper::GetColorScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkImageMapper::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkImageMapper::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_SetRenderToRectangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderToRectangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderToRectangle(temp0);
    }
    else
    {
      op->vtkImageMapper::SetRenderToRectangle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetRenderToRectangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderToRectangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRenderToRectangle() :
      op->vtkImageMapper::GetRenderToRectangle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_RenderToRectangleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderToRectangleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderToRectangleOn();
    }
    else
    {
      op->vtkImageMapper::RenderToRectangleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_RenderToRectangleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderToRectangleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderToRectangleOff();
    }
    else
    {
      op->vtkImageMapper::RenderToRectangleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_SetUseCustomExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCustomExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseCustomExtents(temp0);
    }
    else
    {
      op->vtkImageMapper::SetUseCustomExtents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetUseCustomExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCustomExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseCustomExtents() :
      op->vtkImageMapper::GetUseCustomExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_UseCustomExtentsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomExtentsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCustomExtentsOn();
    }
    else
    {
      op->vtkImageMapper::UseCustomExtentsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_UseCustomExtentsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomExtentsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCustomExtentsOff();
    }
    else
    {
      op->vtkImageMapper::UseCustomExtentsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_SetCustomDisplayExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomDisplayExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  const size_t size0 = 4;
  int temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCustomDisplayExtents(temp0);
    }
    else
    {
      op->vtkImageMapper::SetCustomDisplayExtents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetCustomDisplayExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomDisplayExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetCustomDisplayExtents() :
      op->vtkImageMapper::GetCustomDisplayExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageMapper_Methods[] = {
  {"IsTypeOf", PyvtkImageMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageMapper\nC++: static vtkImageMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageMapper\nC++: vtkImageMapper *NewInstance()\n\n"},
  {"GetMTime", PyvtkImageMapper_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride Modifiedtime as we have added a lookuptable\n"},
  {"SetColorWindow", PyvtkImageMapper_SetColorWindow, METH_VARARGS,
   "V.SetColorWindow(float)\nC++: virtual void SetColorWindow(double _arg)\n\nSet/Get the window value for window/level\n"},
  {"GetColorWindow", PyvtkImageMapper_GetColorWindow, METH_VARARGS,
   "V.GetColorWindow() -> float\nC++: virtual double GetColorWindow()\n\nSet/Get the window value for window/level\n"},
  {"SetColorLevel", PyvtkImageMapper_SetColorLevel, METH_VARARGS,
   "V.SetColorLevel(float)\nC++: virtual void SetColorLevel(double _arg)\n\nSet/Get the level value for window/level\n"},
  {"GetColorLevel", PyvtkImageMapper_GetColorLevel, METH_VARARGS,
   "V.GetColorLevel() -> float\nC++: virtual double GetColorLevel()\n\nSet/Get the level value for window/level\n"},
  {"SetZSlice", PyvtkImageMapper_SetZSlice, METH_VARARGS,
   "V.SetZSlice(int)\nC++: virtual void SetZSlice(int _arg)\n\nSet/Get the current slice number. The axis Z in ZSlice does not\nnecessarily have any relation to the z axis of the data on disk.\nIt is simply the axis orthogonal to the x,y, display plane.\nGetWholeZMax and Min are convenience methods for obtaining the\nnumber of slices that can be displayed. Again the number of\nslices is in reference to the display z axis, which is not\nnecessarily the z axis on disk. (due to reformatting etc)\n"},
  {"GetZSlice", PyvtkImageMapper_GetZSlice, METH_VARARGS,
   "V.GetZSlice() -> int\nC++: virtual int GetZSlice()\n\nSet/Get the current slice number. The axis Z in ZSlice does not\nnecessarily have any relation to the z axis of the data on disk.\nIt is simply the axis orthogonal to the x,y, display plane.\nGetWholeZMax and Min are convenience methods for obtaining the\nnumber of slices that can be displayed. Again the number of\nslices is in reference to the display z axis, which is not\nnecessarily the z axis on disk. (due to reformatting etc)\n"},
  {"GetWholeZMin", PyvtkImageMapper_GetWholeZMin, METH_VARARGS,
   "V.GetWholeZMin() -> int\nC++: int GetWholeZMin()\n\nSet/Get the current slice number. The axis Z in ZSlice does not\nnecessarily have any relation to the z axis of the data on disk.\nIt is simply the axis orthogonal to the x,y, display plane.\nGetWholeZMax and Min are convenience methods for obtaining the\nnumber of slices that can be displayed. Again the number of\nslices is in reference to the display z axis, which is not\nnecessarily the z axis on disk. (due to reformatting etc)\n"},
  {"GetWholeZMax", PyvtkImageMapper_GetWholeZMax, METH_VARARGS,
   "V.GetWholeZMax() -> int\nC++: int GetWholeZMax()\n\nSet/Get the current slice number. The axis Z in ZSlice does not\nnecessarily have any relation to the z axis of the data on disk.\nIt is simply the axis orthogonal to the x,y, display plane.\nGetWholeZMax and Min are convenience methods for obtaining the\nnumber of slices that can be displayed. Again the number of\nslices is in reference to the display z axis, which is not\nnecessarily the z axis on disk. (due to reformatting etc)\n"},
  {"RenderStart", PyvtkImageMapper_RenderStart, METH_VARARGS,
   "V.RenderStart(vtkViewport, vtkActor2D)\nC++: void RenderStart(vtkViewport *viewport, vtkActor2D *actor)\n\nDraw the image to the screen.\n"},
  {"RenderData", PyvtkImageMapper_RenderData, METH_VARARGS,
   "V.RenderData(vtkViewport, vtkImageData, vtkActor2D)\nC++: virtual void RenderData(vtkViewport *, vtkImageData *,\n    vtkActor2D *)\n\nFunction called by Render to actually draw the image to to the\nscreen\n"},
  {"GetColorShift", PyvtkImageMapper_GetColorShift, METH_VARARGS,
   "V.GetColorShift() -> float\nC++: double GetColorShift()\n\nMethods used internally for performing the Window/Level mapping.\n"},
  {"GetColorScale", PyvtkImageMapper_GetColorScale, METH_VARARGS,
   "V.GetColorScale() -> float\nC++: double GetColorScale()\n\nMethods used internally for performing the Window/Level mapping.\n"},
  {"SetInputData", PyvtkImageMapper_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkImageData)\nC++: virtual void SetInputData(vtkImageData *input)\n\nSet the Input of a filter.\n"},
  {"GetInput", PyvtkImageMapper_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput()\n\nSet the Input of a filter.\n"},
  {"SetRenderToRectangle", PyvtkImageMapper_SetRenderToRectangle, METH_VARARGS,
   "V.SetRenderToRectangle(int)\nC++: virtual void SetRenderToRectangle(vtkTypeBool _arg)\n\nIf RenderToRectangle is set (by default not), then the\nimagemapper will render the image into the rectangle supplied by\nthe Actor2D's PositionCoordinate and Position2Coordinate\n"},
  {"GetRenderToRectangle", PyvtkImageMapper_GetRenderToRectangle, METH_VARARGS,
   "V.GetRenderToRectangle() -> int\nC++: virtual vtkTypeBool GetRenderToRectangle()\n\nIf RenderToRectangle is set (by default not), then the\nimagemapper will render the image into the rectangle supplied by\nthe Actor2D's PositionCoordinate and Position2Coordinate\n"},
  {"RenderToRectangleOn", PyvtkImageMapper_RenderToRectangleOn, METH_VARARGS,
   "V.RenderToRectangleOn()\nC++: virtual void RenderToRectangleOn()\n\nIf RenderToRectangle is set (by default not), then the\nimagemapper will render the image into the rectangle supplied by\nthe Actor2D's PositionCoordinate and Position2Coordinate\n"},
  {"RenderToRectangleOff", PyvtkImageMapper_RenderToRectangleOff, METH_VARARGS,
   "V.RenderToRectangleOff()\nC++: virtual void RenderToRectangleOff()\n\nIf RenderToRectangle is set (by default not), then the\nimagemapper will render the image into the rectangle supplied by\nthe Actor2D's PositionCoordinate and Position2Coordinate\n"},
  {"SetUseCustomExtents", PyvtkImageMapper_SetUseCustomExtents, METH_VARARGS,
   "V.SetUseCustomExtents(int)\nC++: virtual void SetUseCustomExtents(vtkTypeBool _arg)\n\nUsually, the entire image is displayed, if UseCustomExtents is\nset (by default not), then the region supplied in the\nCustomDisplayExtents is used in preference. Note that the Custom\nextents are x,y only and the zslice is still applied\n"},
  {"GetUseCustomExtents", PyvtkImageMapper_GetUseCustomExtents, METH_VARARGS,
   "V.GetUseCustomExtents() -> int\nC++: virtual vtkTypeBool GetUseCustomExtents()\n\nUsually, the entire image is displayed, if UseCustomExtents is\nset (by default not), then the region supplied in the\nCustomDisplayExtents is used in preference. Note that the Custom\nextents are x,y only and the zslice is still applied\n"},
  {"UseCustomExtentsOn", PyvtkImageMapper_UseCustomExtentsOn, METH_VARARGS,
   "V.UseCustomExtentsOn()\nC++: virtual void UseCustomExtentsOn()\n\nUsually, the entire image is displayed, if UseCustomExtents is\nset (by default not), then the region supplied in the\nCustomDisplayExtents is used in preference. Note that the Custom\nextents are x,y only and the zslice is still applied\n"},
  {"UseCustomExtentsOff", PyvtkImageMapper_UseCustomExtentsOff, METH_VARARGS,
   "V.UseCustomExtentsOff()\nC++: virtual void UseCustomExtentsOff()\n\nUsually, the entire image is displayed, if UseCustomExtents is\nset (by default not), then the region supplied in the\nCustomDisplayExtents is used in preference. Note that the Custom\nextents are x,y only and the zslice is still applied\n"},
  {"SetCustomDisplayExtents", PyvtkImageMapper_SetCustomDisplayExtents, METH_VARARGS,
   "V.SetCustomDisplayExtents((int, int, int, int))\nC++: void SetCustomDisplayExtents(int a[4])\n\nThe image extents which should be displayed with UseCustomExtents\nNote that the Custom extents are x,y only and the zslice is still\napplied\n"},
  {"GetCustomDisplayExtents", PyvtkImageMapper_GetCustomDisplayExtents, METH_VARARGS,
   "V.GetCustomDisplayExtents() -> (int, int, int, int)\nC++: int *GetCustomDisplayExtents()\n\nThe image extents which should be displayed with UseCustomExtents\nNote that the Custom extents are x,y only and the zslice is still\napplied\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkImageMapper", // tp_name
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
  PyvtkImageMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageMapper_StaticNew()
{
  return vtkImageMapper::New();
}

PyObject *PyvtkImageMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageMapper_Type, PyvtkImageMapper_Methods,
    "vtkImageMapper",
 &PyvtkImageMapper_StaticNew);

  PyTypeObject *pytype = &PyvtkImageMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMapper2D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

