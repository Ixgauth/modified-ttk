// python wrapper for vtkMatrix3x3
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
#include "vtkMatrix3x3.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMatrix3x3(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMatrix3x3_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkMatrix3x3_Doc =
  "vtkMatrix3x3 - represent and manipulate 3x3 transformation matrices\n\n"
  "Superclass: vtkObject\n\n"
  "vtkMatrix3x3 is a class to represent and manipulate 3x3 matrices.\n"
  "Specifically, it is designed to work on 3x3 transformation matrices\n"
  "found in 2D rendering using homogeneous coordinates [x y w].\n\n"
  "@sa\n"
  "vtkTransform2D\n\n";


static PyObject *
PyvtkMatrix3x3_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMatrix3x3::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix3x3_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMatrix3x3::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix3x3_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMatrix3x3 *tempr = vtkMatrix3x3::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix3x3_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix3x3 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMatrix3x3::NewInstance());

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
PyvtkMatrix3x3_DeepCopy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  vtkMatrix3x3 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkMatrix3x3::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix3x3_DeepCopy_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DeepCopy");

  const size_t size0 = 9;
  double temp0[9];
  double save0[9];
  vtkMatrix3x3 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
  {
    ap.Save(temp0, save0, size0);

    vtkMatrix3x3::DeepCopy(temp0, temp1);

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
PyvtkMatrix3x3_DeepCopy_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DeepCopy");

  const size_t size0 = 9;
  double temp0[9];
  double save0[9];
  const size_t size1 = 9;
  double temp1[9];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);

    vtkMatrix3x3::DeepCopy(temp0, temp1);

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
PyvtkMatrix3x3_DeepCopy_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  const size_t size0 = 9;
  double temp0[9];
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
      op->vtkMatrix3x3::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMatrix3x3_DeepCopy_Methods[] = {
  {nullptr, PyvtkMatrix3x3_DeepCopy_s1, METH_VARARGS,
   "@V *vtkMatrix3x3"},
  {nullptr, PyvtkMatrix3x3_DeepCopy_s2, METH_VARARGS | METH_STATIC,
   "PV *d *vtkMatrix3x3"},
  {nullptr, PyvtkMatrix3x3_DeepCopy_s3, METH_VARARGS | METH_STATIC,
   "PP *d *d"},
  {nullptr, PyvtkMatrix3x3_DeepCopy_s4, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMatrix3x3_DeepCopy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix3x3_DeepCopy_Methods;
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
PyvtkMatrix3x3_Zero_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Zero");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Zero();
    }
    else
    {
      op->vtkMatrix3x3::Zero();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Zero_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Zero");

  const size_t size0 = 9;
  double temp0[9];
  double save0[9];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    vtkMatrix3x3::Zero(temp0);

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
PyvtkMatrix3x3_Zero(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMatrix3x3_Zero_s1(self, args);
    case 1:
      return PyvtkMatrix3x3_Zero_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Zero");
  return nullptr;
}



static PyObject *
PyvtkMatrix3x3_Identity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Identity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Identity();
    }
    else
    {
      op->vtkMatrix3x3::Identity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Identity_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Identity");

  const size_t size0 = 9;
  double temp0[9];
  double save0[9];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    vtkMatrix3x3::Identity(temp0);

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
PyvtkMatrix3x3_Identity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMatrix3x3_Identity_s1(self, args);
    case 1:
      return PyvtkMatrix3x3_Identity_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Identity");
  return nullptr;
}



static PyObject *
PyvtkMatrix3x3_Invert_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Invert");

  vtkMatrix3x3 *temp0 = nullptr;
  vtkMatrix3x3 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3") &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
  {
    vtkMatrix3x3::Invert(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Invert_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Invert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Invert();
    }
    else
    {
      op->vtkMatrix3x3::Invert();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Invert_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Invert");

  const size_t size0 = 9;
  double temp0[9];
  const size_t size1 = 9;
  double temp1[9];
  double save1[9];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    vtkMatrix3x3::Invert(temp0, temp1);

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

static PyMethodDef PyvtkMatrix3x3_Invert_Methods[] = {
  {nullptr, PyvtkMatrix3x3_Invert_s1, METH_VARARGS | METH_STATIC,
   "VV *vtkMatrix3x3 *vtkMatrix3x3"},
  {nullptr, PyvtkMatrix3x3_Invert_s3, METH_VARARGS | METH_STATIC,
   "PP *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMatrix3x3_Invert(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix3x3_Invert_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
    case 1:
      return PyvtkMatrix3x3_Invert_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Invert");
  return nullptr;
}



static PyObject *
PyvtkMatrix3x3_Transpose_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Transpose");

  vtkMatrix3x3 *temp0 = nullptr;
  vtkMatrix3x3 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3") &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
  {
    vtkMatrix3x3::Transpose(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Transpose_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Transpose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Transpose();
    }
    else
    {
      op->vtkMatrix3x3::Transpose();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Transpose_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Transpose");

  const size_t size0 = 9;
  double temp0[9];
  const size_t size1 = 9;
  double temp1[9];
  double save1[9];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    vtkMatrix3x3::Transpose(temp0, temp1);

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

static PyMethodDef PyvtkMatrix3x3_Transpose_Methods[] = {
  {nullptr, PyvtkMatrix3x3_Transpose_s1, METH_VARARGS | METH_STATIC,
   "VV *vtkMatrix3x3 *vtkMatrix3x3"},
  {nullptr, PyvtkMatrix3x3_Transpose_s3, METH_VARARGS | METH_STATIC,
   "PP *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMatrix3x3_Transpose(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix3x3_Transpose_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
    case 1:
      return PyvtkMatrix3x3_Transpose_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Transpose");
  return nullptr;
}



static PyObject *
PyvtkMatrix3x3_MultiplyPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

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
      op->vtkMatrix3x3::MultiplyPoint(temp0, temp1);
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
PyvtkMatrix3x3_MultiplyPoint_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MultiplyPoint");

  const size_t size0 = 9;
  double temp0[9];
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    vtkMatrix3x3::MultiplyPoint(temp0, temp1, temp2);

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
PyvtkMatrix3x3_MultiplyPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkMatrix3x3_MultiplyPoint_s1(self, args);
    case 3:
      return PyvtkMatrix3x3_MultiplyPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "MultiplyPoint");
  return nullptr;
}



static PyObject *
PyvtkMatrix3x3_Multiply3x3_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Multiply3x3");

  vtkMatrix3x3 *temp0 = nullptr;
  vtkMatrix3x3 *temp1 = nullptr;
  vtkMatrix3x3 *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3") &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3") &&
      ap.GetVTKObject(temp2, "vtkMatrix3x3"))
  {
    vtkMatrix3x3::Multiply3x3(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Multiply3x3_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Multiply3x3");

  const size_t size0 = 9;
  double temp0[9];
  const size_t size1 = 9;
  double temp1[9];
  const size_t size2 = 9;
  double temp2[9];
  double save2[9];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    vtkMatrix3x3::Multiply3x3(temp0, temp1, temp2);

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

static PyMethodDef PyvtkMatrix3x3_Multiply3x3_Methods[] = {
  {nullptr, PyvtkMatrix3x3_Multiply3x3_s1, METH_VARARGS | METH_STATIC,
   "VVV *vtkMatrix3x3 *vtkMatrix3x3 *vtkMatrix3x3"},
  {nullptr, PyvtkMatrix3x3_Multiply3x3_s2, METH_VARARGS | METH_STATIC,
   "PPP *d *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMatrix3x3_Multiply3x3(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix3x3_Multiply3x3_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Multiply3x3");
  return nullptr;
}



static PyObject *
PyvtkMatrix3x3_Adjoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Adjoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  vtkMatrix3x3 *temp0 = nullptr;
  vtkMatrix3x3 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3") &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
  {
    if (ap.IsBound())
    {
      op->Adjoint(temp0, temp1);
    }
    else
    {
      op->vtkMatrix3x3::Adjoint(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Adjoint_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Adjoint");

  const size_t size0 = 9;
  double temp0[9];
  const size_t size1 = 9;
  double temp1[9];
  double save1[9];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    vtkMatrix3x3::Adjoint(temp0, temp1);

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

static PyMethodDef PyvtkMatrix3x3_Adjoint_Methods[] = {
  {nullptr, PyvtkMatrix3x3_Adjoint_s1, METH_VARARGS,
   "@VV *vtkMatrix3x3 *vtkMatrix3x3"},
  {nullptr, PyvtkMatrix3x3_Adjoint_s2, METH_VARARGS | METH_STATIC,
   "PP *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMatrix3x3_Adjoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix3x3_Adjoint_Methods;
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
PyvtkMatrix3x3_Determinant_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Determinant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->Determinant() :
      op->vtkMatrix3x3::Determinant());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Determinant_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Determinant");

  const size_t size0 = 9;
  double temp0[9];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double tempr = vtkMatrix3x3::Determinant(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Determinant(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMatrix3x3_Determinant_s1(self, args);
    case 1:
      return PyvtkMatrix3x3_Determinant_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Determinant");
  return nullptr;
}



static PyObject *
PyvtkMatrix3x3_SetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

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
      op->vtkMatrix3x3::SetElement(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix3x3_GetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->GetElement(temp0, temp1) :
      op->vtkMatrix3x3::GetElement(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix3x3_IsIdentity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsIdentity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsIdentity() :
      op->vtkMatrix3x3::IsIdentity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix3x3_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetData() :
      op->vtkMatrix3x3::GetData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMatrix3x3_Methods[] = {
  {"IsTypeOf", PyvtkMatrix3x3_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMatrix3x3_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMatrix3x3_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMatrix3x3\nC++: static vtkMatrix3x3 *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMatrix3x3_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMatrix3x3\nC++: vtkMatrix3x3 *NewInstance()\n\n"},
  {"DeepCopy", PyvtkMatrix3x3_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkMatrix3x3)\nC++: void DeepCopy(vtkMatrix3x3 *source)\nV.DeepCopy([float, float, float, float, float, float, float,\n    float, float], vtkMatrix3x3)\nC++: static void DeepCopy(double elements[9],\n    vtkMatrix3x3 *source)\nV.DeepCopy([float, float, float, float, float, float, float,\n    float, float], (float, float, float, float, float, float,\n    float, float, float))\nC++: static void DeepCopy(double elements[9],\n    const double newElements[9])\nV.DeepCopy((float, float, float, float, float, float, float,\n    float, float))\nC++: void DeepCopy(const double elements[9])\n\nSet the elements of the matrix to the same values as the elements\nof the source Matrix.\n"},
  {"Zero", PyvtkMatrix3x3_Zero, METH_VARARGS,
   "V.Zero()\nC++: void Zero()\nV.Zero([float, float, float, float, float, float, float, float,\n    float])\nC++: static void Zero(double elements[9])\n\nSet all of the elements to zero.\n"},
  {"Identity", PyvtkMatrix3x3_Identity, METH_VARARGS,
   "V.Identity()\nC++: void Identity()\nV.Identity([float, float, float, float, float, float, float,\n    float, float])\nC++: static void Identity(double elements[9])\n\nSet equal to Identity matrix\n"},
  {"Invert", PyvtkMatrix3x3_Invert, METH_VARARGS,
   "V.Invert(vtkMatrix3x3, vtkMatrix3x3)\nC++: static void Invert(vtkMatrix3x3 *in, vtkMatrix3x3 *out)\nV.Invert()\nC++: void Invert()\nV.Invert((float, float, float, float, float, float, float, float,\n    float), [float, float, float, float, float, float, float,\n    float, float])\nC++: static void Invert(const double inElements[9],\n    double outElements[9])\n\nMatrix Inversion (adapted from Richard Carling in \"Graphics\nGems,\" Academic Press, 1990).\n"},
  {"Transpose", PyvtkMatrix3x3_Transpose, METH_VARARGS,
   "V.Transpose(vtkMatrix3x3, vtkMatrix3x3)\nC++: static void Transpose(vtkMatrix3x3 *in, vtkMatrix3x3 *out)\nV.Transpose()\nC++: void Transpose()\nV.Transpose((float, float, float, float, float, float, float,\n    float, float), [float, float, float, float, float, float,\n    float, float, float])\nC++: static void Transpose(const double inElements[9],\n    double outElements[9])\n\nTranspose the matrix and put it into out.\n"},
  {"MultiplyPoint", PyvtkMatrix3x3_MultiplyPoint, METH_VARARGS,
   "V.MultiplyPoint((float, float, float), [float, float, float])\nC++: void MultiplyPoint(const double in[3], double out[3])\nV.MultiplyPoint((float, float, float, float, float, float, float,\n    float, float), (float, float, float), [float, float, float])\nC++: static void MultiplyPoint(const double elements[9],\n    const double in[3], double out[3])\n\n"},
  {"Multiply3x3", PyvtkMatrix3x3_Multiply3x3, METH_VARARGS,
   "V.Multiply3x3(vtkMatrix3x3, vtkMatrix3x3, vtkMatrix3x3)\nC++: static void Multiply3x3(vtkMatrix3x3 *a, vtkMatrix3x3 *b,\n    vtkMatrix3x3 *c)\nV.Multiply3x3((float, float, float, float, float, float, float,\n    float, float), (float, float, float, float, float, float,\n    float, float, float), [float, float, float, float, float,\n    float, float, float, float])\nC++: static void Multiply3x3(const double a[9], const double b[9],\n     double c[9])\n\nMultiplies matrices a and b and stores the result in c (c=a*b).\n"},
  {"Adjoint", PyvtkMatrix3x3_Adjoint, METH_VARARGS,
   "V.Adjoint(vtkMatrix3x3, vtkMatrix3x3)\nC++: void Adjoint(vtkMatrix3x3 *in, vtkMatrix3x3 *out)\nV.Adjoint((float, float, float, float, float, float, float, float,\n     float), [float, float, float, float, float, float, float,\n    float, float])\nC++: static void Adjoint(const double inElements[9],\n    double outElements[9])\n\nCompute adjoint of the matrix and put it into out.\n"},
  {"Determinant", PyvtkMatrix3x3_Determinant, METH_VARARGS,
   "V.Determinant() -> float\nC++: double Determinant()\nV.Determinant((float, float, float, float, float, float, float,\n    float, float)) -> float\nC++: static double Determinant(const double elements[9])\n\nCompute the determinant of the matrix and return it.\n"},
  {"SetElement", PyvtkMatrix3x3_SetElement, METH_VARARGS,
   "V.SetElement(int, int, float)\nC++: void SetElement(int i, int j, double value)\n\nSets the element i,j in the matrix.\n"},
  {"GetElement", PyvtkMatrix3x3_GetElement, METH_VARARGS,
   "V.GetElement(int, int) -> float\nC++: double GetElement(int i, int j)\n\nReturns the element i,j from the matrix.\n"},
  {"IsIdentity", PyvtkMatrix3x3_IsIdentity, METH_VARARGS,
   "V.IsIdentity() -> bool\nC++: bool IsIdentity()\n\n"},
  {"GetData", PyvtkMatrix3x3_GetData, METH_VARARGS,
   "V.GetData() -> (float, ...)\nC++: double *GetData()\n\nReturn a pointer to the first element of the matrix (double[9]).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMatrix3x3_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkMatrix3x3", // tp_name
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
  PyvtkMatrix3x3_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMatrix3x3_StaticNew()
{
  return vtkMatrix3x3::New();
}

PyObject *PyvtkMatrix3x3_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMatrix3x3_Type, PyvtkMatrix3x3_Methods,
    "vtkMatrix3x3",
 &PyvtkMatrix3x3_StaticNew);

  PyTypeObject *pytype = &PyvtkMatrix3x3_Type;

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

void PyVTKAddFile_vtkMatrix3x3(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMatrix3x3_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMatrix3x3", o) != 0)
  {
    Py_DECREF(o);
  }

}

