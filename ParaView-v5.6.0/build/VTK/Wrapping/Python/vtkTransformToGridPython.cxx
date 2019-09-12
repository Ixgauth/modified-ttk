// python wrapper for vtkTransformToGrid
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
#include "vtkInformationVector.h"
#include "vtkTransformToGrid.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTransformToGrid(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTransformToGrid_ClassNew(); }

#ifndef DECLARED_PyvtkAlgorithm_ClassNew
extern "C" { PyObject *PyvtkAlgorithm_ClassNew(); }
#define DECLARED_PyvtkAlgorithm_ClassNew
#endif

static const char *PyvtkTransformToGrid_Doc =
  "vtkTransformToGrid - create a grid for a vtkGridTransform\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "vtkTransformToGrid takes any transform as input and produces a grid\n"
  "for use by a vtkGridTransform.  This can be used, for example, to\n"
  "invert a grid transform, concatenate two grid transforms, or to\n"
  "convert a thin plate spline transform into a grid transform.\n"
  "@sa\n"
  "vtkGridTransform vtkThinPlateSplineTransform vtkAbstractTransform\n\n";


static PyObject *
PyvtkTransformToGrid_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTransformToGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTransformToGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTransformToGrid *tempr = vtkTransformToGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransformToGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTransformToGrid::NewInstance());

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
PyvtkTransformToGrid_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkTransformToGrid::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkTransformToGrid::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

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
    if (ap.IsBound())
    {
      op->SetGridExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkTransformToGrid::SetGridExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformToGrid_SetGridExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGridExtent(temp0);
    }
    else
    {
      op->vtkTransformToGrid::SetGridExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformToGrid_SetGridExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkTransformToGrid_SetGridExtent_s1(self, args);
    case 1:
      return PyvtkTransformToGrid_SetGridExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridExtent");
  return nullptr;
}



static PyObject *
PyvtkTransformToGrid_GetGridExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetGridExtent() :
      op->vtkTransformToGrid::GetGridExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetGridOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTransformToGrid::SetGridOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformToGrid_SetGridOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGridOrigin(temp0);
    }
    else
    {
      op->vtkTransformToGrid::SetGridOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformToGrid_SetGridOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTransformToGrid_SetGridOrigin_s1(self, args);
    case 1:
      return PyvtkTransformToGrid_SetGridOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridOrigin");
  return nullptr;
}



static PyObject *
PyvtkTransformToGrid_GetGridOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetGridOrigin() :
      op->vtkTransformToGrid::GetGridOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetGridSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTransformToGrid::SetGridSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformToGrid_SetGridSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGridSpacing(temp0);
    }
    else
    {
      op->vtkTransformToGrid::SetGridSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformToGrid_SetGridSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTransformToGrid_SetGridSpacing_s1(self, args);
    case 1:
      return PyvtkTransformToGrid_SetGridSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridSpacing");
  return nullptr;
}



static PyObject *
PyvtkTransformToGrid_GetGridSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetGridSpacing() :
      op->vtkTransformToGrid::GetGridSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridScalarType(temp0);
    }
    else
    {
      op->vtkTransformToGrid::SetGridScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_GetGridScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGridScalarType() :
      op->vtkTransformToGrid::GetGridScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGridScalarTypeToDouble();
    }
    else
    {
      op->vtkTransformToGrid::SetGridScalarTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGridScalarTypeToFloat();
    }
    else
    {
      op->vtkTransformToGrid::SetGridScalarTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGridScalarTypeToShort();
    }
    else
    {
      op->vtkTransformToGrid::SetGridScalarTypeToShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGridScalarTypeToUnsignedShort();
    }
    else
    {
      op->vtkTransformToGrid::SetGridScalarTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGridScalarTypeToUnsignedChar();
    }
    else
    {
      op->vtkTransformToGrid::SetGridScalarTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGridScalarTypeToChar();
    }
    else
    {
      op->vtkTransformToGrid::SetGridScalarTypeToChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_GetDisplacementScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDisplacementScale() :
      op->vtkTransformToGrid::GetDisplacementScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_GetDisplacementShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDisplacementShift() :
      op->vtkTransformToGrid::GetDisplacementShift());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkTransformToGrid::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTransformToGrid_Methods[] = {
  {"IsTypeOf", PyvtkTransformToGrid_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTransformToGrid_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTransformToGrid_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTransformToGrid\nC++: static vtkTransformToGrid *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTransformToGrid_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTransformToGrid\nC++: vtkTransformToGrid *NewInstance()\n\n"},
  {"SetInput", PyvtkTransformToGrid_SetInput, METH_VARARGS,
   "V.SetInput(vtkAbstractTransform)\nC++: virtual void SetInput(vtkAbstractTransform *)\n\nSet/Get the transform which will be converted into a grid.\n"},
  {"GetInput", PyvtkTransformToGrid_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetInput()\n\nSet/Get the transform which will be converted into a grid.\n"},
  {"SetGridExtent", PyvtkTransformToGrid_SetGridExtent, METH_VARARGS,
   "V.SetGridExtent(int, int, int, int, int, int)\nC++: void SetGridExtent(int, int, int, int, int, int)\nV.SetGridExtent((int, int, int, int, int, int))\nC++: void SetGridExtent(int a[6])\n\n"},
  {"GetGridExtent", PyvtkTransformToGrid_GetGridExtent, METH_VARARGS,
   "V.GetGridExtent() -> (int, int, int, int, int, int)\nC++: int *GetGridExtent()\n\n"},
  {"SetGridOrigin", PyvtkTransformToGrid_SetGridOrigin, METH_VARARGS,
   "V.SetGridOrigin(float, float, float)\nC++: void SetGridOrigin(double, double, double)\nV.SetGridOrigin((float, float, float))\nC++: void SetGridOrigin(double a[3])\n\n"},
  {"GetGridOrigin", PyvtkTransformToGrid_GetGridOrigin, METH_VARARGS,
   "V.GetGridOrigin() -> (float, float, float)\nC++: double *GetGridOrigin()\n\n"},
  {"SetGridSpacing", PyvtkTransformToGrid_SetGridSpacing, METH_VARARGS,
   "V.SetGridSpacing(float, float, float)\nC++: void SetGridSpacing(double, double, double)\nV.SetGridSpacing((float, float, float))\nC++: void SetGridSpacing(double a[3])\n\n"},
  {"GetGridSpacing", PyvtkTransformToGrid_GetGridSpacing, METH_VARARGS,
   "V.GetGridSpacing() -> (float, float, float)\nC++: double *GetGridSpacing()\n\n"},
  {"SetGridScalarType", PyvtkTransformToGrid_SetGridScalarType, METH_VARARGS,
   "V.SetGridScalarType(int)\nC++: virtual void SetGridScalarType(int _arg)\n\nGet/Set the scalar type of the grid.  The default is float.\n"},
  {"GetGridScalarType", PyvtkTransformToGrid_GetGridScalarType, METH_VARARGS,
   "V.GetGridScalarType() -> int\nC++: virtual int GetGridScalarType()\n\nGet/Set the scalar type of the grid.  The default is float.\n"},
  {"SetGridScalarTypeToDouble", PyvtkTransformToGrid_SetGridScalarTypeToDouble, METH_VARARGS,
   "V.SetGridScalarTypeToDouble()\nC++: void SetGridScalarTypeToDouble()\n\nGet/Set the scalar type of the grid.  The default is float.\n"},
  {"SetGridScalarTypeToFloat", PyvtkTransformToGrid_SetGridScalarTypeToFloat, METH_VARARGS,
   "V.SetGridScalarTypeToFloat()\nC++: void SetGridScalarTypeToFloat()\n\nGet/Set the scalar type of the grid.  The default is float.\n"},
  {"SetGridScalarTypeToShort", PyvtkTransformToGrid_SetGridScalarTypeToShort, METH_VARARGS,
   "V.SetGridScalarTypeToShort()\nC++: void SetGridScalarTypeToShort()\n\nGet/Set the scalar type of the grid.  The default is float.\n"},
  {"SetGridScalarTypeToUnsignedShort", PyvtkTransformToGrid_SetGridScalarTypeToUnsignedShort, METH_VARARGS,
   "V.SetGridScalarTypeToUnsignedShort()\nC++: void SetGridScalarTypeToUnsignedShort()\n\nGet/Set the scalar type of the grid.  The default is float.\n"},
  {"SetGridScalarTypeToUnsignedChar", PyvtkTransformToGrid_SetGridScalarTypeToUnsignedChar, METH_VARARGS,
   "V.SetGridScalarTypeToUnsignedChar()\nC++: void SetGridScalarTypeToUnsignedChar()\n\nGet/Set the scalar type of the grid.  The default is float.\n"},
  {"SetGridScalarTypeToChar", PyvtkTransformToGrid_SetGridScalarTypeToChar, METH_VARARGS,
   "V.SetGridScalarTypeToChar()\nC++: void SetGridScalarTypeToChar()\n\nGet/Set the scalar type of the grid.  The default is float.\n"},
  {"GetDisplacementScale", PyvtkTransformToGrid_GetDisplacementScale, METH_VARARGS,
   "V.GetDisplacementScale() -> float\nC++: double GetDisplacementScale()\n\nGet the scale and shift to convert integer grid elements into\nreal values:  dx = scale*di + shift.  If the grid is of double\ntype, then scale = 1 and shift = 0.\n"},
  {"GetDisplacementShift", PyvtkTransformToGrid_GetDisplacementShift, METH_VARARGS,
   "V.GetDisplacementShift() -> float\nC++: double GetDisplacementShift()\n\nGet the scale and shift to convert integer grid elements into\nreal values:  dx = scale*di + shift.  If the grid is of double\ntype, then scale = 1 and shift = 0.\n"},
  {"GetOutput", PyvtkTransformToGrid_GetOutput, METH_VARARGS,
   "V.GetOutput() -> vtkImageData\nC++: vtkImageData *GetOutput()\n\nGet the output data object for a port on this algorithm.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTransformToGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHybridPython.vtkTransformToGrid", // tp_name
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
  PyvtkTransformToGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTransformToGrid_StaticNew()
{
  return vtkTransformToGrid::New();
}

PyObject *PyvtkTransformToGrid_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTransformToGrid_Type, PyvtkTransformToGrid_Methods,
    "vtkTransformToGrid",
 &PyvtkTransformToGrid_StaticNew);

  PyTypeObject *pytype = &PyvtkTransformToGrid_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTransformToGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTransformToGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTransformToGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

