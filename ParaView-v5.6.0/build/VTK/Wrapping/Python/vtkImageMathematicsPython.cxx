// python wrapper for vtkImageMathematics
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
#include "vtkImageMathematics.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageMathematics(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageMathematics_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageMathematics_Doc =
  "vtkImageMathematics - Add, subtract, multiply, divide, invert, sin,\ncos, exp, log.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageMathematics implements basic mathematic operations\n"
  "SetOperation is used to select the filters behavior.  The filter can\n"
  "take two or one input.\n\n";


static PyObject *
PyvtkImageMathematics_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageMathematics::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageMathematics::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageMathematics *tempr = vtkImageMathematics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageMathematics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageMathematics::NewInstance());

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
PyvtkImageMathematics_SetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOperation(temp0);
    }
    else
    {
      op->vtkImageMathematics::SetOperation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_GetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperation() :
      op->vtkImageMathematics::GetOperation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToAdd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToAdd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToAdd();
    }
    else
    {
      op->vtkImageMathematics::SetOperationToAdd();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToSubtract(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToSubtract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToSubtract();
    }
    else
    {
      op->vtkImageMathematics::SetOperationToSubtract();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToMultiply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMultiply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToMultiply();
    }
    else
    {
      op->vtkImageMathematics::SetOperationToMultiply();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToDivide(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToDivide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToDivide();
    }
    else
    {
      op->vtkImageMathematics::SetOperationToDivide();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToConjugate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToConjugate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToConjugate();
    }
    else
    {
      op->vtkImageMathematics::SetOperationToConjugate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToComplexMultiply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToComplexMultiply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToComplexMultiply();
    }
    else
    {
      op->vtkImageMathematics::SetOperationToComplexMultiply();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToInvert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToInvert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToInvert();
    }
    else
    {
      op->vtkImageMathematics::SetOperationToInvert();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToSin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToSin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToSin();
    }
    else
    {
      op->vtkImageMathematics::SetOperationToSin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToCos(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToCos");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToCos();
    }
    else
    {
      op->vtkImageMathematics::SetOperationToCos();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToExp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToExp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToExp();
    }
    else
    {
      op->vtkImageMathematics::SetOperationToExp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToLog");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToLog();
    }
    else
    {
      op->vtkImageMathematics::SetOperationToLog();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToAbsoluteValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToAbsoluteValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToAbsoluteValue();
    }
    else
    {
      op->vtkImageMathematics::SetOperationToAbsoluteValue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToSquare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToSquare");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToSquare();
    }
    else
    {
      op->vtkImageMathematics::SetOperationToSquare();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToSquareRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToSquareRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToSquareRoot();
    }
    else
    {
      op->vtkImageMathematics::SetOperationToSquareRoot();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToMin();
    }
    else
    {
      op->vtkImageMathematics::SetOperationToMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToMax();
    }
    else
    {
      op->vtkImageMathematics::SetOperationToMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToATAN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToATAN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToATAN();
    }
    else
    {
      op->vtkImageMathematics::SetOperationToATAN();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToATAN2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToATAN2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToATAN2();
    }
    else
    {
      op->vtkImageMathematics::SetOperationToATAN2();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToMultiplyByK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMultiplyByK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToMultiplyByK();
    }
    else
    {
      op->vtkImageMathematics::SetOperationToMultiplyByK();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToAddConstant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToAddConstant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToAddConstant();
    }
    else
    {
      op->vtkImageMathematics::SetOperationToAddConstant();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToReplaceCByK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToReplaceCByK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToReplaceCByK();
    }
    else
    {
      op->vtkImageMathematics::SetOperationToReplaceCByK();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetConstantK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstantK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConstantK(temp0);
    }
    else
    {
      op->vtkImageMathematics::SetConstantK(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_GetConstantK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstantK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConstantK() :
      op->vtkImageMathematics::GetConstantK());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetConstantC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstantC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConstantC(temp0);
    }
    else
    {
      op->vtkImageMathematics::SetConstantC(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_GetConstantC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstantC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConstantC() :
      op->vtkImageMathematics::GetConstantC());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetDivideByZeroToC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivideByZeroToC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDivideByZeroToC(temp0);
    }
    else
    {
      op->vtkImageMathematics::SetDivideByZeroToC(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_GetDivideByZeroToC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivideByZeroToC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDivideByZeroToC() :
      op->vtkImageMathematics::GetDivideByZeroToC());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_DivideByZeroToCOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DivideByZeroToCOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DivideByZeroToCOn();
    }
    else
    {
      op->vtkImageMathematics::DivideByZeroToCOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_DivideByZeroToCOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DivideByZeroToCOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DivideByZeroToCOff();
    }
    else
    {
      op->vtkImageMathematics::DivideByZeroToCOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetInput1Data(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput1Data");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInput1Data(temp0);
    }
    else
    {
      op->vtkImageMathematics::SetInput1Data(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetInput2Data(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput2Data");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInput2Data(temp0);
    }
    else
    {
      op->vtkImageMathematics::SetInput2Data(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageMathematics_Methods[] = {
  {"IsTypeOf", PyvtkImageMathematics_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageMathematics_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageMathematics_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageMathematics\nC++: static vtkImageMathematics *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageMathematics_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageMathematics\nC++: vtkImageMathematics *NewInstance()\n\n"},
  {"SetOperation", PyvtkImageMathematics_SetOperation, METH_VARARGS,
   "V.SetOperation(int)\nC++: virtual void SetOperation(int _arg)\n\nSet/Get the Operation to perform.\n"},
  {"GetOperation", PyvtkImageMathematics_GetOperation, METH_VARARGS,
   "V.GetOperation() -> int\nC++: virtual int GetOperation()\n\nSet/Get the Operation to perform.\n"},
  {"SetOperationToAdd", PyvtkImageMathematics_SetOperationToAdd, METH_VARARGS,
   "V.SetOperationToAdd()\nC++: void SetOperationToAdd()\n\nSet each pixel in the output image to the sum of the\ncorresponding pixels in Input1 and Input2.\n"},
  {"SetOperationToSubtract", PyvtkImageMathematics_SetOperationToSubtract, METH_VARARGS,
   "V.SetOperationToSubtract()\nC++: void SetOperationToSubtract()\n\nSet each pixel in the output image to the difference of the\ncorresponding pixels in Input1 and Input2 (output = Input1 -\nInput2).\n"},
  {"SetOperationToMultiply", PyvtkImageMathematics_SetOperationToMultiply, METH_VARARGS,
   "V.SetOperationToMultiply()\nC++: void SetOperationToMultiply()\n\nSet each pixel in the output image to the product of the\ncorresponding pixels in Input1 and Input2.\n"},
  {"SetOperationToDivide", PyvtkImageMathematics_SetOperationToDivide, METH_VARARGS,
   "V.SetOperationToDivide()\nC++: void SetOperationToDivide()\n\nSet each pixel in the output image to the quotient of the\ncorresponding pixels in Input1 and Input2 (Output = Input1 /\nInput2).\n"},
  {"SetOperationToConjugate", PyvtkImageMathematics_SetOperationToConjugate, METH_VARARGS,
   "V.SetOperationToConjugate()\nC++: void SetOperationToConjugate()\n\n"},
  {"SetOperationToComplexMultiply", PyvtkImageMathematics_SetOperationToComplexMultiply, METH_VARARGS,
   "V.SetOperationToComplexMultiply()\nC++: void SetOperationToComplexMultiply()\n\n"},
  {"SetOperationToInvert", PyvtkImageMathematics_SetOperationToInvert, METH_VARARGS,
   "V.SetOperationToInvert()\nC++: void SetOperationToInvert()\n\nSet each pixel in the output image to 1 over the corresponding\npixel in Input1 and Input2 (output = 1 / Input1). Input2 is not\nused.\n"},
  {"SetOperationToSin", PyvtkImageMathematics_SetOperationToSin, METH_VARARGS,
   "V.SetOperationToSin()\nC++: void SetOperationToSin()\n\nSet each pixel in the output image to the sine of the\ncorresponding pixel in Input1. Input2 is not used.\n"},
  {"SetOperationToCos", PyvtkImageMathematics_SetOperationToCos, METH_VARARGS,
   "V.SetOperationToCos()\nC++: void SetOperationToCos()\n\nSet each pixel in the output image to the cosine of the\ncorresponding pixel in Input1. Input2 is not used.\n"},
  {"SetOperationToExp", PyvtkImageMathematics_SetOperationToExp, METH_VARARGS,
   "V.SetOperationToExp()\nC++: void SetOperationToExp()\n\nSet each pixel in the output image to the exponential of the\ncorresponding pixel in Input1. Input2 is not used.\n"},
  {"SetOperationToLog", PyvtkImageMathematics_SetOperationToLog, METH_VARARGS,
   "V.SetOperationToLog()\nC++: void SetOperationToLog()\n\nSet each pixel in the output image to the log of the\ncorresponding pixel in Input1. Input2 is not used.\n"},
  {"SetOperationToAbsoluteValue", PyvtkImageMathematics_SetOperationToAbsoluteValue, METH_VARARGS,
   "V.SetOperationToAbsoluteValue()\nC++: void SetOperationToAbsoluteValue()\n\nSet each pixel in the output image to the absolute value of the\ncorresponding pixel in Input1. Input2 is not used.\n"},
  {"SetOperationToSquare", PyvtkImageMathematics_SetOperationToSquare, METH_VARARGS,
   "V.SetOperationToSquare()\nC++: void SetOperationToSquare()\n\nSet each pixel in the output image to the square of the\ncorresponding pixel in Input1. Input2 is not used.\n"},
  {"SetOperationToSquareRoot", PyvtkImageMathematics_SetOperationToSquareRoot, METH_VARARGS,
   "V.SetOperationToSquareRoot()\nC++: void SetOperationToSquareRoot()\n\nSet each pixel in the output image to the square root of the\ncorresponding pixel in Input1. Input2 is not used.\n"},
  {"SetOperationToMin", PyvtkImageMathematics_SetOperationToMin, METH_VARARGS,
   "V.SetOperationToMin()\nC++: void SetOperationToMin()\n\nSet each pixel in the output image to the minimum of the\ncorresponding pixels in Input1 and Input2. (Output = min(Input1,\nInput2))\n"},
  {"SetOperationToMax", PyvtkImageMathematics_SetOperationToMax, METH_VARARGS,
   "V.SetOperationToMax()\nC++: void SetOperationToMax()\n\nSet each pixel in the output image to the maximum of the\ncorresponding pixels in Input1 and Input2. (Output = max(Input1,\nInput2))\n"},
  {"SetOperationToATAN", PyvtkImageMathematics_SetOperationToATAN, METH_VARARGS,
   "V.SetOperationToATAN()\nC++: void SetOperationToATAN()\n\nSet each pixel in the output image to the arctangent of the\ncorresponding pixel in Input1. Input2 is not used.\n"},
  {"SetOperationToATAN2", PyvtkImageMathematics_SetOperationToATAN2, METH_VARARGS,
   "V.SetOperationToATAN2()\nC++: void SetOperationToATAN2()\n\n"},
  {"SetOperationToMultiplyByK", PyvtkImageMathematics_SetOperationToMultiplyByK, METH_VARARGS,
   "V.SetOperationToMultiplyByK()\nC++: void SetOperationToMultiplyByK()\n\nSet each pixel in the output image to the product of ConstantK\nwith the corresponding pixel in Input1. Input2 is not used.\n"},
  {"SetOperationToAddConstant", PyvtkImageMathematics_SetOperationToAddConstant, METH_VARARGS,
   "V.SetOperationToAddConstant()\nC++: void SetOperationToAddConstant()\n\nSet each pixel in the output image to the product of ConstantC\nwith the corresponding pixel in Input1. Input2 is not used.\n"},
  {"SetOperationToReplaceCByK", PyvtkImageMathematics_SetOperationToReplaceCByK, METH_VARARGS,
   "V.SetOperationToReplaceCByK()\nC++: void SetOperationToReplaceCByK()\n\nFind every pixel in Input1 that equals ConstantC and set the\ncorresponding pixels in the Output to ConstantK. Input2 is not\nused.\n"},
  {"SetConstantK", PyvtkImageMathematics_SetConstantK, METH_VARARGS,
   "V.SetConstantK(float)\nC++: virtual void SetConstantK(double _arg)\n\nA constant used by some operations (typically multiplicative).\nDefault is 1.\n"},
  {"GetConstantK", PyvtkImageMathematics_GetConstantK, METH_VARARGS,
   "V.GetConstantK() -> float\nC++: virtual double GetConstantK()\n\nA constant used by some operations (typically multiplicative).\nDefault is 1.\n"},
  {"SetConstantC", PyvtkImageMathematics_SetConstantC, METH_VARARGS,
   "V.SetConstantC(float)\nC++: virtual void SetConstantC(double _arg)\n\nA constant used by some operations (typically additive). Default\nis 0.\n"},
  {"GetConstantC", PyvtkImageMathematics_GetConstantC, METH_VARARGS,
   "V.GetConstantC() -> float\nC++: virtual double GetConstantC()\n\nA constant used by some operations (typically additive). Default\nis 0.\n"},
  {"SetDivideByZeroToC", PyvtkImageMathematics_SetDivideByZeroToC, METH_VARARGS,
   "V.SetDivideByZeroToC(int)\nC++: virtual void SetDivideByZeroToC(vtkTypeBool _arg)\n\nHow to handle divide by zero. Default is 0.\n"},
  {"GetDivideByZeroToC", PyvtkImageMathematics_GetDivideByZeroToC, METH_VARARGS,
   "V.GetDivideByZeroToC() -> int\nC++: virtual vtkTypeBool GetDivideByZeroToC()\n\nHow to handle divide by zero. Default is 0.\n"},
  {"DivideByZeroToCOn", PyvtkImageMathematics_DivideByZeroToCOn, METH_VARARGS,
   "V.DivideByZeroToCOn()\nC++: virtual void DivideByZeroToCOn()\n\nHow to handle divide by zero. Default is 0.\n"},
  {"DivideByZeroToCOff", PyvtkImageMathematics_DivideByZeroToCOff, METH_VARARGS,
   "V.DivideByZeroToCOff()\nC++: virtual void DivideByZeroToCOff()\n\nHow to handle divide by zero. Default is 0.\n"},
  {"SetInput1Data", PyvtkImageMathematics_SetInput1Data, METH_VARARGS,
   "V.SetInput1Data(vtkDataObject)\nC++: virtual void SetInput1Data(vtkDataObject *in)\n\nSet the two inputs to this filter. For some operations, the\nsecond input is not used.\n"},
  {"SetInput2Data", PyvtkImageMathematics_SetInput2Data, METH_VARARGS,
   "V.SetInput2Data(vtkDataObject)\nC++: virtual void SetInput2Data(vtkDataObject *in)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageMathematics_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingMathPython.vtkImageMathematics", // tp_name
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
  PyvtkImageMathematics_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageMathematics_StaticNew()
{
  return vtkImageMathematics::New();
}

PyObject *PyvtkImageMathematics_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageMathematics_Type, PyvtkImageMathematics_Methods,
    "vtkImageMathematics",
 &PyvtkImageMathematics_StaticNew);

  PyTypeObject *pytype = &PyvtkImageMathematics_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkThreadedImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageMathematics(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageMathematics_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageMathematics", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 21; c++)
  {
    static const struct { const char *name; int value; }
      constants[21] = {
        { "VTK_ADD", 0 },
        { "VTK_SUBTRACT", 1 },
        { "VTK_MULTIPLY", 2 },
        { "VTK_DIVIDE", 3 },
        { "VTK_INVERT", 4 },
        { "VTK_SIN", 5 },
        { "VTK_COS", 6 },
        { "VTK_EXP", 7 },
        { "VTK_LOG", 8 },
        { "VTK_ABS", 9 },
        { "VTK_SQR", 10 },
        { "VTK_SQRT", 11 },
        { "VTK_MIN", 12 },
        { "VTK_MAX", 13 },
        { "VTK_ATAN", 14 },
        { "VTK_ATAN2", 15 },
        { "VTK_MULTIPLYBYK", 16 },
        { "VTK_ADDC", 17 },
        { "VTK_CONJUGATE", 18 },
        { "VTK_COMPLEX_MULTIPLY", 19 },
        { "VTK_REPLACECBYK", 20 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

