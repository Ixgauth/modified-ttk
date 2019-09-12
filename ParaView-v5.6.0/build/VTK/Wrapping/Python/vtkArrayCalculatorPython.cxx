// python wrapper for vtkArrayCalculator
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
#include "vtkArrayCalculator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkArrayCalculator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayCalculator_ClassNew(); }

#ifndef DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPassInputTypeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
#endif

static const char *PyvtkArrayCalculator_Doc =
  "vtkArrayCalculator - perform mathematical operations on data in field\ndata arrays\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkArrayCalculator performs operations on vectors or scalars in field\n"
  "data arrays.  It uses vtkFunctionParser to do the parsing and to\n"
  "evaluate the function for each entry in the input arrays.  The arrays\n"
  "used in a given function must be all in point data or all in cell\n"
  "data. The resulting array will be stored as a field data array.  The\n"
  "result array can either be stored in a new array or it can overwrite\n"
  "an existing array.\n\n"
  "The functions that this array calculator understands is:\n\n"
  "standard operations: + - * / ^ . build unit vectors: iHat, jHat, kHat\n"
  "(ie (1,0,0), (0,1,0), (0,0,1)) abs acos asin atan ceil cos cosh exp\n"
  "floor log mag min max norm sign sin sinh sqrt tan tanh  Note that\n"
  "some of these operations work on scalars, some on vectors, and some\n"
  "on both (e.g., you can multiply a scalar times a vector). The\n"
  "operations are performed tuple-wise (i.e., tuple-by-tuple). The user\n"
  "must specify which arrays to use as vectors and/or scalars, and the\n"
  "name of the output data array.\n\n"
  "@sa\n"
  "vtkFunctionParser\n\n";


static PyObject *
PyvtkArrayCalculator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrayCalculator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayCalculator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrayCalculator *tempr = vtkArrayCalculator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayCalculator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayCalculator::NewInstance());

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
PyvtkArrayCalculator_SetFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFunction(temp0);
    }
    else
    {
      op->vtkArrayCalculator::SetFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFunction() :
      op->vtkArrayCalculator::GetFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_AddScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  const char *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->AddScalarArrayName(temp0, temp1);
    }
    else
    {
      op->vtkArrayCalculator::AddScalarArrayName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_AddVectorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVectorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  const char *temp0 = nullptr;
  int temp1 = 0;
  int temp2 = 1;
  int temp3 = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 4) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->AddVectorArrayName(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkArrayCalculator::AddVectorArrayName(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_AddScalarVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddScalarVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->AddScalarVariable(temp0, temp1, temp2);
    }
    else
    {
      op->vtkArrayCalculator::AddScalarVariable(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_AddVectorVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVectorVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2 = 0;
  int temp3 = 1;
  int temp4 = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    if (ap.IsBound())
    {
      op->AddVectorVariable(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkArrayCalculator::AddVectorVariable(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_AddCoordinateScalarVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCoordinateScalarVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  const char *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->AddCoordinateScalarVariable(temp0, temp1);
    }
    else
    {
      op->vtkArrayCalculator::AddCoordinateScalarVariable(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_AddCoordinateVectorVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCoordinateVectorVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  const char *temp0 = nullptr;
  int temp1 = 0;
  int temp2 = 1;
  int temp3 = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 4) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->AddCoordinateVectorVariable(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkArrayCalculator::AddCoordinateVectorVariable(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResultArrayName(temp0);
    }
    else
    {
      op->vtkArrayCalculator::SetResultArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetResultArrayName() :
      op->vtkArrayCalculator::GetResultArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetResultArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResultArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResultArrayType() :
      op->vtkArrayCalculator::GetResultArrayType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetResultArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResultArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResultArrayType(temp0);
    }
    else
    {
      op->vtkArrayCalculator::SetResultArrayType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetCoordinateResults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateResults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCoordinateResults() :
      op->vtkArrayCalculator::GetCoordinateResults());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetCoordinateResults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateResults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateResults(temp0);
    }
    else
    {
      op->vtkArrayCalculator::SetCoordinateResults(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_CoordinateResultsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CoordinateResultsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CoordinateResultsOn();
    }
    else
    {
      op->vtkArrayCalculator::CoordinateResultsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_CoordinateResultsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CoordinateResultsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CoordinateResultsOff();
    }
    else
    {
      op->vtkArrayCalculator::CoordinateResultsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetResultNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResultNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetResultNormals() :
      op->vtkArrayCalculator::GetResultNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetResultNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResultNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResultNormals(temp0);
    }
    else
    {
      op->vtkArrayCalculator::SetResultNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_ResultNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResultNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResultNormalsOn();
    }
    else
    {
      op->vtkArrayCalculator::ResultNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_ResultNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResultNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResultNormalsOff();
    }
    else
    {
      op->vtkArrayCalculator::ResultNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetResultTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResultTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetResultTCoords() :
      op->vtkArrayCalculator::GetResultTCoords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetResultTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResultTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResultTCoords(temp0);
    }
    else
    {
      op->vtkArrayCalculator::SetResultTCoords(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_ResultTCoordsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResultTCoordsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResultTCoordsOn();
    }
    else
    {
      op->vtkArrayCalculator::ResultTCoordsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_ResultTCoordsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResultTCoordsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResultTCoordsOff();
    }
    else
    {
      op->vtkArrayCalculator::ResultTCoordsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkArrayCalculator_SetAttributeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeMode(temp0);
    }
    else
    {
      op->vtkArrayCalculator::SetAttributeMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkArrayCalculator_GetAttributeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeMode() :
      op->vtkArrayCalculator::GetAttributeMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkArrayCalculator_SetAttributeModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeModeToDefault();
    }
    else
    {
      op->vtkArrayCalculator::SetAttributeModeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkArrayCalculator_SetAttributeModeToUsePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToUsePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeModeToUsePointData();
    }
    else
    {
      op->vtkArrayCalculator::SetAttributeModeToUsePointData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkArrayCalculator_SetAttributeModeToUseCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToUseCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeModeToUseCellData();
    }
    else
    {
      op->vtkArrayCalculator::SetAttributeModeToUseCellData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkArrayCalculator_SetAttributeModeToUseVertexData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToUseVertexData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeModeToUseVertexData();
    }
    else
    {
      op->vtkArrayCalculator::SetAttributeModeToUseVertexData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkArrayCalculator_SetAttributeModeToUseEdgeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToUseEdgeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeModeToUseEdgeData();
    }
    else
    {
      op->vtkArrayCalculator::SetAttributeModeToUseEdgeData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkArrayCalculator_GetAttributeModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeModeAsString() :
      op->vtkArrayCalculator::GetAttributeModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


static PyObject *
PyvtkArrayCalculator_GetAttributeTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeTypeAsString() :
      op->vtkArrayCalculator::GetAttributeTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetAttributeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeType(temp0);
    }
    else
    {
      op->vtkArrayCalculator::SetAttributeType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetAttributeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeType() :
      op->vtkArrayCalculator::GetAttributeType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetAttributeTypeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeTypeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeTypeToDefault();
    }
    else
    {
      op->vtkArrayCalculator::SetAttributeTypeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetAttributeTypeToPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeTypeToPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeTypeToPointData();
    }
    else
    {
      op->vtkArrayCalculator::SetAttributeTypeToPointData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetAttributeTypeToCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeTypeToCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeTypeToCellData();
    }
    else
    {
      op->vtkArrayCalculator::SetAttributeTypeToCellData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetAttributeTypeToEdgeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeTypeToEdgeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeTypeToEdgeData();
    }
    else
    {
      op->vtkArrayCalculator::SetAttributeTypeToEdgeData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetAttributeTypeToVertexData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeTypeToVertexData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeTypeToVertexData();
    }
    else
    {
      op->vtkArrayCalculator::SetAttributeTypeToVertexData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetAttributeTypeToRowData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeTypeToRowData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeTypeToRowData();
    }
    else
    {
      op->vtkArrayCalculator::SetAttributeTypeToRowData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_RemoveAllVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllVariables();
    }
    else
    {
      op->vtkArrayCalculator::RemoveAllVariables();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_RemoveScalarVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveScalarVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveScalarVariables();
    }
    else
    {
      op->vtkArrayCalculator::RemoveScalarVariables();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_RemoveVectorVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVectorVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveVectorVariables();
    }
    else
    {
      op->vtkArrayCalculator::RemoveVectorVariables();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_RemoveCoordinateScalarVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCoordinateScalarVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveCoordinateScalarVariables();
    }
    else
    {
      op->vtkArrayCalculator::RemoveCoordinateScalarVariables();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_RemoveCoordinateVectorVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCoordinateVectorVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveCoordinateVectorVariables();
    }
    else
    {
      op->vtkArrayCalculator::RemoveCoordinateVectorVariables();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetScalarArrayName(temp0) :
      op->vtkArrayCalculator::GetScalarArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetVectorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVectorArrayName(temp0) :
      op->vtkArrayCalculator::GetVectorArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetScalarVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetScalarVariableName(temp0) :
      op->vtkArrayCalculator::GetScalarVariableName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetVectorVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVectorVariableName(temp0) :
      op->vtkArrayCalculator::GetVectorVariableName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetSelectedScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSelectedScalarComponents() :
      op->vtkArrayCalculator::GetSelectedScalarComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetSelectedScalarComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedScalarComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedScalarComponent(temp0) :
      op->vtkArrayCalculator::GetSelectedScalarComponent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetSelectedVectorComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedVectorComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSelectedVectorComponents(temp0) :
      op->vtkArrayCalculator::GetSelectedVectorComponents(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetNumberOfScalarArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarArrays() :
      op->vtkArrayCalculator::GetNumberOfScalarArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetNumberOfVectorArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVectorArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVectorArrays() :
      op->vtkArrayCalculator::GetNumberOfVectorArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetReplaceInvalidValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplaceInvalidValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReplaceInvalidValues(temp0);
    }
    else
    {
      op->vtkArrayCalculator::SetReplaceInvalidValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetReplaceInvalidValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplaceInvalidValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReplaceInvalidValues() :
      op->vtkArrayCalculator::GetReplaceInvalidValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_ReplaceInvalidValuesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInvalidValuesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceInvalidValuesOn();
    }
    else
    {
      op->vtkArrayCalculator::ReplaceInvalidValuesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_ReplaceInvalidValuesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInvalidValuesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceInvalidValuesOff();
    }
    else
    {
      op->vtkArrayCalculator::ReplaceInvalidValuesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetReplacementValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplacementValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReplacementValue(temp0);
    }
    else
    {
      op->vtkArrayCalculator::SetReplacementValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetReplacementValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplacementValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetReplacementValue() :
      op->vtkArrayCalculator::GetReplacementValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetDataSetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetDataSetOutput() :
      op->vtkArrayCalculator::GetDataSetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayCalculator_Methods[] = {
  {"IsTypeOf", PyvtkArrayCalculator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrayCalculator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrayCalculator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkArrayCalculator\nC++: static vtkArrayCalculator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrayCalculator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkArrayCalculator\nC++: vtkArrayCalculator *NewInstance()\n\n"},
  {"SetFunction", PyvtkArrayCalculator_SetFunction, METH_VARARGS,
   "V.SetFunction(string)\nC++: virtual void SetFunction(const char *function)\n\nSet/Get the function to be evaluated.\n"},
  {"GetFunction", PyvtkArrayCalculator_GetFunction, METH_VARARGS,
   "V.GetFunction() -> string\nC++: virtual char *GetFunction()\n\nSet/Get the function to be evaluated.\n"},
  {"AddScalarArrayName", PyvtkArrayCalculator_AddScalarArrayName, METH_VARARGS,
   "V.AddScalarArrayName(string, int)\nC++: void AddScalarArrayName(const char *arrayName,\n    int component=0)\n\nAdd an array name to the list of arrays used in the function and\nspecify which components of the array to use in evaluating the\nfunction.  The array name must match the name in the function. \nUse AddScalarVariable or AddVectorVariable to use a variable name\ndifferent from the array name.\n"},
  {"AddVectorArrayName", PyvtkArrayCalculator_AddVectorArrayName, METH_VARARGS,
   "V.AddVectorArrayName(string, int, int, int)\nC++: void AddVectorArrayName(const char *arrayName,\n    int component0=0, int component1=1, int component2=2)\n\nAdd an array name to the list of arrays used in the function and\nspecify which components of the array to use in evaluating the\nfunction.  The array name must match the name in the function. \nUse AddScalarVariable or AddVectorVariable to use a variable name\ndifferent from the array name.\n"},
  {"AddScalarVariable", PyvtkArrayCalculator_AddScalarVariable, METH_VARARGS,
   "V.AddScalarVariable(string, string, int)\nC++: void AddScalarVariable(const char *variableName,\n    const char *arrayName, int component=0)\n\nAdd a variable name, a corresponding array name, and which\ncomponents of the array to use.\n"},
  {"AddVectorVariable", PyvtkArrayCalculator_AddVectorVariable, METH_VARARGS,
   "V.AddVectorVariable(string, string, int, int, int)\nC++: void AddVectorVariable(const char *variableName,\n    const char *arrayName, int component0=0, int component1=1,\n    int component2=2)\n\nAdd a variable name, a corresponding array name, and which\ncomponents of the array to use.\n"},
  {"AddCoordinateScalarVariable", PyvtkArrayCalculator_AddCoordinateScalarVariable, METH_VARARGS,
   "V.AddCoordinateScalarVariable(string, int)\nC++: void AddCoordinateScalarVariable(const char *variableName,\n    int component=0)\n\nAdd a variable name, a corresponding array name, and which\ncomponents of the array to use.\n"},
  {"AddCoordinateVectorVariable", PyvtkArrayCalculator_AddCoordinateVectorVariable, METH_VARARGS,
   "V.AddCoordinateVectorVariable(string, int, int, int)\nC++: void AddCoordinateVectorVariable(const char *variableName,\n    int component0=0, int component1=1, int component2=2)\n\nAdd a variable name, a corresponding array name, and which\ncomponents of the array to use.\n"},
  {"SetResultArrayName", PyvtkArrayCalculator_SetResultArrayName, METH_VARARGS,
   "V.SetResultArrayName(string)\nC++: void SetResultArrayName(const char *name)\n\nSet the name of the array in which to store the result of\nevaluating this function.  If this is the name of an existing\narray, that array will be overwritten.  Otherwise a new array\nwill be created with the specified name.\n"},
  {"GetResultArrayName", PyvtkArrayCalculator_GetResultArrayName, METH_VARARGS,
   "V.GetResultArrayName() -> string\nC++: virtual char *GetResultArrayName()\n\nSet the name of the array in which to store the result of\nevaluating this function.  If this is the name of an existing\narray, that array will be overwritten.  Otherwise a new array\nwill be created with the specified name.\n"},
  {"GetResultArrayType", PyvtkArrayCalculator_GetResultArrayType, METH_VARARGS,
   "V.GetResultArrayType() -> int\nC++: virtual int GetResultArrayType()\n\nType of the result array. It is ignored if CoordinateResults is\ntrue. Initial value is VTK_DOUBLE.\n"},
  {"SetResultArrayType", PyvtkArrayCalculator_SetResultArrayType, METH_VARARGS,
   "V.SetResultArrayType(int)\nC++: virtual void SetResultArrayType(int _arg)\n\nType of the result array. It is ignored if CoordinateResults is\ntrue. Initial value is VTK_DOUBLE.\n"},
  {"GetCoordinateResults", PyvtkArrayCalculator_GetCoordinateResults, METH_VARARGS,
   "V.GetCoordinateResults() -> int\nC++: virtual vtkTypeBool GetCoordinateResults()\n\nSet whether to output results as coordinates.  ResultArrayName\nwill be ignored.  Outputting as coordinates is only valid with\nvector results and if the AttributeMode is\nAttributeModeToUsePointData. If a valid output can't be made, an\nerror will occur.\n"},
  {"SetCoordinateResults", PyvtkArrayCalculator_SetCoordinateResults, METH_VARARGS,
   "V.SetCoordinateResults(int)\nC++: virtual void SetCoordinateResults(vtkTypeBool _arg)\n\nSet whether to output results as coordinates.  ResultArrayName\nwill be ignored.  Outputting as coordinates is only valid with\nvector results and if the AttributeMode is\nAttributeModeToUsePointData. If a valid output can't be made, an\nerror will occur.\n"},
  {"CoordinateResultsOn", PyvtkArrayCalculator_CoordinateResultsOn, METH_VARARGS,
   "V.CoordinateResultsOn()\nC++: virtual void CoordinateResultsOn()\n\nSet whether to output results as coordinates.  ResultArrayName\nwill be ignored.  Outputting as coordinates is only valid with\nvector results and if the AttributeMode is\nAttributeModeToUsePointData. If a valid output can't be made, an\nerror will occur.\n"},
  {"CoordinateResultsOff", PyvtkArrayCalculator_CoordinateResultsOff, METH_VARARGS,
   "V.CoordinateResultsOff()\nC++: virtual void CoordinateResultsOff()\n\nSet whether to output results as coordinates.  ResultArrayName\nwill be ignored.  Outputting as coordinates is only valid with\nvector results and if the AttributeMode is\nAttributeModeToUsePointData. If a valid output can't be made, an\nerror will occur.\n"},
  {"GetResultNormals", PyvtkArrayCalculator_GetResultNormals, METH_VARARGS,
   "V.GetResultNormals() -> bool\nC++: virtual bool GetResultNormals()\n\nSet whether to output results as point/cell normals. Outputting\nas normals is only valid with vector results. Point or cell\nnormals are selected using AttributeMode.\n"},
  {"SetResultNormals", PyvtkArrayCalculator_SetResultNormals, METH_VARARGS,
   "V.SetResultNormals(bool)\nC++: virtual void SetResultNormals(bool _arg)\n\nSet whether to output results as point/cell normals. Outputting\nas normals is only valid with vector results. Point or cell\nnormals are selected using AttributeMode.\n"},
  {"ResultNormalsOn", PyvtkArrayCalculator_ResultNormalsOn, METH_VARARGS,
   "V.ResultNormalsOn()\nC++: virtual void ResultNormalsOn()\n\nSet whether to output results as point/cell normals. Outputting\nas normals is only valid with vector results. Point or cell\nnormals are selected using AttributeMode.\n"},
  {"ResultNormalsOff", PyvtkArrayCalculator_ResultNormalsOff, METH_VARARGS,
   "V.ResultNormalsOff()\nC++: virtual void ResultNormalsOff()\n\nSet whether to output results as point/cell normals. Outputting\nas normals is only valid with vector results. Point or cell\nnormals are selected using AttributeMode.\n"},
  {"GetResultTCoords", PyvtkArrayCalculator_GetResultTCoords, METH_VARARGS,
   "V.GetResultTCoords() -> bool\nC++: virtual bool GetResultTCoords()\n\nSet whether to output results as point/cell texture coordinates.\nPoint or cell texture coordinates are selected using\nAttributeMode. 2-component texture coordinates cannot be\ngenerated at this time.\n"},
  {"SetResultTCoords", PyvtkArrayCalculator_SetResultTCoords, METH_VARARGS,
   "V.SetResultTCoords(bool)\nC++: virtual void SetResultTCoords(bool _arg)\n\nSet whether to output results as point/cell texture coordinates.\nPoint or cell texture coordinates are selected using\nAttributeMode. 2-component texture coordinates cannot be\ngenerated at this time.\n"},
  {"ResultTCoordsOn", PyvtkArrayCalculator_ResultTCoordsOn, METH_VARARGS,
   "V.ResultTCoordsOn()\nC++: virtual void ResultTCoordsOn()\n\nSet whether to output results as point/cell texture coordinates.\nPoint or cell texture coordinates are selected using\nAttributeMode. 2-component texture coordinates cannot be\ngenerated at this time.\n"},
  {"ResultTCoordsOff", PyvtkArrayCalculator_ResultTCoordsOff, METH_VARARGS,
   "V.ResultTCoordsOff()\nC++: virtual void ResultTCoordsOff()\n\nSet whether to output results as point/cell texture coordinates.\nPoint or cell texture coordinates are selected using\nAttributeMode. 2-component texture coordinates cannot be\ngenerated at this time.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {"SetAttributeMode", PyvtkArrayCalculator_SetAttributeMode, METH_VARARGS,
   "V.SetAttributeMode(int)\nC++: void SetAttributeMode(int newMode)\n\nControl whether the filter operates on point data or cell data.\nBy default (AttributeModeToDefault), the filter uses point data.\nAlternatively you can explicitly set the filter to use point data\n(AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData). For graphs you can set the filter\nto use vertex data (AttributeModeToUseVertexData) or edge data\n(AttributeModeToUseEdgeData).\n\n@deprecated Replaced By GetAttributeType and SetAttributeType as\nof VTK 8.1.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"GetAttributeMode", PyvtkArrayCalculator_GetAttributeMode, METH_VARARGS,
   "V.GetAttributeMode() -> int\nC++: int GetAttributeMode()\n\nControl whether the filter operates on point data or cell data.\nBy default (AttributeModeToDefault), the filter uses point data.\nAlternatively you can explicitly set the filter to use point data\n(AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData). For graphs you can set the filter\nto use vertex data (AttributeModeToUseVertexData) or edge data\n(AttributeModeToUseEdgeData).\n\n@deprecated Replaced By GetAttributeType and SetAttributeType as\nof VTK 8.1.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"SetAttributeModeToDefault", PyvtkArrayCalculator_SetAttributeModeToDefault, METH_VARARGS,
   "V.SetAttributeModeToDefault()\nC++: void SetAttributeModeToDefault()\n\nControl whether the filter operates on point data or cell data.\nBy default (AttributeModeToDefault), the filter uses point data.\nAlternatively you can explicitly set the filter to use point data\n(AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData). For graphs you can set the filter\nto use vertex data (AttributeModeToUseVertexData) or edge data\n(AttributeModeToUseEdgeData).\n\n@deprecated Replaced By GetAttributeType and SetAttributeType as\nof VTK 8.1.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"SetAttributeModeToUsePointData", PyvtkArrayCalculator_SetAttributeModeToUsePointData, METH_VARARGS,
   "V.SetAttributeModeToUsePointData()\nC++: void SetAttributeModeToUsePointData()\n\nControl whether the filter operates on point data or cell data.\nBy default (AttributeModeToDefault), the filter uses point data.\nAlternatively you can explicitly set the filter to use point data\n(AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData). For graphs you can set the filter\nto use vertex data (AttributeModeToUseVertexData) or edge data\n(AttributeModeToUseEdgeData).\n\n@deprecated Replaced By GetAttributeType and SetAttributeType as\nof VTK 8.1.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"SetAttributeModeToUseCellData", PyvtkArrayCalculator_SetAttributeModeToUseCellData, METH_VARARGS,
   "V.SetAttributeModeToUseCellData()\nC++: void SetAttributeModeToUseCellData()\n\nControl whether the filter operates on point data or cell data.\nBy default (AttributeModeToDefault), the filter uses point data.\nAlternatively you can explicitly set the filter to use point data\n(AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData). For graphs you can set the filter\nto use vertex data (AttributeModeToUseVertexData) or edge data\n(AttributeModeToUseEdgeData).\n\n@deprecated Replaced By GetAttributeType and SetAttributeType as\nof VTK 8.1.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"SetAttributeModeToUseVertexData", PyvtkArrayCalculator_SetAttributeModeToUseVertexData, METH_VARARGS,
   "V.SetAttributeModeToUseVertexData()\nC++: void SetAttributeModeToUseVertexData()\n\nControl whether the filter operates on point data or cell data.\nBy default (AttributeModeToDefault), the filter uses point data.\nAlternatively you can explicitly set the filter to use point data\n(AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData). For graphs you can set the filter\nto use vertex data (AttributeModeToUseVertexData) or edge data\n(AttributeModeToUseEdgeData).\n\n@deprecated Replaced By GetAttributeType and SetAttributeType as\nof VTK 8.1.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"SetAttributeModeToUseEdgeData", PyvtkArrayCalculator_SetAttributeModeToUseEdgeData, METH_VARARGS,
   "V.SetAttributeModeToUseEdgeData()\nC++: void SetAttributeModeToUseEdgeData()\n\nControl whether the filter operates on point data or cell data.\nBy default (AttributeModeToDefault), the filter uses point data.\nAlternatively you can explicitly set the filter to use point data\n(AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData). For graphs you can set the filter\nto use vertex data (AttributeModeToUseVertexData) or edge data\n(AttributeModeToUseEdgeData).\n\n@deprecated Replaced By GetAttributeType and SetAttributeType as\nof VTK 8.1.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"GetAttributeModeAsString", PyvtkArrayCalculator_GetAttributeModeAsString, METH_VARARGS,
   "V.GetAttributeModeAsString() -> string\nC++: const char *GetAttributeModeAsString()\n\nControl whether the filter operates on point data or cell data.\nBy default (AttributeModeToDefault), the filter uses point data.\nAlternatively you can explicitly set the filter to use point data\n(AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData). For graphs you can set the filter\nto use vertex data (AttributeModeToUseVertexData) or edge data\n(AttributeModeToUseEdgeData).\n\n@deprecated Replaced By GetAttributeType and SetAttributeType as\nof VTK 8.1.\n"},
#endif
  {"GetAttributeTypeAsString", PyvtkArrayCalculator_GetAttributeTypeAsString, METH_VARARGS,
   "V.GetAttributeTypeAsString() -> string\nC++: const char *GetAttributeTypeAsString()\n\nReturns a string representation of the calculator's AttributeType\n"},
  {"SetAttributeType", PyvtkArrayCalculator_SetAttributeType, METH_VARARGS,
   "V.SetAttributeType(int)\nC++: virtual void SetAttributeType(int _arg)\n\nControl which AttributeType the filter operates on (point data or\ncell data for vtkDataSets).  By default the filter uses\nPoint/Vertex/Row data depending on the input data type.  The\ninput value for this function should be one of the constants in\nvtkDataObject::AttributeTypes or DEFAULT_ATTRIBUTE_TYPE for 'default\nbehavior'.\n"},
  {"GetAttributeType", PyvtkArrayCalculator_GetAttributeType, METH_VARARGS,
   "V.GetAttributeType() -> int\nC++: virtual int GetAttributeType()\n\nControl which AttributeType the filter operates on (point data or\ncell data for vtkDataSets).  By default the filter uses\nPoint/Vertex/Row data depending on the input data type.  The\ninput value for this function should be one of the constants in\nvtkDataObject::AttributeTypes or DEFAULT_ATTRIBUTE_TYPE for 'default\nbehavior'.\n"},
  {"SetAttributeTypeToDefault", PyvtkArrayCalculator_SetAttributeTypeToDefault, METH_VARARGS,
   "V.SetAttributeTypeToDefault()\nC++: void SetAttributeTypeToDefault()\n\nControl which AttributeType the filter operates on (point data or\ncell data for vtkDataSets).  By default the filter uses\nPoint/Vertex/Row data depending on the input data type.  The\ninput value for this function should be one of the constants in\nvtkDataObject::AttributeTypes or DEFAULT_ATTRIBUTE_TYPE for 'default\nbehavior'.\n"},
  {"SetAttributeTypeToPointData", PyvtkArrayCalculator_SetAttributeTypeToPointData, METH_VARARGS,
   "V.SetAttributeTypeToPointData()\nC++: void SetAttributeTypeToPointData()\n\nControl which AttributeType the filter operates on (point data or\ncell data for vtkDataSets).  By default the filter uses\nPoint/Vertex/Row data depending on the input data type.  The\ninput value for this function should be one of the constants in\nvtkDataObject::AttributeTypes or DEFAULT_ATTRIBUTE_TYPE for 'default\nbehavior'.\n"},
  {"SetAttributeTypeToCellData", PyvtkArrayCalculator_SetAttributeTypeToCellData, METH_VARARGS,
   "V.SetAttributeTypeToCellData()\nC++: void SetAttributeTypeToCellData()\n\nControl which AttributeType the filter operates on (point data or\ncell data for vtkDataSets).  By default the filter uses\nPoint/Vertex/Row data depending on the input data type.  The\ninput value for this function should be one of the constants in\nvtkDataObject::AttributeTypes or DEFAULT_ATTRIBUTE_TYPE for 'default\nbehavior'.\n"},
  {"SetAttributeTypeToEdgeData", PyvtkArrayCalculator_SetAttributeTypeToEdgeData, METH_VARARGS,
   "V.SetAttributeTypeToEdgeData()\nC++: void SetAttributeTypeToEdgeData()\n\nControl which AttributeType the filter operates on (point data or\ncell data for vtkDataSets).  By default the filter uses\nPoint/Vertex/Row data depending on the input data type.  The\ninput value for this function should be one of the constants in\nvtkDataObject::AttributeTypes or DEFAULT_ATTRIBUTE_TYPE for 'default\nbehavior'.\n"},
  {"SetAttributeTypeToVertexData", PyvtkArrayCalculator_SetAttributeTypeToVertexData, METH_VARARGS,
   "V.SetAttributeTypeToVertexData()\nC++: void SetAttributeTypeToVertexData()\n\nControl which AttributeType the filter operates on (point data or\ncell data for vtkDataSets).  By default the filter uses\nPoint/Vertex/Row data depending on the input data type.  The\ninput value for this function should be one of the constants in\nvtkDataObject::AttributeTypes or DEFAULT_ATTRIBUTE_TYPE for 'default\nbehavior'.\n"},
  {"SetAttributeTypeToRowData", PyvtkArrayCalculator_SetAttributeTypeToRowData, METH_VARARGS,
   "V.SetAttributeTypeToRowData()\nC++: void SetAttributeTypeToRowData()\n\nControl which AttributeType the filter operates on (point data or\ncell data for vtkDataSets).  By default the filter uses\nPoint/Vertex/Row data depending on the input data type.  The\ninput value for this function should be one of the constants in\nvtkDataObject::AttributeTypes or DEFAULT_ATTRIBUTE_TYPE for 'default\nbehavior'.\n"},
  {"RemoveAllVariables", PyvtkArrayCalculator_RemoveAllVariables, METH_VARARGS,
   "V.RemoveAllVariables()\nC++: void RemoveAllVariables()\n\nRemove all the variable names and their associated array names.\n"},
  {"RemoveScalarVariables", PyvtkArrayCalculator_RemoveScalarVariables, METH_VARARGS,
   "V.RemoveScalarVariables()\nC++: virtual void RemoveScalarVariables()\n\nRemove all the scalar variable names and their associated array\nnames.\n"},
  {"RemoveVectorVariables", PyvtkArrayCalculator_RemoveVectorVariables, METH_VARARGS,
   "V.RemoveVectorVariables()\nC++: virtual void RemoveVectorVariables()\n\nRemove all the scalar variable names and their associated array\nnames.\n"},
  {"RemoveCoordinateScalarVariables", PyvtkArrayCalculator_RemoveCoordinateScalarVariables, METH_VARARGS,
   "V.RemoveCoordinateScalarVariables()\nC++: virtual void RemoveCoordinateScalarVariables()\n\nRemove all the coordinate variables.\n"},
  {"RemoveCoordinateVectorVariables", PyvtkArrayCalculator_RemoveCoordinateVectorVariables, METH_VARARGS,
   "V.RemoveCoordinateVectorVariables()\nC++: virtual void RemoveCoordinateVectorVariables()\n\nRemove all the coordinate variables.\n"},
  {"GetScalarArrayName", PyvtkArrayCalculator_GetScalarArrayName, METH_VARARGS,
   "V.GetScalarArrayName(int) -> string\nC++: char *GetScalarArrayName(int i)\n\nMethods to get information about the current variables.\n"},
  {"GetVectorArrayName", PyvtkArrayCalculator_GetVectorArrayName, METH_VARARGS,
   "V.GetVectorArrayName(int) -> string\nC++: char *GetVectorArrayName(int i)\n\nMethods to get information about the current variables.\n"},
  {"GetScalarVariableName", PyvtkArrayCalculator_GetScalarVariableName, METH_VARARGS,
   "V.GetScalarVariableName(int) -> string\nC++: char *GetScalarVariableName(int i)\n\nMethods to get information about the current variables.\n"},
  {"GetVectorVariableName", PyvtkArrayCalculator_GetVectorVariableName, METH_VARARGS,
   "V.GetVectorVariableName(int) -> string\nC++: char *GetVectorVariableName(int i)\n\nMethods to get information about the current variables.\n"},
  {"GetSelectedScalarComponents", PyvtkArrayCalculator_GetSelectedScalarComponents, METH_VARARGS,
   "V.GetSelectedScalarComponents() -> (int, ...)\nC++: int *GetSelectedScalarComponents()\n\nMethods to get information about the current variables.\n"},
  {"GetSelectedScalarComponent", PyvtkArrayCalculator_GetSelectedScalarComponent, METH_VARARGS,
   "V.GetSelectedScalarComponent(int) -> int\nC++: int GetSelectedScalarComponent(int i)\n\nMethods to get information about the current variables.\n"},
  {"GetSelectedVectorComponents", PyvtkArrayCalculator_GetSelectedVectorComponents, METH_VARARGS,
   "V.GetSelectedVectorComponents(int) -> (int, ...)\nC++: int *GetSelectedVectorComponents(int i)\n\nMethods to get information about the current variables.\n"},
  {"GetNumberOfScalarArrays", PyvtkArrayCalculator_GetNumberOfScalarArrays, METH_VARARGS,
   "V.GetNumberOfScalarArrays() -> int\nC++: virtual int GetNumberOfScalarArrays()\n\nMethods to get information about the current variables.\n"},
  {"GetNumberOfVectorArrays", PyvtkArrayCalculator_GetNumberOfVectorArrays, METH_VARARGS,
   "V.GetNumberOfVectorArrays() -> int\nC++: virtual int GetNumberOfVectorArrays()\n\nMethods to get information about the current variables.\n"},
  {"SetReplaceInvalidValues", PyvtkArrayCalculator_SetReplaceInvalidValues, METH_VARARGS,
   "V.SetReplaceInvalidValues(int)\nC++: virtual void SetReplaceInvalidValues(vtkTypeBool _arg)\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {"GetReplaceInvalidValues", PyvtkArrayCalculator_GetReplaceInvalidValues, METH_VARARGS,
   "V.GetReplaceInvalidValues() -> int\nC++: virtual vtkTypeBool GetReplaceInvalidValues()\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {"ReplaceInvalidValuesOn", PyvtkArrayCalculator_ReplaceInvalidValuesOn, METH_VARARGS,
   "V.ReplaceInvalidValuesOn()\nC++: virtual void ReplaceInvalidValuesOn()\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {"ReplaceInvalidValuesOff", PyvtkArrayCalculator_ReplaceInvalidValuesOff, METH_VARARGS,
   "V.ReplaceInvalidValuesOff()\nC++: virtual void ReplaceInvalidValuesOff()\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {"SetReplacementValue", PyvtkArrayCalculator_SetReplacementValue, METH_VARARGS,
   "V.SetReplacementValue(float)\nC++: virtual void SetReplacementValue(double _arg)\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {"GetReplacementValue", PyvtkArrayCalculator_GetReplacementValue, METH_VARARGS,
   "V.GetReplacementValue() -> float\nC++: virtual double GetReplacementValue()\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {"GetDataSetOutput", PyvtkArrayCalculator_GetDataSetOutput, METH_VARARGS,
   "V.GetDataSetOutput() -> vtkDataSet\nC++: vtkDataSet *GetDataSetOutput()\n\nReturns the output of the filter downcast to a vtkDataSet or\nnullptr if the cast fails.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkArrayCalculator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkArrayCalculator", // tp_name
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
  PyvtkArrayCalculator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrayCalculator_StaticNew()
{
  return vtkArrayCalculator::New();
}

PyObject *PyvtkArrayCalculator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkArrayCalculator_Type, PyvtkArrayCalculator_Methods,
    "vtkArrayCalculator",
 &PyvtkArrayCalculator_StaticNew);

  PyTypeObject *pytype = &PyvtkArrayCalculator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPassInputTypeAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  o = PyInt_FromLong(-1);
  if (o)
  {
    PyDict_SetItemString(d, "DEFAULT_ATTRIBUTE_TYPE", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkArrayCalculator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkArrayCalculator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkArrayCalculator", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "VTK_ATTRIBUTE_MODE_DEFAULT", 0 },
        { "VTK_ATTRIBUTE_MODE_USE_POINT_DATA", 1 },
        { "VTK_ATTRIBUTE_MODE_USE_CELL_DATA", 2 },
        { "VTK_ATTRIBUTE_MODE_USE_VERTEX_DATA", 3 },
        { "VTK_ATTRIBUTE_MODE_USE_EDGE_DATA", 4 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

