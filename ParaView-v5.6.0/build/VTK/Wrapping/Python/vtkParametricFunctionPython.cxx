// python wrapper for vtkParametricFunction
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
#include "vtkParametricFunction.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParametricFunction(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkParametricFunction_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkParametricFunction_Doc =
  "vtkParametricFunction - abstract interface for parametric functions\n\n"
  "Superclass: vtkObject\n\n"
  "vtkParametricFunction is an abstract interface for functions defined\n"
  "by parametric mapping i.e. f(u,v,w)->(x,y,z) where u_min <= u <\n"
  "u_max, v_min <= v < v_max, w_min <= w < w_max. (For notational\n"
  "convenience, we will write f(u)->x and assume that u means (u,v,w)\n"
  "and x means (x,y,z).)\n\n"
  "The interface contains the pure virtual function, Evaluate(), that\n"
  "generates a point and the derivatives at that point which are then\n"
  "used to construct the surface. A second pure virtual function,\n"
  "EvaluateScalar(), can be used to generate a scalar for the surface.\n"
  "Finally, the GetDimension() virtual function is used to differentiate\n"
  "1D, 2D, and 3D parametric functions. Since this abstract class\n"
  "defines a pure virtual API, its subclasses must implement the pure\n"
  "virtual functions GetDimension(), Evaluate() and EvaluateScalar().\n\n"
  "This class has also methods for defining a range of parametric values\n"
  "(u,v,w).\n\n"
  "@par Thanks: Andrew Maclean andrew.amaclean@gmail.com for creating\n"
  "and contributing the class.\n\n"
  "@sa\n"
  "vtkParametricFunctionSource - tessellates a parametric function\n\n"
  "@sa\n"
  "Implementations of derived classes implementing non-orentable\n"
  "surfaces: vtkParametricBoy vtkParametricCrossCap\n"
  "vtkParametricFigure8Klein vtkParametricKlein vtkParametricMobius\n"
  "vtkParametricRoman\n\n"
  "@sa\n"
  "Implementations of derived classes implementing orientable surfaces:\n"
  "vtkParametricConicSpiral vtkParametricDini vtkParametricEllipsoid\n"
  "vtkParametricEnneper vtkParametricRandomHills\n"
  "vtkParametricSuperEllipsoid vtkParametricSuperToroid\n"
  "vtkParametricTorus\n\n";


static PyObject *
PyvtkParametricFunction_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParametricFunction::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParametricFunction::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParametricFunction *tempr = vtkParametricFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParametricFunction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParametricFunction::NewInstance());

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
PyvtkParametricFunction_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetDimension();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 9;
  double temp2[9];
  double save2[9];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    op->Evaluate(temp0, temp1, temp2);

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
PyvtkParametricFunction_EvaluateScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 9;
  double temp2[9];
  double save2[9];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    double tempr = op->EvaluateScalar(temp0, temp1, temp2);

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
PyvtkParametricFunction_SetMinimumU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumU(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetMinimumU(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetMinimumU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumU() :
      op->vtkParametricFunction::GetMinimumU());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetMaximumU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumU(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetMaximumU(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetMaximumU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumU() :
      op->vtkParametricFunction::GetMaximumU());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetMinimumV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumV(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetMinimumV(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetMinimumV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumV() :
      op->vtkParametricFunction::GetMinimumV());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetMaximumV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumV(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetMaximumV(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetMaximumV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumV() :
      op->vtkParametricFunction::GetMaximumV());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetMinimumW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumW(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetMinimumW(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetMinimumW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumW() :
      op->vtkParametricFunction::GetMinimumW());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetMaximumW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumW(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetMaximumW(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetMaximumW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumW() :
      op->vtkParametricFunction::GetMaximumW());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetJoinU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJoinU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetJoinU(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetJoinU(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinUMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinUMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJoinUMinValue() :
      op->vtkParametricFunction::GetJoinUMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinUMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinUMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJoinUMaxValue() :
      op->vtkParametricFunction::GetJoinUMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJoinU() :
      op->vtkParametricFunction::GetJoinU());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_JoinUOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JoinUOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->JoinUOn();
    }
    else
    {
      op->vtkParametricFunction::JoinUOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_JoinUOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JoinUOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->JoinUOff();
    }
    else
    {
      op->vtkParametricFunction::JoinUOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetJoinV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJoinV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetJoinV(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetJoinV(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinVMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinVMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJoinVMinValue() :
      op->vtkParametricFunction::GetJoinVMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinVMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinVMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJoinVMaxValue() :
      op->vtkParametricFunction::GetJoinVMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJoinV() :
      op->vtkParametricFunction::GetJoinV());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_JoinVOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JoinVOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->JoinVOn();
    }
    else
    {
      op->vtkParametricFunction::JoinVOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_JoinVOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JoinVOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->JoinVOff();
    }
    else
    {
      op->vtkParametricFunction::JoinVOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetJoinW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJoinW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetJoinW(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetJoinW(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinWMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinWMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJoinWMinValue() :
      op->vtkParametricFunction::GetJoinWMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinWMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinWMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJoinWMaxValue() :
      op->vtkParametricFunction::GetJoinWMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJoinW() :
      op->vtkParametricFunction::GetJoinW());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_JoinWOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JoinWOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->JoinWOn();
    }
    else
    {
      op->vtkParametricFunction::JoinWOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_JoinWOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JoinWOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->JoinWOff();
    }
    else
    {
      op->vtkParametricFunction::JoinWOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetTwistU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwistU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTwistU(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetTwistU(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistUMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistUMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwistUMinValue() :
      op->vtkParametricFunction::GetTwistUMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistUMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistUMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwistUMaxValue() :
      op->vtkParametricFunction::GetTwistUMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwistU() :
      op->vtkParametricFunction::GetTwistU());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_TwistUOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwistUOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwistUOn();
    }
    else
    {
      op->vtkParametricFunction::TwistUOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_TwistUOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwistUOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwistUOff();
    }
    else
    {
      op->vtkParametricFunction::TwistUOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetTwistV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwistV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTwistV(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetTwistV(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistVMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistVMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwistVMinValue() :
      op->vtkParametricFunction::GetTwistVMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistVMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistVMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwistVMaxValue() :
      op->vtkParametricFunction::GetTwistVMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwistV() :
      op->vtkParametricFunction::GetTwistV());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_TwistVOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwistVOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwistVOn();
    }
    else
    {
      op->vtkParametricFunction::TwistVOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_TwistVOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwistVOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwistVOff();
    }
    else
    {
      op->vtkParametricFunction::TwistVOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetTwistW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwistW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTwistW(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetTwistW(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistWMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistWMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwistWMinValue() :
      op->vtkParametricFunction::GetTwistWMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistWMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistWMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwistWMaxValue() :
      op->vtkParametricFunction::GetTwistWMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwistW() :
      op->vtkParametricFunction::GetTwistW());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_TwistWOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwistWOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwistWOn();
    }
    else
    {
      op->vtkParametricFunction::TwistWOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_TwistWOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwistWOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwistWOff();
    }
    else
    {
      op->vtkParametricFunction::TwistWOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetClockwiseOrdering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClockwiseOrdering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClockwiseOrdering(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetClockwiseOrdering(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetClockwiseOrderingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClockwiseOrderingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClockwiseOrderingMinValue() :
      op->vtkParametricFunction::GetClockwiseOrderingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetClockwiseOrderingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClockwiseOrderingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClockwiseOrderingMaxValue() :
      op->vtkParametricFunction::GetClockwiseOrderingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetClockwiseOrdering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClockwiseOrdering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClockwiseOrdering() :
      op->vtkParametricFunction::GetClockwiseOrdering());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_ClockwiseOrderingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClockwiseOrderingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClockwiseOrderingOn();
    }
    else
    {
      op->vtkParametricFunction::ClockwiseOrderingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_ClockwiseOrderingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClockwiseOrderingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClockwiseOrderingOff();
    }
    else
    {
      op->vtkParametricFunction::ClockwiseOrderingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetDerivativesAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDerivativesAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDerivativesAvailable(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetDerivativesAvailable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetDerivativesAvailableMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDerivativesAvailableMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDerivativesAvailableMinValue() :
      op->vtkParametricFunction::GetDerivativesAvailableMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetDerivativesAvailableMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDerivativesAvailableMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDerivativesAvailableMaxValue() :
      op->vtkParametricFunction::GetDerivativesAvailableMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetDerivativesAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDerivativesAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDerivativesAvailable() :
      op->vtkParametricFunction::GetDerivativesAvailable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_DerivativesAvailableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DerivativesAvailableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DerivativesAvailableOn();
    }
    else
    {
      op->vtkParametricFunction::DerivativesAvailableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_DerivativesAvailableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DerivativesAvailableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DerivativesAvailableOff();
    }
    else
    {
      op->vtkParametricFunction::DerivativesAvailableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkParametricFunction_Methods[] = {
  {"IsTypeOf", PyvtkParametricFunction_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParametricFunction_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParametricFunction_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkParametricFunction\nC++: static vtkParametricFunction *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParametricFunction_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkParametricFunction\nC++: vtkParametricFunction *NewInstance()\n\n"},
  {"GetDimension", PyvtkParametricFunction_GetDimension, METH_VARARGS,
   "V.GetDimension() -> int\nC++: virtual int GetDimension()\n\nReturn the dimension of parametric space. Depending on the\ndimension, then the (u,v,w) parameters and associated information\n(e.g., derivates) have meaning. For example, if the dimension of\nthe function is one, then u[0] and Duvw[0...2] have meaning. This\nis a pure virtual function that must be instantiated in a derived\nclass.\n"},
  {"Evaluate", PyvtkParametricFunction_Evaluate, METH_VARARGS,
   "V.Evaluate([float, float, float], [float, float, float], [float,\n    float, float, float, float, float, float, float, float])\nC++: virtual void Evaluate(double uvw[3], double Pt[3],\n    double Duvw[9])\n\nPerforms the mapping $f(uvw)->(Pt,Duvw)$f. This is a pure virtual\nfunction that must be instantiated in a derived class.\n\n* uvw are the parameters, with u corresponding to uvw[0],\n* v to uvw[1] and w to uvw[2] respectively. Pt is the returned\n  Cartesian point,\n* Duvw are the derivatives of this point with respect to u, v and\nw.\n* Note that the first three values in Duvw are Du, the next three\nare Dv,\n* and the final three are Dw. Du Dv Dw are the partial\n  derivatives of the\n* function at the point Pt with respect to u, v and w\n  respectively.\n"},
  {"EvaluateScalar", PyvtkParametricFunction_EvaluateScalar, METH_VARARGS,
   "V.EvaluateScalar([float, float, float], [float, float, float],\n    [float, float, float, float, float, float, float, float,\n    float]) -> float\nC++: virtual double EvaluateScalar(double uvw[3], double Pt[3],\n    double Duvw[9])\n\nCalculate a user defined scalar using one or all of uvw, Pt,\nDuvw. This is a pure virtual function that must be instantiated\nin a derived class.\n\n* uvw are the parameters with Pt being the cartesian point,\n* Duvw are the derivatives of this point with respect to u, v,\n  and w.\n* Pt, Duvw are obtained from Evaluate().\n"},
  {"SetMinimumU", PyvtkParametricFunction_SetMinimumU, METH_VARARGS,
   "V.SetMinimumU(float)\nC++: virtual void SetMinimumU(double _arg)\n\nSet/Get the minimum u-value.\n"},
  {"GetMinimumU", PyvtkParametricFunction_GetMinimumU, METH_VARARGS,
   "V.GetMinimumU() -> float\nC++: virtual double GetMinimumU()\n\nSet/Get the minimum u-value.\n"},
  {"SetMaximumU", PyvtkParametricFunction_SetMaximumU, METH_VARARGS,
   "V.SetMaximumU(float)\nC++: virtual void SetMaximumU(double _arg)\n\nSet/Get the maximum u-value.\n"},
  {"GetMaximumU", PyvtkParametricFunction_GetMaximumU, METH_VARARGS,
   "V.GetMaximumU() -> float\nC++: virtual double GetMaximumU()\n\nSet/Get the maximum u-value.\n"},
  {"SetMinimumV", PyvtkParametricFunction_SetMinimumV, METH_VARARGS,
   "V.SetMinimumV(float)\nC++: virtual void SetMinimumV(double _arg)\n\nSet/Get the minimum v-value.\n"},
  {"GetMinimumV", PyvtkParametricFunction_GetMinimumV, METH_VARARGS,
   "V.GetMinimumV() -> float\nC++: virtual double GetMinimumV()\n\nSet/Get the minimum v-value.\n"},
  {"SetMaximumV", PyvtkParametricFunction_SetMaximumV, METH_VARARGS,
   "V.SetMaximumV(float)\nC++: virtual void SetMaximumV(double _arg)\n\nSet/Get the maximum v-value.\n"},
  {"GetMaximumV", PyvtkParametricFunction_GetMaximumV, METH_VARARGS,
   "V.GetMaximumV() -> float\nC++: virtual double GetMaximumV()\n\nSet/Get the maximum v-value.\n"},
  {"SetMinimumW", PyvtkParametricFunction_SetMinimumW, METH_VARARGS,
   "V.SetMinimumW(float)\nC++: virtual void SetMinimumW(double _arg)\n\nSet/Get the minimum w-value.\n"},
  {"GetMinimumW", PyvtkParametricFunction_GetMinimumW, METH_VARARGS,
   "V.GetMinimumW() -> float\nC++: virtual double GetMinimumW()\n\nSet/Get the minimum w-value.\n"},
  {"SetMaximumW", PyvtkParametricFunction_SetMaximumW, METH_VARARGS,
   "V.SetMaximumW(float)\nC++: virtual void SetMaximumW(double _arg)\n\nSet/Get the maximum w-value.\n"},
  {"GetMaximumW", PyvtkParametricFunction_GetMaximumW, METH_VARARGS,
   "V.GetMaximumW() -> float\nC++: virtual double GetMaximumW()\n\nSet/Get the maximum w-value.\n"},
  {"SetJoinU", PyvtkParametricFunction_SetJoinU, METH_VARARGS,
   "V.SetJoinU(int)\nC++: virtual void SetJoinU(vtkTypeBool _arg)\n\nSet/Get the flag which joins the first triangle strip to the last\none.\n"},
  {"GetJoinUMinValue", PyvtkParametricFunction_GetJoinUMinValue, METH_VARARGS,
   "V.GetJoinUMinValue() -> int\nC++: virtual vtkTypeBool GetJoinUMinValue()\n\nSet/Get the flag which joins the first triangle strip to the last\none.\n"},
  {"GetJoinUMaxValue", PyvtkParametricFunction_GetJoinUMaxValue, METH_VARARGS,
   "V.GetJoinUMaxValue() -> int\nC++: virtual vtkTypeBool GetJoinUMaxValue()\n\nSet/Get the flag which joins the first triangle strip to the last\none.\n"},
  {"GetJoinU", PyvtkParametricFunction_GetJoinU, METH_VARARGS,
   "V.GetJoinU() -> int\nC++: virtual vtkTypeBool GetJoinU()\n\nSet/Get the flag which joins the first triangle strip to the last\none.\n"},
  {"JoinUOn", PyvtkParametricFunction_JoinUOn, METH_VARARGS,
   "V.JoinUOn()\nC++: virtual void JoinUOn()\n\nSet/Get the flag which joins the first triangle strip to the last\none.\n"},
  {"JoinUOff", PyvtkParametricFunction_JoinUOff, METH_VARARGS,
   "V.JoinUOff()\nC++: virtual void JoinUOff()\n\nSet/Get the flag which joins the first triangle strip to the last\none.\n"},
  {"SetJoinV", PyvtkParametricFunction_SetJoinV, METH_VARARGS,
   "V.SetJoinV(int)\nC++: virtual void SetJoinV(vtkTypeBool _arg)\n\nSet/Get the flag which joins the ends of the triangle strips.\n"},
  {"GetJoinVMinValue", PyvtkParametricFunction_GetJoinVMinValue, METH_VARARGS,
   "V.GetJoinVMinValue() -> int\nC++: virtual vtkTypeBool GetJoinVMinValue()\n\nSet/Get the flag which joins the ends of the triangle strips.\n"},
  {"GetJoinVMaxValue", PyvtkParametricFunction_GetJoinVMaxValue, METH_VARARGS,
   "V.GetJoinVMaxValue() -> int\nC++: virtual vtkTypeBool GetJoinVMaxValue()\n\nSet/Get the flag which joins the ends of the triangle strips.\n"},
  {"GetJoinV", PyvtkParametricFunction_GetJoinV, METH_VARARGS,
   "V.GetJoinV() -> int\nC++: virtual vtkTypeBool GetJoinV()\n\nSet/Get the flag which joins the ends of the triangle strips.\n"},
  {"JoinVOn", PyvtkParametricFunction_JoinVOn, METH_VARARGS,
   "V.JoinVOn()\nC++: virtual void JoinVOn()\n\nSet/Get the flag which joins the ends of the triangle strips.\n"},
  {"JoinVOff", PyvtkParametricFunction_JoinVOff, METH_VARARGS,
   "V.JoinVOff()\nC++: virtual void JoinVOff()\n\nSet/Get the flag which joins the ends of the triangle strips.\n"},
  {"SetJoinW", PyvtkParametricFunction_SetJoinW, METH_VARARGS,
   "V.SetJoinW(int)\nC++: virtual void SetJoinW(vtkTypeBool _arg)\n\nSet/Get the flag which joins the ends of the triangle strips.\n"},
  {"GetJoinWMinValue", PyvtkParametricFunction_GetJoinWMinValue, METH_VARARGS,
   "V.GetJoinWMinValue() -> int\nC++: virtual vtkTypeBool GetJoinWMinValue()\n\nSet/Get the flag which joins the ends of the triangle strips.\n"},
  {"GetJoinWMaxValue", PyvtkParametricFunction_GetJoinWMaxValue, METH_VARARGS,
   "V.GetJoinWMaxValue() -> int\nC++: virtual vtkTypeBool GetJoinWMaxValue()\n\nSet/Get the flag which joins the ends of the triangle strips.\n"},
  {"GetJoinW", PyvtkParametricFunction_GetJoinW, METH_VARARGS,
   "V.GetJoinW() -> int\nC++: virtual vtkTypeBool GetJoinW()\n\nSet/Get the flag which joins the ends of the triangle strips.\n"},
  {"JoinWOn", PyvtkParametricFunction_JoinWOn, METH_VARARGS,
   "V.JoinWOn()\nC++: virtual void JoinWOn()\n\nSet/Get the flag which joins the ends of the triangle strips.\n"},
  {"JoinWOff", PyvtkParametricFunction_JoinWOff, METH_VARARGS,
   "V.JoinWOff()\nC++: virtual void JoinWOff()\n\nSet/Get the flag which joins the ends of the triangle strips.\n"},
  {"SetTwistU", PyvtkParametricFunction_SetTwistU, METH_VARARGS,
   "V.SetTwistU(int)\nC++: virtual void SetTwistU(vtkTypeBool _arg)\n\nSet/Get the flag which joins the first triangle strip to the last\none with a twist. JoinU must also be set if this is set. Used\nwhen building some non-orientable surfaces.\n"},
  {"GetTwistUMinValue", PyvtkParametricFunction_GetTwistUMinValue, METH_VARARGS,
   "V.GetTwistUMinValue() -> int\nC++: virtual vtkTypeBool GetTwistUMinValue()\n\nSet/Get the flag which joins the first triangle strip to the last\none with a twist. JoinU must also be set if this is set. Used\nwhen building some non-orientable surfaces.\n"},
  {"GetTwistUMaxValue", PyvtkParametricFunction_GetTwistUMaxValue, METH_VARARGS,
   "V.GetTwistUMaxValue() -> int\nC++: virtual vtkTypeBool GetTwistUMaxValue()\n\nSet/Get the flag which joins the first triangle strip to the last\none with a twist. JoinU must also be set if this is set. Used\nwhen building some non-orientable surfaces.\n"},
  {"GetTwistU", PyvtkParametricFunction_GetTwistU, METH_VARARGS,
   "V.GetTwistU() -> int\nC++: virtual vtkTypeBool GetTwistU()\n\nSet/Get the flag which joins the first triangle strip to the last\none with a twist. JoinU must also be set if this is set. Used\nwhen building some non-orientable surfaces.\n"},
  {"TwistUOn", PyvtkParametricFunction_TwistUOn, METH_VARARGS,
   "V.TwistUOn()\nC++: virtual void TwistUOn()\n\nSet/Get the flag which joins the first triangle strip to the last\none with a twist. JoinU must also be set if this is set. Used\nwhen building some non-orientable surfaces.\n"},
  {"TwistUOff", PyvtkParametricFunction_TwistUOff, METH_VARARGS,
   "V.TwistUOff()\nC++: virtual void TwistUOff()\n\nSet/Get the flag which joins the first triangle strip to the last\none with a twist. JoinU must also be set if this is set. Used\nwhen building some non-orientable surfaces.\n"},
  {"SetTwistV", PyvtkParametricFunction_SetTwistV, METH_VARARGS,
   "V.SetTwistV(int)\nC++: virtual void SetTwistV(vtkTypeBool _arg)\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinV must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {"GetTwistVMinValue", PyvtkParametricFunction_GetTwistVMinValue, METH_VARARGS,
   "V.GetTwistVMinValue() -> int\nC++: virtual vtkTypeBool GetTwistVMinValue()\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinV must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {"GetTwistVMaxValue", PyvtkParametricFunction_GetTwistVMaxValue, METH_VARARGS,
   "V.GetTwistVMaxValue() -> int\nC++: virtual vtkTypeBool GetTwistVMaxValue()\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinV must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {"GetTwistV", PyvtkParametricFunction_GetTwistV, METH_VARARGS,
   "V.GetTwistV() -> int\nC++: virtual vtkTypeBool GetTwistV()\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinV must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {"TwistVOn", PyvtkParametricFunction_TwistVOn, METH_VARARGS,
   "V.TwistVOn()\nC++: virtual void TwistVOn()\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinV must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {"TwistVOff", PyvtkParametricFunction_TwistVOff, METH_VARARGS,
   "V.TwistVOff()\nC++: virtual void TwistVOff()\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinV must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {"SetTwistW", PyvtkParametricFunction_SetTwistW, METH_VARARGS,
   "V.SetTwistW(int)\nC++: virtual void SetTwistW(vtkTypeBool _arg)\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinW must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {"GetTwistWMinValue", PyvtkParametricFunction_GetTwistWMinValue, METH_VARARGS,
   "V.GetTwistWMinValue() -> int\nC++: virtual vtkTypeBool GetTwistWMinValue()\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinW must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {"GetTwistWMaxValue", PyvtkParametricFunction_GetTwistWMaxValue, METH_VARARGS,
   "V.GetTwistWMaxValue() -> int\nC++: virtual vtkTypeBool GetTwistWMaxValue()\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinW must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {"GetTwistW", PyvtkParametricFunction_GetTwistW, METH_VARARGS,
   "V.GetTwistW() -> int\nC++: virtual vtkTypeBool GetTwistW()\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinW must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {"TwistWOn", PyvtkParametricFunction_TwistWOn, METH_VARARGS,
   "V.TwistWOn()\nC++: virtual void TwistWOn()\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinW must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {"TwistWOff", PyvtkParametricFunction_TwistWOff, METH_VARARGS,
   "V.TwistWOff()\nC++: virtual void TwistWOff()\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinW must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {"SetClockwiseOrdering", PyvtkParametricFunction_SetClockwiseOrdering, METH_VARARGS,
   "V.SetClockwiseOrdering(int)\nC++: virtual void SetClockwiseOrdering(vtkTypeBool _arg)\n\nSet/Get the flag which determines the ordering of the vertices\nforming the triangle strips. The ordering of the points being\ninserted into the triangle strip is important because it\ndetermines the direction of the normals for the lighting. If set,\nthe ordering is clockwise, otherwise the ordering is\nanti-clockwise. Default is true (i.e. clockwise ordering).\n"},
  {"GetClockwiseOrderingMinValue", PyvtkParametricFunction_GetClockwiseOrderingMinValue, METH_VARARGS,
   "V.GetClockwiseOrderingMinValue() -> int\nC++: virtual vtkTypeBool GetClockwiseOrderingMinValue()\n\nSet/Get the flag which determines the ordering of the vertices\nforming the triangle strips. The ordering of the points being\ninserted into the triangle strip is important because it\ndetermines the direction of the normals for the lighting. If set,\nthe ordering is clockwise, otherwise the ordering is\nanti-clockwise. Default is true (i.e. clockwise ordering).\n"},
  {"GetClockwiseOrderingMaxValue", PyvtkParametricFunction_GetClockwiseOrderingMaxValue, METH_VARARGS,
   "V.GetClockwiseOrderingMaxValue() -> int\nC++: virtual vtkTypeBool GetClockwiseOrderingMaxValue()\n\nSet/Get the flag which determines the ordering of the vertices\nforming the triangle strips. The ordering of the points being\ninserted into the triangle strip is important because it\ndetermines the direction of the normals for the lighting. If set,\nthe ordering is clockwise, otherwise the ordering is\nanti-clockwise. Default is true (i.e. clockwise ordering).\n"},
  {"GetClockwiseOrdering", PyvtkParametricFunction_GetClockwiseOrdering, METH_VARARGS,
   "V.GetClockwiseOrdering() -> int\nC++: virtual vtkTypeBool GetClockwiseOrdering()\n\nSet/Get the flag which determines the ordering of the vertices\nforming the triangle strips. The ordering of the points being\ninserted into the triangle strip is important because it\ndetermines the direction of the normals for the lighting. If set,\nthe ordering is clockwise, otherwise the ordering is\nanti-clockwise. Default is true (i.e. clockwise ordering).\n"},
  {"ClockwiseOrderingOn", PyvtkParametricFunction_ClockwiseOrderingOn, METH_VARARGS,
   "V.ClockwiseOrderingOn()\nC++: virtual void ClockwiseOrderingOn()\n\nSet/Get the flag which determines the ordering of the vertices\nforming the triangle strips. The ordering of the points being\ninserted into the triangle strip is important because it\ndetermines the direction of the normals for the lighting. If set,\nthe ordering is clockwise, otherwise the ordering is\nanti-clockwise. Default is true (i.e. clockwise ordering).\n"},
  {"ClockwiseOrderingOff", PyvtkParametricFunction_ClockwiseOrderingOff, METH_VARARGS,
   "V.ClockwiseOrderingOff()\nC++: virtual void ClockwiseOrderingOff()\n\nSet/Get the flag which determines the ordering of the vertices\nforming the triangle strips. The ordering of the points being\ninserted into the triangle strip is important because it\ndetermines the direction of the normals for the lighting. If set,\nthe ordering is clockwise, otherwise the ordering is\nanti-clockwise. Default is true (i.e. clockwise ordering).\n"},
  {"SetDerivativesAvailable", PyvtkParametricFunction_SetDerivativesAvailable, METH_VARARGS,
   "V.SetDerivativesAvailable(int)\nC++: virtual void SetDerivativesAvailable(vtkTypeBool _arg)\n\nSet/Get the flag which determines whether derivatives are\navailable from the parametric function (i.e., whether the\nEvaluate() method returns valid derivatives).\n"},
  {"GetDerivativesAvailableMinValue", PyvtkParametricFunction_GetDerivativesAvailableMinValue, METH_VARARGS,
   "V.GetDerivativesAvailableMinValue() -> int\nC++: virtual vtkTypeBool GetDerivativesAvailableMinValue()\n\nSet/Get the flag which determines whether derivatives are\navailable from the parametric function (i.e., whether the\nEvaluate() method returns valid derivatives).\n"},
  {"GetDerivativesAvailableMaxValue", PyvtkParametricFunction_GetDerivativesAvailableMaxValue, METH_VARARGS,
   "V.GetDerivativesAvailableMaxValue() -> int\nC++: virtual vtkTypeBool GetDerivativesAvailableMaxValue()\n\nSet/Get the flag which determines whether derivatives are\navailable from the parametric function (i.e., whether the\nEvaluate() method returns valid derivatives).\n"},
  {"GetDerivativesAvailable", PyvtkParametricFunction_GetDerivativesAvailable, METH_VARARGS,
   "V.GetDerivativesAvailable() -> int\nC++: virtual vtkTypeBool GetDerivativesAvailable()\n\nSet/Get the flag which determines whether derivatives are\navailable from the parametric function (i.e., whether the\nEvaluate() method returns valid derivatives).\n"},
  {"DerivativesAvailableOn", PyvtkParametricFunction_DerivativesAvailableOn, METH_VARARGS,
   "V.DerivativesAvailableOn()\nC++: virtual void DerivativesAvailableOn()\n\nSet/Get the flag which determines whether derivatives are\navailable from the parametric function (i.e., whether the\nEvaluate() method returns valid derivatives).\n"},
  {"DerivativesAvailableOff", PyvtkParametricFunction_DerivativesAvailableOff, METH_VARARGS,
   "V.DerivativesAvailableOff()\nC++: virtual void DerivativesAvailableOff()\n\nSet/Get the flag which determines whether derivatives are\navailable from the parametric function (i.e., whether the\nEvaluate() method returns valid derivatives).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkParametricFunction_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonComputationalGeometryPython.vtkParametricFunction", // tp_name
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
  PyvtkParametricFunction_Doc, // tp_doc
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

PyObject *PyvtkParametricFunction_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkParametricFunction_Type, PyvtkParametricFunction_Methods,
    "vtkParametricFunction",
 nullptr);

  PyTypeObject *pytype = &PyvtkParametricFunction_Type;

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

void PyVTKAddFile_vtkParametricFunction(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParametricFunction_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParametricFunction", o) != 0)
  {
    Py_DECREF(o);
  }

}

