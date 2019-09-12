// python wrapper for vtkTableBasedClipDataSet
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
#include "vtkTableBasedClipDataSet.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTableBasedClipDataSet(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTableBasedClipDataSet_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkTableBasedClipDataSet_Doc =
  "vtkTableBasedClipDataSet -\n**********************************************************************\n*****\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "Copyright (c) 2000 - 2009, Lawrence Livermore National Security, LLC\n"
  "Produced at the Lawrence Livermore National Laboratory\n"
  "LLNL-CODE-400124 All rights reserved.\n\n"
  "This file was adapted from the VisIt clipper (vtkVisItClipper). For \n"
  "details, see https://visit.llnl.gov/.  The full copyright notice is\n"
  "contained in the file COPYRIGHT located at the root of the VisIt\n"
  "distribution or at http://www.llnl.gov/visit/copyright.html.\n\n"
  "**********************************************************************\n"
  "    *****\n\n"
  "Clip any dataset with a user-specified\n"
  " implicit function or an input scalar point data array.\n\n\n"
  " vtkTableBasedClipDataSet is a filter that clips any type of dataset\n"
  "using\n"
  " either any subclass of vtkImplicitFunction or an input scalar point\n"
  "data\n"
  " array. Clipping means that it actually \"cuts\" through the cells of\n"
  "the\n"
  " dataset, returning everything outside the specified implicit\n"
  "function (or\n"
  " greater than the scalar value) including \"pieces\" of a cell (Note to\n"
  "compare\n"
  " this with vtkExtractGeometry, which pulls out entire, uncut cells).\n"
  "The\n"
  " output of this filter is a vtkUnstructuredGrid data.\n\n\n"
  " To use this filter, you need to decide whether an implicit function\n"
  "or an\n"
  " input scalar point data array is used for clipping. For the former\n"
  "case,\n"
  "1) define an implicit function\n"
  "2) provide it to this filter via SetClipFunction() If a clipping\n"
  "   function is not specified, or GenerateClipScalars is off( the\n"
  "   default), the input scalar point data array is then employed for\n"
  "   clipping.\n\n\n"
  " You can also specify a scalar (iso-)value, which is used to decide\n"
  "what is\n"
  " inside and outside the implicit function. You can also reverse the\n"
  "sense of\n"
  " what inside/outside is by setting IVAR InsideOut. The clipping\n"
  "algorithm\n"
  " proceeds by computing an implicit function value or using the input\n"
  "scalar\n"
  " point data value for each point in the dataset. This is compared\n"
  "against the\n"
  " scalar (iso-)value to determine the inside/outside status.\n\n\n"
  " Although this filter sometimes (but rarely) may resort to the\n"
  "sibling class\n"
  " vtkClipDataSet for handling some special grids (such as cylinders or\n"
  "cones\n"
  " with capping faces in the form of a vtkPolyData), it itself is able\n"
  "to deal\n"
  " with most grids. It is worth mentioning that\n"
  "vtkTableBasedClipDataSet is\n"
  " capable of addressing the artifacts that may occur with\n"
  "vtkClipDataSet due\n"
  " to the possibly inconsistent triangulation modes between neighboring\n"
  "cells.\n"
  " In addition, the former is much faster than the latter. Furthermore,\n"
  "the\n"
  " former produces less cells (with ratio usually being 5~6) than by\n"
  "the latter\n"
  " in the output. In other words, this filter retains the original\n"
  "cells (i.e.,\n"
  " without triangulation / tetrahedralization) wherever possible. All\n"
  "these\n"
  " advantages are gained by adopting the unique clipping and\n"
  "triangulation tables\n"
  " proposed by VisIt.\n\n"
  "@warning\n"
  " vtkTableBasedClipDataSet makes use of a hash table (that is provided\n"
  "by class\n"
  " maintained by internal class vtkTableBasedClipperDataSetFromVolume)\n"
  "to achieve\n"
  " rapid removal of duplicate points. The hash-based mechanism simply\n"
  "compares the\n"
  " point Ids, without considering the actual inter-point distance\n"
  "(vtkClipDataSet\n"
  " adopts vtkMergePoints that though considers the inter-point distance\n"
  "for robust\n"
  " points merging ). As a result, some duplicate points may be present\n"
  "in the output.\n"
  " This problem occurs when some boundary (cut-through cells) happen to\n"
  "have faces\n"
  " EXACTLY aligned with the clipping plane (such as Plane, Box, or\n"
  "other implicit\n"
  " functions with planar shapes). The occurrence (though very rare) of\n"
  "duplicate\n"
  " points produces degenerate cells, which can be fixed by\n"
  "post-processing the\n"
  " output with a filter like vtkCleanGrid.\n\n"
  "@par Thanks:\n"
  " This filter was adapted from the VisIt clipper (vtkVisItClipper).\n\n"
  "@sa\n"
  " vtkClipDataSet vtkClipVolume vtkClipPolyData vtkCutter\n"
  "vtkImplicitFunction\n\n";


static PyObject *
PyvtkTableBasedClipDataSet_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTableBasedClipDataSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTableBasedClipDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTableBasedClipDataSet *tempr = vtkTableBasedClipDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTableBasedClipDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTableBasedClipDataSet::NewInstance());

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
PyvtkTableBasedClipDataSet_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkTableBasedClipDataSet::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInsideOut(temp0);
    }
    else
    {
      op->vtkTableBasedClipDataSet::SetInsideOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkTableBasedClipDataSet::GetInsideOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOn();
    }
    else
    {
      op->vtkTableBasedClipDataSet::InsideOutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOff();
    }
    else
    {
      op->vtkTableBasedClipDataSet::InsideOutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0);
    }
    else
    {
      op->vtkTableBasedClipDataSet::SetValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkTableBasedClipDataSet::GetValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetUseValueAsOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseValueAsOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseValueAsOffset(temp0);
    }
    else
    {
      op->vtkTableBasedClipDataSet::SetUseValueAsOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetUseValueAsOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseValueAsOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseValueAsOffset() :
      op->vtkTableBasedClipDataSet::GetUseValueAsOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_UseValueAsOffsetOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseValueAsOffsetOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseValueAsOffsetOn();
    }
    else
    {
      op->vtkTableBasedClipDataSet::UseValueAsOffsetOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_UseValueAsOffsetOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseValueAsOffsetOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseValueAsOffsetOff();
    }
    else
    {
      op->vtkTableBasedClipDataSet::UseValueAsOffsetOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->SetClipFunction(temp0);
    }
    else
    {
      op->vtkTableBasedClipDataSet::SetClipFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetClipFunction() :
      op->vtkTableBasedClipDataSet::GetClipFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateClipScalars(temp0);
    }
    else
    {
      op->vtkTableBasedClipDataSet::SetGenerateClipScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateClipScalars() :
      op->vtkTableBasedClipDataSet::GetGenerateClipScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GenerateClipScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClipScalarsOn();
    }
    else
    {
      op->vtkTableBasedClipDataSet::GenerateClipScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GenerateClipScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClipScalarsOff();
    }
    else
    {
      op->vtkTableBasedClipDataSet::GenerateClipScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  vtkIncrementalPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkTableBasedClipDataSet::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkTableBasedClipDataSet::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergeTolerance(temp0);
    }
    else
    {
      op->vtkTableBasedClipDataSet::SetMergeTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetMergeToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMergeToleranceMinValue() :
      op->vtkTableBasedClipDataSet::GetMergeToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetMergeToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMergeToleranceMaxValue() :
      op->vtkTableBasedClipDataSet::GetMergeToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMergeTolerance() :
      op->vtkTableBasedClipDataSet::GetMergeTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLocator();
    }
    else
    {
      op->vtkTableBasedClipDataSet::CreateDefaultLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateClippedOutput(temp0);
    }
    else
    {
      op->vtkTableBasedClipDataSet::SetGenerateClippedOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateClippedOutput() :
      op->vtkTableBasedClipDataSet::GetGenerateClippedOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GenerateClippedOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClippedOutputOn();
    }
    else
    {
      op->vtkTableBasedClipDataSet::GenerateClippedOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GenerateClippedOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClippedOutputOff();
    }
    else
    {
      op->vtkTableBasedClipDataSet::GenerateClippedOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetClippedOutput() :
      op->vtkTableBasedClipDataSet::GetClippedOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkTableBasedClipDataSet::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetOutputPointsPrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMinValue() :
      op->vtkTableBasedClipDataSet::GetOutputPointsPrecisionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetOutputPointsPrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMaxValue() :
      op->vtkTableBasedClipDataSet::GetOutputPointsPrecisionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkTableBasedClipDataSet::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTableBasedClipDataSet_Methods[] = {
  {"IsTypeOf", PyvtkTableBasedClipDataSet_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTableBasedClipDataSet_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTableBasedClipDataSet_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTableBasedClipDataSet\nC++: static vtkTableBasedClipDataSet *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTableBasedClipDataSet_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTableBasedClipDataSet\nC++: vtkTableBasedClipDataSet *NewInstance()\n\n"},
  {"GetMTime", PyvtkTableBasedClipDataSet_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the MTime for which the point locator and clip function are\nconsidered.\n"},
  {"SetInsideOut", PyvtkTableBasedClipDataSet_SetInsideOut, METH_VARARGS,
   "V.SetInsideOut(int)\nC++: virtual void SetInsideOut(vtkTypeBool _arg)\n\nSet/Get the InsideOut flag. With this flag off, a vertex is\nconsidered inside (the implicit function or the isosurface) if\nthe (function or scalar) value is greater than IVAR Value. With\nthis flag on, a vertex is considered inside (the implicit\nfunction or the isosurface) if the (function or scalar) value is\nless than or equal to IVAR Value. This flag is off by default.\n"},
  {"GetInsideOut", PyvtkTableBasedClipDataSet_GetInsideOut, METH_VARARGS,
   "V.GetInsideOut() -> int\nC++: virtual vtkTypeBool GetInsideOut()\n\nSet/Get the InsideOut flag. With this flag off, a vertex is\nconsidered inside (the implicit function or the isosurface) if\nthe (function or scalar) value is greater than IVAR Value. With\nthis flag on, a vertex is considered inside (the implicit\nfunction or the isosurface) if the (function or scalar) value is\nless than or equal to IVAR Value. This flag is off by default.\n"},
  {"InsideOutOn", PyvtkTableBasedClipDataSet_InsideOutOn, METH_VARARGS,
   "V.InsideOutOn()\nC++: virtual void InsideOutOn()\n\nSet/Get the InsideOut flag. With this flag off, a vertex is\nconsidered inside (the implicit function or the isosurface) if\nthe (function or scalar) value is greater than IVAR Value. With\nthis flag on, a vertex is considered inside (the implicit\nfunction or the isosurface) if the (function or scalar) value is\nless than or equal to IVAR Value. This flag is off by default.\n"},
  {"InsideOutOff", PyvtkTableBasedClipDataSet_InsideOutOff, METH_VARARGS,
   "V.InsideOutOff()\nC++: virtual void InsideOutOff()\n\nSet/Get the InsideOut flag. With this flag off, a vertex is\nconsidered inside (the implicit function or the isosurface) if\nthe (function or scalar) value is greater than IVAR Value. With\nthis flag on, a vertex is considered inside (the implicit\nfunction or the isosurface) if the (function or scalar) value is\nless than or equal to IVAR Value. This flag is off by default.\n"},
  {"SetValue", PyvtkTableBasedClipDataSet_SetValue, METH_VARARGS,
   "V.SetValue(float)\nC++: virtual void SetValue(double _arg)\n\nSet/Get the clipping value of the implicit function (if an\nimplicit function is applied) or scalar data array (if a scalar\ndata array is used), with 0.0 as the default value. This value is\nignored if flag UseValueAsOffset is true AND a clip function is\ndefined.\n"},
  {"GetValue", PyvtkTableBasedClipDataSet_GetValue, METH_VARARGS,
   "V.GetValue() -> float\nC++: virtual double GetValue()\n\nSet/Get the clipping value of the implicit function (if an\nimplicit function is applied) or scalar data array (if a scalar\ndata array is used), with 0.0 as the default value. This value is\nignored if flag UseValueAsOffset is true AND a clip function is\ndefined.\n"},
  {"SetUseValueAsOffset", PyvtkTableBasedClipDataSet_SetUseValueAsOffset, METH_VARARGS,
   "V.SetUseValueAsOffset(bool)\nC++: virtual void SetUseValueAsOffset(bool _arg)\n\nSet/Get flag UseValueAsOffset, with true as the default value.\nWith this flag on, IVAR Value is used as an offset parameter to\nthe implicit function. Value is used only when clipping using a\nscalar array.\n"},
  {"GetUseValueAsOffset", PyvtkTableBasedClipDataSet_GetUseValueAsOffset, METH_VARARGS,
   "V.GetUseValueAsOffset() -> bool\nC++: virtual bool GetUseValueAsOffset()\n\nSet/Get flag UseValueAsOffset, with true as the default value.\nWith this flag on, IVAR Value is used as an offset parameter to\nthe implicit function. Value is used only when clipping using a\nscalar array.\n"},
  {"UseValueAsOffsetOn", PyvtkTableBasedClipDataSet_UseValueAsOffsetOn, METH_VARARGS,
   "V.UseValueAsOffsetOn()\nC++: virtual void UseValueAsOffsetOn()\n\nSet/Get flag UseValueAsOffset, with true as the default value.\nWith this flag on, IVAR Value is used as an offset parameter to\nthe implicit function. Value is used only when clipping using a\nscalar array.\n"},
  {"UseValueAsOffsetOff", PyvtkTableBasedClipDataSet_UseValueAsOffsetOff, METH_VARARGS,
   "V.UseValueAsOffsetOff()\nC++: virtual void UseValueAsOffsetOff()\n\nSet/Get flag UseValueAsOffset, with true as the default value.\nWith this flag on, IVAR Value is used as an offset parameter to\nthe implicit function. Value is used only when clipping using a\nscalar array.\n"},
  {"SetClipFunction", PyvtkTableBasedClipDataSet_SetClipFunction, METH_VARARGS,
   "V.SetClipFunction(vtkImplicitFunction)\nC++: virtual void SetClipFunction(vtkImplicitFunction *)\n\nSet/Get the implicit function with which to perform the clipping\noperation. Unless an implicit function is defined, the specified\ninput scalar data will be used for clipping.\n"},
  {"GetClipFunction", PyvtkTableBasedClipDataSet_GetClipFunction, METH_VARARGS,
   "V.GetClipFunction() -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetClipFunction()\n\nSet/Get the implicit function with which to perform the clipping\noperation. Unless an implicit function is defined, the specified\ninput scalar data will be used for clipping.\n"},
  {"SetGenerateClipScalars", PyvtkTableBasedClipDataSet_SetGenerateClipScalars, METH_VARARGS,
   "V.SetGenerateClipScalars(int)\nC++: virtual void SetGenerateClipScalars(vtkTypeBool _arg)\n\nSet/Get flag GenerateClipScalars, with 0 as the default value.\nWith this flag on, the scalar point data values obtained by\nevaluating the implicit function will be exported to the output.\nNote that this flag requiries that an implicit function be\nprovided.\n"},
  {"GetGenerateClipScalars", PyvtkTableBasedClipDataSet_GetGenerateClipScalars, METH_VARARGS,
   "V.GetGenerateClipScalars() -> int\nC++: virtual vtkTypeBool GetGenerateClipScalars()\n\nSet/Get flag GenerateClipScalars, with 0 as the default value.\nWith this flag on, the scalar point data values obtained by\nevaluating the implicit function will be exported to the output.\nNote that this flag requiries that an implicit function be\nprovided.\n"},
  {"GenerateClipScalarsOn", PyvtkTableBasedClipDataSet_GenerateClipScalarsOn, METH_VARARGS,
   "V.GenerateClipScalarsOn()\nC++: virtual void GenerateClipScalarsOn()\n\nSet/Get flag GenerateClipScalars, with 0 as the default value.\nWith this flag on, the scalar point data values obtained by\nevaluating the implicit function will be exported to the output.\nNote that this flag requiries that an implicit function be\nprovided.\n"},
  {"GenerateClipScalarsOff", PyvtkTableBasedClipDataSet_GenerateClipScalarsOff, METH_VARARGS,
   "V.GenerateClipScalarsOff()\nC++: virtual void GenerateClipScalarsOff()\n\nSet/Get flag GenerateClipScalars, with 0 as the default value.\nWith this flag on, the scalar point data values obtained by\nevaluating the implicit function will be exported to the output.\nNote that this flag requiries that an implicit function be\nprovided.\n"},
  {"SetLocator", PyvtkTableBasedClipDataSet_SetLocator, METH_VARARGS,
   "V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet/Get a point locator locator for merging duplicate points. By\ndefault, an instance of vtkMergePoints is used. Note that this\nIVAR is provided in this class only because this filter may\nresort to its sibling class vtkClipDataSet when processing some\nspecial grids (such as cylinders or cones with capping faces in\nthe form of a vtkPolyData) while the latter requires a point\nlocator. This filter itself does not need a locator.\n"},
  {"GetLocator", PyvtkTableBasedClipDataSet_GetLocator, METH_VARARGS,
   "V.GetLocator() -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\nSet/Get a point locator locator for merging duplicate points. By\ndefault, an instance of vtkMergePoints is used. Note that this\nIVAR is provided in this class only because this filter may\nresort to its sibling class vtkClipDataSet when processing some\nspecial grids (such as cylinders or cones with capping faces in\nthe form of a vtkPolyData) while the latter requires a point\nlocator. This filter itself does not need a locator.\n"},
  {"SetMergeTolerance", PyvtkTableBasedClipDataSet_SetMergeTolerance, METH_VARARGS,
   "V.SetMergeTolerance(float)\nC++: virtual void SetMergeTolerance(double _arg)\n\nSet/Get the tolerance used for merging duplicate points near the\nclipping intersection cells. This tolerance may prevent the\ngeneration of degenerate primitives. Note that only 3D cells\nactually use this IVAR.\n"},
  {"GetMergeToleranceMinValue", PyvtkTableBasedClipDataSet_GetMergeToleranceMinValue, METH_VARARGS,
   "V.GetMergeToleranceMinValue() -> float\nC++: virtual double GetMergeToleranceMinValue()\n\nSet/Get the tolerance used for merging duplicate points near the\nclipping intersection cells. This tolerance may prevent the\ngeneration of degenerate primitives. Note that only 3D cells\nactually use this IVAR.\n"},
  {"GetMergeToleranceMaxValue", PyvtkTableBasedClipDataSet_GetMergeToleranceMaxValue, METH_VARARGS,
   "V.GetMergeToleranceMaxValue() -> float\nC++: virtual double GetMergeToleranceMaxValue()\n\nSet/Get the tolerance used for merging duplicate points near the\nclipping intersection cells. This tolerance may prevent the\ngeneration of degenerate primitives. Note that only 3D cells\nactually use this IVAR.\n"},
  {"GetMergeTolerance", PyvtkTableBasedClipDataSet_GetMergeTolerance, METH_VARARGS,
   "V.GetMergeTolerance() -> float\nC++: virtual double GetMergeTolerance()\n\nSet/Get the tolerance used for merging duplicate points near the\nclipping intersection cells. This tolerance may prevent the\ngeneration of degenerate primitives. Note that only 3D cells\nactually use this IVAR.\n"},
  {"CreateDefaultLocator", PyvtkTableBasedClipDataSet_CreateDefaultLocator, METH_VARARGS,
   "V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate a default point locator when none is specified. The point\nlocator is used to merge coincident points.\n"},
  {"SetGenerateClippedOutput", PyvtkTableBasedClipDataSet_SetGenerateClippedOutput, METH_VARARGS,
   "V.SetGenerateClippedOutput(int)\nC++: virtual void SetGenerateClippedOutput(vtkTypeBool _arg)\n\nSet/Get whether a second output is generated. The second output\ncontains the polygonal data that is clipped away by the\niso-surface.\n"},
  {"GetGenerateClippedOutput", PyvtkTableBasedClipDataSet_GetGenerateClippedOutput, METH_VARARGS,
   "V.GetGenerateClippedOutput() -> int\nC++: virtual vtkTypeBool GetGenerateClippedOutput()\n\nSet/Get whether a second output is generated. The second output\ncontains the polygonal data that is clipped away by the\niso-surface.\n"},
  {"GenerateClippedOutputOn", PyvtkTableBasedClipDataSet_GenerateClippedOutputOn, METH_VARARGS,
   "V.GenerateClippedOutputOn()\nC++: virtual void GenerateClippedOutputOn()\n\nSet/Get whether a second output is generated. The second output\ncontains the polygonal data that is clipped away by the\niso-surface.\n"},
  {"GenerateClippedOutputOff", PyvtkTableBasedClipDataSet_GenerateClippedOutputOff, METH_VARARGS,
   "V.GenerateClippedOutputOff()\nC++: virtual void GenerateClippedOutputOff()\n\nSet/Get whether a second output is generated. The second output\ncontains the polygonal data that is clipped away by the\niso-surface.\n"},
  {"GetClippedOutput", PyvtkTableBasedClipDataSet_GetClippedOutput, METH_VARARGS,
   "V.GetClippedOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetClippedOutput()\n\nReturn the clipped output.\n"},
  {"SetOutputPointsPrecision", PyvtkTableBasedClipDataSet_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {"GetOutputPointsPrecisionMinValue", PyvtkTableBasedClipDataSet_GetOutputPointsPrecisionMinValue, METH_VARARGS,
   "V.GetOutputPointsPrecisionMinValue() -> int\nC++: virtual int GetOutputPointsPrecisionMinValue()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {"GetOutputPointsPrecisionMaxValue", PyvtkTableBasedClipDataSet_GetOutputPointsPrecisionMaxValue, METH_VARARGS,
   "V.GetOutputPointsPrecisionMaxValue() -> int\nC++: virtual int GetOutputPointsPrecisionMaxValue()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkTableBasedClipDataSet_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTableBasedClipDataSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkTableBasedClipDataSet", // tp_name
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
  PyvtkTableBasedClipDataSet_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTableBasedClipDataSet_StaticNew()
{
  return vtkTableBasedClipDataSet::New();
}

PyObject *PyvtkTableBasedClipDataSet_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTableBasedClipDataSet_Type, PyvtkTableBasedClipDataSet_Methods,
    "vtkTableBasedClipDataSet",
 &PyvtkTableBasedClipDataSet_StaticNew);

  PyTypeObject *pytype = &PyvtkTableBasedClipDataSet_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTableBasedClipDataSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTableBasedClipDataSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTableBasedClipDataSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

