// python wrapper for vtkMatrix4x4
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
#include "vtkMatrix4x4.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMatrix4x4(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMatrix4x4_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkMatrix4x4_Doc =
  "vtkMatrix4x4 - represent and manipulate 4x4 transformation matrices\n\n"
  "Superclass: vtkObject\n\n"
  "vtkMatrix4x4 is a class to represent and manipulate 4x4 matrices.\n"
  "Specifically, it is designed to work on 4x4 transformation matrices\n"
  "found in 3D rendering using homogeneous coordinates [x y z w]. Many\n"
  "of the methods take an array of 16 doubles in row-major format. Note\n"
  "that OpenGL stores matrices in column-major format, so the matrix\n"
  "contents must be transposed when they are moved between OpenGL and\n"
  "VTK.\n"
  "@sa\n"
  "vtkTransform\n\n";


static PyObject *
PyvtkMatrix4x4_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMatrix4x4::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix4x4_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMatrix4x4::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix4x4_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMatrix4x4 *tempr = vtkMatrix4x4::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix4x4_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMatrix4x4::NewInstance());

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
PyvtkMatrix4x4_DeepCopy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkMatrix4x4::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix4x4_DeepCopy_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DeepCopy");

  const size_t size0 = 16;
  double temp0[16];
  double save0[16];
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    ap.Save(temp0, save0, size0);

    vtkMatrix4x4::DeepCopy(temp0, temp1);

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
PyvtkMatrix4x4_DeepCopy_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DeepCopy");

  const size_t size0 = 16;
  double temp0[16];
  double save0[16];
  const size_t size1 = 16;
  double temp1[16];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);

    vtkMatrix4x4::DeepCopy(temp0, temp1);

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
PyvtkMatrix4x4_DeepCopy_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  const size_t size0 = 16;
  double temp0[16];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkMatrix4x4::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMatrix4x4_DeepCopy_Methods[] = {
  {nullptr, PyvtkMatrix4x4_DeepCopy_s1, METH_VARARGS,
   "@V *vtkMatrix4x4"},
  {nullptr, PyvtkMatrix4x4_DeepCopy_s2, METH_VARARGS | METH_STATIC,
   "PV *d *vtkMatrix4x4"},
  {nullptr, PyvtkMatrix4x4_DeepCopy_s3, METH_VARARGS | METH_STATIC,
   "PP *d *d"},
  {nullptr, PyvtkMatrix4x4_DeepCopy_s4, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMatrix4x4_DeepCopy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix4x4_DeepCopy_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DeepCopy");
  return nullptr;
}



static PyObject *
PyvtkMatrix4x4_Zero_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Zero");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Zero();
    }
    else
    {
      op->vtkMatrix4x4::Zero();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Zero_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Zero");

  const size_t size0 = 16;
  double temp0[16];
  double save0[16];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    vtkMatrix4x4::Zero(temp0);

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
PyvtkMatrix4x4_Zero(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMatrix4x4_Zero_s1(self, args);
    case 1:
      return PyvtkMatrix4x4_Zero_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Zero");
  return nullptr;
}



static PyObject *
PyvtkMatrix4x4_Identity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Identity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Identity();
    }
    else
    {
      op->vtkMatrix4x4::Identity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Identity_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Identity");

  const size_t size0 = 16;
  double temp0[16];
  double save0[16];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    vtkMatrix4x4::Identity(temp0);

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
PyvtkMatrix4x4_Identity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMatrix4x4_Identity_s1(self, args);
    case 1:
      return PyvtkMatrix4x4_Identity_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Identity");
  return nullptr;
}



static PyObject *
PyvtkMatrix4x4_Invert_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Invert");

  vtkMatrix4x4 *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    vtkMatrix4x4::Invert(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Invert_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Invert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Invert();
    }
    else
    {
      op->vtkMatrix4x4::Invert();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Invert_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Invert");

  const size_t size0 = 16;
  double temp0[16];
  const size_t size1 = 16;
  double temp1[16];
  double save1[16];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    vtkMatrix4x4::Invert(temp0, temp1);

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

static PyMethodDef PyvtkMatrix4x4_Invert_Methods[] = {
  {nullptr, PyvtkMatrix4x4_Invert_s1, METH_VARARGS | METH_STATIC,
   "VV *vtkMatrix4x4 *vtkMatrix4x4"},
  {nullptr, PyvtkMatrix4x4_Invert_s3, METH_VARARGS | METH_STATIC,
   "PP *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMatrix4x4_Invert(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix4x4_Invert_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
    case 1:
      return PyvtkMatrix4x4_Invert_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Invert");
  return nullptr;
}



static PyObject *
PyvtkMatrix4x4_Transpose_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Transpose");

  vtkMatrix4x4 *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    vtkMatrix4x4::Transpose(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Transpose_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Transpose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Transpose();
    }
    else
    {
      op->vtkMatrix4x4::Transpose();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Transpose_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Transpose");

  const size_t size0 = 16;
  double temp0[16];
  const size_t size1 = 16;
  double temp1[16];
  double save1[16];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    vtkMatrix4x4::Transpose(temp0, temp1);

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

static PyMethodDef PyvtkMatrix4x4_Transpose_Methods[] = {
  {nullptr, PyvtkMatrix4x4_Transpose_s1, METH_VARARGS | METH_STATIC,
   "VV *vtkMatrix4x4 *vtkMatrix4x4"},
  {nullptr, PyvtkMatrix4x4_Transpose_s3, METH_VARARGS | METH_STATIC,
   "PP *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMatrix4x4_Transpose(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix4x4_Transpose_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
    case 1:
      return PyvtkMatrix4x4_Transpose_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Transpose");
  return nullptr;
}



static PyObject *
PyvtkMatrix4x4_MultiplyPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
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
      op->vtkMatrix4x4::MultiplyPoint(temp0, temp1);
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
PyvtkMatrix4x4_MultiplyPoint_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MultiplyPoint");

  const size_t size0 = 16;
  double temp0[16];
  const size_t size1 = 4;
  double temp1[4];
  const size_t size2 = 4;
  double temp2[4];
  double save2[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    vtkMatrix4x4::MultiplyPoint(temp0, temp1, temp2);

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
PyvtkMatrix4x4_MultiplyPoint_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  const size_t size0 = 4;
  float temp0[4];
  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    float *tempr = (ap.IsBound() ?
      op->MultiplyPoint(temp0) :
      op->vtkMatrix4x4::MultiplyPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkMatrix4x4_MultiplyPoint_Methods[] = {
  {nullptr, PyvtkMatrix4x4_MultiplyPoint_s1, METH_VARARGS,
   "@PP *d *d"},
  {nullptr, PyvtkMatrix4x4_MultiplyPoint_s2, METH_VARARGS | METH_STATIC,
   "PPP *d *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMatrix4x4_MultiplyPoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix4x4_MultiplyPoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkMatrix4x4_MultiplyPoint_s3(self, args);
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "MultiplyPoint");
  return nullptr;
}



static PyObject *
PyvtkMatrix4x4_MultiplyFloatPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyFloatPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  const size_t size0 = 4;
  float temp0[4];
  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    float *tempr = (ap.IsBound() ?
      op->MultiplyFloatPoint(temp0) :
      op->vtkMatrix4x4::MultiplyFloatPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix4x4_MultiplyDoublePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyDoublePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double *tempr = (ap.IsBound() ?
      op->MultiplyDoublePoint(temp0) :
      op->vtkMatrix4x4::MultiplyDoublePoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix4x4_Multiply4x4_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Multiply4x4");

  vtkMatrix4x4 *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  vtkMatrix4x4 *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp2, "vtkMatrix4x4"))
  {
    vtkMatrix4x4::Multiply4x4(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Multiply4x4_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Multiply4x4");

  const size_t size0 = 16;
  double temp0[16];
  const size_t size1 = 16;
  double temp1[16];
  const size_t size2 = 16;
  double temp2[16];
  double save2[16];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    vtkMatrix4x4::Multiply4x4(temp0, temp1, temp2);

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

static PyMethodDef PyvtkMatrix4x4_Multiply4x4_Methods[] = {
  {nullptr, PyvtkMatrix4x4_Multiply4x4_s1, METH_VARARGS | METH_STATIC,
   "VVV *vtkMatrix4x4 *vtkMatrix4x4 *vtkMatrix4x4"},
  {nullptr, PyvtkMatrix4x4_Multiply4x4_s2, METH_VARARGS | METH_STATIC,
   "PPP *d *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMatrix4x4_Multiply4x4(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix4x4_Multiply4x4_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Multiply4x4");
  return nullptr;
}



static PyObject *
PyvtkMatrix4x4_Adjoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Adjoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->Adjoint(temp0, temp1);
    }
    else
    {
      op->vtkMatrix4x4::Adjoint(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Adjoint_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Adjoint");

  const size_t size0 = 16;
  double temp0[16];
  const size_t size1 = 16;
  double temp1[16];
  double save1[16];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    vtkMatrix4x4::Adjoint(temp0, temp1);

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

static PyMethodDef PyvtkMatrix4x4_Adjoint_Methods[] = {
  {nullptr, PyvtkMatrix4x4_Adjoint_s1, METH_VARARGS,
   "@VV *vtkMatrix4x4 *vtkMatrix4x4"},
  {nullptr, PyvtkMatrix4x4_Adjoint_s2, METH_VARARGS | METH_STATIC,
   "PP *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMatrix4x4_Adjoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix4x4_Adjoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Adjoint");
  return nullptr;
}



static PyObject *
PyvtkMatrix4x4_Determinant_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Determinant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->Determinant() :
      op->vtkMatrix4x4::Determinant());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Determinant_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Determinant");

  const size_t size0 = 16;
  double temp0[16];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double tempr = vtkMatrix4x4::Determinant(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Determinant(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMatrix4x4_Determinant_s1(self, args);
    case 1:
      return PyvtkMatrix4x4_Determinant_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Determinant");
  return nullptr;
}



static PyObject *
PyvtkMatrix4x4_SetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  int temp0;
  int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetElement(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMatrix4x4::SetElement(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix4x4_GetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->GetElement(temp0, temp1) :
      op->vtkMatrix4x4::GetElement(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix4x4_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetData() :
      op->vtkMatrix4x4::GetData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMatrix4x4_Methods[] = {
  {"IsTypeOf", PyvtkMatrix4x4_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMatrix4x4_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMatrix4x4_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMatrix4x4\nC++: static vtkMatrix4x4 *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMatrix4x4_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *NewInstance()\n\n"},
  {"DeepCopy", PyvtkMatrix4x4_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkMatrix4x4)\nC++: void DeepCopy(const vtkMatrix4x4 *source)\nV.DeepCopy([float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float,\n    float], vtkMatrix4x4)\nC++: static void DeepCopy(double destination[16],\n    const vtkMatrix4x4 *source)\nV.DeepCopy([float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float,\n    float], (float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    )\nC++: static void DeepCopy(double destination[16],\n    const double source[16])\nV.DeepCopy((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    )\nC++: void DeepCopy(const double elements[16])\n\nSet the elements of the matrix to the same values as the elements\nof the given source matrix.\n"},
  {"Zero", PyvtkMatrix4x4_Zero, METH_VARARGS,
   "V.Zero()\nC++: void Zero()\nV.Zero([float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float])\nC++: static void Zero(double elements[16])\n\nSet all of the elements to zero.\n"},
  {"Identity", PyvtkMatrix4x4_Identity, METH_VARARGS,
   "V.Identity()\nC++: void Identity()\nV.Identity([float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float,\n    float])\nC++: static void Identity(double elements[16])\n\nSet equal to Identity matrix\n"},
  {"Invert", PyvtkMatrix4x4_Invert, METH_VARARGS,
   "V.Invert(vtkMatrix4x4, vtkMatrix4x4)\nC++: static void Invert(const vtkMatrix4x4 *in, vtkMatrix4x4 *out)\nV.Invert()\nC++: void Invert()\nV.Invert((float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float),\n    [float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float])\nC++: static void Invert(const double inElements[16],\n    double outElements[16])\n\nMatrix Inversion (adapted from Richard Carling in \"Graphics\nGems,\" Academic Press, 1990).\n"},
  {"Transpose", PyvtkMatrix4x4_Transpose, METH_VARARGS,
   "V.Transpose(vtkMatrix4x4, vtkMatrix4x4)\nC++: static void Transpose(const vtkMatrix4x4 *in,\n    vtkMatrix4x4 *out)\nV.Transpose()\nC++: void Transpose()\nV.Transpose((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    , [float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float])\nC++: static void Transpose(const double inElements[16],\n    double outElements[16])\n\nTranspose the matrix and put it into out.\n"},
  {"MultiplyPoint", PyvtkMatrix4x4_MultiplyPoint, METH_VARARGS,
   "V.MultiplyPoint((float, float, float, float), [float, float,\n    float, float])\nC++: void MultiplyPoint(const double in[4], double out[4])\nV.MultiplyPoint((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    , (float, float, float, float), [float, float, float, float])\nC++: static void MultiplyPoint(const double elements[16],\n    const double in[4], double out[4])\nV.MultiplyPoint((float, float, float, float)) -> (float, float,\n    float, float)\nC++: float *MultiplyPoint(const float in[4])\n\n"},
  {"MultiplyFloatPoint", PyvtkMatrix4x4_MultiplyFloatPoint, METH_VARARGS,
   "V.MultiplyFloatPoint((float, float, float, float)) -> (float,\n    float, float, float)\nC++: float *MultiplyFloatPoint(const float in[4])\n\n"},
  {"MultiplyDoublePoint", PyvtkMatrix4x4_MultiplyDoublePoint, METH_VARARGS,
   "V.MultiplyDoublePoint((float, float, float, float)) -> (float,\n    float, float, float)\nC++: double *MultiplyDoublePoint(const double in[4])\n\n"},
  {"Multiply4x4", PyvtkMatrix4x4_Multiply4x4, METH_VARARGS,
   "V.Multiply4x4(vtkMatrix4x4, vtkMatrix4x4, vtkMatrix4x4)\nC++: static void Multiply4x4(const vtkMatrix4x4 *a,\n    const vtkMatrix4x4 *b, vtkMatrix4x4 *c)\nV.Multiply4x4((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    , (float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float),\n    [float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float])\nC++: static void Multiply4x4(const double a[16],\n    const double b[16], double c[16])\n\nMultiplies matrices a and b and stores the result in c.\n"},
  {"Adjoint", PyvtkMatrix4x4_Adjoint, METH_VARARGS,
   "V.Adjoint(vtkMatrix4x4, vtkMatrix4x4)\nC++: void Adjoint(const vtkMatrix4x4 *in, vtkMatrix4x4 *out)\nV.Adjoint((float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float),\n    [float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float])\nC++: static void Adjoint(const double inElements[16],\n    double outElements[16])\n\nCompute adjoint of the matrix and put it into out.\n"},
  {"Determinant", PyvtkMatrix4x4_Determinant, METH_VARARGS,
   "V.Determinant() -> float\nC++: double Determinant()\nV.Determinant((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    ) -> float\nC++: static double Determinant(const double elements[16])\n\nCompute the determinant of the matrix and return it.\n"},
  {"SetElement", PyvtkMatrix4x4_SetElement, METH_VARARGS,
   "V.SetElement(int, int, float)\nC++: void SetElement(int i, int j, double value)\n\nSets the element i,j in the matrix.\n"},
  {"GetElement", PyvtkMatrix4x4_GetElement, METH_VARARGS,
   "V.GetElement(int, int) -> float\nC++: double GetElement(int i, int j)\n\nReturns the element i,j from the matrix.\n"},
  {"GetData", PyvtkMatrix4x4_GetData, METH_VARARGS,
   "V.GetData() -> (float, ...)\nC++: double *GetData()\n\nReturns the raw double array holding the matrix.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMatrix4x4_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkMatrix4x4", // tp_name
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
  PyvtkMatrix4x4_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMatrix4x4_StaticNew()
{
  return vtkMatrix4x4::New();
}

PyObject *PyvtkMatrix4x4_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMatrix4x4_Type, PyvtkMatrix4x4_Methods,
    "vtkMatrix4x4",
 &PyvtkMatrix4x4_StaticNew);

  PyTypeObject *pytype = &PyvtkMatrix4x4_Type;

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

void PyVTKAddFile_vtkMatrix4x4(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMatrix4x4_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMatrix4x4", o) != 0)
  {
    Py_DECREF(o);
  }

}

