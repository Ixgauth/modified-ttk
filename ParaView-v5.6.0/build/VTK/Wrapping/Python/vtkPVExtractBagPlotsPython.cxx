// python wrapper for vtkPVExtractBagPlots
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
#include "vtkPVExtractBagPlots.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVExtractBagPlots(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVExtractBagPlots_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkPVExtractBagPlots_Doc =
  "vtkPVExtractBagPlots - This filter generates data needed to display\nbag and functional bag plots.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
;


static PyObject *
PyvtkPVExtractBagPlots_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVExtractBagPlots::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVExtractBagPlots::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVExtractBagPlots *tempr = vtkPVExtractBagPlots::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVExtractBagPlots *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVExtractBagPlots::NewInstance());

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
PyvtkPVExtractBagPlots_EnableAttributeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAttributeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->EnableAttributeArray(temp0);
    }
    else
    {
      op->vtkPVExtractBagPlots::EnableAttributeArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_ClearAttributeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAttributeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAttributeArrays();
    }
    else
    {
      op->vtkPVExtractBagPlots::ClearAttributeArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_GetTransposeTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransposeTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTransposeTable() :
      op->vtkPVExtractBagPlots::GetTransposeTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_SetTransposeTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransposeTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransposeTable(temp0);
    }
    else
    {
      op->vtkPVExtractBagPlots::SetTransposeTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_TransposeTableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransposeTableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TransposeTableOn();
    }
    else
    {
      op->vtkPVExtractBagPlots::TransposeTableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_TransposeTableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransposeTableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TransposeTableOff();
    }
    else
    {
      op->vtkPVExtractBagPlots::TransposeTableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_GetRobustPCA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRobustPCA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRobustPCA() :
      op->vtkPVExtractBagPlots::GetRobustPCA());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_SetRobustPCA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRobustPCA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRobustPCA(temp0);
    }
    else
    {
      op->vtkPVExtractBagPlots::SetRobustPCA(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_GetKernelWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernelWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetKernelWidth() :
      op->vtkPVExtractBagPlots::GetKernelWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_SetKernelWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernelWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKernelWidth(temp0);
    }
    else
    {
      op->vtkPVExtractBagPlots::SetKernelWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_GetUseSilvermanRule(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseSilvermanRule");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseSilvermanRule() :
      op->vtkPVExtractBagPlots::GetUseSilvermanRule());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_SetUseSilvermanRule(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseSilvermanRule");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseSilvermanRule(temp0);
    }
    else
    {
      op->vtkPVExtractBagPlots::SetUseSilvermanRule(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_UseSilvermanRuleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSilvermanRuleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseSilvermanRuleOn();
    }
    else
    {
      op->vtkPVExtractBagPlots::UseSilvermanRuleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_UseSilvermanRuleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSilvermanRuleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseSilvermanRuleOff();
    }
    else
    {
      op->vtkPVExtractBagPlots::UseSilvermanRuleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_GetGridSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGridSize() :
      op->vtkPVExtractBagPlots::GetGridSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_SetGridSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridSize(temp0);
    }
    else
    {
      op->vtkPVExtractBagPlots::SetGridSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_GetUserQuantile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserQuantile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUserQuantile() :
      op->vtkPVExtractBagPlots::GetUserQuantile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_SetUserQuantile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserQuantile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUserQuantile(temp0);
    }
    else
    {
      op->vtkPVExtractBagPlots::SetUserQuantile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_GetUserQuantileMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserQuantileMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUserQuantileMinValue() :
      op->vtkPVExtractBagPlots::GetUserQuantileMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_GetUserQuantileMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserQuantileMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUserQuantileMaxValue() :
      op->vtkPVExtractBagPlots::GetUserQuantileMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVExtractBagPlots_Methods[] = {
  {"IsTypeOf", PyvtkPVExtractBagPlots_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVExtractBagPlots_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVExtractBagPlots_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVExtractBagPlots\nC++: static vtkPVExtractBagPlots *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVExtractBagPlots_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVExtractBagPlots\nC++: vtkPVExtractBagPlots *NewInstance()\n\n"},
  {"EnableAttributeArray", PyvtkPVExtractBagPlots_EnableAttributeArray, METH_VARARGS,
   "V.EnableAttributeArray(string)\nC++: void EnableAttributeArray(const char *)\n\nInterface for preparing selection of arrays in ParaView.\n"},
  {"ClearAttributeArrays", PyvtkPVExtractBagPlots_ClearAttributeArrays, METH_VARARGS,
   "V.ClearAttributeArrays()\nC++: void ClearAttributeArrays()\n\nInterface for preparing selection of arrays in ParaView.\n"},
  {"GetTransposeTable", PyvtkPVExtractBagPlots_GetTransposeTable, METH_VARARGS,
   "V.GetTransposeTable() -> bool\nC++: virtual bool GetTransposeTable()\n\nSet/get if the process must be done on the transposed of the\ninput table Default is TRUE.\n"},
  {"SetTransposeTable", PyvtkPVExtractBagPlots_SetTransposeTable, METH_VARARGS,
   "V.SetTransposeTable(bool)\nC++: virtual void SetTransposeTable(bool _arg)\n\nSet/get if the process must be done on the transposed of the\ninput table Default is TRUE.\n"},
  {"TransposeTableOn", PyvtkPVExtractBagPlots_TransposeTableOn, METH_VARARGS,
   "V.TransposeTableOn()\nC++: virtual void TransposeTableOn()\n\nSet/get if the process must be done on the transposed of the\ninput table Default is TRUE.\n"},
  {"TransposeTableOff", PyvtkPVExtractBagPlots_TransposeTableOff, METH_VARARGS,
   "V.TransposeTableOff()\nC++: virtual void TransposeTableOff()\n\nSet/get if the process must be done on the transposed of the\ninput table Default is TRUE.\n"},
  {"GetRobustPCA", PyvtkPVExtractBagPlots_GetRobustPCA, METH_VARARGS,
   "V.GetRobustPCA() -> bool\nC++: virtual bool GetRobustPCA()\n\nSet/get if the PCA must be done in robust mode. Default is FALSE.\n"},
  {"SetRobustPCA", PyvtkPVExtractBagPlots_SetRobustPCA, METH_VARARGS,
   "V.SetRobustPCA(bool)\nC++: virtual void SetRobustPCA(bool _arg)\n\nSet/get if the PCA must be done in robust mode. Default is FALSE.\n"},
  {"GetKernelWidth", PyvtkPVExtractBagPlots_GetKernelWidth, METH_VARARGS,
   "V.GetKernelWidth() -> float\nC++: virtual double GetKernelWidth()\n\nSet/get the kernel width for the HDR filter. Default is 1.0\n"},
  {"SetKernelWidth", PyvtkPVExtractBagPlots_SetKernelWidth, METH_VARARGS,
   "V.SetKernelWidth(float)\nC++: virtual void SetKernelWidth(double _arg)\n\nSet/get the kernel width for the HDR filter. Default is 1.0\n"},
  {"GetUseSilvermanRule", PyvtkPVExtractBagPlots_GetUseSilvermanRule, METH_VARARGS,
   "V.GetUseSilvermanRule() -> bool\nC++: virtual bool GetUseSilvermanRule()\n\nSet/get if the kernel width must be automatically computed using\nSilverman's rules (sigma*n^(-1/(d+4))) Default is FALSE.\n"},
  {"SetUseSilvermanRule", PyvtkPVExtractBagPlots_SetUseSilvermanRule, METH_VARARGS,
   "V.SetUseSilvermanRule(bool)\nC++: virtual void SetUseSilvermanRule(bool _arg)\n\nSet/get if the kernel width must be automatically computed using\nSilverman's rules (sigma*n^(-1/(d+4))) Default is FALSE.\n"},
  {"UseSilvermanRuleOn", PyvtkPVExtractBagPlots_UseSilvermanRuleOn, METH_VARARGS,
   "V.UseSilvermanRuleOn()\nC++: virtual void UseSilvermanRuleOn()\n\nSet/get if the kernel width must be automatically computed using\nSilverman's rules (sigma*n^(-1/(d+4))) Default is FALSE.\n"},
  {"UseSilvermanRuleOff", PyvtkPVExtractBagPlots_UseSilvermanRuleOff, METH_VARARGS,
   "V.UseSilvermanRuleOff()\nC++: virtual void UseSilvermanRuleOff()\n\nSet/get if the kernel width must be automatically computed using\nSilverman's rules (sigma*n^(-1/(d+4))) Default is FALSE.\n"},
  {"GetGridSize", PyvtkPVExtractBagPlots_GetGridSize, METH_VARARGS,
   "V.GetGridSize() -> int\nC++: virtual int GetGridSize()\n\nSet/get the size of the grid to compute the PCA on. Default is\n100.\n"},
  {"SetGridSize", PyvtkPVExtractBagPlots_SetGridSize, METH_VARARGS,
   "V.SetGridSize(int)\nC++: virtual void SetGridSize(int _arg)\n\nSet/get the size of the grid to compute the PCA on. Default is\n100.\n"},
  {"GetUserQuantile", PyvtkPVExtractBagPlots_GetUserQuantile, METH_VARARGS,
   "V.GetUserQuantile() -> int\nC++: virtual int GetUserQuantile()\n\nSet/get the user quantile (in percent). Beyond this threshold,\ninput curves are considered as outliers. Default is 95.\n"},
  {"SetUserQuantile", PyvtkPVExtractBagPlots_SetUserQuantile, METH_VARARGS,
   "V.SetUserQuantile(int)\nC++: virtual void SetUserQuantile(int _arg)\n\nSet/get the user quantile (in percent). Beyond this threshold,\ninput curves are considered as outliers. Default is 95.\n"},
  {"GetUserQuantileMinValue", PyvtkPVExtractBagPlots_GetUserQuantileMinValue, METH_VARARGS,
   "V.GetUserQuantileMinValue() -> int\nC++: virtual int GetUserQuantileMinValue()\n\nSet/get the user quantile (in percent). Beyond this threshold,\ninput curves are considered as outliers. Default is 95.\n"},
  {"GetUserQuantileMaxValue", PyvtkPVExtractBagPlots_GetUserQuantileMaxValue, METH_VARARGS,
   "V.GetUserQuantileMaxValue() -> int\nC++: virtual int GetUserQuantileMaxValue()\n\nSet/get the user quantile (in percent). Beyond this threshold,\ninput curves are considered as outliers. Default is 95.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVExtractBagPlots_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPVExtractBagPlots", // tp_name
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
  PyvtkPVExtractBagPlots_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVExtractBagPlots_StaticNew()
{
  return vtkPVExtractBagPlots::New();
}

PyObject *PyvtkPVExtractBagPlots_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVExtractBagPlots_Type, PyvtkPVExtractBagPlots_Methods,
    "vtkPVExtractBagPlots",
 &PyvtkPVExtractBagPlots_StaticNew);

  PyTypeObject *pytype = &PyvtkPVExtractBagPlots_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiBlockDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVExtractBagPlots(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVExtractBagPlots_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVExtractBagPlots", o) != 0)
  {
    Py_DECREF(o);
  }

}

