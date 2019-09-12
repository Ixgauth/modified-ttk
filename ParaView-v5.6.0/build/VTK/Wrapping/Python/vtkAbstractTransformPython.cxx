// python wrapper for vtkAbstractTransform
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
#include "vtkDataArray.h"
#include "vtkAbstractTransform.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractTransform(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAbstractTransform_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkAbstractTransform_Doc =
  "vtkTransformConcatenationStack - Store a stack of concatenations.\n\n"
  "Superclass: vtkObject\n\n"
  "A helper class (not derived from vtkObject) to store a stack of\n"
  "concatenations.\n\n";


static PyObject *
PyvtkAbstractTransform_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractTransform::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractTransform *tempr = vtkAbstractTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractTransform::NewInstance());

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
PyvtkAbstractTransform_TransformPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->TransformPoint(temp0, temp1);
    }
    else
    {
      op->vtkAbstractTransform::TransformPoint(temp0, temp1);
    }

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
PyvtkAbstractTransform_TransformPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformPoint(temp0, temp1, temp2) :
      op->vtkAbstractTransform::TransformPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractTransform_TransformPoint_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformPoint(temp0) :
      op->vtkAbstractTransform::TransformPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractTransform_TransformPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAbstractTransform_TransformPoint_s1(self, args);
    case 3:
      return PyvtkAbstractTransform_TransformPoint_s2(self, args);
    case 1:
      return PyvtkAbstractTransform_TransformPoint_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformPoint");
  return nullptr;
}



static PyObject *
PyvtkAbstractTransform_TransformFloatPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformFloatPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  float temp0;
  float temp1;
  float temp2;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    float *tempr = (ap.IsBound() ?
      op->TransformFloatPoint(temp0, temp1, temp2) :
      op->vtkAbstractTransform::TransformFloatPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractTransform_TransformFloatPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformFloatPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    float *tempr = (ap.IsBound() ?
      op->TransformFloatPoint(temp0) :
      op->vtkAbstractTransform::TransformFloatPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractTransform_TransformFloatPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAbstractTransform_TransformFloatPoint_s1(self, args);
    case 1:
      return PyvtkAbstractTransform_TransformFloatPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformFloatPoint");
  return nullptr;
}



static PyObject *
PyvtkAbstractTransform_TransformDoublePoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformDoublePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformDoublePoint(temp0, temp1, temp2) :
      op->vtkAbstractTransform::TransformDoublePoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractTransform_TransformDoublePoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformDoublePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformDoublePoint(temp0) :
      op->vtkAbstractTransform::TransformDoublePoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractTransform_TransformDoublePoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAbstractTransform_TransformDoublePoint_s1(self, args);
    case 1:
      return PyvtkAbstractTransform_TransformDoublePoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformDoublePoint");
  return nullptr;
}



static PyObject *
PyvtkAbstractTransform_TransformNormalAtPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformNormalAtPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->TransformNormalAtPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAbstractTransform::TransformNormalAtPoint(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractTransform_TransformNormalAtPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformNormalAtPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformNormalAtPoint(temp0, temp1) :
      op->vtkAbstractTransform::TransformNormalAtPoint(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractTransform_TransformNormalAtPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAbstractTransform_TransformNormalAtPoint_s1(self, args);
    case 2:
      return PyvtkAbstractTransform_TransformNormalAtPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformNormalAtPoint");
  return nullptr;
}



static PyObject *
PyvtkAbstractTransform_TransformDoubleNormalAtPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformDoubleNormalAtPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformDoubleNormalAtPoint(temp0, temp1) :
      op->vtkAbstractTransform::TransformDoubleNormalAtPoint(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractTransform_TransformFloatNormalAtPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformFloatNormalAtPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  const size_t size1 = 3;
  float temp1[3];
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    float *tempr = (ap.IsBound() ?
      op->TransformFloatNormalAtPoint(temp0, temp1) :
      op->vtkAbstractTransform::TransformFloatNormalAtPoint(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractTransform_TransformVectorAtPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformVectorAtPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->TransformVectorAtPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAbstractTransform::TransformVectorAtPoint(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractTransform_TransformVectorAtPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformVectorAtPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformVectorAtPoint(temp0, temp1) :
      op->vtkAbstractTransform::TransformVectorAtPoint(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractTransform_TransformVectorAtPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAbstractTransform_TransformVectorAtPoint_s1(self, args);
    case 2:
      return PyvtkAbstractTransform_TransformVectorAtPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformVectorAtPoint");
  return nullptr;
}



static PyObject *
PyvtkAbstractTransform_TransformDoubleVectorAtPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformDoubleVectorAtPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformDoubleVectorAtPoint(temp0, temp1) :
      op->vtkAbstractTransform::TransformDoubleVectorAtPoint(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractTransform_TransformFloatVectorAtPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformFloatVectorAtPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  const size_t size1 = 3;
  float temp1[3];
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    float *tempr = (ap.IsBound() ?
      op->TransformFloatVectorAtPoint(temp0, temp1) :
      op->vtkAbstractTransform::TransformFloatVectorAtPoint(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractTransform_TransformPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  vtkPoints *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->TransformPoints(temp0, temp1);
    }
    else
    {
      op->vtkAbstractTransform::TransformPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractTransform_GetInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetInverse() :
      op->vtkAbstractTransform::GetInverse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractTransform_SetInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->SetInverse(temp0);
    }
    else
    {
      op->vtkAbstractTransform::SetInverse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Inverse();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractTransform_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkAbstractTransform::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractTransform_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkAbstractTransform::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractTransform_InternalTransformPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    op->InternalTransformPoint(temp0, temp1);

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
PyvtkAbstractTransform_InternalTransformDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  static size_t size2[2] = { 3, 3 };
  double temp2[3][3];
  double save2[3][3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetNArray(*temp2, 2, size2))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(*temp2, *save2, size2[0]*size2[1]);

    op->InternalTransformDerivative(temp0, temp1, temp2);

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(*temp2, *save2, size2[0]*size2[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(2, *temp2, 2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = op->MakeTransform();

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
PyvtkAbstractTransform_CircuitCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CircuitCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    int tempr = (ap.IsBound() ?
      op->CircuitCheck(temp0) :
      op->vtkAbstractTransform::CircuitCheck(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractTransform_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAbstractTransform::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractTransform_Methods[] = {
  {"IsTypeOf", PyvtkAbstractTransform_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractTransform_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractTransform_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAbstractTransform\nC++: static vtkAbstractTransform *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractTransform_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAbstractTransform\nC++: vtkAbstractTransform *NewInstance()\n\n"},
  {"TransformPoint", PyvtkAbstractTransform_TransformPoint, METH_VARARGS,
   "V.TransformPoint((float, float, float), [float, float, float])\nC++: void TransformPoint(const double in[3], double out[3])\nV.TransformPoint(float, float, float) -> (float, float, float)\nC++: double *TransformPoint(double x, double y, double z)\nV.TransformPoint((float, float, float)) -> (float, float, float)\nC++: double *TransformPoint(const double point[3])\n\nApply the transformation to a double-precision coordinate. You\ncan use the same array to store both the input and output point.\n"},
  {"TransformFloatPoint", PyvtkAbstractTransform_TransformFloatPoint, METH_VARARGS,
   "V.TransformFloatPoint(float, float, float) -> (float, float,\n    float)\nC++: float *TransformFloatPoint(float x, float y, float z)\nV.TransformFloatPoint((float, float, float)) -> (float, float,\n    float)\nC++: float *TransformFloatPoint(const float point[3])\n\nApply the transformation to an (x,y,z) coordinate. Use this if\nyou are programming in Python or Java.\n"},
  {"TransformDoublePoint", PyvtkAbstractTransform_TransformDoublePoint, METH_VARARGS,
   "V.TransformDoublePoint(float, float, float) -> (float, float,\n    float)\nC++: double *TransformDoublePoint(double x, double y, double z)\nV.TransformDoublePoint((float, float, float)) -> (float, float,\n    float)\nC++: double *TransformDoublePoint(const double point[3])\n\nApply the transformation to a double-precision (x,y,z)\ncoordinate. Use this if you are programming in Python or Java.\n"},
  {"TransformNormalAtPoint", PyvtkAbstractTransform_TransformNormalAtPoint, METH_VARARGS,
   "V.TransformNormalAtPoint((float, float, float), (float, float,\n    float), [float, float, float])\nC++: void TransformNormalAtPoint(const double point[3],\n    const double in[3], double out[3])\nV.TransformNormalAtPoint((float, float, float), (float, float,\n    float)) -> (float, float, float)\nC++: double *TransformNormalAtPoint(const double point[3],\n    const double normal[3])\n\nApply the transformation to a normal at the specified vertex.  If\nthe transformation is a vtkLinearTransform, you can use\nTransformNormal() instead.\n"},
  {"TransformDoubleNormalAtPoint", PyvtkAbstractTransform_TransformDoubleNormalAtPoint, METH_VARARGS,
   "V.TransformDoubleNormalAtPoint((float, float, float), (float,\n    float, float)) -> (float, float, float)\nC++: double *TransformDoubleNormalAtPoint(const double point[3],\n    const double normal[3])\n\nApply the transformation to a double-precision normal at the\nspecified vertex.  If the transformation is a vtkLinearTransform,\nyou can use TransformDoubleNormal() instead.\n"},
  {"TransformFloatNormalAtPoint", PyvtkAbstractTransform_TransformFloatNormalAtPoint, METH_VARARGS,
   "V.TransformFloatNormalAtPoint((float, float, float), (float,\n    float, float)) -> (float, float, float)\nC++: float *TransformFloatNormalAtPoint(const float point[3],\n    const float normal[3])\n\nApply the transformation to a single-precision normal at the\nspecified vertex.  If the transformation is a vtkLinearTransform,\nyou can use TransformFloatNormal() instead.\n"},
  {"TransformVectorAtPoint", PyvtkAbstractTransform_TransformVectorAtPoint, METH_VARARGS,
   "V.TransformVectorAtPoint((float, float, float), (float, float,\n    float), [float, float, float])\nC++: void TransformVectorAtPoint(const double point[3],\n    const double in[3], double out[3])\nV.TransformVectorAtPoint((float, float, float), (float, float,\n    float)) -> (float, float, float)\nC++: double *TransformVectorAtPoint(const double point[3],\n    const double vector[3])\n\nApply the transformation to a vector at the specified vertex.  If\nthe transformation is a vtkLinearTransform, you can use\nTransformVector() instead.\n"},
  {"TransformDoubleVectorAtPoint", PyvtkAbstractTransform_TransformDoubleVectorAtPoint, METH_VARARGS,
   "V.TransformDoubleVectorAtPoint((float, float, float), (float,\n    float, float)) -> (float, float, float)\nC++: double *TransformDoubleVectorAtPoint(const double point[3],\n    const double vector[3])\n\nApply the transformation to a double-precision vector at the\nspecified vertex.  If the transformation is a vtkLinearTransform,\nyou can use TransformDoubleVector() instead.\n"},
  {"TransformFloatVectorAtPoint", PyvtkAbstractTransform_TransformFloatVectorAtPoint, METH_VARARGS,
   "V.TransformFloatVectorAtPoint((float, float, float), (float,\n    float, float)) -> (float, float, float)\nC++: float *TransformFloatVectorAtPoint(const float point[3],\n    const float vector[3])\n\nApply the transformation to a single-precision vector at the\nspecified vertex.  If the transformation is a vtkLinearTransform,\nyou can use TransformFloatVector() instead.\n"},
  {"TransformPoints", PyvtkAbstractTransform_TransformPoints, METH_VARARGS,
   "V.TransformPoints(vtkPoints, vtkPoints)\nC++: virtual void TransformPoints(vtkPoints *inPts,\n    vtkPoints *outPts)\n\nApply the transformation to a series of points, and append the\nresults to outPts.\n"},
  {"GetInverse", PyvtkAbstractTransform_GetInverse, METH_VARARGS,
   "V.GetInverse() -> vtkAbstractTransform\nC++: vtkAbstractTransform *GetInverse()\n\nGet the inverse of this transform.  If you modify this transform,\nthe returned inverse transform will automatically update.  If you\nwant the inverse of a vtkTransform, you might want to use\nGetLinearInverse() instead which will type cast the result from\nvtkAbstractTransform to vtkLinearTransform.\n"},
  {"SetInverse", PyvtkAbstractTransform_SetInverse, METH_VARARGS,
   "V.SetInverse(vtkAbstractTransform)\nC++: void SetInverse(vtkAbstractTransform *transform)\n\nSet a transformation that this transform will be the inverse of.\nThis transform will automatically update to agree with the\ninverse transform that you set.\n"},
  {"Inverse", PyvtkAbstractTransform_Inverse, METH_VARARGS,
   "V.Inverse()\nC++: virtual void Inverse()\n\nInvert the transformation.\n"},
  {"DeepCopy", PyvtkAbstractTransform_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkAbstractTransform)\nC++: void DeepCopy(vtkAbstractTransform *)\n\nCopy this transform from another of the same type.\n"},
  {"Update", PyvtkAbstractTransform_Update, METH_VARARGS,
   "V.Update()\nC++: void Update()\n\nUpdate the transform to account for any changes which have been\nmade.  You do not have to call this method yourself, it is called\nautomatically whenever the transform needs an update.\n"},
  {"InternalTransformPoint", PyvtkAbstractTransform_InternalTransformPoint, METH_VARARGS,
   "V.InternalTransformPoint((float, float, float), [float, float,\n    float])\nC++: virtual void InternalTransformPoint(const double in[3],\n    double out[3])\n\nThis will calculate the transformation without calling Update.\nMeant for use only within other VTK classes.\n"},
  {"InternalTransformDerivative", PyvtkAbstractTransform_InternalTransformDerivative, METH_VARARGS,
   "V.InternalTransformDerivative((float, float, float), [float,\n    float, float], [[float, float, float], [float, float, float],\n    [float, float, float]])\nC++: virtual void InternalTransformDerivative(const double in[3],\n    double out[3], double derivative[3][3])\n\nThis will transform a point and, at the same time, calculate a\n3x3 Jacobian matrix that provides the partial derivatives of the\ntransformation at that point.  This method does not call Update.\nMeant for use only within other VTK classes.\n"},
  {"MakeTransform", PyvtkAbstractTransform_MakeTransform, METH_VARARGS,
   "V.MakeTransform() -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *MakeTransform()\n\nMake another transform of the same type.\n"},
  {"CircuitCheck", PyvtkAbstractTransform_CircuitCheck, METH_VARARGS,
   "V.CircuitCheck(vtkAbstractTransform) -> int\nC++: virtual int CircuitCheck(vtkAbstractTransform *transform)\n\nCheck for self-reference.  Will return true if concatenating with\nthe specified transform, setting it to be our inverse, or setting\nit to be our input will create a circular reference. CircuitCheck\nis automatically called by SetInput(), SetInverse(), and\nConcatenate(vtkXTransform *).  Avoid using this function, it is\nexperimental.\n"},
  {"GetMTime", PyvtkAbstractTransform_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride GetMTime necessary because of inverse transforms.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAbstractTransform_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonTransformsPython.vtkAbstractTransform", // tp_name
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
  PyvtkAbstractTransform_Doc, // tp_doc
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

PyObject *PyvtkAbstractTransform_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAbstractTransform_Type, PyvtkAbstractTransform_Methods,
    "vtkAbstractTransform",
 nullptr);

  PyTypeObject *pytype = &PyvtkAbstractTransform_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkTransformPair_Doc =
  "vtkTransformPair - no description provided.\n\n"

  "vtkTransformPair()\n"
  "vtkTransformPair(const &vtkTransformPair)\n";


static PyObject *
PyvtkTransformPair_SwapForwardInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapForwardInverse");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTransformPair *op = static_cast<vtkTransformPair *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->SwapForwardInverse();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTransformPair_Methods[] = {
  {"SwapForwardInverse", PyvtkTransformPair_SwapForwardInverse, METH_VARARGS,
   "V.SwapForwardInverse()\nC++: void SwapForwardInverse()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkTransformPair_vtkTransformPair_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTransformPair");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTransformPair *op = new vtkTransformPair();

    result = PyVTKSpecialObject_New("vtkTransformPair", op);
  }

  return result;
}

static PyObject *
PyvtkTransformPair_vtkTransformPair_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTransformPair");

  vtkTransformPair *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTransformPair"))
  {
    vtkTransformPair *op = new vtkTransformPair(*temp0);

    result = PyVTKSpecialObject_New("vtkTransformPair", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTransformPair_vtkTransformPair_Methods[] = {
  {nullptr, PyvtkTransformPair_vtkTransformPair_s2, METH_VARARGS,
   "@W vtkTransformPair"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTransformPair_vtkTransformPair(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkTransformPair_vtkTransformPair_s1(self, args);
    case 1:
      return PyvtkTransformPair_vtkTransformPair_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkTransformPair");
  return nullptr;
}


static PyObject *
PyvtkTransformPair_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkTransformPair_vtkTransformPair(nullptr, args);
}

static void PyvtkTransformPair_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkTransformPair *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkTransformPair_Hash(PyObject *self)
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

static PyTypeObject PyvtkTransformPair_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonTransformsPython.vtkTransformPair", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTransformPair_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkTransformPair_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTransformPair_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
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
  PyvtkTransformPair_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkTransformPair_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkTransformPair(*static_cast<const vtkTransformPair*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTransformPair_TypeNew(); }

PyObject *PyvtkTransformPair_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkTransformPair_Type,
    PyvtkTransformPair_Methods,
    PyvtkTransformPair_vtkTransformPair_Methods,
    &PyvtkTransformPair_CCopy);

  PyTypeObject *pytype = &PyvtkTransformPair_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkTransformConcatenation_Doc =
  "vtkTransformConcatenation - no description provided.\n\n"
;


static PyObject *
PyvtkTransformConcatenation_Concatenate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Concatenate");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTransformConcatenation *op = static_cast<vtkTransformConcatenation *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    op->Concatenate(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformConcatenation_Concatenate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Concatenate");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTransformConcatenation *op = static_cast<vtkTransformConcatenation *>(vp);

  const size_t size0 = 16;
  double temp0[16];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    op->Concatenate(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTransformConcatenation_Concatenate_Methods[] = {
  {nullptr, PyvtkTransformConcatenation_Concatenate_s1, METH_VARARGS,
   "@V *vtkAbstractTransform"},
  {nullptr, PyvtkTransformConcatenation_Concatenate_s2, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTransformConcatenation_Concatenate(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTransformConcatenation_Concatenate_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Concatenate");
  return nullptr;
}



static PyObject *
PyvtkTransformConcatenation_SetPreMultiplyFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreMultiplyFlag");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTransformConcatenation *op = static_cast<vtkTransformConcatenation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetPreMultiplyFlag(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformConcatenation_GetPreMultiplyFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreMultiplyFlag");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTransformConcatenation *op = static_cast<vtkTransformConcatenation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetPreMultiplyFlag();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformConcatenation_Translate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTransformConcatenation *op = static_cast<vtkTransformConcatenation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->Translate(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformConcatenation_Rotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rotate");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTransformConcatenation *op = static_cast<vtkTransformConcatenation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->Rotate(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformConcatenation_Scale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTransformConcatenation *op = static_cast<vtkTransformConcatenation *>(vp);

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
PyvtkTransformConcatenation_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTransformConcatenation *op = static_cast<vtkTransformConcatenation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Inverse();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformConcatenation_GetInverseFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverseFlag");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTransformConcatenation *op = static_cast<vtkTransformConcatenation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetInverseFlag();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformConcatenation_Identity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Identity");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTransformConcatenation *op = static_cast<vtkTransformConcatenation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Identity();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformConcatenation_GetNumberOfTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTransforms");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTransformConcatenation *op = static_cast<vtkTransformConcatenation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetNumberOfTransforms();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformConcatenation_GetNumberOfPreTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPreTransforms");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTransformConcatenation *op = static_cast<vtkTransformConcatenation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetNumberOfPreTransforms();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformConcatenation_GetNumberOfPostTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPostTransforms");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTransformConcatenation *op = static_cast<vtkTransformConcatenation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetNumberOfPostTransforms();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformConcatenation_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTransformConcatenation *op = static_cast<vtkTransformConcatenation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAbstractTransform *tempr = op->GetTransform(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformConcatenation_GetMaxMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMTime");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTransformConcatenation *op = static_cast<vtkTransformConcatenation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = op->GetMaxMTime();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTransformConcatenation_Methods[] = {
  {"Concatenate", PyvtkTransformConcatenation_Concatenate, METH_VARARGS,
   "V.Concatenate(vtkAbstractTransform)\nC++: void Concatenate(vtkAbstractTransform *transform)\nV.Concatenate((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    )\nC++: void Concatenate(const double elements[16])\n\nadd a transform to the list according to Pre/PostMultiply\nsemantics\n"},
  {"SetPreMultiplyFlag", PyvtkTransformConcatenation_SetPreMultiplyFlag, METH_VARARGS,
   "V.SetPreMultiplyFlag(int)\nC++: void SetPreMultiplyFlag(int flag)\n\nset/get the PreMultiply flag\n"},
  {"GetPreMultiplyFlag", PyvtkTransformConcatenation_GetPreMultiplyFlag, METH_VARARGS,
   "V.GetPreMultiplyFlag() -> int\nC++: int GetPreMultiplyFlag()\n\nset/get the PreMultiply flag\n"},
  {"Translate", PyvtkTransformConcatenation_Translate, METH_VARARGS,
   "V.Translate(float, float, float)\nC++: void Translate(double x, double y, double z)\n\nthe three basic linear transformations\n"},
  {"Rotate", PyvtkTransformConcatenation_Rotate, METH_VARARGS,
   "V.Rotate(float, float, float, float)\nC++: void Rotate(double angle, double x, double y, double z)\n\nthe three basic linear transformations\n"},
  {"Scale", PyvtkTransformConcatenation_Scale, METH_VARARGS,
   "V.Scale(float, float, float)\nC++: void Scale(double x, double y, double z)\n\nthe three basic linear transformations\n"},
  {"Inverse", PyvtkTransformConcatenation_Inverse, METH_VARARGS,
   "V.Inverse()\nC++: void Inverse()\n\ninvert the concatenation\n"},
  {"GetInverseFlag", PyvtkTransformConcatenation_GetInverseFlag, METH_VARARGS,
   "V.GetInverseFlag() -> int\nC++: int GetInverseFlag()\n\nget the inverse flag\n"},
  {"Identity", PyvtkTransformConcatenation_Identity, METH_VARARGS,
   "V.Identity()\nC++: void Identity()\n\nidentity simply clears the transform list\n"},
  {"GetNumberOfTransforms", PyvtkTransformConcatenation_GetNumberOfTransforms, METH_VARARGS,
   "V.GetNumberOfTransforms() -> int\nC++: int GetNumberOfTransforms()\n\nthe number of stored transforms\n"},
  {"GetNumberOfPreTransforms", PyvtkTransformConcatenation_GetNumberOfPreTransforms, METH_VARARGS,
   "V.GetNumberOfPreTransforms() -> int\nC++: int GetNumberOfPreTransforms()\n\nthe number of transforms that were pre-concatenated (note that\nwhenever Inverse() is called, the pre-concatenated and\npost-concatenated transforms are switched)\n"},
  {"GetNumberOfPostTransforms", PyvtkTransformConcatenation_GetNumberOfPostTransforms, METH_VARARGS,
   "V.GetNumberOfPostTransforms() -> int\nC++: int GetNumberOfPostTransforms()\n\nthe number of transforms that were post-concatenated.\n"},
  {"GetTransform", PyvtkTransformConcatenation_GetTransform, METH_VARARGS,
   "V.GetTransform(int) -> vtkAbstractTransform\nC++: vtkAbstractTransform *GetTransform(int i)\n\nget one of the transforms\n"},
  {"GetMaxMTime", PyvtkTransformConcatenation_GetMaxMTime, METH_VARARGS,
   "V.GetMaxMTime() -> int\nC++: vtkMTimeType GetMaxMTime()\n\nget maximum MTime of all transforms\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTransformConcatenation_New(PyTypeObject *, PyObject *, PyObject *)
{
  PyErr_SetString(PyExc_TypeError,
                  "this class cannot be instantiated");

  return nullptr;
}

static void PyvtkTransformConcatenation_Delete(PyObject *self)
{
  PyObject_Del(self);
}

static Py_hash_t PyvtkTransformConcatenation_Hash(PyObject *self)
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

static PyTypeObject PyvtkTransformConcatenation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonTransformsPython.vtkTransformConcatenation", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTransformConcatenation_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkTransformConcatenation_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTransformConcatenation_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
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
  PyvtkTransformConcatenation_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTransformConcatenation_TypeNew(); }

PyObject *PyvtkTransformConcatenation_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkTransformConcatenation_Type,
    PyvtkTransformConcatenation_Methods,
    nullptr,
    nullptr);

  PyTypeObject *pytype = &PyvtkTransformConcatenation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkTransformConcatenationStack_Doc =
  "vtkTransformConcatenationStack - no description provided.\n\n"
;

static PyMethodDef PyvtkTransformConcatenationStack_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTransformConcatenationStack_New(PyTypeObject *, PyObject *, PyObject *)
{
  PyErr_SetString(PyExc_TypeError,
                  "this class cannot be instantiated");

  return nullptr;
}

static void PyvtkTransformConcatenationStack_Delete(PyObject *self)
{
  PyObject_Del(self);
}

static Py_hash_t PyvtkTransformConcatenationStack_Hash(PyObject *self)
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

static PyTypeObject PyvtkTransformConcatenationStack_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonTransformsPython.vtkTransformConcatenationStack", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTransformConcatenationStack_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkTransformConcatenationStack_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTransformConcatenationStack_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
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
  PyvtkTransformConcatenationStack_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTransformConcatenationStack_TypeNew(); }

PyObject *PyvtkTransformConcatenationStack_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkTransformConcatenationStack_Type,
    PyvtkTransformConcatenationStack_Methods,
    nullptr,
    nullptr);

  PyTypeObject *pytype = &PyvtkTransformConcatenationStack_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractTransform(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractTransform_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractTransform", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTransformPair_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkTransformPair", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTransformConcatenation_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkTransformConcatenation", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTransformConcatenationStack_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkTransformConcatenationStack", o) != 0)
  {
    Py_DECREF(o);
  }

}

