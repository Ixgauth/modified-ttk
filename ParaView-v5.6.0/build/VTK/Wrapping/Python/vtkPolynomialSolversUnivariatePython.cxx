// python wrapper for vtkPolynomialSolversUnivariate
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
#include "vtkPolynomialSolversUnivariate.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolynomialSolversUnivariate(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPolynomialSolversUnivariate_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPolynomialSolversUnivariate_Doc =
  "vtkPolynomialSolversUnivariate - polynomial solvers\n\n"
  "Superclass: vtkObject\n\n"
  "vtkPolynomialSolversUnivariate provides solvers for univariate\n"
  "polynomial equations with real coefficients. The Tartaglia-Cardan and\n"
  "Ferrari solvers work on polynomials of fixed degree 3 and 4,\n"
  "respectively. The Lin-Bairstow and Sturm solvers work on polynomials\n"
  "of arbitrary degree. The Sturm solver is the most robust solver but\n"
  "only reports roots within an interval and does not report\n"
  "multiplicities. The Lin-Bairstow solver reports multiplicities.\n\n"
  "For difficult polynomials, you may wish to use FilterRoots to\n"
  "eliminate some of the roots reported by the Sturm solver. FilterRoots\n"
  "evaluates the derivatives near each root to eliminate cases where a\n"
  "local minimum or maximum is close to zero.\n\n"
  "@par Thanks: Thanks to Philippe Pebay, Korben Rusek, David Thompson,\n"
  "and Maurice Rojas for implementing these solvers.\n\n";


static PyObject *
PyvtkPolynomialSolversUnivariate_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolynomialSolversUnivariate::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolynomialSolversUnivariate_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolynomialSolversUnivariate *op = static_cast<vtkPolynomialSolversUnivariate *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolynomialSolversUnivariate::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolynomialSolversUnivariate_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolynomialSolversUnivariate *tempr = vtkPolynomialSolversUnivariate::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolynomialSolversUnivariate_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolynomialSolversUnivariate *op = static_cast<vtkPolynomialSolversUnivariate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolynomialSolversUnivariate *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolynomialSolversUnivariate::NewInstance());

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
PyvtkPolynomialSolversUnivariate_HabichtBisectionSolve_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HabichtBisectionSolve");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  double temp4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    int tempr = vtkPolynomialSolversUnivariate::HabichtBisectionSolve(temp0, temp1, temp2, temp3, temp4);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolynomialSolversUnivariate_HabichtBisectionSolve_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HabichtBisectionSolve");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  double temp4;
  int temp5;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    int tempr = vtkPolynomialSolversUnivariate::HabichtBisectionSolve(temp0, temp1, temp2, temp3, temp4, temp5);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolynomialSolversUnivariate_HabichtBisectionSolve_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HabichtBisectionSolve");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  double temp4;
  int temp5;
  bool temp6 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    int tempr = vtkPolynomialSolversUnivariate::HabichtBisectionSolve(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolynomialSolversUnivariate_HabichtBisectionSolve(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 5:
      return PyvtkPolynomialSolversUnivariate_HabichtBisectionSolve_s1(self, args);
    case 6:
      return PyvtkPolynomialSolversUnivariate_HabichtBisectionSolve_s2(self, args);
    case 7:
      return PyvtkPolynomialSolversUnivariate_HabichtBisectionSolve_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "HabichtBisectionSolve");
  return nullptr;
}



static PyObject *
PyvtkPolynomialSolversUnivariate_SturmBisectionSolve_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SturmBisectionSolve");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  double temp4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    int tempr = vtkPolynomialSolversUnivariate::SturmBisectionSolve(temp0, temp1, temp2, temp3, temp4);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolynomialSolversUnivariate_SturmBisectionSolve_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SturmBisectionSolve");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  double temp4;
  int temp5;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    int tempr = vtkPolynomialSolversUnivariate::SturmBisectionSolve(temp0, temp1, temp2, temp3, temp4, temp5);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolynomialSolversUnivariate_SturmBisectionSolve_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SturmBisectionSolve");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  double temp4;
  int temp5;
  bool temp6 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    int tempr = vtkPolynomialSolversUnivariate::SturmBisectionSolve(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolynomialSolversUnivariate_SturmBisectionSolve(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 5:
      return PyvtkPolynomialSolversUnivariate_SturmBisectionSolve_s1(self, args);
    case 6:
      return PyvtkPolynomialSolversUnivariate_SturmBisectionSolve_s2(self, args);
    case 7:
      return PyvtkPolynomialSolversUnivariate_SturmBisectionSolve_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SturmBisectionSolve");
  return nullptr;
}



static PyObject *
PyvtkPolynomialSolversUnivariate_FilterRoots(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FilterRoots");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3;
  double temp4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);

    int tempr = vtkPolynomialSolversUnivariate::FilterRoots(temp0, temp1, temp2, temp3, temp4);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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
PyvtkPolynomialSolversUnivariate_LinBairstowSolve(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LinBairstowSolve");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  double temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);

    int tempr = vtkPolynomialSolversUnivariate::LinBairstowSolve(temp0, temp1, temp2, temp3);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolynomialSolversUnivariate_FerrariSolve(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FerrariSolve");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  double temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    int tempr = vtkPolynomialSolversUnivariate::FerrariSolve(temp0, temp1, temp2, temp3);

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
PyvtkPolynomialSolversUnivariate_TartagliaCardanSolve(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TartagliaCardanSolve");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  double temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    int tempr = vtkPolynomialSolversUnivariate::TartagliaCardanSolve(temp0, temp1, temp2, temp3);

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
PyvtkPolynomialSolversUnivariate_SolveCubic_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SolveCubic");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    double *tempr = vtkPolynomialSolversUnivariate::SolveCubic(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolynomialSolversUnivariate_SolveCubic_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SolveCubic");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  size_t size6 = ap.GetArgSize(6);
  vtkPythonArgs::Array<double> store6(2*size6);
  double *temp6 = store6.Data();
  double *save6 = (size6 == 0 ? nullptr : temp6 + size6);
  size_t size7 = ap.GetArgSize(7);
  vtkPythonArgs::Array<int> store7(2*size7);
  int *temp7 = store7.Data();
  int *save7 = (size7 == 0 ? nullptr : temp7 + size7);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetArray(temp7, size7))
  {
    ap.Save(temp4, save4, size4);
    ap.Save(temp5, save5, size5);
    ap.Save(temp6, save6, size6);
    ap.Save(temp7, save7, size7);

    int tempr = vtkPolynomialSolversUnivariate::SolveCubic(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (ap.HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (ap.HasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(7, temp7, size7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolynomialSolversUnivariate_SolveCubic(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 4:
      return PyvtkPolynomialSolversUnivariate_SolveCubic_s1(self, args);
    case 8:
      return PyvtkPolynomialSolversUnivariate_SolveCubic_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SolveCubic");
  return nullptr;
}



static PyObject *
PyvtkPolynomialSolversUnivariate_SolveQuadratic_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SolveQuadratic");

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double *tempr = vtkPolynomialSolversUnivariate::SolveQuadratic(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolynomialSolversUnivariate_SolveQuadratic_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SolveQuadratic");

  double temp0;
  double temp1;
  double temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<int> store5(2*size5);
  int *temp5 = store5.Data();
  int *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);
    ap.Save(temp5, save5, size5);

    int tempr = vtkPolynomialSolversUnivariate::SolveQuadratic(temp0, temp1, temp2, temp3, temp4, temp5);

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolynomialSolversUnivariate_SolveQuadratic_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SolveQuadratic");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    int tempr = vtkPolynomialSolversUnivariate::SolveQuadratic(temp0, temp1, temp2);

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

static PyMethodDef PyvtkPolynomialSolversUnivariate_SolveQuadratic_Methods[] = {
  {nullptr, PyvtkPolynomialSolversUnivariate_SolveQuadratic_s1, METH_VARARGS | METH_STATIC,
   "ddd"},
  {nullptr, PyvtkPolynomialSolversUnivariate_SolveQuadratic_s3, METH_VARARGS | METH_STATIC,
   "PPP *d *d *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPolynomialSolversUnivariate_SolveQuadratic(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPolynomialSolversUnivariate_SolveQuadratic_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 6:
      return PyvtkPolynomialSolversUnivariate_SolveQuadratic_s2(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SolveQuadratic");
  return nullptr;
}



static PyObject *
PyvtkPolynomialSolversUnivariate_SolveLinear_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SolveLinear");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double *tempr = vtkPolynomialSolversUnivariate::SolveLinear(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolynomialSolversUnivariate_SolveLinear_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SolveLinear");

  double temp0;
  double temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(2*size3);
  int *temp3 = store3.Data();
  int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    int tempr = vtkPolynomialSolversUnivariate::SolveLinear(temp0, temp1, temp2, temp3);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolynomialSolversUnivariate_SolveLinear(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkPolynomialSolversUnivariate_SolveLinear_s1(self, args);
    case 4:
      return PyvtkPolynomialSolversUnivariate_SolveLinear_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SolveLinear");
  return nullptr;
}



static PyObject *
PyvtkPolynomialSolversUnivariate_SetDivisionTolerance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDivisionTolerance");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPolynomialSolversUnivariate::SetDivisionTolerance(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolynomialSolversUnivariate_GetDivisionTolerance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDivisionTolerance");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    double tempr = vtkPolynomialSolversUnivariate::GetDivisionTolerance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolynomialSolversUnivariate_Methods[] = {
  {"IsTypeOf", PyvtkPolynomialSolversUnivariate_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolynomialSolversUnivariate_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolynomialSolversUnivariate_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPolynomialSolversUnivariate\nC++: static vtkPolynomialSolversUnivariate *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolynomialSolversUnivariate_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPolynomialSolversUnivariate\nC++: vtkPolynomialSolversUnivariate *NewInstance()\n\n"},
  {"HabichtBisectionSolve", PyvtkPolynomialSolversUnivariate_HabichtBisectionSolve, METH_VARARGS,
   "V.HabichtBisectionSolve([float, ...], int, [float, ...], [float,\n    ...], float) -> int\nC++: static int HabichtBisectionSolve(double *P, int d, double *a,\n     double *upperBnds, double tol)\nV.HabichtBisectionSolve([float, ...], int, [float, ...], [float,\n    ...], float, int) -> int\nC++: static int HabichtBisectionSolve(double *P, int d, double *a,\n     double *upperBnds, double tol, int intervalType)\nV.HabichtBisectionSolve([float, ...], int, [float, ...], [float,\n    ...], float, int, bool) -> int\nC++: static int HabichtBisectionSolve(double *P, int d, double *a,\n     double *upperBnds, double tol, int intervalType,\n    bool divideGCD)\n\nFinds all REAL roots (within tolerance tol) of the d -th degree\npolynomial\\[ P[0] X^d + ... + P[d-1] X + P[d]\\] in ] a[0] ; a[1]]\nusing the Habicht sequence (polynomial coefficients are REAL) and\nreturns the count nr. All roots are bracketed in the\n\nr first ] upperBnds[i] - tol ; upperBnds[i]] intervals. Returns\n-1 if anything went wrong (such as: polynomial does not have\ndegree d, the interval provided by the other is absurd, etc.).\n\n* intervalType specifies the search interval as follows:\n* 0 = 00 = ]a,b[\n* 1 = 10 = [a,b[\n* 2 = 01 = ]a,b]\n* 3 = 11 = [a,b]\n* This defaults to 0.\n\n* The last non-zero item in the Habicht sequence is the gcd of P\n  and P'. The\n* parameter divideGCD specifies whether the program should\n  attempt to divide\n* by the gcd and run again. It works better with polynomials\n  known to have\n* high multiplicities. When divideGCD != 0 then it attempts to\n  divide by the\n* GCD, if applicable. This defaults to 0.\n\n* Compared to the Sturm solver the Habicht solver is slower,\n* although both are O(d^2). The Habicht solver has the added\n  benefit\n* that it has a built in mechanism to keep the leading\n  coefficients of the\n* result from polynomial division bounded above and below in\n  absolute value.\n* This will tend to keep the coefficients of the polynomials in\n  the sequence\n* from zeroi ...\n [Truncated]\n"},
  {"SturmBisectionSolve", PyvtkPolynomialSolversUnivariate_SturmBisectionSolve, METH_VARARGS,
   "V.SturmBisectionSolve([float, ...], int, [float, ...], [float,\n    ...], float) -> int\nC++: static int SturmBisectionSolve(double *P, int d, double *a,\n    double *upperBnds, double tol)\nV.SturmBisectionSolve([float, ...], int, [float, ...], [float,\n    ...], float, int) -> int\nC++: static int SturmBisectionSolve(double *P, int d, double *a,\n    double *upperBnds, double tol, int intervalType)\nV.SturmBisectionSolve([float, ...], int, [float, ...], [float,\n    ...], float, int, bool) -> int\nC++: static int SturmBisectionSolve(double *P, int d, double *a,\n    double *upperBnds, double tol, int intervalType,\n    bool divideGCD)\n\nFinds all REAL roots (within tolerance tol) of the d -th degree\npolynomial P[0] X^d + ... + P[d-1] X + P[d] in ] a[0] ; a[1]]\nusing Sturm's theorem ( polynomial coefficients are REAL ) and\nreturns the count nr. All roots are bracketed in the\n\nr first ] upperBnds[i] - tol ; upperBnds[i]] intervals. Returns\n-1 if anything went wrong (such as: polynomial does not have\ndegree d, the interval provided by the other is absurd, etc.).\n\n* intervalType specifies the search interval as follows:\n* 0 = 00 = ]a,b[\n* 1 = 10 = [a,b[\n* 2 = 01 = ]a,b]\n* 3 = 11 = [a,b]\n* This defaults to 0.\n\n* The last non-zero item in the Sturm sequence is the gcd of P\n  and P'. The\n* parameter divideGCD specifies whether the program should\n  attempt to divide\n* by the gcd and run again. It works better with polynomials\n  known to have\n* high multiplicities. When divideGCD != 0 then it attempts to\n  divide by the\n* GCD, if applicable. This defaults to 0.\n\n* Constructing the Sturm sequence is O(d^2) in both time and\n  space.\n\n* Warning: it is the user's responsibility to make sure the\n  upperBnds\n* array is large enough to contain the maximal number of expected\nroots.\n* Note that nr is smaller or equal to the actual number of roots\n  in\n* ] a[0] ; a[1]] since roots within \\tol are lumped in the same\n  bracket.\n* array is large enough to contain the ma ...\n [Truncated]\n"},
  {"FilterRoots", PyvtkPolynomialSolversUnivariate_FilterRoots, METH_VARARGS,
   "V.FilterRoots([float, ...], int, [float, ...], int, float) -> int\nC++: static int FilterRoots(double *P, int d, double *upperBnds,\n    int rootcount, double diameter)\n\nThis uses the derivative sequence to filter possible roots of a\npolynomial. First it sorts the roots and removes any duplicates.\nIf the number of sign changes of the derivative sequence at a\nroot at upperBnds[i] == that at upperBnds[i]  - diameter then the\ni^th value is removed from upperBnds. It returns the new number\nof roots.\n"},
  {"LinBairstowSolve", PyvtkPolynomialSolversUnivariate_LinBairstowSolve, METH_VARARGS,
   "V.LinBairstowSolve([float, ...], int, [float, ...], float) -> int\nC++: static int LinBairstowSolve(double *c, int d, double *r,\n    double &tolerance)\n\nSeeks all REAL roots of the d -th degree polynomial c[0] X^d +\n... + c[d-1] X + c[d] = 0 equation Lin-Bairstow's method (\npolynomial coefficients are REAL ) and stores the nr roots found\n( multiple roots are multiply stored ) in r.tolerance is the\nuser-defined solver tolerance; this variable may be relaxed by\nthe iterative solver if needed. Returns nr. Warning: it is the\nuser's responsibility to make sure the r array is large enough to\ncontain the maximal number of expected roots.\n"},
  {"FerrariSolve", PyvtkPolynomialSolversUnivariate_FerrariSolve, METH_VARARGS,
   "V.FerrariSolve([float, ...], [float, ...], [int, ...], float)\n    -> int\nC++: static int FerrariSolve(double *c, double *r, int *m,\n    double tol)\n\nAlgebraically extracts REAL roots of the quartic polynomial with\nREAL coefficients X^4 + c[0] X^3 + c[1] X^2 + c[2] X + c[3] and\nstores them (when they exist) and their respective multiplicities\nin the r and m arrays, based on Ferrari's method. Some numerical\nnoise can be filtered by the use of a tolerance tol instead of\nequality with 0 (one can use, e.g., VTK_DBL_EPSILON). Returns the\nnumber of roots. Warning: it is the user's responsibility to pass\na non-negative tol.\n"},
  {"TartagliaCardanSolve", PyvtkPolynomialSolversUnivariate_TartagliaCardanSolve, METH_VARARGS,
   "V.TartagliaCardanSolve([float, ...], [float, ...], [int, ...],\n    float) -> int\nC++: static int TartagliaCardanSolve(double *c, double *r, int *m,\n     double tol)\n\nAlgebraically extracts REAL roots of the cubic polynomial with\nREAL coefficients X^3 + c[0] X^2 + c[1] X + c[2] and stores them\n(when they exist) and their respective multiplicities in the r\nand m arrays. Some numerical noise can be filtered by the use of\na tolerance tol instead of equality with 0 (one can use, e.g.,\nVTK_DBL_EPSILON). The main differences with SolveCubic are that\n(1) the polynomial must have unit leading coefficient, (2)\ncomplex roots are discarded upfront, (3) non-simple roots are\nstored only once, along with their respective multiplicities, and\n(4) some numerical noise is filtered by the use of relative\ntolerance instead of equality with 0. Returns the number of\nroots. In memoriam Niccolo Tartaglia (1500 - 1559), unfairly\nforgotten.\n"},
  {"SolveCubic", PyvtkPolynomialSolversUnivariate_SolveCubic, METH_VARARGS,
   "V.SolveCubic(float, float, float, float) -> (float, ...)\nC++: static double *SolveCubic(double c0, double c1, double c2,\n    double c3)\nV.SolveCubic(float, float, float, float, [float, ...], [float,\n    ...], [float, ...], [int, ...]) -> int\nC++: static int SolveCubic(double c0, double c1, double c2,\n    double c3, double *r1, double *r2, double *r3, int *num_roots)\n\nSolves a cubic equation c0*t^3 + c1*t^2 + c2*t + c3 = 0 when c0,\nc1, c2, and c3 are REAL.  Solution is motivated by Numerical\nRecipes In C 2nd Ed.  Return array contains number of (real)\nroots (counting multiple roots as one) followed by roots\nthemselves. The value in roots[4] is a integer giving further\ninformation about the roots (see return codes for int\nSolveCubic() ).\n"},
  {"SolveQuadratic", PyvtkPolynomialSolversUnivariate_SolveQuadratic, METH_VARARGS,
   "V.SolveQuadratic(float, float, float) -> (float, ...)\nC++: static double *SolveQuadratic(double c0, double c1,\n    double c2)\nV.SolveQuadratic(float, float, float, [float, ...], [float, ...],\n    [int, ...]) -> int\nC++: static int SolveQuadratic(double c0, double c1, double c2,\n    double *r1, double *r2, int *num_roots)\nV.SolveQuadratic([float, ...], [float, ...], [int, ...]) -> int\nC++: static int SolveQuadratic(double *c, double *r, int *m)\n\nSolves a quadratic equation c0*t^2 + c1*t + c2 = 0 when c0, c1,\nand c2 are REAL.  Solution is motivated by Numerical Recipes In C\n2nd Ed. Return array contains number of (real) roots (counting\nmultiple roots as one) followed by roots themselves. Note that\nroots[3] contains a return code further describing solution - see\ndocumentation for SolveCubic() for meaning of return codes.\n"},
  {"SolveLinear", PyvtkPolynomialSolversUnivariate_SolveLinear, METH_VARARGS,
   "V.SolveLinear(float, float) -> (float, ...)\nC++: static double *SolveLinear(double c0, double c1)\nV.SolveLinear(float, float, [float, ...], [int, ...]) -> int\nC++: static int SolveLinear(double c0, double c1, double *r1,\n    int *num_roots)\n\nSolves a linear equation c0*t  + c1 = 0 when c0 and c1 are REAL.\nSolution is motivated by Numerical Recipes In C 2nd Ed. Return\narray contains number of roots followed by roots themselves.\n"},
  {"SetDivisionTolerance", PyvtkPolynomialSolversUnivariate_SetDivisionTolerance, METH_VARARGS,
   "V.SetDivisionTolerance(float)\nC++: static void SetDivisionTolerance(double tol)\n\nSet/get the tolerance used when performing polynomial Euclidean\ndivision to find polynomial roots. This tolerance is used to\ndecide whether the coefficient(s) of a polynomial remainder are\nclose enough to zero to be neglected.\n"},
  {"GetDivisionTolerance", PyvtkPolynomialSolversUnivariate_GetDivisionTolerance, METH_VARARGS,
   "V.GetDivisionTolerance() -> float\nC++: static double GetDivisionTolerance()\n\nSet/get the tolerance used when performing polynomial Euclidean\ndivision to find polynomial roots. This tolerance is used to\ndecide whether the coefficient(s) of a polynomial remainder are\nclose enough to zero to be neglected.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPolynomialSolversUnivariate_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkPolynomialSolversUnivariate", // tp_name
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
  PyvtkPolynomialSolversUnivariate_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolynomialSolversUnivariate_StaticNew()
{
  return vtkPolynomialSolversUnivariate::New();
}

PyObject *PyvtkPolynomialSolversUnivariate_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPolynomialSolversUnivariate_Type, PyvtkPolynomialSolversUnivariate_Methods,
    "vtkPolynomialSolversUnivariate",
 &PyvtkPolynomialSolversUnivariate_StaticNew);

  PyTypeObject *pytype = &PyvtkPolynomialSolversUnivariate_Type;

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

void PyVTKAddFile_vtkPolynomialSolversUnivariate(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolynomialSolversUnivariate_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolynomialSolversUnivariate", o) != 0)
  {
    Py_DECREF(o);
  }

}

