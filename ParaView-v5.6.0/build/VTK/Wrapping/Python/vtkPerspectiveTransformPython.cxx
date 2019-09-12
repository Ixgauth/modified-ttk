// python wrapper for vtkPerspectiveTransform
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
#include "vtkPerspectiveTransform.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPerspectiveTransform(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPerspectiveTransform_ClassNew(); }

#ifndef DECLARED_PyvtkHomogeneousTransform_ClassNew
extern "C" { PyObject *PyvtkHomogeneousTransform_ClassNew(); }
#define DECLARED_PyvtkHomogeneousTransform_ClassNew
#endif

static const char *PyvtkPerspectiveTransform_Doc =
  "vtkPerspectiveTransform - describes a 4x4 matrix transformation\n\n"
  "Superclass: vtkHomogeneousTransform\n\n"
  "A vtkPerspectiveTransform can be used to describe the full range of\n"
  "homogeneous transformations.  It was designed in particular to\n"
  "describe a camera-view of a scene.\n\n"
  "The order in which you set up the display coordinates (via\n"
  "AdjustZBuffer() and AdjustViewport()), the projection (via\n"
  "Perspective(), Frustum(), or Ortho()) and the camera view (via\n"
  "SetupCamera()) are important.  If the transform is in PreMultiply\n"
  "mode, which is the default, set the Viewport and ZBuffer first, then\n"
  "the projection, and finally the camera view.  Once the view is set\n"
  "up, the Translate and Rotate methods can be used to move the camera\n"
  "around in world coordinates.  If the Oblique() or Stereo() methods\n"
  "are used, they should be called just before SetupCamera().\n\n"
  "In PostMultiply mode, you must perform all transformations in the\n"
  "opposite order.  This is necessary, for example, if you already have\n"
  "a perspective transformation set up but must adjust the viewport. \n"
  "Another example is if you have a view transformation, and wish to\n"
  "perform translations and rotations in the camera's coordinate system\n"
  "rather than in world coordinates.\n\n"
  "The SetInput and Concatenate methods can be used to create a\n"
  "transformation pipeline with vtkPerspectiveTransform.  See\n"
  "vtkTransform for more information on the transformation pipeline.\n"
  "@sa\n"
  "vtkGeneralTransform vtkTransform vtkMatrix4x4 vtkCamera\n\n";


static PyObject *
PyvtkPerspectiveTransform_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPerspectiveTransform::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPerspectiveTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPerspectiveTransform *tempr = vtkPerspectiveTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPerspectiveTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPerspectiveTransform::NewInstance());

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
PyvtkPerspectiveTransform_Identity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Identity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Identity();
    }
    else
    {
      op->vtkPerspectiveTransform::Identity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Inverse();
    }
    else
    {
      op->vtkPerspectiveTransform::Inverse();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_AdjustViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    if (ap.IsBound())
    {
      op->AdjustViewport(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkPerspectiveTransform::AdjustViewport(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_AdjustZBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustZBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

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
    if (ap.IsBound())
    {
      op->AdjustZBuffer(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPerspectiveTransform::AdjustZBuffer(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_Ortho(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Ortho");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

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
    if (ap.IsBound())
    {
      op->Ortho(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkPerspectiveTransform::Ortho(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_Frustum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Frustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

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
    if (ap.IsBound())
    {
      op->Frustum(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkPerspectiveTransform::Frustum(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_Perspective(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Perspective");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

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
    if (ap.IsBound())
    {
      op->Perspective(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPerspectiveTransform::Perspective(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_Shear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Shear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

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
      op->Shear(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPerspectiveTransform::Shear(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_Stereo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stereo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Stereo(temp0, temp1);
    }
    else
    {
      op->vtkPerspectiveTransform::Stereo(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_SetupCamera_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    if (ap.IsBound())
    {
      op->SetupCamera(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPerspectiveTransform::SetupCamera(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPerspectiveTransform_SetupCamera_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8))
  {
    if (ap.IsBound())
    {
      op->SetupCamera(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkPerspectiveTransform::SetupCamera(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPerspectiveTransform_SetupCamera(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPerspectiveTransform_SetupCamera_s1(self, args);
    case 9:
      return PyvtkPerspectiveTransform_SetupCamera_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetupCamera");
  return nullptr;
}



static PyObject *
PyvtkPerspectiveTransform_Translate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

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
      op->Translate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPerspectiveTransform::Translate(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPerspectiveTransform_Translate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
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
      op->vtkPerspectiveTransform::Translate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPerspectiveTransform_Translate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPerspectiveTransform_Translate_s1(self, args);
    case 1:
      return PyvtkPerspectiveTransform_Translate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Translate");
  return nullptr;
}



static PyObject *
PyvtkPerspectiveTransform_RotateWXYZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateWXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

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
    if (ap.IsBound())
    {
      op->RotateWXYZ(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPerspectiveTransform::RotateWXYZ(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPerspectiveTransform_RotateWXYZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateWXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->RotateWXYZ(temp0, temp1);
    }
    else
    {
      op->vtkPerspectiveTransform::RotateWXYZ(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPerspectiveTransform_RotateWXYZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkPerspectiveTransform_RotateWXYZ_s1(self, args);
    case 2:
      return PyvtkPerspectiveTransform_RotateWXYZ_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RotateWXYZ");
  return nullptr;
}



static PyObject *
PyvtkPerspectiveTransform_RotateX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RotateX(temp0);
    }
    else
    {
      op->vtkPerspectiveTransform::RotateX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_RotateY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RotateY(temp0);
    }
    else
    {
      op->vtkPerspectiveTransform::RotateY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_RotateZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RotateZ(temp0);
    }
    else
    {
      op->vtkPerspectiveTransform::RotateZ(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_Scale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

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
      op->Scale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPerspectiveTransform::Scale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPerspectiveTransform_Scale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
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
      op->vtkPerspectiveTransform::Scale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPerspectiveTransform_Scale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPerspectiveTransform_Scale_s1(self, args);
    case 1:
      return PyvtkPerspectiveTransform_Scale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Scale");
  return nullptr;
}



static PyObject *
PyvtkPerspectiveTransform_SetMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetMatrix(temp0);
    }
    else
    {
      op->vtkPerspectiveTransform::SetMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPerspectiveTransform_SetMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  const size_t size0 = 16;
  double temp0[16];
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
      op->vtkPerspectiveTransform::SetMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPerspectiveTransform_SetMatrix_Methods[] = {
  {nullptr, PyvtkPerspectiveTransform_SetMatrix_s1, METH_VARARGS,
   "@V *vtkMatrix4x4"},
  {nullptr, PyvtkPerspectiveTransform_SetMatrix_s2, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPerspectiveTransform_SetMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPerspectiveTransform_SetMatrix_Methods;
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
PyvtkPerspectiveTransform_Concatenate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Concatenate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->Concatenate(temp0);
    }
    else
    {
      op->vtkPerspectiveTransform::Concatenate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPerspectiveTransform_Concatenate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Concatenate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  const size_t size0 = 16;
  double temp0[16];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->Concatenate(temp0);
    }
    else
    {
      op->vtkPerspectiveTransform::Concatenate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPerspectiveTransform_Concatenate_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Concatenate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  vtkHomogeneousTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHomogeneousTransform"))
  {
    if (ap.IsBound())
    {
      op->Concatenate(temp0);
    }
    else
    {
      op->vtkPerspectiveTransform::Concatenate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPerspectiveTransform_Concatenate_Methods[] = {
  {nullptr, PyvtkPerspectiveTransform_Concatenate_s1, METH_VARARGS,
   "@V *vtkMatrix4x4"},
  {nullptr, PyvtkPerspectiveTransform_Concatenate_s2, METH_VARARGS,
   "@P *d"},
  {nullptr, PyvtkPerspectiveTransform_Concatenate_s3, METH_VARARGS,
   "@V *vtkHomogeneousTransform"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPerspectiveTransform_Concatenate(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPerspectiveTransform_Concatenate_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Concatenate");
  return nullptr;
}



static PyObject *
PyvtkPerspectiveTransform_PreMultiply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreMultiply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreMultiply();
    }
    else
    {
      op->vtkPerspectiveTransform::PreMultiply();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_PostMultiply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostMultiply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PostMultiply();
    }
    else
    {
      op->vtkPerspectiveTransform::PostMultiply();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_GetNumberOfConcatenatedTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfConcatenatedTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfConcatenatedTransforms() :
      op->vtkPerspectiveTransform::GetNumberOfConcatenatedTransforms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_GetConcatenatedTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConcatenatedTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkHomogeneousTransform *tempr = (ap.IsBound() ?
      op->GetConcatenatedTransform(temp0) :
      op->vtkPerspectiveTransform::GetConcatenatedTransform(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  vtkHomogeneousTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHomogeneousTransform"))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkPerspectiveTransform::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHomogeneousTransform *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkPerspectiveTransform::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_GetInverseFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverseFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInverseFlag() :
      op->vtkPerspectiveTransform::GetInverseFlag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Push();
    }
    else
    {
      op->vtkPerspectiveTransform::Push();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_Pop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Pop();
    }
    else
    {
      op->vtkPerspectiveTransform::Pop();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->MakeTransform() :
      op->vtkPerspectiveTransform::MakeTransform());

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
PyvtkPerspectiveTransform_CircuitCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CircuitCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    int tempr = (ap.IsBound() ?
      op->CircuitCheck(temp0) :
      op->vtkPerspectiveTransform::CircuitCheck(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkPerspectiveTransform::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPerspectiveTransform_Methods[] = {
  {"IsTypeOf", PyvtkPerspectiveTransform_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPerspectiveTransform_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPerspectiveTransform_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPerspectiveTransform\nC++: static vtkPerspectiveTransform *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPerspectiveTransform_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPerspectiveTransform\nC++: vtkPerspectiveTransform *NewInstance()\n\n"},
  {"Identity", PyvtkPerspectiveTransform_Identity, METH_VARARGS,
   "V.Identity()\nC++: void Identity()\n\nSet this transformation to the identity transformation.  If the\ntransform has an Input, then the transformation will be reset so\nthat it is the same as the Input.\n"},
  {"Inverse", PyvtkPerspectiveTransform_Inverse, METH_VARARGS,
   "V.Inverse()\nC++: void Inverse() override;\n\nInvert the transformation.  This will also set a flag so that the\ntransformation will use the inverse of its Input, if an Input has\nbeen set.\n"},
  {"AdjustViewport", PyvtkPerspectiveTransform_AdjustViewport, METH_VARARGS,
   "V.AdjustViewport(float, float, float, float, float, float, float,\n    float)\nC++: void AdjustViewport(double oldXMin, double oldXMax,\n    double oldYMin, double oldYMax, double newXMin,\n    double newXMax, double newYMin, double newYMax)\n\nPerform an adjustment to the viewport coordinates.  By default\nOrtho, Frustum, and Perspective provide a window of\n([-1,+1],[-1,+1]). In PreMultiply mode, you call this method\nbefore calling Ortho, Frustum, or Perspective.  In PostMultiply\nmode you can call it after.  Note that if you must apply both\nAdjustZBuffer and AdjustViewport, it makes no difference which\norder you apply them in.\n"},
  {"AdjustZBuffer", PyvtkPerspectiveTransform_AdjustZBuffer, METH_VARARGS,
   "V.AdjustZBuffer(float, float, float, float)\nC++: void AdjustZBuffer(double oldNearZ, double oldFarZ,\n    double newNearZ, double newFarZ)\n\nPerform an adjustment to the Z-Buffer range that the near and far\nclipping planes map to.  By default Ortho, Frustum, and\nPerspective map the near clipping plane to -1 and the far\nclipping plane to +1. In PreMultiply mode, you call this method\nbefore calling Ortho, Frustum, or Perspective.  In PostMultiply\nmode you can call it after.\n"},
  {"Ortho", PyvtkPerspectiveTransform_Ortho, METH_VARARGS,
   "V.Ortho(float, float, float, float, float, float)\nC++: void Ortho(double xmin, double xmax, double ymin,\n    double ymax, double znear, double zfar)\n\nCreate an orthogonal projection matrix and concatenate it by the\ncurrent transformation.  The matrix maps [xmin,xmax],\n[ymin,ymax], [-znear,-zfar] to [-1,+1], [-1,+1], [+1,-1].\n"},
  {"Frustum", PyvtkPerspectiveTransform_Frustum, METH_VARARGS,
   "V.Frustum(float, float, float, float, float, float)\nC++: void Frustum(double xmin, double xmax, double ymin,\n    double ymax, double znear, double zfar)\n\nCreate an perspective projection matrix and concatenate it by the\ncurrent transformation.  The matrix maps a frustum with a back\nplane at -zfar and a front plane at -znear with extent\n[xmin,xmax],[ymin,ymax] to [-1,+1], [-1,+1], [+1,-1].\n"},
  {"Perspective", PyvtkPerspectiveTransform_Perspective, METH_VARARGS,
   "V.Perspective(float, float, float, float)\nC++: void Perspective(double angle, double aspect, double znear,\n    double zfar)\n\nCreate a perspective projection matrix by specifying the view\nangle (this angle is in the y direction), the aspect ratio, and\nthe near and far clipping range.  The projection matrix is\nconcatenated with the current transformation.  This method works\nvia Frustum.\n"},
  {"Shear", PyvtkPerspectiveTransform_Shear, METH_VARARGS,
   "V.Shear(float, float, float)\nC++: void Shear(double dxdz, double dydz, double zplane)\n\nCreate a shear transformation about a plane at distance z from\nthe camera.  The values dxdz (i.e. dx/dz) and dydz specify the\namount of shear in the x and y directions.  The 'zplane'\nspecifies the distance from the camera to the plane at which the\nshear causes zero displacement.  Generally you want this plane to\nbe the focal plane. This transformation can be used in\ncombination with Ortho to create an oblique projection.  It can\nalso be used in combination with Perspective to provide correct\nstereo views when the eye is at arbitrary but known positions\nrelative to the center of a flat viewing screen.\n"},
  {"Stereo", PyvtkPerspectiveTransform_Stereo, METH_VARARGS,
   "V.Stereo(float, float)\nC++: void Stereo(double angle, double focaldistance)\n\nCreate a stereo shear matrix and concatenate it with the current\ntransformation.  This can be applied in conjunction with either a\nperspective transformation (via Frustum or Projection) or an\northographic projection.  You must specify the distance from the\ncamera plane to the focal plane, and the angle between the\ndistance vector and the eye.  The angle should be negative for\nthe left eye, and positive for the right.  This method works via\nOblique.\n"},
  {"SetupCamera", PyvtkPerspectiveTransform_SetupCamera, METH_VARARGS,
   "V.SetupCamera((float, float, float), (float, float, float), (\n    float, float, float))\nC++: void SetupCamera(const double position[3],\n    const double focalpoint[3], const double viewup[3])\nV.SetupCamera(float, float, float, float, float, float, float,\n    float, float)\nC++: void SetupCamera(double p0, double p1, double p2, double fp0,\n     double fp1, double fp2, double vup0, double vup1,\n    double vup2)\n\nSet a view transformation matrix for the camera (this matrix does\nnot contain any perspective) and concatenate it with the current\ntransformation.\n"},
  {"Translate", PyvtkPerspectiveTransform_Translate, METH_VARARGS,
   "V.Translate(float, float, float)\nC++: void Translate(double x, double y, double z)\nV.Translate((float, float, float))\nC++: void Translate(const double x[3])\n\nCreate a translation matrix and concatenate it with the current\ntransformation according to PreMultiply or PostMultiply\nsemantics.\n"},
  {"RotateWXYZ", PyvtkPerspectiveTransform_RotateWXYZ, METH_VARARGS,
   "V.RotateWXYZ(float, float, float, float)\nC++: void RotateWXYZ(double angle, double x, double y, double z)\nV.RotateWXYZ(float, (float, float, float))\nC++: void RotateWXYZ(double angle, const double axis[3])\n\nCreate a rotation matrix and concatenate it with the current\ntransformation according to PreMultiply or PostMultiply\nsemantics. The angle is in degrees, and (x,y,z) specifies the\naxis that the rotation will be performed around.\n"},
  {"RotateX", PyvtkPerspectiveTransform_RotateX, METH_VARARGS,
   "V.RotateX(float)\nC++: void RotateX(double angle)\n\nCreate a rotation matrix about the X, Y, or Z axis and\nconcatenate it with the current transformation according to\nPreMultiply or PostMultiply semantics.  The angle is expressed in\ndegrees.\n"},
  {"RotateY", PyvtkPerspectiveTransform_RotateY, METH_VARARGS,
   "V.RotateY(float)\nC++: void RotateY(double angle)\n\nCreate a rotation matrix about the X, Y, or Z axis and\nconcatenate it with the current transformation according to\nPreMultiply or PostMultiply semantics.  The angle is expressed in\ndegrees.\n"},
  {"RotateZ", PyvtkPerspectiveTransform_RotateZ, METH_VARARGS,
   "V.RotateZ(float)\nC++: void RotateZ(double angle)\n\nCreate a rotation matrix about the X, Y, or Z axis and\nconcatenate it with the current transformation according to\nPreMultiply or PostMultiply semantics.  The angle is expressed in\ndegrees.\n"},
  {"Scale", PyvtkPerspectiveTransform_Scale, METH_VARARGS,
   "V.Scale(float, float, float)\nC++: void Scale(double x, double y, double z)\nV.Scale((float, float, float))\nC++: void Scale(const double s[3])\n\nCreate a scale matrix (i.e. set the diagonal elements to x, y, z)\nand concatenate it with the current transformation according to\nPreMultiply or PostMultiply semantics.\n"},
  {"SetMatrix", PyvtkPerspectiveTransform_SetMatrix, METH_VARARGS,
   "V.SetMatrix(vtkMatrix4x4)\nC++: void SetMatrix(vtkMatrix4x4 *matrix)\nV.SetMatrix((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    )\nC++: void SetMatrix(const double elements[16])\n\nSet the current matrix directly.  This actually calls Identity(),\nfollowed by Concatenate(matrix).\n"},
  {"Concatenate", PyvtkPerspectiveTransform_Concatenate, METH_VARARGS,
   "V.Concatenate(vtkMatrix4x4)\nC++: void Concatenate(vtkMatrix4x4 *matrix)\nV.Concatenate((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    )\nC++: void Concatenate(const double elements[16])\nV.Concatenate(vtkHomogeneousTransform)\nC++: void Concatenate(vtkHomogeneousTransform *transform)\n\nConcatenates the matrix with the current transformation according\nto PreMultiply or PostMultiply semantics.\n"},
  {"PreMultiply", PyvtkPerspectiveTransform_PreMultiply, METH_VARARGS,
   "V.PreMultiply()\nC++: void PreMultiply()\n\nSets the internal state of the transform to PreMultiply. All\nsubsequent operations will occur before those already represented\nin the current transformation.  In homogeneous matrix notation, M\n= M*A where M is the current transformation matrix and A is the\napplied matrix. The default is PreMultiply.\n"},
  {"PostMultiply", PyvtkPerspectiveTransform_PostMultiply, METH_VARARGS,
   "V.PostMultiply()\nC++: void PostMultiply()\n\nSets the internal state of the transform to PostMultiply. All\nsubsequent operations will occur after those already represented\nin the current transformation.  In homogeneous matrix notation, M\n= A*M where M is the current transformation matrix and A is the\napplied matrix. The default is PreMultiply.\n"},
  {"GetNumberOfConcatenatedTransforms", PyvtkPerspectiveTransform_GetNumberOfConcatenatedTransforms, METH_VARARGS,
   "V.GetNumberOfConcatenatedTransforms() -> int\nC++: int GetNumberOfConcatenatedTransforms()\n\nGet the total number of transformations that are linked into this\none via Concatenate() operations or via SetInput().\n"},
  {"GetConcatenatedTransform", PyvtkPerspectiveTransform_GetConcatenatedTransform, METH_VARARGS,
   "V.GetConcatenatedTransform(int) -> vtkHomogeneousTransform\nC++: vtkHomogeneousTransform *GetConcatenatedTransform(int i)\n\nGet one of the concatenated transformations as a\nvtkAbstractTransform. These transformations are applied, in\nseries, every time the transformation of a coordinate occurs. \nThis method is provided to make it possible to decompose a\ntransformation into its constituents, for example to save a\ntransformation to a file.\n"},
  {"SetInput", PyvtkPerspectiveTransform_SetInput, METH_VARARGS,
   "V.SetInput(vtkHomogeneousTransform)\nC++: void SetInput(vtkHomogeneousTransform *input)\n\nSet the input for this transformation.  This will be used as the\nbase transformation if it is set.  This method allows you to\nbuild a transform pipeline: if the input is modified, then this\ntransformation will automatically update accordingly.  Note that\nthe InverseFlag, controlled via Inverse(), determines whether\nthis transformation will use the Input or the inverse of the\nInput.\n"},
  {"GetInput", PyvtkPerspectiveTransform_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkHomogeneousTransform\nC++: vtkHomogeneousTransform *GetInput()\n\nSet the input for this transformation.  This will be used as the\nbase transformation if it is set.  This method allows you to\nbuild a transform pipeline: if the input is modified, then this\ntransformation will automatically update accordingly.  Note that\nthe InverseFlag, controlled via Inverse(), determines whether\nthis transformation will use the Input or the inverse of the\nInput.\n"},
  {"GetInverseFlag", PyvtkPerspectiveTransform_GetInverseFlag, METH_VARARGS,
   "V.GetInverseFlag() -> int\nC++: int GetInverseFlag()\n\nGet the inverse flag of the transformation.  This controls\nwhether it is the Input or the inverse of the Input that is used\nas the base transformation.  The InverseFlag is flipped every\ntime Inverse() is called.  The InverseFlag is off when a\ntransform is first created.\n"},
  {"Push", PyvtkPerspectiveTransform_Push, METH_VARARGS,
   "V.Push()\nC++: void Push()\n\nPushes the current transformation onto the transformation stack.\n"},
  {"Pop", PyvtkPerspectiveTransform_Pop, METH_VARARGS,
   "V.Pop()\nC++: void Pop()\n\nDeletes the transformation on the top of the stack and sets the\ntop to the next transformation on the stack.\n"},
  {"MakeTransform", PyvtkPerspectiveTransform_MakeTransform, METH_VARARGS,
   "V.MakeTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform() override;\n\nMake a new transform of the same type -- you are responsible for\ndeleting the transform when you are done with it.\n"},
  {"CircuitCheck", PyvtkPerspectiveTransform_CircuitCheck, METH_VARARGS,
   "V.CircuitCheck(vtkAbstractTransform) -> int\nC++: int CircuitCheck(vtkAbstractTransform *transform) override;\n\nCheck for self-reference.  Will return true if concatenating with\nthe specified transform, setting it to be our inverse, or setting\nit to be our input will create a circular reference. CircuitCheck\nis automatically called by SetInput(), SetInverse(), and\nConcatenate(vtkXTransform *).  Avoid using this function, it is\nexperimental.\n"},
  {"GetMTime", PyvtkPerspectiveTransform_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride GetMTime to account for input and concatenation.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPerspectiveTransform_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonTransformsPython.vtkPerspectiveTransform", // tp_name
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
  PyvtkPerspectiveTransform_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPerspectiveTransform_StaticNew()
{
  return vtkPerspectiveTransform::New();
}

PyObject *PyvtkPerspectiveTransform_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPerspectiveTransform_Type, PyvtkPerspectiveTransform_Methods,
    "vtkPerspectiveTransform",
 &PyvtkPerspectiveTransform_StaticNew);

  PyTypeObject *pytype = &PyvtkPerspectiveTransform_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkHomogeneousTransform_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPerspectiveTransform(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPerspectiveTransform_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPerspectiveTransform", o) != 0)
  {
    Py_DECREF(o);
  }

}

