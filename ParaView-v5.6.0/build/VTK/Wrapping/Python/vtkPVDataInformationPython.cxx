// python wrapper for vtkPVDataInformation
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
#include "vtkPVDataInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVDataInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVDataInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVInformation_ClassNew
extern "C" { PyObject *PyvtkPVInformation_ClassNew(); }
#define DECLARED_PyvtkPVInformation_ClassNew
#endif

static const char *PyvtkPVDataInformation_Doc =
  "vtkPVDataInformation - Light object for holding data information.\n\n"
  "Superclass: vtkPVInformation\n\n"
  "This object is a light weight object.  It has no user interface and\n"
  "does not necessarily last a long time.  It is meant to help collect\n"
  "information about data object and collections of data objects.  It\n"
  "has a PV in the class name because it should never be moved into VTK.\n\n"
  "@warning\n"
  "Get polygons only works for poly data and it does not work propelry\n"
  "for the triangle strips.\n\n";


static PyObject *
PyvtkPVDataInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVDataInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVDataInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVDataInformation *tempr = vtkPVDataInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVDataInformation::NewInstance());

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
PyvtkPVDataInformation_GetArrayInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkPVArrayInformation *tempr = (ap.IsBound() ?
      op->GetArrayInformation(temp0, temp1) :
      op->vtkPVDataInformation::GetArrayInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_SetPortNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPortNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

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
      op->vtkPVDataInformation::SetPortNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetPortNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPortNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPortNumber() :
      op->vtkPVDataInformation::GetPortNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

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
      op->vtkPVDataInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_AddInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

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
      op->vtkPVDataInformation::AddInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVDataInformation_AddInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  vtkPVInformation *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVInformation") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddInformation(temp0, temp1);
    }
    else
    {
      op->vtkPVDataInformation::AddInformation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVDataInformation_AddInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPVDataInformation_AddInformation_s1(self, args);
    case 2:
      return PyvtkPVDataInformation_AddInformation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddInformation");
  return nullptr;
}



static PyObject *
PyvtkPVDataInformation_CopyParametersToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParametersToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

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
      op->vtkPVDataInformation::CopyParametersToStream(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_CopyParametersFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParametersFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

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
      op->vtkPVDataInformation::CopyParametersFromStream(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkPVDataInformation::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetDataSetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataSetType() :
      op->vtkPVDataInformation::GetDataSetType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetCompositeDataSetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeDataSetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompositeDataSetType() :
      op->vtkPVDataInformation::GetCompositeDataSetType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetDataSetTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDataSetTypeAsString() :
      op->vtkPVDataInformation::GetDataSetTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_DataSetTypeIsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataSetTypeIsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->DataSetTypeIsA(temp0) :
      op->vtkPVDataInformation::DataSetTypeIsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkPVDataInformation::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkPVDataInformation::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetNumberOfRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfRows() :
      op->vtkPVDataInformation::GetNumberOfRows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetNumberOfTrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTrees");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfTrees() :
      op->vtkPVDataInformation::GetNumberOfTrees());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetNumberOfVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfVertices() :
      op->vtkPVDataInformation::GetNumberOfVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetNumberOfLeaves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLeaves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfLeaves() :
      op->vtkPVDataInformation::GetNumberOfLeaves());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMemorySize() :
      op->vtkPVDataInformation::GetMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetPolygonCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygonCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPolygonCount() :
      op->vtkPVDataInformation::GetPolygonCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetNumberOfDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDataSets() :
      op->vtkPVDataInformation::GetNumberOfDataSets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPVDataInformation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfElements(temp0) :
      op->vtkPVDataInformation::GetNumberOfElements(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetPrettyDataTypeString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrettyDataTypeString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPrettyDataTypeString() :
      op->vtkPVDataInformation::GetPrettyDataTypeString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkPVDataInformation::GetExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetPointArrayInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVArrayInformation *tempr = (ap.IsBound() ?
      op->GetPointArrayInformation() :
      op->vtkPVDataInformation::GetPointArrayInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetPointDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetPointDataInformation() :
      op->vtkPVDataInformation::GetPointDataInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetCellDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetCellDataInformation() :
      op->vtkPVDataInformation::GetCellDataInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetVertexDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetVertexDataInformation() :
      op->vtkPVDataInformation::GetVertexDataInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetEdgeDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetEdgeDataInformation() :
      op->vtkPVDataInformation::GetEdgeDataInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetRowDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRowDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetRowDataInformation() :
      op->vtkPVDataInformation::GetRowDataInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetFieldDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetFieldDataInformation() :
      op->vtkPVDataInformation::GetFieldDataInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetAttributeInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetAttributeInformation(temp0) :
      op->vtkPVDataInformation::GetAttributeInformation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetCompositeDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVCompositeDataInformation *tempr = (ap.IsBound() ?
      op->GetCompositeDataInformation() :
      op->vtkPVDataInformation::GetCompositeDataInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetDataInformationForCompositeIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataInformationForCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVDataInformation *tempr = (ap.IsBound() ?
      op->GetDataInformationForCompositeIndex(temp0) :
      op->vtkPVDataInformation::GetDataInformationForCompositeIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVDataInformation_GetDataInformationForCompositeIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataInformationForCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    vtkPVDataInformation *tempr = (ap.IsBound() ?
      op->GetDataInformationForCompositeIndex(temp0) :
      op->vtkPVDataInformation::GetDataInformationForCompositeIndex(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVDataInformation_GetDataInformationForCompositeIndex_Methods[] = {
  {nullptr, PyvtkPVDataInformation_GetDataInformationForCompositeIndex_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkPVDataInformation_GetDataInformationForCompositeIndex_s2, METH_VARARGS,
   "@P *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVDataInformation_GetDataInformationForCompositeIndex(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVDataInformation_GetDataInformationForCompositeIndex_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataInformationForCompositeIndex");
  return nullptr;
}



static PyObject *
PyvtkPVDataInformation_GetNumberOfBlockLeafs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlockLeafs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfBlockLeafs(temp0) :
      op->vtkPVDataInformation::GetNumberOfBlockLeafs(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetDataClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDataClassName() :
      op->vtkPVDataInformation::GetDataClassName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetCompositeDataClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeDataClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCompositeDataClassName() :
      op->vtkPVDataInformation::GetCompositeDataClassName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetTimeSpan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeSpan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTimeSpan() :
      op->vtkPVDataInformation::GetTimeSpan());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetHasTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHasTime() :
      op->vtkPVDataInformation::GetHasTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTime() :
      op->vtkPVDataInformation::GetTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkPVDataInformation::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetTimeLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTimeLabel() :
      op->vtkPVDataInformation::GetTimeLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_IsDataStructured(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDataStructured");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsDataStructured() :
      op->vtkPVDataInformation::IsDataStructured());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetCompositeDataSetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeDataSetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCompositeDataSetName() :
      op->vtkPVDataInformation::GetCompositeDataSetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataInformation_RegisterHelper(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RegisterHelper");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkPVDataInformation::RegisterHelper(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVDataInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVDataInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVDataInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVDataInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVDataInformation\nC++: static vtkPVDataInformation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVDataInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVDataInformation\nC++: vtkPVDataInformation *NewInstance()\n\n"},
  {"GetArrayInformation", PyvtkPVDataInformation_GetArrayInformation, METH_VARARGS,
   "V.GetArrayInformation(string, int) -> vtkPVArrayInformation\nC++: vtkPVArrayInformation *GetArrayInformation(\n    const char *arrayname, int fieldAssociation)\n\nMethod to find and return attribute array information for a\nparticular array for the given attribute type if one exists.\nReturns NULL if none is found.fieldAssociation can be\nvtkDataObject::FIELD_ASSOCIATION_POINTS,\nvtkDataObject::FIELD_ASSOCIATION_CELLS etc. (use\nvtkDataObject::FIELD_ASSOCIATION_NONE for field data) (or\nvtkDataObject::POINT, vtkDataObject::CELL, vtkDataObject::FIELD).\n"},
  {"SetPortNumber", PyvtkPVDataInformation_SetPortNumber, METH_VARARGS,
   "V.SetPortNumber(int)\nC++: virtual void SetPortNumber(int _arg)\n\nPort number controls which output port the information is\ngathered from. This is the only parameter that can be set on  the\nclient-side before gathering the information.\n"},
  {"GetPortNumber", PyvtkPVDataInformation_GetPortNumber, METH_VARARGS,
   "V.GetPortNumber() -> int\nC++: virtual int GetPortNumber()\n\nPort number controls which output port the information is\ngathered from. This is the only parameter that can be set on  the\nclient-side before gathering the information.\n"},
  {"CopyFromObject", PyvtkPVDataInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: void CopyFromObject(vtkObject *) override;\n\nTransfer information about a single object into this object.\n"},
  {"AddInformation", PyvtkPVDataInformation_AddInformation, METH_VARARGS,
   "V.AddInformation(vtkPVInformation)\nC++: void AddInformation(vtkPVInformation *info) override;\nV.AddInformation(vtkPVInformation, int)\nC++: virtual void AddInformation(vtkPVInformation *,\n    int addingParts)\n\nMerge another information object. Calls AddInformation(info, 0).\n"},
  {"CopyParametersToStream", PyvtkPVDataInformation_CopyParametersToStream, METH_VARARGS,
   "V.CopyParametersToStream(vtkMultiProcessStream)\nC++: void CopyParametersToStream(vtkMultiProcessStream &)\n    override;\n\nSerialize/Deserialize the parameters that control how/what\ninformation is gathered. This are different from the ivars that\nconstitute the gathered information itself. For example,\nPortNumber on vtkPVDataInformation controls what output port the\ndata-information is gathered from.\n"},
  {"CopyParametersFromStream", PyvtkPVDataInformation_CopyParametersFromStream, METH_VARARGS,
   "V.CopyParametersFromStream(vtkMultiProcessStream)\nC++: void CopyParametersFromStream(vtkMultiProcessStream &)\n    override;\n\nSerialize/Deserialize the parameters that control how/what\ninformation is gathered. This are different from the ivars that\nconstitute the gathered information itself. For example,\nPortNumber on vtkPVDataInformation controls what output port the\ndata-information is gathered from.\n"},
  {"Initialize", PyvtkPVDataInformation_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nRemove all information.  The next add will be like a copy. I\nmight want to put this in the PVInformation superclass.\n"},
  {"GetDataSetType", PyvtkPVDataInformation_GetDataSetType, METH_VARARGS,
   "V.GetDataSetType() -> int\nC++: virtual int GetDataSetType()\n\nAccess to information.\n"},
  {"GetCompositeDataSetType", PyvtkPVDataInformation_GetCompositeDataSetType, METH_VARARGS,
   "V.GetCompositeDataSetType() -> int\nC++: virtual int GetCompositeDataSetType()\n\nAccess to information.\n"},
  {"GetDataSetTypeAsString", PyvtkPVDataInformation_GetDataSetTypeAsString, METH_VARARGS,
   "V.GetDataSetTypeAsString() -> string\nC++: const char *GetDataSetTypeAsString()\n\nAccess to information.\n"},
  {"DataSetTypeIsA", PyvtkPVDataInformation_DataSetTypeIsA, METH_VARARGS,
   "V.DataSetTypeIsA(string) -> int\nC++: int DataSetTypeIsA(const char *type)\n\nAccess to information.\n"},
  {"GetNumberOfPoints", PyvtkPVDataInformation_GetNumberOfPoints, METH_VARARGS,
   "V.GetNumberOfPoints() -> int\nC++: virtual vtkTypeInt64 GetNumberOfPoints()\n\nAccess to information.\n"},
  {"GetNumberOfCells", PyvtkPVDataInformation_GetNumberOfCells, METH_VARARGS,
   "V.GetNumberOfCells() -> int\nC++: virtual vtkTypeInt64 GetNumberOfCells()\n\nAccess to information.\n"},
  {"GetNumberOfRows", PyvtkPVDataInformation_GetNumberOfRows, METH_VARARGS,
   "V.GetNumberOfRows() -> int\nC++: virtual vtkTypeInt64 GetNumberOfRows()\n\nAccess to information.\n"},
  {"GetNumberOfTrees", PyvtkPVDataInformation_GetNumberOfTrees, METH_VARARGS,
   "V.GetNumberOfTrees() -> int\nC++: virtual vtkTypeInt64 GetNumberOfTrees()\n\nAccess to information.\n"},
  {"GetNumberOfVertices", PyvtkPVDataInformation_GetNumberOfVertices, METH_VARARGS,
   "V.GetNumberOfVertices() -> int\nC++: virtual vtkTypeInt64 GetNumberOfVertices()\n\nAccess to information.\n"},
  {"GetNumberOfLeaves", PyvtkPVDataInformation_GetNumberOfLeaves, METH_VARARGS,
   "V.GetNumberOfLeaves() -> int\nC++: virtual vtkTypeInt64 GetNumberOfLeaves()\n\nAccess to information.\n"},
  {"GetMemorySize", PyvtkPVDataInformation_GetMemorySize, METH_VARARGS,
   "V.GetMemorySize() -> int\nC++: virtual int GetMemorySize()\n\nAccess to information.\n"},
  {"GetPolygonCount", PyvtkPVDataInformation_GetPolygonCount, METH_VARARGS,
   "V.GetPolygonCount() -> int\nC++: virtual int GetPolygonCount()\n\nAccess to information.\n"},
  {"GetNumberOfDataSets", PyvtkPVDataInformation_GetNumberOfDataSets, METH_VARARGS,
   "V.GetNumberOfDataSets() -> int\nC++: virtual int GetNumberOfDataSets()\n\nAccess to information.\n"},
  {"GetBounds", PyvtkPVDataInformation_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\n"},
  {"GetNumberOfElements", PyvtkPVDataInformation_GetNumberOfElements, METH_VARARGS,
   "V.GetNumberOfElements(int) -> int\nC++: vtkTypeInt64 GetNumberOfElements(int type)\n\nReturns the number of elements of the given type where type can\nvtkDataObject::POINT, vtkDataObject::CELL, ... etc.\n"},
  {"GetPrettyDataTypeString", PyvtkPVDataInformation_GetPrettyDataTypeString, METH_VARARGS,
   "V.GetPrettyDataTypeString() -> string\nC++: const char *GetPrettyDataTypeString()\n\nReturns a string describing the datatype that can be directly\nshown in a user interface.\n"},
  {"GetExtent", PyvtkPVDataInformation_GetExtent, METH_VARARGS,
   "V.GetExtent() -> (int, int, int, int, int, int)\nC++: int *GetExtent()\n\n"},
  {"GetPointArrayInformation", PyvtkPVDataInformation_GetPointArrayInformation, METH_VARARGS,
   "V.GetPointArrayInformation() -> vtkPVArrayInformation\nC++: virtual vtkPVArrayInformation *GetPointArrayInformation()\n\nAccess to information about points. Only valid for subclasses of\nvtkPointSet.\n"},
  {"GetPointDataInformation", PyvtkPVDataInformation_GetPointDataInformation, METH_VARARGS,
   "V.GetPointDataInformation() -> vtkPVDataSetAttributesInformation\nC++: virtual vtkPVDataSetAttributesInformation *GetPointDataInformation(\n    )\n\nAccess to information about point/cell/vertex/edge/row data.\n"},
  {"GetCellDataInformation", PyvtkPVDataInformation_GetCellDataInformation, METH_VARARGS,
   "V.GetCellDataInformation() -> vtkPVDataSetAttributesInformation\nC++: virtual vtkPVDataSetAttributesInformation *GetCellDataInformation(\n    )\n\nAccess to information about point/cell/vertex/edge/row data.\n"},
  {"GetVertexDataInformation", PyvtkPVDataInformation_GetVertexDataInformation, METH_VARARGS,
   "V.GetVertexDataInformation() -> vtkPVDataSetAttributesInformation\nC++: virtual vtkPVDataSetAttributesInformation *GetVertexDataInformation(\n    )\n\nAccess to information about point/cell/vertex/edge/row data.\n"},
  {"GetEdgeDataInformation", PyvtkPVDataInformation_GetEdgeDataInformation, METH_VARARGS,
   "V.GetEdgeDataInformation() -> vtkPVDataSetAttributesInformation\nC++: virtual vtkPVDataSetAttributesInformation *GetEdgeDataInformation(\n    )\n\nAccess to information about point/cell/vertex/edge/row data.\n"},
  {"GetRowDataInformation", PyvtkPVDataInformation_GetRowDataInformation, METH_VARARGS,
   "V.GetRowDataInformation() -> vtkPVDataSetAttributesInformation\nC++: virtual vtkPVDataSetAttributesInformation *GetRowDataInformation(\n    )\n\nAccess to information about point/cell/vertex/edge/row data.\n"},
  {"GetFieldDataInformation", PyvtkPVDataInformation_GetFieldDataInformation, METH_VARARGS,
   "V.GetFieldDataInformation() -> vtkPVDataSetAttributesInformation\nC++: virtual vtkPVDataSetAttributesInformation *GetFieldDataInformation(\n    )\n\nAccesse to information about field data, if any.\n"},
  {"GetAttributeInformation", PyvtkPVDataInformation_GetAttributeInformation, METH_VARARGS,
   "V.GetAttributeInformation(int)\n    -> vtkPVDataSetAttributesInformation\nC++: vtkPVDataSetAttributesInformation *GetAttributeInformation(\n    int fieldAssociation)\n\nMethod to access vtkPVDataSetAttributesInformation using field\nassociation type.fieldAssociation can be\nvtkDataObject::FIELD_ASSOCIATION_POINTS,\nvtkDataObject::FIELD_ASSOCIATION_CELLS etc. (use\nvtkDataObject::FIELD_ASSOCIATION_NONE for field data).\n"},
  {"GetCompositeDataInformation", PyvtkPVDataInformation_GetCompositeDataInformation, METH_VARARGS,
   "V.GetCompositeDataInformation() -> vtkPVCompositeDataInformation\nC++: virtual vtkPVCompositeDataInformation *GetCompositeDataInformation(\n    )\n\nIf data is composite, this provides information specific to\ncomposite datasets.\n"},
  {"GetDataInformationForCompositeIndex", PyvtkPVDataInformation_GetDataInformationForCompositeIndex, METH_VARARGS,
   "V.GetDataInformationForCompositeIndex(int) -> vtkPVDataInformation\nC++: vtkPVDataInformation *GetDataInformationForCompositeIndex(\n    int index)\nV.GetDataInformationForCompositeIndex([int, ...])\n    -> vtkPVDataInformation\nC++: vtkPVDataInformation *GetDataInformationForCompositeIndex(\n    int *index)\n\nGiven the flat-index for a node in a composite dataset, this\nmethod returns the data information for the node, it available.\n"},
  {"GetNumberOfBlockLeafs", PyvtkPVDataInformation_GetNumberOfBlockLeafs, METH_VARARGS,
   "V.GetNumberOfBlockLeafs(bool) -> int\nC++: unsigned int GetNumberOfBlockLeafs(bool skipEmpty)\n\nCompute the number of block leaf from this information\nmultipieces are counted as single block. The boolean skipEmpty\nparameter allows to choose to count empty dataset are not Calling\nthis method with skipEmpty to false will correspond to the\nvtkBlockColors array in a multiblock.\n"},
  {"GetDataClassName", PyvtkPVDataInformation_GetDataClassName, METH_VARARGS,
   "V.GetDataClassName() -> string\nC++: virtual char *GetDataClassName()\n\nClassName of the data represented by information object.\n"},
  {"GetCompositeDataClassName", PyvtkPVDataInformation_GetCompositeDataClassName, METH_VARARGS,
   "V.GetCompositeDataClassName() -> string\nC++: virtual char *GetCompositeDataClassName()\n\nThe least common class name of composite dataset blocks\n"},
  {"GetTimeSpan", PyvtkPVDataInformation_GetTimeSpan, METH_VARARGS,
   "V.GetTimeSpan() -> (float, float)\nC++: double *GetTimeSpan()\n\n"},
  {"GetHasTime", PyvtkPVDataInformation_GetHasTime, METH_VARARGS,
   "V.GetHasTime() -> int\nC++: virtual int GetHasTime()\n\nReturns if the Time is set.\n"},
  {"GetTime", PyvtkPVDataInformation_GetTime, METH_VARARGS,
   "V.GetTime() -> float\nC++: virtual double GetTime()\n\nReturns the data time if, GetHasTime() return true.\n"},
  {"GetNumberOfTimeSteps", PyvtkPVDataInformation_GetNumberOfTimeSteps, METH_VARARGS,
   "V.GetNumberOfTimeSteps() -> int\nC++: virtual int GetNumberOfTimeSteps()\n\nReturns the number of time steps.\n"},
  {"GetTimeLabel", PyvtkPVDataInformation_GetTimeLabel, METH_VARARGS,
   "V.GetTimeLabel() -> string\nC++: virtual char *GetTimeLabel()\n\nReturns the label that should be used instead of \"Time\" if any.\n"},
  {"IsDataStructured", PyvtkPVDataInformation_IsDataStructured, METH_VARARGS,
   "V.IsDataStructured() -> int\nC++: int IsDataStructured()\n\nReturns if the data type is structured.\n"},
  {"GetCompositeDataSetName", PyvtkPVDataInformation_GetCompositeDataSetName, METH_VARARGS,
   "V.GetCompositeDataSetName() -> string\nC++: virtual char *GetCompositeDataSetName()\n\nIf this instance of vtkPVDataInformation summarizes a node in a\ncomposite-dataset, and if that node has been given a label in\nthat composite dataset (using vtkCompositeDataSet::NAME\nmeta-data), then this will return that name. Returns NULL if this\ninstance doesn't represent a node in a composite dataset or\ndoesn't have a label/name associated with it.\n"},
  {"RegisterHelper", PyvtkPVDataInformation_RegisterHelper, METH_VARARGS,
   "V.RegisterHelper(string, string)\nC++: static void RegisterHelper(const char *classname,\n    const char *helperclassname)\n\nAllows run time addition of information getters for new classes\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVDataInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVDataInformation", // tp_name
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
  PyvtkPVDataInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVDataInformation_StaticNew()
{
  return vtkPVDataInformation::New();
}

PyObject *PyvtkPVDataInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVDataInformation_Type, PyvtkPVDataInformation_Methods,
    "vtkPVDataInformation",
 &PyvtkPVDataInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVDataInformation_Type;

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

void PyVTKAddFile_vtkPVDataInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVDataInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVDataInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

