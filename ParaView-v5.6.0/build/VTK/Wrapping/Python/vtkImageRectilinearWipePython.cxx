// python wrapper for vtkImageRectilinearWipe
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
#include "vtkImageRectilinearWipe.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageRectilinearWipe(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageRectilinearWipe_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageRectilinearWipe_Doc =
  "vtkImageRectilinearWipe - make a rectilinear combination of two\nimages.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageRectilinearWipe makes a rectilinear combination of two\n"
  "images. The two input images must correspond in size, scalar type and\n"
  "number of components. The resulting image has four possible\n"
  "configurations called:\n"
  "  Quad - alternate input 0 and input 1 horizontally and\n"
  "    vertically. Select this with SetWipeModeToQuad. The Position\n"
  "    specifies the location of the quad intersection.\n"
  "  Corner - 3 of one input and 1 of the other. Select the location of\n"
  "    input 0 with with SetWipeModeToLowerLeft,\n"
  "SetWipeModeToLowerRight,\n"
  "    SetWipeModeToUpperLeft and SetWipeModeToUpperRight. The Position\n"
  "    selects the location of the corner.\n"
  "  Horizontal - alternate input 0 and input 1 with a vertical\n"
  "    split. Select this with SetWipeModeToHorizontal. Position[0]\n"
  "    specifies the location of the vertical transition between input 0\n"
  "    and input 1.\n"
  "  Vertical - alternate input 0 and input 1 with a horizontal\n"
  "    split. Only the y The intersection point of the rectilinear\n"
  "points\n"
  "    is controlled with the Point ivar.\n\n"
  "@par Thanks: This work was supported by PHS Research Grant No. 1 P41\n"
  "RR13218-01 from the National Center for Research Resources.\n\n"
  "@sa\n"
  "vtkImageCheckerboard\n\n";


static PyObject *
PyvtkImageRectilinearWipe_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageRectilinearWipe::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageRectilinearWipe::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageRectilinearWipe *tempr = vtkImageRectilinearWipe::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageRectilinearWipe *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageRectilinearWipe::NewInstance());

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
PyvtkImageRectilinearWipe_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

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
      op->vtkImageRectilinearWipe::SetPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageRectilinearWipe_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkImageRectilinearWipe::SetPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageRectilinearWipe_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageRectilinearWipe_SetPosition_s1(self, args);
    case 1:
      return PyvtkImageRectilinearWipe_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}



static PyObject *
PyvtkImageRectilinearWipe_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkImageRectilinearWipe::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SetAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxis(temp0, temp1);
    }
    else
    {
      op->vtkImageRectilinearWipe::SetAxis(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageRectilinearWipe_SetAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAxis(temp0);
    }
    else
    {
      op->vtkImageRectilinearWipe::SetAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageRectilinearWipe_SetAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageRectilinearWipe_SetAxis_s1(self, args);
    case 1:
      return PyvtkImageRectilinearWipe_SetAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxis");
  return nullptr;
}



static PyObject *
PyvtkImageRectilinearWipe_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetAxis() :
      op->vtkImageRectilinearWipe::GetAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SetInput1Data(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput1Data");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInput1Data(temp0);
    }
    else
    {
      op->vtkImageRectilinearWipe::SetInput1Data(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SetInput2Data(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput2Data");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInput2Data(temp0);
    }
    else
    {
      op->vtkImageRectilinearWipe::SetInput2Data(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SetWipe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWipe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWipe(temp0);
    }
    else
    {
      op->vtkImageRectilinearWipe::SetWipe(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_GetWipeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWipeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWipeMinValue() :
      op->vtkImageRectilinearWipe::GetWipeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_GetWipeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWipeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWipeMaxValue() :
      op->vtkImageRectilinearWipe::GetWipeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_GetWipe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWipe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWipe() :
      op->vtkImageRectilinearWipe::GetWipe());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SetWipeToQuad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWipeToQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWipeToQuad();
    }
    else
    {
      op->vtkImageRectilinearWipe::SetWipeToQuad();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SetWipeToHorizontal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWipeToHorizontal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWipeToHorizontal();
    }
    else
    {
      op->vtkImageRectilinearWipe::SetWipeToHorizontal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SetWipeToVertical(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWipeToVertical");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWipeToVertical();
    }
    else
    {
      op->vtkImageRectilinearWipe::SetWipeToVertical();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SetWipeToLowerLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWipeToLowerLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWipeToLowerLeft();
    }
    else
    {
      op->vtkImageRectilinearWipe::SetWipeToLowerLeft();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SetWipeToLowerRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWipeToLowerRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWipeToLowerRight();
    }
    else
    {
      op->vtkImageRectilinearWipe::SetWipeToLowerRight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SetWipeToUpperLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWipeToUpperLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWipeToUpperLeft();
    }
    else
    {
      op->vtkImageRectilinearWipe::SetWipeToUpperLeft();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SetWipeToUpperRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWipeToUpperRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWipeToUpperRight();
    }
    else
    {
      op->vtkImageRectilinearWipe::SetWipeToUpperRight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageRectilinearWipe_Methods[] = {
  {"IsTypeOf", PyvtkImageRectilinearWipe_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageRectilinearWipe_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageRectilinearWipe_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageRectilinearWipe\nC++: static vtkImageRectilinearWipe *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageRectilinearWipe_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageRectilinearWipe\nC++: vtkImageRectilinearWipe *NewInstance()\n\n"},
  {"SetPosition", PyvtkImageRectilinearWipe_SetPosition, METH_VARARGS,
   "V.SetPosition(int, int)\nC++: void SetPosition(int, int)\nV.SetPosition((int, int))\nC++: void SetPosition(int a[2])\n\n"},
  {"GetPosition", PyvtkImageRectilinearWipe_GetPosition, METH_VARARGS,
   "V.GetPosition() -> (int, int)\nC++: int *GetPosition()\n\nSet/Get the location of the image transition. Note that position\nis specified in pixels.\n"},
  {"SetAxis", PyvtkImageRectilinearWipe_SetAxis, METH_VARARGS,
   "V.SetAxis(int, int)\nC++: void SetAxis(int, int)\nV.SetAxis((int, int))\nC++: void SetAxis(int a[2])\n\n"},
  {"GetAxis", PyvtkImageRectilinearWipe_GetAxis, METH_VARARGS,
   "V.GetAxis() -> (int, int)\nC++: int *GetAxis()\n\nSet/Get the location of the wipe axes. The default is X,Y (ie\nvector values of 0 and 1).\n"},
  {"SetInput1Data", PyvtkImageRectilinearWipe_SetInput1Data, METH_VARARGS,
   "V.SetInput1Data(vtkDataObject)\nC++: virtual void SetInput1Data(vtkDataObject *in)\n\nSet the two inputs to this filter.\n"},
  {"SetInput2Data", PyvtkImageRectilinearWipe_SetInput2Data, METH_VARARGS,
   "V.SetInput2Data(vtkDataObject)\nC++: virtual void SetInput2Data(vtkDataObject *in)\n\n"},
  {"SetWipe", PyvtkImageRectilinearWipe_SetWipe, METH_VARARGS,
   "V.SetWipe(int)\nC++: virtual void SetWipe(int _arg)\n\nSpecify the wipe mode. This mode determnis how input 0 and input\n1 are combined to produce the output. Each mode uses one or both\nof the values stored in Position. SetWipeToQuad - alternate input\n0 and input 1 horizontally and vertically. The Position specifies\nthe location of the quad intersection.\nSetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one\ninput and 1 of the other. Select the location of input 0 to the\nLowerLeft{LowerRight,UpperLeft,UpperRight}. Position selects the\nlocation of the corner. SetWipeToHorizontal - alternate input 0\nand input 1 with a vertical split. Position[0] specifies the\nlocation of the vertical transition between input 0 and input 1.\nSetWipeToVertical - alternate input 0 and input 1 with a\nhorizontal split. Position[1] specifies the location of the\nhorizontal transition between input 0 and input 1.\n"},
  {"GetWipeMinValue", PyvtkImageRectilinearWipe_GetWipeMinValue, METH_VARARGS,
   "V.GetWipeMinValue() -> int\nC++: virtual int GetWipeMinValue()\n\nSpecify the wipe mode. This mode determnis how input 0 and input\n1 are combined to produce the output. Each mode uses one or both\nof the values stored in Position. SetWipeToQuad - alternate input\n0 and input 1 horizontally and vertically. The Position specifies\nthe location of the quad intersection.\nSetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one\ninput and 1 of the other. Select the location of input 0 to the\nLowerLeft{LowerRight,UpperLeft,UpperRight}. Position selects the\nlocation of the corner. SetWipeToHorizontal - alternate input 0\nand input 1 with a vertical split. Position[0] specifies the\nlocation of the vertical transition between input 0 and input 1.\nSetWipeToVertical - alternate input 0 and input 1 with a\nhorizontal split. Position[1] specifies the location of the\nhorizontal transition between input 0 and input 1.\n"},
  {"GetWipeMaxValue", PyvtkImageRectilinearWipe_GetWipeMaxValue, METH_VARARGS,
   "V.GetWipeMaxValue() -> int\nC++: virtual int GetWipeMaxValue()\n\nSpecify the wipe mode. This mode determnis how input 0 and input\n1 are combined to produce the output. Each mode uses one or both\nof the values stored in Position. SetWipeToQuad - alternate input\n0 and input 1 horizontally and vertically. The Position specifies\nthe location of the quad intersection.\nSetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one\ninput and 1 of the other. Select the location of input 0 to the\nLowerLeft{LowerRight,UpperLeft,UpperRight}. Position selects the\nlocation of the corner. SetWipeToHorizontal - alternate input 0\nand input 1 with a vertical split. Position[0] specifies the\nlocation of the vertical transition between input 0 and input 1.\nSetWipeToVertical - alternate input 0 and input 1 with a\nhorizontal split. Position[1] specifies the location of the\nhorizontal transition between input 0 and input 1.\n"},
  {"GetWipe", PyvtkImageRectilinearWipe_GetWipe, METH_VARARGS,
   "V.GetWipe() -> int\nC++: virtual int GetWipe()\n\nSpecify the wipe mode. This mode determnis how input 0 and input\n1 are combined to produce the output. Each mode uses one or both\nof the values stored in Position. SetWipeToQuad - alternate input\n0 and input 1 horizontally and vertically. The Position specifies\nthe location of the quad intersection.\nSetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one\ninput and 1 of the other. Select the location of input 0 to the\nLowerLeft{LowerRight,UpperLeft,UpperRight}. Position selects the\nlocation of the corner. SetWipeToHorizontal - alternate input 0\nand input 1 with a vertical split. Position[0] specifies the\nlocation of the vertical transition between input 0 and input 1.\nSetWipeToVertical - alternate input 0 and input 1 with a\nhorizontal split. Position[1] specifies the location of the\nhorizontal transition between input 0 and input 1.\n"},
  {"SetWipeToQuad", PyvtkImageRectilinearWipe_SetWipeToQuad, METH_VARARGS,
   "V.SetWipeToQuad()\nC++: void SetWipeToQuad()\n\nSpecify the wipe mode. This mode determnis how input 0 and input\n1 are combined to produce the output. Each mode uses one or both\nof the values stored in Position. SetWipeToQuad - alternate input\n0 and input 1 horizontally and vertically. The Position specifies\nthe location of the quad intersection.\nSetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one\ninput and 1 of the other. Select the location of input 0 to the\nLowerLeft{LowerRight,UpperLeft,UpperRight}. Position selects the\nlocation of the corner. SetWipeToHorizontal - alternate input 0\nand input 1 with a vertical split. Position[0] specifies the\nlocation of the vertical transition between input 0 and input 1.\nSetWipeToVertical - alternate input 0 and input 1 with a\nhorizontal split. Position[1] specifies the location of the\nhorizontal transition between input 0 and input 1.\n"},
  {"SetWipeToHorizontal", PyvtkImageRectilinearWipe_SetWipeToHorizontal, METH_VARARGS,
   "V.SetWipeToHorizontal()\nC++: void SetWipeToHorizontal()\n\nSpecify the wipe mode. This mode determnis how input 0 and input\n1 are combined to produce the output. Each mode uses one or both\nof the values stored in Position. SetWipeToQuad - alternate input\n0 and input 1 horizontally and vertically. The Position specifies\nthe location of the quad intersection.\nSetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one\ninput and 1 of the other. Select the location of input 0 to the\nLowerLeft{LowerRight,UpperLeft,UpperRight}. Position selects the\nlocation of the corner. SetWipeToHorizontal - alternate input 0\nand input 1 with a vertical split. Position[0] specifies the\nlocation of the vertical transition between input 0 and input 1.\nSetWipeToVertical - alternate input 0 and input 1 with a\nhorizontal split. Position[1] specifies the location of the\nhorizontal transition between input 0 and input 1.\n"},
  {"SetWipeToVertical", PyvtkImageRectilinearWipe_SetWipeToVertical, METH_VARARGS,
   "V.SetWipeToVertical()\nC++: void SetWipeToVertical()\n\nSpecify the wipe mode. This mode determnis how input 0 and input\n1 are combined to produce the output. Each mode uses one or both\nof the values stored in Position. SetWipeToQuad - alternate input\n0 and input 1 horizontally and vertically. The Position specifies\nthe location of the quad intersection.\nSetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one\ninput and 1 of the other. Select the location of input 0 to the\nLowerLeft{LowerRight,UpperLeft,UpperRight}. Position selects the\nlocation of the corner. SetWipeToHorizontal - alternate input 0\nand input 1 with a vertical split. Position[0] specifies the\nlocation of the vertical transition between input 0 and input 1.\nSetWipeToVertical - alternate input 0 and input 1 with a\nhorizontal split. Position[1] specifies the location of the\nhorizontal transition between input 0 and input 1.\n"},
  {"SetWipeToLowerLeft", PyvtkImageRectilinearWipe_SetWipeToLowerLeft, METH_VARARGS,
   "V.SetWipeToLowerLeft()\nC++: void SetWipeToLowerLeft()\n\nSpecify the wipe mode. This mode determnis how input 0 and input\n1 are combined to produce the output. Each mode uses one or both\nof the values stored in Position. SetWipeToQuad - alternate input\n0 and input 1 horizontally and vertically. The Position specifies\nthe location of the quad intersection.\nSetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one\ninput and 1 of the other. Select the location of input 0 to the\nLowerLeft{LowerRight,UpperLeft,UpperRight}. Position selects the\nlocation of the corner. SetWipeToHorizontal - alternate input 0\nand input 1 with a vertical split. Position[0] specifies the\nlocation of the vertical transition between input 0 and input 1.\nSetWipeToVertical - alternate input 0 and input 1 with a\nhorizontal split. Position[1] specifies the location of the\nhorizontal transition between input 0 and input 1.\n"},
  {"SetWipeToLowerRight", PyvtkImageRectilinearWipe_SetWipeToLowerRight, METH_VARARGS,
   "V.SetWipeToLowerRight()\nC++: void SetWipeToLowerRight()\n\nSpecify the wipe mode. This mode determnis how input 0 and input\n1 are combined to produce the output. Each mode uses one or both\nof the values stored in Position. SetWipeToQuad - alternate input\n0 and input 1 horizontally and vertically. The Position specifies\nthe location of the quad intersection.\nSetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one\ninput and 1 of the other. Select the location of input 0 to the\nLowerLeft{LowerRight,UpperLeft,UpperRight}. Position selects the\nlocation of the corner. SetWipeToHorizontal - alternate input 0\nand input 1 with a vertical split. Position[0] specifies the\nlocation of the vertical transition between input 0 and input 1.\nSetWipeToVertical - alternate input 0 and input 1 with a\nhorizontal split. Position[1] specifies the location of the\nhorizontal transition between input 0 and input 1.\n"},
  {"SetWipeToUpperLeft", PyvtkImageRectilinearWipe_SetWipeToUpperLeft, METH_VARARGS,
   "V.SetWipeToUpperLeft()\nC++: void SetWipeToUpperLeft()\n\nSpecify the wipe mode. This mode determnis how input 0 and input\n1 are combined to produce the output. Each mode uses one or both\nof the values stored in Position. SetWipeToQuad - alternate input\n0 and input 1 horizontally and vertically. The Position specifies\nthe location of the quad intersection.\nSetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one\ninput and 1 of the other. Select the location of input 0 to the\nLowerLeft{LowerRight,UpperLeft,UpperRight}. Position selects the\nlocation of the corner. SetWipeToHorizontal - alternate input 0\nand input 1 with a vertical split. Position[0] specifies the\nlocation of the vertical transition between input 0 and input 1.\nSetWipeToVertical - alternate input 0 and input 1 with a\nhorizontal split. Position[1] specifies the location of the\nhorizontal transition between input 0 and input 1.\n"},
  {"SetWipeToUpperRight", PyvtkImageRectilinearWipe_SetWipeToUpperRight, METH_VARARGS,
   "V.SetWipeToUpperRight()\nC++: void SetWipeToUpperRight()\n\nSpecify the wipe mode. This mode determnis how input 0 and input\n1 are combined to produce the output. Each mode uses one or both\nof the values stored in Position. SetWipeToQuad - alternate input\n0 and input 1 horizontally and vertically. The Position specifies\nthe location of the quad intersection.\nSetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one\ninput and 1 of the other. Select the location of input 0 to the\nLowerLeft{LowerRight,UpperLeft,UpperRight}. Position selects the\nlocation of the corner. SetWipeToHorizontal - alternate input 0\nand input 1 with a vertical split. Position[0] specifies the\nlocation of the vertical transition between input 0 and input 1.\nSetWipeToVertical - alternate input 0 and input 1 with a\nhorizontal split. Position[1] specifies the location of the\nhorizontal transition between input 0 and input 1.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageRectilinearWipe_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingHybridPython.vtkImageRectilinearWipe", // tp_name
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
  PyvtkImageRectilinearWipe_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageRectilinearWipe_StaticNew()
{
  return vtkImageRectilinearWipe::New();
}

PyObject *PyvtkImageRectilinearWipe_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageRectilinearWipe_Type, PyvtkImageRectilinearWipe_Methods,
    "vtkImageRectilinearWipe",
 &PyvtkImageRectilinearWipe_StaticNew);

  PyTypeObject *pytype = &PyvtkImageRectilinearWipe_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkThreadedImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageRectilinearWipe(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageRectilinearWipe_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageRectilinearWipe", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    static const struct { const char *name; int value; }
      constants[7] = {
        { "VTK_WIPE_QUAD", 0 },
        { "VTK_WIPE_HORIZONTAL", 1 },
        { "VTK_WIPE_VERTICAL", 2 },
        { "VTK_WIPE_LOWER_LEFT", 3 },
        { "VTK_WIPE_LOWER_RIGHT", 4 },
        { "VTK_WIPE_UPPER_LEFT", 5 },
        { "VTK_WIPE_UPPER_RIGHT", 6 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

