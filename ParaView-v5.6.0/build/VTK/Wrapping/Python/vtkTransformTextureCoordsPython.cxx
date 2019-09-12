// python wrapper for vtkTransformTextureCoords
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
#include "vtkTransformTextureCoords.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTransformTextureCoords(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTransformTextureCoords_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkTransformTextureCoords_Doc =
  "vtkTransformTextureCoords - transform (scale, rotate, translate)\ntexture coordinates\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkTransformTextureCoords is a filter that operates on texture\n"
  "coordinates. It ingests any type of dataset, and outputs a dataset of\n"
  "the same type. The filter lets you scale, translate, and rotate\n"
  "texture coordinates. For example, by using the Scale ivar, you can\n"
  "shift texture coordinates that range from (0->1) to range from\n"
  "(0->10) (useful for repeated patterns).\n\n"
  "The filter operates on texture coordinates of dimension 1->3. The\n"
  "texture coordinates are referred to as r-s-t. If the texture map is\n"
  "two dimensional, the t-coordinate (and operations on the\n"
  "t-coordinate) are ignored.\n\n"
  "@sa\n"
  "vtkTextureMapToPlane  vtkTextureMapToCylinder vtkTextureMapToSphere\n"
  "vtkThresholdTextureCoords vtkTexture\n\n";


static PyObject *
PyvtkTransformTextureCoords_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTransformTextureCoords::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTransformTextureCoords::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTransformTextureCoords *tempr = vtkTransformTextureCoords::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransformTextureCoords *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTransformTextureCoords::NewInstance());

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
PyvtkTransformTextureCoords_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTransformTextureCoords::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformTextureCoords_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  const size_t size0 = 3;
  double temp0[3];
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
      op->vtkTransformTextureCoords::SetPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformTextureCoords_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTransformTextureCoords_SetPosition_s1(self, args);
    case 1:
      return PyvtkTransformTextureCoords_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}



static PyObject *
PyvtkTransformTextureCoords_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkTransformTextureCoords::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_AddPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

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
      op->AddPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTransformTextureCoords::AddPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformTextureCoords_AddPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->AddPosition(temp0);
    }
    else
    {
      op->vtkTransformTextureCoords::AddPosition(temp0);
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
PyvtkTransformTextureCoords_AddPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTransformTextureCoords_AddPosition_s1(self, args);
    case 1:
      return PyvtkTransformTextureCoords_AddPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddPosition");
  return nullptr;
}



static PyObject *
PyvtkTransformTextureCoords_SetScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

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
      op->SetScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTransformTextureCoords::SetScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformTextureCoords_SetScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkTransformTextureCoords::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformTextureCoords_SetScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTransformTextureCoords_SetScale_s1(self, args);
    case 1:
      return PyvtkTransformTextureCoords_SetScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScale");
  return nullptr;
}



static PyObject *
PyvtkTransformTextureCoords_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkTransformTextureCoords::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

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
      op->vtkTransformTextureCoords::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformTextureCoords_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

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
      op->vtkTransformTextureCoords::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformTextureCoords_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTransformTextureCoords_SetOrigin_s1(self, args);
    case 1:
      return PyvtkTransformTextureCoords_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}



static PyObject *
PyvtkTransformTextureCoords_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkTransformTextureCoords::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_SetFlipR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlipR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFlipR(temp0);
    }
    else
    {
      op->vtkTransformTextureCoords::SetFlipR(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_GetFlipR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFlipR() :
      op->vtkTransformTextureCoords::GetFlipR());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_FlipROn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipROn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipROn();
    }
    else
    {
      op->vtkTransformTextureCoords::FlipROn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_FlipROff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipROff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipROff();
    }
    else
    {
      op->vtkTransformTextureCoords::FlipROff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_SetFlipS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlipS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFlipS(temp0);
    }
    else
    {
      op->vtkTransformTextureCoords::SetFlipS(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_GetFlipS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFlipS() :
      op->vtkTransformTextureCoords::GetFlipS());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_FlipSOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipSOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipSOn();
    }
    else
    {
      op->vtkTransformTextureCoords::FlipSOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_FlipSOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipSOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipSOff();
    }
    else
    {
      op->vtkTransformTextureCoords::FlipSOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_SetFlipT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlipT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFlipT(temp0);
    }
    else
    {
      op->vtkTransformTextureCoords::SetFlipT(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_GetFlipT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFlipT() :
      op->vtkTransformTextureCoords::GetFlipT());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_FlipTOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipTOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipTOn();
    }
    else
    {
      op->vtkTransformTextureCoords::FlipTOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_FlipTOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipTOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipTOff();
    }
    else
    {
      op->vtkTransformTextureCoords::FlipTOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTransformTextureCoords_Methods[] = {
  {"IsTypeOf", PyvtkTransformTextureCoords_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTransformTextureCoords_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTransformTextureCoords_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTransformTextureCoords\nC++: static vtkTransformTextureCoords *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTransformTextureCoords_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTransformTextureCoords\nC++: vtkTransformTextureCoords *NewInstance()\n\n"},
  {"SetPosition", PyvtkTransformTextureCoords_SetPosition, METH_VARARGS,
   "V.SetPosition(float, float, float)\nC++: void SetPosition(double, double, double)\nV.SetPosition((float, float, float))\nC++: void SetPosition(double a[3])\n\n"},
  {"GetPosition", PyvtkTransformTextureCoords_GetPosition, METH_VARARGS,
   "V.GetPosition() -> (float, float, float)\nC++: double *GetPosition()\n\nSet/Get the position of the texture map. Setting the position\ntranslates the texture map by the amount specified.\n"},
  {"AddPosition", PyvtkTransformTextureCoords_AddPosition, METH_VARARGS,
   "V.AddPosition(float, float, float)\nC++: void AddPosition(double deltaR, double deltaS, double deltaT)\nV.AddPosition([float, float, float])\nC++: void AddPosition(double deltaPosition[3])\n\nIncrementally change the position of the texture map (i.e., does\na translate or shift of the texture coordinates).\n"},
  {"SetScale", PyvtkTransformTextureCoords_SetScale, METH_VARARGS,
   "V.SetScale(float, float, float)\nC++: void SetScale(double, double, double)\nV.SetScale((float, float, float))\nC++: void SetScale(double a[3])\n\n"},
  {"GetScale", PyvtkTransformTextureCoords_GetScale, METH_VARARGS,
   "V.GetScale() -> (float, float, float)\nC++: double *GetScale()\n\nSet/Get the scale of the texture map. Scaling in performed\nindependently on the r, s and t axes.\n"},
  {"SetOrigin", PyvtkTransformTextureCoords_SetOrigin, METH_VARARGS,
   "V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {"GetOrigin", PyvtkTransformTextureCoords_GetOrigin, METH_VARARGS,
   "V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\nSet/Get the origin of the texture map. This is the point about\nwhich the texture map is flipped (e.g., rotated). Since a typical\ntexture map ranges from (0,1) in the r-s-t coordinates, the\ndefault origin is set at (0.5,0.5,0.5).\n"},
  {"SetFlipR", PyvtkTransformTextureCoords_SetFlipR, METH_VARARGS,
   "V.SetFlipR(int)\nC++: virtual void SetFlipR(vtkTypeBool _arg)\n\nBoolean indicates whether the texture map should be flipped\naround the s-axis. Note that the flips occur around the texture\norigin.\n"},
  {"GetFlipR", PyvtkTransformTextureCoords_GetFlipR, METH_VARARGS,
   "V.GetFlipR() -> int\nC++: virtual vtkTypeBool GetFlipR()\n\nBoolean indicates whether the texture map should be flipped\naround the s-axis. Note that the flips occur around the texture\norigin.\n"},
  {"FlipROn", PyvtkTransformTextureCoords_FlipROn, METH_VARARGS,
   "V.FlipROn()\nC++: virtual void FlipROn()\n\nBoolean indicates whether the texture map should be flipped\naround the s-axis. Note that the flips occur around the texture\norigin.\n"},
  {"FlipROff", PyvtkTransformTextureCoords_FlipROff, METH_VARARGS,
   "V.FlipROff()\nC++: virtual void FlipROff()\n\nBoolean indicates whether the texture map should be flipped\naround the s-axis. Note that the flips occur around the texture\norigin.\n"},
  {"SetFlipS", PyvtkTransformTextureCoords_SetFlipS, METH_VARARGS,
   "V.SetFlipS(int)\nC++: virtual void SetFlipS(vtkTypeBool _arg)\n\nBoolean indicates whether the texture map should be flipped\naround the s-axis. Note that the flips occur around the texture\norigin.\n"},
  {"GetFlipS", PyvtkTransformTextureCoords_GetFlipS, METH_VARARGS,
   "V.GetFlipS() -> int\nC++: virtual vtkTypeBool GetFlipS()\n\nBoolean indicates whether the texture map should be flipped\naround the s-axis. Note that the flips occur around the texture\norigin.\n"},
  {"FlipSOn", PyvtkTransformTextureCoords_FlipSOn, METH_VARARGS,
   "V.FlipSOn()\nC++: virtual void FlipSOn()\n\nBoolean indicates whether the texture map should be flipped\naround the s-axis. Note that the flips occur around the texture\norigin.\n"},
  {"FlipSOff", PyvtkTransformTextureCoords_FlipSOff, METH_VARARGS,
   "V.FlipSOff()\nC++: virtual void FlipSOff()\n\nBoolean indicates whether the texture map should be flipped\naround the s-axis. Note that the flips occur around the texture\norigin.\n"},
  {"SetFlipT", PyvtkTransformTextureCoords_SetFlipT, METH_VARARGS,
   "V.SetFlipT(int)\nC++: virtual void SetFlipT(vtkTypeBool _arg)\n\nBoolean indicates whether the texture map should be flipped\naround the t-axis. Note that the flips occur around the texture\norigin.\n"},
  {"GetFlipT", PyvtkTransformTextureCoords_GetFlipT, METH_VARARGS,
   "V.GetFlipT() -> int\nC++: virtual vtkTypeBool GetFlipT()\n\nBoolean indicates whether the texture map should be flipped\naround the t-axis. Note that the flips occur around the texture\norigin.\n"},
  {"FlipTOn", PyvtkTransformTextureCoords_FlipTOn, METH_VARARGS,
   "V.FlipTOn()\nC++: virtual void FlipTOn()\n\nBoolean indicates whether the texture map should be flipped\naround the t-axis. Note that the flips occur around the texture\norigin.\n"},
  {"FlipTOff", PyvtkTransformTextureCoords_FlipTOff, METH_VARARGS,
   "V.FlipTOff()\nC++: virtual void FlipTOff()\n\nBoolean indicates whether the texture map should be flipped\naround the t-axis. Note that the flips occur around the texture\norigin.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTransformTextureCoords_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersTexturePython.vtkTransformTextureCoords", // tp_name
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
  PyvtkTransformTextureCoords_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTransformTextureCoords_StaticNew()
{
  return vtkTransformTextureCoords::New();
}

PyObject *PyvtkTransformTextureCoords_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTransformTextureCoords_Type, PyvtkTransformTextureCoords_Methods,
    "vtkTransformTextureCoords",
 &PyvtkTransformTextureCoords_StaticNew);

  PyTypeObject *pytype = &PyvtkTransformTextureCoords_Type;

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

void PyVTKAddFile_vtkTransformTextureCoords(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTransformTextureCoords_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTransformTextureCoords", o) != 0)
  {
    Py_DECREF(o);
  }

}

