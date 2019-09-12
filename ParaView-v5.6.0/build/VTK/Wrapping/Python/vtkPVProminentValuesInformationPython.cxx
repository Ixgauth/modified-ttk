// python wrapper for vtkPVProminentValuesInformation
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
#include "vtkMultiProcessStream.h"
#include "vtkPVProminentValuesInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVProminentValuesInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVProminentValuesInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVInformation_ClassNew
extern "C" { PyObject *PyvtkPVInformation_ClassNew(); }
#define DECLARED_PyvtkPVInformation_ClassNew
#endif

static const char *PyvtkPVProminentValuesInformation_Doc =
  "vtkPVProminentValuesInformation - Prominent values a data array takes\non.\n\n"
  "Superclass: vtkPVInformation\n\n"
  "This vtkPVInformation subclass provides a way for clients to discover\n"
  "whether a specific remote vtkAbstractArray instance behaves like a\n"
  "discrete set or a continuum (for each component of its tuples as well\n"
  "as for its tuples as a whole).\n\n"
  "If the array behaves discretely (which we define to be: takes on\n"
  "fewer than 33 distinct values over more than 99.9% of its entries to\n"
  "within a given confidence that dictates the number of samples\n"
  "required), then the prominent values are also made available.\n\n"
  "This class uses vtkAbstractArray::GetProminentComponentValues().\n\n";


static PyObject *
PyvtkPVProminentValuesInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVProminentValuesInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVProminentValuesInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVProminentValuesInformation *tempr = vtkPVProminentValuesInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVProminentValuesInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVProminentValuesInformation::NewInstance());

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
PyvtkPVProminentValuesInformation_SetPortNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPortNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPortNumber(temp0);
    }
    else
    {
      op->vtkPVProminentValuesInformation::SetPortNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetPortNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPortNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPortNumber() :
      op->vtkPVProminentValuesInformation::GetPortNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_SetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldAssociation(temp0);
    }
    else
    {
      op->vtkPVProminentValuesInformation::SetFieldAssociation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFieldAssociation() :
      op->vtkPVProminentValuesInformation::GetFieldAssociation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_SetFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldName(temp0);
    }
    else
    {
      op->vtkPVProminentValuesInformation::SetFieldName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFieldName() :
      op->vtkPVProminentValuesInformation::GetFieldName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfComponents(temp0);
    }
    else
    {
      op->vtkPVProminentValuesInformation::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkPVProminentValuesInformation::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_SetFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFraction(temp0);
    }
    else
    {
      op->vtkPVProminentValuesInformation::SetFraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetFractionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFractionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFractionMinValue() :
      op->vtkPVProminentValuesInformation::GetFractionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetFractionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFractionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFractionMaxValue() :
      op->vtkPVProminentValuesInformation::GetFractionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFraction() :
      op->vtkPVProminentValuesInformation::GetFraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_SetUncertainty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUncertainty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUncertainty(temp0);
    }
    else
    {
      op->vtkPVProminentValuesInformation::SetUncertainty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetUncertaintyMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUncertaintyMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUncertaintyMinValue() :
      op->vtkPVProminentValuesInformation::GetUncertaintyMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetUncertaintyMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUncertaintyMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUncertaintyMaxValue() :
      op->vtkPVProminentValuesInformation::GetUncertaintyMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetUncertainty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUncertainty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUncertainty() :
      op->vtkPVProminentValuesInformation::GetUncertainty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_SetForce(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForce(temp0);
    }
    else
    {
      op->vtkPVProminentValuesInformation::SetForce(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetForce(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForce() :
      op->vtkPVProminentValuesInformation::GetForce());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetValid() :
      op->vtkPVProminentValuesInformation::GetValid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compare");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  vtkPVProminentValuesInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVProminentValuesInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->Compare(temp0) :
      op->vtkPVProminentValuesInformation::Compare(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  vtkPVProminentValuesInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVProminentValuesInformation"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkPVProminentValuesInformation::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->CopyFromObject(temp0);
    }
    else
    {
      op->vtkPVProminentValuesInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_CopyDistinctValuesFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyDistinctValuesFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->CopyDistinctValuesFromObject(temp0);
    }
    else
    {
      op->vtkPVProminentValuesInformation::CopyDistinctValuesFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  vtkPVInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVInformation"))
  {
    if (ap.IsBound())
    {
      op->AddInformation(temp0);
    }
    else
    {
      op->vtkPVProminentValuesInformation::AddInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_CopyParametersToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParametersToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  vtkMultiProcessStream *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, "vtkMultiProcessStream"))
  {
    if (ap.IsBound())
    {
      op->CopyParametersToStream(*temp0);
    }
    else
    {
      op->vtkPVProminentValuesInformation::CopyParametersToStream(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_CopyParametersFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParametersFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  vtkMultiProcessStream *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, "vtkMultiProcessStream"))
  {
    if (ap.IsBound())
    {
      op->CopyParametersFromStream(*temp0);
    }
    else
    {
      op->vtkPVProminentValuesInformation::CopyParametersFromStream(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_InitializeParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeParameters();
    }
    else
    {
      op->vtkPVProminentValuesInformation::InitializeParameters();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkPVProminentValuesInformation::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_AddDistinctValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDistinctValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  vtkPVProminentValuesInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVProminentValuesInformation"))
  {
    if (ap.IsBound())
    {
      op->AddDistinctValues(temp0);
    }
    else
    {
      op->vtkPVProminentValuesInformation::AddDistinctValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetProminentComponentValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProminentComponentValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetProminentComponentValues(temp0) :
      op->vtkPVProminentValuesInformation::GetProminentComponentValues(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVProminentValuesInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVProminentValuesInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVProminentValuesInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVProminentValuesInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVProminentValuesInformation\nC++: static vtkPVProminentValuesInformation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVProminentValuesInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVProminentValuesInformation\nC++: vtkPVProminentValuesInformation *NewInstance()\n\n"},
  {"SetPortNumber", PyvtkPVProminentValuesInformation_SetPortNumber, METH_VARARGS,
   "V.SetPortNumber(int)\nC++: virtual void SetPortNumber(int _arg)\n\nSet/get the output port whose dataset should be queried.\n"},
  {"GetPortNumber", PyvtkPVProminentValuesInformation_GetPortNumber, METH_VARARGS,
   "V.GetPortNumber() -> int\nC++: virtual int GetPortNumber()\n\nSet/get the output port whose dataset should be queried.\n"},
  {"SetFieldAssociation", PyvtkPVProminentValuesInformation_SetFieldAssociation, METH_VARARGS,
   "V.SetFieldAssociation(string)\nC++: virtual void SetFieldAssociation(const char *_arg)\n\nSet/get array's association\n"},
  {"GetFieldAssociation", PyvtkPVProminentValuesInformation_GetFieldAssociation, METH_VARARGS,
   "V.GetFieldAssociation() -> string\nC++: virtual char *GetFieldAssociation()\n\nSet/get array's association\n"},
  {"SetFieldName", PyvtkPVProminentValuesInformation_SetFieldName, METH_VARARGS,
   "V.SetFieldName(string)\nC++: virtual void SetFieldName(const char *_arg)\n\nSet/get array's name\n"},
  {"GetFieldName", PyvtkPVProminentValuesInformation_GetFieldName, METH_VARARGS,
   "V.GetFieldName() -> string\nC++: virtual char *GetFieldName()\n\nSet/get array's name\n"},
  {"SetNumberOfComponents", PyvtkPVProminentValuesInformation_SetNumberOfComponents, METH_VARARGS,
   "V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int numComps)\n\nChanging the number of components clears the ranges back to the\ndefault.\n"},
  {"GetNumberOfComponents", PyvtkPVProminentValuesInformation_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: virtual int GetNumberOfComponents()\n\nChanging the number of components clears the ranges back to the\ndefault.\n"},
  {"SetFraction", PyvtkPVProminentValuesInformation_SetFraction, METH_VARARGS,
   "V.SetFraction(float)\nC++: virtual void SetFraction(double _arg)\n\nSet/get the minimum fraction of the array that should be composed\nof a value (between 0 and 1) in order for it to be considered\nprominent.\n\n* Setting this to one indicates that an array must have every\n  value be\n* identical in order to have any considered prominent.\n"},
  {"GetFractionMinValue", PyvtkPVProminentValuesInformation_GetFractionMinValue, METH_VARARGS,
   "V.GetFractionMinValue() -> float\nC++: virtual double GetFractionMinValue()\n\nSet/get the minimum fraction of the array that should be composed\nof a value (between 0 and 1) in order for it to be considered\nprominent.\n\n* Setting this to one indicates that an array must have every\n  value be\n* identical in order to have any considered prominent.\n"},
  {"GetFractionMaxValue", PyvtkPVProminentValuesInformation_GetFractionMaxValue, METH_VARARGS,
   "V.GetFractionMaxValue() -> float\nC++: virtual double GetFractionMaxValue()\n\nSet/get the minimum fraction of the array that should be composed\nof a value (between 0 and 1) in order for it to be considered\nprominent.\n\n* Setting this to one indicates that an array must have every\n  value be\n* identical in order to have any considered prominent.\n"},
  {"GetFraction", PyvtkPVProminentValuesInformation_GetFraction, METH_VARARGS,
   "V.GetFraction() -> float\nC++: virtual double GetFraction()\n\nSet/get the minimum fraction of the array that should be composed\nof a value (between 0 and 1) in order for it to be considered\nprominent.\n\n* Setting this to one indicates that an array must have every\n  value be\n* identical in order to have any considered prominent.\n"},
  {"SetUncertainty", PyvtkPVProminentValuesInformation_SetUncertainty, METH_VARARGS,
   "V.SetUncertainty(float)\nC++: virtual void SetUncertainty(double _arg)\n\nSet/get the maximum uncertainty allowed in the detection of\nprominent values. The uncertainty is the probability of prominent\nvalues going undetected. Setting this to zero forces the entire\narray to be inspected.\n"},
  {"GetUncertaintyMinValue", PyvtkPVProminentValuesInformation_GetUncertaintyMinValue, METH_VARARGS,
   "V.GetUncertaintyMinValue() -> float\nC++: virtual double GetUncertaintyMinValue()\n\nSet/get the maximum uncertainty allowed in the detection of\nprominent values. The uncertainty is the probability of prominent\nvalues going undetected. Setting this to zero forces the entire\narray to be inspected.\n"},
  {"GetUncertaintyMaxValue", PyvtkPVProminentValuesInformation_GetUncertaintyMaxValue, METH_VARARGS,
   "V.GetUncertaintyMaxValue() -> float\nC++: virtual double GetUncertaintyMaxValue()\n\nSet/get the maximum uncertainty allowed in the detection of\nprominent values. The uncertainty is the probability of prominent\nvalues going undetected. Setting this to zero forces the entire\narray to be inspected.\n"},
  {"GetUncertainty", PyvtkPVProminentValuesInformation_GetUncertainty, METH_VARARGS,
   "V.GetUncertainty() -> float\nC++: virtual double GetUncertainty()\n\nSet/get the maximum uncertainty allowed in the detection of\nprominent values. The uncertainty is the probability of prominent\nvalues going undetected. Setting this to zero forces the entire\narray to be inspected.\n"},
  {"SetForce", PyvtkPVProminentValuesInformation_SetForce, METH_VARARGS,
   "V.SetForce(bool)\nC++: virtual void SetForce(bool _arg)\n\nSet/get the force flag that will be used when recovering the\nprominents values. If not set, a maximum of\nvtkAbstractArray::MAX_DISCRETE_VALUES (32) values will be\nrecovered, if there is more, none will be recovered and the\ninformation will be considered invalid. If the force flag is set,\nthere is no maximum number of prominent values recovered and the\ninformation should be valid even with a high number of prominent\nvalues.\n"},
  {"GetForce", PyvtkPVProminentValuesInformation_GetForce, METH_VARARGS,
   "V.GetForce() -> bool\nC++: virtual bool GetForce()\n\nSet/get the force flag that will be used when recovering the\nprominents values. If not set, a maximum of\nvtkAbstractArray::MAX_DISCRETE_VALUES (32) values will be\nrecovered, if there is more, none will be recovered and the\ninformation will be considered invalid. If the force flag is set,\nthere is no maximum number of prominent values recovered and the\ninformation should be valid even with a high number of prominent\nvalues.\n"},
  {"GetValid", PyvtkPVProminentValuesInformation_GetValid, METH_VARARGS,
   "V.GetValid() -> bool\nC++: virtual bool GetValid()\n\nGet the validity of the information. The flag has a meaning after\ntrying to recover prominent values, if true, the data can be\nused, if false, this information should be considered invalid.\n"},
  {"Compare", PyvtkPVProminentValuesInformation_Compare, METH_VARARGS,
   "V.Compare(vtkPVProminentValuesInformation) -> int\nC++: int Compare(vtkPVProminentValuesInformation *info)\n\nReturns 1 if the array can be combined. It must have the same\nname and number of components.\n"},
  {"DeepCopy", PyvtkPVProminentValuesInformation_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkPVProminentValuesInformation)\nC++: void DeepCopy(vtkPVProminentValuesInformation *other)\n\nCopy information from an other object.\n"},
  {"CopyFromObject", PyvtkPVProminentValuesInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: void CopyFromObject(vtkObject *) override;\n\nTransfer information about a single object into this object.\n"},
  {"CopyDistinctValuesFromObject", PyvtkPVProminentValuesInformation_CopyDistinctValuesFromObject, METH_VARARGS,
   "V.CopyDistinctValuesFromObject(vtkAbstractArray)\nC++: virtual void CopyDistinctValuesFromObject(vtkAbstractArray *)\n\nTransfer information about a single vtkAbstractArray's prominent\nvalues into this object.\n\n* This is called *after* CopyFromObject has determined the number\nof components available;\n* this method relies on this->NumberOfComponents being valid.\n"},
  {"AddInformation", PyvtkPVProminentValuesInformation_AddInformation, METH_VARARGS,
   "V.AddInformation(vtkPVInformation)\nC++: void AddInformation(vtkPVInformation *other) override;\n\nMerge another information object.\n"},
  {"CopyParametersToStream", PyvtkPVProminentValuesInformation_CopyParametersToStream, METH_VARARGS,
   "V.CopyParametersToStream(vtkMultiProcessStream)\nC++: void CopyParametersToStream(vtkMultiProcessStream &)\n    override;\n\nPush/pop parameters controlling which array to sample onto/off of\nthe stream.\n"},
  {"CopyParametersFromStream", PyvtkPVProminentValuesInformation_CopyParametersFromStream, METH_VARARGS,
   "V.CopyParametersFromStream(vtkMultiProcessStream)\nC++: void CopyParametersFromStream(vtkMultiProcessStream &)\n    override;\n\nPush/pop parameters controlling which array to sample onto/off of\nthe stream.\n"},
  {"InitializeParameters", PyvtkPVProminentValuesInformation_InitializeParameters, METH_VARARGS,
   "V.InitializeParameters()\nC++: void InitializeParameters()\n\nRemove all parameter information.\n\n* You must copy/set parameter values before adding data or\n  copying data from an object.\n"},
  {"Initialize", PyvtkPVProminentValuesInformation_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nRemove all gathered information (but not parameters). Next add\nwill behave like a copy.\n"},
  {"AddDistinctValues", PyvtkPVProminentValuesInformation_AddDistinctValues, METH_VARARGS,
   "V.AddDistinctValues(vtkPVProminentValuesInformation)\nC++: void AddDistinctValues(vtkPVProminentValuesInformation *)\n\nMerge another list of prominent values.\n"},
  {"GetProminentComponentValues", PyvtkPVProminentValuesInformation_GetProminentComponentValues, METH_VARARGS,
   "V.GetProminentComponentValues(int) -> vtkAbstractArray\nC++: vtkAbstractArray *GetProminentComponentValues(int component)\n\nReturns either NULL (array component appears to be continuous) or\na pointer to a vtkAbstractArray (array component appears to be\ndiscrete) containing a sorted list of all distinct prominent\nvalues encountered in the array component.\n\n* Passing -1 as the component will return information about\n  distinct tuple values\n* as opposed to distinct component values.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVProminentValuesInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVProminentValuesInformation", // tp_name
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
  PyvtkPVProminentValuesInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVProminentValuesInformation_StaticNew()
{
  return vtkPVProminentValuesInformation::New();
}

PyObject *PyvtkPVProminentValuesInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVProminentValuesInformation_Type, PyvtkPVProminentValuesInformation_Methods,
    "vtkPVProminentValuesInformation",
 &PyvtkPVProminentValuesInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVProminentValuesInformation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVInformation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVProminentValuesInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVProminentValuesInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVProminentValuesInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

