// python wrapper for vtkMaterialInterfaceFilter
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
#include "vtkMaterialInterfaceFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMaterialInterfaceFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMaterialInterfaceFilter_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkMaterialInterfaceFilter_Doc =
  "vtkMaterialInterfaceFilter - Extract particles and analyse them.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "This filter takes a cell data volume fraction and generates a\n"
  "polydata surface.  It also performs connectivity on the particles and\n"
  "generates a particle index as part of the cell data of the output. \n"
  "It computes the volume of each particle from the volume fraction.\n\n"
  "This will turn on validation and debug i/o of the filter.{.cpp}\n"
  "#define vtkMaterialInterfaceFilterDEBUG\n\n"
  "This will turn on profiling of how long each part of the filter\n"
  "takes{.cpp}\n"
  "#define vtkMaterialInterfaceFilterPROFILE\n\n";


static PyObject *
PyvtkMaterialInterfaceFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMaterialInterfaceFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMaterialInterfaceFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMaterialInterfaceFilter *tempr = vtkMaterialInterfaceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMaterialInterfaceFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMaterialInterfaceFilter::NewInstance());

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
PyvtkMaterialInterfaceFilter_SelectMaterialArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectMaterialArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectMaterialArray(temp0);
    }
    else
    {
      op->vtkMaterialInterfaceFilter::SelectMaterialArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_UnselectMaterialArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnselectMaterialArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UnselectMaterialArray(temp0);
    }
    else
    {
      op->vtkMaterialInterfaceFilter::UnselectMaterialArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_UnselectAllMaterialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnselectAllMaterialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnselectAllMaterialArrays();
    }
    else
    {
      op->vtkMaterialInterfaceFilter::UnselectAllMaterialArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetMaterialArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMaterialArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkMaterialInterfaceFilter::SetMaterialArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetMaterialArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaterialArrayStatus(temp0) :
      op->vtkMaterialInterfaceFilter::GetMaterialArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceFilter_GetMaterialArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaterialArrayStatus(temp0) :
      op->vtkMaterialInterfaceFilter::GetMaterialArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMaterialInterfaceFilter_GetMaterialArrayStatus_Methods[] = {
  {nullptr, PyvtkMaterialInterfaceFilter_GetMaterialArrayStatus_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkMaterialInterfaceFilter_GetMaterialArrayStatus_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMaterialInterfaceFilter_GetMaterialArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaterialInterfaceFilter_GetMaterialArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetMaterialArrayStatus");
  return nullptr;
}



static PyObject *
PyvtkMaterialInterfaceFilter_GetNumberOfMaterialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMaterialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfMaterialArrays() :
      op->vtkMaterialInterfaceFilter::GetNumberOfMaterialArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetMaterialArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetMaterialArrayName(temp0) :
      op->vtkMaterialInterfaceFilter::GetMaterialArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SelectMassArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectMassArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectMassArray(temp0);
    }
    else
    {
      op->vtkMaterialInterfaceFilter::SelectMassArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_UnselectMassArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnselectMassArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UnselectMassArray(temp0);
    }
    else
    {
      op->vtkMaterialInterfaceFilter::UnselectMassArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_UnselectAllMassArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnselectAllMassArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnselectAllMassArrays();
    }
    else
    {
      op->vtkMaterialInterfaceFilter::UnselectAllMassArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetMassArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMassArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMassArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkMaterialInterfaceFilter::SetMassArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetMassArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMassArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMassArrayStatus(temp0) :
      op->vtkMaterialInterfaceFilter::GetMassArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceFilter_GetMassArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMassArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMassArrayStatus(temp0) :
      op->vtkMaterialInterfaceFilter::GetMassArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMaterialInterfaceFilter_GetMassArrayStatus_Methods[] = {
  {nullptr, PyvtkMaterialInterfaceFilter_GetMassArrayStatus_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkMaterialInterfaceFilter_GetMassArrayStatus_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMaterialInterfaceFilter_GetMassArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaterialInterfaceFilter_GetMassArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetMassArrayStatus");
  return nullptr;
}



static PyObject *
PyvtkMaterialInterfaceFilter_GetNumberOfMassArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMassArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfMassArrays() :
      op->vtkMaterialInterfaceFilter::GetNumberOfMassArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetMassArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMassArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetMassArrayName(temp0) :
      op->vtkMaterialInterfaceFilter::GetMassArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SelectVolumeWtdAvgArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectVolumeWtdAvgArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectVolumeWtdAvgArray(temp0);
    }
    else
    {
      op->vtkMaterialInterfaceFilter::SelectVolumeWtdAvgArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_UnselectVolumeWtdAvgArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnselectVolumeWtdAvgArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UnselectVolumeWtdAvgArray(temp0);
    }
    else
    {
      op->vtkMaterialInterfaceFilter::UnselectVolumeWtdAvgArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_UnselectAllVolumeWtdAvgArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnselectAllVolumeWtdAvgArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnselectAllVolumeWtdAvgArrays();
    }
    else
    {
      op->vtkMaterialInterfaceFilter::UnselectAllVolumeWtdAvgArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetVolumeWtdAvgArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeWtdAvgArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetVolumeWtdAvgArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkMaterialInterfaceFilter::SetVolumeWtdAvgArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetVolumeWtdAvgArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeWtdAvgArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVolumeWtdAvgArrayStatus(temp0) :
      op->vtkMaterialInterfaceFilter::GetVolumeWtdAvgArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceFilter_GetVolumeWtdAvgArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeWtdAvgArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVolumeWtdAvgArrayStatus(temp0) :
      op->vtkMaterialInterfaceFilter::GetVolumeWtdAvgArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMaterialInterfaceFilter_GetVolumeWtdAvgArrayStatus_Methods[] = {
  {nullptr, PyvtkMaterialInterfaceFilter_GetVolumeWtdAvgArrayStatus_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkMaterialInterfaceFilter_GetVolumeWtdAvgArrayStatus_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMaterialInterfaceFilter_GetVolumeWtdAvgArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaterialInterfaceFilter_GetVolumeWtdAvgArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVolumeWtdAvgArrayStatus");
  return nullptr;
}



static PyObject *
PyvtkMaterialInterfaceFilter_GetNumberOfVolumeWtdAvgArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVolumeWtdAvgArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVolumeWtdAvgArrays() :
      op->vtkMaterialInterfaceFilter::GetNumberOfVolumeWtdAvgArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetVolumeWtdAvgArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeWtdAvgArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVolumeWtdAvgArrayName(temp0) :
      op->vtkMaterialInterfaceFilter::GetVolumeWtdAvgArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SelectMassWtdAvgArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectMassWtdAvgArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectMassWtdAvgArray(temp0);
    }
    else
    {
      op->vtkMaterialInterfaceFilter::SelectMassWtdAvgArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_UnselectMassWtdAvgArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnselectMassWtdAvgArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UnselectMassWtdAvgArray(temp0);
    }
    else
    {
      op->vtkMaterialInterfaceFilter::UnselectMassWtdAvgArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_UnselectAllMassWtdAvgArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnselectAllMassWtdAvgArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnselectAllMassWtdAvgArrays();
    }
    else
    {
      op->vtkMaterialInterfaceFilter::UnselectAllMassWtdAvgArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetMassWtdAvgArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMassWtdAvgArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMassWtdAvgArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkMaterialInterfaceFilter::SetMassWtdAvgArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetMassWtdAvgArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMassWtdAvgArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMassWtdAvgArrayStatus(temp0) :
      op->vtkMaterialInterfaceFilter::GetMassWtdAvgArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceFilter_GetMassWtdAvgArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMassWtdAvgArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMassWtdAvgArrayStatus(temp0) :
      op->vtkMaterialInterfaceFilter::GetMassWtdAvgArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMaterialInterfaceFilter_GetMassWtdAvgArrayStatus_Methods[] = {
  {nullptr, PyvtkMaterialInterfaceFilter_GetMassWtdAvgArrayStatus_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkMaterialInterfaceFilter_GetMassWtdAvgArrayStatus_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMaterialInterfaceFilter_GetMassWtdAvgArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaterialInterfaceFilter_GetMassWtdAvgArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetMassWtdAvgArrayStatus");
  return nullptr;
}



static PyObject *
PyvtkMaterialInterfaceFilter_GetNumberOfMassWtdAvgArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMassWtdAvgArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfMassWtdAvgArrays() :
      op->vtkMaterialInterfaceFilter::GetNumberOfMassWtdAvgArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetMassWtdAvgArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMassWtdAvgArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetMassWtdAvgArrayName(temp0) :
      op->vtkMaterialInterfaceFilter::GetMassWtdAvgArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SelectSummationArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectSummationArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectSummationArray(temp0);
    }
    else
    {
      op->vtkMaterialInterfaceFilter::SelectSummationArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_UnselectSummationArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnselectSummationArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UnselectSummationArray(temp0);
    }
    else
    {
      op->vtkMaterialInterfaceFilter::UnselectSummationArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_UnselectAllSummationArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnselectAllSummationArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnselectAllSummationArrays();
    }
    else
    {
      op->vtkMaterialInterfaceFilter::UnselectAllSummationArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetSummationArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSummationArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSummationArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkMaterialInterfaceFilter::SetSummationArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetSummationArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSummationArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSummationArrayStatus(temp0) :
      op->vtkMaterialInterfaceFilter::GetSummationArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceFilter_GetSummationArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSummationArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSummationArrayStatus(temp0) :
      op->vtkMaterialInterfaceFilter::GetSummationArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMaterialInterfaceFilter_GetSummationArrayStatus_Methods[] = {
  {nullptr, PyvtkMaterialInterfaceFilter_GetSummationArrayStatus_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkMaterialInterfaceFilter_GetSummationArrayStatus_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMaterialInterfaceFilter_GetSummationArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaterialInterfaceFilter_GetSummationArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSummationArrayStatus");
  return nullptr;
}



static PyObject *
PyvtkMaterialInterfaceFilter_GetNumberOfSummationArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSummationArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSummationArrays() :
      op->vtkMaterialInterfaceFilter::GetNumberOfSummationArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetSummationArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSummationArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSummationArrayName(temp0) :
      op->vtkMaterialInterfaceFilter::GetSummationArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetMaterialFractionThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialFractionThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaterialFractionThreshold(temp0);
    }
    else
    {
      op->vtkMaterialInterfaceFilter::SetMaterialFractionThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetMaterialFractionThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialFractionThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaterialFractionThreshold() :
      op->vtkMaterialInterfaceFilter::GetMaterialFractionThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetComputeOBB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeOBB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeOBB(temp0);
    }
    else
    {
      op->vtkMaterialInterfaceFilter::SetComputeOBB(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetComputeOBB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeOBB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeOBB() :
      op->vtkMaterialInterfaceFilter::GetComputeOBB());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetUpperLoadingBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpperLoadingBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUpperLoadingBound(temp0);
    }
    else
    {
      op->vtkMaterialInterfaceFilter::SetUpperLoadingBound(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetUpperLoadingBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperLoadingBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUpperLoadingBound() :
      op->vtkMaterialInterfaceFilter::GetUpperLoadingBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetOutputBaseName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputBaseName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputBaseName(temp0);
    }
    else
    {
      op->vtkMaterialInterfaceFilter::SetOutputBaseName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetOutputBaseName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputBaseName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetOutputBaseName() :
      op->vtkMaterialInterfaceFilter::GetOutputBaseName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetWriteGeometryOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteGeometryOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteGeometryOutput(temp0);
    }
    else
    {
      op->vtkMaterialInterfaceFilter::SetWriteGeometryOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetWriteGeometryOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteGeometryOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetWriteGeometryOutput() :
      op->vtkMaterialInterfaceFilter::GetWriteGeometryOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetWriteStatisticsOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteStatisticsOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteStatisticsOutput(temp0);
    }
    else
    {
      op->vtkMaterialInterfaceFilter::SetWriteStatisticsOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetWriteStatisticsOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteStatisticsOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetWriteStatisticsOutput() :
      op->vtkMaterialInterfaceFilter::GetWriteStatisticsOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetBlockGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBlockGhostLevel(temp0);
    }
    else
    {
      op->vtkMaterialInterfaceFilter::SetBlockGhostLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetBlockGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetBlockGhostLevel() :
      op->vtkMaterialInterfaceFilter::GetBlockGhostLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SelectionModifiedCallback(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SelectionModifiedCallback");

  vtkObject *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = VTK_PYBUFFER_INITIALIZER;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    vtkMaterialInterfaceFilter::SelectionModifiedCallback(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf2.obj != 0)
  {
    PyBuffer_Release(&pbuf2);
  }
#endif
#if PY_VERSION_HEX >= 0x02060000
  if (pbuf3.obj != 0)
  {
    PyBuffer_Release(&pbuf3);
  }
#endif
  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

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
      op->vtkMaterialInterfaceFilter::SetClipFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetClipFunction() :
      op->vtkMaterialInterfaceFilter::GetClipFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetInvertVolumeFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInvertVolumeFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInvertVolumeFraction(temp0);
    }
    else
    {
      op->vtkMaterialInterfaceFilter::SetInvertVolumeFraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetInvertVolumeFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInvertVolumeFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInvertVolumeFraction() :
      op->vtkMaterialInterfaceFilter::GetInvertVolumeFraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkMaterialInterfaceFilter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMaterialInterfaceFilter_Methods[] = {
  {"IsTypeOf", PyvtkMaterialInterfaceFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMaterialInterfaceFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMaterialInterfaceFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMaterialInterfaceFilter\nC++: static vtkMaterialInterfaceFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMaterialInterfaceFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMaterialInterfaceFilter\nC++: vtkMaterialInterfaceFilter *NewInstance()\n\n"},
  {"SelectMaterialArray", PyvtkMaterialInterfaceFilter_SelectMaterialArray, METH_VARARGS,
   "V.SelectMaterialArray(string)\nC++: void SelectMaterialArray(const char *name)\n\nMaterial sellection\n\nAdd a single array\n"},
  {"UnselectMaterialArray", PyvtkMaterialInterfaceFilter_UnselectMaterialArray, METH_VARARGS,
   "V.UnselectMaterialArray(string)\nC++: void UnselectMaterialArray(const char *name)\n\nremove a single array\n"},
  {"UnselectAllMaterialArrays", PyvtkMaterialInterfaceFilter_UnselectAllMaterialArrays, METH_VARARGS,
   "V.UnselectAllMaterialArrays()\nC++: void UnselectAllMaterialArrays()\n\nremove all arrays\n"},
  {"SetMaterialArrayStatus", PyvtkMaterialInterfaceFilter_SetMaterialArrayStatus, METH_VARARGS,
   "V.SetMaterialArrayStatus(string, int)\nC++: void SetMaterialArrayStatus(const char *name, int status)\n\nEnable/disable processing on an array\n"},
  {"GetMaterialArrayStatus", PyvtkMaterialInterfaceFilter_GetMaterialArrayStatus, METH_VARARGS,
   "V.GetMaterialArrayStatus(string) -> int\nC++: int GetMaterialArrayStatus(const char *name)\nV.GetMaterialArrayStatus(int) -> int\nC++: int GetMaterialArrayStatus(int index)\n\nGet enable./disable status for a given array\n"},
  {"GetNumberOfMaterialArrays", PyvtkMaterialInterfaceFilter_GetNumberOfMaterialArrays, METH_VARARGS,
   "V.GetNumberOfMaterialArrays() -> int\nC++: int GetNumberOfMaterialArrays()\n\nQuery the number of available arrays\n"},
  {"GetMaterialArrayName", PyvtkMaterialInterfaceFilter_GetMaterialArrayName, METH_VARARGS,
   "V.GetMaterialArrayName(int) -> string\nC++: const char *GetMaterialArrayName(int index)\n\nGet the name of a specific array\n"},
  {"SelectMassArray", PyvtkMaterialInterfaceFilter_SelectMassArray, METH_VARARGS,
   "V.SelectMassArray(string)\nC++: void SelectMassArray(const char *name)\n\nMass sellection\n\nAdd a single array\n"},
  {"UnselectMassArray", PyvtkMaterialInterfaceFilter_UnselectMassArray, METH_VARARGS,
   "V.UnselectMassArray(string)\nC++: void UnselectMassArray(const char *name)\n\nremove a single array\n"},
  {"UnselectAllMassArrays", PyvtkMaterialInterfaceFilter_UnselectAllMassArrays, METH_VARARGS,
   "V.UnselectAllMassArrays()\nC++: void UnselectAllMassArrays()\n\nremove all arrays\n"},
  {"SetMassArrayStatus", PyvtkMaterialInterfaceFilter_SetMassArrayStatus, METH_VARARGS,
   "V.SetMassArrayStatus(string, int)\nC++: void SetMassArrayStatus(const char *name, int status)\n\nEnable/disable processing on an array\n"},
  {"GetMassArrayStatus", PyvtkMaterialInterfaceFilter_GetMassArrayStatus, METH_VARARGS,
   "V.GetMassArrayStatus(string) -> int\nC++: int GetMassArrayStatus(const char *name)\nV.GetMassArrayStatus(int) -> int\nC++: int GetMassArrayStatus(int index)\n\nGet enable./disable status for a given array\n"},
  {"GetNumberOfMassArrays", PyvtkMaterialInterfaceFilter_GetNumberOfMassArrays, METH_VARARGS,
   "V.GetNumberOfMassArrays() -> int\nC++: int GetNumberOfMassArrays()\n\nQuery the number of available arrays\n"},
  {"GetMassArrayName", PyvtkMaterialInterfaceFilter_GetMassArrayName, METH_VARARGS,
   "V.GetMassArrayName(int) -> string\nC++: const char *GetMassArrayName(int index)\n\nGet the name of a specific array\n"},
  {"SelectVolumeWtdAvgArray", PyvtkMaterialInterfaceFilter_SelectVolumeWtdAvgArray, METH_VARARGS,
   "V.SelectVolumeWtdAvgArray(string)\nC++: void SelectVolumeWtdAvgArray(const char *name)\n\nVolume weighted average attribute sellection\n\nAdd a single array\n"},
  {"UnselectVolumeWtdAvgArray", PyvtkMaterialInterfaceFilter_UnselectVolumeWtdAvgArray, METH_VARARGS,
   "V.UnselectVolumeWtdAvgArray(string)\nC++: void UnselectVolumeWtdAvgArray(const char *name)\n\nremove a single array\n"},
  {"UnselectAllVolumeWtdAvgArrays", PyvtkMaterialInterfaceFilter_UnselectAllVolumeWtdAvgArrays, METH_VARARGS,
   "V.UnselectAllVolumeWtdAvgArrays()\nC++: void UnselectAllVolumeWtdAvgArrays()\n\nremove all arrays\n"},
  {"SetVolumeWtdAvgArrayStatus", PyvtkMaterialInterfaceFilter_SetVolumeWtdAvgArrayStatus, METH_VARARGS,
   "V.SetVolumeWtdAvgArrayStatus(string, int)\nC++: void SetVolumeWtdAvgArrayStatus(const char *name, int status)\n\nEnable/disable processing on an array\n"},
  {"GetVolumeWtdAvgArrayStatus", PyvtkMaterialInterfaceFilter_GetVolumeWtdAvgArrayStatus, METH_VARARGS,
   "V.GetVolumeWtdAvgArrayStatus(string) -> int\nC++: int GetVolumeWtdAvgArrayStatus(const char *name)\nV.GetVolumeWtdAvgArrayStatus(int) -> int\nC++: int GetVolumeWtdAvgArrayStatus(int index)\n\nGet enable./disable status for a given array\n"},
  {"GetNumberOfVolumeWtdAvgArrays", PyvtkMaterialInterfaceFilter_GetNumberOfVolumeWtdAvgArrays, METH_VARARGS,
   "V.GetNumberOfVolumeWtdAvgArrays() -> int\nC++: int GetNumberOfVolumeWtdAvgArrays()\n\nQuery the number of available arrays\n"},
  {"GetVolumeWtdAvgArrayName", PyvtkMaterialInterfaceFilter_GetVolumeWtdAvgArrayName, METH_VARARGS,
   "V.GetVolumeWtdAvgArrayName(int) -> string\nC++: const char *GetVolumeWtdAvgArrayName(int index)\n\nGet the name of a specific array\n"},
  {"SelectMassWtdAvgArray", PyvtkMaterialInterfaceFilter_SelectMassWtdAvgArray, METH_VARARGS,
   "V.SelectMassWtdAvgArray(string)\nC++: void SelectMassWtdAvgArray(const char *name)\n\nMass weighted average attribute sellection\n\nAdd a single array\n"},
  {"UnselectMassWtdAvgArray", PyvtkMaterialInterfaceFilter_UnselectMassWtdAvgArray, METH_VARARGS,
   "V.UnselectMassWtdAvgArray(string)\nC++: void UnselectMassWtdAvgArray(const char *name)\n\nremove a single array\n"},
  {"UnselectAllMassWtdAvgArrays", PyvtkMaterialInterfaceFilter_UnselectAllMassWtdAvgArrays, METH_VARARGS,
   "V.UnselectAllMassWtdAvgArrays()\nC++: void UnselectAllMassWtdAvgArrays()\n\nremove all arrays\n"},
  {"SetMassWtdAvgArrayStatus", PyvtkMaterialInterfaceFilter_SetMassWtdAvgArrayStatus, METH_VARARGS,
   "V.SetMassWtdAvgArrayStatus(string, int)\nC++: void SetMassWtdAvgArrayStatus(const char *name, int status)\n\nEnable/disable processing on an array\n"},
  {"GetMassWtdAvgArrayStatus", PyvtkMaterialInterfaceFilter_GetMassWtdAvgArrayStatus, METH_VARARGS,
   "V.GetMassWtdAvgArrayStatus(string) -> int\nC++: int GetMassWtdAvgArrayStatus(const char *name)\nV.GetMassWtdAvgArrayStatus(int) -> int\nC++: int GetMassWtdAvgArrayStatus(int index)\n\nGet enable./disable status for a given array\n"},
  {"GetNumberOfMassWtdAvgArrays", PyvtkMaterialInterfaceFilter_GetNumberOfMassWtdAvgArrays, METH_VARARGS,
   "V.GetNumberOfMassWtdAvgArrays() -> int\nC++: int GetNumberOfMassWtdAvgArrays()\n\nQuery the number of available arrays\n"},
  {"GetMassWtdAvgArrayName", PyvtkMaterialInterfaceFilter_GetMassWtdAvgArrayName, METH_VARARGS,
   "V.GetMassWtdAvgArrayName(int) -> string\nC++: const char *GetMassWtdAvgArrayName(int index)\n\nGet the name of a specific array\n"},
  {"SelectSummationArray", PyvtkMaterialInterfaceFilter_SelectSummationArray, METH_VARARGS,
   "V.SelectSummationArray(string)\nC++: void SelectSummationArray(const char *name)\n\nSummation attribute sellection\n\nAdd a single array\n"},
  {"UnselectSummationArray", PyvtkMaterialInterfaceFilter_UnselectSummationArray, METH_VARARGS,
   "V.UnselectSummationArray(string)\nC++: void UnselectSummationArray(const char *name)\n\nremove a single array\n"},
  {"UnselectAllSummationArrays", PyvtkMaterialInterfaceFilter_UnselectAllSummationArrays, METH_VARARGS,
   "V.UnselectAllSummationArrays()\nC++: void UnselectAllSummationArrays()\n\nremove all arrays\n"},
  {"SetSummationArrayStatus", PyvtkMaterialInterfaceFilter_SetSummationArrayStatus, METH_VARARGS,
   "V.SetSummationArrayStatus(string, int)\nC++: void SetSummationArrayStatus(const char *name, int status)\n\nEnable/disable processing on an array\n"},
  {"GetSummationArrayStatus", PyvtkMaterialInterfaceFilter_GetSummationArrayStatus, METH_VARARGS,
   "V.GetSummationArrayStatus(string) -> int\nC++: int GetSummationArrayStatus(const char *name)\nV.GetSummationArrayStatus(int) -> int\nC++: int GetSummationArrayStatus(int index)\n\nGet enable./disable status for a given array\n"},
  {"GetNumberOfSummationArrays", PyvtkMaterialInterfaceFilter_GetNumberOfSummationArrays, METH_VARARGS,
   "V.GetNumberOfSummationArrays() -> int\nC++: int GetNumberOfSummationArrays()\n\nQuery the number of available arrays\n"},
  {"GetSummationArrayName", PyvtkMaterialInterfaceFilter_GetSummationArrayName, METH_VARARGS,
   "V.GetSummationArrayName(int) -> string\nC++: const char *GetSummationArrayName(int index)\n\nGet the name of a specific array\n"},
  {"SetMaterialFractionThreshold", PyvtkMaterialInterfaceFilter_SetMaterialFractionThreshold, METH_VARARGS,
   "V.SetMaterialFractionThreshold(float)\nC++: void SetMaterialFractionThreshold(double fraction)\n\nVolume fraction which volxels are included in a frgament.\n"},
  {"GetMaterialFractionThreshold", PyvtkMaterialInterfaceFilter_GetMaterialFractionThreshold, METH_VARARGS,
   "V.GetMaterialFractionThreshold() -> float\nC++: virtual double GetMaterialFractionThreshold()\n\nVolume fraction which volxels are included in a frgament.\n"},
  {"SetComputeOBB", PyvtkMaterialInterfaceFilter_SetComputeOBB, METH_VARARGS,
   "V.SetComputeOBB(bool)\nC++: virtual void SetComputeOBB(bool _arg)\n\nTurn on/off OBB calculations\n"},
  {"GetComputeOBB", PyvtkMaterialInterfaceFilter_GetComputeOBB, METH_VARARGS,
   "V.GetComputeOBB() -> bool\nC++: virtual bool GetComputeOBB()\n\nTurn on/off OBB calculations\n"},
  {"SetUpperLoadingBound", PyvtkMaterialInterfaceFilter_SetUpperLoadingBound, METH_VARARGS,
   "V.SetUpperLoadingBound(int)\nC++: void SetUpperLoadingBound(int nPolys)\n\nSet the upper bound(in number of polygons) that will be used to\nexclude processes from work sharing during memory intensive\nportions of the algorithm. acceptable values are [1 INF), however\nthe default is 1,000,000 polys. Increasing increases parallelism\nwhile decreasing reduces parallelism. Setting too low can cause\nproblems. For instance if it's set so low that all processes are\nexcluded.\n"},
  {"GetUpperLoadingBound", PyvtkMaterialInterfaceFilter_GetUpperLoadingBound, METH_VARARGS,
   "V.GetUpperLoadingBound() -> int\nC++: virtual int GetUpperLoadingBound()\n\nSet the upper bound(in number of polygons) that will be used to\nexclude processes from work sharing during memory intensive\nportions of the algorithm. acceptable values are [1 INF), however\nthe default is 1,000,000 polys. Increasing increases parallelism\nwhile decreasing reduces parallelism. Setting too low can cause\nproblems. For instance if it's set so low that all processes are\nexcluded.\n"},
  {"SetOutputBaseName", PyvtkMaterialInterfaceFilter_SetOutputBaseName, METH_VARARGS,
   "V.SetOutputBaseName(string)\nC++: virtual void SetOutputBaseName(const char *_arg)\n\nName the file to save a table of fragment attributes to.\n"},
  {"GetOutputBaseName", PyvtkMaterialInterfaceFilter_GetOutputBaseName, METH_VARARGS,
   "V.GetOutputBaseName() -> string\nC++: virtual char *GetOutputBaseName()\n\nName the file to save a table of fragment attributes to.\n"},
  {"SetWriteGeometryOutput", PyvtkMaterialInterfaceFilter_SetWriteGeometryOutput, METH_VARARGS,
   "V.SetWriteGeometryOutput(bool)\nC++: virtual void SetWriteGeometryOutput(bool _arg)\n\nIf true, save the results of the filter in a text file\n"},
  {"GetWriteGeometryOutput", PyvtkMaterialInterfaceFilter_GetWriteGeometryOutput, METH_VARARGS,
   "V.GetWriteGeometryOutput() -> bool\nC++: virtual bool GetWriteGeometryOutput()\n\nIf true, save the results of the filter in a text file\n"},
  {"SetWriteStatisticsOutput", PyvtkMaterialInterfaceFilter_SetWriteStatisticsOutput, METH_VARARGS,
   "V.SetWriteStatisticsOutput(bool)\nC++: virtual void SetWriteStatisticsOutput(bool _arg)\n\nIf true, save the results of the filter in a text file\n"},
  {"GetWriteStatisticsOutput", PyvtkMaterialInterfaceFilter_GetWriteStatisticsOutput, METH_VARARGS,
   "V.GetWriteStatisticsOutput() -> bool\nC++: virtual bool GetWriteStatisticsOutput()\n\nIf true, save the results of the filter in a text file\n"},
  {"SetBlockGhostLevel", PyvtkMaterialInterfaceFilter_SetBlockGhostLevel, METH_VARARGS,
   "V.SetBlockGhostLevel(int)\nC++: virtual void SetBlockGhostLevel(unsigned char _arg)\n\nVariable used to specify the number of ghost level is available\nin each block. By Default set to 1 which is what the scth reader\nprovides\n"},
  {"GetBlockGhostLevel", PyvtkMaterialInterfaceFilter_GetBlockGhostLevel, METH_VARARGS,
   "V.GetBlockGhostLevel() -> int\nC++: virtual unsigned char GetBlockGhostLevel()\n\nVariable used to specify the number of ghost level is available\nin each block. By Default set to 1 which is what the scth reader\nprovides\n"},
  {"SelectionModifiedCallback", PyvtkMaterialInterfaceFilter_SelectionModifiedCallback, METH_VARARGS,
   "V.SelectionModifiedCallback(vtkObject, int, void, void)\nC++: static void SelectionModifiedCallback(vtkObject *,\n    unsigned long, void *clientdata, void *)\n\nSets modified if array selection changes.\n"},
  {"SetClipFunction", PyvtkMaterialInterfaceFilter_SetClipFunction, METH_VARARGS,
   "V.SetClipFunction(vtkImplicitFunction)\nC++: void SetClipFunction(vtkImplicitFunction *clipFunction)\n\nSet the clip function which can be a plane or a sphere\n"},
  {"GetClipFunction", PyvtkMaterialInterfaceFilter_GetClipFunction, METH_VARARGS,
   "V.GetClipFunction() -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetClipFunction()\n\nSet the clip function which can be a plane or a sphere\n"},
  {"SetInvertVolumeFraction", PyvtkMaterialInterfaceFilter_SetInvertVolumeFraction, METH_VARARGS,
   "V.SetInvertVolumeFraction(int)\nC++: virtual void SetInvertVolumeFraction(int _arg)\n\nInvert the volume fraction to extract the negative space. This is\nuseful for extracting a crater.\n"},
  {"GetInvertVolumeFraction", PyvtkMaterialInterfaceFilter_GetInvertVolumeFraction, METH_VARARGS,
   "V.GetInvertVolumeFraction() -> int\nC++: virtual int GetInvertVolumeFraction()\n\nInvert the volume fraction to extract the negative space. This is\nuseful for extracting a crater.\n"},
  {"GetMTime", PyvtkMaterialInterfaceFilter_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the mtime also considering the locator and clip function.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMaterialInterfaceFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkMaterialInterfaceFilter", // tp_name
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
  PyvtkMaterialInterfaceFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMaterialInterfaceFilter_StaticNew()
{
  return vtkMaterialInterfaceFilter::New();
}

PyObject *PyvtkMaterialInterfaceFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMaterialInterfaceFilter_Type, PyvtkMaterialInterfaceFilter_Methods,
    "vtkMaterialInterfaceFilter",
 &PyvtkMaterialInterfaceFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkMaterialInterfaceFilter_Type;

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

void PyVTKAddFile_vtkMaterialInterfaceFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMaterialInterfaceFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMaterialInterfaceFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

