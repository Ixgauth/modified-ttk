// python wrapper for vtkInformation
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
#include "vtkStdString.h"
#include "vtkInformationKey.h"
#include "vtkInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInformation_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkInformation_Doc =
  "vtkInformation - Store vtkAlgorithm input/output information.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkInformation represents information and/or data for one input or\n"
  "one output of a vtkAlgorithm.  It maps from keys to values of several\n"
  "data types.  Instances of this class are collected in\n"
  "vtkInformationVector instances and passed to\n"
  "vtkAlgorithm::ProcessRequest calls.  The information and data\n"
  "referenced by the instance on a particular input or output define the\n"
  "request made to the vtkAlgorithm instance.\n\n";


static PyObject *
PyvtkInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInformation *tempr = vtkInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInformation::NewInstance());

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
PyvtkInformation_Modified_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Modified();
    }
    else
    {
      op->vtkInformation::Modified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Modified_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationKey"))
  {
    if (ap.IsBound())
    {
      op->Modified(temp0);
    }
    else
    {
      op->vtkInformation::Modified(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Modified(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkInformation_Modified_s1(self, args);
    case 1:
      return PyvtkInformation_Modified_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Modified");
  return nullptr;
}



static PyObject *
PyvtkInformation_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkInformation::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformation_GetNumberOfKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfKeys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfKeys() :
      op->vtkInformation::GetNumberOfKeys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformation_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Copy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformation_Append_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringVectorKey *temp0 = nullptr;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationStringVectorKey") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantVectorKey *temp0 = nullptr;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, *temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkInformation_Append_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationDataObjectKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationDataObjectKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationDoubleKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationDoubleKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationDoubleVectorKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationDoubleVectorKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationInformationKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationInformationKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationInformationVectorKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationInformationVectorKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationIntegerKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationIntegerKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s13(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationIntegerVectorKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationIntegerVectorKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s14(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationStringKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationStringKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s15(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationStringVectorKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationStringVectorKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s16(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationObjectBaseKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationObjectBaseKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s17(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationUnsignedLongKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationUnsignedLongKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s18(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseVectorKey *temp0 = nullptr;
  vtkObjectBase *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseVectorKey") &&
      ap.GetVTKObject(temp1, "vtkObjectBase"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformation_Append_Methods[] = {
  {nullptr, PyvtkInformation_Append_s1, METH_VARARGS,
   "@V|i *vtkInformation"},
  {nullptr, PyvtkInformation_Append_s2, METH_VARARGS,
   "@Vi *vtkInformationIntegerVectorKey"},
  {nullptr, PyvtkInformation_Append_s3, METH_VARARGS,
   "@Vs *vtkInformationStringVectorKey"},
  {nullptr, PyvtkInformation_Append_s4, METH_VARARGS,
   "@Vd *vtkInformationDoubleVectorKey"},
  {nullptr, PyvtkInformation_Append_s5, METH_VARARGS,
   "@VW *vtkInformationVariantVectorKey vtkVariant"},
  {nullptr, PyvtkInformation_Append_s6, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationKey"},
  {nullptr, PyvtkInformation_Append_s7, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationDataObjectKey"},
  {nullptr, PyvtkInformation_Append_s8, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationDoubleKey"},
  {nullptr, PyvtkInformation_Append_s9, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationDoubleVectorKey"},
  {nullptr, PyvtkInformation_Append_s10, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationInformationKey"},
  {nullptr, PyvtkInformation_Append_s11, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationInformationVectorKey"},
  {nullptr, PyvtkInformation_Append_s12, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationIntegerKey"},
  {nullptr, PyvtkInformation_Append_s13, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationIntegerVectorKey"},
  {nullptr, PyvtkInformation_Append_s14, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationStringKey"},
  {nullptr, PyvtkInformation_Append_s15, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationStringVectorKey"},
  {nullptr, PyvtkInformation_Append_s16, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationObjectBaseKey"},
  {nullptr, PyvtkInformation_Append_s17, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationUnsignedLongKey"},
  {nullptr, PyvtkInformation_Append_s18, METH_VARARGS,
   "@VV *vtkInformationObjectBaseVectorKey *vtkObjectBase"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkInformation_Append(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_Append_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkInformation_Append_s1(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Append");
  return nullptr;
}



static PyObject *
PyvtkInformation_CopyEntry_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationDataObjectKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationDataObjectKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationDoubleVectorKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationDoubleVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationVariantKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationVariantKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationVariantVectorKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationVariantVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationInformationKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationInformationKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationInformationVectorKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationInformationVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationIntegerKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationIntegerKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationIntegerVectorKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationIntegerVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationObjectBaseVectorKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationObjectBaseVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationRequestKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationRequestKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationStringKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationStringKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s13(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationStringVectorKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationStringVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s14(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationUnsignedLongKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationUnsignedLongKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformation_CopyEntry_Methods[] = {
  {nullptr, PyvtkInformation_CopyEntry_s1, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationKey"},
  {nullptr, PyvtkInformation_CopyEntry_s2, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationDataObjectKey"},
  {nullptr, PyvtkInformation_CopyEntry_s3, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationDoubleVectorKey"},
  {nullptr, PyvtkInformation_CopyEntry_s4, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationVariantKey"},
  {nullptr, PyvtkInformation_CopyEntry_s5, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationVariantVectorKey"},
  {nullptr, PyvtkInformation_CopyEntry_s6, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationInformationKey"},
  {nullptr, PyvtkInformation_CopyEntry_s7, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationInformationVectorKey"},
  {nullptr, PyvtkInformation_CopyEntry_s8, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationIntegerKey"},
  {nullptr, PyvtkInformation_CopyEntry_s9, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationIntegerVectorKey"},
  {nullptr, PyvtkInformation_CopyEntry_s10, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationObjectBaseVectorKey"},
  {nullptr, PyvtkInformation_CopyEntry_s11, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationRequestKey"},
  {nullptr, PyvtkInformation_CopyEntry_s12, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationStringKey"},
  {nullptr, PyvtkInformation_CopyEntry_s13, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationStringVectorKey"},
  {nullptr, PyvtkInformation_CopyEntry_s14, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationUnsignedLongKey"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkInformation_CopyEntry(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_CopyEntry_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyEntry");
  return nullptr;
}



static PyObject *
PyvtkInformation_CopyEntries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationKeyVectorKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationKeyVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntries(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntries(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformation_Has_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationRequestKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIdTypeKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIdTypeKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerPointerKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerPointerKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationUnsignedLongKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationUnsignedLongKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s13(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s14(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s15(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s16(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s17(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s18(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s19(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDataObjectKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDataObjectKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInformation_Has_Methods[] = {
  {nullptr, PyvtkInformation_Has_s1, METH_VARARGS,
   "@V *vtkInformationKey"},
  {nullptr, PyvtkInformation_Has_s2, METH_VARARGS,
   "@V *vtkInformationRequestKey"},
  {nullptr, PyvtkInformation_Has_s3, METH_VARARGS,
   "@V *vtkInformationIntegerKey"},
  {nullptr, PyvtkInformation_Has_s4, METH_VARARGS,
   "@V *vtkInformationIdTypeKey"},
  {nullptr, PyvtkInformation_Has_s5, METH_VARARGS,
   "@V *vtkInformationDoubleKey"},
  {nullptr, PyvtkInformation_Has_s6, METH_VARARGS,
   "@V *vtkInformationVariantKey"},
  {nullptr, PyvtkInformation_Has_s7, METH_VARARGS,
   "@V *vtkInformationIntegerVectorKey"},
  {nullptr, PyvtkInformation_Has_s8, METH_VARARGS,
   "@V *vtkInformationStringVectorKey"},
  {nullptr, PyvtkInformation_Has_s9, METH_VARARGS,
   "@V *vtkInformationIntegerPointerKey"},
  {nullptr, PyvtkInformation_Has_s10, METH_VARARGS,
   "@V *vtkInformationUnsignedLongKey"},
  {nullptr, PyvtkInformation_Has_s11, METH_VARARGS,
   "@V *vtkInformationDoubleVectorKey"},
  {nullptr, PyvtkInformation_Has_s12, METH_VARARGS,
   "@V *vtkInformationVariantVectorKey"},
  {nullptr, PyvtkInformation_Has_s13, METH_VARARGS,
   "@V *vtkInformationKeyVectorKey"},
  {nullptr, PyvtkInformation_Has_s14, METH_VARARGS,
   "@V *vtkInformationStringKey"},
  {nullptr, PyvtkInformation_Has_s15, METH_VARARGS,
   "@V *vtkInformationInformationKey"},
  {nullptr, PyvtkInformation_Has_s16, METH_VARARGS,
   "@V *vtkInformationInformationVectorKey"},
  {nullptr, PyvtkInformation_Has_s17, METH_VARARGS,
   "@V *vtkInformationObjectBaseKey"},
  {nullptr, PyvtkInformation_Has_s18, METH_VARARGS,
   "@V *vtkInformationObjectBaseVectorKey"},
  {nullptr, PyvtkInformation_Has_s19, METH_VARARGS,
   "@V *vtkInformationDataObjectKey"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkInformation_Has(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_Has_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Has");
  return nullptr;
}



static PyObject *
PyvtkInformation_Remove_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationRequestKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIdTypeKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIdTypeKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringVectorKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerPointerKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerPointerKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationUnsignedLongKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationUnsignedLongKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s13(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Remove(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s14(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s15(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s16(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s17(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationVectorKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s18(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s19(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseVectorKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s20(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseVectorKey *temp0 = nullptr;
  vtkObjectBase *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseVectorKey") &&
      ap.GetVTKObject(temp1, "vtkObjectBase"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Remove(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s21(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseVectorKey *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseVectorKey") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Remove(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s22(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDataObjectKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDataObjectKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformation_Remove_Methods[] = {
  {nullptr, PyvtkInformation_Remove_s1, METH_VARARGS,
   "@V *vtkInformationKey"},
  {nullptr, PyvtkInformation_Remove_s2, METH_VARARGS,
   "@V *vtkInformationRequestKey"},
  {nullptr, PyvtkInformation_Remove_s3, METH_VARARGS,
   "@V *vtkInformationIntegerKey"},
  {nullptr, PyvtkInformation_Remove_s4, METH_VARARGS,
   "@V *vtkInformationIdTypeKey"},
  {nullptr, PyvtkInformation_Remove_s5, METH_VARARGS,
   "@V *vtkInformationDoubleKey"},
  {nullptr, PyvtkInformation_Remove_s6, METH_VARARGS,
   "@V *vtkInformationVariantKey"},
  {nullptr, PyvtkInformation_Remove_s7, METH_VARARGS,
   "@V *vtkInformationIntegerVectorKey"},
  {nullptr, PyvtkInformation_Remove_s8, METH_VARARGS,
   "@V *vtkInformationStringVectorKey"},
  {nullptr, PyvtkInformation_Remove_s9, METH_VARARGS,
   "@V *vtkInformationIntegerPointerKey"},
  {nullptr, PyvtkInformation_Remove_s10, METH_VARARGS,
   "@V *vtkInformationUnsignedLongKey"},
  {nullptr, PyvtkInformation_Remove_s11, METH_VARARGS,
   "@V *vtkInformationDoubleVectorKey"},
  {nullptr, PyvtkInformation_Remove_s12, METH_VARARGS,
   "@V *vtkInformationVariantVectorKey"},
  {nullptr, PyvtkInformation_Remove_s13, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationKey"},
  {nullptr, PyvtkInformation_Remove_s14, METH_VARARGS,
   "@V *vtkInformationKeyVectorKey"},
  {nullptr, PyvtkInformation_Remove_s15, METH_VARARGS,
   "@V *vtkInformationStringKey"},
  {nullptr, PyvtkInformation_Remove_s16, METH_VARARGS,
   "@V *vtkInformationInformationKey"},
  {nullptr, PyvtkInformation_Remove_s17, METH_VARARGS,
   "@V *vtkInformationInformationVectorKey"},
  {nullptr, PyvtkInformation_Remove_s18, METH_VARARGS,
   "@V *vtkInformationObjectBaseKey"},
  {nullptr, PyvtkInformation_Remove_s19, METH_VARARGS,
   "@V *vtkInformationObjectBaseVectorKey"},
  {nullptr, PyvtkInformation_Remove_s20, METH_VARARGS,
   "@VV *vtkInformationObjectBaseVectorKey *vtkObjectBase"},
  {nullptr, PyvtkInformation_Remove_s21, METH_VARARGS,
   "@Vi *vtkInformationObjectBaseVectorKey"},
  {nullptr, PyvtkInformation_Remove_s22, METH_VARARGS,
   "@V *vtkInformationDataObjectKey"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkInformation_Remove(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_Remove_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Remove");
  return nullptr;
}



static PyObject *
PyvtkInformation_Set_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationRequestKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey"))
  {
    if (ap.IsBound())
    {
      op->Set(temp0);
    }
    else
    {
      op->vtkInformation::Set(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerKey *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerKey") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIdTypeKey *temp0 = nullptr;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationIdTypeKey") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleKey *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleKey") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantKey *temp0 = nullptr;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantKey") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, *temp1);
    }
    else
    {
      op->vtkInformation::Set(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkInformation_Set_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(size1);
  int *temp1 = store1.Data();
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = nullptr;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = nullptr;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringVectorKey *temp0 = nullptr;
  std::string temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformationStringVectorKey") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerPointerKey *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerPointerKey") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->Set(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1, temp2);
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
PyvtkInformation_Set_s11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationUnsignedLongKey *temp0 = nullptr;
  unsigned long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationUnsignedLongKey") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s13(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = nullptr;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s14(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = nullptr;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s15(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantVectorKey *temp0 = nullptr;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkVariant *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  vtkVariant *temp3 = nullptr;
  PyObject *pobj3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVariant") &&
      ap.GetSpecialObject(temp3, pobj3, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, *temp1, *temp2, *temp3);
    }
    else
    {
      op->vtkInformation::Set(temp0, *temp1, *temp2, *temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);
  Py_XDECREF(pobj3);

  return result;
}

static PyObject *
PyvtkInformation_Set_s16(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantVectorKey *temp0 = nullptr;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkVariant *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  vtkVariant *temp3 = nullptr;
  PyObject *pobj3 = nullptr;
  vtkVariant *temp4 = nullptr;
  PyObject *pobj4 = nullptr;
  vtkVariant *temp5 = nullptr;
  PyObject *pobj5 = nullptr;
  vtkVariant *temp6 = nullptr;
  PyObject *pobj6 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVariant") &&
      ap.GetSpecialObject(temp3, pobj3, "vtkVariant") &&
      ap.GetSpecialObject(temp4, pobj4, "vtkVariant") &&
      ap.GetSpecialObject(temp5, pobj5, "vtkVariant") &&
      ap.GetSpecialObject(temp6, pobj6, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, *temp1, *temp2, *temp3, *temp4, *temp5, *temp6);
    }
    else
    {
      op->vtkInformation::Set(temp0, *temp1, *temp2, *temp3, *temp4, *temp5, *temp6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);
  Py_XDECREF(pobj3);
  Py_XDECREF(pobj4);
  Py_XDECREF(pobj5);
  Py_XDECREF(pobj6);

  return result;
}

static PyObject *
PyvtkInformation_Set_s17(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringKey *temp0 = nullptr;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationStringKey") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s18(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationKey *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationKey") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s19(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationVectorKey *temp0 = nullptr;
  vtkInformationVector *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationVector"))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s20(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseKey *temp0 = nullptr;
  vtkObjectBase *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseKey") &&
      ap.GetVTKObject(temp1, "vtkObjectBase"))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s21(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseVectorKey *temp0 = nullptr;
  vtkObjectBase *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseVectorKey") &&
      ap.GetVTKObject(temp1, "vtkObjectBase") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s22(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDataObjectKey *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationDataObjectKey") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformation_Set_Methods[] = {
  {nullptr, PyvtkInformation_Set_s2, METH_VARARGS,
   "@Vi *vtkInformationIntegerKey"},
  {nullptr, PyvtkInformation_Set_s3, METH_VARARGS,
   "@Vk *vtkInformationIdTypeKey"},
  {nullptr, PyvtkInformation_Set_s4, METH_VARARGS,
   "@Vd *vtkInformationDoubleKey"},
  {nullptr, PyvtkInformation_Set_s5, METH_VARARGS,
   "@VW *vtkInformationVariantKey vtkVariant"},
  {nullptr, PyvtkInformation_Set_s6, METH_VARARGS,
   "@VPi *vtkInformationIntegerVectorKey *i"},
  {nullptr, PyvtkInformation_Set_s7, METH_VARARGS,
   "@Viii *vtkInformationIntegerVectorKey"},
  {nullptr, PyvtkInformation_Set_s8, METH_VARARGS,
   "@Viiiiii *vtkInformationIntegerVectorKey"},
  {nullptr, PyvtkInformation_Set_s9, METH_VARARGS,
   "@Vs|i *vtkInformationStringVectorKey"},
  {nullptr, PyvtkInformation_Set_s10, METH_VARARGS,
   "@VPi *vtkInformationIntegerPointerKey *i"},
  {nullptr, PyvtkInformation_Set_s11, METH_VARARGS,
   "@VL *vtkInformationUnsignedLongKey"},
  {nullptr, PyvtkInformation_Set_s12, METH_VARARGS,
   "@VPi *vtkInformationDoubleVectorKey *d"},
  {nullptr, PyvtkInformation_Set_s13, METH_VARARGS,
   "@Vddd *vtkInformationDoubleVectorKey"},
  {nullptr, PyvtkInformation_Set_s14, METH_VARARGS,
   "@Vdddddd *vtkInformationDoubleVectorKey"},
  {nullptr, PyvtkInformation_Set_s15, METH_VARARGS,
   "@VWWW *vtkInformationVariantVectorKey vtkVariant vtkVariant vtkVariant"},
  {nullptr, PyvtkInformation_Set_s16, METH_VARARGS,
   "@VWWWWWW *vtkInformationVariantVectorKey vtkVariant vtkVariant vtkVariant vtkVariant vtkVariant vtkVariant"},
  {nullptr, PyvtkInformation_Set_s17, METH_VARARGS,
   "@Vs *vtkInformationStringKey"},
  {nullptr, PyvtkInformation_Set_s18, METH_VARARGS,
   "@VV *vtkInformationInformationKey *vtkInformation"},
  {nullptr, PyvtkInformation_Set_s19, METH_VARARGS,
   "@VV *vtkInformationInformationVectorKey *vtkInformationVector"},
  {nullptr, PyvtkInformation_Set_s20, METH_VARARGS,
   "@VV *vtkInformationObjectBaseKey *vtkObjectBase"},
  {nullptr, PyvtkInformation_Set_s21, METH_VARARGS,
   "@VV|i *vtkInformationObjectBaseVectorKey *vtkObjectBase"},
  {nullptr, PyvtkInformation_Set_s22, METH_VARARGS,
   "@VV *vtkInformationDataObjectKey *vtkDataObject"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkInformation_Set(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_Set_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkInformation_Set_s1(self, args);
    case 2:
    case 3:
    case 4:
    case 7:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Set");
  return nullptr;
}



static PyObject *
PyvtkInformation_Get_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIdTypeKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIdTypeKey"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleKey"))
  {
    double tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantKey"))
  {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->Get(temp0) :
      &op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey"))
  {
    size_t sizer = op->Length(temp0);
    int *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->Get(temp0, temp1) :
      op->vtkInformation::Get(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->Get(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Get(temp0, temp1);
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
PyvtkInformation_Get_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringVectorKey *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationStringVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    const char *tempr = (ap.IsBound() ?
      op->Get(temp0, temp1) :
      op->vtkInformation::Get(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerPointerKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerPointerKey"))
  {
    int *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerPointerKey *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerPointerKey") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->Get(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Get(temp0, temp1);
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
PyvtkInformation_Get_s11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationUnsignedLongKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationUnsignedLongKey"))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey"))
  {
    size_t sizer = op->Length(temp0);
    double *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s13(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey") &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->Get(temp0, temp1) :
      op->vtkInformation::Get(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s14(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->Get(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Get(temp0, temp1);
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
PyvtkInformation_Get_s15(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantVectorKey *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey") &&
      ap.GetValue(temp1))
  {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->Get(temp0, temp1) :
      &op->vtkInformation::Get(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s16(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetValue(temp1))
  {
    vtkInformationKey *tempr = (ap.IsBound() ?
      op->Get(temp0, temp1) :
      op->vtkInformation::Get(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s17(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringKey"))
  {
    const char *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s18(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationKey"))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s19(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationVectorKey"))
  {
    vtkInformationVector *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s20(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseKey"))
  {
    vtkObjectBase *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s21(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseVectorKey *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkObjectBase *tempr = (ap.IsBound() ?
      op->Get(temp0, temp1) :
      op->vtkInformation::Get(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s22(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDataObjectKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDataObjectKey"))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInformation_Get_Methods[] = {
  {nullptr, PyvtkInformation_Get_s1, METH_VARARGS,
   "@V *vtkInformationIntegerKey"},
  {nullptr, PyvtkInformation_Get_s2, METH_VARARGS,
   "@V *vtkInformationIdTypeKey"},
  {nullptr, PyvtkInformation_Get_s3, METH_VARARGS,
   "@V *vtkInformationDoubleKey"},
  {nullptr, PyvtkInformation_Get_s4, METH_VARARGS,
   "@V *vtkInformationVariantKey"},
  {nullptr, PyvtkInformation_Get_s5, METH_VARARGS,
   "@V *vtkInformationIntegerVectorKey"},
  {nullptr, PyvtkInformation_Get_s6, METH_VARARGS,
   "@Vi *vtkInformationIntegerVectorKey"},
  {nullptr, PyvtkInformation_Get_s7, METH_VARARGS,
   "@VP *vtkInformationIntegerVectorKey *i"},
  {nullptr, PyvtkInformation_Get_s8, METH_VARARGS,
   "@V|i *vtkInformationStringVectorKey"},
  {nullptr, PyvtkInformation_Get_s9, METH_VARARGS,
   "@V *vtkInformationIntegerPointerKey"},
  {nullptr, PyvtkInformation_Get_s10, METH_VARARGS,
   "@VP *vtkInformationIntegerPointerKey *i"},
  {nullptr, PyvtkInformation_Get_s11, METH_VARARGS,
   "@V *vtkInformationUnsignedLongKey"},
  {nullptr, PyvtkInformation_Get_s12, METH_VARARGS,
   "@V *vtkInformationDoubleVectorKey"},
  {nullptr, PyvtkInformation_Get_s13, METH_VARARGS,
   "@Vi *vtkInformationDoubleVectorKey"},
  {nullptr, PyvtkInformation_Get_s14, METH_VARARGS,
   "@VP *vtkInformationDoubleVectorKey *d"},
  {nullptr, PyvtkInformation_Get_s15, METH_VARARGS,
   "@Vi *vtkInformationVariantVectorKey"},
  {nullptr, PyvtkInformation_Get_s16, METH_VARARGS,
   "@Vi *vtkInformationKeyVectorKey"},
  {nullptr, PyvtkInformation_Get_s17, METH_VARARGS,
   "@V *vtkInformationStringKey"},
  {nullptr, PyvtkInformation_Get_s18, METH_VARARGS,
   "@V *vtkInformationInformationKey"},
  {nullptr, PyvtkInformation_Get_s19, METH_VARARGS,
   "@V *vtkInformationInformationVectorKey"},
  {nullptr, PyvtkInformation_Get_s20, METH_VARARGS,
   "@V *vtkInformationObjectBaseKey"},
  {nullptr, PyvtkInformation_Get_s21, METH_VARARGS,
   "@V|i *vtkInformationObjectBaseVectorKey"},
  {nullptr, PyvtkInformation_Get_s22, METH_VARARGS,
   "@V *vtkInformationDataObjectKey"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkInformation_Get(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_Get_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Get");
  return nullptr;
}



static PyObject *
PyvtkInformation_Length_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformation::Length(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Length_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformation::Length(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Length_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerPointerKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerPointerKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformation::Length(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Length_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformation::Length(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Length_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformation::Length(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Length_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformation::Length(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Length_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformation::Length(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInformation_Length_Methods[] = {
  {nullptr, PyvtkInformation_Length_s1, METH_VARARGS,
   "@V *vtkInformationIntegerVectorKey"},
  {nullptr, PyvtkInformation_Length_s2, METH_VARARGS,
   "@V *vtkInformationStringVectorKey"},
  {nullptr, PyvtkInformation_Length_s3, METH_VARARGS,
   "@V *vtkInformationIntegerPointerKey"},
  {nullptr, PyvtkInformation_Length_s4, METH_VARARGS,
   "@V *vtkInformationDoubleVectorKey"},
  {nullptr, PyvtkInformation_Length_s5, METH_VARARGS,
   "@V *vtkInformationVariantVectorKey"},
  {nullptr, PyvtkInformation_Length_s6, METH_VARARGS,
   "@V *vtkInformationKeyVectorKey"},
  {nullptr, PyvtkInformation_Length_s7, METH_VARARGS,
   "@V *vtkInformationObjectBaseVectorKey"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkInformation_Length(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_Length_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Length");
  return nullptr;
}



static PyObject *
PyvtkInformation_AppendUnique_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationDataObjectKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationDataObjectKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationDoubleKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationDoubleKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationDoubleVectorKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationDoubleVectorKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationInformationKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationInformationKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationInformationVectorKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationInformationVectorKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationIntegerKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationIntegerKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationIntegerVectorKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationIntegerVectorKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationStringKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationStringKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationStringVectorKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationStringVectorKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationObjectBaseKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationObjectBaseKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationUnsignedLongKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationUnsignedLongKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformation_AppendUnique_Methods[] = {
  {nullptr, PyvtkInformation_AppendUnique_s1, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationKey"},
  {nullptr, PyvtkInformation_AppendUnique_s2, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationDataObjectKey"},
  {nullptr, PyvtkInformation_AppendUnique_s3, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationDoubleKey"},
  {nullptr, PyvtkInformation_AppendUnique_s4, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationDoubleVectorKey"},
  {nullptr, PyvtkInformation_AppendUnique_s5, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationInformationKey"},
  {nullptr, PyvtkInformation_AppendUnique_s6, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationInformationVectorKey"},
  {nullptr, PyvtkInformation_AppendUnique_s7, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationIntegerKey"},
  {nullptr, PyvtkInformation_AppendUnique_s8, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationIntegerVectorKey"},
  {nullptr, PyvtkInformation_AppendUnique_s9, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationStringKey"},
  {nullptr, PyvtkInformation_AppendUnique_s10, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationStringVectorKey"},
  {nullptr, PyvtkInformation_AppendUnique_s11, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationObjectBaseKey"},
  {nullptr, PyvtkInformation_AppendUnique_s12, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationUnsignedLongKey"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkInformation_AppendUnique(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_AppendUnique_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AppendUnique");
  return nullptr;
}



static PyObject *
PyvtkInformation_GetKey_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationDataObjectKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDataObjectKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationDoubleKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationDoubleVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationInformationKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationInformationVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationVectorKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s6(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationIntegerKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s7(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationIntegerVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s8(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationRequestKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s9(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationStringKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s10(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationStringVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringVectorKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s11(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s12(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationUnsignedLongKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationUnsignedLongKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s13(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationVariantKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s14(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationVariantVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInformation_GetKey_Methods[] = {
  {nullptr, PyvtkInformation_GetKey_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformationDataObjectKey"},
  {nullptr, PyvtkInformation_GetKey_s2, METH_VARARGS | METH_STATIC,
   "V *vtkInformationDoubleKey"},
  {nullptr, PyvtkInformation_GetKey_s3, METH_VARARGS | METH_STATIC,
   "V *vtkInformationDoubleVectorKey"},
  {nullptr, PyvtkInformation_GetKey_s4, METH_VARARGS | METH_STATIC,
   "V *vtkInformationInformationKey"},
  {nullptr, PyvtkInformation_GetKey_s5, METH_VARARGS | METH_STATIC,
   "V *vtkInformationInformationVectorKey"},
  {nullptr, PyvtkInformation_GetKey_s6, METH_VARARGS | METH_STATIC,
   "V *vtkInformationIntegerKey"},
  {nullptr, PyvtkInformation_GetKey_s7, METH_VARARGS | METH_STATIC,
   "V *vtkInformationIntegerVectorKey"},
  {nullptr, PyvtkInformation_GetKey_s8, METH_VARARGS | METH_STATIC,
   "V *vtkInformationRequestKey"},
  {nullptr, PyvtkInformation_GetKey_s9, METH_VARARGS | METH_STATIC,
   "V *vtkInformationStringKey"},
  {nullptr, PyvtkInformation_GetKey_s10, METH_VARARGS | METH_STATIC,
   "V *vtkInformationStringVectorKey"},
  {nullptr, PyvtkInformation_GetKey_s11, METH_VARARGS | METH_STATIC,
   "V *vtkInformationKey"},
  {nullptr, PyvtkInformation_GetKey_s12, METH_VARARGS | METH_STATIC,
   "V *vtkInformationUnsignedLongKey"},
  {nullptr, PyvtkInformation_GetKey_s13, METH_VARARGS | METH_STATIC,
   "V *vtkInformationVariantKey"},
  {nullptr, PyvtkInformation_GetKey_s14, METH_VARARGS | METH_STATIC,
   "V *vtkInformationVariantVectorKey"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkInformation_GetKey(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_GetKey_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetKey");
  return nullptr;
}



static PyObject *
PyvtkInformation_SetRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationRequestKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey"))
  {
    if (ap.IsBound())
    {
      op->SetRequest(temp0);
    }
    else
    {
      op->vtkInformation::SetRequest(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformation_GetRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformationRequestKey *tempr = (ap.IsBound() ?
      op->GetRequest() :
      op->vtkInformation::GetRequest());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInformation_Methods[] = {
  {"IsTypeOf", PyvtkInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInformation\nC++: static vtkInformation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInformation\nC++: vtkInformation *NewInstance()\n\n"},
  {"Modified", PyvtkInformation_Modified, METH_VARARGS,
   "V.Modified()\nC++: void Modified() override;\nV.Modified(vtkInformationKey)\nC++: void Modified(vtkInformationKey *key)\n\nModified signature with no arguments that calls Modified on\nvtkObject superclass.\n"},
  {"Clear", PyvtkInformation_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nClear all information entries.\n"},
  {"GetNumberOfKeys", PyvtkInformation_GetNumberOfKeys, METH_VARARGS,
   "V.GetNumberOfKeys() -> int\nC++: int GetNumberOfKeys()\n\nReturn the number of keys in this information object (as would be\nreturned by iterating over the keys).\n"},
  {"Copy", PyvtkInformation_Copy, METH_VARARGS,
   "V.Copy(vtkInformation, int)\nC++: void Copy(vtkInformation *from, int deep=0)\n\nCopy all information entries from the given vtkInformation\ninstance.  Any previously existing entries are removed.  If\ndeep==1, a deep copy of the information structure is performed\n(new instances of any contained vtkInformation and\nvtkInformationVector objects are created).\n"},
  {"Append", PyvtkInformation_Append, METH_VARARGS,
   "V.Append(vtkInformation, int)\nC++: void Append(vtkInformation *from, int deep=0)\nV.Append(vtkInformationIntegerVectorKey, int)\nC++: void Append(vtkInformationIntegerVectorKey *key, int value)\nV.Append(vtkInformationStringVectorKey, string)\nC++: void Append(vtkInformationStringVectorKey *key,\n    const std::string &value)\nV.Append(vtkInformationDoubleVectorKey, float)\nC++: void Append(vtkInformationDoubleVectorKey *key, double value)\nV.Append(vtkInformationVariantVectorKey, vtkVariant)\nC++: void Append(vtkInformationVariantVectorKey *key,\n    const vtkVariant &value)\nV.Append(vtkInformationKeyVectorKey, vtkInformationKey)\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationKey *value)\nV.Append(vtkInformationKeyVectorKey, vtkInformationDataObjectKey)\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationDataObjectKey *value)\nV.Append(vtkInformationKeyVectorKey, vtkInformationDoubleKey)\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationDoubleKey *value)\nV.Append(vtkInformationKeyVectorKey,\n    vtkInformationDoubleVectorKey)\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationDoubleVectorKey *value)\nV.Append(vtkInformationKeyVectorKey, vtkInformationInformationKey)\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationInformationKey *value)\nV.Append(vtkInformationKeyVectorKey,\n    vtkInformationInformationVectorKey)\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationInformationVectorKey *value)\nV.Append(vtkInformationKeyVectorKey, vtkInformationIntegerKey)\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationIntegerKey *value)\nV.Append(vtkInformationKeyVectorKey,\n    vtkInformationIntegerVectorKey)\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationIntegerVectorKey *value)\n\nAppend all information entries from the given vtkInformation\ninstance. If deep==1, a deep copy of the information structure is\nperformed (new instances of  ...\n [Truncated]\n"},
  {"CopyEntry", PyvtkInformation_CopyEntry, METH_VARARGS,
   "V.CopyEntry(vtkInformation, vtkInformationKey, int)\nC++: void CopyEntry(vtkInformation *from, vtkInformationKey *key,\n    int deep=0)\nV.CopyEntry(vtkInformation, vtkInformationDataObjectKey, int)\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationDataObjectKey *key, int deep=0)\nV.CopyEntry(vtkInformation, vtkInformationDoubleVectorKey, int)\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationDoubleVectorKey *key, int deep=0)\nV.CopyEntry(vtkInformation, vtkInformationVariantKey, int)\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationVariantKey *key, int deep=0)\nV.CopyEntry(vtkInformation, vtkInformationVariantVectorKey, int)\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationVariantVectorKey *key, int deep=0)\nV.CopyEntry(vtkInformation, vtkInformationInformationKey, int)\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationInformationKey *key, int deep=0)\nV.CopyEntry(vtkInformation, vtkInformationInformationVectorKey,\n    int)\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationInformationVectorKey *key, int deep=0)\nV.CopyEntry(vtkInformation, vtkInformationIntegerKey, int)\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationIntegerKey *key, int deep=0)\nV.CopyEntry(vtkInformation, vtkInformationIntegerVectorKey, int)\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationIntegerVectorKey *key, int deep=0)\nV.CopyEntry(vtkInformation, vtkInformationObjectBaseVectorKey,\n    int)\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationObjectBaseVectorKey *key, int deep=0)\nV.CopyEntry(vtkInformation, vtkInformationRequestKey, int)\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationRequestKey *key, int deep=0)\nV.CopyEntry(vtkInformation, vtkInformationStringKey, int)\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationStringKey *key, int deep=0)\n\nCopy the key/value pair associated with the given key in the\ngiven information object.  If deep=1, a deep copy of the\ninformati ...\n [Truncated]\n"},
  {"CopyEntries", PyvtkInformation_CopyEntries, METH_VARARGS,
   "V.CopyEntries(vtkInformation, vtkInformationKeyVectorKey, int)\nC++: void CopyEntries(vtkInformation *from,\n    vtkInformationKeyVectorKey *key, int deep=0)\n\nUse the given key to lookup a list of other keys in the given\ninformation object.  The key/value pairs associated with these\nother keys will be copied.  If deep==1, a deep copy of the\ninformation structure is performed.\n"},
  {"Has", PyvtkInformation_Has, METH_VARARGS,
   "V.Has(vtkInformationKey) -> int\nC++: int Has(vtkInformationKey *key)\nV.Has(vtkInformationRequestKey) -> int\nC++: int Has(vtkInformationRequestKey *key)\nV.Has(vtkInformationIntegerKey) -> int\nC++: int Has(vtkInformationIntegerKey *key)\nV.Has(vtkInformationIdTypeKey) -> int\nC++: int Has(vtkInformationIdTypeKey *key)\nV.Has(vtkInformationDoubleKey) -> int\nC++: int Has(vtkInformationDoubleKey *key)\nV.Has(vtkInformationVariantKey) -> int\nC++: int Has(vtkInformationVariantKey *key)\nV.Has(vtkInformationIntegerVectorKey) -> int\nC++: int Has(vtkInformationIntegerVectorKey *key)\nV.Has(vtkInformationStringVectorKey) -> int\nC++: int Has(vtkInformationStringVectorKey *key)\nV.Has(vtkInformationIntegerPointerKey) -> int\nC++: int Has(vtkInformationIntegerPointerKey *key)\nV.Has(vtkInformationUnsignedLongKey) -> int\nC++: int Has(vtkInformationUnsignedLongKey *key)\nV.Has(vtkInformationDoubleVectorKey) -> int\nC++: int Has(vtkInformationDoubleVectorKey *key)\nV.Has(vtkInformationVariantVectorKey) -> int\nC++: int Has(vtkInformationVariantVectorKey *key)\nV.Has(vtkInformationKeyVectorKey) -> int\nC++: int Has(vtkInformationKeyVectorKey *key)\nV.Has(vtkInformationStringKey) -> int\nC++: int Has(vtkInformationStringKey *key)\nV.Has(vtkInformationInformationKey) -> int\nC++: int Has(vtkInformationInformationKey *key)\nV.Has(vtkInformationInformationVectorKey) -> int\nC++: int Has(vtkInformationInformationVectorKey *key)\nV.Has(vtkInformationObjectBaseKey) -> int\nC++: int Has(vtkInformationObjectBaseKey *key)\nV.Has(vtkInformationObjectBaseVectorKey) -> int\nC++: int Has(vtkInformationObjectBaseVectorKey *key)\nV.Has(vtkInformationDataObjectKey) -> int\nC++: int Has(vtkInformationDataObjectKey *key)\n\nCheck whether the given key appears in this information object.\n"},
  {"Remove", PyvtkInformation_Remove, METH_VARARGS,
   "V.Remove(vtkInformationKey)\nC++: void Remove(vtkInformationKey *key)\nV.Remove(vtkInformationRequestKey)\nC++: void Remove(vtkInformationRequestKey *key)\nV.Remove(vtkInformationIntegerKey)\nC++: void Remove(vtkInformationIntegerKey *key)\nV.Remove(vtkInformationIdTypeKey)\nC++: void Remove(vtkInformationIdTypeKey *key)\nV.Remove(vtkInformationDoubleKey)\nC++: void Remove(vtkInformationDoubleKey *key)\nV.Remove(vtkInformationVariantKey)\nC++: void Remove(vtkInformationVariantKey *key)\nV.Remove(vtkInformationIntegerVectorKey)\nC++: void Remove(vtkInformationIntegerVectorKey *key)\nV.Remove(vtkInformationStringVectorKey)\nC++: void Remove(vtkInformationStringVectorKey *key)\nV.Remove(vtkInformationIntegerPointerKey)\nC++: void Remove(vtkInformationIntegerPointerKey *key)\nV.Remove(vtkInformationUnsignedLongKey)\nC++: void Remove(vtkInformationUnsignedLongKey *key)\nV.Remove(vtkInformationDoubleVectorKey)\nC++: void Remove(vtkInformationDoubleVectorKey *key)\nV.Remove(vtkInformationVariantVectorKey)\nC++: void Remove(vtkInformationVariantVectorKey *key)\nV.Remove(vtkInformationKeyVectorKey, vtkInformationKey)\nC++: void Remove(vtkInformationKeyVectorKey *key,\n    vtkInformationKey *value)\nV.Remove(vtkInformationKeyVectorKey)\nC++: void Remove(vtkInformationKeyVectorKey *key)\nV.Remove(vtkInformationStringKey)\nC++: void Remove(vtkInformationStringKey *key)\nV.Remove(vtkInformationInformationKey)\nC++: void Remove(vtkInformationInformationKey *key)\nV.Remove(vtkInformationInformationVectorKey)\nC++: void Remove(vtkInformationInformationVectorKey *key)\nV.Remove(vtkInformationObjectBaseKey)\nC++: void Remove(vtkInformationObjectBaseKey *key)\nV.Remove(vtkInformationObjectBaseVectorKey)\nC++: void Remove(vtkInformationObjectBaseVectorKey *key)\nV.Remove(vtkInformationObjectBaseVectorKey, vtkObjectBase)\nC++: void Remove(vtkInformationObjectBaseVectorKey *key,\n    vtkObjectBase *objectToRemove)\n\nRemove the given key and its data from this information object.\n"},
  {"Set", PyvtkInformation_Set, METH_VARARGS,
   "V.Set(vtkInformationRequestKey)\nC++: void Set(vtkInformationRequestKey *key)\nV.Set(vtkInformationIntegerKey, int)\nC++: void Set(vtkInformationIntegerKey *key, int value)\nV.Set(vtkInformationIdTypeKey, int)\nC++: void Set(vtkInformationIdTypeKey *key, vtkIdType value)\nV.Set(vtkInformationDoubleKey, float)\nC++: void Set(vtkInformationDoubleKey *key, double value)\nV.Set(vtkInformationVariantKey, vtkVariant)\nC++: void Set(vtkInformationVariantKey *key,\n    const vtkVariant &value)\nV.Set(vtkInformationIntegerVectorKey, (int, ...), int)\nC++: void Set(vtkInformationIntegerVectorKey *key,\n    const int *value, int length)\nV.Set(vtkInformationIntegerVectorKey, int, int, int)\nC++: void Set(vtkInformationIntegerVectorKey *key, int value1,\n    int value2, int value3)\nV.Set(vtkInformationIntegerVectorKey, int, int, int, int, int,\n    int)\nC++: void Set(vtkInformationIntegerVectorKey *key, int value1,\n    int value2, int value3, int value4, int value5, int value6)\nV.Set(vtkInformationStringVectorKey, string, int)\nC++: void Set(vtkInformationStringVectorKey *key,\n    const std::string &value, int idx=0)\nV.Set(vtkInformationIntegerPointerKey, [int, ...], int)\nC++: void Set(vtkInformationIntegerPointerKey *key, int *value,\n    int length)\nV.Set(vtkInformationUnsignedLongKey, int)\nC++: void Set(vtkInformationUnsignedLongKey *key,\n    unsigned long value)\nV.Set(vtkInformationDoubleVectorKey, (float, ...), int)\nC++: void Set(vtkInformationDoubleVectorKey *key,\n    const double *value, int length)\nV.Set(vtkInformationDoubleVectorKey, float, float, float)\nC++: void Set(vtkInformationDoubleVectorKey *key, double value1,\n    double value2, double value3)\nV.Set(vtkInformationDoubleVectorKey, float, float, float, float,\n    float, float)\nC++: void Set(vtkInformationDoubleVectorKey *key, double value1,\n    double value2, double value3, double value4, double value5,\n    double value6)\n\nGet/Set a request-valued entry.\n"},
  {"Get", PyvtkInformation_Get, METH_VARARGS,
   "V.Get(vtkInformationIntegerKey) -> int\nC++: int Get(vtkInformationIntegerKey *key)\nV.Get(vtkInformationIdTypeKey) -> int\nC++: vtkIdType Get(vtkInformationIdTypeKey *key)\nV.Get(vtkInformationDoubleKey) -> float\nC++: double Get(vtkInformationDoubleKey *key)\nV.Get(vtkInformationVariantKey) -> vtkVariant\nC++: const vtkVariant &Get(vtkInformationVariantKey *key)\nV.Get(vtkInformationIntegerVectorKey) -> (int, ...)\nC++: int *Get(vtkInformationIntegerVectorKey *key)\nV.Get(vtkInformationIntegerVectorKey, int) -> int\nC++: int Get(vtkInformationIntegerVectorKey *key, int idx)\nV.Get(vtkInformationIntegerVectorKey, [int, ...])\nC++: void Get(vtkInformationIntegerVectorKey *key, int *value)\nV.Get(vtkInformationStringVectorKey, int) -> string\nC++: const char *Get(vtkInformationStringVectorKey *key,\n    int idx=0)\nV.Get(vtkInformationIntegerPointerKey) -> (int, ...)\nC++: int *Get(vtkInformationIntegerPointerKey *key)\nV.Get(vtkInformationIntegerPointerKey, [int, ...])\nC++: void Get(vtkInformationIntegerPointerKey *key, int *value)\nV.Get(vtkInformationUnsignedLongKey) -> int\nC++: unsigned long Get(vtkInformationUnsignedLongKey *key)\nV.Get(vtkInformationDoubleVectorKey) -> (float, ...)\nC++: double *Get(vtkInformationDoubleVectorKey *key)\nV.Get(vtkInformationDoubleVectorKey, int) -> float\nC++: double Get(vtkInformationDoubleVectorKey *key, int idx)\nV.Get(vtkInformationDoubleVectorKey, [float, ...])\nC++: void Get(vtkInformationDoubleVectorKey *key, double *value)\nV.Get(vtkInformationVariantVectorKey, int) -> vtkVariant\nC++: const vtkVariant &Get(vtkInformationVariantVectorKey *key,\n    int idx)\nV.Get(vtkInformationKeyVectorKey, int) -> vtkInformationKey\nC++: vtkInformationKey *Get(vtkInformationKeyVectorKey *key,\n    int idx)\nV.Get(vtkInformationStringKey) -> string\nC++: const char *Get(vtkInformationStringKey *key)\nV.Get(vtkInformationInformationKey) -> vtkInformation\nC++: vtkInformation *Get(vtkInformationInformationKey *key)\n\nGet/Set an integer-valued entry.\n"},
  {"Length", PyvtkInformation_Length, METH_VARARGS,
   "V.Length(vtkInformationIntegerVectorKey) -> int\nC++: int Length(vtkInformationIntegerVectorKey *key)\nV.Length(vtkInformationStringVectorKey) -> int\nC++: int Length(vtkInformationStringVectorKey *key)\nV.Length(vtkInformationIntegerPointerKey) -> int\nC++: int Length(vtkInformationIntegerPointerKey *key)\nV.Length(vtkInformationDoubleVectorKey) -> int\nC++: int Length(vtkInformationDoubleVectorKey *key)\nV.Length(vtkInformationVariantVectorKey) -> int\nC++: int Length(vtkInformationVariantVectorKey *key)\nV.Length(vtkInformationKeyVectorKey) -> int\nC++: int Length(vtkInformationKeyVectorKey *key)\nV.Length(vtkInformationObjectBaseVectorKey) -> int\nC++: int Length(vtkInformationObjectBaseVectorKey *key)\n\nGet/Set an integer-vector-valued entry.\n"},
  {"AppendUnique", PyvtkInformation_AppendUnique, METH_VARARGS,
   "V.AppendUnique(vtkInformationKeyVectorKey, vtkInformationKey)\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationKey *value)\nV.AppendUnique(vtkInformationKeyVectorKey,\n    vtkInformationDataObjectKey)\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationDataObjectKey *value)\nV.AppendUnique(vtkInformationKeyVectorKey,\n    vtkInformationDoubleKey)\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationDoubleKey *value)\nV.AppendUnique(vtkInformationKeyVectorKey,\n    vtkInformationDoubleVectorKey)\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationDoubleVectorKey *value)\nV.AppendUnique(vtkInformationKeyVectorKey,\n    vtkInformationInformationKey)\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationInformationKey *value)\nV.AppendUnique(vtkInformationKeyVectorKey,\n    vtkInformationInformationVectorKey)\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationInformationVectorKey *value)\nV.AppendUnique(vtkInformationKeyVectorKey,\n    vtkInformationIntegerKey)\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationIntegerKey *value)\nV.AppendUnique(vtkInformationKeyVectorKey,\n    vtkInformationIntegerVectorKey)\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationIntegerVectorKey *value)\nV.AppendUnique(vtkInformationKeyVectorKey,\n    vtkInformationStringKey)\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationStringKey *value)\nV.AppendUnique(vtkInformationKeyVectorKey,\n    vtkInformationStringVectorKey)\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationStringVectorKey *value)\nV.AppendUnique(vtkInformationKeyVectorKey,\n    vtkInformationObjectBaseKey)\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationObjectBaseKey *value)\n\nGet/Set an InformationKey-vector-valued entry.\n"},
  {"GetKey", PyvtkInformation_GetKey, METH_VARARGS,
   "V.GetKey(vtkInformationDataObjectKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationDataObjectKey *key)\nV.GetKey(vtkInformationDoubleKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationDoubleKey *key)\nV.GetKey(vtkInformationDoubleVectorKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationDoubleVectorKey *key)\nV.GetKey(vtkInformationInformationKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationInformationKey *key)\nV.GetKey(vtkInformationInformationVectorKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationInformationVectorKey *key)\nV.GetKey(vtkInformationIntegerKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationIntegerKey *key)\nV.GetKey(vtkInformationIntegerVectorKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationIntegerVectorKey *key)\nV.GetKey(vtkInformationRequestKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationRequestKey *key)\nV.GetKey(vtkInformationStringKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationStringKey *key)\nV.GetKey(vtkInformationStringVectorKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationStringVectorKey *key)\nV.GetKey(vtkInformationKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(vtkInformationKey *key)\nV.GetKey(vtkInformationUnsignedLongKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationUnsignedLongKey *key)\nV.GetKey(vtkInformationVariantKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationVariantKey *key)\nV.GetKey(vtkInformationVariantVectorKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationVariantVectorKey *key)\n\nUpcast the given key instance.\n"},
  {"SetRequest", PyvtkInformation_SetRequest, METH_VARARGS,
   "V.SetRequest(vtkInformationRequestKey)\nC++: void SetRequest(vtkInformationRequestKey *request)\n\nGet/Set the Request ivar\n"},
  {"GetRequest", PyvtkInformation_GetRequest, METH_VARARGS,
   "V.GetRequest() -> vtkInformationRequestKey\nC++: vtkInformationRequestKey *GetRequest()\n\nGet/Set the Request ivar\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkInformation", // tp_name
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
  PyvtkInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInformation_StaticNew()
{
  return vtkInformation::New();
}

PyObject *PyvtkInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInformation_Type, PyvtkInformation_Methods,
    "vtkInformation",
 &PyvtkInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkInformation_Type;

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

void PyVTKAddFile_vtkInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

