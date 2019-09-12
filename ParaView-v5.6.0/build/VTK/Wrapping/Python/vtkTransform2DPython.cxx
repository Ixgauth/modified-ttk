// python wrapper for vtkTransform2D
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
#include "vtkTransform2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTransform2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTransform2D_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkTransform2D_Doc =
  "vtkTransform2D - describes linear transformations via a 3x3 matrix\n\n"
  "Superclass: vtkObject\n\n"
  "A vtkTransform2D can be used to describe the full range of linear\n"
  "(also known as affine) coordinate transformations in two dimensions,\n"
  "which are internally represented as a 3x3 homogeneous transformation\n"
  "matrix.  When you create a new vtkTransform2D, it is always\n"
  "initialized to the identity transformation.\n\n"
  "All multiplicitive operations (Translate, Rotate, Scale, etc) are\n"
  "post-multiplied in this class (i.e. add them in the reverse of the\n"
  "order that they should be applied).\n\n"
  "This class performs all of its operations in a right handed\n"
  "coordinate system with right handed rotations. Some other graphics\n"
  "libraries use left handed coordinate systems and rotations.\n\n";


static PyObject *
PyvtkTransform2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTransform2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransform2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTransform2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransform2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTransform2D *tempr = vtkTransform2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransform2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransform2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTransform2D::NewInstance());

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
PyvtkTransform2D_Identity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Identity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Identity();
    }
    else
    {
      op->vtkTransform2D::Identity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransform2D_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Inverse();
    }
    else
    {
      op->vtkTransform2D::Inverse();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransform2D_Translate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Translate(temp0, temp1);
    }
    else
    {
      op->vtkTransform2D::Translate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransform2D_Translate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->Translate(temp0);
    }
    else
    {
      op->vtkTransform2D::Translate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransform2D_Translate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTransform2D_Translate_s1(self, args);
    case 1:
      return PyvtkTransform2D_Translate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Translate");
  return nullptr;
}



static PyObject *
PyvtkTransform2D_Rotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Rotate(temp0);
    }
    else
    {
      op->vtkTransform2D::Rotate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransform2D_Scale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Scale(temp0, temp1);
    }
    else
    {
      op->vtkTransform2D::Scale(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransform2D_Scale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->Scale(temp0);
    }
    else
    {
      op->vtkTransform2D::Scale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransform2D_Scale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTransform2D_Scale_s1(self, args);
    case 1:
      return PyvtkTransform2D_Scale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Scale");
  return nullptr;
}



static PyObject *
PyvtkTransform2D_SetMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  vtkMatrix3x3 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
  {
    if (ap.IsBound())
    {
      op->SetMatrix(temp0);
    }
    else
    {
      op->vtkTransform2D::SetMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransform2D_SetMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  const size_t size0 = 9;
  double temp0[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMatrix(temp0);
    }
    else
    {
      op->vtkTransform2D::SetMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTransform2D_SetMatrix_Methods[] = {
  {nullptr, PyvtkTransform2D_SetMatrix_s1, METH_VARARGS,
   "@V *vtkMatrix3x3"},
  {nullptr, PyvtkTransform2D_SetMatrix_s2, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTransform2D_SetMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTransform2D_SetMatrix_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMatrix");
  return nullptr;
}



static PyObject *
PyvtkTransform2D_GetMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix3x3 *tempr = (ap.IsBound() ?
      op->GetMatrix() :
      op->vtkTransform2D::GetMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTransform2D_GetMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  vtkMatrix3x3 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
  {
    if (ap.IsBound())
    {
      op->GetMatrix(temp0);
    }
    else
    {
      op->vtkTransform2D::GetMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransform2D_GetMatrix(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkTransform2D_GetMatrix_s1(self, args);
    case 1:
      return PyvtkTransform2D_GetMatrix_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetMatrix");
  return nullptr;
}



static PyObject *
PyvtkTransform2D_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetPosition(temp0);
    }
    else
    {
      op->vtkTransform2D::GetPosition(temp0);
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
PyvtkTransform2D_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetScale(temp0);
    }
    else
    {
      op->vtkTransform2D::GetScale(temp0);
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
PyvtkTransform2D_GetInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  vtkMatrix3x3 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
  {
    if (ap.IsBound())
    {
      op->GetInverse(temp0);
    }
    else
    {
      op->vtkTransform2D::GetInverse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransform2D_GetTranspose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranspose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  vtkMatrix3x3 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
  {
    if (ap.IsBound())
    {
      op->GetTranspose(temp0);
    }
    else
    {
      op->vtkTransform2D::GetTranspose(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransform2D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkTransform2D::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransform2D_TransformPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->TransformPoints(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTransform2D::TransformPoints(temp0, temp1, temp2);
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
PyvtkTransform2D_TransformPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  vtkPoints2D *temp0 = nullptr;
  vtkPoints2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints2D") &&
      ap.GetVTKObject(temp1, "vtkPoints2D"))
  {
    if (ap.IsBound())
    {
      op->TransformPoints(temp0, temp1);
    }
    else
    {
      op->vtkTransform2D::TransformPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransform2D_TransformPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTransform2D_TransformPoints_s1(self, args);
    case 2:
      return PyvtkTransform2D_TransformPoints_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformPoints");
  return nullptr;
}



static PyObject *
PyvtkTransform2D_InverseTransformPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InverseTransformPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InverseTransformPoints(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTransform2D::InverseTransformPoints(temp0, temp1, temp2);
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
PyvtkTransform2D_InverseTransformPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InverseTransformPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  vtkPoints2D *temp0 = nullptr;
  vtkPoints2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints2D") &&
      ap.GetVTKObject(temp1, "vtkPoints2D"))
  {
    if (ap.IsBound())
    {
      op->InverseTransformPoints(temp0, temp1);
    }
    else
    {
      op->vtkTransform2D::InverseTransformPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransform2D_InverseTransformPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTransform2D_InverseTransformPoints_s1(self, args);
    case 2:
      return PyvtkTransform2D_InverseTransformPoints_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InverseTransformPoints");
  return nullptr;
}



static PyObject *
PyvtkTransform2D_MultiplyPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

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
      op->MultiplyPoint(temp0, temp1);
    }
    else
    {
      op->vtkTransform2D::MultiplyPoint(temp0, temp1);
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

static PyMethodDef PyvtkTransform2D_Methods[] = {
  {"IsTypeOf", PyvtkTransform2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTransform2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTransform2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTransform2D\nC++: static vtkTransform2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTransform2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTransform2D\nC++: vtkTransform2D *NewInstance()\n\n"},
  {"Identity", PyvtkTransform2D_Identity, METH_VARARGS,
   "V.Identity()\nC++: void Identity()\n\nSet the transformation to the identity transformation.\n"},
  {"Inverse", PyvtkTransform2D_Inverse, METH_VARARGS,
   "V.Inverse()\nC++: void Inverse()\n\nInvert the transformation.\n"},
  {"Translate", PyvtkTransform2D_Translate, METH_VARARGS,
   "V.Translate(float, float)\nC++: void Translate(double x, double y)\nV.Translate((float, float))\nC++: void Translate(const double x[2])\n\nCreate a translation matrix and concatenate it with the current\ntransformation.\n"},
  {"Rotate", PyvtkTransform2D_Rotate, METH_VARARGS,
   "V.Rotate(float)\nC++: void Rotate(double angle)\n\nCreate a rotation matrix and concatenate it with the current\ntransformation. The angle is in degrees.\n"},
  {"Scale", PyvtkTransform2D_Scale, METH_VARARGS,
   "V.Scale(float, float)\nC++: void Scale(double x, double y)\nV.Scale((float, float))\nC++: void Scale(const double s[2])\n\nCreate a scale matrix (i.e. set the diagonal elements to x, y)\nand concatenate it with the current transformation.\n"},
  {"SetMatrix", PyvtkTransform2D_SetMatrix, METH_VARARGS,
   "V.SetMatrix(vtkMatrix3x3)\nC++: void SetMatrix(vtkMatrix3x3 *matrix)\nV.SetMatrix((float, float, float, float, float, float, float,\n    float, float))\nC++: void SetMatrix(const double elements[9])\n\nSet the current matrix directly.\n"},
  {"GetMatrix", PyvtkTransform2D_GetMatrix, METH_VARARGS,
   "V.GetMatrix() -> vtkMatrix3x3\nC++: virtual vtkMatrix3x3 *GetMatrix()\nV.GetMatrix(vtkMatrix3x3)\nC++: void GetMatrix(vtkMatrix3x3 *matrix)\n\nGet the underlying 3x3 matrix.\n"},
  {"GetPosition", PyvtkTransform2D_GetPosition, METH_VARARGS,
   "V.GetPosition([float, float])\nC++: void GetPosition(double pos[2])\n\nReturn the position from the current transformation matrix as an\narray of two floating point numbers. This is simply returning the\ntranslation component of the 3x3 matrix.\n"},
  {"GetScale", PyvtkTransform2D_GetScale, METH_VARARGS,
   "V.GetScale([float, float])\nC++: void GetScale(double pos[2])\n\nReturn the x and y scale from the current transformation matrix\nas an array of two floating point numbers. This is simply\nreturning the scale component of the 3x3 matrix.\n"},
  {"GetInverse", PyvtkTransform2D_GetInverse, METH_VARARGS,
   "V.GetInverse(vtkMatrix3x3)\nC++: void GetInverse(vtkMatrix3x3 *inverse)\n\nReturn a matrix which is the inverse of the current\ntransformation matrix.\n"},
  {"GetTranspose", PyvtkTransform2D_GetTranspose, METH_VARARGS,
   "V.GetTranspose(vtkMatrix3x3)\nC++: void GetTranspose(vtkMatrix3x3 *transpose)\n\nReturn a matrix which is the transpose of the current\ntransformation matrix.  This is equivalent to the inverse if and\nonly if the transformation is a pure rotation with no translation\nor scale.\n"},
  {"GetMTime", PyvtkTransform2D_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride GetMTime to account for input and concatenation.\n"},
  {"TransformPoints", PyvtkTransform2D_TransformPoints, METH_VARARGS,
   "V.TransformPoints((float, ...), [float, ...], int)\nC++: void TransformPoints(const double *inPts, double *outPts,\n    int n)\nV.TransformPoints(vtkPoints2D, vtkPoints2D)\nC++: void TransformPoints(vtkPoints2D *inPts, vtkPoints2D *outPts)\n\nApply the transformation to a series of points, and append the\nresults to outPts. Where n is the number of points, and the float\npointers are of length 2*n.\n"},
  {"InverseTransformPoints", PyvtkTransform2D_InverseTransformPoints, METH_VARARGS,
   "V.InverseTransformPoints((float, ...), [float, ...], int)\nC++: void InverseTransformPoints(const double *inPts,\n    double *outPts, int n)\nV.InverseTransformPoints(vtkPoints2D, vtkPoints2D)\nC++: void InverseTransformPoints(vtkPoints2D *inPts,\n    vtkPoints2D *outPts)\n\nApply the transformation to a series of points, and append the\nresults to outPts. Where n is the number of points, and the float\npointers are of length 2*n.\n"},
  {"MultiplyPoint", PyvtkTransform2D_MultiplyPoint, METH_VARARGS,
   "V.MultiplyPoint((float, float, float), [float, float, float])\nC++: void MultiplyPoint(const double in[3], double out[3])\n\nUse this method only if you wish to compute the transformation in\nhomogeneous (x,y,w) coordinates, otherwise use TransformPoint().\nThis method calls this->GetMatrix()->MultiplyPoint().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTransform2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonTransformsPython.vtkTransform2D", // tp_name
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
  PyvtkTransform2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTransform2D_StaticNew()
{
  return vtkTransform2D::New();
}

PyObject *PyvtkTransform2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTransform2D_Type, PyvtkTransform2D_Methods,
    "vtkTransform2D",
 &PyvtkTransform2D_StaticNew);

  PyTypeObject *pytype = &PyvtkTransform2D_Type;

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

void PyVTKAddFile_vtkTransform2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTransform2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTransform2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

