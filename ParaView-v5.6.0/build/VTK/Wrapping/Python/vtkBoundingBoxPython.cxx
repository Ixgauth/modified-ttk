// python wrapper for vtkBoundingBox
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkBoundingBox.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBoundingBox(PyObject *); }

static const char *PyvtkBoundingBox_Doc =
  "vtkBoundingBox - Fast Simple Class for dealing with 3D bounds\n\n"
  "vtkBoundingBox maintains a 3D axis aligned bounding box.  It is very\n"
  "light weight and many of the member functions are in-lined so it is\n"
  "very fast. It is not derived from vtkObject so it can be allocated on\n"
  "the stack\n\n"
  "@sa\n"
  "vtkBox\n\n"
  "vtkBoundingBox()\n"
  "vtkBoundingBox(const double bounds[6])\n"
  "vtkBoundingBox(double xMin, double xMax, double yMin, double yMax,\n    double zMin, double zMax)\n"
  "vtkBoundingBox(const vtkBoundingBox &bbox)\n";


static PyObject *
PyvtkBoundingBox_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    op->SetBounds(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkBoundingBox_SetBounds_s1(self, args);
    case 6:
      return PyvtkBoundingBox_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}



static PyObject *
PyvtkBoundingBox_SetMinPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetMinPoint(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_SetMinPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->SetMinPoint(temp0);

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
PyvtkBoundingBox_SetMinPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkBoundingBox_SetMinPoint_s1(self, args);
    case 1:
      return PyvtkBoundingBox_SetMinPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMinPoint");
  return nullptr;
}



static PyObject *
PyvtkBoundingBox_SetMaxPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetMaxPoint(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_SetMaxPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->SetMaxPoint(temp0);

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
PyvtkBoundingBox_SetMaxPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkBoundingBox_SetMaxPoint_s1(self, args);
    case 1:
      return PyvtkBoundingBox_SetMaxPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaxPoint");
  return nullptr;
}



static PyObject *
PyvtkBoundingBox_IsValid_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValid");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->IsValid();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_IsValid_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsValid");

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    int tempr = vtkBoundingBox::IsValid(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_IsValid(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkBoundingBox_IsValid_s1(self, args);
    case 1:
      return PyvtkBoundingBox_IsValid_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsValid");
  return nullptr;
}



static PyObject *
PyvtkBoundingBox_AddPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->AddPoint(temp0);

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
PyvtkBoundingBox_AddPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->AddPoint(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_AddPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkBoundingBox_AddPoint_s1(self, args);
    case 3:
      return PyvtkBoundingBox_AddPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddPoint");
  return nullptr;
}



static PyObject *
PyvtkBoundingBox_AddBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBox");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  vtkBoundingBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkBoundingBox"))
  {
    op->AddBox(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkBoundingBox_AddBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBounds");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    op->AddBounds(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingBox_IntersectBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectBox");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  vtkBoundingBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkBoundingBox"))
  {
    int tempr = op->IntersectBox(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkBoundingBox_Intersects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Intersects");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  vtkBoundingBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkBoundingBox"))
  {
    int tempr = op->Intersects(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkBoundingBox_IntersectPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectPlane");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    bool tempr = op->IntersectPlane(temp0, temp1);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingBox_Contains(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contains");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  vtkBoundingBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkBoundingBox"))
  {
    int tempr = op->Contains(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkBoundingBox_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetBounds(temp0);

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
PyvtkBoundingBox_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    op->GetBounds(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkBoundingBox_GetBounds_s1(self, args);
    case 6:
      return PyvtkBoundingBox_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkBoundingBox_GetBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBound");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = op->GetBound(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingBox_GetMinPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = op->GetMinPoint();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_GetMinPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->GetMinPoint(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_GetMinPoint_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetMinPoint(temp0);

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
PyvtkBoundingBox_GetMinPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkBoundingBox_GetMinPoint_s1(self, args);
    case 3:
      return PyvtkBoundingBox_GetMinPoint_s2(self, args);
    case 1:
      return PyvtkBoundingBox_GetMinPoint_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetMinPoint");
  return nullptr;
}



static PyObject *
PyvtkBoundingBox_GetMaxPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = op->GetMaxPoint();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_GetMaxPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->GetMaxPoint(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_GetMaxPoint_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetMaxPoint(temp0);

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
PyvtkBoundingBox_GetMaxPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkBoundingBox_GetMaxPoint_s1(self, args);
    case 3:
      return PyvtkBoundingBox_GetMaxPoint_s2(self, args);
    case 1:
      return PyvtkBoundingBox_GetMaxPoint_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetMaxPoint");
  return nullptr;
}



static PyObject *
PyvtkBoundingBox_GetCorner(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCorner");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    op->GetCorner(temp0, temp1);

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingBox_ContainsPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContainsPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = op->ContainsPoint(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_ContainsPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContainsPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = op->ContainsPoint(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_ContainsPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkBoundingBox_ContainsPoint_s1(self, args);
    case 3:
      return PyvtkBoundingBox_ContainsPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ContainsPoint");
  return nullptr;
}



static PyObject *
PyvtkBoundingBox_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetCenter(temp0);

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
PyvtkBoundingBox_GetLengths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLengths");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetLengths(temp0);

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
PyvtkBoundingBox_GetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = op->GetLength(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingBox_GetMaxLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLength");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->GetMaxLength();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingBox_GetDiagonalLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiagonalLength");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->GetDiagonalLength();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingBox_Inflate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inflate");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->Inflate(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_Inflate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inflate");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->Inflate(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_Inflate_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inflate");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Inflate();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_Inflate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkBoundingBox_Inflate_s1(self, args);
    case 3:
      return PyvtkBoundingBox_Inflate_s2(self, args);
    case 0:
      return PyvtkBoundingBox_Inflate_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Inflate");
  return nullptr;
}



static PyObject *
PyvtkBoundingBox_Scale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->Scale(temp0);

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
PyvtkBoundingBox_Scale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->Scale(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_Scale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkBoundingBox_Scale_s1(self, args);
    case 3:
      return PyvtkBoundingBox_Scale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Scale");
  return nullptr;
}



static PyObject *
PyvtkBoundingBox_ScaleAboutCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleAboutCenter");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->ScaleAboutCenter(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_ScaleAboutCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleAboutCenter");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->ScaleAboutCenter(temp0);

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
PyvtkBoundingBox_ScaleAboutCenter_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleAboutCenter");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->ScaleAboutCenter(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBoundingBox_ScaleAboutCenter_Methods[] = {
  {nullptr, PyvtkBoundingBox_ScaleAboutCenter_s1, METH_VARARGS,
   "@d"},
  {nullptr, PyvtkBoundingBox_ScaleAboutCenter_s2, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkBoundingBox_ScaleAboutCenter(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBoundingBox_ScaleAboutCenter_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkBoundingBox_ScaleAboutCenter_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ScaleAboutCenter");
  return nullptr;
}



static PyObject *
PyvtkBoundingBox_ComputeDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeDivisions");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  vtkIdType temp0;
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  const size_t size2 = 3;
  int temp2[3];
  int save2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    vtkIdType tempr = op->ComputeDivisions(temp0, temp1, temp2);

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingBox_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Reset();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBoundingBox_Methods[] = {
  {"SetBounds", PyvtkBoundingBox_SetBounds, METH_VARARGS,
   "V.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(const double bounds[6])\nV.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double xMin, double xMax, double yMin,\n    double yMax, double zMin, double zMax)\n\nSet the bounds explicitly of the box (using the VTK convention\nfor representing a bounding box).  Returns 1 if the box was\nchanged else 0.\n"},
  {"SetMinPoint", PyvtkBoundingBox_SetMinPoint, METH_VARARGS,
   "V.SetMinPoint(float, float, float)\nC++: void SetMinPoint(double x, double y, double z)\nV.SetMinPoint([float, float, float])\nC++: void SetMinPoint(double p[3])\n\nSet the minimum point of the bounding box - if the min point is\ngreater than the max point then the max point will also be\nchanged.\n"},
  {"SetMaxPoint", PyvtkBoundingBox_SetMaxPoint, METH_VARARGS,
   "V.SetMaxPoint(float, float, float)\nC++: void SetMaxPoint(double x, double y, double z)\nV.SetMaxPoint([float, float, float])\nC++: void SetMaxPoint(double p[3])\n\nSet the maximum point of the bounding box - if the max point is\nless than the min point then the min point will also be changed.\n"},
  {"IsValid", PyvtkBoundingBox_IsValid, METH_VARARGS,
   "V.IsValid() -> int\nC++: int IsValid()\nV.IsValid((float, float, float, float, float, float)) -> int\nC++: static int IsValid(const double bounds[6])\n\nReturns 1 if the bounds have been set and 0 if the box is in its\ninitialized state which is an inverted state.\n"},
  {"AddPoint", PyvtkBoundingBox_AddPoint, METH_VARARGS,
   "V.AddPoint([float, float, float])\nC++: void AddPoint(double p[3])\nV.AddPoint(float, float, float)\nC++: void AddPoint(double px, double py, double pz)\n\nChange bounding box so it includes the point p.  Note that the\nbounding box may have 0 volume if its bounds were just\ninitialized.\n"},
  {"AddBox", PyvtkBoundingBox_AddBox, METH_VARARGS,
   "V.AddBox(vtkBoundingBox)\nC++: void AddBox(const vtkBoundingBox &bbox)\n\nChange the bounding box to be the union of itself and the\nspecified bbox.\n"},
  {"AddBounds", PyvtkBoundingBox_AddBounds, METH_VARARGS,
   "V.AddBounds((float, ...))\nC++: void AddBounds(const double bounds[])\n\nAdjust the bounding box so it contains the specified bounds\n(defined by the VTK representation (xmin,xmax, ymin,ymax,\nzmin,zmax).\n"},
  {"IntersectBox", PyvtkBoundingBox_IntersectBox, METH_VARARGS,
   "V.IntersectBox(vtkBoundingBox) -> int\nC++: int IntersectBox(const vtkBoundingBox &bbox)\n\nIntersect this box with bbox. The method returns 1 if both boxes\nare valid and they do have overlap else it will return 0.  If 0\nis returned the box has not been modified.\n"},
  {"Intersects", PyvtkBoundingBox_Intersects, METH_VARARGS,
   "V.Intersects(vtkBoundingBox) -> int\nC++: int Intersects(const vtkBoundingBox &bbox)\n\nReturns 1 if the boxes intersect else returns 0.\n"},
  {"IntersectPlane", PyvtkBoundingBox_IntersectPlane, METH_VARARGS,
   "V.IntersectPlane([float, float, float], [float, float, float])\n    -> bool\nC++: bool IntersectPlane(double origin[3], double normal[3])\n\nIntersect this box with the half space defined by plane.  Returns\ntrue if there is intersection---which implies that the box has\nbeen modified Returns false otherwise.\n"},
  {"Contains", PyvtkBoundingBox_Contains, METH_VARARGS,
   "V.Contains(vtkBoundingBox) -> int\nC++: int Contains(const vtkBoundingBox &bbox)\n\nReturns 1 if the min and max points of bbox are contained within\nthe bounds of the specified box, else returns 0.\n"},
  {"GetBounds", PyvtkBoundingBox_GetBounds, METH_VARARGS,
   "V.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\nV.GetBounds(float, float, float, float, float, float)\nC++: void GetBounds(double &xMin, double &xMax, double &yMin,\n    double &yMax, double &zMin, double &zMax)\n\nGet the bounds of the box (defined by VTK style).\n"},
  {"GetBound", PyvtkBoundingBox_GetBound, METH_VARARGS,
   "V.GetBound(int) -> float\nC++: double GetBound(int i)\n\nReturn the ith bounds of the box (defined by VTK style).\n"},
  {"GetMinPoint", PyvtkBoundingBox_GetMinPoint, METH_VARARGS,
   "V.GetMinPoint() -> (float, float, float)\nC++: const double *GetMinPoint()\nV.GetMinPoint(float, float, float)\nC++: void GetMinPoint(double &x, double &y, double &z)\nV.GetMinPoint([float, float, float])\nC++: void GetMinPoint(double x[3])\n\nGet the minimum point of the bounding box.\n"},
  {"GetMaxPoint", PyvtkBoundingBox_GetMaxPoint, METH_VARARGS,
   "V.GetMaxPoint() -> (float, float, float)\nC++: const double *GetMaxPoint()\nV.GetMaxPoint(float, float, float)\nC++: void GetMaxPoint(double &x, double &y, double &z)\nV.GetMaxPoint([float, float, float])\nC++: void GetMaxPoint(double x[3])\n\nGet the maximum point of the bounding box.\n"},
  {"GetCorner", PyvtkBoundingBox_GetCorner, METH_VARARGS,
   "V.GetCorner(int, [float, float, float])\nC++: void GetCorner(int corner, double p[3])\n\nGet the ith corner of the bounding box. The points are ordered\nwith i, then j, then k increasing.\n"},
  {"ContainsPoint", PyvtkBoundingBox_ContainsPoint, METH_VARARGS,
   "V.ContainsPoint([float, float, float]) -> int\nC++: int ContainsPoint(double p[3])\nV.ContainsPoint(float, float, float) -> int\nC++: int ContainsPoint(double px, double py, double pz)\n\nReturns 1 if the point is contained in the box else 0.\n"},
  {"GetCenter", PyvtkBoundingBox_GetCenter, METH_VARARGS,
   "V.GetCenter([float, float, float])\nC++: void GetCenter(double center[3])\n\nGet the center of the bounding box.\n"},
  {"GetLengths", PyvtkBoundingBox_GetLengths, METH_VARARGS,
   "V.GetLengths([float, float, float])\nC++: void GetLengths(double lengths[3])\n\nGet the length of each sode of the box.\n"},
  {"GetLength", PyvtkBoundingBox_GetLength, METH_VARARGS,
   "V.GetLength(int) -> float\nC++: double GetLength(int i)\n\nReturn the length of the bounding box in the ith direction.\n"},
  {"GetMaxLength", PyvtkBoundingBox_GetMaxLength, METH_VARARGS,
   "V.GetMaxLength() -> float\nC++: double GetMaxLength()\n\nReturn the maximum length of the box.\n"},
  {"GetDiagonalLength", PyvtkBoundingBox_GetDiagonalLength, METH_VARARGS,
   "V.GetDiagonalLength() -> float\nC++: double GetDiagonalLength()\n\nReturn the length of the diagonal.\n\\pre not_empty: this->IsValid()\n"},
  {"Inflate", PyvtkBoundingBox_Inflate, METH_VARARGS,
   "V.Inflate(float)\nC++: void Inflate(double delta)\nV.Inflate(float, float, float)\nC++: void Inflate(double deltaX, double deltaY, double deltaZ)\nV.Inflate()\nC++: void Inflate()\n\nExpand the bounding box. Inflate(delta) expands by delta on each\nside, the box will grow by 2*delta in x, y, and z.\nInflate(dx,dy,dz) expands by the given amounts in each of the x,\ny, z directions. Finally, Inflate() expands the bounds so that it\nhas non-zero volume. Edges that are inflated are adjusted 1% of\nthe longest edge. Or if an edge is zero length, the bounding box\nis inflated by 1 unit in that direction.\n"},
  {"Scale", PyvtkBoundingBox_Scale, METH_VARARGS,
   "V.Scale([float, float, float])\nC++: void Scale(double s[3])\nV.Scale(float, float, float)\nC++: void Scale(double sx, double sy, double sz)\n\nScale each dimension of the box by some given factor. If the box\nis not valid, it stays unchanged. If the scalar factor is\nnegative, bounds are flipped: for example, if (xMin,xMax)=(-2,4)\nand sx=-3, (xMin,xMax) becomes (-12,6).\n"},
  {"ScaleAboutCenter", PyvtkBoundingBox_ScaleAboutCenter, METH_VARARGS,
   "V.ScaleAboutCenter(float)\nC++: void ScaleAboutCenter(double s)\nV.ScaleAboutCenter([float, float, float])\nC++: void ScaleAboutCenter(double s[3])\nV.ScaleAboutCenter(float, float, float)\nC++: void ScaleAboutCenter(double sx, double sy, double sz)\n\nScale each dimension of the box by some given factor, with the\norigin of the bounding box the center of the scaling. If the box\nis not valid, it is not changed.\n"},
  {"ComputeDivisions", PyvtkBoundingBox_ComputeDivisions, METH_VARARGS,
   "V.ComputeDivisions(int, [float, float, float, float, float,\n    float], [int, int, int]) -> int\nC++: vtkIdType ComputeDivisions(vtkIdType totalBins,\n    double bounds[6], int divs[3])\n\nCompute the number of divisions in the z-y-z directions given a\ntarget number of total bins (i.e., product of divisions in the\nx-y-z directions). The computation is done in such a way as to\ncreate near cuboid bins. Also note that the returned bounds may\nbe different than the bounds defined in this class, as the bounds\nin the z-y-z directions can never be <= 0. Note that the total\nnumber of divisions (divs[0]*divs[1]*divs[2]) is guaranteed to be\nsmaller than the target number of bins.\n"},
  {"Reset", PyvtkBoundingBox_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nReturns the box to its initialized state.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkBoundingBox_vtkBoundingBox_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkBoundingBox");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkBoundingBox *op = new vtkBoundingBox();

    result = PyVTKSpecialObject_New("vtkBoundingBox", op);
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_vtkBoundingBox_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkBoundingBox");

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkBoundingBox *op = new vtkBoundingBox(temp0);

    result = PyVTKSpecialObject_New("vtkBoundingBox", op);
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_vtkBoundingBox_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkBoundingBox");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    vtkBoundingBox *op = new vtkBoundingBox(temp0, temp1, temp2, temp3, temp4, temp5);

    result = PyVTKSpecialObject_New("vtkBoundingBox", op);
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_vtkBoundingBox_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkBoundingBox");

  vtkBoundingBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkBoundingBox"))
  {
    vtkBoundingBox *op = new vtkBoundingBox(*temp0);

    result = PyVTKSpecialObject_New("vtkBoundingBox", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkBoundingBox_vtkBoundingBox_Methods[] = {
  {nullptr, PyvtkBoundingBox_vtkBoundingBox_s2, METH_VARARGS,
   "@P *d"},
  {nullptr, PyvtkBoundingBox_vtkBoundingBox_s4, METH_VARARGS,
   "@W vtkBoundingBox"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkBoundingBox_vtkBoundingBox(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBoundingBox_vtkBoundingBox_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkBoundingBox_vtkBoundingBox_s1(self, args);
    case 6:
      return PyvtkBoundingBox_vtkBoundingBox_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkBoundingBox");
  return nullptr;
}


static PyObject *
PyvtkBoundingBox_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkBoundingBox_vtkBoundingBox(nullptr, args);
}

static void PyvtkBoundingBox_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkBoundingBox *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static int PyvtkBoundingBox_CheckExact(PyObject *ob);

static PyObject *PyvtkBoundingBox_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkBoundingBox *so1 = nullptr;
  const vtkBoundingBox *so2 = nullptr;
  int result = -1;

  if (PyvtkBoundingBox_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkBoundingBox *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkBoundingBox *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkBoundingBox", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkBoundingBox_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkBoundingBox *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkBoundingBox *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkBoundingBox", &n2));
    if (so2 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  switch (opid)
  {
    case Py_LT:
      break;
    case Py_LE:
      break;
    case Py_EQ:
      result = ((*so1) == (*so2));
      break;
    case Py_NE:
      result = ((*so1) != (*so2));
      break;
    case Py_GT:
      break;
    case Py_GE:
      break;
  }

  if (n1)
  {
    Py_DECREF(n1);
  }
  else if (n2)
  {
    Py_DECREF(n2);
  }

  if (result == -1)
  {
    PyErr_SetString(PyExc_TypeError, "operation not available");
    return nullptr;
  }

  // avoids aliasing issues with Py_INCREF(Py_False)
  return PyBool_FromLong((long)result);
}

static Py_hash_t PyvtkBoundingBox_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkBoundingBox_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkBoundingBox", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkBoundingBox_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkBoundingBox_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkBoundingBox_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkBoundingBox_RichCompare, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkBoundingBox_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkBoundingBox_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkBoundingBox_Type);
}

static void *PyvtkBoundingBox_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkBoundingBox(*static_cast<const vtkBoundingBox*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBoundingBox_TypeNew(); }

PyObject *PyvtkBoundingBox_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkBoundingBox_Type,
    PyvtkBoundingBox_Methods,
    PyvtkBoundingBox_vtkBoundingBox_Methods,
    &PyvtkBoundingBox_CCopy);

  PyTypeObject *pytype = &PyvtkBoundingBox_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBoundingBox(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBoundingBox_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkBoundingBox", o) != 0)
  {
    Py_DECREF(o);
  }

}

