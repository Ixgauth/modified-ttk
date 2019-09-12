// python wrapper for vtkBooleanTexture
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
#include "vtkBooleanTexture.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBooleanTexture(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBooleanTexture_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkBooleanTexture_Doc =
  "vtkBooleanTexture - generate 2D texture map based on combinations of\ninside, outside, and on region boundary\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkBooleanTexture is a filter to generate a 2D texture map based on\n"
  "combinations of inside, outside, and on region boundary. The \"region\"\n"
  "is implicitly represented via 2D texture coordinates. These texture\n"
  "coordinates are normally generated using a filter like\n"
  "vtkImplicitTextureCoords, which generates the texture coordinates for\n"
  "any implicit function.\n\n"
  "vtkBooleanTexture generates the map according to the s-t texture\n"
  "coordinates plus the notion of being in, on, or outside of a region.\n"
  "An in region is when the texture coordinate is between\n"
  "(0,0.5-thickness/2).  An out region is where the texture coordinate\n"
  "is (0.5+thickness/2). An on region is between\n"
  "(0.5-thickness/2,0.5+thickness/2). The combination in, on, and out\n"
  "for each of the s-t texture coordinates results in 16 possible\n"
  "combinations (see text). For each combination, a different value of\n"
  "intensity and transparency can be assigned. To assign maximum\n"
  "intensity and/or opacity use the value 255. A minimum value of 0\n"
  "results in a black region (for intensity) and a fully transparent\n"
  "region (for transparency).\n\n"
  "@sa\n"
  "vtkImplicitTextureCoords vtkThresholdTextureCoords\n\n";


static PyObject *
PyvtkBooleanTexture_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBooleanTexture::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBooleanTexture::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBooleanTexture *tempr = vtkBooleanTexture::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBooleanTexture *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBooleanTexture::NewInstance());

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
PyvtkBooleanTexture_SetXSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXSize(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetXSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_GetXSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXSize() :
      op->vtkBooleanTexture::GetXSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetYSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYSize(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetYSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_GetYSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYSize() :
      op->vtkBooleanTexture::GetYSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThickness(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_GetThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThickness() :
      op->vtkBooleanTexture::GetThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetInIn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInIn(temp0, temp1);
    }
    else
    {
      op->vtkBooleanTexture::SetInIn(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetInIn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  const size_t size0 = 2;
  unsigned char temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetInIn(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetInIn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetInIn(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBooleanTexture_SetInIn_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetInIn_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInIn");
  return nullptr;
}



static PyObject *
PyvtkBooleanTexture_GetInIn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetInIn() :
      op->vtkBooleanTexture::GetInIn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetInOut_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInOut(temp0, temp1);
    }
    else
    {
      op->vtkBooleanTexture::SetInOut(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetInOut_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  const size_t size0 = 2;
  unsigned char temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetInOut(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetInOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetInOut(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBooleanTexture_SetInOut_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetInOut_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInOut");
  return nullptr;
}



static PyObject *
PyvtkBooleanTexture_GetInOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetInOut() :
      op->vtkBooleanTexture::GetInOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetOutIn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOutIn(temp0, temp1);
    }
    else
    {
      op->vtkBooleanTexture::SetOutIn(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOutIn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  const size_t size0 = 2;
  unsigned char temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutIn(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetOutIn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOutIn(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBooleanTexture_SetOutIn_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetOutIn_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutIn");
  return nullptr;
}



static PyObject *
PyvtkBooleanTexture_GetOutIn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetOutIn() :
      op->vtkBooleanTexture::GetOutIn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetOutOut_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOutOut(temp0, temp1);
    }
    else
    {
      op->vtkBooleanTexture::SetOutOut(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOutOut_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  const size_t size0 = 2;
  unsigned char temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutOut(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetOutOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOutOut(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBooleanTexture_SetOutOut_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetOutOut_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutOut");
  return nullptr;
}



static PyObject *
PyvtkBooleanTexture_GetOutOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetOutOut() :
      op->vtkBooleanTexture::GetOutOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetOnOn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOnOn(temp0, temp1);
    }
    else
    {
      op->vtkBooleanTexture::SetOnOn(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOnOn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  const size_t size0 = 2;
  unsigned char temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOnOn(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetOnOn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOnOn(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBooleanTexture_SetOnOn_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetOnOn_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOnOn");
  return nullptr;
}



static PyObject *
PyvtkBooleanTexture_GetOnOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetOnOn() :
      op->vtkBooleanTexture::GetOnOn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetOnIn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOnIn(temp0, temp1);
    }
    else
    {
      op->vtkBooleanTexture::SetOnIn(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOnIn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  const size_t size0 = 2;
  unsigned char temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOnIn(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetOnIn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOnIn(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBooleanTexture_SetOnIn_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetOnIn_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOnIn");
  return nullptr;
}



static PyObject *
PyvtkBooleanTexture_GetOnIn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetOnIn() :
      op->vtkBooleanTexture::GetOnIn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetOnOut_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOnOut(temp0, temp1);
    }
    else
    {
      op->vtkBooleanTexture::SetOnOut(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOnOut_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  const size_t size0 = 2;
  unsigned char temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOnOut(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetOnOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOnOut(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBooleanTexture_SetOnOut_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetOnOut_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOnOut");
  return nullptr;
}



static PyObject *
PyvtkBooleanTexture_GetOnOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetOnOut() :
      op->vtkBooleanTexture::GetOnOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetInOn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInOn(temp0, temp1);
    }
    else
    {
      op->vtkBooleanTexture::SetInOn(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetInOn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  const size_t size0 = 2;
  unsigned char temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetInOn(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetInOn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetInOn(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBooleanTexture_SetInOn_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetInOn_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInOn");
  return nullptr;
}



static PyObject *
PyvtkBooleanTexture_GetInOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetInOn() :
      op->vtkBooleanTexture::GetInOn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetOutOn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOutOn(temp0, temp1);
    }
    else
    {
      op->vtkBooleanTexture::SetOutOn(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOutOn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  const size_t size0 = 2;
  unsigned char temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutOn(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetOutOn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOutOn(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBooleanTexture_SetOutOn_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetOutOn_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutOn");
  return nullptr;
}



static PyObject *
PyvtkBooleanTexture_GetOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetOutOn() :
      op->vtkBooleanTexture::GetOutOn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkBooleanTexture_Methods[] = {
  {"IsTypeOf", PyvtkBooleanTexture_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBooleanTexture_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBooleanTexture_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBooleanTexture\nC++: static vtkBooleanTexture *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBooleanTexture_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBooleanTexture\nC++: vtkBooleanTexture *NewInstance()\n\n"},
  {"SetXSize", PyvtkBooleanTexture_SetXSize, METH_VARARGS,
   "V.SetXSize(int)\nC++: virtual void SetXSize(int _arg)\n\nSet the X texture map dimension.\n"},
  {"GetXSize", PyvtkBooleanTexture_GetXSize, METH_VARARGS,
   "V.GetXSize() -> int\nC++: virtual int GetXSize()\n\nSet the X texture map dimension.\n"},
  {"SetYSize", PyvtkBooleanTexture_SetYSize, METH_VARARGS,
   "V.SetYSize(int)\nC++: virtual void SetYSize(int _arg)\n\nSet the Y texture map dimension.\n"},
  {"GetYSize", PyvtkBooleanTexture_GetYSize, METH_VARARGS,
   "V.GetYSize() -> int\nC++: virtual int GetYSize()\n\nSet the Y texture map dimension.\n"},
  {"SetThickness", PyvtkBooleanTexture_SetThickness, METH_VARARGS,
   "V.SetThickness(int)\nC++: virtual void SetThickness(int _arg)\n\nSet the thickness of the \"on\" region.\n"},
  {"GetThickness", PyvtkBooleanTexture_GetThickness, METH_VARARGS,
   "V.GetThickness() -> int\nC++: virtual int GetThickness()\n\nSet the thickness of the \"on\" region.\n"},
  {"SetInIn", PyvtkBooleanTexture_SetInIn, METH_VARARGS,
   "V.SetInIn(int, int)\nC++: void SetInIn(unsigned char, unsigned char)\nV.SetInIn((int, int))\nC++: void SetInIn(unsigned char a[2])\n\n"},
  {"GetInIn", PyvtkBooleanTexture_GetInIn, METH_VARARGS,
   "V.GetInIn() -> (int, int)\nC++: unsigned char *GetInIn()\n\nSpecify intensity/transparency for \"in/in\" region.\n"},
  {"SetInOut", PyvtkBooleanTexture_SetInOut, METH_VARARGS,
   "V.SetInOut(int, int)\nC++: void SetInOut(unsigned char, unsigned char)\nV.SetInOut((int, int))\nC++: void SetInOut(unsigned char a[2])\n\n"},
  {"GetInOut", PyvtkBooleanTexture_GetInOut, METH_VARARGS,
   "V.GetInOut() -> (int, int)\nC++: unsigned char *GetInOut()\n\nSpecify intensity/transparency for \"in/out\" region.\n"},
  {"SetOutIn", PyvtkBooleanTexture_SetOutIn, METH_VARARGS,
   "V.SetOutIn(int, int)\nC++: void SetOutIn(unsigned char, unsigned char)\nV.SetOutIn((int, int))\nC++: void SetOutIn(unsigned char a[2])\n\n"},
  {"GetOutIn", PyvtkBooleanTexture_GetOutIn, METH_VARARGS,
   "V.GetOutIn() -> (int, int)\nC++: unsigned char *GetOutIn()\n\nSpecify intensity/transparency for \"out/in\" region.\n"},
  {"SetOutOut", PyvtkBooleanTexture_SetOutOut, METH_VARARGS,
   "V.SetOutOut(int, int)\nC++: void SetOutOut(unsigned char, unsigned char)\nV.SetOutOut((int, int))\nC++: void SetOutOut(unsigned char a[2])\n\n"},
  {"GetOutOut", PyvtkBooleanTexture_GetOutOut, METH_VARARGS,
   "V.GetOutOut() -> (int, int)\nC++: unsigned char *GetOutOut()\n\nSpecify intensity/transparency for \"out/out\" region.\n"},
  {"SetOnOn", PyvtkBooleanTexture_SetOnOn, METH_VARARGS,
   "V.SetOnOn(int, int)\nC++: void SetOnOn(unsigned char, unsigned char)\nV.SetOnOn((int, int))\nC++: void SetOnOn(unsigned char a[2])\n\n"},
  {"GetOnOn", PyvtkBooleanTexture_GetOnOn, METH_VARARGS,
   "V.GetOnOn() -> (int, int)\nC++: unsigned char *GetOnOn()\n\nSpecify intensity/transparency for \"on/on\" region.\n"},
  {"SetOnIn", PyvtkBooleanTexture_SetOnIn, METH_VARARGS,
   "V.SetOnIn(int, int)\nC++: void SetOnIn(unsigned char, unsigned char)\nV.SetOnIn((int, int))\nC++: void SetOnIn(unsigned char a[2])\n\n"},
  {"GetOnIn", PyvtkBooleanTexture_GetOnIn, METH_VARARGS,
   "V.GetOnIn() -> (int, int)\nC++: unsigned char *GetOnIn()\n\nSpecify intensity/transparency for \"on/in\" region.\n"},
  {"SetOnOut", PyvtkBooleanTexture_SetOnOut, METH_VARARGS,
   "V.SetOnOut(int, int)\nC++: void SetOnOut(unsigned char, unsigned char)\nV.SetOnOut((int, int))\nC++: void SetOnOut(unsigned char a[2])\n\n"},
  {"GetOnOut", PyvtkBooleanTexture_GetOnOut, METH_VARARGS,
   "V.GetOnOut() -> (int, int)\nC++: unsigned char *GetOnOut()\n\nSpecify intensity/transparency for \"on/out\" region.\n"},
  {"SetInOn", PyvtkBooleanTexture_SetInOn, METH_VARARGS,
   "V.SetInOn(int, int)\nC++: void SetInOn(unsigned char, unsigned char)\nV.SetInOn((int, int))\nC++: void SetInOn(unsigned char a[2])\n\n"},
  {"GetInOn", PyvtkBooleanTexture_GetInOn, METH_VARARGS,
   "V.GetInOn() -> (int, int)\nC++: unsigned char *GetInOn()\n\nSpecify intensity/transparency for \"in/on\" region.\n"},
  {"SetOutOn", PyvtkBooleanTexture_SetOutOn, METH_VARARGS,
   "V.SetOutOn(int, int)\nC++: void SetOutOn(unsigned char, unsigned char)\nV.SetOutOn((int, int))\nC++: void SetOutOn(unsigned char a[2])\n\n"},
  {"GetOutOn", PyvtkBooleanTexture_GetOutOn, METH_VARARGS,
   "V.GetOutOn() -> (int, int)\nC++: unsigned char *GetOutOn()\n\nSpecify intensity/transparency for \"out/on\" region.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBooleanTexture_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingHybridPython.vtkBooleanTexture", // tp_name
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
  PyvtkBooleanTexture_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBooleanTexture_StaticNew()
{
  return vtkBooleanTexture::New();
}

PyObject *PyvtkBooleanTexture_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBooleanTexture_Type, PyvtkBooleanTexture_Methods,
    "vtkBooleanTexture",
 &PyvtkBooleanTexture_StaticNew);

  PyTypeObject *pytype = &PyvtkBooleanTexture_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBooleanTexture(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBooleanTexture_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBooleanTexture", o) != 0)
  {
    Py_DECREF(o);
  }

}

