// python wrapper for vtkChartXYZ
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
#include "vtkRect.h"
#include "vtkColor.h"
#include "vtkContextMouseEvent.h"
#include "vtkContextKeyEvent.h"
#include "vtkChartXYZ.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkChartXYZ(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkChartXYZ_ClassNew(); }

#ifndef DECLARED_PyvtkContextItem_ClassNew
extern "C" { PyObject *PyvtkContextItem_ClassNew(); }
#define DECLARED_PyvtkContextItem_ClassNew
#endif

static const char *PyvtkChartXYZ_Doc =
  "vtkChartXYZ - Factory class for drawing 3D XYZ charts.\n\n"
  "Superclass: vtkContextItem\n\n"
;


static PyObject *
PyvtkChartXYZ_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkChartXYZ::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXYZ_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChartXYZ::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXYZ_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkChartXYZ *tempr = vtkChartXYZ::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXYZ_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartXYZ *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChartXYZ::NewInstance());

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
PyvtkChartXYZ_SetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  vtkRectf *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectf"))
  {
    if (ap.IsBound())
    {
      op->SetGeometry(*temp0);
    }
    else
    {
      op->vtkChartXYZ::SetGeometry(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartXYZ_SetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAngle(temp0);
    }
    else
    {
      op->vtkChartXYZ::SetAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXYZ_SetAroundX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAroundX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAroundX(temp0);
    }
    else
    {
      op->vtkChartXYZ::SetAroundX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXYZ_SetAnnotationLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  vtkAnnotationLink *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnotationLink"))
  {
    if (ap.IsBound())
    {
      op->SetAnnotationLink(temp0);
    }
    else
    {
      op->vtkChartXYZ::SetAnnotationLink(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXYZ_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAxis *tempr = (ap.IsBound() ?
      op->GetAxis(temp0) :
      op->vtkChartXYZ::GetAxis(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXYZ_SetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  int temp0;
  vtkAxis *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAxis"))
  {
    if (ap.IsBound())
    {
      op->SetAxis(temp0, temp1);
    }
    else
    {
      op->vtkChartXYZ::SetAxis(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXYZ_SetAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  vtkColor4ub *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor4ub"))
  {
    if (ap.IsBound())
    {
      op->SetAxisColor(*temp0);
    }
    else
    {
      op->vtkChartXYZ::SetAxisColor(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartXYZ_GetAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkColor4ub tempr = (ap.IsBound() ?
      op->GetAxisColor() :
      op->vtkChartXYZ::GetAxisColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor4ub");
    }
  }

  return result;
}


static PyObject *
PyvtkChartXYZ_SetAutoRotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoRotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoRotate(temp0);
    }
    else
    {
      op->vtkChartXYZ::SetAutoRotate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXYZ_SetDecorateAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDecorateAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDecorateAxes(temp0);
    }
    else
    {
      op->vtkChartXYZ::SetDecorateAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXYZ_SetFitToScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFitToScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFitToScene(temp0);
    }
    else
    {
      op->vtkChartXYZ::SetFitToScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXYZ_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkChartXYZ::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXYZ_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkChartXYZ::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXYZ_AddPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  vtkPlot3D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlot3D"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddPlot(temp0) :
      op->vtkChartXYZ::AddPlot(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXYZ_ClearPlots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearPlots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearPlots();
    }
    else
    {
      op->vtkChartXYZ::ClearPlots();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXYZ_RecalculateBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecalculateBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RecalculateBounds();
    }
    else
    {
      op->vtkChartXYZ::RecalculateBounds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXYZ_RecalculateTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecalculateTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RecalculateTransform();
    }
    else
    {
      op->vtkChartXYZ::RecalculateTransform();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXYZ_Hit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->Hit(*temp0) :
      op->vtkChartXYZ::Hit(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartXYZ_MouseButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonPressEvent(*temp0) :
      op->vtkChartXYZ::MouseButtonPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartXYZ_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseMoveEvent(*temp0) :
      op->vtkChartXYZ::MouseMoveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartXYZ_MouseWheelEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseWheelEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseWheelEvent(*temp0, temp1) :
      op->vtkChartXYZ::MouseWheelEvent(*temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartXYZ_KeyPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeyPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  vtkContextKeyEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextKeyEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->KeyPressEvent(*temp0) :
      op->vtkChartXYZ::KeyPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkChartXYZ_Methods[] = {
  {"IsTypeOf", PyvtkChartXYZ_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkChartXYZ_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkChartXYZ_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkChartXYZ\nC++: static vtkChartXYZ *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkChartXYZ_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkChartXYZ\nC++: vtkChartXYZ *NewInstance()\n\n"},
  {"SetGeometry", PyvtkChartXYZ_SetGeometry, METH_VARARGS,
   "V.SetGeometry(vtkRectf)\nC++: void SetGeometry(const vtkRectf &bounds)\n\nSet the geometry in pixel coordinates (origin and width/height).\nThis method also sets up the end points of the axes of the chart.\nFor this reason, if you call SetAroundX(), you should call\nSetGeometry() afterwards.\n"},
  {"SetAngle", PyvtkChartXYZ_SetAngle, METH_VARARGS,
   "V.SetAngle(float)\nC++: void SetAngle(double angle)\n\nSet the rotation angle for the chart (AutoRotate mode only).\n"},
  {"SetAroundX", PyvtkChartXYZ_SetAroundX, METH_VARARGS,
   "V.SetAroundX(bool)\nC++: void SetAroundX(bool isX)\n\nSet whether or not we're rotating about the X axis.\n"},
  {"SetAnnotationLink", PyvtkChartXYZ_SetAnnotationLink, METH_VARARGS,
   "V.SetAnnotationLink(vtkAnnotationLink)\nC++: virtual void SetAnnotationLink(vtkAnnotationLink *link)\n\nSet the vtkAnnotationLink for the chart.\n"},
  {"GetAxis", PyvtkChartXYZ_GetAxis, METH_VARARGS,
   "V.GetAxis(int) -> vtkAxis\nC++: vtkAxis *GetAxis(int axis)\n\nGet the x (0), y (1) or z (2) axis.\n"},
  {"SetAxis", PyvtkChartXYZ_SetAxis, METH_VARARGS,
   "V.SetAxis(int, vtkAxis)\nC++: virtual void SetAxis(int axisIndex, vtkAxis *axis)\n\nSet the x (0), y (1) or z (2) axis.\n"},
  {"SetAxisColor", PyvtkChartXYZ_SetAxisColor, METH_VARARGS,
   "V.SetAxisColor(vtkColor4ub)\nC++: void SetAxisColor(const vtkColor4ub &color)\n\nSet the color for the axes.\n"},
  {"GetAxisColor", PyvtkChartXYZ_GetAxisColor, METH_VARARGS,
   "V.GetAxisColor() -> vtkColor4ub\nC++: vtkColor4ub GetAxisColor()\n\nSet the color for the axes.\n"},
  {"SetAutoRotate", PyvtkChartXYZ_SetAutoRotate, METH_VARARGS,
   "V.SetAutoRotate(bool)\nC++: void SetAutoRotate(bool b)\n\nSet whether or not we're using this chart to rotate on a timer.\nDefault value is false.\n"},
  {"SetDecorateAxes", PyvtkChartXYZ_SetDecorateAxes, METH_VARARGS,
   "V.SetDecorateAxes(bool)\nC++: void SetDecorateAxes(bool b)\n\nSet whether or not axes labels & tick marks should be drawn.\nDefault value is true.\n"},
  {"SetFitToScene", PyvtkChartXYZ_SetFitToScene, METH_VARARGS,
   "V.SetFitToScene(bool)\nC++: void SetFitToScene(bool b)\n\nSet whether or not the chart should automatically resize itself\nto fill the scene.  Default value is true.\n"},
  {"Update", PyvtkChartXYZ_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nPerform any updates to the item that may be necessary before\nrendering.\n"},
  {"Paint", PyvtkChartXYZ_Paint, METH_VARARGS,
   "V.Paint(vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the chart, called whenever the chart needs to be\ndrawn.\n"},
  {"AddPlot", PyvtkChartXYZ_AddPlot, METH_VARARGS,
   "V.AddPlot(vtkPlot3D) -> int\nC++: virtual vtkIdType AddPlot(vtkPlot3D *plot)\n\nAdds a plot to the chart.\n"},
  {"ClearPlots", PyvtkChartXYZ_ClearPlots, METH_VARARGS,
   "V.ClearPlots()\nC++: void ClearPlots()\n\nRemove all the plots from this chart.\n"},
  {"RecalculateBounds", PyvtkChartXYZ_RecalculateBounds, METH_VARARGS,
   "V.RecalculateBounds()\nC++: void RecalculateBounds()\n\nDetermine the XYZ bounds of the plots within this chart. This\ninformation is then used to set the range of the axes.\n"},
  {"RecalculateTransform", PyvtkChartXYZ_RecalculateTransform, METH_VARARGS,
   "V.RecalculateTransform()\nC++: void RecalculateTransform()\n\nUse this chart's Geometry to set the endpoints of its axes. This\nmethod also sets up a transformation that is used to properly\nrender the data within the chart.\n"},
  {"Hit", PyvtkChartXYZ_Hit, METH_VARARGS,
   "V.Hit(vtkContextMouseEvent) -> bool\nC++: bool Hit(const vtkContextMouseEvent &mouse) override;\n\nReturns true if the transform is interactive, false otherwise.\n"},
  {"MouseButtonPressEvent", PyvtkChartXYZ_MouseButtonPressEvent, METH_VARARGS,
   "V.MouseButtonPressEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseButtonPressEvent(const vtkContextMouseEvent &mouse)\n     override;\n\nMouse press event. Keep track of zoom anchor position.\n"},
  {"MouseMoveEvent", PyvtkChartXYZ_MouseMoveEvent, METH_VARARGS,
   "V.MouseMoveEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseMoveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse move event. Perform pan or zoom as specified by the mouse\nbindings.\n"},
  {"MouseWheelEvent", PyvtkChartXYZ_MouseWheelEvent, METH_VARARGS,
   "V.MouseWheelEvent(vtkContextMouseEvent, int) -> bool\nC++: bool MouseWheelEvent(const vtkContextMouseEvent &mouse,\n    int delta) override;\n\nMouse wheel event.  Zooms in or out.\n"},
  {"KeyPressEvent", PyvtkChartXYZ_KeyPressEvent, METH_VARARGS,
   "V.KeyPressEvent(vtkContextKeyEvent) -> bool\nC++: bool KeyPressEvent(const vtkContextKeyEvent &key) override;\n\nKey press event.  This allows the user to snap the chart to one\nof three different 2D views.  \"x\" changes the view so we're\nlooking down the X axis. Similar behavior occurs for \"y\" or \"z\".\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkChartXYZ_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkChartXYZ", // tp_name
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
  PyvtkChartXYZ_Doc, // tp_doc
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

static vtkObjectBase *PyvtkChartXYZ_StaticNew()
{
  return vtkChartXYZ::New();
}

PyObject *PyvtkChartXYZ_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkChartXYZ_Type, PyvtkChartXYZ_Methods,
    "vtkChartXYZ",
 &PyvtkChartXYZ_StaticNew);

  PyTypeObject *pytype = &PyvtkChartXYZ_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkContextItem_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkChartXYZ(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkChartXYZ_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkChartXYZ", o) != 0)
  {
    Py_DECREF(o);
  }

}

