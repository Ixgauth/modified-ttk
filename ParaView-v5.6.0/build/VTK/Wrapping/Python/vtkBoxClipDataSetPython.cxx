// python wrapper for vtkBoxClipDataSet
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
#include "vtkCellArray.h"
#include "vtkPointData.h"
#include "vtkCellData.h"
#include "vtkBoxClipDataSet.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBoxClipDataSet(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBoxClipDataSet_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkBoxClipDataSet_Doc =
  "vtkBoxClipDataSet - clip an unstructured grid\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "Clipping means that is actually 'cuts' through the cells of the\n"
  "dataset, returning tetrahedral cells inside of the box. The output of\n"
  "this filter is an unstructured grid.\n\n"
  "This filter can be configured to compute a second output. The second\n"
  "output is the part of the cell that is clipped away. Set the\n"
  "GenerateClippedData boolean on if you wish to access this output\n"
  "data.\n\n"
  "The vtkBoxClipDataSet will triangulate all types of 3D cells (i.e,\n"
  "create tetrahedra). This is necessary to preserve compatibility\n"
  "across face neighbors.\n\n"
  "To use this filter,you can decide if you will be clipping with a box\n"
  "or a hexahedral box.\n"
  "1) Set orientation if(SetOrientation(0)): box (parallel with\n"
  "   coordinate axis) SetBoxClip(xmin,xmax,ymin,ymax,zmin,zmax)\n"
  "   if(SetOrientation(1)): hexahedral box (Default)\n"
  "   SetBoxClip(n[0],o[0],n[1],o[1],n[2],o[2],n[3],o[3],n[4],o[4],n[5],o\n"
  "   [5]) PlaneNormal[] normal of each plane PlanePoint[] point on the\n"
  "   plane\n"
  "2) Apply the GenerateClipScalarsOn()\n"
  "3) Execute clipping  Update();\n\n";


static PyObject *
PyvtkBoxClipDataSet_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBoxClipDataSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBoxClipDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBoxClipDataSet *tempr = vtkBoxClipDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBoxClipDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBoxClipDataSet::NewInstance());

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
PyvtkBoxClipDataSet_SetBoxClip_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoxClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetBoxClip(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkBoxClipDataSet::SetBoxClip(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoxClipDataSet_SetBoxClip_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoxClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(size2);
  double *temp2 = store2.Data();
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(size3);
  double *temp3 = store3.Data();
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(size4);
  double *temp4 = store4.Data();
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(size5);
  double *temp5 = store5.Data();
  size_t size6 = ap.GetArgSize(6);
  vtkPythonArgs::Array<double> store6(size6);
  double *temp6 = store6.Data();
  size_t size7 = ap.GetArgSize(7);
  vtkPythonArgs::Array<double> store7(size7);
  double *temp7 = store7.Data();
  size_t size8 = ap.GetArgSize(8);
  vtkPythonArgs::Array<double> store8(size8);
  double *temp8 = store8.Data();
  size_t size9 = ap.GetArgSize(9);
  vtkPythonArgs::Array<double> store9(size9);
  double *temp9 = store9.Data();
  size_t size10 = ap.GetArgSize(10);
  vtkPythonArgs::Array<double> store10(size10);
  double *temp10 = store10.Data();
  size_t size11 = ap.GetArgSize(11);
  vtkPythonArgs::Array<double> store11(size11);
  double *temp11 = store11.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(12) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetArray(temp7, size7) &&
      ap.GetArray(temp8, size8) &&
      ap.GetArray(temp9, size9) &&
      ap.GetArray(temp10, size10) &&
      ap.GetArray(temp11, size11))
  {
    if (ap.IsBound())
    {
      op->SetBoxClip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11);
    }
    else
    {
      op->vtkBoxClipDataSet::SetBoxClip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoxClipDataSet_SetBoxClip(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkBoxClipDataSet_SetBoxClip_s1(self, args);
    case 12:
      return PyvtkBoxClipDataSet_SetBoxClip_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBoxClip");
  return nullptr;
}



static PyObject *
PyvtkBoxClipDataSet_SetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

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
      op->vtkBoxClipDataSet::SetGenerateClipScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateClipScalars() :
      op->vtkBoxClipDataSet::GetGenerateClipScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GenerateClipScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClipScalarsOn();
    }
    else
    {
      op->vtkBoxClipDataSet::GenerateClipScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GenerateClipScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClipScalarsOff();
    }
    else
    {
      op->vtkBoxClipDataSet::GenerateClipScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_SetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

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
      op->vtkBoxClipDataSet::SetGenerateClippedOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateClippedOutput() :
      op->vtkBoxClipDataSet::GetGenerateClippedOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GenerateClippedOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClippedOutputOn();
    }
    else
    {
      op->vtkBoxClipDataSet::GenerateClippedOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GenerateClippedOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClippedOutputOff();
    }
    else
    {
      op->vtkBoxClipDataSet::GenerateClippedOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetClippedOutput() :
      op->vtkBoxClipDataSet::GetClippedOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetNumberOfOutputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOutputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfOutputs() :
      op->vtkBoxClipDataSet::GetNumberOfOutputs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

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
      op->vtkBoxClipDataSet::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkBoxClipDataSet::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLocator();
    }
    else
    {
      op->vtkBoxClipDataSet::CreateDefaultLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkBoxClipDataSet::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkBoxClipDataSet::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

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
      op->vtkBoxClipDataSet::SetOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_InterpolateEdge(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "InterpolateEdge");

  vtkDataSetAttributes *temp0 = nullptr;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkIdType temp3;
  double temp4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    vtkBoxClipDataSet::InterpolateEdge(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_MinEdgeF(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MinEdgeF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned int> store0(size0);
  unsigned int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<vtkIdType> store1(size1);
  vtkIdType *temp1 = store1.Data();
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned int> store2(2*size2);
  unsigned int *temp2 = store2.Data();
  unsigned int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->MinEdgeF(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBoxClipDataSet::MinEdgeF(temp0, temp1, temp2);
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
PyvtkBoxClipDataSet_PyramidToTetra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PyramidToTetra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<vtkIdType> store0(size0);
  vtkIdType *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<vtkIdType> store1(size1);
  vtkIdType *temp1 = store1.Data();
  vtkCellArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->PyramidToTetra(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBoxClipDataSet::PyramidToTetra(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_WedgeToTetra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WedgeToTetra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<vtkIdType> store0(size0);
  vtkIdType *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<vtkIdType> store1(size1);
  vtkIdType *temp1 = store1.Data();
  vtkCellArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->WedgeToTetra(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBoxClipDataSet::WedgeToTetra(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_CellGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(size2);
  vtkIdType *temp2 = store2.Data();
  vtkCellArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->CellGrid(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkBoxClipDataSet::CellGrid(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_CreateTetra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateTetra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<vtkIdType> store1(size1);
  vtkIdType *temp1 = store1.Data();
  vtkCellArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->CreateTetra(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBoxClipDataSet::CreateTetra(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = nullptr;
  vtkGenericCell *temp1 = nullptr;
  vtkIncrementalPointLocator *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkPointData *temp5 = nullptr;
  vtkCellData *temp6 = nullptr;
  vtkIdType temp7;
  vtkCellData *temp8 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
  {
    if (ap.IsBound())
    {
      op->ClipBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkBoxClipDataSet::ClipBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipHexahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipHexahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = nullptr;
  vtkGenericCell *temp1 = nullptr;
  vtkIncrementalPointLocator *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkPointData *temp5 = nullptr;
  vtkCellData *temp6 = nullptr;
  vtkIdType temp7;
  vtkCellData *temp8 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
  {
    if (ap.IsBound())
    {
      op->ClipHexahedron(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkBoxClipDataSet::ClipHexahedron(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipBox2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipBox2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = nullptr;
  vtkGenericCell *temp1 = nullptr;
  vtkIncrementalPointLocator *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkPointData *temp5 = nullptr;
  vtkCellData *temp6 = nullptr;
  vtkIdType temp7;
  vtkCellData *temp8 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
  {
    if (ap.IsBound())
    {
      op->ClipBox2D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkBoxClipDataSet::ClipBox2D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipHexahedron2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipHexahedron2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = nullptr;
  vtkGenericCell *temp1 = nullptr;
  vtkIncrementalPointLocator *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkPointData *temp5 = nullptr;
  vtkCellData *temp6 = nullptr;
  vtkIdType temp7;
  vtkCellData *temp8 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
  {
    if (ap.IsBound())
    {
      op->ClipHexahedron2D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkBoxClipDataSet::ClipHexahedron2D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipBox1D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipBox1D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = nullptr;
  vtkGenericCell *temp1 = nullptr;
  vtkIncrementalPointLocator *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkPointData *temp5 = nullptr;
  vtkCellData *temp6 = nullptr;
  vtkIdType temp7;
  vtkCellData *temp8 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
  {
    if (ap.IsBound())
    {
      op->ClipBox1D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkBoxClipDataSet::ClipBox1D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipHexahedron1D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipHexahedron1D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = nullptr;
  vtkGenericCell *temp1 = nullptr;
  vtkIncrementalPointLocator *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkPointData *temp5 = nullptr;
  vtkCellData *temp6 = nullptr;
  vtkIdType temp7;
  vtkCellData *temp8 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
  {
    if (ap.IsBound())
    {
      op->ClipHexahedron1D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkBoxClipDataSet::ClipHexahedron1D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipBox0D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipBox0D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkGenericCell *temp0 = nullptr;
  vtkIncrementalPointLocator *temp1 = nullptr;
  vtkCellArray *temp2 = nullptr;
  vtkPointData *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkCellData *temp5 = nullptr;
  vtkIdType temp6;
  vtkCellData *temp7 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetVTKObject(temp0, "vtkGenericCell") &&
      ap.GetVTKObject(temp1, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp2, "vtkCellArray") &&
      ap.GetVTKObject(temp3, "vtkPointData") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkCellData") &&
      ap.GetValue(temp6) &&
      ap.GetVTKObject(temp7, "vtkCellData"))
  {
    if (ap.IsBound())
    {
      op->ClipBox0D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkBoxClipDataSet::ClipBox0D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipHexahedron0D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipHexahedron0D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkGenericCell *temp0 = nullptr;
  vtkIncrementalPointLocator *temp1 = nullptr;
  vtkCellArray *temp2 = nullptr;
  vtkPointData *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkCellData *temp5 = nullptr;
  vtkIdType temp6;
  vtkCellData *temp7 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetVTKObject(temp0, "vtkGenericCell") &&
      ap.GetVTKObject(temp1, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp2, "vtkCellArray") &&
      ap.GetVTKObject(temp3, "vtkPointData") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkCellData") &&
      ap.GetValue(temp6) &&
      ap.GetVTKObject(temp7, "vtkCellData"))
  {
    if (ap.IsBound())
    {
      op->ClipHexahedron0D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkBoxClipDataSet::ClipHexahedron0D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBoxClipDataSet_Methods[] = {
  {"IsTypeOf", PyvtkBoxClipDataSet_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBoxClipDataSet_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBoxClipDataSet_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBoxClipDataSet\nC++: static vtkBoxClipDataSet *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBoxClipDataSet_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBoxClipDataSet\nC++: vtkBoxClipDataSet *NewInstance()\n\n"},
  {"SetBoxClip", PyvtkBoxClipDataSet_SetBoxClip, METH_VARARGS,
   "V.SetBoxClip(float, float, float, float, float, float)\nC++: void SetBoxClip(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\nV.SetBoxClip((float, ...), (float, ...), (float, ...), (float,\n    ...), (float, ...), (float, ...), (float, ...), (float, ...),\n    (float, ...), (float, ...), (float, ...), (float, ...))\nC++: void SetBoxClip(const double *n0, const double *o0,\n    const double *n1, const double *o1, const double *n2,\n    const double *o2, const double *n3, const double *o3,\n    const double *n4, const double *o4, const double *n5,\n    const double *o5)\n\nSpecify the Box with which to perform the clipping. If the box is\nnot parallel to axis, you need to especify normal vector of each\nplane and a point on the plane.\n"},
  {"SetGenerateClipScalars", PyvtkBoxClipDataSet_SetGenerateClipScalars, METH_VARARGS,
   "V.SetGenerateClipScalars(int)\nC++: virtual void SetGenerateClipScalars(vtkTypeBool _arg)\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated, and not the input scalar data.\n"},
  {"GetGenerateClipScalars", PyvtkBoxClipDataSet_GetGenerateClipScalars, METH_VARARGS,
   "V.GetGenerateClipScalars() -> int\nC++: virtual vtkTypeBool GetGenerateClipScalars()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated, and not the input scalar data.\n"},
  {"GenerateClipScalarsOn", PyvtkBoxClipDataSet_GenerateClipScalarsOn, METH_VARARGS,
   "V.GenerateClipScalarsOn()\nC++: virtual void GenerateClipScalarsOn()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated, and not the input scalar data.\n"},
  {"GenerateClipScalarsOff", PyvtkBoxClipDataSet_GenerateClipScalarsOff, METH_VARARGS,
   "V.GenerateClipScalarsOff()\nC++: virtual void GenerateClipScalarsOff()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated, and not the input scalar data.\n"},
  {"SetGenerateClippedOutput", PyvtkBoxClipDataSet_SetGenerateClippedOutput, METH_VARARGS,
   "V.SetGenerateClippedOutput(int)\nC++: virtual void SetGenerateClippedOutput(vtkTypeBool _arg)\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {"GetGenerateClippedOutput", PyvtkBoxClipDataSet_GetGenerateClippedOutput, METH_VARARGS,
   "V.GetGenerateClippedOutput() -> int\nC++: virtual vtkTypeBool GetGenerateClippedOutput()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {"GenerateClippedOutputOn", PyvtkBoxClipDataSet_GenerateClippedOutputOn, METH_VARARGS,
   "V.GenerateClippedOutputOn()\nC++: virtual void GenerateClippedOutputOn()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {"GenerateClippedOutputOff", PyvtkBoxClipDataSet_GenerateClippedOutputOff, METH_VARARGS,
   "V.GenerateClippedOutputOff()\nC++: virtual void GenerateClippedOutputOff()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {"GetClippedOutput", PyvtkBoxClipDataSet_GetClippedOutput, METH_VARARGS,
   "V.GetClippedOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetClippedOutput()\n\nReturn the Clipped output.\n"},
  {"GetNumberOfOutputs", PyvtkBoxClipDataSet_GetNumberOfOutputs, METH_VARARGS,
   "V.GetNumberOfOutputs() -> int\nC++: virtual int GetNumberOfOutputs()\n\nReturn the Clipped output.\n"},
  {"SetLocator", PyvtkBoxClipDataSet_SetLocator, METH_VARARGS,
   "V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {"GetLocator", PyvtkBoxClipDataSet_GetLocator, METH_VARARGS,
   "V.GetLocator() -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {"CreateDefaultLocator", PyvtkBoxClipDataSet_CreateDefaultLocator, METH_VARARGS,
   "V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to merge coincident points.\n"},
  {"GetMTime", PyvtkBoxClipDataSet_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the mtime also considering the locator.\n"},
  {"GetOrientation", PyvtkBoxClipDataSet_GetOrientation, METH_VARARGS,
   "V.GetOrientation() -> int\nC++: virtual unsigned int GetOrientation()\n\nTells if clipping happens with a box parallel with coordinate\naxis (0) or with an hexahedral box (1). Initial value is 1.\n"},
  {"SetOrientation", PyvtkBoxClipDataSet_SetOrientation, METH_VARARGS,
   "V.SetOrientation(int)\nC++: virtual void SetOrientation(unsigned int _arg)\n\nTells if clipping happens with a box parallel with coordinate\naxis (0) or with an hexahedral box (1). Initial value is 1.\n"},
  {"InterpolateEdge", PyvtkBoxClipDataSet_InterpolateEdge, METH_VARARGS,
   "V.InterpolateEdge(vtkDataSetAttributes, int, int, int, float)\nC++: static void InterpolateEdge(vtkDataSetAttributes *attributes,\n     vtkIdType toId, vtkIdType fromId1, vtkIdType fromId2,\n    double t)\n\n"},
  {"MinEdgeF", PyvtkBoxClipDataSet_MinEdgeF, METH_VARARGS,
   "V.MinEdgeF((int, ...), (int, ...), [int, ...])\nC++: void MinEdgeF(const unsigned int *id_v,\n    const vtkIdType *cellIds, unsigned int *edgF)\n\n"},
  {"PyramidToTetra", PyvtkBoxClipDataSet_PyramidToTetra, METH_VARARGS,
   "V.PyramidToTetra((int, ...), (int, ...), vtkCellArray)\nC++: void PyramidToTetra(const vtkIdType *pyramId,\n    const vtkIdType *cellIds, vtkCellArray *newCellArray)\n\n"},
  {"WedgeToTetra", PyvtkBoxClipDataSet_WedgeToTetra, METH_VARARGS,
   "V.WedgeToTetra((int, ...), (int, ...), vtkCellArray)\nC++: void WedgeToTetra(const vtkIdType *wedgeId,\n    const vtkIdType *cellIds, vtkCellArray *newCellArray)\n\n"},
  {"CellGrid", PyvtkBoxClipDataSet_CellGrid, METH_VARARGS,
   "V.CellGrid(int, int, (int, ...), vtkCellArray)\nC++: void CellGrid(vtkIdType typeobj, vtkIdType npts,\n    const vtkIdType *cellIds, vtkCellArray *newCellArray)\n\n"},
  {"CreateTetra", PyvtkBoxClipDataSet_CreateTetra, METH_VARARGS,
   "V.CreateTetra(int, (int, ...), vtkCellArray)\nC++: void CreateTetra(vtkIdType npts, const vtkIdType *cellIds,\n    vtkCellArray *newCellArray)\n\n"},
  {"ClipBox", PyvtkBoxClipDataSet_ClipBox, METH_VARARGS,
   "V.ClipBox(vtkPoints, vtkGenericCell, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData)\nC++: void ClipBox(vtkPoints *newPoints, vtkGenericCell *cell,\n    vtkIncrementalPointLocator *locator, vtkCellArray *tets,\n    vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD,\n    vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {"ClipHexahedron", PyvtkBoxClipDataSet_ClipHexahedron, METH_VARARGS,
   "V.ClipHexahedron(vtkPoints, vtkGenericCell,\n    vtkIncrementalPointLocator, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: void ClipHexahedron(vtkPoints *newPoints,\n    vtkGenericCell *cell, vtkIncrementalPointLocator *locator,\n    vtkCellArray *tets, vtkPointData *inPD, vtkPointData *outPD,\n    vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {"ClipBox2D", PyvtkBoxClipDataSet_ClipBox2D, METH_VARARGS,
   "V.ClipBox2D(vtkPoints, vtkGenericCell, vtkIncrementalPointLocator,\n     vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData)\nC++: void ClipBox2D(vtkPoints *newPoints, vtkGenericCell *cell,\n    vtkIncrementalPointLocator *locator, vtkCellArray *tets,\n    vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD,\n    vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {"ClipHexahedron2D", PyvtkBoxClipDataSet_ClipHexahedron2D, METH_VARARGS,
   "V.ClipHexahedron2D(vtkPoints, vtkGenericCell,\n    vtkIncrementalPointLocator, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: void ClipHexahedron2D(vtkPoints *newPoints,\n    vtkGenericCell *cell, vtkIncrementalPointLocator *locator,\n    vtkCellArray *tets, vtkPointData *inPD, vtkPointData *outPD,\n    vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {"ClipBox1D", PyvtkBoxClipDataSet_ClipBox1D, METH_VARARGS,
   "V.ClipBox1D(vtkPoints, vtkGenericCell, vtkIncrementalPointLocator,\n     vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData)\nC++: void ClipBox1D(vtkPoints *newPoints, vtkGenericCell *cell,\n    vtkIncrementalPointLocator *locator, vtkCellArray *lines,\n    vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD,\n    vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {"ClipHexahedron1D", PyvtkBoxClipDataSet_ClipHexahedron1D, METH_VARARGS,
   "V.ClipHexahedron1D(vtkPoints, vtkGenericCell,\n    vtkIncrementalPointLocator, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: void ClipHexahedron1D(vtkPoints *newPoints,\n    vtkGenericCell *cell, vtkIncrementalPointLocator *locator,\n    vtkCellArray *lines, vtkPointData *inPD, vtkPointData *outPD,\n    vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {"ClipBox0D", PyvtkBoxClipDataSet_ClipBox0D, METH_VARARGS,
   "V.ClipBox0D(vtkGenericCell, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData)\nC++: void ClipBox0D(vtkGenericCell *cell,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD,\n    vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {"ClipHexahedron0D", PyvtkBoxClipDataSet_ClipHexahedron0D, METH_VARARGS,
   "V.ClipHexahedron0D(vtkGenericCell, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData)\nC++: void ClipHexahedron0D(vtkGenericCell *cell,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD,\n    vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBoxClipDataSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkBoxClipDataSet", // tp_name
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
  PyvtkBoxClipDataSet_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBoxClipDataSet_StaticNew()
{
  return vtkBoxClipDataSet::New();
}

PyObject *PyvtkBoxClipDataSet_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBoxClipDataSet_Type, PyvtkBoxClipDataSet_Methods,
    "vtkBoxClipDataSet",
 &PyvtkBoxClipDataSet_StaticNew);

  PyTypeObject *pytype = &PyvtkBoxClipDataSet_Type;

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

void PyVTKAddFile_vtkBoxClipDataSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBoxClipDataSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBoxClipDataSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

