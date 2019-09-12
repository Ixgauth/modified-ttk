// python wrapper for vtkDescriptiveStatistics
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
#include "vtkDescriptiveStatistics.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDescriptiveStatistics(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDescriptiveStatistics_ClassNew(); }

#ifndef DECLARED_PyvtkStatisticsAlgorithm_ClassNew
extern "C" { PyObject *PyvtkStatisticsAlgorithm_ClassNew(); }
#define DECLARED_PyvtkStatisticsAlgorithm_ClassNew
#endif

static const char *PyvtkDescriptiveStatistics_Doc =
  "vtkDescriptiveStatistics - A class for univariate descriptive\nstatistics\n\n"
  "Superclass: vtkStatisticsAlgorithm\n\n"
  "Given a selection of columns of interest in an input data table, this\n"
  "class provides the following functionalities, depending on the chosen\n"
  "execution options:\n"
  "* Learn: calculate extremal values, sample mean, and M2, M3, and M4\n"
  "  aggregates (cf. P. Pebay, Formulas for robust, one-pass parallel\n"
  "  computation of covariances and Arbitrary-Order Statistical Moments,\n"
  "Sandia Report SAND2008-6212, Sep 2008,\n"
  "  http://infoserve.sandia.gov/sand_doc/2008/086212.pdf for details)\n"
  "* Derive: calculate unbiased variance estimator, standard deviation\n"
  "  estimator, two skewness estimators, and two kurtosis excess\n"
  "  estimators.\n"
  "* Assess: given an input data set, a reference value and a\n"
  "  non-negative deviation, mark each datum with corresponding relative\n"
  "deviation (1-dimensional Mahlanobis distance). If the deviation is\n"
  "  zero, then mark each datum which are equal to the reference value\n"
  "  with 0, and all others with 1. By default, the reference value and\n"
  "  the deviation are, respectively, the mean and the standard\n"
  "  deviation of the input model.\n"
  "* Test: calculate Jarque-Bera statistic and, if VTK to R interface is\n"
  "available, retrieve corresponding p-value for normality testing.\n\n"
  "@par Thanks: Thanks to Philippe Pebay and David Thompson from Sandia\n"
  "National Laboratories for implementing this class. Updated by\n"
  "Philippe Pebay, Kitware SAS 2012\n\n";


static PyObject *
PyvtkDescriptiveStatistics_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDescriptiveStatistics::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDescriptiveStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDescriptiveStatistics *tempr = vtkDescriptiveStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDescriptiveStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDescriptiveStatistics::NewInstance());

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
PyvtkDescriptiveStatistics_SetUnbiasedVariance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnbiasedVariance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnbiasedVariance(temp0);
    }
    else
    {
      op->vtkDescriptiveStatistics::SetUnbiasedVariance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_GetUnbiasedVariance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnbiasedVariance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUnbiasedVariance() :
      op->vtkDescriptiveStatistics::GetUnbiasedVariance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_UnbiasedVarianceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnbiasedVarianceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnbiasedVarianceOn();
    }
    else
    {
      op->vtkDescriptiveStatistics::UnbiasedVarianceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_UnbiasedVarianceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnbiasedVarianceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnbiasedVarianceOff();
    }
    else
    {
      op->vtkDescriptiveStatistics::UnbiasedVarianceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_SetG1Skewness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetG1Skewness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetG1Skewness(temp0);
    }
    else
    {
      op->vtkDescriptiveStatistics::SetG1Skewness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_GetG1Skewness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetG1Skewness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetG1Skewness() :
      op->vtkDescriptiveStatistics::GetG1Skewness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_G1SkewnessOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "G1SkewnessOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->G1SkewnessOn();
    }
    else
    {
      op->vtkDescriptiveStatistics::G1SkewnessOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_G1SkewnessOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "G1SkewnessOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->G1SkewnessOff();
    }
    else
    {
      op->vtkDescriptiveStatistics::G1SkewnessOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_SetG2Kurtosis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetG2Kurtosis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetG2Kurtosis(temp0);
    }
    else
    {
      op->vtkDescriptiveStatistics::SetG2Kurtosis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_GetG2Kurtosis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetG2Kurtosis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetG2Kurtosis() :
      op->vtkDescriptiveStatistics::GetG2Kurtosis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_G2KurtosisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "G2KurtosisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->G2KurtosisOn();
    }
    else
    {
      op->vtkDescriptiveStatistics::G2KurtosisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_G2KurtosisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "G2KurtosisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->G2KurtosisOff();
    }
    else
    {
      op->vtkDescriptiveStatistics::G2KurtosisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_SetSignedDeviations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSignedDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSignedDeviations(temp0);
    }
    else
    {
      op->vtkDescriptiveStatistics::SetSignedDeviations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_GetSignedDeviations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSignedDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSignedDeviations() :
      op->vtkDescriptiveStatistics::GetSignedDeviations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_SignedDeviationsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SignedDeviationsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SignedDeviationsOn();
    }
    else
    {
      op->vtkDescriptiveStatistics::SignedDeviationsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_SignedDeviationsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SignedDeviationsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SignedDeviationsOff();
    }
    else
    {
      op->vtkDescriptiveStatistics::SignedDeviationsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  vtkDataObjectCollection *temp0 = nullptr;
  vtkMultiBlockDataSet *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObjectCollection") &&
      ap.GetVTKObject(temp1, "vtkMultiBlockDataSet"))
  {
    if (ap.IsBound())
    {
      op->Aggregate(temp0, temp1);
    }
    else
    {
      op->vtkDescriptiveStatistics::Aggregate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDescriptiveStatistics_Methods[] = {
  {"IsTypeOf", PyvtkDescriptiveStatistics_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDescriptiveStatistics_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDescriptiveStatistics_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDescriptiveStatistics\nC++: static vtkDescriptiveStatistics *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDescriptiveStatistics_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDescriptiveStatistics\nC++: vtkDescriptiveStatistics *NewInstance()\n\n"},
  {"SetUnbiasedVariance", PyvtkDescriptiveStatistics_SetUnbiasedVariance, METH_VARARGS,
   "V.SetUnbiasedVariance(int)\nC++: virtual void SetUnbiasedVariance(vtkTypeBool _arg)\n\nSet/get whether the unbiased estimator for the variance should be\nused, or if the population variance will be calculated. The\ndefault is that the unbiased estimator will be used.\n"},
  {"GetUnbiasedVariance", PyvtkDescriptiveStatistics_GetUnbiasedVariance, METH_VARARGS,
   "V.GetUnbiasedVariance() -> int\nC++: virtual vtkTypeBool GetUnbiasedVariance()\n\nSet/get whether the unbiased estimator for the variance should be\nused, or if the population variance will be calculated. The\ndefault is that the unbiased estimator will be used.\n"},
  {"UnbiasedVarianceOn", PyvtkDescriptiveStatistics_UnbiasedVarianceOn, METH_VARARGS,
   "V.UnbiasedVarianceOn()\nC++: virtual void UnbiasedVarianceOn()\n\nSet/get whether the unbiased estimator for the variance should be\nused, or if the population variance will be calculated. The\ndefault is that the unbiased estimator will be used.\n"},
  {"UnbiasedVarianceOff", PyvtkDescriptiveStatistics_UnbiasedVarianceOff, METH_VARARGS,
   "V.UnbiasedVarianceOff()\nC++: virtual void UnbiasedVarianceOff()\n\nSet/get whether the unbiased estimator for the variance should be\nused, or if the population variance will be calculated. The\ndefault is that the unbiased estimator will be used.\n"},
  {"SetG1Skewness", PyvtkDescriptiveStatistics_SetG1Skewness, METH_VARARGS,
   "V.SetG1Skewness(int)\nC++: virtual void SetG1Skewness(vtkTypeBool _arg)\n\nSet/get whether the G1 estimator for the skewness should be used,\nor if the g1 skewness will be calculated. The default is that the\ng1 skewness estimator will be used.\n"},
  {"GetG1Skewness", PyvtkDescriptiveStatistics_GetG1Skewness, METH_VARARGS,
   "V.GetG1Skewness() -> int\nC++: virtual vtkTypeBool GetG1Skewness()\n\nSet/get whether the G1 estimator for the skewness should be used,\nor if the g1 skewness will be calculated. The default is that the\ng1 skewness estimator will be used.\n"},
  {"G1SkewnessOn", PyvtkDescriptiveStatistics_G1SkewnessOn, METH_VARARGS,
   "V.G1SkewnessOn()\nC++: virtual void G1SkewnessOn()\n\nSet/get whether the G1 estimator for the skewness should be used,\nor if the g1 skewness will be calculated. The default is that the\ng1 skewness estimator will be used.\n"},
  {"G1SkewnessOff", PyvtkDescriptiveStatistics_G1SkewnessOff, METH_VARARGS,
   "V.G1SkewnessOff()\nC++: virtual void G1SkewnessOff()\n\nSet/get whether the G1 estimator for the skewness should be used,\nor if the g1 skewness will be calculated. The default is that the\ng1 skewness estimator will be used.\n"},
  {"SetG2Kurtosis", PyvtkDescriptiveStatistics_SetG2Kurtosis, METH_VARARGS,
   "V.SetG2Kurtosis(int)\nC++: virtual void SetG2Kurtosis(vtkTypeBool _arg)\n\nSet/get whether the G2 estimator for the kurtosis should be used,\nor if the g2 kurtosis will be calculated. The default is that the\ng2 kurtosis estimator will be used.\n"},
  {"GetG2Kurtosis", PyvtkDescriptiveStatistics_GetG2Kurtosis, METH_VARARGS,
   "V.GetG2Kurtosis() -> int\nC++: virtual vtkTypeBool GetG2Kurtosis()\n\nSet/get whether the G2 estimator for the kurtosis should be used,\nor if the g2 kurtosis will be calculated. The default is that the\ng2 kurtosis estimator will be used.\n"},
  {"G2KurtosisOn", PyvtkDescriptiveStatistics_G2KurtosisOn, METH_VARARGS,
   "V.G2KurtosisOn()\nC++: virtual void G2KurtosisOn()\n\nSet/get whether the G2 estimator for the kurtosis should be used,\nor if the g2 kurtosis will be calculated. The default is that the\ng2 kurtosis estimator will be used.\n"},
  {"G2KurtosisOff", PyvtkDescriptiveStatistics_G2KurtosisOff, METH_VARARGS,
   "V.G2KurtosisOff()\nC++: virtual void G2KurtosisOff()\n\nSet/get whether the G2 estimator for the kurtosis should be used,\nor if the g2 kurtosis will be calculated. The default is that the\ng2 kurtosis estimator will be used.\n"},
  {"SetSignedDeviations", PyvtkDescriptiveStatistics_SetSignedDeviations, METH_VARARGS,
   "V.SetSignedDeviations(int)\nC++: virtual void SetSignedDeviations(vtkTypeBool _arg)\n\nSet/get whether the deviations returned should be signed, or\nshould only have their magnitude reported. The default is that\nsigned deviations will be computed.\n"},
  {"GetSignedDeviations", PyvtkDescriptiveStatistics_GetSignedDeviations, METH_VARARGS,
   "V.GetSignedDeviations() -> int\nC++: virtual vtkTypeBool GetSignedDeviations()\n\nSet/get whether the deviations returned should be signed, or\nshould only have their magnitude reported. The default is that\nsigned deviations will be computed.\n"},
  {"SignedDeviationsOn", PyvtkDescriptiveStatistics_SignedDeviationsOn, METH_VARARGS,
   "V.SignedDeviationsOn()\nC++: virtual void SignedDeviationsOn()\n\nSet/get whether the deviations returned should be signed, or\nshould only have their magnitude reported. The default is that\nsigned deviations will be computed.\n"},
  {"SignedDeviationsOff", PyvtkDescriptiveStatistics_SignedDeviationsOff, METH_VARARGS,
   "V.SignedDeviationsOff()\nC++: virtual void SignedDeviationsOff()\n\nSet/get whether the deviations returned should be signed, or\nshould only have their magnitude reported. The default is that\nsigned deviations will be computed.\n"},
  {"Aggregate", PyvtkDescriptiveStatistics_Aggregate, METH_VARARGS,
   "V.Aggregate(vtkDataObjectCollection, vtkMultiBlockDataSet)\nC++: void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *) override;\n\nGiven a collection of models, calculate aggregate model\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDescriptiveStatistics_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersStatisticsPython.vtkDescriptiveStatistics", // tp_name
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
  PyvtkDescriptiveStatistics_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDescriptiveStatistics_StaticNew()
{
  return vtkDescriptiveStatistics::New();
}

PyObject *PyvtkDescriptiveStatistics_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDescriptiveStatistics_Type, PyvtkDescriptiveStatistics_Methods,
    "vtkDescriptiveStatistics",
 &PyvtkDescriptiveStatistics_StaticNew);

  PyTypeObject *pytype = &PyvtkDescriptiveStatistics_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkStatisticsAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDescriptiveStatistics(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDescriptiveStatistics_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDescriptiveStatistics", o) != 0)
  {
    Py_DECREF(o);
  }

}

