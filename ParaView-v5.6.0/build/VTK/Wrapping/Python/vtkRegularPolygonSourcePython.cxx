// python wrapper for vtkRegularPolygonSource
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
#include "vtkRegularPolygonSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRegularPolygonSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRegularPolygonSource_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkRegularPolygonSource_Doc =
  "vtkRegularPolygonSource - create a regular, n-sided polygon and/or\npolyline\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkRegularPolygonSource is a source object that creates a single\n"
  "n-sided polygon and/or polyline. The polygon is centered at a\n"
  "specified point, orthogonal to a specified normal, and with a\n"
  "circumscribing radius set by the user. The user can also specify the\n"
  "number of sides of the polygon ranging from [3,N].\n\n"
  "This object can be used for seeding streamlines or defining regions\n"
  "for clipping/cutting.\n\n";


static PyObject *
PyvtkRegularPolygonSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRegularPolygonSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRegularPolygonSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRegularPolygonSource *tempr = vtkRegularPolygonSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRegularPolygonSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRegularPolygonSource::NewInstance());

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
PyvtkRegularPolygonSource_SetNumberOfSides(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSides");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSides(temp0);
    }
    else
    {
      op->vtkRegularPolygonSource::SetNumberOfSides(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_GetNumberOfSidesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSidesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSidesMinValue() :
      op->vtkRegularPolygonSource::GetNumberOfSidesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_GetNumberOfSidesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSidesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSidesMaxValue() :
      op->vtkRegularPolygonSource::GetNumberOfSidesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_GetNumberOfSides(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSides");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSides() :
      op->vtkRegularPolygonSource::GetNumberOfSides());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkRegularPolygonSource::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRegularPolygonSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkRegularPolygonSource::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRegularPolygonSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkRegularPolygonSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkRegularPolygonSource_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}



static PyObject *
PyvtkRegularPolygonSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkRegularPolygonSource::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

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
      op->vtkRegularPolygonSource::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRegularPolygonSource_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

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
      op->vtkRegularPolygonSource::SetNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRegularPolygonSource_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkRegularPolygonSource_SetNormal_s1(self, args);
    case 1:
      return PyvtkRegularPolygonSource_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}



static PyObject *
PyvtkRegularPolygonSource_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkRegularPolygonSource::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadius(temp0);
    }
    else
    {
      op->vtkRegularPolygonSource::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkRegularPolygonSource::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_SetGeneratePolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeneratePolygon(temp0);
    }
    else
    {
      op->vtkRegularPolygonSource::SetGeneratePolygon(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_GetGeneratePolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGeneratePolygon() :
      op->vtkRegularPolygonSource::GetGeneratePolygon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_GeneratePolygonOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePolygonOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePolygonOn();
    }
    else
    {
      op->vtkRegularPolygonSource::GeneratePolygonOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_GeneratePolygonOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePolygonOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePolygonOff();
    }
    else
    {
      op->vtkRegularPolygonSource::GeneratePolygonOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_SetGeneratePolyline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePolyline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeneratePolyline(temp0);
    }
    else
    {
      op->vtkRegularPolygonSource::SetGeneratePolyline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_GetGeneratePolyline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePolyline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGeneratePolyline() :
      op->vtkRegularPolygonSource::GetGeneratePolyline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_GeneratePolylineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePolylineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePolylineOn();
    }
    else
    {
      op->vtkRegularPolygonSource::GeneratePolylineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_GeneratePolylineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePolylineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePolylineOff();
    }
    else
    {
      op->vtkRegularPolygonSource::GeneratePolylineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkRegularPolygonSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkRegularPolygonSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRegularPolygonSource_Methods[] = {
  {"IsTypeOf", PyvtkRegularPolygonSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiation, obtaining type and printing\ninstance values.\n"},
  {"IsA", PyvtkRegularPolygonSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiation, obtaining type and printing\ninstance values.\n"},
  {"SafeDownCast", PyvtkRegularPolygonSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRegularPolygonSource\nC++: static vtkRegularPolygonSource *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instantiation, obtaining type and printing\ninstance values.\n"},
  {"NewInstance", PyvtkRegularPolygonSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRegularPolygonSource\nC++: vtkRegularPolygonSource *NewInstance()\n\nStandard methods for instantiation, obtaining type and printing\ninstance values.\n"},
  {"SetNumberOfSides", PyvtkRegularPolygonSource_SetNumberOfSides, METH_VARARGS,
   "V.SetNumberOfSides(int)\nC++: virtual void SetNumberOfSides(int _arg)\n\nSet/Get the number of sides of the polygon. By default, the\nnumber of sides is set to six.\n"},
  {"GetNumberOfSidesMinValue", PyvtkRegularPolygonSource_GetNumberOfSidesMinValue, METH_VARARGS,
   "V.GetNumberOfSidesMinValue() -> int\nC++: virtual int GetNumberOfSidesMinValue()\n\nSet/Get the number of sides of the polygon. By default, the\nnumber of sides is set to six.\n"},
  {"GetNumberOfSidesMaxValue", PyvtkRegularPolygonSource_GetNumberOfSidesMaxValue, METH_VARARGS,
   "V.GetNumberOfSidesMaxValue() -> int\nC++: virtual int GetNumberOfSidesMaxValue()\n\nSet/Get the number of sides of the polygon. By default, the\nnumber of sides is set to six.\n"},
  {"GetNumberOfSides", PyvtkRegularPolygonSource_GetNumberOfSides, METH_VARARGS,
   "V.GetNumberOfSides() -> int\nC++: virtual int GetNumberOfSides()\n\nSet/Get the number of sides of the polygon. By default, the\nnumber of sides is set to six.\n"},
  {"SetCenter", PyvtkRegularPolygonSource_SetCenter, METH_VARARGS,
   "V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {"GetCenter", PyvtkRegularPolygonSource_GetCenter, METH_VARARGS,
   "V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSet/Get the center of the polygon. By default, the center is set\nat the origin (0,0,0).\n"},
  {"SetNormal", PyvtkRegularPolygonSource_SetNormal, METH_VARARGS,
   "V.SetNormal(float, float, float)\nC++: void SetNormal(double, double, double)\nV.SetNormal((float, float, float))\nC++: void SetNormal(double a[3])\n\n"},
  {"GetNormal", PyvtkRegularPolygonSource_GetNormal, METH_VARARGS,
   "V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\n\nSet/Get the normal to the polygon. The ordering of the polygon\nwill be counter-clockwise around the normal (i.e., using the\nright-hand rule). By default, the normal is set to (0,0,1).\n"},
  {"SetRadius", PyvtkRegularPolygonSource_SetRadius, METH_VARARGS,
   "V.SetRadius(float)\nC++: virtual void SetRadius(double _arg)\n\nSet/Get the radius of the polygon. By default, the radius is set\nto 0.5.\n"},
  {"GetRadius", PyvtkRegularPolygonSource_GetRadius, METH_VARARGS,
   "V.GetRadius() -> float\nC++: virtual double GetRadius()\n\nSet/Get the radius of the polygon. By default, the radius is set\nto 0.5.\n"},
  {"SetGeneratePolygon", PyvtkRegularPolygonSource_SetGeneratePolygon, METH_VARARGS,
   "V.SetGeneratePolygon(int)\nC++: virtual void SetGeneratePolygon(vtkTypeBool _arg)\n\nControl whether a polygon is produced. By default,\nGeneratePolygon is enabled.\n"},
  {"GetGeneratePolygon", PyvtkRegularPolygonSource_GetGeneratePolygon, METH_VARARGS,
   "V.GetGeneratePolygon() -> int\nC++: virtual vtkTypeBool GetGeneratePolygon()\n\nControl whether a polygon is produced. By default,\nGeneratePolygon is enabled.\n"},
  {"GeneratePolygonOn", PyvtkRegularPolygonSource_GeneratePolygonOn, METH_VARARGS,
   "V.GeneratePolygonOn()\nC++: virtual void GeneratePolygonOn()\n\nControl whether a polygon is produced. By default,\nGeneratePolygon is enabled.\n"},
  {"GeneratePolygonOff", PyvtkRegularPolygonSource_GeneratePolygonOff, METH_VARARGS,
   "V.GeneratePolygonOff()\nC++: virtual void GeneratePolygonOff()\n\nControl whether a polygon is produced. By default,\nGeneratePolygon is enabled.\n"},
  {"SetGeneratePolyline", PyvtkRegularPolygonSource_SetGeneratePolyline, METH_VARARGS,
   "V.SetGeneratePolyline(int)\nC++: virtual void SetGeneratePolyline(vtkTypeBool _arg)\n\nControl whether a polyline is produced. By default,\nGeneratePolyline is enabled.\n"},
  {"GetGeneratePolyline", PyvtkRegularPolygonSource_GetGeneratePolyline, METH_VARARGS,
   "V.GetGeneratePolyline() -> int\nC++: virtual vtkTypeBool GetGeneratePolyline()\n\nControl whether a polyline is produced. By default,\nGeneratePolyline is enabled.\n"},
  {"GeneratePolylineOn", PyvtkRegularPolygonSource_GeneratePolylineOn, METH_VARARGS,
   "V.GeneratePolylineOn()\nC++: virtual void GeneratePolylineOn()\n\nControl whether a polyline is produced. By default,\nGeneratePolyline is enabled.\n"},
  {"GeneratePolylineOff", PyvtkRegularPolygonSource_GeneratePolylineOff, METH_VARARGS,
   "V.GeneratePolylineOff()\nC++: virtual void GeneratePolylineOff()\n\nControl whether a polyline is produced. By default,\nGeneratePolyline is enabled.\n"},
  {"SetOutputPointsPrecision", PyvtkRegularPolygonSource_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkRegularPolygonSource_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRegularPolygonSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkRegularPolygonSource", // tp_name
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
  PyvtkRegularPolygonSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRegularPolygonSource_StaticNew()
{
  return vtkRegularPolygonSource::New();
}

PyObject *PyvtkRegularPolygonSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRegularPolygonSource_Type, PyvtkRegularPolygonSource_Methods,
    "vtkRegularPolygonSource",
 &PyvtkRegularPolygonSource_StaticNew);

  PyTypeObject *pytype = &PyvtkRegularPolygonSource_Type;

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

void PyVTKAddFile_vtkRegularPolygonSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRegularPolygonSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRegularPolygonSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

