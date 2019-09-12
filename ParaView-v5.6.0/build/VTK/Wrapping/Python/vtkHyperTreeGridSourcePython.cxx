// python wrapper for vtkHyperTreeGridSource
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
#include "vtkHyperTreeGridSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkHyperTreeGridSource_ClassNew(); }

#ifndef DECLARED_PyvtkHyperTreeGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkHyperTreeGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkHyperTreeGridAlgorithm_ClassNew
#endif

static const char *PyvtkHyperTreeGridSource_Doc =
  "vtkHyperTreeGridSource - Create a synthetic grid of hypertrees.\n\n"
  "Superclass: vtkHyperTreeGridAlgorithm\n\n"
  "This class uses input parameters, most notably a string descriptor,\n"
  "to generate a vtkHyperTreeGrid instance representing the\n"
  "corresponding tree-based AMR grid. This descriptor uses the following\n"
  "conventions, e.g., to describe a 1-D ternary subdivision with 2 root\n"
  "cells L0    L1        L2 RR  | .R. ... | ... For this tree:\n"
  " HTG:       .\n"
  "          /   \\\n"
  " L0:     .     .\n"
  "        /|\\   /|\\\n"
  " L1:   c . c c c c\n"
  "        /|\\\n"
  " L2:   c c c The top level of the tree is not considered a grid level\n"
  "NB: For ease of legibility, white spaces are allowed and ignored.\n\n"
  "@par Thanks: This class was written by Philippe Pebay, Joachim\n"
  "Pouderoux, and Charles Law, Kitware 2013 This class was modified by\n"
  "Guenole Harel and Jacques-Bernard Lekien 2014 This class was modified\n"
  "by Philippe Pebay, 2016 This work was supported by Commissariat a\n"
  "l'Energie Atomique (CEA/DIF)\n\n";


static PyObject *
PyvtkHyperTreeGridSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridSource *tempr = vtkHyperTreeGridSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridSource::NewInstance());

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
PyvtkHyperTreeGridSource_GetMaximumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaximumLevel() :
      op->vtkHyperTreeGridSource::GetMaximumLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetMaximumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumLevel(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetMaximumLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridSource_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridSource_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkHyperTreeGridSource_SetOrigin_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridSource_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}



static PyObject *
PyvtkHyperTreeGridSource_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkHyperTreeGridSource::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetGridScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetGridScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetGridScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridSource_SetGridScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGridScale(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetGridScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridSource_SetGridScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkHyperTreeGridSource_SetGridScale_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridSource_SetGridScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridScale");
  return nullptr;
}



static PyObject *
PyvtkHyperTreeGridSource_GetGridScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetGridScale() :
      op->vtkHyperTreeGridSource::GetGridScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetGridSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetGridSize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetGridSize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridSource_SetGridSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  const size_t size0 = 3;
  unsigned int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGridSize(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetGridSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridSource_SetGridSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkHyperTreeGridSource_SetGridSize_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridSource_SetGridSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridSize");
  return nullptr;
}



static PyObject *
PyvtkHyperTreeGridSource_GetGridSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetGridSize() :
      op->vtkHyperTreeGridSource::GetGridSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetTransposedRootIndexing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransposedRootIndexing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransposedRootIndexing(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetTransposedRootIndexing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetTransposedRootIndexing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransposedRootIndexing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTransposedRootIndexing() :
      op->vtkHyperTreeGridSource::GetTransposedRootIndexing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetIndexingModeToKJI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexingModeToKJI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIndexingModeToKJI();
    }
    else
    {
      op->vtkHyperTreeGridSource::SetIndexingModeToKJI();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetIndexingModeToIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexingModeToIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIndexingModeToIJK();
    }
    else
    {
      op->vtkHyperTreeGridSource::SetIndexingModeToIJK();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDimension(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetDimensionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDimensionMinValue() :
      op->vtkHyperTreeGridSource::GetDimensionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetDimensionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDimensionMaxValue() :
      op->vtkHyperTreeGridSource::GetDimensionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkHyperTreeGridSource::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientation(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkHyperTreeGridSource::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetBranchFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBranchFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBranchFactor(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetBranchFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetBranchFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBranchFactorMinValue() :
      op->vtkHyperTreeGridSource::GetBranchFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetBranchFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBranchFactorMaxValue() :
      op->vtkHyperTreeGridSource::GetBranchFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetBranchFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBranchFactor() :
      op->vtkHyperTreeGridSource::GetBranchFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetUseDescriptor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDescriptor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDescriptor(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetUseDescriptor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetUseDescriptor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDescriptor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseDescriptor() :
      op->vtkHyperTreeGridSource::GetUseDescriptor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_UseDescriptorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDescriptorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDescriptorOn();
    }
    else
    {
      op->vtkHyperTreeGridSource::UseDescriptorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_UseDescriptorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDescriptorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDescriptorOff();
    }
    else
    {
      op->vtkHyperTreeGridSource::UseDescriptorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetUseMaterialMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseMaterialMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseMaterialMask(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetUseMaterialMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetUseMaterialMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseMaterialMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseMaterialMask() :
      op->vtkHyperTreeGridSource::GetUseMaterialMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_UseMaterialMaskOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMaterialMaskOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseMaterialMaskOn();
    }
    else
    {
      op->vtkHyperTreeGridSource::UseMaterialMaskOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_UseMaterialMaskOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMaterialMaskOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseMaterialMaskOff();
    }
    else
    {
      op->vtkHyperTreeGridSource::UseMaterialMaskOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetGenerateInterfaceFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateInterfaceFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateInterfaceFields(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetGenerateInterfaceFields(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetGenerateInterfaceFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateInterfaceFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateInterfaceFields() :
      op->vtkHyperTreeGridSource::GetGenerateInterfaceFields());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GenerateInterfaceFieldsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateInterfaceFieldsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateInterfaceFieldsOn();
    }
    else
    {
      op->vtkHyperTreeGridSource::GenerateInterfaceFieldsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GenerateInterfaceFieldsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateInterfaceFieldsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateInterfaceFieldsOff();
    }
    else
    {
      op->vtkHyperTreeGridSource::GenerateInterfaceFieldsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetDescriptor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDescriptor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDescriptor(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetDescriptor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetDescriptor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDescriptor() :
      op->vtkHyperTreeGridSource::GetDescriptor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetMaterialMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaterialMask(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetMaterialMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetMaterialMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMaterialMask() :
      op->vtkHyperTreeGridSource::GetMaterialMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetDescriptorBits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDescriptorBits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  vtkBitArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBitArray"))
  {
    if (ap.IsBound())
    {
      op->SetDescriptorBits(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetDescriptorBits(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetDescriptorBits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptorBits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBitArray *tempr = (ap.IsBound() ?
      op->GetDescriptorBits() :
      op->vtkHyperTreeGridSource::GetDescriptorBits());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetLevelZeroMaterialIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelZeroMaterialIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  vtkIdTypeArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->SetLevelZeroMaterialIndex(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetLevelZeroMaterialIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetMaterialMaskBits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialMaskBits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  vtkBitArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBitArray"))
  {
    if (ap.IsBound())
    {
      op->SetMaterialMaskBits(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetMaterialMaskBits(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetMaterialMaskBits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialMaskBits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBitArray *tempr = (ap.IsBound() ?
      op->GetMaterialMaskBits() :
      op->vtkHyperTreeGridSource::GetMaterialMaskBits());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetQuadric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  vtkQuadric *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkQuadric"))
  {
    if (ap.IsBound())
    {
      op->SetQuadric(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetQuadric(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetQuadric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuadric *tempr = (ap.IsBound() ?
      op->GetQuadric() :
      op->vtkHyperTreeGridSource::GetQuadric());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetQuadricCoefficients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadricCoefficients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  const size_t size0 = 10;
  double temp0[10];
  double save0[10];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetQuadricCoefficients(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetQuadricCoefficients(temp0);
    }

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
PyvtkHyperTreeGridSource_GetQuadricCoefficients_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadricCoefficients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  const size_t size0 = 10;
  double temp0[10];
  double save0[10];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetQuadricCoefficients(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::GetQuadricCoefficients(temp0);
    }

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
PyvtkHyperTreeGridSource_GetQuadricCoefficients_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadricCoefficients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetQuadricCoefficients() :
      op->vtkHyperTreeGridSource::GetQuadricCoefficients());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridSource_GetQuadricCoefficients(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHyperTreeGridSource_GetQuadricCoefficients_s1(self, args);
    case 0:
      return PyvtkHyperTreeGridSource_GetQuadricCoefficients_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetQuadricCoefficients");
  return nullptr;
}



static PyObject *
PyvtkHyperTreeGridSource_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkHyperTreeGridSource::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_ConvertDescriptorStringToBitArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertDescriptorStringToBitArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkBitArray *tempr = (ap.IsBound() ?
      op->ConvertDescriptorStringToBitArray(temp0) :
      op->vtkHyperTreeGridSource::ConvertDescriptorStringToBitArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_ConvertMaterialMaskStringToBitArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertMaterialMaskStringToBitArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkBitArray *tempr = (ap.IsBound() ?
      op->ConvertMaterialMaskStringToBitArray(temp0) :
      op->vtkHyperTreeGridSource::ConvertMaterialMaskStringToBitArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridSource_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkHyperTreeGridSource\nC++: static vtkHyperTreeGridSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkHyperTreeGridSource\nC++: vtkHyperTreeGridSource *NewInstance()\n\n"},
  {"GetMaximumLevel", PyvtkHyperTreeGridSource_GetMaximumLevel, METH_VARARGS,
   "V.GetMaximumLevel() -> int\nC++: unsigned int GetMaximumLevel()\n\nReturn the maximum number of levels of the hypertree.\n\\post positive_result: result>=1\n"},
  {"SetMaximumLevel", PyvtkHyperTreeGridSource_SetMaximumLevel, METH_VARARGS,
   "V.SetMaximumLevel(int)\nC++: void SetMaximumLevel(unsigned int levels)\n\nSet the maximum number of levels of the hypertrees.\n\\pre positive_levels: levels>=1\n\\post is_set: this->GetLevels()==levels\n\\post min_is_valid: this->GetMinLevels()<this->GetLevels()\n"},
  {"SetOrigin", PyvtkHyperTreeGridSource_SetOrigin, METH_VARARGS,
   "V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {"GetOrigin", PyvtkHyperTreeGridSource_GetOrigin, METH_VARARGS,
   "V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\n"},
  {"SetGridScale", PyvtkHyperTreeGridSource_SetGridScale, METH_VARARGS,
   "V.SetGridScale(float, float, float)\nC++: void SetGridScale(double, double, double)\nV.SetGridScale((float, float, float))\nC++: void SetGridScale(double a[3])\n\n"},
  {"GetGridScale", PyvtkHyperTreeGridSource_GetGridScale, METH_VARARGS,
   "V.GetGridScale() -> (float, float, float)\nC++: double *GetGridScale()\n\n"},
  {"SetGridSize", PyvtkHyperTreeGridSource_SetGridSize, METH_VARARGS,
   "V.SetGridSize(int, int, int)\nC++: void SetGridSize(unsigned int, unsigned int, unsigned int)\nV.SetGridSize((int, int, int))\nC++: void SetGridSize(unsigned int a[3])\n\n"},
  {"GetGridSize", PyvtkHyperTreeGridSource_GetGridSize, METH_VARARGS,
   "V.GetGridSize() -> (int, int, int)\nC++: unsigned int *GetGridSize()\n\n"},
  {"SetTransposedRootIndexing", PyvtkHyperTreeGridSource_SetTransposedRootIndexing, METH_VARARGS,
   "V.SetTransposedRootIndexing(bool)\nC++: virtual void SetTransposedRootIndexing(bool _arg)\n\nSpecify whether indexing mode of grid root cells must be\ntransposed to x-axis first, z-axis last, instead of the default\nz-axis first, k-axis last\n"},
  {"GetTransposedRootIndexing", PyvtkHyperTreeGridSource_GetTransposedRootIndexing, METH_VARARGS,
   "V.GetTransposedRootIndexing() -> bool\nC++: virtual bool GetTransposedRootIndexing()\n\nSpecify whether indexing mode of grid root cells must be\ntransposed to x-axis first, z-axis last, instead of the default\nz-axis first, k-axis last\n"},
  {"SetIndexingModeToKJI", PyvtkHyperTreeGridSource_SetIndexingModeToKJI, METH_VARARGS,
   "V.SetIndexingModeToKJI()\nC++: void SetIndexingModeToKJI()\n\nSpecify whether indexing mode of grid root cells must be\ntransposed to x-axis first, z-axis last, instead of the default\nz-axis first, k-axis last\n"},
  {"SetIndexingModeToIJK", PyvtkHyperTreeGridSource_SetIndexingModeToIJK, METH_VARARGS,
   "V.SetIndexingModeToIJK()\nC++: void SetIndexingModeToIJK()\n\nSpecify whether indexing mode of grid root cells must be\ntransposed to x-axis first, z-axis last, instead of the default\nz-axis first, k-axis last\n"},
  {"SetDimension", PyvtkHyperTreeGridSource_SetDimension, METH_VARARGS,
   "V.SetDimension(int)\nC++: virtual void SetDimension(unsigned int _arg)\n\nSet/Get the dimensionality of the grid\n"},
  {"GetDimensionMinValue", PyvtkHyperTreeGridSource_GetDimensionMinValue, METH_VARARGS,
   "V.GetDimensionMinValue() -> int\nC++: virtual unsigned int GetDimensionMinValue()\n\nSet/Get the dimensionality of the grid\n"},
  {"GetDimensionMaxValue", PyvtkHyperTreeGridSource_GetDimensionMaxValue, METH_VARARGS,
   "V.GetDimensionMaxValue() -> int\nC++: virtual unsigned int GetDimensionMaxValue()\n\nSet/Get the dimensionality of the grid\n"},
  {"GetDimension", PyvtkHyperTreeGridSource_GetDimension, METH_VARARGS,
   "V.GetDimension() -> int\nC++: virtual unsigned int GetDimension()\n\nSet/Get the dimensionality of the grid\n"},
  {"SetOrientation", PyvtkHyperTreeGridSource_SetOrientation, METH_VARARGS,
   "V.SetOrientation(int)\nC++: virtual void SetOrientation(unsigned int)\n\nSet/Get the orientation of the grid (in 1D and 2D)\n"},
  {"GetOrientation", PyvtkHyperTreeGridSource_GetOrientation, METH_VARARGS,
   "V.GetOrientation() -> int\nC++: virtual unsigned int GetOrientation()\n\nSet/Get the orientation of the grid (in 1D and 2D)\n"},
  {"SetBranchFactor", PyvtkHyperTreeGridSource_SetBranchFactor, METH_VARARGS,
   "V.SetBranchFactor(int)\nC++: virtual void SetBranchFactor(unsigned int _arg)\n\nSet/Get the subdivision factor in the grid refinement scheme\n"},
  {"GetBranchFactorMinValue", PyvtkHyperTreeGridSource_GetBranchFactorMinValue, METH_VARARGS,
   "V.GetBranchFactorMinValue() -> int\nC++: virtual unsigned int GetBranchFactorMinValue()\n\nSet/Get the subdivision factor in the grid refinement scheme\n"},
  {"GetBranchFactorMaxValue", PyvtkHyperTreeGridSource_GetBranchFactorMaxValue, METH_VARARGS,
   "V.GetBranchFactorMaxValue() -> int\nC++: virtual unsigned int GetBranchFactorMaxValue()\n\nSet/Get the subdivision factor in the grid refinement scheme\n"},
  {"GetBranchFactor", PyvtkHyperTreeGridSource_GetBranchFactor, METH_VARARGS,
   "V.GetBranchFactor() -> int\nC++: virtual unsigned int GetBranchFactor()\n\nSet/Get the subdivision factor in the grid refinement scheme\n"},
  {"SetUseDescriptor", PyvtkHyperTreeGridSource_SetUseDescriptor, METH_VARARGS,
   "V.SetUseDescriptor(bool)\nC++: virtual void SetUseDescriptor(bool _arg)\n\nSet/get whether the descriptor string should be used. NB:\nOtherwise a quadric definition is expected. Default: true\n"},
  {"GetUseDescriptor", PyvtkHyperTreeGridSource_GetUseDescriptor, METH_VARARGS,
   "V.GetUseDescriptor() -> bool\nC++: virtual bool GetUseDescriptor()\n\nSet/get whether the descriptor string should be used. NB:\nOtherwise a quadric definition is expected. Default: true\n"},
  {"UseDescriptorOn", PyvtkHyperTreeGridSource_UseDescriptorOn, METH_VARARGS,
   "V.UseDescriptorOn()\nC++: virtual void UseDescriptorOn()\n\nSet/get whether the descriptor string should be used. NB:\nOtherwise a quadric definition is expected. Default: true\n"},
  {"UseDescriptorOff", PyvtkHyperTreeGridSource_UseDescriptorOff, METH_VARARGS,
   "V.UseDescriptorOff()\nC++: virtual void UseDescriptorOff()\n\nSet/get whether the descriptor string should be used. NB:\nOtherwise a quadric definition is expected. Default: true\n"},
  {"SetUseMaterialMask", PyvtkHyperTreeGridSource_SetUseMaterialMask, METH_VARARGS,
   "V.SetUseMaterialMask(bool)\nC++: virtual void SetUseMaterialMask(bool _arg)\n\nSet/get whether the material mask should be used. NB: This is\nonly used when UseDescriptor is ON Default: false\n"},
  {"GetUseMaterialMask", PyvtkHyperTreeGridSource_GetUseMaterialMask, METH_VARARGS,
   "V.GetUseMaterialMask() -> bool\nC++: virtual bool GetUseMaterialMask()\n\nSet/get whether the material mask should be used. NB: This is\nonly used when UseDescriptor is ON Default: false\n"},
  {"UseMaterialMaskOn", PyvtkHyperTreeGridSource_UseMaterialMaskOn, METH_VARARGS,
   "V.UseMaterialMaskOn()\nC++: virtual void UseMaterialMaskOn()\n\nSet/get whether the material mask should be used. NB: This is\nonly used when UseDescriptor is ON Default: false\n"},
  {"UseMaterialMaskOff", PyvtkHyperTreeGridSource_UseMaterialMaskOff, METH_VARARGS,
   "V.UseMaterialMaskOff()\nC++: virtual void UseMaterialMaskOff()\n\nSet/get whether the material mask should be used. NB: This is\nonly used when UseDescriptor is ON Default: false\n"},
  {"SetGenerateInterfaceFields", PyvtkHyperTreeGridSource_SetGenerateInterfaceFields, METH_VARARGS,
   "V.SetGenerateInterfaceFields(bool)\nC++: virtual void SetGenerateInterfaceFields(bool _arg)\n\nSet/get whether cell-centered interface fields should be\ngenerated. Default: false\n"},
  {"GetGenerateInterfaceFields", PyvtkHyperTreeGridSource_GetGenerateInterfaceFields, METH_VARARGS,
   "V.GetGenerateInterfaceFields() -> bool\nC++: virtual bool GetGenerateInterfaceFields()\n\nSet/get whether cell-centered interface fields should be\ngenerated. Default: false\n"},
  {"GenerateInterfaceFieldsOn", PyvtkHyperTreeGridSource_GenerateInterfaceFieldsOn, METH_VARARGS,
   "V.GenerateInterfaceFieldsOn()\nC++: virtual void GenerateInterfaceFieldsOn()\n\nSet/get whether cell-centered interface fields should be\ngenerated. Default: false\n"},
  {"GenerateInterfaceFieldsOff", PyvtkHyperTreeGridSource_GenerateInterfaceFieldsOff, METH_VARARGS,
   "V.GenerateInterfaceFieldsOff()\nC++: virtual void GenerateInterfaceFieldsOff()\n\nSet/get whether cell-centered interface fields should be\ngenerated. Default: false\n"},
  {"SetDescriptor", PyvtkHyperTreeGridSource_SetDescriptor, METH_VARARGS,
   "V.SetDescriptor(string)\nC++: virtual void SetDescriptor(const char *_arg)\n\nSet/Get the string used to describe the grid.\n"},
  {"GetDescriptor", PyvtkHyperTreeGridSource_GetDescriptor, METH_VARARGS,
   "V.GetDescriptor() -> string\nC++: virtual char *GetDescriptor()\n\nSet/Get the string used to describe the grid.\n"},
  {"SetMaterialMask", PyvtkHyperTreeGridSource_SetMaterialMask, METH_VARARGS,
   "V.SetMaterialMask(string)\nC++: virtual void SetMaterialMask(const char *_arg)\n\nSet/Get the string used to as a material mask.\n"},
  {"GetMaterialMask", PyvtkHyperTreeGridSource_GetMaterialMask, METH_VARARGS,
   "V.GetMaterialMask() -> string\nC++: virtual char *GetMaterialMask()\n\nSet/Get the string used to as a material mask.\n"},
  {"SetDescriptorBits", PyvtkHyperTreeGridSource_SetDescriptorBits, METH_VARARGS,
   "V.SetDescriptorBits(vtkBitArray)\nC++: virtual void SetDescriptorBits(vtkBitArray *)\n\nSet/Get the bitarray used to describe the grid.\n"},
  {"GetDescriptorBits", PyvtkHyperTreeGridSource_GetDescriptorBits, METH_VARARGS,
   "V.GetDescriptorBits() -> vtkBitArray\nC++: virtual vtkBitArray *GetDescriptorBits()\n\nSet/Get the bitarray used to describe the grid.\n"},
  {"SetLevelZeroMaterialIndex", PyvtkHyperTreeGridSource_SetLevelZeroMaterialIndex, METH_VARARGS,
   "V.SetLevelZeroMaterialIndex(vtkIdTypeArray)\nC++: virtual void SetLevelZeroMaterialIndex(vtkIdTypeArray *)\n\nSet the index array used to as a material mask.\n"},
  {"SetMaterialMaskBits", PyvtkHyperTreeGridSource_SetMaterialMaskBits, METH_VARARGS,
   "V.SetMaterialMaskBits(vtkBitArray)\nC++: virtual void SetMaterialMaskBits(vtkBitArray *)\n\nSet/Get the bitarray used as a material mask.\n"},
  {"GetMaterialMaskBits", PyvtkHyperTreeGridSource_GetMaterialMaskBits, METH_VARARGS,
   "V.GetMaterialMaskBits() -> vtkBitArray\nC++: virtual vtkBitArray *GetMaterialMaskBits()\n\nSet/Get the bitarray used as a material mask.\n"},
  {"SetQuadric", PyvtkHyperTreeGridSource_SetQuadric, METH_VARARGS,
   "V.SetQuadric(vtkQuadric)\nC++: virtual void SetQuadric(vtkQuadric *)\n\nSet/Get the quadric function.\n"},
  {"GetQuadric", PyvtkHyperTreeGridSource_GetQuadric, METH_VARARGS,
   "V.GetQuadric() -> vtkQuadric\nC++: virtual vtkQuadric *GetQuadric()\n\nSet/Get the quadric function.\n"},
  {"SetQuadricCoefficients", PyvtkHyperTreeGridSource_SetQuadricCoefficients, METH_VARARGS,
   "V.SetQuadricCoefficients([float, float, float, float, float,\n    float, float, float, float, float])\nC++: void SetQuadricCoefficients(double[10])\n\nHelpers to set/get the 10 coefficients of the quadric function\n"},
  {"GetQuadricCoefficients", PyvtkHyperTreeGridSource_GetQuadricCoefficients, METH_VARARGS,
   "V.GetQuadricCoefficients([float, float, float, float, float,\n    float, float, float, float, float])\nC++: void GetQuadricCoefficients(double[10])\nV.GetQuadricCoefficients() -> (float, ...)\nC++: double *GetQuadricCoefficients()\n\nHelpers to set/get the 10 coefficients of the quadric function\n"},
  {"GetMTime", PyvtkHyperTreeGridSource_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride GetMTime because we delegate to a vtkQuadric.\n"},
  {"ConvertDescriptorStringToBitArray", PyvtkHyperTreeGridSource_ConvertDescriptorStringToBitArray, METH_VARARGS,
   "V.ConvertDescriptorStringToBitArray(string) -> vtkBitArray\nC++: vtkBitArray *ConvertDescriptorStringToBitArray(\n    const std::string &)\n\nHelpers to convert string descriptors & mask to bit arrays\n"},
  {"ConvertMaterialMaskStringToBitArray", PyvtkHyperTreeGridSource_ConvertMaterialMaskStringToBitArray, METH_VARARGS,
   "V.ConvertMaterialMaskStringToBitArray(string) -> vtkBitArray\nC++: vtkBitArray *ConvertMaterialMaskStringToBitArray(\n    const std::string &)\n\nHelpers to convert string descriptors & mask to bit arrays\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkHyperTreeGridSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkHyperTreeGridSource", // tp_name
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
  PyvtkHyperTreeGridSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridSource_StaticNew()
{
  return vtkHyperTreeGridSource::New();
}

PyObject *PyvtkHyperTreeGridSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkHyperTreeGridSource_Type, PyvtkHyperTreeGridSource_Methods,
    "vtkHyperTreeGridSource",
 &PyvtkHyperTreeGridSource_StaticNew);

  PyTypeObject *pytype = &PyvtkHyperTreeGridSource_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkHyperTreeGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

