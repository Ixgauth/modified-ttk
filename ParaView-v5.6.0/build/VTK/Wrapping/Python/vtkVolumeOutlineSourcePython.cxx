// python wrapper for vtkVolumeOutlineSource
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
#include "vtkVolumeOutlineSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVolumeOutlineSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVolumeOutlineSource_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkVolumeOutlineSource_Doc =
  "vtkVolumeOutlineSource - outline of volume cropping region\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkVolumeOutlineSource generates a wireframe outline that corresponds\n"
  "to the cropping region of a vtkVolumeMapper.  It requires a\n"
  "vtkVolumeMapper as input.  The GenerateFaces option turns on the\n"
  "solid faces of the outline, and the GenerateScalars option generates\n"
  "color scalars.  When GenerateScalars is on, it is possible to set an\n"
  "\"ActivePlaneId\" value in the range [0..6] to highlight one of the six\n"
  "cropping planes.@par Thanks: Thanks to David Gobbi for contributing\n"
  "this class to VTK.\n\n";


static PyObject *
PyvtkVolumeOutlineSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVolumeOutlineSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeOutlineSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVolumeOutlineSource *tempr = vtkVolumeOutlineSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolumeOutlineSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeOutlineSource::NewInstance());

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
PyvtkVolumeOutlineSource_SetVolumeMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  vtkVolumeMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolumeMapper"))
  {
    if (ap.IsBound())
    {
      op->SetVolumeMapper(temp0);
    }
    else
    {
      op->vtkVolumeOutlineSource::SetVolumeMapper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GetVolumeMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolumeMapper *tempr = (ap.IsBound() ?
      op->GetVolumeMapper() :
      op->vtkVolumeOutlineSource::GetVolumeMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_SetGenerateScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateScalars(temp0);
    }
    else
    {
      op->vtkVolumeOutlineSource::SetGenerateScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GenerateScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateScalarsOn();
    }
    else
    {
      op->vtkVolumeOutlineSource::GenerateScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GenerateScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateScalarsOff();
    }
    else
    {
      op->vtkVolumeOutlineSource::GenerateScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GetGenerateScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateScalars() :
      op->vtkVolumeOutlineSource::GetGenerateScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_SetGenerateOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateOutline(temp0);
    }
    else
    {
      op->vtkVolumeOutlineSource::SetGenerateOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GenerateOutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateOutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateOutlineOn();
    }
    else
    {
      op->vtkVolumeOutlineSource::GenerateOutlineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GenerateOutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateOutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateOutlineOff();
    }
    else
    {
      op->vtkVolumeOutlineSource::GenerateOutlineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GetGenerateOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateOutline() :
      op->vtkVolumeOutlineSource::GetGenerateOutline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_SetGenerateFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateFaces(temp0);
    }
    else
    {
      op->vtkVolumeOutlineSource::SetGenerateFaces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GenerateFacesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFacesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateFacesOn();
    }
    else
    {
      op->vtkVolumeOutlineSource::GenerateFacesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GenerateFacesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFacesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateFacesOff();
    }
    else
    {
      op->vtkVolumeOutlineSource::GenerateFacesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GetGenerateFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateFaces() :
      op->vtkVolumeOutlineSource::GetGenerateFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

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
      op->SetColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkVolumeOutlineSource::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeOutlineSource_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0);
    }
    else
    {
      op->vtkVolumeOutlineSource::SetColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeOutlineSource_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkVolumeOutlineSource_SetColor_s1(self, args);
    case 1:
      return PyvtkVolumeOutlineSource_SetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}



static PyObject *
PyvtkVolumeOutlineSource_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkVolumeOutlineSource::GetColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_SetActivePlaneId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlaneId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlaneId(temp0);
    }
    else
    {
      op->vtkVolumeOutlineSource::SetActivePlaneId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GetActivePlaneId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActivePlaneId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActivePlaneId() :
      op->vtkVolumeOutlineSource::GetActivePlaneId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_SetActivePlaneColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlaneColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

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
      op->SetActivePlaneColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkVolumeOutlineSource::SetActivePlaneColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeOutlineSource_SetActivePlaneColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlaneColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlaneColor(temp0);
    }
    else
    {
      op->vtkVolumeOutlineSource::SetActivePlaneColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeOutlineSource_SetActivePlaneColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkVolumeOutlineSource_SetActivePlaneColor_s1(self, args);
    case 1:
      return PyvtkVolumeOutlineSource_SetActivePlaneColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetActivePlaneColor");
  return nullptr;
}



static PyObject *
PyvtkVolumeOutlineSource_GetActivePlaneColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActivePlaneColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetActivePlaneColor() :
      op->vtkVolumeOutlineSource::GetActivePlaneColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkVolumeOutlineSource_Methods[] = {
  {"IsTypeOf", PyvtkVolumeOutlineSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVolumeOutlineSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVolumeOutlineSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkVolumeOutlineSource\nC++: static vtkVolumeOutlineSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVolumeOutlineSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkVolumeOutlineSource\nC++: vtkVolumeOutlineSource *NewInstance()\n\n"},
  {"SetVolumeMapper", PyvtkVolumeOutlineSource_SetVolumeMapper, METH_VARARGS,
   "V.SetVolumeMapper(vtkVolumeMapper)\nC++: virtual void SetVolumeMapper(vtkVolumeMapper *mapper)\n\nSet the mapper that has the cropping region that the outline will\nbe generated for.  The mapper must have an input, because the\nbounds of the data must be computed in order to generate the\noutline.\n"},
  {"GetVolumeMapper", PyvtkVolumeOutlineSource_GetVolumeMapper, METH_VARARGS,
   "V.GetVolumeMapper() -> vtkVolumeMapper\nC++: vtkVolumeMapper *GetVolumeMapper()\n\nSet the mapper that has the cropping region that the outline will\nbe generated for.  The mapper must have an input, because the\nbounds of the data must be computed in order to generate the\noutline.\n"},
  {"SetGenerateScalars", PyvtkVolumeOutlineSource_SetGenerateScalars, METH_VARARGS,
   "V.SetGenerateScalars(int)\nC++: virtual void SetGenerateScalars(vtkTypeBool _arg)\n\nSet whether to generate color scalars for the output.  By\ndefault, the output has no scalars and the color must be set in\nthe property of the actor.\n"},
  {"GenerateScalarsOn", PyvtkVolumeOutlineSource_GenerateScalarsOn, METH_VARARGS,
   "V.GenerateScalarsOn()\nC++: virtual void GenerateScalarsOn()\n\nSet whether to generate color scalars for the output.  By\ndefault, the output has no scalars and the color must be set in\nthe property of the actor.\n"},
  {"GenerateScalarsOff", PyvtkVolumeOutlineSource_GenerateScalarsOff, METH_VARARGS,
   "V.GenerateScalarsOff()\nC++: virtual void GenerateScalarsOff()\n\nSet whether to generate color scalars for the output.  By\ndefault, the output has no scalars and the color must be set in\nthe property of the actor.\n"},
  {"GetGenerateScalars", PyvtkVolumeOutlineSource_GetGenerateScalars, METH_VARARGS,
   "V.GetGenerateScalars() -> int\nC++: virtual vtkTypeBool GetGenerateScalars()\n\nSet whether to generate color scalars for the output.  By\ndefault, the output has no scalars and the color must be set in\nthe property of the actor.\n"},
  {"SetGenerateOutline", PyvtkVolumeOutlineSource_SetGenerateOutline, METH_VARARGS,
   "V.SetGenerateOutline(int)\nC++: virtual void SetGenerateOutline(vtkTypeBool _arg)\n\nSet whether to generate an outline wherever an input face was cut\nby a plane.  This is on by default.\n"},
  {"GenerateOutlineOn", PyvtkVolumeOutlineSource_GenerateOutlineOn, METH_VARARGS,
   "V.GenerateOutlineOn()\nC++: virtual void GenerateOutlineOn()\n\nSet whether to generate an outline wherever an input face was cut\nby a plane.  This is on by default.\n"},
  {"GenerateOutlineOff", PyvtkVolumeOutlineSource_GenerateOutlineOff, METH_VARARGS,
   "V.GenerateOutlineOff()\nC++: virtual void GenerateOutlineOff()\n\nSet whether to generate an outline wherever an input face was cut\nby a plane.  This is on by default.\n"},
  {"GetGenerateOutline", PyvtkVolumeOutlineSource_GetGenerateOutline, METH_VARARGS,
   "V.GetGenerateOutline() -> int\nC++: virtual vtkTypeBool GetGenerateOutline()\n\nSet whether to generate an outline wherever an input face was cut\nby a plane.  This is on by default.\n"},
  {"SetGenerateFaces", PyvtkVolumeOutlineSource_SetGenerateFaces, METH_VARARGS,
   "V.SetGenerateFaces(int)\nC++: virtual void SetGenerateFaces(vtkTypeBool _arg)\n\nSet whether to generate polygonal faces for the output.  By\ndefault, only lines are generated.  The faces will form a closed,\nwatertight surface.\n"},
  {"GenerateFacesOn", PyvtkVolumeOutlineSource_GenerateFacesOn, METH_VARARGS,
   "V.GenerateFacesOn()\nC++: virtual void GenerateFacesOn()\n\nSet whether to generate polygonal faces for the output.  By\ndefault, only lines are generated.  The faces will form a closed,\nwatertight surface.\n"},
  {"GenerateFacesOff", PyvtkVolumeOutlineSource_GenerateFacesOff, METH_VARARGS,
   "V.GenerateFacesOff()\nC++: virtual void GenerateFacesOff()\n\nSet whether to generate polygonal faces for the output.  By\ndefault, only lines are generated.  The faces will form a closed,\nwatertight surface.\n"},
  {"GetGenerateFaces", PyvtkVolumeOutlineSource_GetGenerateFaces, METH_VARARGS,
   "V.GetGenerateFaces() -> int\nC++: virtual vtkTypeBool GetGenerateFaces()\n\nSet whether to generate polygonal faces for the output.  By\ndefault, only lines are generated.  The faces will form a closed,\nwatertight surface.\n"},
  {"SetColor", PyvtkVolumeOutlineSource_SetColor, METH_VARARGS,
   "V.SetColor(float, float, float)\nC++: void SetColor(double, double, double)\nV.SetColor((float, float, float))\nC++: void SetColor(double a[3])\n\n"},
  {"GetColor", PyvtkVolumeOutlineSource_GetColor, METH_VARARGS,
   "V.GetColor() -> (float, float, float)\nC++: double *GetColor()\n\n"},
  {"SetActivePlaneId", PyvtkVolumeOutlineSource_SetActivePlaneId, METH_VARARGS,
   "V.SetActivePlaneId(int)\nC++: virtual void SetActivePlaneId(int _arg)\n\nSet the active plane, e.g. to display which plane is currently\nbeing modified by an interaction.  Set this to -1 if there is no\nactive plane. The default value is -1.\n"},
  {"GetActivePlaneId", PyvtkVolumeOutlineSource_GetActivePlaneId, METH_VARARGS,
   "V.GetActivePlaneId() -> int\nC++: virtual int GetActivePlaneId()\n\nSet the active plane, e.g. to display which plane is currently\nbeing modified by an interaction.  Set this to -1 if there is no\nactive plane. The default value is -1.\n"},
  {"SetActivePlaneColor", PyvtkVolumeOutlineSource_SetActivePlaneColor, METH_VARARGS,
   "V.SetActivePlaneColor(float, float, float)\nC++: void SetActivePlaneColor(double, double, double)\nV.SetActivePlaneColor((float, float, float))\nC++: void SetActivePlaneColor(double a[3])\n\n"},
  {"GetActivePlaneColor", PyvtkVolumeOutlineSource_GetActivePlaneColor, METH_VARARGS,
   "V.GetActivePlaneColor() -> (float, float, float)\nC++: double *GetActivePlaneColor()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkVolumeOutlineSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumePython.vtkVolumeOutlineSource", // tp_name
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
  PyvtkVolumeOutlineSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVolumeOutlineSource_StaticNew()
{
  return vtkVolumeOutlineSource::New();
}

PyObject *PyvtkVolumeOutlineSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkVolumeOutlineSource_Type, PyvtkVolumeOutlineSource_Methods,
    "vtkVolumeOutlineSource",
 &PyvtkVolumeOutlineSource_StaticNew);

  PyTypeObject *pytype = &PyvtkVolumeOutlineSource_Type;

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

void PyVTKAddFile_vtkVolumeOutlineSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVolumeOutlineSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVolumeOutlineSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

