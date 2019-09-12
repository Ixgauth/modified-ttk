// python wrapper for vtkColorLegend
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
#include "vtkStdString.h"
#include "vtkContextMouseEvent.h"
#include "vtkColorLegend.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkColorLegend(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkColorLegend_ClassNew(); }

#ifndef DECLARED_PyvtkChartLegend_ClassNew
extern "C" { PyObject *PyvtkChartLegend_ClassNew(); }
#define DECLARED_PyvtkChartLegend_ClassNew
#endif

static const char *PyvtkColorLegend_Doc =
  "vtkColorLegend - Legend item to display vtkScalarsToColors.\n\n"
  "Superclass: vtkChartLegend\n\n"
  "vtkColorLegend is an item that will display the vtkScalarsToColors\n"
  "using a 1D texture, and a vtkAxis to show both the color and\n"
  "numerical range.\n\n";


static PyObject *
PyvtkColorLegend_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkColorLegend::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorLegend_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkColorLegend::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorLegend_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkColorLegend *tempr = vtkColorLegend::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorLegend_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkColorLegend *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkColorLegend::NewInstance());

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
PyvtkColorLegend_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkColorLegend::GetBounds(temp0);
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
PyvtkColorLegend_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkColorLegend::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorLegend_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkColorLegend::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorLegend_SetTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetTransferFunction(temp0);
    }
    else
    {
      op->vtkColorLegend::SetTransferFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorLegend_GetTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetTransferFunction() :
      op->vtkColorLegend::GetTransferFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorLegend_SetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPoint(temp0, temp1);
    }
    else
    {
      op->vtkColorLegend::SetPoint(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorLegend_SetTextureSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTextureSize(temp0, temp1);
    }
    else
    {
      op->vtkColorLegend::SetTextureSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorLegend_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  vtkRectf *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectf"))
  {
    if (ap.IsBound())
    {
      op->SetPosition(*temp0);
    }
    else
    {
      op->vtkColorLegend::SetPosition(*temp0);
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
PyvtkColorLegend_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectf tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkColorLegend::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
    }
  }

  return result;
}


static PyObject *
PyvtkColorLegend_GetBoundingRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    vtkRectf tempr = (ap.IsBound() ?
      op->GetBoundingRect(temp0) :
      op->vtkColorLegend::GetBoundingRect(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
    }
  }

  return result;
}


static PyObject *
PyvtkColorLegend_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientation(temp0);
    }
    else
    {
      op->vtkColorLegend::SetOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorLegend_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkColorLegend::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorLegend_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitle(temp0);
    }
    else
    {
      op->vtkColorLegend::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorLegend_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkColorLegend::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorLegend_SetDrawBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawBorder(temp0);
    }
    else
    {
      op->vtkColorLegend::SetDrawBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorLegend_GetDrawBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawBorder() :
      op->vtkColorLegend::GetDrawBorder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorLegend_DrawBorderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBorderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawBorderOn();
    }
    else
    {
      op->vtkColorLegend::DrawBorderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorLegend_DrawBorderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBorderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawBorderOff();
    }
    else
    {
      op->vtkColorLegend::DrawBorderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorLegend_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseMoveEvent(*temp0) :
      op->vtkColorLegend::MouseMoveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColorLegend_Methods[] = {
  {"IsTypeOf", PyvtkColorLegend_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkColorLegend_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkColorLegend_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkColorLegend\nC++: static vtkColorLegend *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkColorLegend_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkColorLegend\nC++: vtkColorLegend *NewInstance()\n\n"},
  {"GetBounds", PyvtkColorLegend_GetBounds, METH_VARARGS,
   "V.GetBounds([float, float, float, float])\nC++: virtual void GetBounds(double bounds[4])\n\nBounds of the item, by default (0, 1, 0, 1) but it mainly depends\non the range of the vtkScalarsToColors function.\n"},
  {"Update", PyvtkColorLegend_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {"Paint", PyvtkColorLegend_Paint, METH_VARARGS,
   "V.Paint(vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint the texture into a rectangle defined by the bounds. If\nMaskAboveCurve is true and a shape has been provided by a\nsubclass, it draws the texture into the shape\n"},
  {"SetTransferFunction", PyvtkColorLegend_SetTransferFunction, METH_VARARGS,
   "V.SetTransferFunction(vtkScalarsToColors)\nC++: virtual void SetTransferFunction(\n    vtkScalarsToColors *transfer)\n\nSet/Get the transfer function that is used to draw the scalar bar\nwithin this legend.\n"},
  {"GetTransferFunction", PyvtkColorLegend_GetTransferFunction, METH_VARARGS,
   "V.GetTransferFunction() -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetTransferFunction()\n\nSet/Get the transfer function that is used to draw the scalar bar\nwithin this legend.\n"},
  {"SetPoint", PyvtkColorLegend_SetPoint, METH_VARARGS,
   "V.SetPoint(float, float)\nC++: void SetPoint(float x, float y) override;\n\nSet the point this legend is anchored to.\n"},
  {"SetTextureSize", PyvtkColorLegend_SetTextureSize, METH_VARARGS,
   "V.SetTextureSize(float, float)\nC++: virtual void SetTextureSize(float w, float h)\n\nSet the size of the scalar bar drawn by this legend.\n"},
  {"SetPosition", PyvtkColorLegend_SetPosition, METH_VARARGS,
   "V.SetPosition(vtkRectf)\nC++: virtual void SetPosition(const vtkRectf &pos)\n\nSet the origin, width, and height of the scalar bar drawn by this\nlegend. This method overrides the anchor point, as well as any\nhorizontal and vertical alignment that has been set for this\nlegend.  If this is a problem for you, use SetPoint() and\nSetTextureSize() instead.\n"},
  {"GetPosition", PyvtkColorLegend_GetPosition, METH_VARARGS,
   "V.GetPosition() -> vtkRectf\nC++: virtual vtkRectf GetPosition()\n\nReturns the origin, width, and height of the scalar bar drawn by\nthis legend.\n"},
  {"GetBoundingRect", PyvtkColorLegend_GetBoundingRect, METH_VARARGS,
   "V.GetBoundingRect(vtkContext2D) -> vtkRectf\nC++: vtkRectf GetBoundingRect(vtkContext2D *painter) override;\n\nRequest the space the legend requires to be drawn. This is\nreturned as a vtkRect4f, with the corner being the offset from\nPoint, and the width/ height being the total width/height\nrequired by the axis. In order to ensure the numbers are correct,\nUpdate() should be called first.\n"},
  {"SetOrientation", PyvtkColorLegend_SetOrientation, METH_VARARGS,
   "V.SetOrientation(int)\nC++: virtual void SetOrientation(int orientation)\n\nSet/get the orientation of the legend. Valid orientations are\nVERTICAL (default) and HORIZONTAL.\n"},
  {"GetOrientation", PyvtkColorLegend_GetOrientation, METH_VARARGS,
   "V.GetOrientation() -> int\nC++: virtual int GetOrientation()\n\nSet/get the orientation of the legend. Valid orientations are\nVERTICAL (default) and HORIZONTAL.\n"},
  {"SetTitle", PyvtkColorLegend_SetTitle, METH_VARARGS,
   "V.SetTitle(string)\nC++: virtual void SetTitle(const vtkStdString &title)\n\nGet/set the title text of the legend.\n"},
  {"GetTitle", PyvtkColorLegend_GetTitle, METH_VARARGS,
   "V.GetTitle() -> string\nC++: virtual vtkStdString GetTitle()\n\nGet/set the title text of the legend.\n"},
  {"SetDrawBorder", PyvtkColorLegend_SetDrawBorder, METH_VARARGS,
   "V.SetDrawBorder(bool)\nC++: virtual void SetDrawBorder(bool _arg)\n\nToggle whether or not a border should be drawn around this\nlegend. The default behavior is to not draw a border.\n"},
  {"GetDrawBorder", PyvtkColorLegend_GetDrawBorder, METH_VARARGS,
   "V.GetDrawBorder() -> bool\nC++: virtual bool GetDrawBorder()\n\nToggle whether or not a border should be drawn around this\nlegend. The default behavior is to not draw a border.\n"},
  {"DrawBorderOn", PyvtkColorLegend_DrawBorderOn, METH_VARARGS,
   "V.DrawBorderOn()\nC++: virtual void DrawBorderOn()\n\nToggle whether or not a border should be drawn around this\nlegend. The default behavior is to not draw a border.\n"},
  {"DrawBorderOff", PyvtkColorLegend_DrawBorderOff, METH_VARARGS,
   "V.DrawBorderOff()\nC++: virtual void DrawBorderOff()\n\nToggle whether or not a border should be drawn around this\nlegend. The default behavior is to not draw a border.\n"},
  {"MouseMoveEvent", PyvtkColorLegend_MouseMoveEvent, METH_VARARGS,
   "V.MouseMoveEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseMoveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse move event.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkColorLegend_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkColorLegend", // tp_name
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
  PyvtkColorLegend_Doc, // tp_doc
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

static vtkObjectBase *PyvtkColorLegend_StaticNew()
{
  return vtkColorLegend::New();
}

PyObject *PyvtkColorLegend_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkColorLegend_Type, PyvtkColorLegend_Methods,
    "vtkColorLegend",
 &PyvtkColorLegend_StaticNew);

  PyTypeObject *pytype = &PyvtkColorLegend_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkChartLegend_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VERTICAL", vtkColorLegend::VERTICAL },
        { "HORIZONTAL", vtkColorLegend::HORIZONTAL },
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

void PyVTKAddFile_vtkColorLegend(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkColorLegend_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkColorLegend", o) != 0)
  {
    Py_DECREF(o);
  }

}

