// python wrapper for vtkSelectVisiblePoints
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
#include "vtkSelectVisiblePoints.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSelectVisiblePoints(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSelectVisiblePoints_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkSelectVisiblePoints_Doc =
  "vtkSelectVisiblePoints - extract points that are visible (based on\nz-buffer calculation)\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkSelectVisiblePoints is a filter that selects points based on\n"
  "whether they are visible or not. Visibility is determined by\n"
  "accessing the z-buffer of a rendering window. (The position of each\n"
  "input point is converted into display coordinates, and then the\n"
  "z-value at that point is obtained. If within the user-specified\n"
  "tolerance, the point is considered visible.)\n\n"
  "Points that are visible (or if the ivar SelectInvisible is on,\n"
  "invisible points) are passed to the output. Associated data\n"
  "attributes are passed to the output as well.\n\n"
  "This filter also allows you to specify a rectangular window in\n"
  "display (pixel) coordinates in which the visible points must lie.\n"
  "This can be used as a sort of local \"brushing\" operation to select\n"
  "just data within a window.\n\n"
  "@warning\n"
  "You must carefully synchronize the execution of this filter. The\n"
  "filter refers to a renderer, which is modified every time a render\n"
  "occurs. Therefore, the filter is always out of date, and always\n"
  "executes. You may have to perform two rendering passes, or if you are\n"
  "using this filter in conjunction with vtkLabeledDataMapper, things\n"
  "work out because 2D rendering occurs after the 3D rendering.\n\n";


static PyObject *
PyvtkSelectVisiblePoints_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSelectVisiblePoints::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSelectVisiblePoints::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSelectVisiblePoints *tempr = vtkSelectVisiblePoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelectVisiblePoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSelectVisiblePoints::NewInstance());

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
PyvtkSelectVisiblePoints_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

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
      op->vtkSelectVisiblePoints::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkSelectVisiblePoints::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_SetSelectionWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionWindow(temp0);
    }
    else
    {
      op->vtkSelectVisiblePoints::SetSelectionWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_GetSelectionWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectionWindow() :
      op->vtkSelectVisiblePoints::GetSelectionWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_SelectionWindowOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectionWindowOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectionWindowOn();
    }
    else
    {
      op->vtkSelectVisiblePoints::SelectionWindowOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_SelectionWindowOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectionWindowOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectionWindowOff();
    }
    else
    {
      op->vtkSelectVisiblePoints::SelectionWindowOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_SetSelection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

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
    if (ap.IsBound())
    {
      op->SetSelection(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSelectVisiblePoints::SetSelection(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectVisiblePoints_SetSelection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  const size_t size0 = 4;
  int temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSelection(temp0);
    }
    else
    {
      op->vtkSelectVisiblePoints::SetSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectVisiblePoints_SetSelection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkSelectVisiblePoints_SetSelection_s1(self, args);
    case 1:
      return PyvtkSelectVisiblePoints_SetSelection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSelection");
  return nullptr;
}



static PyObject *
PyvtkSelectVisiblePoints_GetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSelection() :
      op->vtkSelectVisiblePoints::GetSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_SetSelectInvisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectInvisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectInvisible(temp0);
    }
    else
    {
      op->vtkSelectVisiblePoints::SetSelectInvisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_GetSelectInvisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectInvisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectInvisible() :
      op->vtkSelectVisiblePoints::GetSelectInvisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_SelectInvisibleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectInvisibleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectInvisibleOn();
    }
    else
    {
      op->vtkSelectVisiblePoints::SelectInvisibleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_SelectInvisibleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectInvisibleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectInvisibleOff();
    }
    else
    {
      op->vtkSelectVisiblePoints::SelectInvisibleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkSelectVisiblePoints::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkSelectVisiblePoints::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkSelectVisiblePoints::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkSelectVisiblePoints::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float *tempr = (ap.IsBound() ?
      op->Initialize(temp0) :
      op->vtkSelectVisiblePoints::Initialize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_IsPointOccluded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPointOccluded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(size1);
  float *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    bool tempr = (ap.IsBound() ?
      op->IsPointOccluded(temp0, temp1) :
      op->vtkSelectVisiblePoints::IsPointOccluded(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSelectVisiblePoints::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSelectVisiblePoints_Methods[] = {
  {"IsTypeOf", PyvtkSelectVisiblePoints_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSelectVisiblePoints_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSelectVisiblePoints_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSelectVisiblePoints\nC++: static vtkSelectVisiblePoints *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSelectVisiblePoints_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSelectVisiblePoints\nC++: vtkSelectVisiblePoints *NewInstance()\n\n"},
  {"SetRenderer", PyvtkSelectVisiblePoints_SetRenderer, METH_VARARGS,
   "V.SetRenderer(vtkRenderer)\nC++: void SetRenderer(vtkRenderer *ren)\n\nSpecify the renderer in which the visibility computation is to be\nperformed.\n"},
  {"GetRenderer", PyvtkSelectVisiblePoints_GetRenderer, METH_VARARGS,
   "V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\nSpecify the renderer in which the visibility computation is to be\nperformed.\n"},
  {"SetSelectionWindow", PyvtkSelectVisiblePoints_SetSelectionWindow, METH_VARARGS,
   "V.SetSelectionWindow(int)\nC++: virtual void SetSelectionWindow(vtkTypeBool _arg)\n\nSet/Get the flag which enables selection in a rectangular display\nregion.\n"},
  {"GetSelectionWindow", PyvtkSelectVisiblePoints_GetSelectionWindow, METH_VARARGS,
   "V.GetSelectionWindow() -> int\nC++: virtual vtkTypeBool GetSelectionWindow()\n\nSet/Get the flag which enables selection in a rectangular display\nregion.\n"},
  {"SelectionWindowOn", PyvtkSelectVisiblePoints_SelectionWindowOn, METH_VARARGS,
   "V.SelectionWindowOn()\nC++: virtual void SelectionWindowOn()\n\nSet/Get the flag which enables selection in a rectangular display\nregion.\n"},
  {"SelectionWindowOff", PyvtkSelectVisiblePoints_SelectionWindowOff, METH_VARARGS,
   "V.SelectionWindowOff()\nC++: virtual void SelectionWindowOff()\n\nSet/Get the flag which enables selection in a rectangular display\nregion.\n"},
  {"SetSelection", PyvtkSelectVisiblePoints_SetSelection, METH_VARARGS,
   "V.SetSelection(int, int, int, int)\nC++: void SetSelection(int, int, int, int)\nV.SetSelection((int, int, int, int))\nC++: void SetSelection(int a[4])\n\n"},
  {"GetSelection", PyvtkSelectVisiblePoints_GetSelection, METH_VARARGS,
   "V.GetSelection() -> (int, int, int, int)\nC++: int *GetSelection()\n\nSpecify the selection window in display coordinates. You must\nspecify a rectangular region using (xmin,xmax,ymin,ymax).\n"},
  {"SetSelectInvisible", PyvtkSelectVisiblePoints_SetSelectInvisible, METH_VARARGS,
   "V.SetSelectInvisible(int)\nC++: virtual void SetSelectInvisible(vtkTypeBool _arg)\n\nSet/Get the flag which enables inverse selection; i.e., invisible\npoints are selected.\n"},
  {"GetSelectInvisible", PyvtkSelectVisiblePoints_GetSelectInvisible, METH_VARARGS,
   "V.GetSelectInvisible() -> int\nC++: virtual vtkTypeBool GetSelectInvisible()\n\nSet/Get the flag which enables inverse selection; i.e., invisible\npoints are selected.\n"},
  {"SelectInvisibleOn", PyvtkSelectVisiblePoints_SelectInvisibleOn, METH_VARARGS,
   "V.SelectInvisibleOn()\nC++: virtual void SelectInvisibleOn()\n\nSet/Get the flag which enables inverse selection; i.e., invisible\npoints are selected.\n"},
  {"SelectInvisibleOff", PyvtkSelectVisiblePoints_SelectInvisibleOff, METH_VARARGS,
   "V.SelectInvisibleOff()\nC++: virtual void SelectInvisibleOff()\n\nSet/Get the flag which enables inverse selection; i.e., invisible\npoints are selected.\n"},
  {"SetTolerance", PyvtkSelectVisiblePoints_SetTolerance, METH_VARARGS,
   "V.SetTolerance(float)\nC++: virtual void SetTolerance(double _arg)\n\nSet/Get a tolerance to use to determine whether a point is\nvisible. A tolerance is usually required because the conversion\nfrom world space to display space during rendering introduces\nnumerical round-off.\n"},
  {"GetToleranceMinValue", PyvtkSelectVisiblePoints_GetToleranceMinValue, METH_VARARGS,
   "V.GetToleranceMinValue() -> float\nC++: virtual double GetToleranceMinValue()\n\nSet/Get a tolerance to use to determine whether a point is\nvisible. A tolerance is usually required because the conversion\nfrom world space to display space during rendering introduces\nnumerical round-off.\n"},
  {"GetToleranceMaxValue", PyvtkSelectVisiblePoints_GetToleranceMaxValue, METH_VARARGS,
   "V.GetToleranceMaxValue() -> float\nC++: virtual double GetToleranceMaxValue()\n\nSet/Get a tolerance to use to determine whether a point is\nvisible. A tolerance is usually required because the conversion\nfrom world space to display space during rendering introduces\nnumerical round-off.\n"},
  {"GetTolerance", PyvtkSelectVisiblePoints_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> float\nC++: virtual double GetTolerance()\n\nSet/Get a tolerance to use to determine whether a point is\nvisible. A tolerance is usually required because the conversion\nfrom world space to display space during rendering introduces\nnumerical round-off.\n"},
  {"Initialize", PyvtkSelectVisiblePoints_Initialize, METH_VARARGS,
   "V.Initialize(bool) -> (float, ...)\nC++: float *Initialize(bool getZbuff)\n\nRequires the renderer to be set. Populates the composite\nperspective transform and returns a pointer to the Z-buffer (that\nmust be deleted) if getZbuff is set.\n"},
  {"IsPointOccluded", PyvtkSelectVisiblePoints_IsPointOccluded, METH_VARARGS,
   "V.IsPointOccluded((float, float, float), (float, ...)) -> bool\nC++: bool IsPointOccluded(const double x[3], const float *zPtr)\n\nTests if a point x is being occluded or not against the Z-Buffer\narray passed in by zPtr. Call Initialize before calling this\nmethod.\n"},
  {"GetMTime", PyvtkSelectVisiblePoints_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn MTime also considering the renderer.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSelectVisiblePoints_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkSelectVisiblePoints", // tp_name
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
  PyvtkSelectVisiblePoints_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSelectVisiblePoints_StaticNew()
{
  return vtkSelectVisiblePoints::New();
}

PyObject *PyvtkSelectVisiblePoints_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSelectVisiblePoints_Type, PyvtkSelectVisiblePoints_Methods,
    "vtkSelectVisiblePoints",
 &PyvtkSelectVisiblePoints_StaticNew);

  PyTypeObject *pytype = &PyvtkSelectVisiblePoints_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSelectVisiblePoints(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSelectVisiblePoints_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSelectVisiblePoints", o) != 0)
  {
    Py_DECREF(o);
  }

}

