// python wrapper for vtkTextureMapToPlane
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
#include "vtkTextureMapToPlane.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTextureMapToPlane(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTextureMapToPlane_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkTextureMapToPlane_Doc =
  "vtkTextureMapToPlane - generate texture coordinates by mapping points\nto plane\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkTextureMapToPlane is a filter that generates 2D texture\n"
  "coordinates by mapping input dataset points onto a plane. The plane\n"
  "can either be user specified or generated automatically. (A least\n"
  "squares method is used to generate the plane automatically.)\n\n"
  "There are two ways you can specify the plane. The first is to provide\n"
  "a plane normal. In this case the points are projected to a plane, and\n"
  "the points are then mapped into the user specified s-t coordinate\n"
  "range. For more control, you can specify a plane with three points:\n"
  "an origin and two points defining the two axes of the plane. (This is\n"
  "compatible with the vtkPlaneSource.) Using the second method, the\n"
  "SRange and TRange vectors are ignored, since the presumption is that\n"
  "the user does not want to scale the texture coordinates; and you can\n"
  "adjust the origin and axes points to achieve the texture coordinate\n"
  "scaling you need. Note also that using the three point method the\n"
  "axes do not have to be orthogonal.\n\n"
  "@sa\n"
  " vtkPlaneSource vtkTextureMapToCylinder vtkTextureMapToSphere\n"
  "vtkThresholdTextureCoords\n\n";


static PyObject *
PyvtkTextureMapToPlane_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTextureMapToPlane::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextureMapToPlane::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTextureMapToPlane *tempr = vtkTextureMapToPlane::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextureMapToPlane *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextureMapToPlane::NewInstance());

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
PyvtkTextureMapToPlane_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTextureMapToPlane::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkTextureMapToPlane::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTextureMapToPlane_SetOrigin_s1(self, args);
    case 1:
      return PyvtkTextureMapToPlane_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}



static PyObject *
PyvtkTextureMapToPlane_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkTextureMapToPlane::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

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
      op->SetPoint1(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTextureMapToPlane::SetPoint1(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPoint1(temp0);
    }
    else
    {
      op->vtkTextureMapToPlane::SetPoint1(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTextureMapToPlane_SetPoint1_s1(self, args);
    case 1:
      return PyvtkTextureMapToPlane_SetPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return nullptr;
}



static PyObject *
PyvtkTextureMapToPlane_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkTextureMapToPlane::GetPoint1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

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
      op->SetPoint2(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTextureMapToPlane::SetPoint2(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPoint2(temp0);
    }
    else
    {
      op->vtkTextureMapToPlane::SetPoint2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTextureMapToPlane_SetPoint2_s1(self, args);
    case 1:
      return PyvtkTextureMapToPlane_SetPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return nullptr;
}



static PyObject *
PyvtkTextureMapToPlane_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkTextureMapToPlane::GetPoint2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

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
      op->SetNormal(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTextureMapToPlane::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNormal(temp0);
    }
    else
    {
      op->vtkTextureMapToPlane::SetNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTextureMapToPlane_SetNormal_s1(self, args);
    case 1:
      return PyvtkTextureMapToPlane_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}



static PyObject *
PyvtkTextureMapToPlane_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkTextureMapToPlane::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_SetSRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSRange(temp0, temp1);
    }
    else
    {
      op->vtkTextureMapToPlane::SetSRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetSRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSRange(temp0);
    }
    else
    {
      op->vtkTextureMapToPlane::SetSRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetSRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTextureMapToPlane_SetSRange_s1(self, args);
    case 1:
      return PyvtkTextureMapToPlane_SetSRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSRange");
  return nullptr;
}



static PyObject *
PyvtkTextureMapToPlane_GetSRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSRange() :
      op->vtkTextureMapToPlane::GetSRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_SetTRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTRange(temp0, temp1);
    }
    else
    {
      op->vtkTextureMapToPlane::SetTRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetTRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTRange(temp0);
    }
    else
    {
      op->vtkTextureMapToPlane::SetTRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetTRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTextureMapToPlane_SetTRange_s1(self, args);
    case 1:
      return PyvtkTextureMapToPlane_SetTRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTRange");
  return nullptr;
}



static PyObject *
PyvtkTextureMapToPlane_GetTRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTRange() :
      op->vtkTextureMapToPlane::GetTRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_SetAutomaticPlaneGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticPlaneGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomaticPlaneGeneration(temp0);
    }
    else
    {
      op->vtkTextureMapToPlane::SetAutomaticPlaneGeneration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_GetAutomaticPlaneGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticPlaneGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticPlaneGeneration() :
      op->vtkTextureMapToPlane::GetAutomaticPlaneGeneration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_AutomaticPlaneGenerationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticPlaneGenerationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticPlaneGenerationOn();
    }
    else
    {
      op->vtkTextureMapToPlane::AutomaticPlaneGenerationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_AutomaticPlaneGenerationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticPlaneGenerationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticPlaneGenerationOff();
    }
    else
    {
      op->vtkTextureMapToPlane::AutomaticPlaneGenerationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTextureMapToPlane_Methods[] = {
  {"IsTypeOf", PyvtkTextureMapToPlane_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTextureMapToPlane_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTextureMapToPlane_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTextureMapToPlane\nC++: static vtkTextureMapToPlane *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTextureMapToPlane_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTextureMapToPlane\nC++: vtkTextureMapToPlane *NewInstance()\n\n"},
  {"SetOrigin", PyvtkTextureMapToPlane_SetOrigin, METH_VARARGS,
   "V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {"GetOrigin", PyvtkTextureMapToPlane_GetOrigin, METH_VARARGS,
   "V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\nSpecify a point defining the origin of the plane. Used in\nconjunction with the Point1 and Point2 ivars to specify a map\nplane.\n"},
  {"SetPoint1", PyvtkTextureMapToPlane_SetPoint1, METH_VARARGS,
   "V.SetPoint1(float, float, float)\nC++: void SetPoint1(double, double, double)\nV.SetPoint1((float, float, float))\nC++: void SetPoint1(double a[3])\n\n"},
  {"GetPoint1", PyvtkTextureMapToPlane_GetPoint1, METH_VARARGS,
   "V.GetPoint1() -> (float, float, float)\nC++: double *GetPoint1()\n\nSpecify a point defining the first axis of the plane.\n"},
  {"SetPoint2", PyvtkTextureMapToPlane_SetPoint2, METH_VARARGS,
   "V.SetPoint2(float, float, float)\nC++: void SetPoint2(double, double, double)\nV.SetPoint2((float, float, float))\nC++: void SetPoint2(double a[3])\n\n"},
  {"GetPoint2", PyvtkTextureMapToPlane_GetPoint2, METH_VARARGS,
   "V.GetPoint2() -> (float, float, float)\nC++: double *GetPoint2()\n\nSpecify a point defining the second axis of the plane.\n"},
  {"SetNormal", PyvtkTextureMapToPlane_SetNormal, METH_VARARGS,
   "V.SetNormal(float, float, float)\nC++: void SetNormal(double, double, double)\nV.SetNormal((float, float, float))\nC++: void SetNormal(double a[3])\n\n"},
  {"GetNormal", PyvtkTextureMapToPlane_GetNormal, METH_VARARGS,
   "V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\n\nSpecify plane normal. An alternative way to specify a map plane.\nUsing this method, the object will scale the resulting texture\ncoordinate between the SRange and TRange specified.\n"},
  {"SetSRange", PyvtkTextureMapToPlane_SetSRange, METH_VARARGS,
   "V.SetSRange(float, float)\nC++: void SetSRange(double, double)\nV.SetSRange((float, float))\nC++: void SetSRange(double a[2])\n\n"},
  {"GetSRange", PyvtkTextureMapToPlane_GetSRange, METH_VARARGS,
   "V.GetSRange() -> (float, float)\nC++: double *GetSRange()\n\nSpecify s-coordinate range for texture s-t coordinate pair.\n"},
  {"SetTRange", PyvtkTextureMapToPlane_SetTRange, METH_VARARGS,
   "V.SetTRange(float, float)\nC++: void SetTRange(double, double)\nV.SetTRange((float, float))\nC++: void SetTRange(double a[2])\n\n"},
  {"GetTRange", PyvtkTextureMapToPlane_GetTRange, METH_VARARGS,
   "V.GetTRange() -> (float, float)\nC++: double *GetTRange()\n\nSpecify t-coordinate range for texture s-t coordinate pair.\n"},
  {"SetAutomaticPlaneGeneration", PyvtkTextureMapToPlane_SetAutomaticPlaneGeneration, METH_VARARGS,
   "V.SetAutomaticPlaneGeneration(int)\nC++: virtual void SetAutomaticPlaneGeneration(vtkTypeBool _arg)\n\nTurn on/off automatic plane generation.\n"},
  {"GetAutomaticPlaneGeneration", PyvtkTextureMapToPlane_GetAutomaticPlaneGeneration, METH_VARARGS,
   "V.GetAutomaticPlaneGeneration() -> int\nC++: virtual vtkTypeBool GetAutomaticPlaneGeneration()\n\nTurn on/off automatic plane generation.\n"},
  {"AutomaticPlaneGenerationOn", PyvtkTextureMapToPlane_AutomaticPlaneGenerationOn, METH_VARARGS,
   "V.AutomaticPlaneGenerationOn()\nC++: virtual void AutomaticPlaneGenerationOn()\n\nTurn on/off automatic plane generation.\n"},
  {"AutomaticPlaneGenerationOff", PyvtkTextureMapToPlane_AutomaticPlaneGenerationOff, METH_VARARGS,
   "V.AutomaticPlaneGenerationOff()\nC++: virtual void AutomaticPlaneGenerationOff()\n\nTurn on/off automatic plane generation.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTextureMapToPlane_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersTexturePython.vtkTextureMapToPlane", // tp_name
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
  PyvtkTextureMapToPlane_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTextureMapToPlane_StaticNew()
{
  return vtkTextureMapToPlane::New();
}

PyObject *PyvtkTextureMapToPlane_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTextureMapToPlane_Type, PyvtkTextureMapToPlane_Methods,
    "vtkTextureMapToPlane",
 &PyvtkTextureMapToPlane_StaticNew);

  PyTypeObject *pytype = &PyvtkTextureMapToPlane_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTextureMapToPlane(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTextureMapToPlane_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTextureMapToPlane", o) != 0)
  {
    Py_DECREF(o);
  }

}

