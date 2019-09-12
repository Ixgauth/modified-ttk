// python wrapper for vtkChartMatrix
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
#include "vtkVector.h"
#include "vtkVector.h"
#include "vtkChartMatrix.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkChartMatrix(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkChartMatrix_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractContextItem_ClassNew
extern "C" { PyObject *PyvtkAbstractContextItem_ClassNew(); }
#define DECLARED_PyvtkAbstractContextItem_ClassNew
#endif

static const char *PyvtkChartMatrix_Doc =
  "vtkChartMatrix - container for a matrix of charts.\n\n"
  "Superclass: vtkAbstractContextItem\n\n"
  "This class contains a matrix of charts. These charts will be of type\n"
  "vtkChartXY by default, but this can be overridden. The class will\n"
  "manage their layout and object lifetime.\n\n";


static PyObject *
PyvtkChartMatrix_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkChartMatrix::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChartMatrix::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkChartMatrix *tempr = vtkChartMatrix::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartMatrix *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChartMatrix::NewInstance());

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
PyvtkChartMatrix_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkChartMatrix::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkChartMatrix::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
  {
    if (ap.IsBound())
    {
      op->SetSize(*temp0);
    }
    else
    {
      op->vtkChartMatrix::SetSize(*temp0);
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
PyvtkChartMatrix_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2i tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkChartMatrix::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetBorders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

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
      op->SetBorders(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkChartMatrix::SetBorders(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetBorderLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorderLeft(temp0);
    }
    else
    {
      op->vtkChartMatrix::SetBorderLeft(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetBorderBottom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderBottom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorderBottom(temp0);
    }
    else
    {
      op->vtkChartMatrix::SetBorderBottom(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetBorderRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorderRight(temp0);
    }
    else
    {
      op->vtkChartMatrix::SetBorderRight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetBorderTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorderTop(temp0);
    }
    else
    {
      op->vtkChartMatrix::SetBorderTop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_GetBorders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  const size_t size0 = 4;
  int temp0[4];
  int save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBorders(temp0);
    }
    else
    {
      op->vtkChartMatrix::GetBorders(temp0);
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
PyvtkChartMatrix_SetGutter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGutter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    if (ap.IsBound())
    {
      op->SetGutter(*temp0);
    }
    else
    {
      op->vtkChartMatrix::SetGutter(*temp0);
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
PyvtkChartMatrix_SetGutterX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGutterX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGutterX(temp0);
    }
    else
    {
      op->vtkChartMatrix::SetGutterX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetGutterY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGutterY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGutterY(temp0);
    }
    else
    {
      op->vtkChartMatrix::SetGutterY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetSpecificResize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecificResize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVector2f *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector2f"))
  {
    if (ap.IsBound())
    {
      op->SetSpecificResize(*temp0, *temp1);
    }
    else
    {
      op->vtkChartMatrix::SetSpecificResize(*temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkChartMatrix_ClearSpecificResizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearSpecificResizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearSpecificResizes();
    }
    else
    {
      op->vtkChartMatrix::ClearSpecificResizes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_GetGutter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGutter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2f tempr = (ap.IsBound() ?
      op->GetGutter() :
      op->vtkChartMatrix::GetGutter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Allocate();
    }
    else
    {
      op->vtkChartMatrix::Allocate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkChart *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i") &&
      ap.GetVTKObject(temp1, "vtkChart"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetChart(*temp0, temp1) :
      op->vtkChartMatrix::SetChart(*temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartMatrix_GetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
  {
    vtkChart *tempr = (ap.IsBound() ?
      op->GetChart(*temp0) :
      op->vtkChartMatrix::GetChart(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartMatrix_SetChartSpan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartSpan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVector2i *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector2i"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetChartSpan(*temp0, *temp1) :
      op->vtkChartMatrix::SetChartSpan(*temp0, *temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkChartMatrix_GetChartSpan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChartSpan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
  {
    vtkVector2i tempr = (ap.IsBound() ?
      op->GetChartSpan(*temp0) :
      op->vtkChartMatrix::GetChartSpan(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartMatrix_GetChartIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChartIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    vtkVector2i tempr = (ap.IsBound() ?
      op->GetChartIndex(*temp0) :
      op->vtkChartMatrix::GetChartIndex(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkChartMatrix_Methods[] = {
  {"IsTypeOf", PyvtkChartMatrix_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkChartMatrix_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkChartMatrix_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkChartMatrix\nC++: static vtkChartMatrix *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkChartMatrix_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkChartMatrix\nC++: vtkChartMatrix *NewInstance()\n\n"},
  {"Update", PyvtkChartMatrix_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nPerform any updates to the item that may be necessary before\nrendering.\n"},
  {"Paint", PyvtkChartMatrix_Paint, METH_VARARGS,
   "V.Paint(vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the chart matrix.\n"},
  {"SetSize", PyvtkChartMatrix_SetSize, METH_VARARGS,
   "V.SetSize(vtkVector2i)\nC++: virtual void SetSize(const vtkVector2i &size)\n\nSet the width and height of the chart matrix. This will cause an\nimmediate resize of the chart matrix, the default size is 0x0 (no\ncharts). No chart objects are created until Allocate is called.\n"},
  {"GetSize", PyvtkChartMatrix_GetSize, METH_VARARGS,
   "V.GetSize() -> vtkVector2i\nC++: virtual vtkVector2i GetSize()\n\nGet the width and height of the chart matrix.\n"},
  {"SetBorders", PyvtkChartMatrix_SetBorders, METH_VARARGS,
   "V.SetBorders(int, int, int, int)\nC++: virtual void SetBorders(int left, int bottom, int right,\n    int top)\n\nSet/get the borders of the chart matrix (space in pixels around\neach chart).\n"},
  {"SetBorderLeft", PyvtkChartMatrix_SetBorderLeft, METH_VARARGS,
   "V.SetBorderLeft(int)\nC++: void SetBorderLeft(int value)\n\nSet/get the borders of the chart matrix (space in pixels around\neach chart).\n"},
  {"SetBorderBottom", PyvtkChartMatrix_SetBorderBottom, METH_VARARGS,
   "V.SetBorderBottom(int)\nC++: void SetBorderBottom(int value)\n\nSet/get the borders of the chart matrix (space in pixels around\neach chart).\n"},
  {"SetBorderRight", PyvtkChartMatrix_SetBorderRight, METH_VARARGS,
   "V.SetBorderRight(int)\nC++: void SetBorderRight(int value)\n\nSet/get the borders of the chart matrix (space in pixels around\neach chart).\n"},
  {"SetBorderTop", PyvtkChartMatrix_SetBorderTop, METH_VARARGS,
   "V.SetBorderTop(int)\nC++: void SetBorderTop(int value)\n\nSet/get the borders of the chart matrix (space in pixels around\neach chart).\n"},
  {"GetBorders", PyvtkChartMatrix_GetBorders, METH_VARARGS,
   "V.GetBorders([int, int, int, int])\nC++: virtual void GetBorders(int borders[4])\n\nSet/get the borders of the chart matrix (space in pixels around\neach chart).\n"},
  {"SetGutter", PyvtkChartMatrix_SetGutter, METH_VARARGS,
   "V.SetGutter(vtkVector2f)\nC++: virtual void SetGutter(const vtkVector2f &gutter)\n\nSet the gutter that should be left between the charts in the\nmatrix.\n"},
  {"SetGutterX", PyvtkChartMatrix_SetGutterX, METH_VARARGS,
   "V.SetGutterX(float)\nC++: void SetGutterX(float value)\n\nSet the gutter that should be left between the charts in the\nmatrix.\n"},
  {"SetGutterY", PyvtkChartMatrix_SetGutterY, METH_VARARGS,
   "V.SetGutterY(float)\nC++: void SetGutterY(float value)\n\nSet the gutter that should be left between the charts in the\nmatrix.\n"},
  {"SetSpecificResize", PyvtkChartMatrix_SetSpecificResize, METH_VARARGS,
   "V.SetSpecificResize(vtkVector2i, vtkVector2f)\nC++: virtual void SetSpecificResize(const vtkVector2i &index,\n    const vtkVector2f &resize)\n\nSet a specific resize that will move the bottom left point of a\nchart.\n"},
  {"ClearSpecificResizes", PyvtkChartMatrix_ClearSpecificResizes, METH_VARARGS,
   "V.ClearSpecificResizes()\nC++: virtual void ClearSpecificResizes()\n\nSet a specific resize that will move the bottom left point of a\nchart.\n"},
  {"GetGutter", PyvtkChartMatrix_GetGutter, METH_VARARGS,
   "V.GetGutter() -> vtkVector2f\nC++: virtual vtkVector2f GetGutter()\n\nGet the gutter that should be left between the charts in the\nmatrix.\n"},
  {"Allocate", PyvtkChartMatrix_Allocate, METH_VARARGS,
   "V.Allocate()\nC++: virtual void Allocate()\n\nAllocate the charts, this will cause any null chart to be\nallocated.\n"},
  {"SetChart", PyvtkChartMatrix_SetChart, METH_VARARGS,
   "V.SetChart(vtkVector2i, vtkChart) -> bool\nC++: virtual bool SetChart(const vtkVector2i &position,\n    vtkChart *chart)\n\nSet the chart element, note that the chart matrix must be large\nenough to accommodate the element being set. Note that this class\nwill take ownership of the chart object.\n\\return false if the element cannot be set.\n"},
  {"GetChart", PyvtkChartMatrix_GetChart, METH_VARARGS,
   "V.GetChart(vtkVector2i) -> vtkChart\nC++: virtual vtkChart *GetChart(const vtkVector2i &position)\n\nGet the specified chart element, if the element does not exist\nnullptr will be returned. If the chart element has not yet been\nallocated it will be at this point.\n"},
  {"SetChartSpan", PyvtkChartMatrix_SetChartSpan, METH_VARARGS,
   "V.SetChartSpan(vtkVector2i, vtkVector2i) -> bool\nC++: virtual bool SetChartSpan(const vtkVector2i &position,\n    const vtkVector2i &span)\n\nSet the span of a chart in the matrix. This defaults to 1x1, and\ncannot exceed the remaining space in x or y.\n\\return false If the span is not possible.\n"},
  {"GetChartSpan", PyvtkChartMatrix_GetChartSpan, METH_VARARGS,
   "V.GetChartSpan(vtkVector2i) -> vtkVector2i\nC++: virtual vtkVector2i GetChartSpan(const vtkVector2i &position)\n\nGet the span of the specified chart.\n"},
  {"GetChartIndex", PyvtkChartMatrix_GetChartIndex, METH_VARARGS,
   "V.GetChartIndex(vtkVector2f) -> vtkVector2i\nC++: virtual vtkVector2i GetChartIndex(\n    const vtkVector2f &position)\n\nGet the position of the chart in the matrix at the specified\nlocation. The position should be specified in scene coordinates.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkChartMatrix_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkChartMatrix", // tp_name
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
  PyvtkChartMatrix_Doc, // tp_doc
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

static vtkObjectBase *PyvtkChartMatrix_StaticNew()
{
  return vtkChartMatrix::New();
}

PyObject *PyvtkChartMatrix_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkChartMatrix_Type, PyvtkChartMatrix_Methods,
    "vtkChartMatrix",
 &PyvtkChartMatrix_StaticNew);

  PyTypeObject *pytype = &PyvtkChartMatrix_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractContextItem_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkChartMatrix(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkChartMatrix_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkChartMatrix", o) != 0)
  {
    Py_DECREF(o);
  }

}

