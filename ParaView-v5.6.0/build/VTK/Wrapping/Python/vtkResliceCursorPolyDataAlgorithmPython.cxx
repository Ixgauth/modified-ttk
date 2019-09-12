// python wrapper for vtkResliceCursorPolyDataAlgorithm
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
#include "vtkResliceCursorPolyDataAlgorithm.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkResliceCursorPolyDataAlgorithm(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkResliceCursorPolyDataAlgorithm_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkResliceCursorPolyDataAlgorithm_Doc =
  "vtkResliceCursorPolyDataAlgorithm - generates a 2D reslice cursor\npolydata\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkResliceCursorPolyDataAlgorithm is a class that generates a 2D\n"
  "reslice cursor vtkPolyData, suitable for rendering within a\n"
  "vtkResliceCursorActor. The class takes as input the reslice plane\n"
  "normal index (an index into the normal plane maintained by the\n"
  "reslice cursor object) and generates the polydata represeting the\n"
  "other two reslice axes suitable for rendering on a slice through this\n"
  "plane. The cursor consists of two intersection axes lines that meet\n"
  "at the cursor focus. These lines may have a user defined thickness.\n"
  "They need not be orthogonal to each other.\n"
  "@sa\n"
  "vtkResliceCursorActor vtkResliceCursor vtkResliceCursorWidget\n\n";


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkResliceCursorPolyDataAlgorithm::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResliceCursorPolyDataAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkResliceCursorPolyDataAlgorithm *tempr = vtkResliceCursorPolyDataAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResliceCursorPolyDataAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResliceCursorPolyDataAlgorithm::NewInstance());

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
PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReslicePlaneNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReslicePlaneNormal(temp0);
    }
    else
    {
      op->vtkResliceCursorPolyDataAlgorithm::SetReslicePlaneNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetReslicePlaneNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReslicePlaneNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReslicePlaneNormal() :
      op->vtkResliceCursorPolyDataAlgorithm::GetReslicePlaneNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormalToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReslicePlaneNormalToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetReslicePlaneNormalToXAxis();
    }
    else
    {
      op->vtkResliceCursorPolyDataAlgorithm::SetReslicePlaneNormalToXAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormalToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReslicePlaneNormalToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetReslicePlaneNormalToYAxis();
    }
    else
    {
      op->vtkResliceCursorPolyDataAlgorithm::SetReslicePlaneNormalToYAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormalToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReslicePlaneNormalToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetReslicePlaneNormalToZAxis();
    }
    else
    {
      op->vtkResliceCursorPolyDataAlgorithm::SetReslicePlaneNormalToZAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SetResliceCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  vtkResliceCursor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkResliceCursor"))
  {
    if (ap.IsBound())
    {
      op->SetResliceCursor(temp0);
    }
    else
    {
      op->vtkResliceCursorPolyDataAlgorithm::SetResliceCursor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetResliceCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResliceCursor *tempr = (ap.IsBound() ?
      op->GetResliceCursor() :
      op->vtkResliceCursorPolyDataAlgorithm::GetResliceCursor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SetSliceBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetSliceBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkResliceCursorPolyDataAlgorithm::SetSliceBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SetSliceBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSliceBounds(temp0);
    }
    else
    {
      op->vtkResliceCursorPolyDataAlgorithm::SetSliceBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SetSliceBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkResliceCursorPolyDataAlgorithm_SetSliceBounds_s1(self, args);
    case 1:
      return PyvtkResliceCursorPolyDataAlgorithm_SetSliceBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSliceBounds");
  return nullptr;
}



static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetSliceBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSliceBounds() :
      op->vtkResliceCursorPolyDataAlgorithm::GetSliceBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetCenterlineAxis1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterlineAxis1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetCenterlineAxis1() :
      op->vtkResliceCursorPolyDataAlgorithm::GetCenterlineAxis1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetCenterlineAxis2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterlineAxis2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetCenterlineAxis2() :
      op->vtkResliceCursorPolyDataAlgorithm::GetCenterlineAxis2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetThickSlabAxis1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickSlabAxis1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetThickSlabAxis1() :
      op->vtkResliceCursorPolyDataAlgorithm::GetThickSlabAxis1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetThickSlabAxis2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickSlabAxis2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetThickSlabAxis2() :
      op->vtkResliceCursorPolyDataAlgorithm::GetThickSlabAxis2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetAxis1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxis1() :
      op->vtkResliceCursorPolyDataAlgorithm::GetAxis1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetAxis2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxis2() :
      op->vtkResliceCursorPolyDataAlgorithm::GetAxis2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetPlaneAxis1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneAxis1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneAxis1() :
      op->vtkResliceCursorPolyDataAlgorithm::GetPlaneAxis1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetPlaneAxis2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneAxis2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneAxis2() :
      op->vtkResliceCursorPolyDataAlgorithm::GetPlaneAxis2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetOtherPlaneForAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOtherPlaneForAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOtherPlaneForAxis(temp0) :
      op->vtkResliceCursorPolyDataAlgorithm::GetOtherPlaneForAxis(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkResliceCursorPolyDataAlgorithm::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkResliceCursorPolyDataAlgorithm_Methods[] = {
  {"IsTypeOf", PyvtkResliceCursorPolyDataAlgorithm_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkResliceCursorPolyDataAlgorithm_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkResliceCursorPolyDataAlgorithm_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkResliceCursorPolyDataAlgorithm\nC++: static vtkResliceCursorPolyDataAlgorithm *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkResliceCursorPolyDataAlgorithm_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkResliceCursorPolyDataAlgorithm\nC++: vtkResliceCursorPolyDataAlgorithm *NewInstance()\n\n"},
  {"SetReslicePlaneNormal", PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormal, METH_VARARGS,
   "V.SetReslicePlaneNormal(int)\nC++: virtual void SetReslicePlaneNormal(int _arg)\n\nWhich of the 3 axes defines the reslice plane normal ?\n"},
  {"GetReslicePlaneNormal", PyvtkResliceCursorPolyDataAlgorithm_GetReslicePlaneNormal, METH_VARARGS,
   "V.GetReslicePlaneNormal() -> int\nC++: virtual int GetReslicePlaneNormal()\n\nWhich of the 3 axes defines the reslice plane normal ?\n"},
  {"SetReslicePlaneNormalToXAxis", PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormalToXAxis, METH_VARARGS,
   "V.SetReslicePlaneNormalToXAxis()\nC++: void SetReslicePlaneNormalToXAxis()\n\nSet the planes that correspond to the reslice axes.\n"},
  {"SetReslicePlaneNormalToYAxis", PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormalToYAxis, METH_VARARGS,
   "V.SetReslicePlaneNormalToYAxis()\nC++: void SetReslicePlaneNormalToYAxis()\n\n"},
  {"SetReslicePlaneNormalToZAxis", PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormalToZAxis, METH_VARARGS,
   "V.SetReslicePlaneNormalToZAxis()\nC++: void SetReslicePlaneNormalToZAxis()\n\n"},
  {"SetResliceCursor", PyvtkResliceCursorPolyDataAlgorithm_SetResliceCursor, METH_VARARGS,
   "V.SetResliceCursor(vtkResliceCursor)\nC++: virtual void SetResliceCursor(vtkResliceCursor *)\n\nSet the Reslice cursor from which to generate the polydata\nrepresentation\n"},
  {"GetResliceCursor", PyvtkResliceCursorPolyDataAlgorithm_GetResliceCursor, METH_VARARGS,
   "V.GetResliceCursor() -> vtkResliceCursor\nC++: virtual vtkResliceCursor *GetResliceCursor()\n\nSet the Reslice cursor from which to generate the polydata\nrepresentation\n"},
  {"SetSliceBounds", PyvtkResliceCursorPolyDataAlgorithm_SetSliceBounds, METH_VARARGS,
   "V.SetSliceBounds(float, float, float, float, float, float)\nC++: void SetSliceBounds(double, double, double, double, double,\n    double)\nV.SetSliceBounds((float, float, float, float, float, float))\nC++: void SetSliceBounds(double a[6])\n\n"},
  {"GetSliceBounds", PyvtkResliceCursorPolyDataAlgorithm_GetSliceBounds, METH_VARARGS,
   "V.GetSliceBounds() -> (float, float, float, float, float, float)\nC++: double *GetSliceBounds()\n\n"},
  {"GetCenterlineAxis1", PyvtkResliceCursorPolyDataAlgorithm_GetCenterlineAxis1, METH_VARARGS,
   "V.GetCenterlineAxis1() -> vtkPolyData\nC++: virtual vtkPolyData *GetCenterlineAxis1()\n\nGet either one of the axes that this object produces. Depending\non the mode, one renders either the centerline axes or both the\ncenterline axes and the slab\n"},
  {"GetCenterlineAxis2", PyvtkResliceCursorPolyDataAlgorithm_GetCenterlineAxis2, METH_VARARGS,
   "V.GetCenterlineAxis2() -> vtkPolyData\nC++: virtual vtkPolyData *GetCenterlineAxis2()\n\nGet either one of the axes that this object produces. Depending\non the mode, one renders either the centerline axes or both the\ncenterline axes and the slab\n"},
  {"GetThickSlabAxis1", PyvtkResliceCursorPolyDataAlgorithm_GetThickSlabAxis1, METH_VARARGS,
   "V.GetThickSlabAxis1() -> vtkPolyData\nC++: virtual vtkPolyData *GetThickSlabAxis1()\n\nGet either one of the axes that this object produces. Depending\non the mode, one renders either the centerline axes or both the\ncenterline axes and the slab\n"},
  {"GetThickSlabAxis2", PyvtkResliceCursorPolyDataAlgorithm_GetThickSlabAxis2, METH_VARARGS,
   "V.GetThickSlabAxis2() -> vtkPolyData\nC++: virtual vtkPolyData *GetThickSlabAxis2()\n\nGet either one of the axes that this object produces. Depending\non the mode, one renders either the centerline axes or both the\ncenterline axes and the slab\n"},
  {"GetAxis1", PyvtkResliceCursorPolyDataAlgorithm_GetAxis1, METH_VARARGS,
   "V.GetAxis1() -> int\nC++: virtual int GetAxis1()\n\nGet the index of the axes and the planes that they represent\n"},
  {"GetAxis2", PyvtkResliceCursorPolyDataAlgorithm_GetAxis2, METH_VARARGS,
   "V.GetAxis2() -> int\nC++: virtual int GetAxis2()\n\nGet the index of the axes and the planes that they represent\n"},
  {"GetPlaneAxis1", PyvtkResliceCursorPolyDataAlgorithm_GetPlaneAxis1, METH_VARARGS,
   "V.GetPlaneAxis1() -> int\nC++: virtual int GetPlaneAxis1()\n\nGet the index of the axes and the planes that they represent\n"},
  {"GetPlaneAxis2", PyvtkResliceCursorPolyDataAlgorithm_GetPlaneAxis2, METH_VARARGS,
   "V.GetPlaneAxis2() -> int\nC++: virtual int GetPlaneAxis2()\n\nGet the index of the axes and the planes that they represent\n"},
  {"GetOtherPlaneForAxis", PyvtkResliceCursorPolyDataAlgorithm_GetOtherPlaneForAxis, METH_VARARGS,
   "V.GetOtherPlaneForAxis(int) -> int\nC++: int GetOtherPlaneForAxis(int p)\n\nConvenience method that, given one plane, returns the other plane\nthat this class represents.\n"},
  {"GetMTime", PyvtkResliceCursorPolyDataAlgorithm_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the MTime. Check the MTime of the internal ResliceCursor as\nwell, if one has been set\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkResliceCursorPolyDataAlgorithm_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkResliceCursorPolyDataAlgorithm", // tp_name
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
  PyvtkResliceCursorPolyDataAlgorithm_Doc, // tp_doc
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

static vtkObjectBase *PyvtkResliceCursorPolyDataAlgorithm_StaticNew()
{
  return vtkResliceCursorPolyDataAlgorithm::New();
}

PyObject *PyvtkResliceCursorPolyDataAlgorithm_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkResliceCursorPolyDataAlgorithm_Type, PyvtkResliceCursorPolyDataAlgorithm_Methods,
    "vtkResliceCursorPolyDataAlgorithm",
 &PyvtkResliceCursorPolyDataAlgorithm_StaticNew);

  PyTypeObject *pytype = &PyvtkResliceCursorPolyDataAlgorithm_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "XAxis", vtkResliceCursorPolyDataAlgorithm::XAxis },
        { "YAxis", vtkResliceCursorPolyDataAlgorithm::YAxis },
        { "ZAxis", vtkResliceCursorPolyDataAlgorithm::ZAxis },
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

void PyVTKAddFile_vtkResliceCursorPolyDataAlgorithm(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkResliceCursorPolyDataAlgorithm_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkResliceCursorPolyDataAlgorithm", o) != 0)
  {
    Py_DECREF(o);
  }

}

